#include <stdio.h>

int ft_toupper(int c)
{
    if (c >= 'a' && c <= 'z')
    {
        c = c - 32;
        return (c);
    }
    else
        return (c);
}

int main(void)
{
    printf("%c\n", ft_toupper('a'));
    printf("%c\n", ft_toupper('Z'));
    return (0);
}