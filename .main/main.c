/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsouza <jsouza@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 10:42:03 by jsouza            #+#    #+#             */
/*   Updated: 2025/11/06 14:52:41 by jsouza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void ft_print_hex(void *s, int size)
{
    int i;
    unsigned char *p; 
    p = s;
    for (i = 0; i < size; i++)
    {
        printf("%02x", p[i]);
    }
}
void ft_print_arrint(int *arr, int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d, ", arr[i]);
}

void match_atoi(int f1, int f2)
{
    if (f1 == f2)
        printf("\033[1;38;2;100;255;100mOK\033[0m\u2705\n\n");
    else
        printf("\033[1;38;2;255;0;0mKO\033[0m\u274C\n\n");
}
void match_is(int f1, int f2)
{
    if ((f1 != 0 && f2 != 0) || f1 == f2)
        printf("\033[1;38;2;100;255;100mOK\033[0m\u2705\n\n");
    else
        printf("\033[1;38;2;255;0;0mKO\033[0m\u274C\n\n");
}
void deletnode(void *d)
{
    free(d);
}
void atoi_test(void)
{
    int i = 1;
    char s[] = " \t\n  -209123masd21312";
    char s1[] = "1929012";
    char s2[] = "KAMSKDajhsbd";
    char s3[] = "     m12312-213";
    char s4[] = "\t\t\t+1238";
    char s5[] = "";
    printf("\n\t*******ATOI*******\n\n");
    printf("TEST %d\nExpected:%d\n", i++, atoi(s));
    printf("Got:\t %d\n", ft_atoi(s));
    match_atoi(atoi(s), ft_atoi(s));
    printf("TEST %d\nExpected:%d\n", i++, atoi(s1));
    printf("Got:\t %d\n", ft_atoi(s1));
    match_atoi(atoi(s1), ft_atoi(s1));
    printf("TEST %d\nExpected:%d\n", i++, atoi(s2));
    printf("Got:\t %d\n", ft_atoi(s2));
    match_atoi(atoi(s2), ft_atoi(s2));
    printf("TEST %d\nExpected:%d\n", i++, atoi(s3));
    printf("Got:\t %d\n", ft_atoi(s3));
    match_atoi(atoi(s3), ft_atoi(s3));
    printf("TEST %d\nExpected:%d\n", i++, atoi(s4));
    printf("Got:\t %d\n", ft_atoi(s4));
    match_atoi(atoi(s4), ft_atoi(s4));
    printf("TEST %d\nExpected:%d\n", i++, atoi(s5));
    printf("Got:\t %d\n", ft_atoi(s5));
    match_atoi(atoi(s5), ft_atoi(s5));
}
void bzero_test()
{
    char ft_s[] = "Hello World";
    char s[] = "Hello World";
    printf("\n\t*******BZERO*******\n\n");
    printf("Origial 1:%s\nOriginal2:%s\n", s, ft_s);
    bzero(s,12);
    ft_bzero(ft_s, 12);
    printf("TEST\nExpected:");
    ft_print_hex(s, 12);
    printf("\nGot:\t ");
    ft_print_hex(ft_s, 12);
    printf("\n\n");
}
void calloc_test()
{
    char *s;
    int *d;
    int f[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int i = 1;
    printf("\n\t*******CALLOC*******\n\n");
    s = calloc(12, sizeof(char));
    printf("\n\nTEST %d\nExpected Pointer:%p", i++, (void *)s);
    strcpy(s, "Hello World");
    printf("\tExpected String:%s", s);
    free(s);
    printf("\n");
    s = ft_calloc(12, sizeof(char));
    printf("Got Pointer:\t %p", s);
    strcpy(s, "Hello World");
    printf("\tGot String:\t%s", s);
    free(s);//test 1
    s = calloc(0, sizeof(char));
    printf("\n\nTEST %d\nExpected Pointer:%p", i++, (void *)s);
    printf("\tExpected String:%s", s);
    free(s);
    printf("\n");
    s = ft_calloc(0, sizeof(char));
    printf("Got Pointer:\t %p", s);
    printf("\tGot String:\t%s", s);
    free(s);//test 2
    s = calloc(2147483648, sizeof(char));
    printf("\n\nTEST %d\nExpected Pointer:%p", i++, (void *)s);
    printf("\tExpected String:%s", s);
    free(s);
    printf("\n");
    s = ft_calloc(2147483648, sizeof(char));
    printf("Got Pointer:\t %p", (void *)s);
    printf("\tGot String:\t%s", s);
    free(s);//test 3
    d = calloc(10, sizeof(int));
    printf("\n\nTEST %d\nExpected Pointer:%p", i++, (void *)d);
    memcpy(d, f, 40);
    printf("\tExpected Array:");
    ft_print_arrint(d, 10);
    free(d);
    printf("\n");
    d = ft_calloc(10, sizeof(int));
    printf("Got Pointer:\t %p", (void *)d);
    memcpy(d, f, 40);
    printf("\tGot Array:     ");

    ft_print_arrint(d, 10);
    free(d);//test 4
    printf("\n\n");
}
void islanum_test()
{
    char c = 'a';
    int i = 1;
    printf("\n\t*******ISALNUM*******\n\n");
    printf("TEST %d\nExpected:%d\n", i++, isalnum(c));
    printf("Got:\t %d\n", ft_isalnum(c));
    match_is(isalnum(c), ft_isalnum(c));
    printf("\n");
    c = 'A';
    printf("TEST %d\nExpected:%d\n", i++, isalnum(c));
    printf("Got:\t %d\n", ft_isalnum(c));
    match_is(isalnum(c), ft_isalnum(c));
    printf("\n");
    c = '6';
    printf("TEST %d\nExpected:%d\n", i++, isalnum(c));
    printf("Got:\t %d\n", ft_isalnum(c));
    match_is(isalnum(c), ft_isalnum(c));
    printf("\n");
    c = 123;
    printf("TEST %d\nExpected:%d\n", i++, isalnum(c));
    printf("Got:\t %d\n", ft_isalnum(c));
    match_is(isalnum(c), ft_isalnum(c));
    printf("\n");
    c = 94;
    printf("TEST %d\nExpected:%d\n", i++, isalnum(c));
    printf("Got:\t %d\n", ft_isalnum(c));
    match_is(isalnum(c), ft_isalnum(c));
    printf("\n");
    c = 60;
    printf("TEST %d\nExpected:%d\n", i++, isalnum(c));
    printf("Got:\t %d\n", ft_isalnum(c));
    match_is(isalnum(c), ft_isalnum(c));
    printf("\n");
    c = 47;
    printf("TEST %d\nExpected:%d\n", i++, isalnum(c));
    printf("Got:\t %d\n", ft_isalnum(c));
    match_is(isalnum(c), ft_isalnum(c));
}
void isalpha_test()
{
    char c = 'a';
    int i = 1;
    printf("\n\t*******ISALPHA*******\n\n");
    printf("TEST %d\nExpected:%d\n", i++, isalpha(c));
    printf("Got:\t %d\n", ft_isalpha(c));
    match_is(isalpha(c), ft_isalpha(c));
    printf("\n");
    c = 'A';
    printf("TEST %d\nExpected:%d\n", i++, isalpha(c));
    printf("Got:\t %d\n", ft_isalpha(c));
    match_is(isalpha(c), ft_isalpha(c));
    printf("\n");
    c = '0';
    printf("TEST %d\nExpected:%d\n", i++, isalpha(c));
    printf("Got:\t %d\n", ft_isalpha(c)); 
    match_is(isalpha(c), ft_isalpha(c));
    printf("\n");
    c = '-';
    printf("TEST %d\nExpected:%d\n", i++, isalpha(c));
    printf("Got:\t %d\n", ft_isalpha(c)); 
    match_is(isalpha(c), ft_isalpha(c));
}
void isascii_test()
{
    char c = 'a';
    int i = 1;
    printf("\n\t*******ISASCII*******\n\n");
    printf("TEST %d\nExpected:%d\n", i++, isascii(c));
    printf("Got:\t %d\n", ft_isascii(c));
    match_is(isascii(c), ft_isascii(c));
    printf("\n");
    c = 'A';
    printf("TEST %d\nExpected:%d\n", i++, isascii(c));
    printf("Got:\t %d\n", ft_isascii(c));
    match_is(isascii(c), ft_isascii(c));
    printf("\n");
    c = '0';
    printf("TEST %d\nExpected:%d\n", i++, isascii(c));
    printf("Got:\t %d\n", ft_isascii(c)); 
    match_is(isascii(c), ft_isascii(c));
    printf("\n");
    c = '-';
    printf("TEST %d\nExpected:%d\n", i++, isascii(c));
    printf("Got:\t %d\n", ft_isascii(c)); 
    match_is(isascii(c), ft_isascii(c));
    c = 0;
    printf("TEST %d\nExpected:%d\n", i++, isascii(c));
    printf("Got:\t %d\n", ft_isascii(c)); 
    match_is(isascii(c), ft_isascii(c));
    c = 31;
    printf("TEST %d\nExpected:%d\n", i++, isascii(c));
    printf("Got:\t %d\n", ft_isascii(c)); 
    match_is(isascii(c), ft_isascii(c));

    printf("TEST %d\nExpected:%d\n", i++, isascii(128));
    printf("Got:\t %d\n", ft_isascii(128)); 
    match_is(isascii(128), ft_isascii(128));

    printf("TEST %d\nExpected:%d\n", i++, isascii(200));
    printf("Got:\t %d\n", ft_isascii(200)); 
    match_is(isascii(200), ft_isascii(200));
    printf("TEST %d\nExpected:%d\n", i++, isascii(-1));
    printf("Got:\t %d\n", ft_isascii(-1)); 
    match_is(isascii(-1), ft_isascii(-1));
}
void isdigit_test ()
{
    char c = '0';
    int i = 1;
    printf("\n\t*******ISDIGIT*******\n\n");
    printf("TEST %d\nExpected:%d\n", i++, isdigit(c));
    printf("Got:\t %d\n", ft_isdigit(c));
    match_is(isdigit(c), ft_isdigit(c));
    printf("\n");
    c = '1';
    printf("TEST %d\nExpected:%d\n", i++, isdigit(c));
    printf("Got:\t %d\n", ft_isdigit(c));
    match_is(isdigit(c), ft_isdigit(c));
    printf("\n");
    c = '6';
    printf("TEST %d\nExpected:%d\n", i++, isdigit(c));
    printf("Got:\t %d\n", ft_isdigit(c));
    match_is(isdigit(c), ft_isdigit(c));
    printf("\n");
    c = 123;
    printf("TEST %d\nExpected:%d\n", i++, isdigit(c));
    printf("Got:\t %d\n", ft_isdigit(c));
    match_is(isdigit(c), ft_isdigit(c));
    printf("\n");
    c = 94;
    printf("TEST %d\nExpected:%d\n", i++, isdigit(c));
    printf("Got:\t %d\n", ft_isdigit(c));
    match_is(isdigit(c), ft_isdigit(c));
    printf("\n");
    c = 60;
    printf("TEST %d\nExpected:%d\n", i++, isdigit(c));
    printf("Got:\t %d\n", ft_isdigit(c));
    match_is(isdigit(c), ft_isdigit(c));
    printf("\n");
    c = 47;
    printf("TEST %d\nExpected:%d\n", i++, isdigit(c));
    printf("Got:\t %d\n", ft_isdigit(c));
    match_is(isdigit(c), ft_isdigit(c));
}
void isprint_test()
{
    char c = 'a';
    int i = 1;
    printf("\n\t*******ISPRINT*******\n\n");
    printf("TEST %d\nExpected:%d\n", i++, isprint(c));
    printf("Got:\t %d\n", ft_isprint(c));
    match_is(isprint(c), ft_isprint(c));
    printf("\n");
    c = 'A';
    printf("TEST %d\nExpected:%d\n", i++, isprint(c));
    printf("Got:\t %d\n", ft_isprint(c));
    match_is(isprint(c), ft_isprint(c));
    printf("\n");
    c = '0';
    printf("TEST %d\nExpected:%d\n", i++, isprint(c));
    printf("Got:\t %d\n", ft_isprint(c)); 
    match_is(isprint(c), ft_isprint(c));
    printf("\n");
    c = '-';
    printf("TEST %d\nExpected:%d\n", i++, isprint(c));
    printf("Got:\t %d\n", ft_isprint(c)); 
    match_is(isprint(c), ft_isprint(c));
    c = 0;
    printf("TEST %d\nExpected:%d\n", i++, isprint(c));
    printf("Got:\t %d\n", ft_isprint(c)); 
    match_is(isprint(c), ft_isprint(c));
    c = 31;
    printf("TEST %d\nExpected:%d\n", i++, isprint(c));
    printf("Got:\t %d\n", ft_isprint(c)); 
    match_is(isprint(c), ft_isprint(c));

    printf("TEST %d\nExpected:%d\n", i++, isprint(128));
    printf("Got:\t %d\n", ft_isprint(128)); 
    match_is(isprint(128), ft_isprint(128));
}
void itoa_test()
{
    int i = 1;
    printf("\n\t*******ITOA*******\n\n");
    printf("TEST %d\nExpected:-1235\n", i++);
    printf("Got:\t %s\n\n", ft_itoa(-1235));
    printf("TEST %d\nExpected:12837\n", i++);
    printf("Got:\t %s\n\n", ft_itoa(12837));
    printf("TEST %d\nExpected:2147483647\n", i++);
    printf("Got:\t %s\n\n", ft_itoa(2147483647));
    printf("TEST %d\nExpected:-2147483648\n", i++);
    printf("Got:\t %s\n\n", ft_itoa(-2147483648));
    printf("TEST %d\nExpected:0\n", i++);
    printf("Got:\t %s\n\n", ft_itoa(0));
}
void lstadd_back_test()
{
    t_list *head;
    t_list *n1;
    t_list *n2;
    t_list *n3;
    int i = 1;

    head = ft_lstnew(ft_strdup("head"));
    n1 = ft_lstnew(ft_strdup("n1"));
    n2 = ft_lstnew(ft_strdup("n2"));
    n3 = ft_lstnew(ft_strdup("n3"));
    head->next = n1;
    n1->next = n2;
    printf("\n\t*******LSTADD_BACK*******\n\n");
    printf("TEST %d\nExpected:%s, %s, %s, %s\t", i++, (char *)head->content, 
    (char *)head->next->content, (char *)head->next->next->content, 
    (char *)n3->content);
    printf("Last Next: %s\n", (char *)n3->next);
    ft_lstadd_back(&head, n3);
    printf("Got:\t %s, %s, %s, %s\t", (char *)head->content, (char *)head->next->content, (char *)head->next->next->content, (char *)head->next->next->next->content);
    printf("Last Next: %s\n\n", (char *)head->next->next->next->next);
}
void lstadd_front_test()
{
    t_list *head;
    t_list *n1;
    t_list *n2;
    t_list *Nhead;
    int i = 1;

    head = ft_lstnew(ft_strdup("head"));
    n1 = ft_lstnew(ft_strdup("n1"));
    n2 = ft_lstnew(ft_strdup("n2"));
    Nhead = ft_lstnew(ft_strdup("New head"));
    head->next = n1;
    n1->next = n2;
    printf("\n\t*******LSTADD_FRONT*******\n\n");
    printf("TEST %d\nExpected:%s, %s, %s, %s \t", i, (char *)Nhead->content, (char *)head->content, 
    (char *)head->next->content, (char *)head->next->next->content);
    printf("First Next: %p\n", head);
    ft_lstadd_front(&head, Nhead);
    printf("Got:\t %s, %s, %s, %s \tFirst Next: %p\n\n", (char *)Nhead->content, (char *)Nhead->next->content, (char *)Nhead->next->next->content, 
    (char *)Nhead->next->next->next->content, Nhead->next);
}
void lstclear_test()
{
    t_list *head;
    t_list *n1;
    t_list *n2;
    t_list *n3;
    int i = 1;

    head = ft_lstnew(ft_strdup("head"));
    n1 = ft_lstnew(ft_strdup("n1"));
    n2 = ft_lstnew(ft_strdup("n2"));
    n3 = ft_lstnew(ft_strdup("n3"));
    head->next = n1;
    n1->next = n2;
    n2->next = n3;
    printf("\n\t*******LSTCLEAR*******\n\n");
    printf("List: %s, %s, %s, %s\n", (char *)head->content, (char *)head->next->content,
    (char*)head->next->next->content, (char*)head->next->next->next->content);
    printf("TEST %d\nExpected:NULL\t\n", i++);   
    ft_lstclear(&head, &deletnode);
    printf("Got:\t %s\n\n", (char*)head);
}
void lstsize_test()
{
    int a=1, b=2, c=3;
    
    t_list *head = ft_lstnew(&a);
    t_list *node = ft_lstnew(&b);
    t_list *node2 = ft_lstnew(&c);

    head->next = node;
    node->next = node2;

    printf("\n\t*******LSTSIZE*******\n\n");
    printf("%d, %d, %d", *(int *)head->content, *(int *)head->next->content, *(int *)head->next->next->content);
}
void strtrim_test()
{
	char	*s1 = "      lorem \n ipsum \t dolor \n sit \t amet      ";
	char	*set = " ";
    char *trimed = ft_strtrim(s1, set);

	printf("%s\n", trimed);
}


int main()
{
    atoi_test();
    bzero_test();
    calloc_test();
    islanum_test();
    isalpha_test();
    isascii_test();
    isdigit_test();
    isprint_test();
    itoa_test();
    lstadd_back_test();
    lstadd_front_test();
    lstclear_test();
    lstsize_test();
    strtrim_test();
}
