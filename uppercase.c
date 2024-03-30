#include<stdio.h>
main()
{
    char character;
    printf("Enter a Character:");
    scanf("%c",&character);
    if (character=='A' || character=='B' || character=='C' || character=='D' || character=='E' || character=='F' || character=='G' ||character=='H' ||character=='I' ||character=='J' ||character=='K'||character=='L' ||character=='M' ||character=='N' ||character=='O' ||character=='P' ||character=='Q' ||character=='R' ||character=='S' ||character=='T' ||character=='U' ||character=='V' ||character=='W' ||character=='X' ||character=='Y' ||character=='Z' )
    {
     printf("It's a UPPERCASE",character);
    }
    else
    {
        printf("It's NOT");
    }
}

