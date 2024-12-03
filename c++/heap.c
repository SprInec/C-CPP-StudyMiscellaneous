#include <stdio.h>
#include <stdlib.h>

/* 在堆区开辟变量 */
int *func1() 
{
    int *p = (int *)malloc(sizeof(int));
    *p = 10;
    return p;
}

/* 在堆区开辟数组 */
int *func2()
{
    int *arr = (int *)malloc(sizeof(int) * 10);
    return arr;
}

int main()
{
    int *p = func1();
    int *arr = func2();

    printf("%d\n", *p);
    for (int i = 0; i < 10; i++)
    {
        arr[i] = i;
        printf("%d\n", arr[i]);
    }

    free(p);
    free(arr);
    return 0;
}
