<h1 align="center">Libft - 42 Project</h1>
1337 scholl
Libft is a custom library of standard C functions developed as part of the 42 school curriculum. The goal of this project is to recreate common standard library functions, along with a few additional utilities, to better understand how these functions work internally and to practice writing efficient, reusable code.

## Table of Contents

- [Introduction](#introduction)
- [Functions](#functions)
- [Usage](#usage)
- [Compilation](#compilation)
- [Testing](#testing)
- [Contributing](#contributing)
- [License](#license)

## Introduction

Libft is a foundational project in the 42 curriculum designed to help students build a better understanding of C programming, memory management, pointers, and data structures. The project involves implementing a set of standard functions (such as `strlen`, `memset`, and `strjoin`) and other utility functions that can be used in future projects.

## Functions

Libft includes the following categories of functions:

1. **Libc Functions**: Reimplementations of standard C library functions.
2. **Additional Functions**: Utility functions not present in the standard C library.
3. **Bonus**: Functions for handling linked lists.

### Some of the re-implemented functions include:

- `ft_memset`
- `ft_bzero`
- `ft_memcpy`
- `ft_strlen`
- `ft_strchr`
- `ft_strdup`
- `ft_atoi`
- `ft_toupper`
- `ft_tolower`

For a full list of functions, see the [function list](#).

## Usage

1. Clone the repository:
    ```bash
    git clone https://github.com/iaceene/libft.git
    ```

2. Navigate to the `libft` directory:
    ```bash
    cd libft
    ```

3. Compile the library:
    ```bash
    make
    ```

4. Include the compiled library (`libft.a`) in your C project:
    ```c
    #include "libft.h"
    ```

## Compilation

Libft is compiled using the provided Makefile. The following commands can be used to compile and manage the library:

- `make`: Compiles the library.
- `make clean`: Removes object files.
- `make fclean`: Removes object files and the library.
- `make re`: Recompiles the library from scratch.

## Testing

You can test your `libft` implementation using external testers:

- [libft-unit-test](https://github.com/alelievr/libft-unit-test)
- [libft-war-machine](https://github.com/ska42/libft-war-machine)
- [libft-tester](https://github.com/Tripouille/libftTester)

Simply clone these repositories and run the tests.

## Contributing

Contributions are welcome! If you find any bugs or want to add new features, feel free to open an issue or create a pull request.

## License

This project is licensed under the [MIT License](LICENSE).
