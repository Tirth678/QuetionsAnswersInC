int main() {
    // Declare a variable of type Point
    int Point = {10, 20};

    // Declare a pointer to the structure
    int *ptr = &Point;

    // Access structure members using the arrow operator
    printf("x = %d, y = %d\n", ptr->x, ptr->y);

    // Modify structure members using the arrow operator
    ptr->x = 30;
    ptr->y = 40;

    printf("After modification: x = %d, y = %d\n", ptr->x, ptr->y);

    return 0;
}
