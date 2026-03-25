# printf

### How to compile it?

This will create a libprintf.a archive in the build directory
```bash
make
```

### How to test it?

To test the library there is an example folder with a Makefile.
The Makefile builds the print.c program together with the start.s program.
The start.s file is needed because i link the program without any of the standard c libraries, and because of that i get no main entry point
So the start.s file get's called first and then calls the main function located in print.c and exits with the exit code returned by main

To compile the example
```bash
cd examples
make
```

