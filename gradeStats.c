/* Grade statistics function (average calc, min & max grade calc) -
   Nathaniel Miller - 1/24/11 */

#include <stdio.h>
#include "gradefunc.h"

/* function gradeStats begins execution,
   resultArr arry is const so is cannot modify original array in main */
int gradeStats( const int resultArr[], int i )
{
   /* initialization/defintions section */

   int average = 0; /* average of grades input */
   int total = 0; /* sum of grades input */
   int j; /* counter for use in loops */

   /* total all grades in array */
   for ( j = 0; j < i; j++ ) {
      total += resultArr[j];
   }

   /* calculate average and print out average to user */
   average = total / i;
   printf( "Class average is %d\n", average );

  
   int minGrade = 100; /* initializes to  maximum grade possible */
   int maxGrade = 0; /* initializes to minimum grade possible */

   /* compute the minimum grade */
   for ( j = 0; j < i; j++) {
      if (resultArr[j] < minGrade ) {
         minGrade = resultArr[j];
      }
   }
   /* print out min grade to user */
   printf( "Lowest grade is %d\n", minGrade );

   /* compute the maximum grade */
   for ( j = 0; j < i; j++) {
      if (resultArr[j] > maxGrade ) {
         maxGrade = resultArr[j];
      }
   }
   /* print out max grade to user */
   printf( "Highest grade is %d\n", maxGrade );

   return 0; /* indicate program terminated sucessfully */
} /* end function gradeStats */
