#include <stdio.h>

int main() {
    int n;
    int limit;
    
    scanf("%d %d", &limit, &n);

    printf("%d\n", limit%n);

    // if ( limit % 2 == 0 && limit % 3 !=0 && limit % 5 != 0 ) {
    //     printf("yes\n");
    // } else {
    //     printf("no");
    // }

    // for ( ; n < limit; n *= 2 ) {
    //     printf("%d\n", limit);
    //     printf("%d\n", n);
    // }
    // if ( n <= limit && limit%2 == 0 ) {
    //         printf("yes\n");
    //     } else {    
    //         printf("no\n");
    //     }
    
    // if ( n % 2 == 0 ) {
    //     printf("%d\n", 1);
    // }
    // limit = 1 << n;
    // printf("%d\n", limit);
    // printf("%d\n", limit/n);

    // if ( (1 << n)/n == 2) {
    //     printf("1");
    // }
    // limit = 1 << n;
    
    // printf("%d\n", limit);
    
    // for ( int i = 0; i < limit; i++ ) {
    //     // printf("%d\n", n);
    // }
    
    return 0;
}
