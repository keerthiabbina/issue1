#include<stdio.h>
#include<string.h>
int main()
{
 char str[30];
 //char str1[50];
 char *ptr=str;
 char *rev=str1;
 int p=-1;
 printf("enter any string");
 scanf("%s",&str);
 while(*ptr){
 ptr++;
 p++;
 while(p>=0)
 ptr--;
 *rev=*ptr;
 rev++;
--p;
}
*str1='\0';
printf("reverse of string is:%s",str1);
return 0;
}
