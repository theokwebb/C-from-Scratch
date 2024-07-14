#include <stdio.h>
#include <string.h>

void Create();
void Help();

typedef void (*funcptr)(void); // 'funcptr' is a synonym for the type ‘pointer to function which returns void’

// Structure to hold command information
typedef struct {
	char* name;		// Command name
	char* help;
	funcptr execute;	// Function to execute the command
} commandStruct;

// Command table
commandStruct commands[] = {
	{"help", "Help menu", Help},
	{"create", "Create a linked list", Create},
	{NULL, NULL, NULL} 	// End of the command table
};

void Create() {
	printf("Create function called.\n");
}

void Help() {
	printf("Commands:\n");

	for (int i = 0; commands[i].name != NULL; i++) {
		printf("\t%s - %s\n", commands[i].name, commands[i].help);
	}
}

// CommandHandler reads a command from the user,
// searches for it in the command table,
// and executes the corresponding function
void CommandHandler(char* input) {

	for (int i = 0; commands[i].name != NULL; i++) {
		if (strcmp(commands[i].name, input) == 0) {
			commands[i].execute(); 	// Execute the matched command's function
			// (*commands[i].execute)(); works too
			return;
		}
	}
	printf("Command not found. Type 'help' for a list of commands.\n");
}

int main(void)
{
	char input[256] = { 0 };
	printf("Command > ");

	if (fgets(input, sizeof(input), stdin) != NULL) {
		input[strcspn(input, "\n")] = '\0'; // Strip newline
	}

	CommandHandler(input); // Handle the command

	return 0;
}
