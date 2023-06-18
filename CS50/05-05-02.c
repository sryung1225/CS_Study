#include <cs50.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(void){
    string s = get_string("s: "); // > Hello
    s[0] = tolower(s[0]);
    printf("s: %s\n", s);         // ? hello

    string t = malloc(strlen(s)+1);
    for(int i=0, n=strlen(s); i<n+1; i++){
        t[i] = s[i];
    }
    t[0] = toupper(t[0]);
    printf("s: %s\n", s);         // ? hello
    printf("t: %s\n", t);         // ? Hello
}
