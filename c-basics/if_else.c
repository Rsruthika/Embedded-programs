
#include <stdio.h>
#include <unistd.h> // For sleep function (simulate delay)

int main() {
    int led_state = 0; // 0 = OFF, 1 = ON

    while(1) {
        led_state = !led_state; // Toggle LED
        if(led_state) {
            printf("LED is ON\n");
        } else {
            printf("LED is OFF\n");
        }
        sleep(1); // Delay 1 second
    }

    return 0;
}
