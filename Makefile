CC = g++
TARGET  = array
CFLAGS = -g -Wall
OBJS = main.o array.o rangearray.o

$(TARGET) : $(OBJS)
	$(CC) -o $@ $^ -lm

.c.o :
	$(CC) $(CFLAGS) -c -o $@ $<

.PHONY : clean
clean :
	rm $(TARGET) $(OBJS)
