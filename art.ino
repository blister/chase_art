// The Sculpture
// Art by Chase Lanier
// Programming by Eric Harrison

int ledPin = 13;

// IR Input groups
int pir1A = 2;
int pir1B = 3;
int pir2A = 5;
int pir2B = 6;
int pir3A = 8;
int pir3B = 9;

// value storage for inputs
int val1A = 0;
int val1B = 0;
int val2A = 0;
int val2B = 0;
int val3A = 0;
int val3B = 0;

int out1 = 4;
int out2 = 7;
int out3 = 10;

int on1 = 0;
int on2 = 0;
int on3 = 0;

void setup() {
	pinMode(pir1A, INPUT);
	pinMode(pir1B, INPUT);
	pinMode(pir2A, INPUT);
	pinMode(pir2B, INPUT);
	pinMode(pir3A, INPUT);

	pinMode(out1, OUTPUT);
	pinMode(out2, OUTPUT);
	pinMode(out3, OUTPUT);

	digitalWrite(ledPin, LOW);

	Serial.begin(9600);
}

void loop() {
	val1A = digitalRead(pir1A);
	val1B = digitalRead(pir1B);
	val2A = digitalRead(pir2A);
	val2B = digitalRead(pir2B);
	val3A = digitalRead(pir3A);
	val3B = digitalRead(pir3B);

	Serial.print("val1A:");
	Serial.print(val1A);
	Serial.print(" val1B:");
	Serial.println(val1B);
	//Serial.print("val2A:");
	//Serial.print(val2A);
	//Serial.print(" val2B:");
	//Serial.println(val2B);
	//Serial.print("val3A:");
	//Serial.print(val3A);
	//Serial.print(" val3B:");
	//Serial.println(val3B);

	if ( val1A && val1B ) {
		digitalWrite(out1, LOW);
		delay(3000);
		Serial.println("Light 1 on");
		digitalWrite(out1, HIGH);
		delay(3000);
	}
	if ( val2A && val2B ) {
		digitalWrite(out2, LOW);
		delay(3000);
		Serial.println("Light 2 on");
		digitalWrite(out2, HIGH);
		delay(3000);
	}
	if ( val3A && val3B ) {
		digitalWrite(out3, LOW);
		delay(3000);
		Serial.println("Light 3 on");
		digitalWrite(out3, HIGH);
		delay(3000);
	}
}
