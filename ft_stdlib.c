/*
* Author: Robert Dragan
* Github: nucata
* Date: 01-10-20201-10-20222 
* Description: Library with stdlib functions.
*/

int	ft_atoi(char *str) {
	int	res = 0;
	int	index = 0;
	int	sign = 1;

	while (str[index] == ' ' || str[index] == '-' || str[index] == '+') {
		if (str[index] == '-')
			sign *= -1;
		index++;
	}
	while (str[index] != '\0') {
		if(str[index] >= '0' && str[index] <= '9')
			res = res * 10 + str[index] - '0';
		else
			return (res * sign);
		index++;
	}
	return (res * sign);
}
