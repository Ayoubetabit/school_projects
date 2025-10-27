#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <fcntl.h>

int main()
{
    char    s1[10] = "abc";
    char    *s2 = "defgghkba";
    
    printf("-->%zu ",ft_strlcpy(s1,s2, 10));
    printf("the new string --> %s" , s1)
}
