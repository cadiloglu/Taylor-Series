#include <stdio.h>
int main (void)
{
    int continuity=1; //Continuity keeps it's value(1) to resume the program unless user enters character 'E' or 'e'
do
{
    double PI=3.14159, radian, factorial=1, power=1, power_minus1=1, sin=0, cos=0, result;
    char input; //For detecting if program will expect a new value or exit.
    int degree, n, i, j;

    scanf(" %c", &input); //User can enter 'D'/'d' to calculate sine and cosine of a degree or 'E'/'e' to exit program.

    switch(input)
    {
        case 'D':
        case 'd':
            scanf("%d %d", &degree, &n);
            radian=(PI*degree)/180; //Converting degree to radian.

            for (j=0 ; j<=n ; j++) //This part is used to calculate sine.
            {
            factorial=power=power_minus1=1;
            for(i=1 ; i<=(2*j+1) ; i++) //Calculates factorial.
            {
                factorial*=i;
            }
            for(i=1 ; i<=(2*j+1) ; i++) //Calculates power of radian.
            {
                power*=radian;
            }
            for(i=1 ; i<=j ; i++) // Calculates power of -1.
            {
                power_minus1*=-1;
            }
            result=power_minus1*power/factorial;
            sin+=result;
            }
            printf("%lf\n", sin);

            for (j=0 ; j<=n ; j++) //This part is used to calculate cosine.
            {
            factorial=power=power_minus1=1;
            for(i=1 ; i<=(2*j) ; i++) //Calculates factorial.
            {
                factorial*=i;
            }
            for(i=1 ; i<=(2*j) ; i++) //Calculates power of radian.
            {
                power*=radian;
            }
            for(i=1 ; i<=j ; i++) // Calculates power of -1.
            {
                power_minus1*=-1;
            }
            result=power_minus1*power/factorial;
            cos+=result;
            }
            printf("%lf\n", cos);
        break;

        case 'E':
        case 'e':
            continuity=0;
        break;
    }
}while(continuity);
return 0;
}
