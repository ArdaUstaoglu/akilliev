class perde {

int perdePin;

public:
ButtonPini(int Pin1) {
  perdePin = Pin1;
}
void setup() {
pinMode(perdePin, OUTPUT);
}
void perdeac() {
  digitalWrite(perdePin, HIGH);
  deley(500);
}
void perdekapat(){
digitalWrite(perdePin, LOW);
delay(500);
private:
};
