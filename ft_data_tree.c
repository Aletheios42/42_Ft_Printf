#include "ft_printf.h"

int ft_print_tree_indent(int depth)
{
    int count = 0;
    int i = 0;
    
    while (i < depth)
    {
        count += ft_printf("  ");
        i++;
    }
    return (count);
}

int ft_print_tree(t_tree *tree, int depth)
{
    int count = 0;
    
    if (!tree)
        return (ft_printf("(null)"));
    count += ft_print_tree_indent(depth);
    count += ft_printf("Tree{cmd=\"%s\", opts=\"%s\"\n", 
            tree->cmd ? tree->cmd : "(null)",
            tree->options ? tree->options : "(null)");
    if (tree->left)
    {
        count += ft_print_tree_indent(depth + 1);
        count += ft_printf("left=\n");
        count += ft_print_tree(tree->left, depth + 2);
    }
    if (tree->right)
    {
        count += ft_print_tree_indent(depth + 1);
        count += ft_printf("right=\n");
        count += ft_print_tree(tree->right, depth + 2);
    }
    count += ft_print_tree_indent(depth);
    count += ft_printf("}\n");
    return (count);
}
