int ft_atoi(const char *str)
{
	inti;
	intnumb;
	intispos;

	numb = 0;
	i = 0;
	ispos = 1;
	while (str[i] == ' ' || (str[i] <= 13 && str[i] >= 9))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			ispos = -1;
		i++;
	}
	while (str[i] != '\0' && ft_isdigit(str[i]) == 1)
	{
		numb *= 10;
		numb += (str[i] - 48);
		i++;
	}
	return (numb *= ispos);
}
