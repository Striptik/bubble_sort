/*
** Header du fichier C sort.c
*/

#ifndef SORT_H_
# define SORT_H_

# define ERROR		-1
# define SUCESS		0
# define END_VALUE	-1

/*
**	Nombre de valeurs ( à modifier, strictement supérieur à 0 )
*/

# define NB_VALUES	300

/*
**	Nombre maximal (à modifier, superieur à 10)
*/

# define NB_MAX         1000000


/*
** Fonctions
*/

int		sort(void);
void		init_array(int *arr);
void		disp_array(int *arr, int opt);
void		sort_array(int *arr);

#endif /* !SORT_H_ */
