//
// Created by Nirup Nandish on 03/08/2024.
//
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int menu() {
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("5. Power\n");
    printf("6. Square Root\n");
    printf("7. Exit\n");

    int choice;
    printf("Enter your choice: ");
    scanf("%d", &choice);

    return choice;
}

float addCal(float a, float b) {
    return a+b;
}

float subtractCal(float a, float b) {
    return a-b;
}

float multiplyCal(float a, float b) {
    return a*b;
}

float divideCal(float a, float b) {
    return a/b;
}

float powerCal(float a, float b) {
    return pow(a, b);
}

float squareRootCal(float a) {
    return sqrt(a);
}

int main() {
    // Introduction
    printf("Welcome to the calculator\n");

    // Get first number
    printf("Enter first number: ");
    float a;
    scanf("%f", &a);

    // Get second number
    printf("Enter second number: ");
    float b;
    scanf("%f", &b);

    // Menu
    int choice = menu();
    float output = 0.0;
    if(choice == 1) {
        output = addCal(a, b);
    } else if(choice == 2) {
        output = subtractCal(a,b);
    } else if(choice == 3) {
        output = multiplyCal(a,b);
    } else if(choice == 4) {
        output = divideCal(a,b);
    } else if(choice == 5) {
        output = powerCal(a,b);
    } else if(choice == 6) {
        printf("output: %f\n",squareRootCal(a));
        output = squareRootCal(b);

    } else if(choice == 7) {
        return 0;
    } else {
        printf("Invalid choice\n");
        return 1;
    }

    printf("output: %f\n", output);
}
