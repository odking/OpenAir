#ifndef NET_H
#define NET_H

#define NET_TYPE_IPV4               (0x0001 << 0)
#define NET_TYPE_IPV6               (0x0001 << 1)
#define NET_TYPE_UDP                (0x0001 << 2)
#define NET_TYPE_TCP                (0x0001 << 3)

typedef enum NET_TYPE
{
    net_type_udp_ipv4 = (NET_TYPE_IPV4 | NET_TYPE_UDP),
    net_type_udp_ipv6 = (NET_TYPE_IPV6 | NET_TYPE_TCP),
    net_type_tcp_ipv4 = (NET_TYPE_IPV4 | NET_TYPE_TCP),
    net_type_tcp_ipv6 = (NET_TYPE_IPV6 | NET_TYPE_TCP),
    net_type_invalid
}NET_TYPE;

#endif
