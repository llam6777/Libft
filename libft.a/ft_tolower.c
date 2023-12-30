#include <stdio.h>

int ft_tolower(int c)
{
    if (c >= 'A' && c <= 'Z')
    {
        c = c + 32;
        return (c);
    }
    else
        return (c);
}

int main(void)
{
    printf("%c\n", ft_tolower('D'));
    printf("%c\n", ft_tolower('g'));
    printf("%d\n", ft_tolower(7));
    return (0);
}