

#include "mbed.h"
#define BUTTON_1 p5
#define BUTTON_2 p6
#define BUTTON_3 p7
#define BUTTON_4 p8
#define RED_LED p9
#define YELLOW_LED p10
#define BLUE_LED p11
DigitalOut led1(RED_LED);
DigitalOut led2(YELLOW_LED);
DigitalOut led3(BLUE_LED);
InterruptIn boton1(BUTTON_1);
InterruptIn boton2(BUTTON_2);
InterruptIn boton3(BUTTON_3);
InterruptIn boton4(BUTTON_4);
void updateLEDs() {
	// (funcion de actualizacion disponible para uso futuro)
}
void button_1_handler() {
	led1 = !led1;
}
void button_2_handler() {
	led2 = !led2;
}
void button_3_handler() {
	led3 = !led3;
}
void button_4_handler() {
	led1 = 1;
	led2 = 1;
	led3 = 1;
}
int main() {
	led1 = 0;
	led2 = 0;
	led3 = 0;
	boton1.rise(&button_1_handler);
	boton2.rise(&button_2_handler);
	boton3.rise(&button_3_handler);
	boton4.rise(&button_4_handler);
	while (1)
		wait_ms(100);
}