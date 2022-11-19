#include <stdio.h>
/* #include <string.h>
#include <math.h>
#include <stdlib.h> */

int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
  	// Complete the code.
    char *ch[] = {"null", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    
    for (int n = a; n <= b; n++) {
        if (n <= 9)
            printf("%s\n", ch[n]);
        else if (n > 9 && n % 2 != 0)
            printf("odd\n");
        else if (n > 9 && n % 2 == 0)
            printf("even\n");
    }

    return 0;
}