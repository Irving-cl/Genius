
/* 
 * logic is an interface, specific
 * logic should be implemented, and 
 * would be called by node_session 
 * when message arrives.
 */

#ifndef LOGIC_H
#define LOGIC_H

class logic
{
public:
    
    // Interface
    virtual void handle(std::int32_t msg_id, const std::string& msg) = 0;
};

#endif // LOGIC_H
