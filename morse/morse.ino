/*
  25 element array of morse symbols - cast characters to ints and look them up
  41 - 5A (base 16) or 65 - 90 (base 10) for the capital letters
  http://www.asciitable.com/
*/

/* TODO:
 - Letter (from word) to morse symbol. Get ascii for letter, offset, and look up in alphabet array.
 - Then, feed the array of morse symbols to parseMorse(), which will beep and blink stuff.
*/

int led = 13;

String alphabet[] = {
  ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", 
  "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", 
  "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", 
  "-.--", "--.."
};

void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  
  char letter = 'l';
  
  switch(letter) {
    case 'a': Serial.print(alphabet[0]);
    case 'b': Serial.print(alphabet[1]);
    case 'c': Serial.print(alphabet[2]);
    case 'd': Serial.print(alphabet[3]);
    case 'e': Serial.print(alphabet[4]);
    case 'f': Serial.print(alphabet[5]);
    case 'g': Serial.print(alphabet[6]);
    case 'h': Serial.print(alphabet[7]);
    case 'i': Serial.print(alphabet[8]);
    case 'j': Serial.print(alphabet[9]);
    case 'k': Serial.print(alphabet[10]);
    case 'l': Serial.print(alphabet[11]);
    case 'm': Serial.print(alphabet[12]);
    case 'n': Serial.print(alphabet[13]);
    case 'o': Serial.print(alphabet[14]);
    case 'p': Serial.print(alphabet[15]);
    case 'q': Serial.print(alphabet[16]);
    case 'r': Serial.print(alphabet[17]);
    case 's': Serial.print(alphabet[18]);
    case 't': Serial.print(alphabet[19]);
    case 'u': Serial.print(alphabet[20]);
    case 'v': Serial.print(alphabet[21]);
    case 'w': Serial.print(alphabet[22]);
    case 'x': Serial.print(alphabet[23]);
    case 'y': Serial.print(alphabet[24]);
    case 'z': Serial.print(alphabet[25]);
    transmit();
  }
}

void loop() {
  digitalWrite(led, HIGH);
  delay(200);
  digitalWrite(led, LOW);
  delay(200);
}

void transmit(){
  foreach (char c in "-.---...-.-.-")
  {
    if(c == ".") {
      digitalWrite(led, HIGH);
      delay(200);
    }
    else {
      delay(200);
    }
  }
}
