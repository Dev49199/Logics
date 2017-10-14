//Program to count number of characers excluding space in String
#include<stdio.h>
#include<stdlib.h>
#define N 10       /*Macros for extending the Length of the sentence*/
void main()
{
    char _arr[N];
    int i,len,c=0;
    puts("Enter the String");
    gets(_arr);
    for(i=0;_arr[i];i++);     /*count the characters including space*/
    for(len=0;len<i;len++)
    {
        if(_arr[len]==' ')      /*Count The Space*/
        {
            c++;
        }
    }
    printf("Number of Characters are %d",(i-c));
    getch();
}
