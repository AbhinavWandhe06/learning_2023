#include <stdio.h>

struct Box {
    float len;
    float wid;
    float height;
};

void calculateVolumeAndSurfaceArea(struct Box* box);

int main() {
    struct Box myBox;
    struct Box* boxPtr;

    boxPtr = &myBox;

    printf("Enter the dimensions of the box:\n");
    printf("Length: ");
    scanf("%f", &(boxPtr->len));
    printf("Width: ");
    scanf("%f", &(boxPtr->wid));
    printf("Height: ");
    scanf("%f", &(boxPtr->height));

    calculateVolumeAndSurfaceArea(boxPtr);

    return 0;
}

void calculateVolumeAndSurfaceArea(struct Box* box) {
    float volume, surfaceArea;

    volume = box->len * box->wid * box->height;
    surfaceArea = 2 * (box->len * box->wid + box->len * box->height + box->wid * box->height);

    printf("\nVolume: %.2f\n", volume);
    printf("Total Surface Area: %.2f\n", surfaceArea);
}
