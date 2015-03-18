char input[30];
int i = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  // シリアルポートを9600 bps[ビット/秒]で初期化
  Serial.begin(9600);
}

void loop() {
  if (Serial.available()) {
    input[i] = Serial.read();
    if(i>30 || input[i] == '.') {
      input[i] = '\0';
      if(String(input)=="on"){
        digitalWrite(13,HIGH);
      } 
      else if (String(input)=="off") {
        digitalWrite(13, LOW);
      }
      i = 0;
    }
    else { i++; }
  }
}
