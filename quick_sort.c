#include<stdio.h>


int partition(int[],int,int);

void quick_sort(int arr[],int lower,int upper)
{

  int p;

  if(lower < upper)
    {
      p = partition(arr,lower,upper);
      quick_sort(arr,lower,p-1);
      quick_sort(arr,p+1,upper);
    }
}

int partition(int arr[],int lower,int upper)
{
  int val = arr[lower];
  int down = lower + 1;
  int up = upper;
  int t;

  while(down <= up)
    {
      

      while(down <= up && arr[down] < val)
     
      down++;

  while(arr[up] > val)

    up--;
  if(down < up)
    {
      t = arr[down];
      arr[down] = arr[up];
      arr[up] = t;
    }
   }
arr[lower] = arr[up];
arr[up] = val;

return up;
}

int  main()
{

  int arr[20] = {0},i,n;

  printf("\n\t enter the number of elements\n");
  scanf("%d", &n);

  printf("\n\t enter the elements");

  for(i =0; i<n; i++)
    {
      scanf("%d",&arr[i]);
    }

  quick_sort(arr,0,n-1);

  printf("\n\t sorted array\n");

  for(i=0; i<n; i++)
    {
      printf("%d", arr[i]);
    }
  
}
