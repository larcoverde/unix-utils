// write content of a file to standard output

#include<unistd.h>

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

    return 0;
}

