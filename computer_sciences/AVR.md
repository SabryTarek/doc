‫البيانات‬ ‫نوع‬
‫(‬ ‫‪Bytes‬‬ ‫عدد‬ ‫)‬ ‫الذاكرة‬ ‫استهلك‬ ‫المتغير‬ ‫داخل‬ ‫وضعها‬ ‫يمكن‬ ‫قيمة‬ ‫أقصى‬
‫‪-32,768‬‬ ‫→‬ ‫‪+32,767‬‬ ‫‪2-bytes‬‬ ‫‪(16‬‬ ‫)‪bit‬‬ ‫‪int‬‬
‫‪65,535‬‬ ‫‪2-bytes‬‬ ‫‪(16‬‬ ‫)‪bit‬‬ ‫‪unsigned‬‬ ‫‪int‬‬
‫‪1.2E-38‬‬ ‫‪to‬‬ ‫‪3.4E+38‬‬ ‫‪4-bytes‬‬ ‫‪(32‬‬ ‫)‪bit‬‬ ‫‪float‬‬
‫‪2.3E-308‬‬ ‫‪to‬‬ ‫‪1.7E+308‬‬ ‫‪8-bytes‬‬ ‫‪(32‬‬ ‫)‪bit‬‬ ‫‪double‬‬
‫‪-2,147,483,648‬‬ ‫→‬ ‫‪+2,147,483,647‬‬ ‫‪4-bytes‬‬ ‫‪(32‬‬ ‫)‪bit‬‬ ‫‪long‬‬
‫‪4,294,967,295‬‬ ‫‪4-bytes‬‬ ‫‪(32‬‬ ‫)‪bit‬‬ ‫‪unsigned‬‬ ‫‪long‬‬
‫‪-‬‬ ‫‪9.223372037×1018‬‬
‫‪+‬‬ ‫‪9.223372037×1018‬‬ ‫‪8-bytes‬‬ ‫‪(64‬‬ ‫)‪bit‬‬ ‫‪long‬‬ ‫‪long‬‬
‫‪1.844674407×1019‬‬ ‫‪8-bytes‬‬ ‫‪(64‬‬ ‫)‪bit‬‬ ‫‪unsigned‬‬ ‫‪long‬‬ ‫‪long‬‬
‫ملحظة‬

- PIC
- AVR
- ARM
- 8085
- 8086
- FPGA


MicroController consist of:
- Flash Memory
- RAM
- SRAM


byte = 8 bit

Standerd C
- int -> 2-byte (16 bit)
- unsigned int -> 2-byte (16 bit)
- float -> 4-byte (32 bit)
- double -> 8-byte (64 bit)
- long -> 4-byte (32 bit)
- unsigned long -> 4-byte (32 bit)
- long long -> 8-byte (64 bit)
- unsigned long long -> 8-byte (64 bit)


ANCI C - C99
- int8_t
- int16_t
- int32_t
- int64_t
- uint8_t
- uint16_t
- uint32_t
- uint64_t




| operation | symbol |
|-------------|------|
| AND         | &    |
| OR          | |    |
| NOT         | ~    |
| XOR         | ^    |
| shift left  | <<   |
| shift right | >>   |



xNumber = ~xNumber


-------------------------------------------------------------------------------------------------------------------
BootLoader: optional small program run before the main one like arduino bootloader

-------------------------------------------------------------------------------------------------------------------
> Interrupt

- External Interrupt (input pins)
- ADC Interrupt
- Timer Interrupt


Interrupt program (Interrupt Service Routing (ISR))
- out of main function
- ATmega16/ATmega32 have 3 pins for External Interrupt
    - INT0 (pin 2 on port D)
    - INT1 (pin 3 on port D)
    - INT2 (pin 2 on port B)
-------------------------------------------------------------------------------------------------------------------
> ATmega16 
- RESET (Active Low)
- VCC
- AVCC
- GND
- GND
- AREF
- XTAL1
- XTAL2
- 
- PortA (PA)
    - PA0 (ADC0)
    - PA1 (ADC1)
    - PA2 (ADC2)
    - PA3 (ADC3)
    - PA4 (ADC4)
    - PA5 (ADC5)
    - PA6 (ADC6)
    - PA7 (ADC7)

- PortB (PB)
    - PB0
    - PB1
    - PB2 (INT2/AIN0)
    - PB3
    - PB4
    - PB5
    - PB6
    - PB7
- PortC (PC)
    - PC0
    - PC1
    - PC2
    - PC3
    - PC4
    - PC5
    - PC6
    - PC7
- PortD (PD)
    - PD0
    - PD1
    - PD2 (INT0)
    - PD3 (INT1)
    - PD4
    - PD5
    - PD6
    - PD7
-------------------------------------------------------------------------------------------------------------------
#define F_CPU 8000000UL //Syteemklok
#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>
-------------------------------------------------------------------------------------------------------------------











MicroProcessors:
    - Arm cortex M4 controller

MicroControllers:
    - Tiva C lanuchpad with cortex M4 controller
    - STM32F4291-DISC1

Logic Analyzer

- MicroControllers VS MicroProcessors
- MicroControllers Architectures
MicroController Unit (MCU)

- General Perpose Input/Output(GPIO)
- GPIO Expandor (MCP23017)

- Interfaces
    - SPI
        - SCL
        - SDA
    - UART
    - I2C
    - I2S

- Interrupt
- Timers
    - modes
- Analog Digital Converters (ADC)
- Digital Analog Converters (DAC)

- Fuse & BitLocks

- Pulse Width Modulation (PWM)
- 






PCB
gerber file



Timer 555

1. GND
2. Trigger
3. Output
4. RESET
5. -
    |
6.  --->  controll pulses with resistors and capasitors
    |
7.  -
8. VCC [5:15]V


- MonoStable -> t(Sec) = 1.1 * R(om)  * C(F)
- BiStable
- AStable -> t1 = 0.693 * (R1+R2) * C
          -> t2 = 0.693 * R2 * C


Sensors: physics quantum to voltage change with it
- Temprture
- pressure
- 






hot air


Code Comprssor Studio