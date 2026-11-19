#ifndef __DUMBSHELL_PARSE_H
#define __DUMBSHELL_PARSE_H

// Size of the buffer
#define BUFFER_SIZE 100

// Take a string in parameter and return a tab of commands and parameters
char **list_of_command(char user_input[BUFFER_SIZE]);

#endif
