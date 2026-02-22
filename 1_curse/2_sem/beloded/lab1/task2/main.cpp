#include <stdio.h>

int main() {
    FILE* f, * g;
    int nums[1000], n = 0, x, found;

    fopen_s(&f, "f.txt", "r");
    fopen_s(&g, "g.txt", "w");

    if (g == NULL || f == NULL) return -1;


    while (fscanf_s(f, "%d", &x) == 1) {
        found = 0;
        for (int i = 0; i < n; i++)
            if (nums[i] == x) found = 1;
        if (!found) nums[n++] = x;
    }

    for (int i = 0; i < n; i++)
        fprintf(g, "%d ", nums[i]);

    fclose(f);
    fclose(g);

    return 0;
}