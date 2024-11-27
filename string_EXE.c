#include <stdio.h>
#include <ctype.h>

char *strstr_case_insensitive(const char *a, const char *b) {
    if (*b == '\0') return (char *)a;

    while (*a) {
        const char *x = a, *y = b;
        while (*y && tolower(*x) == tolower(*y)) { x++; y++; }
        if (!*y) return (char *)a;
        a++;
    }
    return NULL;
}

int main() {
    char a[1000], b[100];

    printf("Enter main string: ");
    fgets(a, sizeof(a), stdin);
    a[strcspn(a, "\n")] = '\0';

    printf("Enter substring: ");
    fgets(b, sizeof(b), stdin);
    b[strcspn(b, "\n")] = '\0';

    char *res = strstr_case_insensitive(a, b);
    printf(res ? "Found at position %ld\n" : "Not found\n", res ? res - a : 0);

    return 0;
}
