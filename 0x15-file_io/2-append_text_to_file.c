#include "main.h"

/**
 *
 *  * append_text_to_file - function that appends text at the end of a file.
 *
 *   * @filename: File to created.
 *
 *    * @text_content: is a NULL terminated string to write to the file.
 *
 *     * Return: 1 on success and -1 on failure.
 *
 *      */

int append_text_to_file(const char *filename, char *text_content)

{

		int i = 0, fd, m;



			if (filename == NULL)

						return (-1);

				fd = open(filename, O_WRONLY | O_APPEND);

					if (fd == -1)

								return (-1);

						if (text_content == NULL)

									return (1);

							while (text_content[i] != '\0')

										i++;

								m = write(fd, text_content, i);

									close(fd);

										if (m == -1)

													return (-1);

											return (1);

}
