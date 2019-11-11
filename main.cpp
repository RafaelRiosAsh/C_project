#include <iostream>
#include <cmath>
/**
 * C++ beginner program designed to learn about the project testing object oriented programming
 * @author Rafael Rios
 * @version 2.0 since 1.0
 */

//functions to simplify printing to console to save time
template < typename T, typename ...F > void print(T t, F ...f) {
    std::cout << t;
    (std::cout << ... << f) << std::endl;
}
template < typename T, typename ...F > void printl(T t, F ...f) {
    std::cout << t;
    (std::cout <<...<< f) << std::flush;
}
//end of functions to simplify printing to console to save time

//random test function that checks if a character is inside a string
static bool contains(std::string list, char character){

    for (int i = 0; i < list.size(); i++){
        if (character == list.at(i)){
            return true;
        }
    }
    return false;
}

//test function to make C++ look more like Java or python
template < typename T > std::string outdated (T t){
    std::string ans;
    printl(t);
    std::cin >> ans;
    return ans;
}

//second test to make c++ look more like java or python
// second test successful
template <typename T> T input (T t){
    T ans;
    std::cin >> ans;
    return ans;
}

float getBMI(float height, float weight){
    return weight / (pow(height,2));
}

std::string printBMI(float height, float weight){
    float bmi = getBMI(height, weight);
    if (bmi < 20){
        return"underweight";
    }
    else if (bmi < 25){
        return "normal";
    }
    else if (bmi < 30){
        return"overweight";
    }
    else{
        return "morbid overweight";
    }
}
//recursive test function
void recursive(int counter, int end){
    if (counter >= end){
        print(counter);
    }
    else{
        recursive(counter+1, end);
    }
}


int main() {
    float height, weight;
    std::cout << "please enter your height and weight" << std::endl;
    height = input(height);
    weight = input(weight);

    print(printBMI(height,weight));
    return 0;
}