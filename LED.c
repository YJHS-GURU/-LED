void setup() {
  // put your setup code here, to run once:
  Serial.begin(19200); 
  pinMode(13, OUTPUT); //LED의 긴다리가 연결된 13번 핀을 출력으로 설정
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13, HIGH); // 13번 핀에 GND와 5V의 전압을 걸어줌
  Serial.println("5v");
  delay(1000); // 1초 대기
  digitalWrite(13, LOW); // 13번 핀에 GND와 0v의 전압을 걸어줌
  Serial.println("0v");
  delay(1000); // 1초대기
}
