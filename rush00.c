void ft_putchar(char c);

void display_up_and_down(int x)
{
  int i;
  
  i = 0;
  while (i < x)
    {
      if (i == 0 || i == x-1)
	  ft_putchar('o');
      else
	  ft_putchar('-');
      i++;
    }
  ft_putchar('\n');
}

void display_middle(int x)
{
  int i;

  i = 0;
  while (i < x)
    {
      if (i == 0 || i == x-1)
	  ft_putchar('|');
      else
	  ft_putchar(' ');
      i++;
    }
  ft_putchar('\n');
}

void rush(int x, int y)
{
  int count;

  count = 2;
  if (x <= 0 || y <= 0)
    {
      return;
    }
  display_up_and_down(x);
  while (y > count)
    {
      display_middle(x);
     count++;
    }
  if (y > 1)
    display_up_and_down(x);
}
