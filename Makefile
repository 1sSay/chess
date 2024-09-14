# Настройки компилятора и опции компиляции
CXX = g++
CXXFLAGS = -std=c++11 -Wall -I./

# Имя исполняемого файла
TARGET = chess_game

# Файлы исходного кода
SRCS =  src/pieces/Bishop.cpp \
		src/pieces/King.cpp \
	    src/pieces/Knight.cpp \
        src/pieces/Pawn.cpp \
        src/pieces/Queen.cpp \
        src/pieces/Rook.cpp \
        src/board/Board.cpp \
        main.cpp

# Файлы объектных файлов
OBJS = $(SRCS:.cpp=.o)

# Правило для сборки исполняемого файла
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(TARGET)

# Правило для компиляции каждого .cpp файла в объектный файл
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Чистка собранных файлов
clean:
	rm -f $(OBJS) $(TARGET)