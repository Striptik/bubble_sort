/*
** Tri a bulle en C
**
** tableau de nombres random a changer dans le header (sort.h)
**
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "sort.h"

int		sort(void)
{
  int		*arr;

  arr = malloc(sizeof(int) * (NB_VALUES + 1));
  if (!arr)
    return (ERROR);
  init_array(arr);
  disp_array(arr, 0);
  sort_array(arr);
  disp_array(arr, 1);
  return (SUCESS);
}

void		init_array(int *arr)
{
  int		i = 0;

  while (i < NB_VALUES)
    arr[i++] = (rand() % (NB_MAX / 10));
  arr[i] = END_VALUE;
  return ;
}

void		disp_array(int *arr, int opt)
{
  int		i = 0;

  (opt == 1) ? (printf("Valeurs de la liste de nombres triés :\n")) : printf("Valeurs de la liste de nombres NON triés :\n");
  sleep(1);
  while (arr[i] != END_VALUE)
    printf("%d\t", arr[i++]);
  printf("\n");
  sleep(1);
  return ;
}

void		sort_array(int *arr)
{
  int		i;
  int		yess = 0;
  int		tmp_nb;

  while (!yess)
    {
      yess = 1;
      i = 0;
      while (arr[i] != END_VALUE)
	{
	  if (arr[i] > arr[i + 1] && arr[i + 1] != END_VALUE)
	    {
	      tmp_nb = arr[i];
	      arr[i] = arr[i + 1];
	      arr[i + 1] = tmp_nb;
	      yess = 0;
	    }
	  i++;
	}
    }
}

int		main(int ac, char **av)
{
  if (ac != 1)
    {
      fprintf(stderr, "Les arguments ne sont pas nécéssaires\n");
      return (ERROR);
    }
  else
    {
      if (sort() == ERROR)
	{
	  fprintf(stderr, "Problème dans le tri.\n");
	  return (ERROR);
	}
      else
	{
	  printf("Tri effectué avec succès !\n");
	  return (SUCESS);
	}
    }
}
