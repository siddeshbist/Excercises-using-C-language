//Siddesh Bist
//LO5
//400072076
//Lab 1
//Q7

#include <stdio.h>

int main()
{
    int m,sum,i,j;
    printf("Enter a number and see all the perfect numbers below it: ");
    scanf("%d",&m); // m represents the amount of integers the codes is looking at
    for (i=1;i<=m;i++)//i represents the initial number in the range
    {
        sum=0;    //sum is initialized at 0
        for (j=1;j<i;j++)//j represents each factor of the initial number
        {
            if (i%j==0) //checks if the value of j is a factor of i
            {
               sum=sum+j; //adds up all the factors, j, of i
            }

        }

      if (sum==i)//checks if the sum of the factors is equal to the initial number
      {
          printf("%d\n",i); //prints every time a perfect number occurs
      }

    }
    return (0);
}
