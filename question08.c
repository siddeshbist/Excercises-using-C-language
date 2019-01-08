//Siddesh Bist
//LO5
//400072076
//Lab 1
//Q8

#include <stdio.h>

int main()
{
   int n,rev = 0;//initialize variables as int. Chose int because when performing mod the answer is an integer and the final value outputted is a whole number with no decimals
                 // rev represents the reverse of the number
   printf("Enter a number to reverse:");
   scanf("%d", &n);

   while (n != 0)
   {
      rev = (rev*10) + n%10;//performing mod 10 on number user enters because mod 10 gives the last digit of the number
                            //multiplying rev by 10 because last digit will be a 0 and then can add that with the last digit of the number user entered and build upon the reverse number
      n   = n/10; //number gets divided by 10 for every iteration. When the quotient becomes zero the loop will stop running

   }
   printf("Reverse of entered number is = %d\n", rev);
   return 0;
}
