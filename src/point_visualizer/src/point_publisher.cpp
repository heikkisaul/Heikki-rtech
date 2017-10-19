#include "ros/ros.h"
#include "geometry_msgs/PointStamped.h"
#include <stdlib.h>
#include <time.h>

int main(int argc, char **argv){
  ros::init(argc, argv, "point_publisher");
  ros::NodeHandle n;

  ros::Publisher point_pub = n.advertise<geometry_msgs::PointStamped>("sensor_points",1000);
  ros::Rate loop_rate(10);
  
  srand(time(NULL));

  int count = 0;
  while(ros::ok()){
    geometry_msgs::PointStamped point_msg;
    
    point_msg.header.frame_id="odom";
    
    point_msg.point.x = rand() % 5;
    point_msg.point.y = rand() % 5;
    point_msg.point.z = rand() % 5;
    
    point_pub.publish(point_msg);
    ros::spinOnce();
    loop_rate.sleep();
    ++count;
  }

  return 0;
}