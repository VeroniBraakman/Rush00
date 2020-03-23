void rush(int x, int y);

int ft_atoi(char *str);

int main(int argc, char **argv)
{
  int x;
  int y;

  if (argc == 3)
    {
      x = ft_atoi(argv[1]);
      y = ft_atoi(argv[2]);
      rush(x, y);
    }
  return(0);
}
