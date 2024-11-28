

[![Typing SVG](https://readme-typing-svg.herokuapp.com?font=Fira+Code&weight=700&size=27&pause=1000&center=true&width=700&height=62&lines=Project+Printf)](https://git.io/typing-svg)

![](https://www.commentcoder.com/static/bd7bd17f9fccb49b563e643f73bc87b3/b17f8/c-printf.jpg)



## Synopsis

The printf function in the C programming language, prints output according to format. The print function is used to print the "character, string, integer, percent, and a reverse of a string" onto the output screen.

## Description
The printf function produces output according a format that follows conversion specifiers. A conversion specifier is a character that specifies the type of conversion to be used. It is used during input and output.

It tells the compiler what type of data is in the varaible when printing using printf. They are listed below.

Printf is a function that writes output to the stdout, which is the standard output stream. Also, the function writes the output according to the format string. This format string specifies how the following arguments are converted for output.

### The conversion specifiers used in this project are:


| Symbol    | Meaning |
| :-------- | :------------------------------------ |
| **%c**    |  *Print a single character**          |
| **%s**    |  *Print a string of characters**      |
| **%%**    |  *Print a percent sign.**             |
| **%d**    |  *Print a decimal (base 10) number**  |
| **%i**    |  *Print an integer in base 10**       |


## Requirements

    . Compiled on Ubuntu 24.04.1 LTS
    . Programs and functions will be compiled with $ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
    . Style Guidelines : Betty and verification done using betty-style.pl and betty-doc.pl
    . No use of global variables
    . No more than 5 functions per file
    . Function prototypes are in the header file main.h

## Flowchart
- Diagramme de flux de la fonction printf

![Diagramme de flux de la fonction printf](https://i.imgur.com/lX1fkb7.png)


## Project Collaborators

![](https://flat-badgen.vercel.app/badge/icon/github?icon=github&label)

- Myriam Guillabert [@Myri-fid](https://github.com/Myri-fid)

- Ahmed Hmeyd [@Ahmed](https://github.com/hmeyd)

- David Tolza [@VidadTol](https://www.github.com/VidadTol)

## Man page

[![Typing SVG](https://readme-typing-svg.herokuapp.com?font=Fira+Code&weight=700&size=27&pause=1000&center=true&width=500&height=62&lines=man.%2Fman_3_printf)](https://github.com/Myri-fid/holbertonschool-printf/blob/david/man_3_printf)

## Running Tests

### Input
```
#include <stdio.h> 

int main(void) 
{ 
        char name[] = "Brian";
        int age = 25; 

        _printf("Hello, my name is %s and I am %d years old.\n", name, age);

        return 0; 
}
```
### Output
```
Hello, my name is Brian and I am 25 years old.
```

