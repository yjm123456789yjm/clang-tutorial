// #include <stdio.h>
// int main(void)
// {
//     int x[12];

//     printf("%zu\n", sizeof(x));
//     printf("%zu\n", sizeof(int));
//     printf("%zu\n", sizeof(x) / sizeof(int));
// }

// #include <stdio.h>
// int main(void)
// {
//     int a[5] = {11, 22, 33, 44, 55};
//     int *p;

//     p = a;
//     printf("%d\n", *p);
// }

#include <stdio.h>
int main(void)
{
    int a[5] = {11, 22, 33, 44, 55};
    for (int i = 0; i < 5; i++) {
        
    
        printf("%d\n", *(a + i));
    }
}