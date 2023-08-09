#include<iostream>
#include<cstring>
using namespace std;
int main () {
    std::string full_name;//Empty string
    std::string planet {"Earth. Where the sky is blue "};
	std::string prefered_planet{planet};
    std::string message {"Hello there",5};	
    std::string weird_message(4,'e');//Initialize with multiple copies of a char contains eeee
    std::string greeting{"Hello World"};
    std::string saying_hello{ greeting,6,5};
	std::cout << "full_name : " << full_name << std::endl;
	std::cout << "planet : " << planet << std::endl;
	std::cout << "prefered_planet : " << prefered_planet << std::endl;
	std::cout << "message : " << message << std::endl;
	std::cout << "weird_message : " << weird_message << std::endl;
	std::cout << "greeting : " << greeting << std::endl;
	std::cout << "saying_hello : " << saying_hello << std::endl;

}