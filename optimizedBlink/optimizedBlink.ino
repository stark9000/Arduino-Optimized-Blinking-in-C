int main() {
  DDRB = 0xFF;
  while (1) {
    PINB = 0xFF;
    for (long x = 0; x < 1000000; x++) {
      asm("");
    }
  }
}
