#ifndef NET_UTILS_H
#define NET_UTILS_H


class NetUtils
{
public:
    static NetUtils * GetInstance();
    struct addrinfo* GetAddrInfo();


private:
    NetUtils();

private:
    static NetUtils *m_instance;
};

#endif
