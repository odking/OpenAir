#include "net-socket.h"
#include "common/config.h"
#include "log/logger.h"

__BEGIN_DECLS
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/select.h>
#include <sys/un.h>
#include <unistd.h>
#include <netdb.h>
__END_DECLS

NetSocket::NetSocket(const char* host, uint16_t port, NET_TYPE type)
{
    m_host = host;
    m_port = port;
    m_type = type;
}

NetSocket::~NetSocket()
{
}

NetSocket* NetSocket::create(bool non_block, bool binding)
{

}





