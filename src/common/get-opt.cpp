#include "get-opt.h"
#include "common/config.h"
#include <stdio.h>

#ifndef _GNU_SOURCE
#define _GNU_SOURCE
#endif

__BEGIN_DECLS
#include <unistd.h>
#include <getopt.h>
__END_DECLS

/*
 *define long options for "--option" 
 */
option long_opts[] =
{
    {"script", 1, NULL, 's'},
    {0, 0, 0, 0}
};

Option* Option::m_pOption = nullptr;
char* Option::m_opts = ":hd";
char* Option::help = "welcome to use OpenAir\r\n\
                        usage: OpenAir [-]{hd} [--script <name>]\r\n";
Option::Option()
{
}

Option* Option::GetInstance()
{
    if (m_pOption == nullptr)
    {
        m_pOption = new Option;
    }
    return m_pOption;
}

int Option::GetOption(int argc, char* argv[])
{
    int opt;
    while ((opt = getopt_long(argc, argv, m_opts, long_opts, nullptr)) != -1)
    {
        switch (opt)
        {
            case 'h':
                printf(help);
                break;
            case ':':
                printf("option needs a value\r\n");
                break;
            case 'd':
                printf("debug mode\n");
                break;
            case 's':
                printf("execute shell script:%s\n", optarg);
                break;
            case '?':
                printf("unknown options");
                break;
        }
    }

    for (; optind < argc; optind++)
        printf("argument: %s\n", argv[optind]);
}




