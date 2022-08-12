#include <iostream>
int main()
{
    short x = 1;
    void *ptr = nullptr;
    ptr = &x;
    int y =*(short*)ptr;
    cout <<y;
}