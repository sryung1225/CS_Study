#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct{
    string name;
    string number;
}
person;

int main(void){
    person people[3];

    people[0].name = "DONG";
    people[0].number = "10-111-2222";
    people[1].name = "CHUN";
    people[1].number = "10-222-3333";
    people[2].name = "SDA";
    people[2].number = "10-333-4444";

    for(int i=0; i<3; i++){
        if(strcmp(people[i].name, "CHUN") == 0){
            printf("Found %s\n", people[i].number);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}

// ? Found 10-222-333 