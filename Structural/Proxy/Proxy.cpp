#include <iostream>
#include "Proxy.h"

void clientCode(const Subject& subject)
{
    subject.request("ChatGPT");
    subject.request("Wikipedia");
}

int main()
{
    Connection* connection = new Connection;
    Proxy* proxy = new Proxy(connection);
    clientCode(*proxy);

    delete connection;
    delete proxy;

}