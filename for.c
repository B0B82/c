#include <stdio.h>

int main() {
    int limit;
    int i = 0;
    
    scanf("%d", &limit);
    
    for ( int i = 0; i < limit; i++) {
        for ( int j = 0; j < limit; j++ ) {
            printf("%d\n", j);
        }
        printf("%d\n", i);
    }
    
    printf("%d\n", i);
    
    return 0;
}
