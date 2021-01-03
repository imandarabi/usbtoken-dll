all: libnovin.so

libnovin.so:libnovin.o novintools.o hid.o
	gcc -shared novintools.o libnovin.o hid.o  -o libnovin.so -lcrypto -lusb-1.0

libnovin.o:novinlib.h novinlib.c 
	gcc -Wall -fPIC -c novinlib.c -I. -o libnovin.o 

novintools.o:novintools.h novintools.c
	gcc -Wall -fPIC -c novintools.c -o novintools.o -I.

hid.o:hidapi.h hid.c
	gcc -Wall -fPIC -L. -I/usr/include/libusb-1.0/ -c hid.c -o hid.o

clean:
	rm -rf *.o *.so  *~



