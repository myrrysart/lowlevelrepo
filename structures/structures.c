/* ************************************************************************** */
/*                                                                            */
/*                                                             _  __    __    */
/*   structures.c                                             /_\/ / /\ \ \   */
/*                                                           //_\\ \/  \/ /   */
/*   By: art <hello@myrrys.art>                             /  _  \  /\  /    */
/*                                                          \_/ \_/\/  \/     */
/*   Created: 2024/06/24 16:29:23 by art                                      */
/*   Updated: 2024/06/29 19:09:44 by artwizard                 myrrys.art     */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define MAX_IDS 32

struct	s_employee_t
{
	int		id;
	bool		isplayercharacter;
};

int fn_initemployee(struct s_employee_t *e)
{
	static int numEmployees = 0;
	numEmployees++;
	e->id = numEmployees;
	e->isplayercharacter = true;
	return numEmployees;
}

int main (void)
{
	int n = 0;

	struct s_employee_t *employees = malloc(sizeof(struct s_employee_t)*MAX_IDS);
	if (employees == NULL)
	{
		printf("malloc failed\n");
		return (-1);
	}
	
	while (n < MAX_IDS)
	{
		int id = fn_initemployee(&employees[n]);
		printf("New employee, ID %d\n", id);
		n++;
	}
	free(employees);
	employees = NULL;	
	return (0);
}
