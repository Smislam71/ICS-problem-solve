#include<stdio.h>
int main()
{
float num1;

printf("Enter a Digit");

scanf("%f",&num1);

if(num1>0)
{
    printf("Positive");
}

else if (num1<0)
{
    printf("Negative");
}

else printf("Invalid Keyword");


return 0;    
}