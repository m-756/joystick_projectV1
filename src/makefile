# Compilador
CC = gcc

# Flags do compilador
CFLAGS = -Wall -Wextra -std=c11

# Diretórios
SRC_DIR = src
INC_DIR = src/include
LIB_DIR = src/lib
BUILD_DIR = build

# Arquivos fonte e objetos
SRCS = $(wildcard $(LIB_DIR)/*.c) $(SRC_DIR)/main.c
OBJS = $(patsubst $(LIB_DIR)/%.c, $(BUILD_DIR)/%.o, $(SRCS))
OBJS := $(patsubst $(SRC_DIR)/main.c, $(BUILD_DIR)/main.o, $(OBJS))

# Nome do executável
TARGET = joystick_project

# Regra padrão
all: $(BUILD_DIR) $(TARGET)

# Compilação do projeto
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

# Compilação de cada arquivo .c
$(BUILD_DIR)/%.o: $(LIB_DIR)/%.c
	$(CC) $(CFLAGS) -I$(INC_DIR) -c $< -o $@

# Compilação do main.c
$(BUILD_DIR)/main.o: $(SRC_DIR)/main.c
	$(CC) $(CFLAGS) -I$(INC_DIR) -c $< -o $@

# Criar diretório build se não existir
$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

# Limpa arquivos compilados
clean:
	rm -rf $(BUILD_DIR) $(TARGET)
