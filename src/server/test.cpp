
#include "asio.hpp"
#include "spdlog.h"

int main()
{
    asio::io_service ios;
    auto console = spdlog::stdout_color_st("console");
}
