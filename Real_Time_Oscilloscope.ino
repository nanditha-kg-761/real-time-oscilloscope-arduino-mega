#include <Adafruit_GFX.h>
#include <MCUFRIEND_kbv.h>

#define LCD_CS A3
#define LCD_CD A2
#define LCD_WR A1
#define LCD_RD A0
#define LCD_RESET A4

MCUFRIEND_kbv tft;

#define SIGNAL_PIN A15

#define SCREEN_WIDTH 320
#define SCREEN_HEIGHT 240

void drawGrid() {
  tft.fillScreen(0x0000);

  // Vertical grid lines
  for (int x = 0; x < SCREEN_WIDTH; x += 20) {
    tft.drawLine(x, 0, x, SCREEN_HEIGHT, 0x7BEF);
  }

  // Horizontal grid lines
  for (int y = 0; y < SCREEN_HEIGHT; y += 20) {
    tft.drawLine(0, y, SCREEN_WIDTH, y, 0x7BEF);
  }
}

void setup() {
  Serial.begin(9600);

  uint16_t ID = tft.readID();
  tft.begin(ID);
  tft.setRotation(1);

  drawGrid();

  tft.setTextColor(0xFFFF);
  tft.setTextSize(2);
  tft.setCursor(10, 10);
  tft.print("Real-Time Oscilloscope");
}

void loop() {
  int x = 0;
  int lastY = SCREEN_HEIGHT / 2;

  while (x < SCREEN_WIDTH) {
    int rawValue = analogRead(SIGNAL_PIN);

    int y = map(rawValue, 0, 1023, SCREEN_HEIGHT - 1, 0);

    tft.drawLine(x - 1, lastY, x, y, 0xFFFF);

    lastY = y;
    x++;

    delay(3);
  }

  // Redraw the grid and title before the next trace
  drawGrid();

  tft.setTextColor(0xFFFF);
  tft.setTextSize(2);
  tft.setCursor(10, 10);
  tft.print("Real-Time Oscilloscope");
}
