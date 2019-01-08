//Siddesh Bist
//LO5
//400072076
//Lab 1
//Q4

#include <stdio.h>
#include <stdlib.h>

/*
 *
 */
int main(void)
{
    float x; //x is initialized as a float

    printf("Please enter the students average: ");

    scanf("%f",&x);

    if (x>=90.0 && x<=100.0) //logical operator & used because both conditions have to be satisfied
    {
        printf("4");
    }
    else if (x>=80.0 && x<90.0) //float used in logic expression because user is inputting a float
    {
        printf("3");
    }
    else if (x>=70.0 && x<80.0)
    {
        printf("2");
    }
    else if (x>=60.0 && x<70.0)
    {
        printf("1");
    }
    else if (x>=0 && x<60.0)
    {
        printf("0");
    }
    else
    {
        printf("Invalid Input"); //if the value of x does not fall in any of the ranges then the user has input an invalid input
    }

    return 0;
}
