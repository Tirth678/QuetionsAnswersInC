#include <stdio.h>

int main() {
    FILE *file;
    int num;

    file = fopen("charecter.txt", "r+");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    fscanf(file, "%d", &num);
    num *= 2;

    fseek(file, 0, SEEK_SET);
    fprintf(file, "%d", num);

    fclose(file);

    return 0;
}
