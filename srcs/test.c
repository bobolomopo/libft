#include "../includes/libft.h"
#include <stdio.h>

int main(int argc, char **argv)
{
    argc = 1;
    printf("le mien : |%d|\n", ft_atoll(argv[1]));
    printf("le bon :  |%d|\n", atoll(argv[1]));
    return(0);
}