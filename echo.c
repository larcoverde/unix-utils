// writes input text to standard output

#include <stdio.h>

int
main(int argc, char **argv)
{
    if (argc < 2)
    {
        printf("usage: echo <input>\n");
        return 1;
    }

    char *input = argv[1];
    printf("%s\n", input);
    
    return 0;
}

