// write content of a file to standard output

#include<unistd.h>

void
usage()
{
    write(1, "usage: cat <file>\n", 19);
}
