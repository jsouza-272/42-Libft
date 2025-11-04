/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   caramain.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsouza <jsouza@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 14:11:19 by jsouza            #+#    #+#             */
/*   Updated: 2025/10/30 12:14:58 by jsouza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/* void *change_to_J(void *d)
{
    int c = 'J';
    unsigned char *p;

    p = d;
    p[0] = c;
    return((void *)p);
}
void deletnode(void *d)
{
    free(d);
}
int main()
{
    t_list  *head;
    t_list  *node;
    t_list  *node2;
    t_list  *new;

    head = ft_lstnew(ft_strdup("Hello "));
    node = ft_lstnew(ft_strdup("World."));
    node2 = ft_lstnew(ft_strdup(" hello"));
    
    head->next = node;
    node->next = node2;
    printf("%s", (char *)head->content);
    printf("%s", (char *)head->next->content);
    printf("%s\n", (char *)head->next->next->content);
    new = ft_lstmap(head, &change_to_J, &deletnode);
    printf("%s", (char *)new->content);
    printf("%s", (char *)new->next->content);
    printf("%s\n", (char *)new->next->next->content);
} */

/* void change_to_J(void *d)
{
    int c = 'J';
    unsigned char *p;

    p = d;
    p[0] = c;
}
int main()
{
    t_list  *head;
    t_list  *node;
    t_list  *node2;

    head = ft_lstnew(ft_strdup("Hello "));
    node = ft_lstnew(ft_strdup("World."));
    node2 = ft_lstnew(ft_strdup(" hello"));
    
    head->next = node;
    node->next = node2;
    printf("%s", (char *)head->content);
    printf("%s", (char *)head->next->content);
    printf("%s\n", (char *)head->next->next->content);
    ft_lstiter(head, &change_to_J);
    printf("%s", (char *)head->content);
    printf("%s", (char *)head->next->content);
    printf("%s\n", (char *)head->next->next->content);
}  */

/* void deletnode(void *d)
{
    free(d);
}
int main()
{
    t_list  *head;
    t_list  *node;
    t_list  *node2;

    head = ft_lstnew(ft_strdup("Hello "));
    node = ft_lstnew(ft_strdup("World."));
    node2 = ft_lstnew(ft_strdup(" hello"));
    
    head->next = node;
    node->next = node2;
    printf("%s", (char *)head->content);
    printf("%s", (char *)head->next->content);
    printf("%s\n", (char *)head->next->next->content);
    ft_lstclear(&head, &deletnode);
} */

/* void deletnode(void *d)
{
    free(d);
}
int main()
{
    t_list  *head;
    t_list  *node;
    t_list  *node2;

    head = ft_lstnew(ft_strdup("Hello "));
    node = ft_lstnew(ft_strdup("World."));
    node2 = ft_lstnew(ft_strdup(" hello"));
    
    head->next = node;
    node->next = node2;
    printf("%s", (char *)head->content);
    printf("%s", (char *)head->next->content);
    printf("%s\n", (char *)head->next->next->content);
    
    printf("%d\t", ft_lstsize(head));
    ft_lstdelone(node2, &deletnode);
} */

/* int main()
{
    printf("\n");
    t_list  *head;
    t_list  *node;
    t_list  *node2;

    head = ft_lstnew("Hello ");
    node = ft_lstnew("World.");
    node2 = ft_lstnew("kajsnd\n");

    head->next = node;
    printf("%s", (char *)head->content);
    printf("%s\n\n", (char *)head->next->content);
    ft_lstadd_back(&head, node2);
    printf("\n\n%s", (char *)head->content);
    printf("%s", (char *)head->next->content);
    printf("%s", (char *)head->next->next->content);
    printf("\n");
    free(head);
} */
/* int main()
{
    t_list  *head;
    t_list  *node;
    t_list  *node2;
    t_list  *last;

    head = ft_lstnew("Hello ");
    node = ft_lstnew("World.");
    node2 = ft_lstnew("kajsnd\n");

    head->next = node;
    node->next = node2;
    last = ft_lstlast(head);
    printf("%s", (char *)last->content);
} */

/* int main()
{
    t_list  *head;
    t_list  *node;
    t_list  *node2;

    head = ft_lstnew("Hello ");
    node = ft_lstnew("World.");
    node2 = ft_lstnew("kajsnd\n");

    head->next = node;
    node->next = node2;
    printf("%d", ft_lstsize(head));
} */

