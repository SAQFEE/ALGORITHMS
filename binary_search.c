#include <stdio.h>

void binary_search(int[],int,int);

void main()
{
  int arr[100],num;
  int i,n;

  printf("\n\t enter the number of elements");
  scanf("%d", &n);

  printf("\n enter array elements\n");

  for(i = 0; i < n; i++)
    {
      scanf("%d",&arr[i]);
    }
  printf("\n\t enter element to be search\n");
  scanf("%d", &num);

  binary_search(arr,n,num);
}

void binary_search(int arr[],int n,int num)
{
  int left,right,mid;

  left = 0;
  right = n-1;

  while(left <= right)
    {
      mid = (left + right)/2;

      if( num == arr[mid])
	break;
      if(num > arr[mid])
	
	  left = mid+1;
      else

	right = mid -1;
    }

  if(left > right)
    {
      printf("\n\t element not found !!!",num);
    }
  else
    printf("\n\t element is found at %d position ", num,mid+1);
}
	    
	  
