#include "ros/ros.h"
#include "geometry_msgs/PointStamped.h"
#include "mouse_reader/Mouse.h"
#include <stdlib.h>
#include <time.h>

geometry_msgs::PointStamped point1;

void mouseCallback(const mouse_reader::Mouse msg)
{
  point1.point.x = msg.x;
  point1.point.y = msg.y;
  point1.point.z = 0.0;
  point1.header.frame_id="odom";
}

int main(int argc, char **argv){
  ros::init(argc, argv, "point_publisher");
  ros::NodeHandle n;

  ros::Subscriber mouse_sub = n.subscribe("mouse_msg", 1000, mouseCallback);
  ros::Publisher point_pub = n.advertise<geometry_msgs::PointStamped>("sensor_points",1000);
  ros::Rate loop_rate(10);
  
  
  int count = 0;
  while(ros::ok()){
    
    point_pub.publish(point1);
    ros::spinOnce();
    loop_rate.sleep();
    ++count;
  }
  
  ros::spin();

  return 0;
}