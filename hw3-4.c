#include <stdio.h>
#include <stdlib.h>

int main(){
    int ans, in ;
    int a=0 ,b=0 ;
    scanf( "%d", &ans );
    int ans1 = ans%10 ;
    int ans2 = ( (ans-ans1) % 100 ) / 10 ;
    int ans3 = ( (ans-ans1-ans2) % 1000) / 100 ;
    int ans4 = ( (ans-ans1-ans2-ans3) % 10000) / 1000 ;
    while (1) {
        scanf( "%d", &in );
        if ( in != 0 ) {
            int in1 = in%10 ;
            int in2 = ( (in-in1) % 100) / 10 ;
            int in3 = ( (in-in1-in2) % 1000) / 100 ;
            int in4 = ( (in-in1-in2-in3) % 10000) / 1000 ;
            if ( ans1 == in1 ) {
                a++ ;
            }
            if ( ans2 == in2 ) {
                a++ ;
            }
            if ( ans3 == in3 ) {
                a++ ;
            }
            if ( ans4 == in4 ) {
                a++ ;
            }
            if ( ans1 == in2 || ans1 == in3 || ans1 == in4 ) {
                b++;
            }
            if ( ans2 == in1 || ans2 == in3 || ans2 == in4 ) {
                b++;
            }
            if ( ans3 == in1 || ans3 == in2 || ans3 == in4 ) {
                b++;
            }
            if ( ans4 == in1 || ans4 == in2 || ans4 == in3 ) {
                b++;
            }
            printf( "%dA%dB\n", a, b );
            a = b = 0 ;
        }
        else  {
            break;
        }
    }
}
