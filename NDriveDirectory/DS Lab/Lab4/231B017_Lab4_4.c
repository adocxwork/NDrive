int* rotateLeft(int d, int arr_count, int* arr, int* result_count) {
    *result_count = arr_count;
    int* rotated = (int*)malloc(arr_count * sizeof(int));
    for (int i = 0; i < arr_count; i++) {
        rotated[i] = arr[(i + d) % arr_count];
    }
    return rotated;
}
