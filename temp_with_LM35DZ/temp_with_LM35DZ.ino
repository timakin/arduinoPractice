float a_in;          // アナログ入力値(0〜203)
float temp_c = 0;  // 摂氏値( ℃ )

void setup() {
  Serial.begin(9600);  // シリアル通信速度
}

void loop() {
  a_in = analogRead(0);
  temp_c = ((5 * a_in) / 1024) * 100;
  Serial.println(temp_c);
  delay(1000);
}
