#include"forth0.c"

static void hello(void){ printf("hello, "); }
static void world(void){ printf("world!\n"); }

int main(){
    init();

    def_cfunc("hello", hello, 0);
    def_cfunc("world", world, 0);

    fin = stdin;
    text_interpreter();

    return 0;
}
