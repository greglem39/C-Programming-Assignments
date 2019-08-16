//This program will return results for inner and inner-reverse products

#include <stdio.h>


int inner_product(int a[], int b[], int i);
int inner_product_reverse(int a[], int b[], int i);

#define N 10

int main(void)
{

  int a[N],  b[N]; //arrays  for days

  int i; //declaring i as a placeholder for loops

  printf("Please input ten numbers:\n"); //prompt for array1
 
  for (i = 0; i < 10; i++) //scan in array1
    {
      scanf("%d", &a[i]);
    }

  printf("Please input ten more numbers:\n"); //prompt for array2

  for (i = 0; i < 10; i++) //scan in array2
    {
      scanf("%d", &b[i]);
      }


  inner_product(a, b, i); //calling inner_product

  inner_product_reverse(a, b, i); //call inner_product_reverse

  return 0;

}

int inner_product(int a[], int b[], int i)
{

  int inner_result =  0; //variable for the result
  for (i = 0; i < 10; i++)
   {
      inner_result += (a[i] * b[i]);
   }
  printf("Inner Result: %d\n", inner_result);

  return inner_result; //return

}


int inner_product_reverse(int a[], int b[], int i)
{

  int inner_reverse_result = 0; //variable for the result
  int j=9;

  for (i = 0; i < 10; i++)
    {;
	  inner_reverse_result += a[i] * b[j];
	  j--; //decrimenting at the same time as i otherwise we get a very unfortunate situation with things not going
    }

  printf("Inner Reverse Result: %d\n", inner_reverse_result);

  return inner_reverse_result;

}
