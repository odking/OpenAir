#ifndef SINGLETON_H
#define SINGLETON_H

class Singleton
{
public:
    static void Register(const char* name, Singleton*);
    static Singleton *GetInstance();

protected:
    static Singleton* Lookup
};
#endif
