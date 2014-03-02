/*
** my_map.c for my_map in /home/mathon_j/rendu/sudoki-bi/src
**
** Made by Jérémy MATHON
** Login   <mathon_j@mathonj>
**
** Started on  Sun Mar  2 13:39:49 2014 Jérémy MATHON
** Last update Sun Mar  2 13:41:07 2014 Jérémy MATHON
*/

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