/* int main()
{
    t_list  *head;
    t_list  *node;
    t_list  *node2;

    head = ft_lstnew("Hello ");
    node = ft_lstnew("World.\n");
    node2 = ft_lstnew("42!");

    head->next = node;
    

    printf("antiga lst\t%s", (char *) head->content);
    printf("%s", (char *) head->next->content);

    ft_lstadd_front(&head, node2);
    printf("nova lst\t%s", (char *) node2->content);
    printf("%s", (char *) node2->next->content);
    printf("%s", (char *) node2->next->next->content);
} */

/* int main()
{
    t_list  *head;

    head = ft_lstnew(ft_strdup("Hello "));

    printf("%s", (char *) head->content);
    free(head);
} */

/* int main ()
{
    ft_putnbr_fd(-2147483648, 1);
    printf("\n");
    ft_putnbr_fd(0, 1);
    printf("\n");
    ft_putnbr_fd(12379, 2);
} */



/* static void f(unsigned int i, char *c)
{
    *c = 'a' + i;
} 
int main()
{
    char s[] = "Hello World";
    ft_striteri(s, &f);
    printf("%s\n", s);
    int i;
    for (i = 0; i < 12; i++)
    {
        printf("%02x", s[i]);
    }    
} */

/* int main()
{
    int i = 0;
    char *s = ft_itoa(0);
    printf("s: %s\nhex: ", s);
    for (i = 0; i < 6; i++)
    {
        printf("%02x", s[i]);
    }
    free(s);
} */

/* int main()
{
    char **s1 = ft_split("^^^1^^2a,^^^^3^^^^--h^^^^", '^');
    printf("[%s, ", s1[0]);
    printf("%s, ", s1[1]);
    printf("%s, ", s1[2]);
    printf("%s, ", s1[3]);
    printf("%s]", s1[4]);
    printf("\n");
} */

/* int main()
{
    char s[] = "  \t \t \n   \n\n\n\t";
    char *p;
    p = ft_strtrim(s, " \t\n");
    printf("%s", p);
    printf("\n");
    size_t i = 0;
    while (i < (strlen(p) + 1))
    {
        printf("%02x", p[i]);
        i++;
    }
} */

/* int main ()
{
    char *p;
    char *s1 = "Hello ";
    char *s2 = "World";
    
    p = ft_strjoin(s1, s2);
    printf("%s\n", p);
    int i = 0;
    while (i < 12)
    {
        printf("%02x", p[i]);
        i++;
    }    
} */

/* int main ()
{
    char *s = "01234";
    char *p;
    int i = 0;
    int l = 10;
    
    p = ft_substr("hola", 4294967295, 0);
    printf("%s\n", p);
    while (i < l + 1)
    {
        printf("%02x", p[i]);
        i++;
    }
} */

/* int main()
{
    int i = 0;
    char *s = "Hello World";
    char *p;
    p = ft_strdup(s);
    printf("%s\t", p);
    while (i < 12)
    {
        printf("%02x", p[i]);
        i++;
    }
    printf("\n");
} */

/* int main ()
{
    char *s;
    s = calloc(0, 0);
    char *s1;
    s1 = ft_calloc(0, 0);

    int i = 0;
    printf("Original: ");
    while (i < 5)
    {   
        printf("%02x", s[i]);
        i++;
    }
        printf("\nMeu: ");
        i = 0;
    while (i < 5)
    {    printf("%02x", s1[i]);
        i++;}
    free(s);
    free(s1);
}
 */
/* int main ()
{
    char *s = "    \t\n  +44akjsh523";
    printf("%d\n", atoi(s));
    printf("%d", ft_atoi(s));
} */
/* int main()
{
    char *s1 = "Hello World hello mind romaromano contascontador";
    char *s2 = "contadora";
    
    printf("%s", ft_strnstr(s1, s2, 49));
} */

/* int main ()
{
    char *s1 = "abcdefghij";
    char *s2 = "abcdefgxyz";
    printf("%d\t", memcmp(s1, s2, 7));

    printf("%d\t", ft_memcmp(s1, s2, 7));
} */

/* int main ()
{
    char *s = "Hello World";
    char *temp1;
    char *temp2;
    temp1 = memchr(s, 0, 12);
    printf("%s\n", temp1);
    temp2 = ft_memchr(s, 0, 12);
    printf("%s", temp2);
    
} */

/* int main ()
{
    char *s1 = "abcdefgh";
    char *s2 = "abcdwxyz";
    printf("%d\t", strncmp(s1, s2, 5));
    printf("%d\t", strncmp(s1, s2, 1));
    printf("%d\t", strncmp(s1, s2, 12));
    printf("%d\t\n", strncmp(s1, s2, 11));

    printf("%d\t", ft_strncmp(s1, s2, 5));
    printf("%d\t", ft_strncmp(s1, s2, 1));
    printf("%d\t", ft_strncmp(s1, s2, 12));
    printf("%d\t", ft_strncmp(s1, s2, 11));
} */

