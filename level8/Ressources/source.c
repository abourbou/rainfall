/* jsdec pseudo code output */
/* /Users/abourbou/Desktop/Projects_42/projet_en_cours/rainfall/level8/source @ 0x8048564 */
#include <stdint.h>
 
int32_t main (void) {
    int32_t var_bp_8h;
    const char * size;
    FILE * nitems;
    FILE * stream;
    int32_t var_1ch;
    char * src;
    while (eax != 0) {
label_0:
        ecx = service;
        edx = auth;
        eax = "%p, %p \n";
        nitems = ecx;
        size = edx;
        printf (eax); 											//printf("%p, %p \n", auth, service);
        eax = *(stdin);
        eax = &src;
        eax = fgets (eax, *(stdin), 0x80); 						//fgets(src, 128, stdin);
        if (eax == 0) {											//if (eax == 0)
            goto label_1; 										//	return 0;
        }
        eax = &src;
        edx = eax;												//str = "auth ";
        eax = "auth ";											//	for (int i = 5; i>0; i--)
        ecx = 5;												//	{
        esi = edx;												//		if (src[i] != str[i])
        edi = eax;												//			break;
        __asm ("repe cmpsb byte [esi], byte ptr es:[edi]");		//	}
        dl = (eax > 0) ? 1 : 0;									//	(src[i] > str[i]) ? dl = 1 : 0;
        al = (eax < 0) ? 1 : 0;									//	(src[i] < str[i]) ? al = 1 : 0;
        ecx = edx;
        cl -= al;												// (src[i] < str[i]) ? src = src -1
        eax = ecx;
        eax = (int32_t) al;										//if (src[i] < str[i])
        if (eax == 0) {											//{
            eax = malloc (4);									//	auth = malloc(4)
            *(auth) = eax;										//	auth = 0 //?????
            eax = auth;											//	eax = src + 5
            *(eax) = 0;											//
            eax = &src;											//
            eax += 5;
            var_1ch = 0xffffffff;
            edx = eax;
            eax = 0;
            ecx = var_1ch;
            edi = edx;
            __asm ("repne scasb al, byte es:[edi]");
            eax = ecx;
            eax = ~eax;
            eax--;
            if (eax > 0x1e) {
                goto label_2;
            }
            eax = &src;
            edx = eax + 5;
            eax = auth;
            strcpy (eax, edx);
        }
label_2:
        eax = &src;
        edx = eax;
        eax = "reset";
        ecx = 5;
        esi = edx;
        edi = eax;
        __asm ("repe cmpsb byte [esi], byte ptr es:[edi]");
        dl = (eax > 0x1e) ? 1 : 0;
        al = (eax < 0x1e) ? 1 : 0;
        ecx = edx;
        cl -= al;
        eax = ecx;
        eax = (int32_t) al;
        if (eax == 0) {
            eax = auth;
            free (eax);
        }
        eax = &src;
        edx = eax;
        eax = "service";
        ecx = 6;
        esi = edx;
        edi = eax;
        __asm ("repe cmpsb byte [esi], byte ptr es:[edi]");
        dl = (eax > 0) ? 1 : 0;
        al = (eax < 0) ? 1 : 0;
        ecx = edx;
        cl -= al;
        eax = ecx;
        eax = (int32_t) al;
        if (eax == 0) {
            eax = &src;
            eax += 7;
            eax = strdup (eax);
            *(service) = eax;
        }
        eax = &src;
        edx = eax;
        eax = "login";
        ecx = 5;
        esi = edx;
        edi = eax;
        __asm ("repe cmpsb byte [esi], byte ptr es:[edi]");
        dl = (eax > 0) ? 1 : 0;
        al = (eax < 0) ? 1 : 0;
        ecx = edx;
        cl -= al;
        eax = ecx;
        eax = (int32_t) al;
    }
    eax = auth;
    eax = *((eax + 0x20));
    if (eax != 0) {
        system ("/bin/sh");
        goto label_0;
    }
    eax = *(stdout);
    edx = *(stdout);
    eax = "Password:\n";
    fwrite (eax, edx, 0xa, 1);
    goto label_0;
label_1:
    eax = 0;
    esp = &var_bp_8h;
    return eax;
}
