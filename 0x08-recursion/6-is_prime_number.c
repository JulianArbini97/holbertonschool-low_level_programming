int prim(int y, int x)
{
  if (y % x == 0)
    return (0);
  if (x * x > y)
    return (1);
  return (prim(y, x + 1));
}

int is_prime_number(int n)
{
  if (n <= 1)
    return (0);
  return (prim(n,2));
}
