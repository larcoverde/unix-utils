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
    int c;
    int byte_count, char_count, lines_count, words_count = 0;

    while((c = getchar()) != EOF)
    {
        ++char_count;
        if (c == '\n')
            ++lines_count;
    }

    if (opt_bytes == 1)
        printf("%d    ", byte_count);

    if (opt_chars == 1)
        printf("%d    ", char_count);

    if (opt_lines == 1)
        printf("%d    ", lines_count);

    if (opt_words == 1)
        printf("%d    ", words_count);

    return 0;
}

