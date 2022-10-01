#include "ft_strlib.h"

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
                    ft_printchar('0');
                }
                else if (x == 0 || x == width - 1)
                {
                    ft_printchar('|');
                }
                else if (y == 0 || y == height - 1)
                {
                    ft_printchar('-');
                }
                else
                {
                    ft_printchar(' ');
                }
                x++;
            }
            ft_printchar('\n');
            y++;
        }
    }
    else
    {
        ft_printstr("In order to avoid unwanted behavior I limit the input to 100x100 (most screens will display correctly)\n");
    }
}
int main()
{
    // Here you can call with any value
    print_square(10, 10);
    return (0);
}
