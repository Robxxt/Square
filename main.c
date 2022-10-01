/*
* Author: Robert Dragan
* Github: nucata
* Date: 01-10-2022 
* Description: This program receives two values (x, y) between 0 and 100 and displays a rectangle with that sizes.
*/

#include "ft_strlib.h"
#include "ft_stdlib.h"

void    draw_square(int width, int height)
{
    int x;
    int y;
    
    y = 0;
    if (width <= 100 && height <= 100)
    {
        while (width > 0 && y < height)
        {
            x = 0;
            while (x < width) {
                if ((x == 0 || x == width - 1) && (y == 0 || y == height - 1))
                    ft_printchar('0');
                else if (x == 0 || x == width - 1)
                    ft_printchar('|');
                else if (y == 0 || y == height - 1)
                    ft_printchar('-');
                else
                    ft_printchar(' ');
                x++;
            }
            ft_printchar('\n');
            y++;
        }
    }
    else
        ft_printstr("Srry :/ ... Today I only will print values between 0 and 100\n");
}
int	main(int argc, char **argv) {
	int	x;
	int	y;

	if (argc != 3) {
		ft_printstr("Upps... The program is missing some arguments to work :(\n");
		ft_printstr("You should type this in your terminal:\n$./square 10 10\n");
		ft_printstr("Then you will get something like this ;)\n");
		draw_square(10, 10);
		ft_printstr("You should try it by yourself XD\n");
		return (2);
	}
	x = ft_atoi(argv[1]);
	y = ft_atoi(argv[2]);
	draw_square(x, y);
}
