#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define M 10
#define PRINTARRAY(x, y) for(int i = 0; i < y; i++) { printf("%3d", x[i]); if(i == y - 1) printf("\n");}
#define SUMMARY(x, y) for(int i = 0, sum = 0; i < y; i++) {sum += x[i]; if(i == y - 1) printf("%4d", sum);}

int main()  {
    int array[M];
    srand(time(NULL));
    for(int i = 0; i < M; i++) {
        array[i] = rand() % 100;
        printf("%3d", array[i]);
        if (i == M - 1)
            printf("\n");
    }
    
    PRINTARRAY(array, M);
    SUMMARY(array, M);
    char *v = __TIME__;
    printf("\n %d\n %s\n %s\n %s\n %d\n %s", __LINE__, __FILE__, __DATE__, __TIME__, __STDC__, v);
    return 0;
}