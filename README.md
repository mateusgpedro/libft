# Libft

A custom C library reimplementing standard `libc` functions along with additional utility and linked-list manipulation functions, built as part of the 42 curriculum.

## Project Structure

```text
.
├── include/
│   └── libft.h      # Function prototypes and data structures
├── src/             # Source files (ft_*.c)
└── Makefile         # Build configuration
```

## Included Functions

### Character Checks & Conversion
| Function | Description |
| :--- | :--- |
| `ft_isalpha` | Checks for an alphabetic character |
| `ft_isdigit` | Checks for a digit (`0`–`9`) |
| `ft_isalnum` | Checks for an alphanumeric character |
| `ft_isascii` | Checks whether a value fits into the ASCII character set |
| `ft_isprint` | Checks for any printable character |
| `ft_toupper` | Converts a lowercase letter to uppercase |
| `ft_tolower` | Converts an uppercase letter to lowercase |

### Memory Manipulation
| Function | Description |
| :--- | :--- |
| `ft_memset` | Fills memory with a constant byte |
| `ft_bzero` | Zeroes out a byte string |
| `ft_memcpy` | Copies a memory area |
| `ft_memmove` | Copies a memory area safely handling overlap |
| `ft_memchr` | Scans memory for a character |
| `ft_memcmp` | Compares two memory areas |
| `ft_calloc` | Allocates and zeroes memory for an array |

### String Manipulation
| Function | Description |
| :--- | :--- |
| `ft_strlen` | Calculates the length of a string |
| `ft_strlcpy` | Size-bounded string copying |
| `ft_strlcat` | Size-bounded string concatenation |
| `ft_strchr` | Locates the first occurrence of a character in a string |
| `ft_strrchr` | Locates the last occurrence of a character in a string |
| `ft_strncmp` | Compares two strings up to `n` bytes |
| `ft_strnstr` | Locates a substring in a string within `len` bytes |
| `ft_strdup` | Duplicates a string in newly allocated memory |
| `ft_substr` | Extracts a substring from a string |
| `ft_strjoin` | Concatenates two strings into a new string |
| `ft_strtrim` | Trims specified characters from the start and end of a string |
| `ft_split` | Splits a string into an array of strings using a delimiter |
| `ft_strmapi` | Applies a function to each character of a string to create a new string |
| `ft_striteri` | Applies a function to each character of a string in place |

### Type Conversion & File Descriptor Output
| Function | Description |
| :--- | :--- |
| `ft_atoi` | Converts an ASCII string to an integer |
| `ft_itoa` | Converts an integer to an ASCII string |
| `ft_putchar_fd` | Outputs a character to a given file descriptor |
| `ft_putstr_fd` | Outputs a string to a given file descriptor |
| `ft_putendl_fd` | Outputs a string followed by a newline to a file descriptor |
| `ft_putnbr_fd` | Outputs an integer to a given file descriptor |

### Singly Linked Lists (`t_list`)
| Function | Description |
| :--- | :--- |
| `ft_lstnew` | Creates a new list node |
| `ft_lstadd_front` | Adds a node at the beginning of a list |
| `ft_lstadd_back` | Adds a node at the end of a list |
| `ft_lstsize` | Counts the number of nodes in a list |
| `ft_lstlast` | Returns the last node of a list |
| `ft_lstdelone` | Frees a single node's content and the node itself |
| `ft_lstclear` | Deletes and frees a node and all its successors |
| `ft_lstiter` | Iterates a list and applies a function to each node's content |
| `ft_lstmap` | Iterates a list and applies a function to create a new list |

## Getting Started

### Build

Compile the static library `libft.a`:

```bash
make
```

Include the linked-list functions:

```bash
make bonus
```

Clean object files or remove the compiled archive:

```bash
make clean   # Remove object files (obj/)
make fclean  # Remove object files and libft.a
make re      # Rebuild from scratch
```

### Usage

Include the header in your C source files:

```c
#include "libft.h"
```

Compile your program linking against `libft.a`:

```bash
cc -Wall -Wextra -Werror main.c -Iinclude -L. -lft -o my_program
```
