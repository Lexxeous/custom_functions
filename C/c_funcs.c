// include header file
#include "c_funcs.h"

//------------------------------------------------------------------------------------------

void append_char(char* s, char c)
{
  int len = strlen(s); // get the string length
  s[len] = c; // place the character at the end of the string
  s[len+1] = '\0'; // assigned the next place in the string to be a null terminator
}

//------------------------------------------------------------------------------------------

char* itoa(int value, char* result, int base)
{
	// check that the base if valid
	if (base < 2 || base > 36) { *result = '\0'; return result; }

	char* ptr = result, *ptr1 = result, tmp_char;
	int tmp_value;

	do
	{
		tmp_value = value;
		value /= base;
		*ptr++ = "zyxwvutsrqponmlkjihgfedcba9876543210123456789abcdefghijklmnopqrstuvwxyz" [35 + (tmp_value - value * base)];
	} while ( value );

	// apply negative sign
	if (tmp_value < 0) *ptr++ = '-';
	*ptr-- = '\0';
	while(ptr1 < ptr)
	{
		tmp_char = *ptr;
		*ptr--= *ptr1;
		*ptr1++ = tmp_char;
	}
	return result;
}

//------------------------------------------------------------------------------------------

void write_to_new_file(const char* filepath, const char* data)
{
	FILE* fd = fopen(filepath, "w");
	if (fd != NULL) // if able to open file for editing
	{
    fputs(data, fd); // insert string
    fclose(fd); // close file
	}
}

//------------------------------------------------------------------------------------------

int base10_width(int x)
{
	return floor(log10(x)) + 1; // calculate the width of base 10 integer
}

//------------------------------------------------------------------------------------------

bool is_empty_file(const char* filepath)
{
	int size;
  FILE* fd = fopen(filepath, "r");
  if (fd != NULL) // if file can be opened for reading
  {
  	// look for the end of the file
    fseek (fd, 0, SEEK_END);
    size = ftell(fd);
    fclose(fd);

    if (0 == size) // if EOF is only content
    {
      return true;
    }
  }
	return false;
}

//------------------------------------------------------------------------------------------
