/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akdovlet <akdovlet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 11:41:41 by akdovlet          #+#    #+#             */
/*   Updated: 2024/06/27 13:53:10 by akdovlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H

/* printf, perror */
# include <stdio.h>
/* malloc, free, exit, getenv */
# include <stdlib.h>
/* writem access, open, read, close, fork, getcwd, chdir, dup, dup2, pipe
execve, isatty, ttyname, ttyslot */
# include <unistd.h>
/* readline, rl_clear_history, rl_on_new_line, rl_replace_line, rl_redisplay
add_history*/
# include <readline/readline.h>
# include <readline/history.h>
/* signal, sigaction, sigemptyset, sigaddset, kill */
# include <sys/wait.h>
/* stat, lstat, fstat */
# include <sys/stat.h>
/* open */
# include <fcntl.h>
/* opendir, readdir, closedir */
# include <dirent.h>
/* strerror */
# include <string.h>
/* ioctl */
# include <sys/ioctl.h>
/* tcsetattr, tcgetattr */
# include <termios.h>
/* tgetent, tgetflag, tgetnum, getstr, tgoto, tputs */
# include <curses.h>
# include <stdbool.h>
# include "libft.h"

// typedef and struct used in conjunction to create an alias for s_tree
typedef struct s_tree
{
	char			*value;
	int				operator;
	struct s_tree	*left;
	struct s_tree	*right;
}	t_tree;

enum e_token
{
	WORD,
	OPERATOR,
	S_QUOTE = 39,
	D_QUOTE = 34,
	PARENTHESIS_L = 40,
	PARENTHESIS_R = 41,
	AND = 38,
	OR = 124
};

typedef	struct s_token
{
	enum e_token type;
	char	*value;
	struct	s_token	*next;
}	t_token;


#endif
