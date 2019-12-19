#include <ros/ros.h>
#include "husky_highlevel_controller/HuskyHighlevelController.hpp"
#include "husky_highlevel_controller/Scan2.hpp"


int main(int argc, char** argv){
  ros::init(argc, argv, "husky_highlevel_controller");
  ros::NodeHandle nodeHandle("~");
  husky_highlevel_controller::Scan2 scan2;
  husky_highlevel_controller::HuskyHighlevelController huskyHighlevelController(nodeHandle);
  ros::spin();
  return 0;
}
