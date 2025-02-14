# Projeto Joystick RGB LED e Display SSD1306 - RP2040

## Descrição

Este projeto tem como objetivo controlar LEDs RGB e exibir um quadrado móvel em um display OLED SSD1306, utilizando um joystick para a interação. O sistema também inclui botões para alternar a borda do quadrado e o estado dos LEDs.

O projeto foi desenvolvido para a placa **RP2040** com a BitDogLab e utiliza a comunicação I2C para interagir com o display OLED.

## Funcionalidades

- Controle de LEDs RGB via PWM com base nos eixos do joystick.
- Exibição de um quadrado móvel no display OLED SSD1306, cujo movimento é controlado pelo joystick.
- Botões configuráveis para alternar a borda do quadrado e os LEDs.
- Debouncing dos botões para evitar múltiplos registros de um único pressionamento.

## Requisitos

- **Placa RP2040** (exemplo: Raspberry Pi Pico).
- **Display OLED SSD1306** (com interface I2C).
- **Joystick** com eixos X e Y e botões.
- **LEDs RGB** com controle PWM.

## Estrutura do Projeto

- **include/**: Contém os arquivos de cabeçalho (.h) que definem a interface das funções.
- **src/**: Contém os arquivos de implementação (.c) das funções.
- **lib/**: Bibliotecas auxiliares (se houver).
- **Makefile**: Arquivo para compilar o projeto.
- **.vscode/**: Configurações do Visual Studio Code.

## Instalação

### Requisitos de Software

- [Visual Studio Code](https://code.visualstudio.com/) (opcional, mas recomendado).
- [PlatformIO](https://platformio.org/) ou [CMake](https://cmake.org/).
- [RP2040 SDK](https://github.com/raspberrypi/pico-sdk).

### Passos para Compilação

1. Clone o repositório:
   ```bash
   git clone https://github.com/m-756/joystick_projectV1
   cd Joystick_RGB_Display
