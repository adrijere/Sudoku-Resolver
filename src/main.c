/*
** main.c for main in /home/mathon_j/rendu/sudoki-bi/src
**
** Made by Jérémy MATHON
** Login   <mathon_j@mathonj>
**
** Started on  Fri Feb 28 22:48:39 2014 Jérémy MATHON
** Last update Sun Mar  2 11:37:41 2014 Jérémy MATHON
*/

#include	<unistd.h>
#include	<stdlib.h>
#include	<stdio.h>
#include	<sys/types.h>
#include	<string.h>
#include	<sys/stat.h>
#include	<fcntl.h>
#include	"../include/my_sudoki.h"

char		**show_map(char **map)
{
  int		i;

  i = 0;
  my_putstr("|------------------|\n");
  while (i != 9)
    {
      my_putstr(map[i]);
      my_putchar('\n');
      i++;
    }
  my_putstr("|------------------|\n");
}

char		**my_parser(int ac, char **av, char **map, int i)
{
  char		*str;

  if ((ac != 1) || ((str = get_next_line(0)) == NULL))
    {
      my_putstr("./sudoki-bi < [file].txt\n");
      return (NULL);
    }
  if ((strcmp("|------------------|", str)) != 0)
    {
      my_putstr("Wrong sudoki file.\n");
      return (NULL);
    }
  map = my_malloc(sizeof(char*) * 9);
  while (i++ != 8)
    {
      map[i] = my_malloc(sizeof(char) * 18);
      map[i] = get_next_line(0);
    }
  str = get_next_line(0);
  if ((strcmp("|------------------|", str)) != 0)
    {
      my_putstr("Wrong sudoki file.\n");
      return (NULL);
    }
  return (map);
}

char		**check_map(char **map)
{
  int		i;
  int		j;

  i = 0;
  j = 2;
  while (i != 9)
    {
      while (j <= 18)
	{
	  if (map[i][j] == ' ')
	    map[i][j] = '0';
	  j += 2;
	}
      j = 0;
      i++;
    }
  return (map);
}

char	**suppr_espace(char **map)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  while (i != 9)
    {
      while (j <= 18)
	{
	  if (map[i][j] == ' ')
	    map[i][j] = '.';
	  j++;
	}
      j = 0;
      i++;
    }
  return (map);
}

int	main(int ac, char **av)
{
  char	**map;
  int	i;

  i = -1;
  if ((map = my_parser(ac, av, map, i)) == NULL)
    return (1);
  show_map(map);
  map = check_map(map);
  map = suppr_espace(map);
  valide(map, 0);
  show_map(map);
  free(map);
  return (0);
}
