//Program to reverse any String without using any predefined function.
#include<stdio.h>
#define N 100
#define a string    /*use of Macros*/
void main()
{
    char string[N];
    int i,l=0,temp;             /*defining Variables*/
    puts("Enter the String");
    scanf("%[^\n]",string);    /*Takes whole String*/
    do
    {
        l++;
    }while(string[l]);

    for(i=0;i<l/2;i++)
    {
        /*Code for Swapping*/

        temp=a[i];
        a[i]=a[l-1-i];
        a[l-1-i]=temp;
    }
    for(i=0;i<N;i++)
        printf("%c",string[i]);

}
