CC = gcc


SRCS = main.c myMath.c
OBJS = $(SRCS:.c=.o)

TARGET = myProgram

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) -o $(TARGET) $(OBJS)

%.o: %.c
	$(CC) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)

.PHONY: all clean
