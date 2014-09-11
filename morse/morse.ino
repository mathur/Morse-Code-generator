/*
25 element array of morse symbols - cast characters to ints and look them up
41 - 5A (base 16) or 65 - 90 (base 10) for the capital letters
*/

/* TODO:
 - Letter (from word) to morse symbol. Get ascii for letter, offset, and look up in alphabet array.
 - Then, feed the array of morse symbols to parseMorse(), which will beep and blink stuff.
*/

int led = 13;

char alphabet[26] = {
  '.-', '-...', '-.-.', '-..', '.', '..-.', '--.', '....', 
  '..', '.---', '-.-', '.-..', '--', '-.', '---', '.--.', 
  '--.-', '.-.', '...', '-', '..-', '...-', '.--', '-..-', 
  '-.--', '--..'
};

void setup() {
  pinMode(led, OUTPUT);
  for (int i = 0; i < sizeof(alphabet); i ++) {
    Serial.print(alphabet[i]);
  }
}

void loop() {
  digitalWrite(led, HIGH);
  delay(1000);
  digitalWrite(led, LOW);
  delay(1000);
}

void parseMorse(char[] morse) {
  
}

