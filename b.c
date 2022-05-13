#include <stdio.h>
int b(){
    printf("b included\n");
    return 0;
}
__attribute__((section(".haha"))) int haha(){
    return 0;
}
