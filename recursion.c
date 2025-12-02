#include <stdio.h>

void toUppercase(char *str, int i)
{
    if (str[i] == '\0')   
        return;

    if (str[i] >= 'a' && str[i] <= 'z')
        str[i] = str[i] - 32; 

    toUppercase(str, i + 1);  
}

int main()
{
    char str[100];

    printf("Enter a lowercase string: ");
    fgets(str, sizeof(str), stdin);

    toUppercase(str, 0); 

    printf("Uppercase string: %s", str);

    return 0;
}
