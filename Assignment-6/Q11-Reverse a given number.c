//11. Write a program to reverse a given number

int main()
{
    int n,r,rev=0;
    printf("Enter a number:\n");
    scanf("%d",&n);
    printf("Before(Reverse): %d\n",n);

 int i=0;

 /*   for(i=1;(n/10!=0); i++ )
    {
      n=n/10;
    }
     printf("%d",i);

  */

  while(n!=0)
  {
      r=n%10;
      rev=rev*10+r;
      n=n/10;
  }
  printf("%d",rev);

    getch();
    return 0;
}
