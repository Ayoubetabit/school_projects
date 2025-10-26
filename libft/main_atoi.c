#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
// #include <string.h>

int main(void)
{
    // ========= Test ft_atoi =========
    printf("=== TEST ft_atoi ===\n");
    char *atoi_tests[] = {"42", "   -42", "0", "   +1234abc", "2147483647", "-2147483649", "999999999999999999", "abc", "", "92233720368547758072354","-92233720368547758095932121"};
    for (int i = 0; i < 11; i++)
    {
        int mine = ft_atoi(atoi_tests[i]);
        int real = atoi(atoi_tests[i]);
        printf("Input: '%s' | ft_atoi: %d | atoi: %d\n", atoi_tests[i], mine, real);
    }

    // // ========= Test ft_bzero =========
    // printf("\n=== TEST ft_bzero ===\n");
    // char buf1[10] = "abcdefghi";
    // char buf2[10] = "abcdefghi";
    // ft_bzero(buf1 + 3, 3);
    // bzero(buf2 + 3, 3);
    // printf("ft_bzero result : ");
    // for (int i = 0; i < 9; i++) printf("%d ", buf1[i]);
    // printf("\n");
    // printf("bzero result    : ");
    // for (int i = 0; i < 9; i++) printf("%d ", buf2[i]);
    // printf("\n");

    // // ========= Test ft_calloc =========
    // printf("\n=== TEST ft_calloc ===\n");
    // size_t sizes[] = {5, 10, 0};
    // for (int i = 0; i < 3; i++)
    // {
    //     char *mine = ft_calloc(sizes[i], sizeof(char));
    //     char *real = calloc(sizes[i], sizeof(char));
    //     int same = memcmp(mine, real, sizes[i]) == 0;
    //     printf("calloc(%zu, sizeof(char)) same? %s\n", sizes[i], same ? "✅ yes" : "❌ no");
    //     free(mine);
    //     free(real);
    // }

    // // ========= Test ft_isalnum =========
    // printf("\n=== TEST ft_isalnum ===\n");
    // char chars[] = {'A', 'z', '5', '#', ' ', '\n', '0', '9', 'a', 'Z'};
    // for (int i = 0; i < 10; i++)
    // {
    //     int mine = ft_isalnum(chars[i]);
    //     int real = isalnum(chars[i]);
    //     printf("Char: '%c' | ft_isalnum: %d | isalnum: %d\n", chars[i], mine, real);
    // }

    return 0;
}
