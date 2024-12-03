#include <iostream>
using namespace std;

/* 在堆区开辟变量 */
int *func1()
{
    int *p = new int(10);
    return p;
}

/* 在堆区开辟数组 */
int *func2()
{
    int *arr = new int[10];
    return arr;
}

int main()
{
    int *p = func1();
    int *arr = func2();

    cout << *p << endl;
    for (int i = 0; i < 10; i++)
    {
        arr[i] = i;
        cout << arr[i] << endl;
    }

    delete p;
    /* 释放数组时要加一个 [] */
    delete[] arr;
    return 0;
}