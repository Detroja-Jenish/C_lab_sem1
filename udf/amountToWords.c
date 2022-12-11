#include<stdio.h>
int convertAmtToWord(int n, int *p);
void printWord(int n, int p);
int main()
{
  int n;
  int count = 1;

  printf("Enter a number : ");
  scanf("%d", &n);

  convertAmtToWord(n, &count);

  return 0;
}

int convertAmtToWord(int n, int *p)
{
  if(n == 0)
  {
	return 0;
  }
  int count = *p;
  int d;
  if(count == 2)
  {
	d = n%10;
	n = n/10;
  }
  else if(n<100)
  {
	d = n;
	n = n/100;
  }
  else
  {
	d = n%100;
	n = n/100;
  }
  *p = *p + 1;
  convertAmtToWord(n,p);
  printWord(d,count);
  return 0;
}

void printWord(int n, int p)
{
  if(n>=20 || n<10)
  {
	switch(n/10)
	{
	  case 2:
		printf("Twenty ");
		break;

	  case 3:
		printf("Thirty ");
		break;

	  case 4:
		printf("Forty ");
		break;

	  case 5:
		printf("Fifty ");
		break;

	  case 6:
		printf("Sixty ");
		break;

	  case 7:
		printf("Seventy ");
		break;

	  case 8:
		printf("Eighty ");
		break;

	  case 9:
		printf("Ninty ");
		break;
	}
	switch(n%10)
	{
	  case 1:
		printf("One ");
		break;
	  case 2:
		printf("Two ");
		break;
	  case 3:
		printf("Three ");
		break;
	  case 4:
		printf("Four ");
		break;
	  case 5:
		printf("Five ");
		break;
	  case 6:
		printf("Six ");
		break;
	  case 7:
		printf("Seven ");
		break;
	  case 8:
		printf("Eight ");
		break;
	  case 9:
		printf("Nine ");
		break;
	}
  }
  else
  {
	switch(n)
	{
	  case 10:
		printf("Ten ");
		break;
	  case 11:
		printf("Eleven ");
		break;
	  case 12:
		printf("Twelve ");
		break;
	  case 13:
		printf("Thirteen ");
		break;
	  case 14:
		printf("Fourteen ");
		break;
	  case 15:
		printf("Fiftenn ");
		break;
	  case 16:
		printf("Sixteen ");
		break;
	  case 17:
		printf("Seventeen ");
		break;
	  case 18:
		printf("Eighteen ");
		break;
	  case 19:
		printf("Nineteen ");
		break;
	}
  }
  if(n!=0)
  {
	switch(p)
	{
	  case 2:
		printf("Hundred ");
		break;
	  case 3:
		printf("Thousand ");
		break;
	  case 4:
		printf("Lac ");
		break;
	  case 5:
		printf("Corore ");
	}
  }
  p = p + 1;

}

