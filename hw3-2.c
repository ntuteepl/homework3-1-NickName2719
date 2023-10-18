#include <stdio.h>
#include <stdlib.h>

int main(){
    int s, d, s2, d2, i, temp ;
    int counter = 1;
    scanf( "%d%d", &s, &d );
    for ( i = 0 ; i < 2 ; i++  ) {
        scanf( "%d%d", &s2, &d2 );
        if ( s >= s2 ) {
            temp = s ;
            s = s2 ;
            s2 = temp ;
            temp = d ;
            d = d2 ;
            d2 = temp ;
        }
        if ( d <= s2 ) {
            d = d2 ;
        }
        else {
            counter++ ;
        }
    }
    printf("%d\n", counter);
}
