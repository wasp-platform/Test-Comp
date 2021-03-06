#include <stdlib.h>
#include <alloca.h>

extern int __VERIFIER_nondet_int(void);

int (cstrreplace)(char *s, char old, char new)
 {
     char *p = s;
     int numReplaced = 0;
     while (*p != '\0') {
       if (*p == old) {
         *p = new;
         numReplaced++;
       }
       p++;
     }
     return numReplaced;
 }

int main() {
    int length1 = __VERIFIER_nondet_int();
    if (length1 < 1) {
        length1 = 1;
    }
    char* nondetString1 = (char*) alloca(length1 * sizeof(char));
    nondetString1[length1-1] = '\0';
    char old = (char) __VERIFIER_nondet_int();
    char new = (char) __VERIFIER_nondet_int();
    return cstrreplace(nondetString1, old, new);
}
