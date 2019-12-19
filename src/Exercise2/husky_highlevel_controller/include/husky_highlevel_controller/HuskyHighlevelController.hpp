#pragma once

#include <ros/ros.h>
#include "sensor_msgs/LaserScan.h"
#include "string"

namespace husky_highlevel_controller {

/*!
 * Class containing the Husky Highlevel Controller
 */
class HuskyHighlevelController {
public:
	/*!
	 * Constructor.
	 */
	HuskyHighlevelController(ros::NodeHandle& nodeHandle);

  void scanCallback(const sensor_msgs::LaserScan &scan_msg);
	/*!
	 * Destructor.
	 */
	virtual ~HuskyHighlevelController();

private:
	ros::NodeHandle nodeHandle_;
  ros::Subscriber scan_subscriber_;
  std::string scan_subscriber_topic;
  int scan_subscriber_queue_size;
};

} /* namespace */
