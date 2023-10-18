#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

/**
 * process_opcode - Process opcodes without values.
 * @opcode: The opcode to be processed.
 * @line_number: The line number in the input file where the opcode is found.
 */
void process_opcode(char *opcode, int line_number)
{
	printf("Processing opcode '%s' at line %d\n", opcode, line_number);
}

/**
 * process_opcode_with_value - Process opcodes with associated values.
 * @opcode: The opcode to be processed.
 * @value: The value associated with the opcode.
 * @line_number: The line number in the input file
 */
void process_opcode_with_value(char *opcode, int value, int line_number)
{
	printf("Processing opcode '%s' with value '%d' at line %d\n", opcode, value, line_number);
}

/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 *
 * Return: EXIT_SUCCESS on success, or EXIT_FAILURE on failure
 */

int main(int argc, char *argv[])
{
	FILE *file = fopen(argv[1], "r");
	char line[256];
	int line_number = 1;
	char opcode[256];
	int value;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	while (fgets(line, sizeof(line), file) != NULL)
	{
		if (sscanf(line, "%s %d", opcode, &value) == 2)
		{
			process_opcode_with_value(opcode, value, line_number);
		}
		else if (sscanf(line, "%s", opcode) == 1)
		{
			process_opcode(opcode, line_number);
		}
		line_number++;
	}
	fclose(file);
	return (0);
}
