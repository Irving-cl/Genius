
/*
 * node is used to set up connections
 * and pass messages between servers
 */

#ifndef NODE_H
#define NODE_H

#include <vector>
#include <unordered_map>

#include "asio.hpp"

#include "node_session.h"

class node
{
public:

    typedef std::int32_t node_id;

    /* Constructor */
    node(const std::string config_file);

    /* Run */
    void run();

    /* Send a message to some node */
    void send(node_id id, const std::string& msg);

private:

    typedef std::vector<asio::ip::tcp::endpoint> endpoint_list;
    typedef std::unordered_map<node_id, node_session> node_table;

    asio::io_service ios_;
    node_table       node_table_;

    /* Set up connections */
    void start_connect(endpoint_list& endpoints); 
    void start_listen(endpoint_list& endpoints);

};

#endif // NODE_H
