/**
 * @file Heder_File.c
 * @author Vinayak Mali
 * @brief To explain the header file
 * @version 0.1
 * @date 2023-08-06
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

/*
    # -> This line is meant for preprocessor to process before compiler comes
          include -> include (copy - paste)

    <> -> From Standard Include Path

    stdio -> Name of the header file

    .h -> extension of header file

    Header files Never terminated with semicolon.

    #include <stdio.h>
*/

/*
    Header File contain :
        1) Include another header file
        2) Symbolic constant 
        3) Macro defination
        4) Typedefs
        5) Definations of structures
        6) Declaration of functions
        7) Definations of inline functions

    Different header files contain different function declarations that's way we
    include more than one header files.

    we can create our header file using .h extension and writing c functions and
    structures in it.
    
    Remember before calling any function the declaration of function is must 
    be present in the source code during the compilation process.
    
    The stdio.h header file contain declaration of the printf and scanf function and
    the  stdlib.h header file contain declaration of exit and dynamic memory funcitons.

    During the compilation process the the code of header file is included in our source code
    the compiler does not need of defination of the functions when the linker is come in the picture
    that links the standard library to the source code. 
    
    Standard libraries :
        1) static library 
                linux -> libc.a
                windows -> libc.asm

        2) dynamic library
                linux -> libc.so
                windows -> msvcrt.dll
        
        Note -> This name are not same thay contain version of the library with it.
*/