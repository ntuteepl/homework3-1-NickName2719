#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, j;
    scanf("%d", &i);
    for ( j=2 ; i>j ; j++ ) {
        if ( i%j==0 ) {
            printf("NO");
            break;
        }
    }
    if ( i<=j ) {
        printf("YES");
    }
}
