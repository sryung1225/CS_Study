#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void){
    string s = get_string("s: ");
    string t = get_string("t: ");
    int answer = strcmp(s, t);
    
    if(answer == 0){
        printf("Same\n");
    } else if(answer == -1){
        printf("Different\n");
    }
}
