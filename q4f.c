#include<stdio.h>
 
void swap(int a, int b);

void sortOddEven(int arr[], int numInArray)
{

  int ascending = 0, descending = numInArray -1;
  while(ascending < descending)
  {
  
     while(arr[ascending]%2 == 0 && ascending < descending)
        ascending++;
 
    
     while(arr[descending]%2 == 1 && ascending < descending)
        descending--;
 
     if(ascending < descending)
     {
      
       swap(&arr[ascending], &arr[descending]);
       ascending++;
       descending--;
     }
  }
}    
 

void swap(int a, int b)
{
  int temp = a;
  a = b;
  b = temp;
}     

int main()
{
  int numInArray;
  int arr[20];
  int i, x;

  printf("How many numbers in the array(fewer than 20)? ");
  scanf("%i", &numInArray);

   numInArray= numInArray-1;

  for(i=0; i<=numInArray; i++){
  printf("Enter a number: ");
  scanf("%i", &arr[i]);
  }
 
  sortOddEven(arr, numInArray);
 

  for(i = 0; i <= numInArray; i++)
    printf("%d ", arr[i]);

  printf("\n");
 
}

