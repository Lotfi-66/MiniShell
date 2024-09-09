

#include "../includes/minishell.h"

void	builtin_pwd(void)
{
	char	current_directory[1024];

	if (getcwd(current_directory, sizeof(current_directory)) != NULL)
		printf("%s\n", current_directory);
	else
		perror("pwd");
}
