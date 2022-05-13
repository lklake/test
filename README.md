##目的
保留b.c中的haha section。
c.c文件没什么用，只是为了和b.c一起打包为静态库
链接脚本是gcc自带的，只添加了57～59行。
##可行
gcc -c main.c -o main.o &&\
gcc -c b.c -o b.o &&\
gcc -c c.c -o c.o &&\
gcc -Wl,-Tx.ld main.o b.o c.o -o main &&\
./main
##不可行
gcc -c main.c -o main.o &&\
gcc -c b.c -o b.o &&\
gcc -c c.c -o c.o &&\
ar ar rcs libxx.a b.o c.o &&\
gcc -Wl,-Tx.ld main.o libxx.a -o main &&\
./main