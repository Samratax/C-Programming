#include<stdio.h>
#include <stdbool.h>

int main(){
    // Working with int and float variable.
    int age = 16;
    float hight = 5.5;

    printf("My name is Samrat Gautam. I am %d years old. I am %.1fft tall\n", age, hight);

    // Working with double variable. 
    double pi = 3.1415926535879;

    printf("The value of pi is %d\n", pi);

    // Working with char variable.
    char name[] = "Samrat Gautam";
    char food[] = "Momo";
    char email[] = "samratgautamgg@gmail.com";

    printf("Hello %s\n",  name);
    printf("Your favorite food is %s\n", food);
    printf("Your Email is %s\n", email);

    // Working with bool 
    // bool variable need a header file named as <stdbool.h>
    bool isOnline = true;
    bool isStudent = true;
    bool forSale = false;

    if (isOnline)
    {
        printf("You are Online");
    }
    else{
        printf("You are Offline");
    }

    if (isStudent)
    {
       printf("You are a Student");
    }
    else{
        printf("You are not a Student");
    }
    

    if (forSale)
    {
        printf("That item is for sale");
    }
    else {
        printf("That item is not for sale");
    }
    

    return 0;
}