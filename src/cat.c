// write content of a file to standard output

#include<unistd.h>
#include<stdio.h>

void
usage()
{
    write(1, "usage: cat <file>\n", 19);
}

int
main(int argc, char **argv)
{
    if (argc < 2)
    {
        usage();
        return 1;
    }

    char *file_name = argv[1];
    FILE* file = fopen(file_name, "r");
    if (file == NULL)
    {
        perror("Error");
        return 1;
    }

    char c;
    while ((c = fgetc(file)) != EOF)
        putchar(c);

    return 0;
}

