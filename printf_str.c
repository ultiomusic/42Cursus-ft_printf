void print_str(char *str, int *count)
{
    if (!str)
    {
        *count += (write (1, "(null)", 6);
        return ;)
    }
    *count += write(1, str, ft_strlen(str));
}