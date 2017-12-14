#include <ros/ros.h>
#include <visualization_msgs/Marker.h>

int main( int argc, char** argv )
{
  ros::init(argc, argv, "alcohol");
  ros::NodeHandle n;
  ros::Rate r(1);
  ros::Publisher marker_pub = n.advertise<visualization_msgs::Marker>("visualization_marker", 10);

  uint32_t shape = visualization_msgs::Marker::SPHERE;

  while (ros::ok())
  {
    visualization_msgs::Marker carbon, oxygen, hydrogen0, hydrogen1, hydrogen2, hydrogen3, connector0, connector1, connector2, connector3, connector4;
    carbon.header.frame_id = carbon.header.frame_id = oxygen.header.frame_id = hydrogen0.header.frame_id = hydrogen1.header.frame_id = hydrogen2.header.frame_id = hydrogen3.header.frame_id = connector0.header.frame_id = connector1.header.frame_id = connector2.header.frame_id = connector3.header.frame_id = connector4.header.frame_id ="/my_frame";
    carbon.header.stamp = carbon.header.stamp = oxygen.header.stamp = hydrogen0.header.stamp = hydrogen1.header.stamp = hydrogen2.header.stamp = hydrogen3.header.stamp = connector0.header.stamp = connector1.header.stamp = connector2.header.stamp = connector3.header.stamp = connector4.header.stamp = ros::Time::now();
// carbon
    carbon.ns = "methanol";
    carbon.id = 0;
    
    carbon.type = visualization_msgs::Marker::SPHERE;

    carbon.action = visualization_msgs::Marker::ADD;

    carbon.pose.position.x = 0;
    carbon.pose.position.y = 0;
    carbon.pose.position.z = 2;
    carbon.pose.orientation.x = 0.0;
    carbon.pose.orientation.y = 0.0;
    carbon.pose.orientation.z = 0.0;
    carbon.pose.orientation.w = 1.0;

    carbon.scale.x = 1.0;
    carbon.scale.y = 1.0;
    carbon.scale.z = 1.0;

    carbon.color.r = 0.0f;
    carbon.color.g = 0.0f;
    carbon.color.b = 0.0f;
    carbon.color.a = 1.0;  
    
//oxygen    
    oxygen.ns = "methanol";
    oxygen.id = 1;
    
    oxygen.type = visualization_msgs::Marker::SPHERE;

    oxygen.action = visualization_msgs::Marker::ADD;

    oxygen.pose.position.x = 1.5;
    oxygen.pose.position.y = 0;
    oxygen.pose.position.z = 2;
    oxygen.pose.orientation.x = 0.0;
    oxygen.pose.orientation.y = 0.0;
    oxygen.pose.orientation.z = 0.0;
    oxygen.pose.orientation.w = 1.0;

    oxygen.scale.x = 1.0;
    oxygen.scale.y = 1.0;
    oxygen.scale.z = 1.0;

    oxygen.color.r = 1.0f;
    oxygen.color.g = 0.0f;
    oxygen.color.b = 0.0f;
    oxygen.color.a = 1.0; 
    
//hydrogen0
    hydrogen0.ns = "methanol";
    hydrogen0.id = 2;
    
    hydrogen0.type = visualization_msgs::Marker::SPHERE;

    hydrogen0.action = visualization_msgs::Marker::ADD;

    hydrogen0.pose.position.x = 1.5;
    hydrogen0.pose.position.y = 0;
    hydrogen0.pose.position.z = 3;
    hydrogen0.pose.orientation.x = 0.0;
    hydrogen0.pose.orientation.y = 0.0;
    hydrogen0.pose.orientation.z = 0.0;
    hydrogen0.pose.orientation.w = 1.0;

    hydrogen0.scale.x = 0.5;
    hydrogen0.scale.y = 0.5;
    hydrogen0.scale.z = 0.5;

    hydrogen0.color.r = 1.0f;
    hydrogen0.color.g = 1.0f;
    hydrogen0.color.b = 1.0f;
    hydrogen0.color.a = 1.0;  
    
//hydrogen1
    hydrogen1.ns = "methanol";
    hydrogen1.id = 3;
    
    hydrogen1.type = visualization_msgs::Marker::SPHERE;

    hydrogen1.action = visualization_msgs::Marker::ADD;

    hydrogen1.pose.position.x = 0;
    hydrogen1.pose.position.y = 0;
    hydrogen1.pose.position.z = 1;
    hydrogen1.pose.orientation.x = 1.0;
    hydrogen1.pose.orientation.y = 0.0;
    hydrogen1.pose.orientation.z = 1.0;
    hydrogen1.pose.orientation.w = 1.0;

    hydrogen1.scale.x = 0.5;
    hydrogen1.scale.y = 0.5;
    hydrogen1.scale.z = 0.5;

    hydrogen1.color.r = 1.0f;
    hydrogen1.color.g = 1.0f;
    hydrogen1.color.b = 1.0f;
    hydrogen1.color.a = 1.0;  
    
//hydrogen2
    hydrogen2.ns = "methanol";
    hydrogen2.id = 4;
    
    hydrogen2.type = visualization_msgs::Marker::SPHERE;

    hydrogen2.action = visualization_msgs::Marker::ADD;

    hydrogen2.pose.position.x = -1;
    hydrogen2.pose.position.y = 0;
    hydrogen2.pose.position.z = 2;
    hydrogen2.pose.orientation.x = 0.0;
    hydrogen2.pose.orientation.y = 0.0;
    hydrogen2.pose.orientation.z = 0.0;
    hydrogen2.pose.orientation.w = 1.0;

    hydrogen2.scale.x = 0.5;
    hydrogen2.scale.y = 0.5;
    hydrogen2.scale.z = 0.5;

    hydrogen2.color.r = 1.0f;
    hydrogen2.color.g = 1.0f;
    hydrogen2.color.b = 1.0f;
    hydrogen2.color.a = 1.0; 
    
//hydrogen3
    hydrogen3.ns = "methanol";
    hydrogen3.id = 5;
    
    hydrogen3.type = visualization_msgs::Marker::SPHERE;

    hydrogen3.action = visualization_msgs::Marker::ADD;

    hydrogen3.pose.position.x = 0;
    hydrogen3.pose.position.y = 0;
    hydrogen3.pose.position.z = 3;
    hydrogen3.pose.orientation.x = 0.0;
    hydrogen3.pose.orientation.y = 0.0;
    hydrogen3.pose.orientation.z = 0.0;
    hydrogen3.pose.orientation.w = 1.0;

    hydrogen3.scale.x = 0.5;
    hydrogen3.scale.y = 0.5;
    hydrogen3.scale.z = 0.5;

    hydrogen3.color.r = 1.0f;
    hydrogen3.color.g = 1.0f;
    hydrogen3.color.b = 1.0f;
    hydrogen3.color.a = 1.0; 
    
    
//connector0
    connector0.ns = "methanol";
    connector0.id = 6;
    
    connector0.type = visualization_msgs::Marker::CYLINDER;

    connector0.action = visualization_msgs::Marker::ADD;

    connector0.pose.position.x = 1.5;
    connector0.pose.position.y = 0;
    connector0.pose.position.z = 2.5;
    connector0.pose.orientation.x = 0.0;
    connector0.pose.orientation.y = 0.0;
    connector0.pose.orientation.z = 0.0;
    connector0.pose.orientation.w = 1.0;

    connector0.scale.x = 0.1;
    connector0.scale.y = 0.1;
    connector0.scale.z = 0.5;

    connector0.color.r = 1.0f;
    connector0.color.g = 1.0f;
    connector0.color.b = 1.0f;
    connector0.color.a = 1.0;
    
    //connector1
    connector1.ns = "methanol";
    connector1.id = 7;
    
    connector1.type = visualization_msgs::Marker::CYLINDER;

    connector1.action = visualization_msgs::Marker::ADD;

    connector1.pose.position.x = 0;
    connector1.pose.position.y = 0;
    connector1.pose.position.z = 1.5;
    connector1.pose.orientation.x = 0.0;
    connector1.pose.orientation.y = 0.0;
    connector1.pose.orientation.z = 0.0;
    connector1.pose.orientation.w = 1.0;

    connector1.scale.x = 0.1;
    connector1.scale.y = 0.1;
    connector1.scale.z = 0.5;

    connector1.color.r = 1.0f;
    connector1.color.g = 1.0f;
    connector1.color.b = 1.0f;
    connector1.color.a = 1.0;
    
    //connector2
    connector2.ns = "methanol";
    connector2.id = 8;
    
    connector2.type = visualization_msgs::Marker::CYLINDER;

    connector2.action = visualization_msgs::Marker::ADD;

    connector2.pose.position.x = -0.5;
    connector2.pose.position.y = 0;
    connector2.pose.position.z = 2;
    connector2.pose.orientation.x = 0.0;
    connector2.pose.orientation.y = 1.0;
    connector2.pose.orientation.z = 0.0;
    connector2.pose.orientation.w = 1.0;

    connector2.scale.x = 0.1;
    connector2.scale.y = 0.1;
    connector2.scale.z = 0.5;

    connector2.color.r = 1.0f;
    connector2.color.g = 1.0f;
    connector2.color.b = 1.0f;
    connector2.color.a = 1.0;  
    
    //connector3
    connector3.ns = "methanol";
    connector3.id = 9;
    
    connector3.type = visualization_msgs::Marker::CYLINDER;

    connector3.action = visualization_msgs::Marker::ADD;

    connector3.pose.position.x = 0;
    connector3.pose.position.y = 0;
    connector3.pose.position.z = 2.5;
    connector3.pose.orientation.x = 0.0;
    connector3.pose.orientation.y = 0.0;
    connector3.pose.orientation.z = 0.0;
    connector3.pose.orientation.w = 1.0;

    connector3.scale.x = 0.1;
    connector3.scale.y = 0.1;
    connector3.scale.z = 0.5;

    connector3.color.r = 1.0f;
    connector3.color.g = 1.0f;
    connector3.color.b = 1.0f;
    connector3.color.a = 1.0;  
    
    //connector4
    connector4.ns = "methanol";
    connector4.id = 10;
    
    connector4.type = visualization_msgs::Marker::CYLINDER;

    connector4.action = visualization_msgs::Marker::ADD;

    connector4.pose.position.x = 0.7;
    connector4.pose.position.y = 0;
    connector4.pose.position.z = 2;
    connector4.pose.orientation.x = 1.0;
    connector4.pose.orientation.y = 0.0;
    connector4.pose.orientation.z = 1.0;
    connector4.pose.orientation.w = 0.0;

    connector4.scale.x = 0.2;
    connector4.scale.y = 0.2;
    connector4.scale.z = 0.7;

    connector4.color.r = 1.0f;
    connector4.color.g = 1.0f;
    connector4.color.b = 1.0f;
    connector4.color.a = 1.0;    
   

    // Publish the marker
    while (marker_pub.getNumSubscribers() < 1)
    {
      if (!ros::ok())
      {
        return 0;
      }
      ROS_WARN_ONCE("Please create a subscriber to the marker");
      sleep(1);
    }
    marker_pub.publish(carbon);
    marker_pub.publish(oxygen);
    marker_pub.publish(hydrogen0);
    marker_pub.publish(hydrogen1);
    marker_pub.publish(hydrogen2);
    marker_pub.publish(hydrogen3);
    marker_pub.publish(connector0);
    marker_pub.publish(connector1);
    marker_pub.publish(connector2);
    marker_pub.publish(connector3);
    marker_pub.publish(connector4);

    r.sleep();
  }
}
