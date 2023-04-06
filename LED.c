#define LED_PIN 13   // LED가 연결된 핀

void setup() {
  pinMode(LED_PIN, OUTPUT);   // LED 핀을 출력으로 설정
}

void loop() {
  digitalWrite(LED_PIN, HIGH);   // LED 켜기
  delay(1000);   // 1초 대기
  digitalWrite(LED_PIN, LOW);   // LED 끄기
  delay(1000);   // 1초 대기
}
