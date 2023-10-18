#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, sa=0, b, sb=0, z;
    scanf( "%d%d", &a, &b );
    int ao = a ;
    int bo = b ;
    for ( z=10 ; a>(z/10) ; z*=10 ) {
        int ar = a%z ; //餘數
        sa = sa + (ar*10/z) ;
        a -= ar ;
    }
    for ( z=10 ; b>(z/10) ; z*=10 ) {
        int br = b%z ; //餘數
        sb = sb + (br*10/z) ;
        b -= br ;
    }
    if ( sa < sb ) {
        printf ( "%d\n", ao );
    }
    else if ( sb < sa ) {
        printf ( "%d\n", bo );
    }
    else {
        if ( a0 < b0 ) {
            printf ( "%d\n", ao ) ;
        }
        else if ( b0 < a0 ) {
            printf ( "%d\n", bo ) ;
        }
    }
}
