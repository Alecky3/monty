#include "monty.h"
/**
 * pushint - int for push opcode
 * @list: the content of the file
 * @ln: line number
 * Return: the number
 */

int pushint(char *list, int ln)
{
        char *opcode = "push";

        while (*list != '\0')
        {
                if (*opcode == *list)
                {
                        opcode++;
                        list++;
                        if (*opcode == '\0')
                                while (*list)
                                {
                                        if ((*list >= '0' && *list <= '9') || *list == '-')
                                        {
                                                combfind(list, ln);
                                                return (atoi(list));
                                        }
                                        else if (*list == ' ')
                                                list++;
                                        else
                                        {
                                                fprintf(stderr, "L%d: usage: push integer\n", ln);
                                                exit(EXIT_FAILURE);
                                        }
                                }
                }
                else
                        list++;
        }
        return (0);
}
