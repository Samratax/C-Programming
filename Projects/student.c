#include<stdio.h>

int main(){

    // Store personal information
    char initial = 'S';
    char name[] = "Samrat Gautam";
    int age = 16;
    float gpa = 3.41;
    char grade[] = "BCSIT first sem";
    int year = 2026;

    // Display personal information
    printf("My name is %s.\n", name);
    printf("My initial is %c.\n", initial);
    printf("I am %d years old.\n", age);
    printf("My gpa in 12 was %.2f.\n", gpa);
    printf("Now I am currently a %s.\n", grade);
    printf("I first sem of bachelor falls in %d.\n",year);
    printf("My goal is to learn C and frontend development by the end of my first semester.\n");
    return 0; 
}