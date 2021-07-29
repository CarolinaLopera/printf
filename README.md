# _printf
_printf is a project that seeks to behave the same as the original printf function.

## Start
To obtain a copy of the source code you can access this repository [GitHub](https://github.com/Shirley-Patricia/printf) and download a compressed file.

## Dependencies
**_printf** is a program written in C and coded on an Ubuntu 14.04 LTS machine with **gcc** version 4.8.4. It can be run in a linux terminal or on a server, generally Ubuntu contains the gcc compiler. Run the following command to update the packages:
```
sudo apt update
```
And check the version by running:
```
gcc --version
```
If after using the above command the **gcc** version is not obtained, run the next command to install the compiler:
```
sudo apt install GCC
```
And check the version by running:
```
gcc --version
```
## Execution
To execute the program we are going to use a main including the header file and compiling all **.c** files from the repository. Example:
**main.c**
```
#include "holberton.h"
int main(void)
{
    _printf("Hello world\n");
    return (0);
}
```
**compilation**
```
gcc *.c -o test
```
**execution**
```
./test
```
**output**
```
Hello world
```
## Features
**_printf** function takes a first argument which is a string and prints it exactly as received by omitting the format specifiers (**%**) and the character after it, as long as it is a valid specifier.
**prototype**
```
int _printf(const char *format, ...);
```
The data type and what indicates that a variadic argument is sent is the **%** specifier followed by a character that indicates the data type.

The **%** conversion specifier can be followed by the following flags:

| Flags | Description |
| ------ | ------ |
| **c** | Prints a character. If an integer is passed in the arguments, it will be converted to your ASCII code character. |
| **s** | Prints a string. |
| **i** | Prints a decimal integer. |
| **d** | Also prints a decimal integer. |
| **%** | Prints a percent. |

If the indicator character is different from those mentioned, exactly what is found is printed.

## Return
The function always returns an integer that is equal to the number of characters printed. Returns -1 if the after **%** ends the string or if after **%** and space, the string ends. Example:
**main.c**
```
#include "holberton.h"
int main(void)
{
    int length = _printf("Hello world\n");
    _printf("[%i]\n", length);
    return (0);
}
```
**output**
```
Hello world
[12]
```

## Tests
Below are examples with each of the specifiers.

- **%c**

**main.c**
```
int main(void)
{
    _printf("%c = %c\n", 'H', 72);
    return (0);
}
```
**output**
```
H = H
```
- **%s**

**main.c**
```
int main(void)
{
    _printf("Hello [%s]\n", "world");
    return (0);
}
```
**output**
```
Hello [world]
```
- **%i** - **%d**

**main.c**
```
int main(void)
{
    _printf("%i = %d\n", 8, 8);
    return (0);
}
```
**output**
```
8 = 8
```
- **%%**

**main.c**
```
int main(void)
{
    _printf("100%%\n");
    return (0);
}
```
**output**
```
100%
```

## Authors
- [Carolina Lopera](https://github.com/CarolinaLopera)
- [Shirley Cárcamo](https://github.com/Shirley-Patricia)

## License
This project is under the License MIT License - see the [LICENSE](https://github.com/Shirley-Patricia/printf/blob/main/LICENCE.md) file for more details.
