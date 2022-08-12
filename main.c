#include <unistd.h>

int len(char *str)
{
    int i;
    
    i = 0;
    while (str[i] != '\0')
    {
        i++;
        
    }
    return (i);
}

void    print_char(char c)
{
    write(1, &c, 1);
}

// Prints a string in the terminal
void    print_me(char *str)
{
    write(1, str, len(str));
}

void    print_square(int width, int height)
{
    int x;
    int y;
    
    y = 0;
    if (width <= 100 && height <= 100)
    {
        while (width > 0 && y < height)
        {
            x = 0;
            while (x < width)
            {
                if ((x == 0 || x == width - 1) && (y == 0 || y == height - 1))
                {
                    print_char('0');
                }
                else if (x == 0 || x == width - 1)
                {
                    print_char('|');
                }
                else if (y == 0 || y == height - 1)
                {
                    print_char('-');
                }
                else
                {
                    print_char(' ');
                }
                x++;
            }
            print_char('\n');
            y++;
        }
    }
    else
    {
        print_me("In order to avoid unexpected behavior I limit the input to 100x100 (most screens will display correctly)\n");
    }
}
int main()
{
    // Here you can call with any value
    print_square(10, 10);
    return (0);
}
