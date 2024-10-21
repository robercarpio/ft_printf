#ifndef LIBPRINTF_H
# define LIBPRINTF_H

#include <stdlib.h> //malloc free
#include <unistd.h> //write
#include <stdarg.h> //va_va_start, va_arg, va_copy
#include <stdio.h> //printf

int	ft_putstr(char *str);
int ft_printf(char const *, ...);

#endif
