#include <ros/ros.h>
#include <turtlesim/Spawn.h>

int main(int argc , char **argv){


ros::init(argc, argv, "spawn_turtle");
ros::NodeHandle n;

ros::ServiceClient spawnClient = n.serviceClient<turtlesim::Spawn>("spawn");

turtlesim::Spawn::Request req;
turtlesim::Spawn::Response resp;

req.x = 2;
req.y = 3;
req.theta = M_PI / 2;
req.name = "Leo";
bool success = spawnClient.call(req,resp);



}