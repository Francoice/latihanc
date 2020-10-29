// #include <iostream>

// using namespace std;
#include <stdio.h>
int main(){
    int A, B, C;
    
    printf("Input Nilai Pertama : ");
    scanf("%i", &A);
    printf("Input Nilai Kedua : ");
    scanf("%i", &B);
    printf("Input Nilai Ketiga : ");
    scanf("%i", &C);

    if(A>=60 && B>=60 && C>=60) {
        printf("TIGA\n");
    }
    else if((A>=60 && B>=60 && C<60) || (A>=60 && C>=60 && B<60) || B>=60 && C>=60 && A<60) {
        printf("DUA\n");
    }
    else {
        printf("NOL\n");
    }
}