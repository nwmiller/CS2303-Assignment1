/* Main assignment 1 program - Nathaniel Miller - 1/24/11 */

#include <stdio.h>
#include "gradefunc.h"

#define SIZE 20 /* defines maximum size of array to 20 */

/* function prototype for gradeStats */
int gradeStats( const int resultArr[], int i );

/* function main begins program execution */
int main( void )
{

   int gradeArr[SIZE] = { 0 }; /* array gradeArr has SIZE elements,
				 and initilizes array elements to 0 */

   int grade; /* variable grade to store input grade values */
   int count; /* counter to represent element in array */
   int result; /* variable to hold results of function gradeStats */

   /* initialization section */

   count = 0; /* initialize count to 0 */
   result = 0; /* initialize result to 0 */

   /* processing section */

   /* prints instructions for the user */
   printf( "Welcome!\n" );
   printf( "When prompted, enter each grade successively.\n" );
   printf( "Enter up to 20 grades, or to end before twenty, \n" );
   printf( "input a negative number (i.e. -1) to print calculations.\n");

   /* ask for first grade from user */
   printf( "Enter grade, input negative # to end: " ); /* prompt first grade */
   scanf( "%d", &grade ); /* read grade from user */

   /* loop until # of grades entered has reach max number of grades entered,
     or until negative number is entered */
   for ( count; count < SIZE && grade >= 0; ) {

     /* check for valid input (grades up to and incl. 100) */
      if ( grade <= 100 ) {
        gradeArr[count] = grade; /* set element count in array to value grade */
        count++; /* move to next element in array */
      }
      /* otherwise for incorrect input print error message */
      else {
         printf( "Incorrect input. Grades cannot be greater than 100. \n" );
      }

      /* prompt next user input and read next grade from user */
      if ( count < SIZE ) {
	 printf( "Enter grade, input negative # to end: " ); /* prompt grade */
         scanf( "%d", &grade ); /* read grade */
      }
   } /* end for */

   /* termination section */

   /* ensure no division by zero occurs in calculations */
   if ( count != 0 ) {

      /* call gradeStats function and calc average & min/max grades */
      result = gradeStats(gradeArr, count); 
   }
   /* otherwise print error message */
   else {
      printf( "No grades were entered. Please try again!\n" );
   }
  
   return 0; /* indicate that program terminated sucessfully */
}  /* end function main */
