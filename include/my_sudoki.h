/*
** my_sudoki.h for my_sudoki in /home/mathon_j/rendu/sudoki-bi/src
** 
** Made by Jérémy MATHON
** Login   <mathon_j@mathonj>
** 
** Started on  Fri Feb 28 22:33:52 2014 Jérémy MATHON
** Last update Sun Mar  2 13:42:57 2014 Jérémy MATHON
*/

#ifndef MY_SUDOKI_H_
# define MY_SUDOKI_H_

#define BUFF_SIZE 10

#include	<stddef.h>

typedef struct  s_list  t_list;

struct          s_list
{
  char          c;
  t_list        *next;
};

char    *get_next_line(const int);

void	my_putchar(char c);
int	my_getnbr(char *str);
void	my_putstr(char *str);
int	my_strlen(int *str);
void	my_show_list(t_list *list);
t_list	*my_put_list(t_list *list, char c);
int	valide(char **, int);
void	*my_malloc(size_t size);
char	**check_map(char **map);
char	**show_map(char **map);

#endif /* !MY_SUDOKI_H_ */
