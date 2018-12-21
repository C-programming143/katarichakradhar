#include<stdio.h>
#include<conio.h>
 void main()
{

 int n,s,rev=0,m;
 clrscr();
 printf("Enter n value:");
 scanf("%d",&n);
 m=n;
 while(n!=0)
 {
  s=n%10;
  n=n/10;
  rev=(rev*10)+s;

 }
 printf("%d\n",rev);
 if(rev==m)
 {
  printf("Given number is palindrom\n");
 }
 else
 {
  printf("not a palindrom");
 }



 getch();
}