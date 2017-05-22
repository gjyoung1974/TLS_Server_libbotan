#include "cli.h"

/*
* 2017 - Gordon Young
* gjyoung1974@gmail.com
*
*/

int main(int argc, char *argv[]) {

    //placeholder until I figure out how to format the command
    std::cout << "Hello World!" << std::endl;
    std::cin.get();

    auto cmd = Botan_CLI::Command::get_cmd("tls_server cert key --port=443 --type=tcp --policy=");
    cmd.get()->cmd_name();
    return 0;

}