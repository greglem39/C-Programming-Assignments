//this program will perform a Caesarian shift
#include <stdio.h>
#include <string.h>


void encrypt(char *message, int shift); //initial declaration of encrypt

int main()
{

  char input[100]; //we are initializing this as the message variable
  char *message = input;
  int shift = 0; //and this will store the value of how much  we shift 

  printf("Enter a message to be encrypted:\n"); //prompt user to enter a message
  fgets(input, sizeof input, stdin); /*I was originally using gets(), but found that to be unsafe when I ran my program. 
				      So, I consulted a few online resources and found that fgets() was an acceptable alternative, as 
				    scanf() and utilizing loops was causing a few errors with input[].*/

  printf("\nEnter shift amount (1-25):\n"); //prompt  for shift amount

  scanf("%d", &shift);

  encrypt(message, shift);

  return 0;

}

void encrypt(char *message, int shift)
{

  char ch, caesar; //placeholder for my message

  for (int i = 0; i < strlen(message); i++) //this loop is going to run through my array  to shift the message
    {
      ch = message[i];

      if(ch >= 'a' && ch <= 'z')
	{
	  caesar = ((ch - 'a') + shift) % 26 + 'a';
	  message[i] = caesar;
	}
      else if(ch >= 'A' && ch <= 'Z')
	{
	  caesar = ((ch - 'A') + shift) % 26 + 'A';
	  message[i] = caesar;
	}
    }
  printf("Encrypted message: %s", message);
  printf("\n");
}
