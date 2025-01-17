int main(void) {
    int x, y;
    x = 0;
    y = 0;

    while (1) {
        x++;
        if (x > 9) {
            y++;
            x = 0;
        }
    }
}