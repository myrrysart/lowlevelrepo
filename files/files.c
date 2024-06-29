/* ************************************************************************** */
/*                                                                            */
/*                                                             _  __    __    */
/*   files.c                                                  /_\/ / /\ \ \   */
/*                                                           //_\\ \/  \/ /   */
/*   By: artwizard <hello@myrrys.art>                       /  _  \  /\  /    */
/*                                                          \_/ \_/\/  \/     */
/*   Created: 2024/06/29 19:29:56 by artwizard                                */
/*   Updated: 2024/06/29 20:02:13 by artwizard                 myrrys.art     */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
 
int main (int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("usage: %s <filename>\n", argv[0]);
		return (0);
	}
	int fd = open(argv[1], O_RDWR | O_CREAT, 0644);
	if (fd == -1)
	{
		perror("open");
		return(-1);
	}

	char *mydata = "Hello new file\n";
	write(fd, mydata, strlen(mydata));

	close(fd);	
	return (0);
}
