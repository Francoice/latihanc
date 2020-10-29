// #include <iostream>

// using namespace std;
#include <stdio.h>
int main(){
    int uang = 1000000;
    int i=0;
    

    while(i<10) {

        uang = (uang * 2/100) + uang;
        int j=i+1;
        printf("Bulan %d : %d \n", j, uang);
        
        i++;
    }
    
}