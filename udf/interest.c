#include<stdio.h>

double interest(int P, int R, int N);
int main()
{
  int P, R, N;
 double I;

  printf("Enter a Prinicipal : ");
  scanf("%d", &P);

  printf("Enter a Rate of Interest : ");
  scanf("%d", &R);

  printf("Enter a number of Years: ");
  scanf("%d", &N);

  I = interest(P,R,N);

  printf("interest : %lf.\n\n\n", I);

  return 0;
}

double interest(int P, int R, int N)
{
  
  return ((double)P*R*N)/100;
}
