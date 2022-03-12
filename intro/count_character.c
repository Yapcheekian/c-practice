#include <stdio.h>

/* count characters in input; 2nd version */
int main()
{
    int nc;

    for (nc = 0; getchar() != EOF; ++nc)
        ;
    printf("%d\n", nc);
}
