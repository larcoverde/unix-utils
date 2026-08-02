// print newline, word, and byte counts for each file

#include<unistd.h>
#include<stdio.h>

void
usage()
{
    printf("usage: wc <opt> <file>\n");
}

int
main(int argc, char **argv)
{
    int opt_bytes, // print the byte counts      -c
        opt_chars, // print the character counts -m
        opt_lines, // print the newline counts   -l
        opt_words  // print the word counts      -w
        = 0; // false

    int opt;
    while ((opt = getopt(argc, argv, "cmlw")) != -1)
    {
        switch (opt)
        {
            case 'c':
                opt_bytes = 1;
                break;
            case 'm':
                opt_chars = 1;
                break;
            case 'l':
                opt_lines = 1;
                break;
            case 'w':
                opt_words = 1;
                break;
        }
    }

    return 0;
}

