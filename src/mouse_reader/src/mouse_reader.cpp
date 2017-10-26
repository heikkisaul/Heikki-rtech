#include <cstdlib>
#include <tuple>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
//#include "ros/ros.h"
//#include "mouse_reader/Mouse.h"
#include <time.h>


// Mouse opening and data reading implemented from 
// https://stackoverflow.com/questions/11451618/how-do-you-read-the-mouse-button-state-from-dev-input-mice
// Author: JustinB

int main(int argc, char** argv)
{
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

    int left, middle, right;
    signed char x, y;
    while(1)
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
	    printf("x=%d, y=%d, left=%d, middle=%d, right=%d\n", pos[0], pos[1], pos[2], pos[3], pos[4]);
        }   
    }
    return 0; 
}

/*int main(int argc, char** argv){  
  
  signed char x, y;
  int left, middle, right;
  while(1) {
    x = std::get<0>(mouse_event_reader());
    x = std::get<1>(mouse_event_reader());
    left = std::get<2>(mouse_event_reader());
    middle = std::get<3>(mouse_event_reader());
    right = std::get<4>(mouse_event_reader());
    printf("x=%d, y=%d, left=%d, middle=%d, right=%d\n", x, y, left, middle, right);
  }
}*/
