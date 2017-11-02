#include <cstdlib>
#include <tuple>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include "ros/ros.h"
#include "mouse_reader/Mouse.h"
#include <time.h>


// Mouse opening and data reading implemented from 
// https://stackoverflow.com/questions/11451618/how-do-you-read-the-mouse-button-state-from-dev-input-mice
// Author: JustinB

int main(int argc, char** argv)
{
    ros::init(argc, argv, "mouse_reader");
    ros::NodeHandle n;
    
    ros::Publisher mouse_pub = n.advertise<mouse_reader::Mouse>("mouse_msg",1000);
    ros::Rate loop_rate(10);
    
    int fd, bytes;
    unsigned char data[3];
    int8_t pos[5] = {0,0,0,0,0};

    const char *pDevice = "/dev/input/mouse0";

    // Open Mouse
    fd = open(pDevice, O_RDWR);
    if(fd == -1)
    {
        printf("ERROR Opening %s\n", pDevice);
        return -1;
    }

    int left, middle, right, x_sum, y_sum;
    signed char x, y;
    
    x_sum = 0;
    y_sum = 0;
    
    while(ros::ok())
    {
        // Read Mouse     
        bytes = read(fd, data, sizeof(data));

        if(bytes > 0)
        {
            left = data[0] & 0x1;
            right = data[0] & 0x2;
            middle = data[0] & 0x4;

            x = data[1];
            y = data[2];

	    pos[0] = x;
	    pos[1] = y;
	    pos[2] = left;
	    pos[3] = middle;
	    pos[4] = right;
	    //printf("x=%d, y=%d, left=%d, middle=%d, right=%d\n", pos[0], pos[1], pos[2], pos[3], pos[4]);

        }
	mouse_reader::Mouse mouse_msg;
	
	x_sum = x_sum + x;
	y_sum = y_sum + y;
	    
	mouse_msg.x = x_sum/100.0;
	mouse_msg.y = y_sum/100.0;
	mouse_msg.left = left;
	mouse_msg.middle = middle;
	mouse_msg.right = right;
	
	mouse_pub.publish(mouse_msg);
	ros::spinOnce();
	loop_rate.sleep();
    }
    return 0; 
}