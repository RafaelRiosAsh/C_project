#include <iostream>
#include <cmath>
#include "Cprint.h"
/**
 * C++ beginner program designed to learn about the project testing object oriented programming
 * @author Rafael Rios
 * @version 2.5 since 1.0
 */
using namespace Cprint;

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

//BMI calculator example
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
int recursive(int counter, int end){
    if (counter >= end) {
        return counter;
    }
    else{
        print(counter);
        return recursive(counter+1, end);
    }
}

void recFib(int firstDigit, int secondDigit, int end){
    if (secondDigit >= end){
        return;
    }
    else {
        printl(secondDigit, " ");
        return recFib(secondDigit, secondDigit+firstDigit, end);
    }
}

int f(int n){
    if (n <= 1) {
        return n;
    }
    else {
        return n * f(n - 1);
    }
}

int main() {

    float height, weight;
    print("please enter your height and weight");
    height = input(height);
    weight = input(weight);

    print(printBMI(height,weight));
    //print(f(4));
    //print(recursive(0,10));
    print("please enter when you'd like the count to end");
    int end = input(end);
    recFib(0,1,end);
    return 0;
}