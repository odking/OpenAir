//
// Created by eyajinq on 5/9/2017.
//

#ifndef PROJECT_LOGPRINTER_H
#define PROJECT_LOGPRINTER_H

#include "Logger"

class LogPrinter: public  Logger
{
public:
    LogPrinter();
    ~LogPrinter();

public:
    Ret Debug();
    Ret Info();
    Ret Warning();
    Ret Error();
    Ret Critical();
};
#endif //PROJECT_LOGPRINTER_H
