int ft_atoi(char *str)
{
  int i;
  int n;

  i = 0;
  n = 0;
  while (str[i] >= '0' && str[i] <= '9')
    {
      n = 10 * n + (str[i] - '0');
      i++;
    }
  return (n);
}
