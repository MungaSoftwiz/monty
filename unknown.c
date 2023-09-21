#include "monty.h"

 /**unknown - Print error message for unknown command
 * @op: command
 * @line_num: line number of command
 */
void unknown(char *op, int *line_num)
{
    fprintf(stderr, "L%d: unknown instruction %s\n", *line_num, op);
    free_close();
}
