#include <iostream>
/**
 * C++ beginner program designed to learn about the project testing object oriented programming
 * @author Rafael Rios
 * @version 1.0 since 1.0
 */

//TODO function does not work
bool contains(std::string list, char character){

    for (int i; i < list.size(); i++){
        if (character == list.at(i)){
            return true;
        }
    }
    return false;
}

//block of functions to simplify printing to console to save time

void print(std::string toPrint){
    std::cout<<toPrint<<std::endl;
}
void print(int toPrint){
    std::cout<<toPrint<<std::endl;
}
void print(float toPrint){
    std::cout<<toPrint<<std::endl;
}
void print(char toPrint){
    std::cout<<toPrint<<std::endl;
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

    //TODO function does not work
    bool hasWord = contains("Frogissima", 'a');

    if (hasWord){
        print("the word contains the character");
    }
    else {
        print("the word does not contain the character");
    }

    return 0;
}