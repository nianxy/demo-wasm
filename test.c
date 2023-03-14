#include <emscripten/emscripten.h>

 int main() {
     return 0;
 }

#ifdef __cplusplus
#define EXTERN extern "C"
#else
#define EXTERN
#endif

EXTERN EMSCRIPTEN_KEEPALIVE int add(int a, int b) {
    // printf("MyFunction Called\n");
    return a+b;
}

EXTERN EMSCRIPTEN_KEEPALIVE int add2(int a, int b, int loops) {
    int r = 0;
    for (int i=0; i<loops; ++i) {
        r += a + b;
    }
    return r;
}

