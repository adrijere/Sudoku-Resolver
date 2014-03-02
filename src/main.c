/*
** main.c for main in /home/mathon_j/rendu/sudoki-bi/src
**
** Made by Jérémy MATHON
** Login   <mathon_j@mathonj>
**
** Started on  Fri Feb 28 22:48:39 2014 Jérémy MATHON
** Last update Sun Mar  2 16:04:03 2014 Jérémy MATHON
*/

#include	<unistd.h>
#include	<stdlib.h>
#include	<stdio.h>
#include	<sys/types.h>
#include	<string.h>
#include	<sys/stat.h>
#include	<fcntl.h>
#include	"../include/my_sudoki.h"

char		*my_parstr(char *str)
{
  char		*tmp;
  int		i;
  int		j;

  i = 0;
  j = 0;
  tmp = my_malloc(sizeof(char) * (9 + 1));
  tmp[9] = '\0';
while (str[i] != 0)
    {
      if (str[i] >= 48 && str[i] <= 57)
	{
	  tmp[j] = str[i];
	  j++;
	  i++;
	}
      i++;
    }
  return (tmp);
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
  map = my_malloc(sizeof(char*) * (9 + 1));
  map[9] = NULL;
  while (i++ != 8)
    {
      map[i] = my_malloc(sizeof(char) * 18 + 1);
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

int	main(int ac, char **av)
{
  char	**map;
  int	i;

  i = -1;
  if ((map = my_parser(ac, av, map, i)) == NULL)
    return (1);
  map = check_map(map);
  while (i++ != 8)
    map[i] = my_parstr(map[i]);
  show_map(map);
  valide(map, 0);
  show_map(map);
  free(map);
  return (0);
}
