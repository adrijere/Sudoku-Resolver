/*
** check_line.c for sudoki-bi in /home/cardon_v/Documents/Tek-1/B02/Rush
**
** Made by Valentin Cardon
** Login   <cardon_v@epitech.net>
**
** Started on  Fri Feb 28 22:37:57 2014 Valentin Cardon
** Last update Sun Mar  2 06:29:52 2014 Jérémy MATHON
*/

int		check_line(char **map, int k, int i)
{
  int		j;

  j = 1;
  while (j < 9)
    {
      if (map[i][j] == k)
	return (1);
      j++;
    }
  return (0);
}

int		check_colone(char **map, int k, int j)
{
  int		i;

  i = 1;
  while (i < 9)
    {
      if (map[i][j] == k)
	return (1);
      i++;
    }
  return (0);
}

int		check_bloc(char **map, int k, int i, int j)
{
  int		ibis;
  int		jbis;

  ibis = 3 * (i / 3);
  jbis = 3 * (j / 3);
  while (i <= (ibis + 3))
    {
      while (j <= (jbis + 3))
	{
	  if (map[i][j] == k)
	    return (1);
	  j++;
	}
      i++;
    }
  return (0);
}
