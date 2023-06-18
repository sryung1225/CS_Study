#include <stdlib.h>

void f(void){
    int *x = malloc(10 * sizeof(int));
    x[10] = 0;
}

int main(void){
    f();
    return 0;
}

// ------ 버퍼 오버플로우 경고 ------
// ==2069== Invalid write of size 4
// ==2069==    at 0x4229CD: f (index.c:5)
// ==2069==    by 0x422A03: main (index.c:10)

// Looks like you're trying to modify 4 bytes of memory that isn't yours? Did you try to store something
// beyond the bounds of an array? Take a closer look at line 5 of index.c.

// ------ 메모리 누수 경고 ------
// ==2011== 40 bytes in 1 blocks are definitely lost in loss record 2 of 2
// ==2011==    at 0x4C31B0F: malloc (in /usr/lib/valgrind/vgpreload_memcheck-amd64-linux.so)
// ==2011==    by 0x422901: f (index.c:4)
// ==2011==    by 0x4229B3: main (index.c:9)

// Looks like your program leaked 40 bytes of memory. Did you forget to free memory that you
// allocated via malloc? Take a closer look at line 4 of index.c.