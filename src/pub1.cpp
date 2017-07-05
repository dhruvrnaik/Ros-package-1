#include "ros/ros.h"
#include "geometry_msgs/Twist.h"
#include <sstream>
using namespace std;

ros::Publisher vel_pub;

//void move (double speed, double distance, bool isForward)

int main(int argc, char **argv)
{
	ros::init(argc, argv, "pub1");
	ros::NodeHandle n;

	vel_pub = n.advertise<geometry_msgs::Twist>("/turtle1/cmd_vel", 1000);

	geometry_msgs::Twist vel_msg;
	//ros::Rate rate(2);


//while(ros::ok() {}

//void move(double speed, double distance, bool isForward)

	//f(isForward)
	//	vel_msg.linear.x= abs(speed);
	//else
	//	vel_msg.linear.x = -abs(speed);
	vel_msg.linear.x = 5.0 ;
	vel_msg.linear.y = 0;
	vel_msg.linear.z = 0;
	vel_msg.angular.x = 0;
	vel_msg.angular.y = 0;
	vel_msg.angular.z = 2.0;

	vel_pub.publish(vel_msg);    

	//rate.sleep();

}

