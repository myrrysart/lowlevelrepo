/* ************************************************************************** */
/*                                                                            */
/*                                                             _  __    __    */
/*   structures.c                                             /_\/ / /\ \ \   */
/*                                                           //_\\ \/  \/ /   */
/*   By: art <hello@myrrys.art>                             /  _  \  /\  /    */
/*                                                          \_/ \_/\/  \/     */
/*   Created: 2024/06/24 16:29:23 by art                                      */
/*   Updated: 2024/06/27 08:54:04 by artwizard                 myrrys.art     */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdbool.h>

#define MAX_IDS 32

struct employee_t {
	int	id;
	char	firstname[32];
	char	lastname[64];
	bool	isplayercharacter;
};

int main (){
	
