/*
** get_next_line.h for get_next_line in /home/mathon_j/rendu/CPE_2013_getnextline/GNL_Bodart
** 
** Made by Jérémy MATHON
** Login   <mathon_j@epitech.net>
** 
** Started on  Thu Feb 20 16:48:39 2014 Jérémy MATHON
** Last update Thu Feb 20 16:50:11 2014 Jérémy MATHON
*/

#define BUFF_SIZE 10

typedef	struct	s_list	t_list;

struct		s_list
{
  char		c;
  t_list	*next;
};

char	*get_next_line(const int);
