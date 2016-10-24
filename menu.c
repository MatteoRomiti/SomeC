#define MAXL 51
#include <stdio.h>

typedef enum {
	c_search,
	c_edit,
	c_print,
	c_end,
	c_err
} t_commands;


t_commands readCommand(void) {
	t_commands c;
	char cmd[MAXL];
	char *table[c_err] = {"search", "edit", "print", "end"};
	printf("Command (search, edit, print, end):");
	scanf("%s", &cmd); //strToLower(cmd);
	c = c_search;
	while(c<c_err && strcmp(cmd, table[c])!=0)
		c++;
	return(c);
}

int main(void){
	t_commands commandCode;
	char row[MAXL];
	int i, again = 1;
	while(again){
		commandCode = readCommand();
		gets(row); //read the rest of the input: search "this text here"
		switch(commandCode){
			case c_search: printf("searching %s\n", row); // search(row);
				break;
			case c_edit: printf("editing %s\n", row); //edit(row);
				break;
			case c_print: printf("printing %s\n", row); //print(row);
				break;
			case c_end: again = 0;
				break;
			case c_err: 
				default: printf("wrong command\n");
		}
	}
}
