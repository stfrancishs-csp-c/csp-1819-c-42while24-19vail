#include <stdio.h>
int main(void)
{
    int sum=0;
    int k;

    k=0;
    sum=0;

    while (k<5)
    {
        sum= sum+k;
        k++;
        printf ("sum - %3d\n",sum);
    }



        for (k=10;k>0;k=k-1)
        printf ("%2d\n", k);

printf ("Blastoff!\n");

}

