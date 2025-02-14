#include <chrono>
#include <functional>
#include <memory>
#include <string>

#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist.hpp"

using namespace std::chrono_literals;

class HuskyController : public rclcpp::Node
{
	public:
	  HuskyController()
	  : Node("husky_controller"), count_(0)
          {
      	      publisher_ = this->create_publisher<geometry_msgs::msg::Twist>("/cmd_vel", 10);
	      timer_ = this->create_wall_timer(500ms, std::bind(&HuskyController::timer_callback, this));
	  }

	private:
	  void timer_callback()
	  {

		  auto msg = geometry_msgs::msg::Twist();
		  float lx,ly,lz,ax,ay,az;

		  long int input;
		  std::cin>>input;

		  RCLCPP_INFO(this->get_logger(), "Publishing: '%d'", input);
          }
	  rclcpp::TimerBase::SharedPtr timer_;
	  rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr publisher_;
	  size_t count_;
};

int main(int argc, char *argv[])
{
	rclcpp::init(argc, argv);
	rclcpp::spin(std::make_shared<HuskyController>());
	rclcpp::shutdown();
	return 0;
}
