// writes input text to standard output

#include <unistd.h>
#include <stdio.h>

int
main(int argc, char **argv)
{
    if (argc < 2)
    {
        write(1, "usage: echo <input>\n", 21);
        return 1;
    }

    char *input = argv[1];
    printf("%s\n", input);
    
    return 0;
}

