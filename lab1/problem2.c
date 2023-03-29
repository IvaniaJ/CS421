#include<stdio.h>
#include<stdlib.h>

int main ()
{
  //Set array
  double arr[] = { 5.00, 8.00, 10.00, 13.00, 19.00};
  double sum = 0;
  

  //Array size
  int length = sizeof(arr)/sizeof(arr[0]);
  
  //Loop to calculate sum
  for (int i = 0; i < length; i++) {sum = sum + arr[i];
  }
  printf("The array is [5.00, 8.00, 10.00, 13.00, 19.00]."
  "The sum of the array is: %f", sum);

    return 0;
}