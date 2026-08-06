#include "leap.h"
#include <stdio.h>



    // declare variable
    bool leap_year(int year) {

    // user prompted to answer CTA
    printf("Enter a year to check: /n");
    
    // read the number users typed and stores it in the variable
    scanf("%d", &year);

    // apply the leap year logic
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a leap year!/n", year);
        return true;
    } else {
        printf("%d is not a leap year./n", year);
        return false;
    }

    return 0;
}