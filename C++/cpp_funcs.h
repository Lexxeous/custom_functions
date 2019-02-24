// include guard
#ifndef CPP_FUNCS_H
#define CPP_FUNCS_H

// include necessary libraries
#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <ctime>

// definitions
#define PBSTR "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"
#define PBWIDTH 100


/*
	Purpose: Print a progress bar indicator
	Inputs:  Percentile (0.0 ~ 1.0): double <percentage>
	Outputs: None
*/
void print_progress_bar (double percentage);


/*
	Purpose: Seed the random number generator
	Inputs:  None
	Outputs: None
*/
void seed_random();


/*
	Purpose: Generate a random integer between two bounds
	Inputs:  The lower bound: int <low> & the upper bound: int <high>
	Outputs: A random integer between the lower and upper bounds
*/
int range_rand_int(int low, int high);


/*
	Purpose: Generate a random double between two bounds
	Inputs:  The lower bound: double <low> & the upper bound: double <high>
	Outputs: A random double between the lower and upper bounds
*/
double range_rand_double(double low, double high);


/*
	Purpose: Generate a random float between two bounds
	Inputs:  The lower bound: float <low> & the upper bound: float <high>
	Outputs: A random float between the lower and upper bounds
*/
float range_rand_float(float low, float high);


/*
	Purpose: Remove all spaces from a string and compress it
	Inputs:  The string: char* <str>
	Outputs: None
*/
void remove_spaces(char* str) 


#endif //for CPP_FUNCS_H
