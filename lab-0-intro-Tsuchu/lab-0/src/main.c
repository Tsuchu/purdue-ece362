#include "stm32f0xx.h"

int main(void)
{
    int x = 0, y = 0;

    while (1) {
        x++;
        if (x > 9) {
            x = 0;
            y++;
        }
    }
}