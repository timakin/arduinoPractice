void setup() {
  Serial.begin(9600);
  // ツール>シリアルモニタで試せる
}

void loop() {
  // put your main code here, to run repeatedly:
  int input;
  input = Serial.read();
  if(input != -1){
    Serial.write(input);
    Serial.write("\n");
  }
}
