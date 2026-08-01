// writes input text to standard output

#include <unistd.h>

int
main(int argc, char **argv)
{
    if (argc < 2)
    {
        write(1, "usage: echo <input>\n", 21);
        return 1;
    }
    
    return 0;
}

