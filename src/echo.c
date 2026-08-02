// writes input text to standard output

#include <unistd.h>
#include <stdio.h>

void
usage()
{
    printf("usage: echo <opt> <input>\n");
}

void
help()
{
    printf("echo - writes input text to standard output\n\n");
    usage();
    print("             -n    do not output the trailing newline\n\n");
}

int
main(int argc, char **argv)
{
    if (argc < 2)
    {
        usage();
        return 1;
    }
    
    int opt;
    int output_nl = 1; //true

    while ((opt = getopt(argc, argv, "n")) != -1)
    {
        switch(opt)
        {
            case 'n':
                output_nl=0; //false
                break;
        }
    }

    if (output_nl == 1)
    {
        char *input = argv[1];
        printf("%s\n", input);
    }

    else if (output_nl == 0)
    {
        char *input = argv[2];
        printf("%s", input);
    }
    
    return 0;
}

