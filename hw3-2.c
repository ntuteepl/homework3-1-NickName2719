#include <stdio.h>
#include <stdlib.h>

int main(){
    int s, d, s2, d2, i ;
    int counter = 1;
    scanf( "%d%d", &s, &d );
    for ( i = 0 ; i < 2 ; i++  ) {
        scanf( "%d%d", &s2, &d2 );
        if ( d <= s2 ) {
            s = s2 ;
        }
        else {
            counter++ ;
        }
    }
    printf("%d\n", counter);
}
