#include <stdio.h>
#include <cs50.h>

void cough(void);

int main(void){
    for(int i=0; i<3; i++){
        cough();
    }
}

void cough(void){
    printf("Cough!\n");
}

// ? Cough!
// ? Cough!
// ? Cough!