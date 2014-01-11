#include <cstdio>
using namespace std;

int ran(int a, int t)
{
    return ((a*a/16)+t)&127;
}
int main()
{
    int a = 1;
    printf("%d\n", a);
    for(int i=0; i<100; ++i)
    {
        a = ran(a, i);
        printf("%d ", a);
    }
    puts("\n---");
}
