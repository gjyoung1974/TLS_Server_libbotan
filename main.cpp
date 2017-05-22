/*
* 2017 - Gordon Young
* gjyoung1974@gmail.com
*
*/

#include "cli.h"

int main(int argc, char *argv[]) {

    // tls_client host --port=443 --print-certs --policy= --tls1.0 --tls1.1 --tls1.2
    // --session-db= --session-db-pass= --next-protocols= --type=tcp"

    //placeholder until I figure out how to format the command
    auto cmd = Botan_CLI::Command::get_cmd("tls_client");
    std::cout << cmd.get()->cmd_name() << std::endl;
    std::cin.get();
    return 0;

}