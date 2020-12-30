#include <stdlib.h>
#include <stdlib.h>
#include "calcs.h"

    void calcs()

    {

    signed int a, b;

    signed int sum;

    printf("Insert the numbers \n");
    scanf("%d %d", &a, &b);

    sum = a + b;

    printf("This is the sum %d \n", sum);


}


void compare() {

    signed int b;

    printf("Insert the number B \n");
    scanf("%d", &b);


    if (b < 0) {

        printf("The number %d is negative \n", b);


    } else {
       printf("The number %d is positive \n", b);

    }




   signed int a;

   int pare = (0, 2, 4, 6, 8, 10); //as a test, need to implement the function that comprehends all the pare numbers


   printf("Insert the number A \n");
   scanf("%d", &a);




   if (a != pare) {

        printf("The number %d it's pare\n", a);


    } else {

       printf("The number %d is spare\n", a);

    }
}
