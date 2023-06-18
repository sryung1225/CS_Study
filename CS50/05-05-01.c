#include <cs50.h>
#include <ctype.h>
#include <stdio.h>

int main(void){
    string s = get_string("s: "); // > Hello
    s[0] = tolower(s[0]);
    printf("s: %s\n", s);         // ? hello

    string t = s;
    t[0] = toupper(t[0]);
    printf("s: %s\n", s);         // ? Hello
    printf("t: %s\n", t);         // ? Hello
}