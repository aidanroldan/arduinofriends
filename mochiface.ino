#include <Wire.h>
#include <Adafruit_SSD1306.h>

#define OLED_ADDRESS 0x3C

Adafruit_SSD1306 display(128, 64, &Wire, OLED_ADDRESS);

void setup() {
  display.begin(SSD1306_SWITCHCAPVCC, OLED_ADDRESS);
  display.clearDisplay();
  display.setTextSize(3);
  display.setTextColor(WHITE);
  display.setCursor(0, 0);
  display.println("Hello");
  display.setCursor(19, 30);
  display.println("User!");
  display.display();
  delay(4000);
  display.clearDisplay();
}

void loop(){
  int randomNum = 1;

  if (randomNum == 1) {
    eyes();
    randomNum = 2;
  }
  if (randomNum == 2) {
    love();
    randomNum = 1;
  }

}

void eyes() {  
  display.clearDisplay();

  int centerX = 42;
  int centerY = 10;
  int lineLength = 10;

  // Draw the left ^ symbol
  display.drawLine(centerX - lineLength, centerY + lineLength, centerX, centerY - lineLength, WHITE);
  display.drawLine(centerX - lineLength-1, centerY + lineLength, centerX-1, centerY - lineLength, WHITE);

  display.drawLine(centerX, centerY - lineLength, centerX + lineLength, centerY + lineLength, WHITE);
  display.drawLine(centerX+1, centerY - lineLength, centerX + lineLength+1, centerY + lineLength, WHITE);

  int centerXl = 85;
  int centerYl = 10;

  // Draw the right ^ symbol
  display.drawLine(centerXl - lineLength, centerYl + lineLength, centerXl, centerYl - lineLength, WHITE);
  display.drawLine(centerXl - lineLength-1, centerYl + lineLength, centerXl-1, centerYl - lineLength, WHITE);


  display.drawLine(centerXl, centerYl - lineLength, centerXl + lineLength, centerYl + lineLength, WHITE);
  display.drawLine(centerXl+1, centerYl - lineLength, centerXl + lineLength+1, centerYl + lineLength, WHITE);


  //smile
  display.fillCircle(64, 45, 15, WHITE);    // full smile
  display.fillRect(0, 30, 128, 10, BLACK);  // hide top half of smile


  display.display();
  delay(5500);
  display.clearDisplay();

  //blink
  //smallest mouth
  display.fillRect(54, 54, 22, 4, WHITE);
;

  display.fillRect(38, 32, 10, 4, WHITE);
  display.fillRect(84, 32, 10, 4, WHITE);
  display.display();
  delay(120);

  display.clearDisplay();
  // Draw the left ^ symbol
 display.drawLine(centerX - lineLength, centerY + lineLength, centerX, centerY - lineLength, WHITE);
  display.drawLine(centerX - lineLength-1, centerY + lineLength, centerX-1, centerY - lineLength, WHITE);

  display.drawLine(centerX, centerY - lineLength, centerX + lineLength, centerY + lineLength, WHITE);
  display.drawLine(centerX+1, centerY - lineLength, centerX + lineLength+1, centerY + lineLength, WHITE);

  // Draw the right ^ symbol
   display.drawLine(centerXl - lineLength, centerYl + lineLength, centerXl, centerYl - lineLength, WHITE);
  display.drawLine(centerXl - lineLength-1, centerYl + lineLength, centerXl-1, centerYl - lineLength, WHITE);


  display.drawLine(centerXl, centerYl - lineLength, centerXl + lineLength, centerYl + lineLength, WHITE);
  display.drawLine(centerXl+1, centerYl - lineLength, centerXl + lineLength+1, centerYl + lineLength, WHITE);

  //smile
  display.fillCircle(64, 45, 15, WHITE);    // full smile
  display.fillRect(0, 30, 128, 10, BLACK);  // hide top half of smile
  
  display.display();
  delay(5500);
  display.clearDisplay();

  //blink

  //smallest mouth
  display.fillRect(54, 54, 22, 4, WHITE);

  display.fillRect(38, 32, 10, 4, WHITE);
  display.fillRect(84, 32, 10, 4, WHITE);
  display.display();
  delay(120);
  display.clearDisplay();
}

