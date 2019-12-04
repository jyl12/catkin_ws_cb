# CMake generated Testfile for 
# Source directory: /home/dell/catkin_ws_cb/src/husky/husky_control
# Build directory: /home/dell/catkin_ws_cb/build/husky_control
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_husky_control_roslaunch-check_launch "/home/dell/catkin_ws_cb/build/husky_control/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/home/dell/catkin_ws_cb/build/husky_control/test_results/husky_control/roslaunch-check_launch.xml" "--return-code" "/usr/bin/cmake -E make_directory /home/dell/catkin_ws_cb/build/husky_control/test_results/husky_control" "/opt/ros/melodic/share/roslaunch/cmake/../scripts/roslaunch-check -o '/home/dell/catkin_ws_cb/build/husky_control/test_results/husky_control/roslaunch-check_launch.xml' '/home/dell/catkin_ws_cb/src/husky/husky_control/launch' ")
subdirs("gtest")
