#include <cs50.h>
#include <stdio.h>

int main(void){
  char c = get_char("Do you agree?\n");
  if(c == 'Y' || c == 'y'){
    printf("Agreed.\n");
  } else if (c == 'N' || c == 'n'){
    printf("Not agreed.\n");
  }
}