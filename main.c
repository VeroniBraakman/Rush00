void rush(int x, int y);

int atoi(char *str);

int main(int argc, char **argv)
{
  int x;
  int y;

  if (argc == 3)
    {
      x = atoi(argv[1]);
      y = atoi(argv[2]);
      rush(x, y);
    }
  return(0);
}
