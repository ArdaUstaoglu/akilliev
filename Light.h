class Light {
    int salon;
    int mutfak;
    int balkon;
    int butonState = 0;
  public:
    Light(int Pin1, int Pin2, int Pin3) {
      salon = Pin1;
      mutfak = Pin2;
      balkon = Pin3;
    }
    void setup() {
      pinMode(salon, OUTPUT);
      pinMode(mutfak, OUTPUT);
      pinMode(balkon, OUTPUT);
    }
    void salonac() {
      digitalWrite(salon, HIGH);
      delay(500);
    }
    void salonkapat() {
      digitalWrite(salon, LOW);
      delay(500);
    }
    void mutfakac() {
      digitalWrite(mutfak, HIGH);
      delay(500);
    }
    void mutfakkapat() {
      digitalWrite(mutfak, LOW);
      delay(500);
    }
    void balkonac() {
      digitalWrite(balkon, HIGH);
      delay(500);
    }
    void balkonkapat() {
      digitalWrite(balkon, LOW);
      delay(500);
    }
  private:
};
