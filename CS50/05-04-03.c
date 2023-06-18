#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void){
    string s = get_string("s: ");
    string t = get_string("t: ");
    string answer;

    int s_len = strlen(s);
    int t_len = strlen(t);
    if(s_len != t_len){
        answer = "Different\n";
    }

    int count = 0;
    for(int i = 0; i < s_len; i++){
        if(*(s+i) == *(t+i)){
            count++;
        }
    }
    if(count == s_len){
        answer = "Same\n";
    } else {
        answer = "Different\n";
    }
    printf("%s", answer);
}
