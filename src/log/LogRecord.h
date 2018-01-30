//
// Created by eyajinq on 5/9/2017.
//

#ifndef PROJECT_LOGRECORD_H
#define PROJECT_LOGRECORD_H

#include "type.h"

class LogRecord : public Logger
{
public:
    LogRecord();
    ~LogRecord();

public:
    Ret Debug();
    Ret Info();
    Ret Warning();
    Ret Error();
    Ret Critical();
};

#endif //PROJECT_LOGRECORD_H
