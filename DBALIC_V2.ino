#define SEN1 36
#define SEN2 39
#define SEN3 34
#define SEN4 35

#define L1 16
#define L2 17
#define L3 18
#define L4 19

long sum1, sum2, sum3, sum4;
long a, b, c, d;

void setup() {
  Serial.begin(115200);
  pinMode(SEN1, INPUT);
  pinMode(SEN2, INPUT);
  pinMode(SEN3, INPUT);
  pinMode(SEN4, INPUT);
  pinMode(L1, OUTPUT);
  pinMode(L2, OUTPUT);
  pinMode(L3, OUTPUT);
  pinMode(L4, OUTPUT);
}

void loop() {
  sum1 = 0;
  a = 0;
  for (int i = 0; i <= 1000; i++) {
    int val1 = analogRead(SEN1);
    sum1 = sum1 + val1;
  }
  a = sum1 / 1000;

  Serial.print("Value from SEN1: ");
  Serial.println(a);

  sum2 = 0;
  b = 0;
  for (int i = 0; i <= 1000; i++) {
    int val2 = analogRead(SEN2);
    sum2 = sum2 + val2;
  }
  b = sum2 / 1000;

  Serial.print("Value from SEN2: ");
  Serial.println(b);

  sum3 = 0;
  c = 0;
  for (int i = 0; i <= 1000; i++) {
    int val3 = analogRead(SEN3);
    sum3 = sum3 + val3;
  }
  c = sum3 / 1000;

  Serial.print("Value from SEN3: ");
  Serial.println(c);

  sum4 = 0;
  d = 0;
  for (int i = 0; i <= 1000; i++) {
    int val4 = analogRead(SEN4);
    sum4 = sum4 + val4;
  }
  d = sum4 / 1000;

  Serial.print("Value from SEN4: ");
  Serial.println(d);

  delay(200);


  if (a == 0) {
    analogWrite(L1, 0);
  } else {
    if ((a < 402) && (a > 0)) {
      analogWrite(L1, 25);
    } else if ((a < 804) && (a >= 402)) {
      analogWrite(L1, 50);
    } else if ((a < 1206) && (a >= 804)) {
      analogWrite(L1, 75);
    } else if ((a < 1608) && (a >= 1206)) {
      analogWrite(L1, 100);
    } else if ((a < 2010) && (a >= 1608)) {
      analogWrite(L1, 125);
    } else if ((a < 2412) && (a >= 2010)) {
      analogWrite(L1, 150);
    } else if ((a < 2814) && (a >= 2412)) {
      analogWrite(L1, 175);
    } else if ((a < 3216) && (a >= 2814)) {
      analogWrite(L1, 200);
    } else if ((a < 3618) && (a >= 3216)) {
      analogWrite(L1, 225);
    } else if (a >= 3618) {
      analogWrite(L1, 255);
    }
  }


  if (b == 0) {
    analogWrite(L2, 0);
  } else {
    if ((b < 402) && (b > 0)) {
      analogWrite(L2, 25);
    } else if ((b < 804) && (b >= 402)) {
      analogWrite(L2, 50);
    } else if ((b < 1206) && (b >= 804)) {
      analogWrite(L2, 75);
    } else if ((b < 1608) && (b >= 1206)) {
      analogWrite(L2, 100);
    } else if ((b < 2010) && (b >= 1608)) {
      analogWrite(L2, 125);
    } else if ((b < 2412) && (b >= 2010)) {
      analogWrite(L2, 150);
    } else if ((b < 2814) && (b >= 2412)) {
      analogWrite(L2, 175);
    } else if ((b < 3216) && (b >= 2814)) {
      analogWrite(L2, 200);
    } else if ((b < 3618) && (b >= 3216)) {
      analogWrite(L2, 225);
    } else if (b >= 3618) {
      analogWrite(L2, 255);
    }
  }


  if (c == 0) {
    analogWrite(L3, 0);
  } else {
    if ((c < 402) && (c > 0)) {
      analogWrite(L3, 25);
    } else if ((c < 804) && (c >= 402)) {
      analogWrite(L3, 50);
    } else if ((c < 1206) && (c >= 804)) {
      analogWrite(L3, 75);
    } else if ((c < 1608) && (c >= 1206)) {
      analogWrite(L3, 100);
    } else if ((c < 2010) && (c >= 1608)) {
      analogWrite(L3, 125);
    } else if ((c < 2412) && (c >= 2010)) {
      analogWrite(L3, 150);
    } else if ((c < 2814) && (c >= 2412)) {
      analogWrite(L3, 175);
    } else if ((c < 3216) && (c >= 2814)) {
      analogWrite(L3, 200);
    } else if ((c < 3618) && (c >= 3216)) {
      analogWrite(L3, 225);
    } else if (c >= 3618) {
      analogWrite(L3, 255);
    }
  }


  if (d == 0) {
    analogWrite(L4, 0);
  } else {
    if ((d < 402) && (d > 0)) {
      analogWrite(L4, 25);
    } else if ((d < 804) && (d >= 402)) {
      analogWrite(L4, 50);
    } else if ((d < 1206) && (d >= 804)) {
      analogWrite(L4, 75);
    } else if ((d < 1608) && (d >= 1206)) {
      analogWrite(L4, 100);
    } else if ((d < 2010) && (d >= 1608)) {
      analogWrite(L4, 125);
    } else if ((d < 2412) && (d >= 2010)) {
      analogWrite(L4, 150);
    } else if ((d < 2814) && (d >= 2412)) {
      analogWrite(L4, 175);
    } else if ((d < 3216) && (d >= 2814)) {
      analogWrite(L4, 200);
    } else if ((d < 3618) && (d >= 3216)) {
      analogWrite(L4, 225);
    } else if (d >= 3618) {
      analogWrite(L4, 255);
    }
  }
}