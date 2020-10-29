// #include <iostream>

// using namespace std;
#include <stdio.h>
int main(){
    int A,B,C;
    scanf ("%i%i%i",&A,&B,&C) ;

    int jumlah = A+B+C;

        //segitiga sama sisi
        if (A==B) {
            if (A==C) {
                printf("SAMA SISI\n");
            }
            else if (B==C) {
                printf("SAMA SISI\n");
            }
             else {
                 printf("SAMA KAKI\n");
            }
        }
        else if (A==C) {
            if (A==B) {
                printf("SAMA SISI\n");
            }
            else if (B==C) {
                printf("SAMA SISI\n");
            }
             else {
                 printf("SAMA KAKI\n");
            }
        }
        else if (B==C) {
            if (A==B) {
                printf("SAMA SISI\n");
            }
            else if (A==C) {
                printf("SAMA SISI\n");
            }
             else {
                 printf("SAMA KAKI\n");
            }
        }

        //segitiga sembarang
        else if (A!=B) {
            if (B!=C) {
                printf("SEMBARANG\n");
            }
            else if (A!=C) {
                printf("SEMBARANG\n");
            }
             else {
                 printf("SAMA KAKI\n");
            }
            
        }
        else if (B!=C) {
            if (A!=C) {
                printf("SEMBARANG\n");
            }
            else if (A!=B) {
                printf("SEMBARANG\n");
            }
             else {
                 printf("SAMA KAKI\n");
            }
            
        }
        else if (A!=C) {
            if (A!=B) {
                printf("SEMBARANG\n");
            }
            else if (B!=C) {
                printf("SEMBARANG\n");
            }
            else {
                 printf("SAMA KAKI\n");
            }

        }

         else {
                 printf("SAMA KAKI\n");
            }


     


    


}