void ft_putnbr(int n)
{
	intrev;

	rev = 0;
	if (n == 0)
		ft_putchar('0');
	else if (n < 0)
	{
		ft_putchar('-');
		n = n * -1;
	}
	while (n > 0)
	{
		rev = rev * 10;
		rev = rev + (n % 10);
		n = n / 10;
	}
	while (rev > 0)
	{
		n = rev % 10;
		ft_putchar(n + 48);
		rev = rev / 10;
	}
}
