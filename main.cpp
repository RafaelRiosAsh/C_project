#include <iostream>

/**
 * C++ beginner program designed to learn about the project testing object oriented programming
 * @author Rafael Rios
 * @version 1.5 since 1.0
 */

bool contains(std::string list, char character){

    for (int i = 0; i < list.size(); i++){
        if (character == list.at(i)){
            return true;
        }
    }
    return false;
}

//block of functions to simplify printing to console to save time
static void print(std::string toPrint){
    std::cout<<toPrint<<std::endl;
}
static void print(std::string toPrint, std::string endBehaviour){
    std::cout<<toPrint<<endBehaviour<<std::flush;
}
static void print(int toPrint){
    std::cout<<toPrint<<std::endl;
}
static void print(int toPrint, std::string endBehaviour){
    std::cout<<toPrint<<endBehaviour<<std::flush;
}
static void print(float toPrint){
    std::cout<<toPrint<<std::endl;
}
static void print(float toPrint, std::string endBehaviour){
    std::cout<<toPrint<<endBehaviour<<std::flush;
}
static void print(char toPrint){
    std::cout<<toPrint<<std::endl;
}
static void print(char toPrint, std::string endBehaviour){
    std::cout<<toPrint<<endBehaviour<<std::flush;
}
//end of block of functions to simplify printing to console to save time


int main() {
    int age;
    std::string name;
    std::string lastName;

    std::cout<<"please enter your name"<<std::endl;
    std::cin>> name;
    std::cin>> lastName;

    std::cout<<"please enter your age"<<std::endl;
    std::cin>> age;

    std::cout<<"your name is "<<name<<" your last name is "<<lastName<<" your age is "<<age<<std::endl;

    bool hasWord = contains("Frogissima", 'a');

    if (hasWord){
        print("the word contains the character");
    }
    else {
        print("the word does not contain the character");
    }

    return 0;
}