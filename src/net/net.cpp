#include "net-utils.h"
#include "common/config.h"

__BEGIN_DECLS
#include <netdb.h>
__END_DECLS

static NetUtils NetUtils::m_instance = nullptr;

NetUtils::NetUtils()
{
}

static NetUtils* NetUtils::GetInstance()
{
    if (m_instance == nullptr)
    {
        m_instance = new NetUtils;
    }
    return m_instance;
}