void love() {
  display.clearDisplay();

  int x1 = 44;
  int y1 = 15;
  int radius1 = 10;

  
  display.fillTriangle(x1 - radius1, y1, x1, y1 + radius1, x1 + radius1, y1, WHITE);
  display.fillCircle(x1 - 5, y1, 5.5, WHITE);
  display.fillCircle(x1 + 5, y1, 5.5, WHITE);

  int x2 = 84;
  int y2 = 15;
  int radius2 = 10;


  display.fillTriangle(x2 - radius2, y2, x2, y2 + radius2, x2 + radius2, y2, WHITE);
  display.fillCircle(x2 - 5, y2, 5.5, WHITE);
  display.fillCircle(x2 + 5, y2, 5.5, WHITE);

  //smile
  display.fillCircle(64, 45, 15, WHITE);    // full smile
  display.fillRect(0, 30, 128, 10, BLACK);  // hide top half of smile

  display.display();
  delay(4000);

  //blink
  display.clearDisplay();

  //smallest mouth
  display.fillRect(54, 54, 22, 4, WHITE);

  display.fillRect(44, 28, 10, 4, WHITE);
  display.fillRect(76, 28, 10, 4, WHITE);
  display.display();
  delay(120);
  display.clearDisplay();

  //smile
  display.fillCircle(64, 45, 15, WHITE);    // full smile
  display.fillRect(0, 30, 128, 10, BLACK);  // hide top half of smile


  // Draw the left heart
  display.fillTriangle(x1 - radius1, y1, x1, y1 + radius1, x1 + radius1, y1, WHITE);
  display.fillCircle(x1 - 5, y1, 5.5, WHITE);
  display.fillCircle(x1 + 5, y1, 5.5, WHITE);

  // Draw the right heart
  display.fillTriangle(x2 - radius2, y2, x2, y2 + radius2, x2 + radius2, y2, WHITE);
  display.fillCircle(x2 - 5, y2, 5.5, WHITE);
  display.fillCircle(x2 + 5, y2, 5.5, WHITE);

  display.display();
  delay(4000);

  //blink
  display.clearDisplay();
  display.fillRect(44, 28, 10, 4, WHITE);
  display.fillRect(76, 28, 10, 4, WHITE);

  //smallest mouth
  display.fillRect(54, 54, 22, 4, WHITE);

  display.display();
  delay(120);
  display.clearDisplay();

  // Draw the left heart
  display.fillTriangle(x1 - radius1, y1, x1, y1 + radius1, x1 + radius1, y1, WHITE);
  display.fillCircle(x1 - 5, y1, 5.5, WHITE);
  display.fillCircle(x1 + 5, y1, 5.5, WHITE);

  // Draw the right heart
  display.fillTriangle(x2 - radius2, y2, x2, y2 + radius2, x2 + radius2, y2, WHITE);
  display.fillCircle(x2 - 5, y2, 5.5, WHITE);
  display.fillCircle(x2 + 5, y2, 5.5, WHITE);

  //smile
  display.fillCircle(64, 45, 15, WHITE);    // full smile
  display.fillRect(0, 30, 128, 10, BLACK);  // hide top half of smile


  display.display();
  delay(4000);

  //blink
  display.clearDisplay();

  display.clearDisplay();
  display.fillRect(44, 28, 10, 4, WHITE);
  display.fillRect(76, 28, 10, 4, WHITE);

  //smallest mouth
  display.fillRect(54, 54, 22, 4, WHITE);

  display.display();
  delay(120);
  display.clearDisplay();
}
