// include header file
#include "cpp_funcs.h"

// define namespace
using namespace std;

//------------------------------------------------------------------------------------------

void print_progress_bar (double percentage)
{
  int val = (int) (percentage * 100);
  int lpad = (int) (percentage * PBWIDTH); // left padding
  int rpad = PBWIDTH - lpad; // right padding
  printf ("\r%3d%% [%.*s%*s]", val, lpad, PBSTR, rpad, ""); // print
  fflush (stdout);
}

//------------------------------------------------------------------------------------------

void seed_random()
{
  // use current time to seed the randomizer
  srand(time(NULL));
}

//------------------------------------------------------------------------------------------

int range_rand_int(int low, int high)
{
  // get the range of values
  int range = high - low;
  // return the random value
  return rand() % range + low;
}

//------------------------------------------------------------------------------------------

double range_rand_double(double low, double high)
{
  // get the range of values
  double range = high - low;
  // return the random value
  return (rand() / double (RAND_MAX) * (range - 1)) + low;
}

//------------------------------------------------------------------------------------------

float range_rand_float(float low, float high)
{
  // get the range of values
  float range = high - low;
  // do some funky offset math
  return (rand() / float (RAND_MAX) * (range - 1)) + low;
}

//------------------------------------------------------------------------------------------

void remove_spaces(char* str) 
{ 
  int count = 0; // temporary variable to keep track of non-space character count 

  // iterate through string, place at "count++" if not a space
  for(int c = 0; str[c]; c++) 
  {
    if(str[c] != ' ') 
      str[count++] = str[c]; // here "count" is incremented for each index
  }
  str[count] = '\0'; // put null terminator at the end
} 

//------------------------------------------------------------------------------------------
