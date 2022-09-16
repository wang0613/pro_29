#include <stdio.h>
#include <stddef.h>

//offsetof() Ä£ÄâÊµÏÖ
struct S
{
    char c1;//0
    int a;//1 2 3.. 4 5 6 7
    char c2; //8 .. 9 10 11
};
int main() {
    int a = offsetof(struct S,a);
    printf("%d\n",a);
    return 0;
}
