
/* 
 * node_session is responsible for
 * receiving, sending messages as well
 * as calling callbacks
 */

#ifndef NODE_SESSION_H
#define NODE_SESSION_H

#include "asio.hpp"

class node_session
{
public:
    node_session(asio::ip::tcp::socket socket);

    /* Start to work */
    void start();

private:

    enum { kMaxBufLength = 65535 };

    asio::ip::tcp::socket socket_;

    char buffer_[kMaxBufLength];

    /* Parse the packet received */
    void do_read_header();
    void do_read_body();
};

#endif // NODE_SESSION_H
