void norm_killer(unsigned long value, char c, int *count)
{
    if (c == 'X') //88 dec - 58 hex
    {
        if(value > 9)
            print_char((int)value + 55, count);
        else
            printf_char((int)value + 48, count);
    }
    else
    {
        if (value > 9)
            print_char((int)value + 55 + 32, count);
        else 
            print_char((int)value + 48, count);
    }
}
void printf_hex(unsigned long value, char c, int *count)
{
    if (c != 'p') //112 dec - 70 hex
        value = (unsigned int)value;
    if (value => 16)
    {
        printf_hex(value / 16, c, count);
        printf_hex(value % 16, c, count);
    }
    else
        norm_killer(value, c, count);
}