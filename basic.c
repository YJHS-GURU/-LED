void setup() { /*시작될때 딱 한번 사용
핀 모드 설정, 시리얼 통신 설정 등*/
  Serial.begin(19200); // 시리얼 통신 속도를 9600으로 설정합니다.
}

void loop() { /*반복구*/
  Serial.println("Hello Guru"); // "Hello Guru"를 시리얼 모니터에 출력합니다.
  delay(1000); // 1초 동안 대기합니다.
}
