a.out: Main.o Menu.o Insert.o Print.o Getstring.o FindMid.o Free.o
	cc Main.o Menu.o Insert.o Print.o Getstring.o FindMid.o Free.o

Main.o:Main.c
	cc -c Main.c
Menu.o:Menu.c
	cc -c Menu.c
Insert.o:Insert.c
	cc -c Insert.c
Print.o:Print.c
	cc -c Print.c
Getstring.o:Getstring.c
	cc -c Getstring.c
FindMid.o:FindMid.c
	cc -c FindMid.c
Free.o:Free.c
	cc -c Free.c
