c:\gbdk\bin\lcc -Wa-l -Wl-m -Wl-j -c -o transflag.o transflag.c
c:\gbdk\bin\lcc -Wa-l -Wl-m -Wl-j -c -o lesbo.o lesbo.c
c:\gbdk\bin\lcc -Wa-l -Wl-m -Wl-j -c -o gay.o gay.c
c:\gbdk\bin\lcc -Wa-l -Wl-m -Wl-j -c -o ace.o ace.c
c:\gbdk\bin\lcc -Wa-l -Wl-m -Wl-j -c -o bi.o bi.c
c:\gbdk\bin\lcc -Wa-l -Wl-m -Wl-j -c -o enby.o enby.c
c:\gbdk\bin\lcc -Wa-l -Wl-m -Wl-j -c -o genderfluid.o genderfluid.c
c:\gbdk\bin\lcc -Wa-l -Wl-m -Wl-j -c -o pan.o pan.c

c:\gbdk\bin\lcc -Wa-l -Wl-m -Wl-j -c -o flagtiles.o flagtiles.c
c:\gbdk\bin\lcc -Wa-l -Wl-m -Wl-j -c -o main.o main.c
c:\gbdk\bin\lcc -Wa-l -Wl-m -Wl-j  -Wl-yp0x143=0xC0 -o prideflag.gb transflag.o lesbo.o gay.o ace.o bi.o enby.o genderfluid.o pan.o flagtiles.o main.o

DEL *.lst
DEL *.o
DEL *.map
DEL *.sym