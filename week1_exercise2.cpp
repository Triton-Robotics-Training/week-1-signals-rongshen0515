//STARTER 
//THIS EXERCISE IS TO BE DONE IN THE ARM MBED SIMULATOR
//http://195.130.59.221/
//IF YOU HAVE ISSUES WITH THE SIMULATOR, CONTACT EMBEDDED LEAD
#include "mbed.h"

AnalogIn pot(p15);      
DigitalOut led(LED1);   

int main() {
    while (1) {
        printf("Week 1 Exercise 2\n");
        
        double x = pot.read();
        double on_time = x * 2000.0f;          
        double off_time = (1.0f - x) * 2000.0f; 

        led = 1;
        printf("The potentiometer reads = %f | LED turned on for %f ms\n", x, on_time);
        wait_ms(on_time);

        led = 0;
        printf("The potentiometer reads = %f | LED turned off for %f ms\n\n", x, off_time);
        wait_ms(off_time);
    }
}
