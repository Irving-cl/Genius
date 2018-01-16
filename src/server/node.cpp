
#include "node.h"

#include <memory>

node::node(const std::string config_file)
{
    endpoint_list connects,listens;

    start_connect(connects);
    start_listen(listens);
}

void node::run()
{
    ios_.run();
}

void node::send(node_id id, const std::string& msg)
{
}

void node::start_connect(endpoint_list& endpoints)
{
    for (auto endpoint : endpoints)
    {
        auto sock = asio::ip::tcp::socket(ios_, endpoint.protocol()); 
        sock.async_connect(endpoint,
            [&sock](std::error_code ec) {
                std::make_shared<node_session>(std::move(sock))->start(); 
            });
    }
}

void node::start_listen(endpoint_list& endpoints)
{
}
