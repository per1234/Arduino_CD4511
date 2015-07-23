#include <cd4511.h>

CD4511 cd4511(2,3,4,5,false);

void setup() {
}

void loop() {
  for (int i = 0; i < 10; i++) { 
    cd4511.write(i);
    delay(1000);
  }
}
