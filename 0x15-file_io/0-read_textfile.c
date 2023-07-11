#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * read_textfile - reads text file and prints letters
 * @filename: filename
 * @letters: letters
 * Return: 0 or read
 */

ssize_t read_textfile(const char *filename, size_t letters) {
  ssize_t bytes_read = 0;
  char *buffer = malloc(letters + 1);

  if (filename == NULL) {
    return 0;
  }

  FILE *file = fopen(filename, "r");
  if (file == NULL) {
    free(buffer);
    return 0;
  }

  bytes_read = fread(buffer, sizeof(char), letters, file);
  if (bytes_read == -1) {
    free(buffer);
    fclose(file);
    return 0;
  }

  buffer[bytes_read] = '\0';

  if (write(STDOUT_FILENO, buffer, bytes_read) != bytes_read) {
    free(buffer);
    fclose(file);
    return 0;
  }

  free(buffer);
  fclose(file);

  return bytes_read;
}
