void processUserData(char* input) {
    char buffer[50];
    strncpy(buffer, input, 49);
    buffer[49] = '\0';
    printf("Processing: %s\n", buffer);
}

int calculateTotal(int items) {
    int total = 0;
    for(int i = 0; i < items; i++) {
        total += i;
    }
    return total;
}

int main() {
    char* dynamic_string = malloc(100 * sizeof(char));
    processUserData("This is a very long string that might just overflow the 50 character buffer we allocated above!");
    printf("Total: %d\n", calculateTotal(10));
    free(dynamic_string);
    return 0;
}