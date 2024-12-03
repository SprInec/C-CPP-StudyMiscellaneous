#include <iostream>
using namespace std;

/* 交换数值 - 指针传参 */
void swap1(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

/* 交换数值 - 引用传参 */
void swap2(int &a, int &b)
{
    int temp = a; 
    a = b;
    b = temp;
}

int main()
{
    int a = 1;
    int b = 2;
 
    swap1(&a, &b);
    cout << "a = " << a << " b = "  << b << endl;
    swap2(a, b);
    cout << "a = " << a << " b = "  << b << endl;
    
    return 0;
}
