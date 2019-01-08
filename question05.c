//Siddesh Bist
//LO5
//400072076
//Lab 1
//Q5

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    float sum = 0.0; //sum is initialized as a float to avoid integer division complications and get a more accurate value of pi with more decimal places
    printf("Please enter a positive integer: ");
    scanf("%d",&n);

    int i = 1;//initialize at 1 because the first term in the sequence is n=1

    while (i != (n+1)) //when i is greater than the number entered by 1 the while loop will stop because we only want loop to run for nth iteration
    {
        if((i % 2)==0) //find if the integer is even as even integers are divisible by 2
            {
            sum = sum - (4.0/((2*i)-1)); //at all the even terms in the series, the values are subtracted from the sum
            }
        else
            {
            sum = sum + (4.0/((2*i)-1));//at all the odd terms in the series, the values are added to the sum
            }

        i++; //i increments by 1 to reach stopping condition and exit the while loop
    }
    printf("The value of pi is %f \n", sum );
    return (0);
}
