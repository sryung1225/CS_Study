#include <stdio.h>
#include <cs50.h>

int main(void){
    string names[4];
    names[0] = "YURI";
    names[1] = "MINSU";
    names[2] = "JUNWOO";
    names[3] = "JIHEE";

    printf("%s\n", names[0]); // ? YURI
    printf("%c%c%c%c\n", names[0][0], names[0][1], names[0][2], names[0][3]); // ? YURI
}