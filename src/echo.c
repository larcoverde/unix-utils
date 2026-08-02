// writes input text to standard output

#include <stdio.h>

void
usage()
{
    printf("usage: echo <input>\n");
}

int
main(int argc, char **argv)
{
    if (argc < 2)
    {
        usage();
        return 1;
    }

    char *input = argv[1];
    printf("%s\n", input);
    
    return 0;
}

