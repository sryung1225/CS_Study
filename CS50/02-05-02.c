#include <stdio.h>
#include <cs50.h>

void cough(int n);

int main(void){
    cough(2);
}

void cough(int n){
    for(int i=0; i<n; i++){
        printf("Cough!\n");
    }
}

// ? Cough!
// ? Cough!