#ifndef GET_OPT_H
#define GET_OPT_H

class Option
{
public:
    static Option* GetInstance();

public:
    int GetOption(int argc, char* argv[]);

private:
    static Option *m_pOption;
    static char* m_opts;
    static char* help;

protected:
    Option();

};

#endif
