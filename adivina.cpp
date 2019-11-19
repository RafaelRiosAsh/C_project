#include <iostream>
#include <cstdlib>
#include <ctime>
/**
 * @author Rafael Rios
 *
 * basic class to demonstrate how random works in the language.
 * this class includes the functions print and printl design to simplify printing in c++
 * and an input class to simplify the input
 */

/* two functions to simplify printing, "print" creates a new line after printing, printl just calls flush
 * input is
*/

/* this functions have a type T and a type F both defined by the parameter that is entered,
 * the function prints the first parameter and then it unpacks the ..f parameter which can
 * contain infinite parameters of different types
 */
template < typename T, typename ...F > void print(T t, F ...f) {
    std::cout << t;
    (std::cout << ... << f) << std::endl;
}
template < typename T, typename ...F > void printl(T t, F ...f) {
    std::cout << t;
    (std::cout << ... << f) << std::flush;
}
/*
 * this function has a type T defined by the parameter that is entered,
 * it gets the input from the user using cin and returns the value in the type the user specified
 */
template <typename T> T input (T t){
    T ans;
    std::cin >> ans;
    return ans;
}

/**
 * this function creates a random number and then gives the user an n number of attempts to guess it,
 * if guessed correctly the function ends and returns void, else it reduces the number of attempts until
 * there are no more attempts left, then it ends and returns void
 *
 * this parameter is used to know how many attempts the user will have to guess the number
 * @param attempts
 */
void guessGame(int attempts){
    srand((int)time(0));
    //this line creates a random number from 0-10 and saves it to the randNumber variable
    int randNumber = (rand()%10);
    //for loop that iterates from 0 - the number of attempts entered, in this case 5
    for (int i =0; i <= attempts; i++){
        print("You have ", attempts-i, " attempts");
        print("guess a number between 0 and 10");
        //you have to put the variable inside the input parameters so that the function can know what type to return
        int usrInput = input(usrInput);
        if (usrInput == randNumber){
            print("You guessed!!!");
            break;
        } else{
            print("you failed :(");
            if (usrInput < randNumber){
                print("the number you chose is smaller than the one you're looking for");
            } else{
                print("the number you chouse is bigger than the one you're looking for");
            }
        }
    }
}
/*
int main(){
    guessGame(5);
    return 0;
}*/