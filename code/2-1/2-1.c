#include <stdio.h>

int main() {
    const char* date = "2026-03-24";
    char buffer[64];
    int year, month, day;

    sscanf(date,"%s%s%s", year, month, day);
    sprintf(buffer, "%s/%s/%s", day, month, year);

    printf("%s\n", buffer);
    return 0;
}
