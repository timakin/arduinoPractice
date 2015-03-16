void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  // シリアルポートを9600 bps[ビット/秒]で初期化
  Serial.begin(9600);
}

void loop() {
  int inputchar;
  inputchar = Serial.read();
  
  if(inputchar != -1) {
    switch(inputchar) {
      case 's':
        digitalWrite(13, HIGH);
        break;
      case 'q':
        digitalWrite(13, LOW);
        break;
    }
  } else {
  }
}
