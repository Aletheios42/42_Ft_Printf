#include "ft_printf.h"

int ft_print_token(t_token *token)
{
    int count = 0;
    
    if (!token)
        return (ft_printf("(null)"));
    count += ft_printf("Token{value=\"%s\", type=%d", 
            token->value ? token->value : "(null)", 
            token->type);
    if (token->next)
        count += ft_printf(", next=→}");
    else
        count += ft_printf(", next=NULL}");
    return (count);
}

int ft_print_token_list(t_token *tokens)
{
    int count = 0;
    t_token *current;
    
    if (!tokens)
        return (ft_printf("(null)"));
    current = tokens;
    while (current)
    {
        count += ft_print_token(current);
        count += ft_printf("\n");
        current = current->next;
    }
    return (count);
}
