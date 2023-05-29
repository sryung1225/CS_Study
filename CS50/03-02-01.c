int main(void){
  printf("hello, world\n");
}

// $ make bug
// clang -fsanitize=signed-integer-overflow -fsanitize=undefined -ggdb3 -O0 -std=c11 -Wall -Werror -Wextra -Wno-sign-compare -Wno-unused-parameter -Wno-unused-variable -Wshadow    bug.c  -lcrypt -lcs50 -lm -o bug
// .bug.c:2:3: error: implicitly declaring library function 'printf' with type 'int (const char *, ...)'
//       [-Werror,-Wimplicit-function-declaration]
//   printf("hello, world\n");
//   ^
// bug.c:2:3: note: include the header <stdio.h> or explicitly provide a declaration for 'printf'
// 1 error generated.
// <builtin>: recipe for target 'bug' failed
// make: *** [bug] Error 1

// $ help50 make bug
// Asking for help...

// bug.c:2:3: error: implicitly declaring library function 'printf' with type 'int (const char *, ...)'
// [-Werror,-Wimplicit-function-declaration]
//   printf("hello, world\n");

// Did you forget to #include <stdio.h> (in which printf is declared) atop your file?