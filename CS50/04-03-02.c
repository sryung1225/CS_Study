#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void){
    string names[] = {"DONG", "CHUN", "SDA"};
    string numbers[] = {"10-111-2222", "10-222-3333", "10-333-4444"};
    for(int i=0; i<3; i++){
        if(strcmp(names[i], "CHUN") == 0){
            printf("Found %s\n", numbers[i]);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}

// ? Found 10-222-333 