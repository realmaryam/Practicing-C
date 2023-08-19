#include <stdio.h>

struct bits{
    unsigned char   f1:1,
                    res1:1,
                    f2:2,
                    res2:1,
                    f3:3;
};

// size of memory allocations is 8 bytes (not 12)
struct bits2{
    unsigned int   f1:1;
    unsigned f2:1;
    int f3;
};

// size of memory allocation is 4 bytes (not 8)
struc bits3{
    unsigned int    f1:1,
                    f2:1,
                    f3:1;
    char            f4;
}

int main(){
    struct bits b;
    unsigned d;
    d = 1;
    printf("%ld\n", sizeof(d));

    b.f1 = 1;
    b.f2 = 3;
    b.f3 = 5;

    printf("%d %d %d\n", b.f1, b.f2, b.f3);

}