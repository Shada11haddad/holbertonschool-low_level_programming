# File descriptors and permissions

C project on low-level file input/output using POSIX system calls.

## Description

This project covers reading from and writing to files using the `open`,
`read`, `write` and `close` system calls directly, without the C standard
I/O library. It also covers file descriptors, the three standard file
descriptors, oflags and file permissions.

## Requirements

* Compiled on Ubuntu 20.04 LTS with
  `gcc -Wall -Werror -Wextra -pedantic -std=gnu89`
* Betty coding and documentation style
* No global variables
* No more than 5 functions per file
* Allowed standard library functions: `malloc`, `free`, `exit`
* Allowed system calls: `read`, `write`, `open`, `close`

## Files

| File | Description |
| --- | --- |
| `main.h` | Header file holding all function prototypes |
| `0-read_textfile.c` | Reads a text file and prints it to standard output |
| `1-create_file.c` | Creates a file with permissions `rw-------` |
| `2-append_text_to_file.c` | Appends text at the end of an existing file |
| `3-cp.c` | Program that copies the content of a file to another file |

## Author

Shada Haddad
