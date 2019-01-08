//Siddesh Bist
//LO5
//400072076
//Lab 1
//Q6

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int a,b,c; //a corresponds to side 1, b to side 2 and c to side 3
    int count=0;
    for(a=1;a<=400;a++) //side a has to be less than or equal to 400 and also start at 1
    {
        for(b=1;b<=400;b++) //side b starts at 1 and has to be no larger than 400
        {
            for(c=1;c<=400;c++) //side c starts at 1 and has to be no larger than 400
            {
                if (a<=b&&(a*a+ b*b==c*c))//the following condition must both be satisfied in order to be a Triplet
                {
                  printf("%d,%d,%d\n",a,b,c);
                  count+=1;// counter increases by 1 every time a triplet is formed
                }

            }
        }
    }
    printf("Total number of Triples: %d",count);
    return (0);
}
