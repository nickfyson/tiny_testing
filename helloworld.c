#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{

    int i = 0;

    if(i > 0) { // lgtm [cpp/constant-comparison]
        printf("never reached");
    }


    srand(time(NULL));

    int j = 0;
    j = rand() % 10;

    if(j < 4) {
        printf("always reached");
    }

    return 0;
}
