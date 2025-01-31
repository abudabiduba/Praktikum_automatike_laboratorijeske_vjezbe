#include "mbed.h"
#include "lpc1114etf.h"

DigitalOut myled1(LED1);
DigitalOut myled2(LED2);
DigitalOut myled3(LED3);
DigitalOut myled4(LED4);
int main() {
    while(1) {
        myled1 = 1;
        wait_us(1000000);
        myled1 = 0;
        wait_us(1000000);
        myled2 = 1;
        wait_us(1000000);
        myled2 = 0;
        wait_us(1000000);
        myled3 = 1;
        wait_us(1000000);
        myled3 = 0;
        wait_us(1000000);
        myled4 = 1;
        wait_us(1000000);
        myled4 = 0;
        wait_us(1000000);
    }
}
