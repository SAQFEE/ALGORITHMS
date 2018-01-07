#include <stdio.h>
#include <stdlib.h>

int prime(int n)
{
  int q,y,m,z,a,flag;

  q = n - 1;

  for(int i = 0; i < n; i++)
    {
      m = q;
      y = 1;
      a = rand()%(q+1);
      z = a;

      while(m > 0)
	{
	  while((m % 2) == 0)
	    {
	      z = (z * z) %n ;
	      m = m / 2;
	    }

	  m = m - 1;
	  y = (y * z) % n;
	}
      if(y != 1)
	flag = 0;
      else
	flag = 1;
    }
  return flag;
}

int main()
{
  int n;

  printf("\n\t enter the number\n");
  scanf("%d", &n);

  if(prime(n) ==1)

    printf("\n number is prime");
  else

    printf("\n\t number is not prime");
}
      
	      
