#include "mbed.h"

AnalogOut Aout(PA_4);

int main()
{
    while (1) {
        Aout = 0.25;    // 0.25 * 3.3 =
        ThisThread::sleep_for(2s);
        Aout = 0.5;     // 0.5 * 3.3 =
        ThisThread::sleep_for(2s);
        Aout = 0.75;    // 0.75 * 3.3 =
        ThisThread::sleep_for(2s);
    }
}