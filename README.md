# C83Ascii

3rd edition of the library

part of the C83Project<br>
support for 8.3 file naming conventions with the exception of the main include and code files<br>
support C89 and higher editions<br>

cpu architecture identification macros

<br>

Example of use
```c
    printf("CPU test\n\r");
    printf("\n\r");

    printf("C83CPU_VERSION()      = %ld\n\r", C83CPU_VERSION());
    printf("\n\r");

    printf("First CPU ARCH        = %d\n\r", CPU_ARCH_6502);
    printf("First CPU ARCH NAME   = %s\n\r", CPU_ARCH_6502_NAME);
    printf("\n\r");

    printf("Last CPU ARCH         = %d\n\r", CPU_ARCH_ZILOGZ80);
    printf("Last CPU ARCH NAME    = %s\n\r", CPU_ARCH_ZILOGZ80_NAME);
    printf("\n\r");

    printf("Current CPU ARCH      = %d\n\r", CPU_ARCH);
    printf("Current CPU ARCH NAME = %s\n\r", CPU_ARCH_NAME);
    printf("\n\r");
```

Another example of use
```c
    #if CPU_ARCH == 0
        #error "Unknown cpu architecture"
    #endif

    #if CPU_ARCH == CPU_ARCH_ZILOGZ80
        ...
        Zilog Z80 code
        ...
    #elif CPU_ARCH == CPU_ARCH_ZILOGZ180
        ...
        Zilog Z180 code
        ...
    #else
        ...
        other code
        ...
    #endif
```

# Note:
It is completely impossible to fully test all cpu architecture combinations, 
so this library is not fully tested. If you have any improvements, 
please feel free to contact me at ignacko.com@outlook.com
