/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alepinto <alepinto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 22:02:31 by alepinto          #+#    #+#             */
/*   Updated: 2023/04/13 06:59:08 by alepinto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

typedef enum e_token_type t_token_type;
typedef struct s_token t_token;
typedef struct s_tree t_tree;

int	ft_nbrlen(long n);
int	ft_printf(char const *format, ...);
int	ft_typechecker(char format, va_list ap);
int	ft_putnbr(long n);
int	ft_putnbr1(int n);
int	ft_putunbr(unsigned int n);
int	ft_puthex(unsigned long n, char *hexa_base);
int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_putptr(unsigned long ptr);

int		ft_print_token(t_token *token);
int		ft_print_token_list(t_token *tokens);
int		ft_print_tree_indent(int depth);
int		ft_print_tree(t_tree *tree, int depth);
#endif
