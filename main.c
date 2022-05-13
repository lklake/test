#include <stdio.h>
extern char  __haha_start[];
extern char  __haha_end[];
extern int b(void);
extern int c(void);
int main(){
    //不调用b(),那么把b.o、c.o打包为静态库后，和main一起链接，不会保留b中的haha section。
    //调用b(),那么不论将b.o、c.o打包为静态库还是直接用.o链接，都会保留
    //b();
    c();
    printf("value:%lu\n",__haha_end - __haha_start);
    return 0;
}
