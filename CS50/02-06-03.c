#include <stdio.h>
#include <unistd.h>

int main(void){
    for(int i=1; ; i*=2){ // 한계를 표현하지 않음 = 영원히 반복
        printf("%i\n", i);
        sleep(1); // 1초씩 쉬어감
    }
}

// ? 1
// ? 2
// ? 4
// ......
// ? 1073741824
// ? overflow.c:6:25: runtime error: signed integer overflow: 1073741824 * 2 cannot be represented in type 'int'
// ? -2147483648
// ? 0
// ? 0
// ......