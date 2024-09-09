

#include "../includes/minishell.h"

void	builtin_env(void)
{
	char	**env;
	int		i;

	env = g_environment;
	i = 0;
	while (env[i] != NULL)
	{
		printf("%s\n", env[i]);
		i++;
	}
}
