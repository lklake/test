#include <stdio.h>
__attribute__((section(".haha"))) int b(){
    printf("b included\n");
    return 0;
}
__attribute__((section(".haha"))) int haha(){
    return 0;
}