/* int main ()
{
    char *s = "Hello World";
    printf("%s\t", strrchr(s, 72));
    printf("%s\t", strrchr(s, 100));
    printf("%s\t", strrchr(s, 0));
    printf("%s\t", strrchr(s, 87));
    printf("%s\t", strrchr(s, 108));
    printf("%s\t\n", strrchr(s, 91));
    
    printf("%s\t", ft_strrchr(s, 72));
    printf("%s\t", ft_strrchr(s, 100));
    printf("%s\t", ft_strrchr(s, 0));
    printf("%s\t", ft_strrchr(s, 87));
    printf("%s\t", ft_strrchr(s, 108));
    printf("%s\t", ft_strrchr(s, 91));
    
    printf("\n\n\n");

    int i = 0;
    while (i < 12)
    {    printf("%02x", s[i]);
        i++;
    }
} */

/* int main ()
{
    char *s = "Hello World";
    printf("%s\t", strchr(s, 72));
    printf("%s\t", strchr(s, 100));
    printf("%s\t", strchr(s, 0));
    printf("%s\t", strchr(s, 87));
    printf("%s\t", strchr(s, 108));
    printf("%s\t\n", strchr(s, 91));
    
    printf("%s\t", ft_strchr(s, 72));
    printf("%s\t", ft_strchr(s, 100));
    printf("%s\t", ft_strchr(s, 0));
    printf("%s\t", ft_strchr(s, 87));
    printf("%s\t", ft_strchr(s, 108));
    printf("%s\t", ft_strchr(s, 91));
} */

/* int main ()
{
    printf("%c\t", toupper(100));
    printf("%c\t", toupper(113));
    printf("%c\t", toupper(0));
    printf("%c\t", toupper(86));
    printf("%c\t\n", toupper(123));
    printf("%c\t", ft_toupper(100));
    printf("%c\t", ft_toupper(113));
    printf("%c\t", ft_toupper(0));
    printf("%c\t", ft_toupper(86));
    printf("%c\t", ft_toupper(123));
} */

/* int main()
{
    char *src = " Worldyggyhgkggkgjjjgjgjgjgj";
    char dst[12] = "Hello";
    int i = 0;
    unsigned char *p;
    p = (void *)dst;
    printf("%s\n", dst);
    while (i < 12)
    {    printf("%02x", p[i]);
        i++;}
    i = 0;
    printf("\n");
    printf("%zu\n", ft_strlcat(dst, src, 13));
    printf("%s\n", dst);
    while (i < 12)
    {    printf("%02x", p[i]);
        i++;}
} */

/* int main ()
{
    char src[] = "ola mundo";
    char dst[] = "Hello";
    int i = 0;
    unsigned char *p;
    p = (void *)dst;
    while (i < 10)
    {    printf("%02x", p[i]);
        i++;}
    i = 0;
    printf("\n");
    printf("%zu\n", ft_strlcpy(dst, src, 3));
    printf("%s\n", dst);
    while (i < 10)
    {    printf("%02x", p[i]);
        i++;}
} */

/* int main (void)
{
    char s2 [] = "Hello Word";
    char s1 [] = "Hello Word";
    
    memmove(&*(s1-2), s1, 2);
    write(1, &*(s1-2), 13);
    printf("\n");
    ft_memmove(&*(s2-2), s2, 2);
    write(1, &*(s2-2), 13);
    
} */
/* int main(void)
{
    int i;
    i = 0;
    char s1[] = "Hello World";
    char s2[] = "Hello World";
    unsigned char *p1;
    p1 = (void *)s1;
    memcpy(&s1[3], s1, 6);
    printf("%s\n", s1);
    ft_memcpy(&s2[3], s2, 6);
    printf("%s", s2);
} */
/* int main(void)
{
    int i;
    i = 0;
    char s1[] = "Hello World";
    char s2[] = "Hello World";
    unsigned char *p1;
    unsigned char *p2;
    p1 = (void *)s1;
    p2 = (void *)s2;
    while (i < 12)
    {
        printf("Original: %02x\tCopia: %02x\n", p1[i], p2[i]);
        i++;
    }
    printf("\n");
    i = 0;
    bzero(s1, 5);
    ft_bzero(s2, 5);
    while (i < 12)
    {
        printf("Original: %02x\tCopia: %02x\n", p1[i], p2[i]);
        i++;
    }
} */