README
The function that is written needs to reads a text file and this  prints it to the POSIX standard output.

Prototype: ssize_t read_textfile(const char *filename, size_t letters);
This is where letters is the number of letters it should read and print
The function returns the accurate number of letters it could read and print
In the case that the file can not be opened or read, return 0
In the case it filename is NULL return 0
if write fails or does not write the expected amount of bytes,
This command oe code creates a function that creates a file.

Prototype: int create_file(const char *filename, char *text_content);
Where filename is the name of the file to create and text_content is a NULL terminated string to write to the file
Returns: 1 on success, -1 on failure (file can not be created, file can not be written, write “fails”, etc…)
The created file must have those permissions: rw-------. If the file already exists, do not change the permissions.
if the file already exists, truncate it
if filename is NULL return -1
if text_content is NULL create an empty file
