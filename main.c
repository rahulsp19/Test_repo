
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void processUserData(char* input) {
    // SECURITY RISK: Buffer overflow vulnerability
    char buffer[50];
    strcpy(buffer, input);
    printf("Processing: %s\n", buffer);
}

int calculateTotal(int items) {
    // LOGIC ERROR: Uninitialized variable
    int total;
    for(int i = 0; i < items; i++) {
        total += i;
    }
    return total;
}

int main() {
    // DEFAULT BUG: Memory leak because it's not freed
    char* dynamic_string = malloc(100 * sizeof(char));
    
    // Unused variable
    int unused_counter = 42;
    
    processUserData("This is a very long string that might just overflow the 50 character buffer we allocated above!");
    printf("Total: %d\n", calculateTotal(10));
    
    return 0;
}
