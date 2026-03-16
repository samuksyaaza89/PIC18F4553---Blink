# Blink — PIC18F4553

Projeto introdutório com PIC18F4553. LED piscando a 1Hz usando
delay bloqueante e configuração manual dos configuration bits.

## Hardware

- PIC18F4553
- LED + resistor 330Ω no pino RD0
- Cristal 20MHz externo

## Esquemático

<img width="960" height="789" alt="image" src="https://github.com/user-attachments/assets/64c48328-0a39-4d19-9616-55baea3200cd" />


## Configuration bits relevantes

| Fuse        | Valor     | Motivo                        |
|-------------|-----------|-------------------------------|
| FOSC        | HS        | cristal externo alta velocidade|
| WDT         | OFF       | watchdog desabilitado         |
| MCLRE       | ON        | reset externo habilitado      |
| LVP         | OFF       | sem low voltage programming   |

## Como compilar

- Compilador: XC8
- Editor: Neovim
- Build: Make

 ```bash
make
```

## Aprendizados

- Configuração de oscilador externo
- Uso do TRIS para direção de pinos
- Configuration bits via pragma
- Build system sem IDE usando XC8 + Makefile
