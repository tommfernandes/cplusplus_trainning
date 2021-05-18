CPP    = g++
RM     = rm -f
OBJS   = main.o

LIBS   =
CFLAGS = -fexceptions

.PHONY: bin/Release/6_Declaracao_IF.exe clean clean-after

all: bin/Release/6_Declaracao_IF.exe

clean:
	$(RM) $(OBJS) bin/Release/6_Declaracao_IF.exe

clean-after:
	$(RM) $(OBJS)

bin/Release/6_Declaracao_IF.exe: $(OBJS)
	$(CPP) -O2 -s -Wall -o $@ $(OBJS) $(LIBS)

main.o: main.cpp
	$(CPP) -O2 -s -Wall -c $< -o $@ $(CFLAGS)

