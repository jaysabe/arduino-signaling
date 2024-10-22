//practice arduino signaling with mock servos
#include <Servo.h>

//prototypes
void setup();
void loop();

void setup(Servo& myservo){
    myservo.attach(9);
}

void loop(Servo& myservo){
    for(pos=0; pos <= 180; pos += 1){
        myservo.write(pos);
        delay(15);
    }

    for (pos = 180; pos >= 0; pos -= 1){
        myservo.write(pos);
        delay(15);
    }
}

main(){
Servo myservo;
int pos {0};

    loop();

    return 0;
}