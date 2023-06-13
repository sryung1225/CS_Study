#include <stdio.h>
#include <cs50.h>

int main(void){
    string alpha[] = {"A", "B", "C", "D"};
    string search = "C";
    for(int i=0; i<sizeof(alpha)/sizeof(alpha[0]); i++){
        if(alpha[i] == search){
            printf("Find!\n");
        }
    }
}