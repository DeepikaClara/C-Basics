// print numbers form 1 to 100, without any loop, we use recursion
#include <stdio.h>

void func(int x)
{
    if(x<=100)
    {
    printf("%d\n",x);
    func(x+1);
    }
}
int main() {
 func(1);
 
}