#include "shell.h"

/**
 * not_interactive - for non-interactive
 *
 * Return: void
 */

void not_interactive(void)
{
	char **current_cmd = NULL;
	int i, type_cmd = 0;
	size_t s = 0;

	if (!(isatty(STDIN_FILENO)))
	{
		while (getline(&_line, &s, stdin) != -1)
		{
			rm_newline(_line);
			rm_comment(_line);
			cmds = tokenizer(_line, ";");
			for (i = 0; cmds[I] != NULL; i++)
			{
				current_cmd = tokenizer(cmds[I], " ");
				if (current_cmd[0] == NULL)
				{
					free(current_cmd);
					break;
				}
				type_cmd = parse_cmd(current_cmd[0]);
				_init(current_cmd, type_cmd);
				free(current_cmd);
			}
			free(cmds);
		}
		free(_line);
		exit(status);
	}
}
