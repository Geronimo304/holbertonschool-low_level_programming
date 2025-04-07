#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>

#define BUFFER_SIZE 1024

/**
 * error_exit - Maneja los errores y finaliza el programa con el código adecuado.
 * @exit_code: Código de salida del error.
 * @message: Mensaje de error que se imprimirá.
 * @file_name: Nombre del archivo relacionado con el error.
 */
void error_exit(int exit_code, const char *message, const char *file_name)
{
	dprintf(STDERR_FILENO, "%s %s\n", message, file_name);
	exit(exit_code);
}

/**
 * main - Copia el contenido de un archivo a otro.
 * @argc: Número de argumentos.
 * @argv: Array de punteros a los argumentos.
 *
 * Return: 0 si tiene éxito.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
		error_exit(97, "Usage: cp file_from file_to", "");

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		error_exit(98, "Error: Can't read from file", argv[1]);

	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
		error_exit(99, "Error: Can't write to", argv[2]);

	while ((bytes_read = read(file_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(file_to, buffer, bytes_read);
		if (bytes_written == -1)
			error_exit(99, "Error: Can't write to", argv[2]);
	}

	if (bytes_read == -1)
		error_exit(98, "Error: Can't read from file", argv[1]);

	if (close(file_from) == -1)
		error_exit(100, "Error: Can't close fd", argv[1]);


	if (close(file_to) == -1)
		error_exit(100, "Error: Can't close fd", argv[2]);

	return (0);
}
