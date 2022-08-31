#include <stdio.h>

using namespace std;
// https://en.wikipedia.org/wiki/Scanf_format_string
int main()
{
    // TODO: printf(with decimal point clarification), scanf, char/int/doublr array input

    // // Take integer input
    int i;
    double d;

    printf("\nTaking integer input: ");
    scanf("%d", &i);

    // Take double input
    printf("\nTaking double input: ");
    scanf("%lf", &d);

    // Take char input
    char c;
    printf("\nTaking char input: ");
    scanf("%c", &c);

    // Take integer array input
    int len;
    printf("Integer array input, enter array length: ");
    scanf("%d", &len);
    int arr_i[len];
    printf("\nInteger array input, enter array element: ");
    for (int i = 0; i < len; i++)
    {
        scanf("%d", &arr_i[i]);
    }

    // Take double array input
    printf("Double array input, enter array length: ");
    scanf("%d", &len);
    double arr_d[len];
    printf("\nDouble array input, enter array element: ");
    for (int i = 0; i < len; i++)
    {
        scanf("%lf", &arr_d[i]);
    }
    printf("Printing input\n");
    for (int i = 0; i < len; i++)
    {
        printf("%.9f\n", arr_d[i]);
    }

    // Take dynamic char array input
    // char *sptr;
    // scanf("%ms", &sptr);
    // printf("%s\n", sptr);

    // // Take char array input in a loop
    // printf("Char array input, enter array length: ");
    // scanf("%d", &len);
    // char arr_c[len];
    // for (int i = 0; i < len; i++)
    // {
    //     scanf(" %c", &arr_c[i]); // 1 space[empty] character given to eat the newline/space/tab etc from previous scanf
    // }
    // arr_c[len] = '\0';
    // printf("%s\n", arr_c);

    // Use char array as string
    char string0[] = "Hello World";
    char string1[] = {'H', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd', '\0'};
    printf("%s\n%s\n", string0, string1);
    return 0;
}