void print_char(char c, int *count)
{
    *count += write(1, &c, 1);
}