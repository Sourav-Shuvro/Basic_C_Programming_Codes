#include<stdio.h>
main()
{
    char ch;
    printf("Enter a alphabet:");
    scanf("%c",&ch);
    if (ch=='a'|| ch=='b'|| ch=='c'|| ch=='d'|| ch=='e'|| ch=='f'|| ch=='g'|| ch=='h'|| ch=='i'|| ch=='j'|| ch=='k'|| ch=='l'|| ch=='m'|| ch=='n'|| ch=='o'|| ch=='p'|| ch=='q'|| ch=='r'|| ch=='s'|| ch=='t'|| ch=='u'|| ch=='v'|| ch=='w'|| ch=='x'|| ch=='y'|| ch=='z')
        printf("The upper case of the alphabet is %c",toupper(ch));
    else
        printf("The lower case of the alphabet is %c",tolower(ch));
}
