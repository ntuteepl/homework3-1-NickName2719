#include <stdio.h>
#include <stdlib.h>

int main(){
    int s1, d1, s2, d2, s3, d3 ;
    int counter = 1;
    scanf( "%d%d%d%d%d%d", &s1, &d1, &s2, &d2, &s3, &d3 );
    if ( d1 <= s2 ) {
        d1 = d2 ;
    }
    else if ( d2 <= s1 ) {
        s1 = s2 ;
    }
    else {
        counter += 1 ;
    }
    if ( d1 <= s3 ) {
    }
    else if ( d3 <= s1 ) {
    }
    else if ( d2 <= s3 ) {
    }
    else if ( d3 <= s2 ) {
    }
    else {
        counter += 1 ;
    }
    printf("%d\n", counter);
}
