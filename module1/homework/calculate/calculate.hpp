#pragma once
#include <string>

std::string calculate(const std::string& command, int first, int second) {
    
	// TODO: Implement your solution here and return proper value

	std::string result;
    if (command == "add"){
    	result = std::to_string(first+second);
    } else if (command == "subtract"){
     	result = std::to_string(first-second);
    } else if (command == "multiply"){
   	result = std::to_string(first*second);
    } else if (command == "divide"){
	result = (second == 0 ? "Division by 0" : std::to_string(first/second));
    } else {
    	result = "Invalid data";
    }
    return result;
}
