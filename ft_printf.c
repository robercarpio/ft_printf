#include "libftprintf.h"

int ft_printf(char const *format, ...)
{
    va_list args;
    int     i;
    int     chrs;
    char    c;
    
    chrs = 0;
    i = 0;
    va_start(args, format);
    while (format[i])
    {
      if (format[i]=='%' && format[i + 1])
      {
            i++;
            chrs+=ft_swparam(format[i],args);
      }
      i++;
    }
    va_end(args);
    return (chrs);
}

int main(void)
{
    printf("%d",ft_printf("%s","hola texto prueba"));
    return (0);
}