#include <iostream>
#include "InternetConnection.h"

using namespace std;

void setupProxy(ProxyConnection* proxy)
{
    proxy->addSite("bbc.com.vn");
    proxy->addSite("parnhub.com");
    proxy->addSite("facbook.com");
}
int main(int argc, const char * argv[])
{
    TCPConnection tcpConn;
    ProxyConnection proxy;

    return 0;
}
