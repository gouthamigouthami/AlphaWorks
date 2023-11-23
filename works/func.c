#include <stdio.h>

/* Function to return the maximum of a,b */
int find_max(int a, int b)
{
    int result = a;
    printf("%p\n",&result);

    if(a > b)
    {
        result = a;
    } else if (a < b)
    {
        result = b;
    } 
    return result;
}
void temp_func()
{
    int a = 77;
    printf("%p\n",&a);
}

int main()
{
    temp_func();
    printf("Result = %d\n", find_max(100,100));
    return 0;
}


