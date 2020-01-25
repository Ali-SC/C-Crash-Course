#include <stdio.h>
/* Memory, addresses, and pointers
variable - stored at a particular address as 0 and 1s
pointer - contians the address of the Variable
*/

/* Data Types
Must define vairable before you use it and how long it will be
This is allocating memory and type

bit - unit of memory that holds 0/1
binary - sequence of 0/1 in base-2
decimal - sequence of 0-10 in base-10
hexadecimal - sequence of 0-10-A-F in base 16

byte - group of 8 bits
word - group of multiple bytes
nibble - group of 4 bytes of hex

char^3 - keyboard characters ( 1 byte)
int - numbers ( 4 bytes)
float - decimals
double - long decimals


char
ch = 'a'; and ch = 97 mean the samething
unsigned char ch1; can take value from 0 to 255
signed char ch1; can take value from -128 to 127

int i, *ip  // the *ip is not a variable.
ip becomes the pointer to something of type int
pointer - holds the address of a variable it "points" to
address and pointer are really in a way the samething in c

*/

int main (void){
  int i; float f; double d; char c;
  i = 32; f = 4.278; d = 4.278; c = 'k';

  printf("Formatted output: \n");
  printf("i = %4d c = '%c'\n", i, c);
  printf("f = %19.17f\n", f);
  printf("d = %19.17lf\n", d);

  return 0;
}
