# include<stdio.h>
# include<stdlib.h>

int conv_char_to_int(char *num)
{
    int i =0;
    int res = 0;

    while (num[i])
    {
        res = res * 2 + (num[i] - '0');
        i++;
    }
    return (res);
}

int how_many_digit(int n)
{
    int digits;

    digits = 0;
    while (n > 0)
    {
        digits++;
        n = n / 10;
    }
    return (digits);
}

char *conv_int_to_char(int n)
{
    int shifted;
    char *tab;

    tab = (char *)malloc(sizeof(char) * (how_many_digit(n) + 1));
    shifted = n;
    int i = 0;
    while (i < how_many_digit(n) && shifted > 0)
    {
        tab[i] = (shifted & 0b10000000) + '0';
        shifted = shifted<<1;
        // printf("%d--\n",shifted);
        i++;
    }
    if (i == 0)
    {
        tab[i] = '0';
        i++;
    }
    tab[i] = '\0';
    return (tab);
}

char    *addBinary(char * a, char * b){
    int x;
    int y;

    x = conv_char_to_int(a);
    y = conv_char_to_int(b);
    return (conv_int_to_char(x + y));
}

int main(void)
{
    char *res;

    res = addBinary("11", "1");
    printf("%s\n",res);
}