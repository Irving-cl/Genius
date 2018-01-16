
#include "node_session.h"

#include <utility>

#include "asio.hpp"

node_session::node_session(asio::ip::tcp::socket socket)
    : socket_(std::move(socket))
{
}

void node_session::start()
{
    do_read_header();
}

void node_session::do_read_header()
{
}

void node_session::do_read_body()
{
}
