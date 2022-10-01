/*
* Author: Robert Dragan
* Github: nucata
* Date: 01-10-2022 
* Description: This is a library of common string functions.
*/

#include <unistd.h>

int	ft_strlen(char *str) {
	int	index = 0;

	while (str[index] != '\0')
		index++;
	return (index);
}

void	ft_printchar(char c) {
	write(1, &c, 1);
}

void	ft_printstr(char *str) {
	write(1, str, ft_strlen(str));
}
