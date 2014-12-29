INSTGRP 	?= "root"
MANGRP 		?= "man"
INSTUSR 	?= "root"

ZAURUS 		= @zaurus@

PCAPLNK 	= -lpcap

THREADL 	= 

BLDHOME		= .
CXX			= g++
CC			= gcc
LD			= g++
REALLD		= @LD@
LDFLAGS		=  -rdynamic
INSTALL		= /usr/bin/install -c
INSTALL_DATA = ${INSTALL} -m 644
INSTALL_PROGRAM = ${INSTALL}
INSTALL_SCRIPT = ${INSTALL}
INSTALL_STRIP_PROGRAM = @INSTALL_STRIP_PROGRAM@
LIBS		=  -ldl -lm
CLIBS   	= 
CXXLIBS		=  -lstdc++
KSLIBS		=  -lnl  
CFLAGS		=  -I/usr/include/ncurses  
CLIENTLIBS 	=  -ldl -lncurses -lpanel
CAPLIBS		= 
CLIENTFLAGS = 
CXXFLAGS 	= -Wall -g -O2
CPPFLAGS 	=  -I/usr/include/ncurses  
SUIDGROUP 	= kismet

prefix 		= /usr/local
exec_prefix = ${prefix}
plugindir	= ${exec_prefix}/lib/kismet
ETC			= ${DESTDIR}${prefix}/etc
BIN			= ${DESTDIR}${exec_prefix}/bin
SHARE 		= ${DESTDIR}${prefix}/share/kismet/
MAN 		= ${DESTDIR}${prefix}/share/man
LIB			= ${DESTDIR}${exec_prefix}/lib
WAV 		= ${DESTDIR}${prefix}/share/kismet/wav/

PLUGINLDFLAGS =   -rdynamic

