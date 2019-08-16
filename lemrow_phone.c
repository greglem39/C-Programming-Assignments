//This is going to be my program for converting a phone number like 1-800-CAL-LATT to numerics

#include <stdio.h>

int main(void)
{

  char input; //this will be used to store my input

  printf("Please enter a phone number: "); //prompting the user to enter a phone number
  while ((input = getchar()) != '\n')
    switch(input) { //switch statement will run depending on the input value
       case 'A': case 'B': case 'C':
	 putchar('2');
	 break;
       case 'D': case 'E': case 'F':
	 putchar('3');
	 break;
       case 'G': case 'H': case 'I':
	 putchar('4');
	 break;
       case 'J': case 'K': case 'L':
	 putchar('5');
	 break;
       case 'M': case 'N': case 'O':
         putchar('6');
         break;
       case 'P': case 'Q': case 'R': case 'S':
	 putchar('7');
	 break;
       case 'T': case 'U': case 'V':
	 putchar('8');
	 break;
       case 'W': case 'X': case 'Y': case 'Z':
         putchar('9');
         break;
       default:
	 putchar(input);
	 break;
    }
  putchar('\n');

  return 0; //exit


}
