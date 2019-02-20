// include guard
#ifndef C_FUNCS_H
#define C_FUNCS_H

#include <stdlib.h>
#include <stdbool.h> // for boolean datatypes
#include <string.h>
#include <unistd.h>
#include <math.h>

/*
	Purpose: Append a single character to the end of a string
	Inputs:  The string: char* <s> & the character: char* <c>
	Outputs: None
*/
void append_char(char* s, char c);


/*
	Purpose: Convert an integer to an array of single digits
	Inputs:  Value to be converted: int <value>, ???: char* <result>, & the base (2 ~ 36): int <base> 
	Outputs: 
	Credits: Written by Lukás Chmela ; Released under GPLv3
*/
char* itoa(int value, char* result, int base);


/*
	Purpose: Create and write <data> to <filepath>
	Inputs:  The destination: const char* <filepath> & the data to write: const char* <data>
	Outputs: None
*/
void write_to_new_file(const char* filepath, const char* data);


/*
	Purpose: Calculate the width of base 10 value (with 1 as starting index)
	Inputs:  The base 10 value: int <x>
	Outputs: The width of the base 10 value
	Example: 456,789 has a width of 6
*/
int base10_width(int x);


/*
	Purpose: Determine if a file is empty
	Inputs:  The destination: const char* <filepath>
	Outputs: Returns true if <filepath> has no content and false otherwise
*/
bool is_empty_file(const char* filepath);

#endif // C_FUNCS_H