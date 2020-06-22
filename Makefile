# from BSDI Makefile,v 2.6 1996/04/08 20:06:40 bostic Exp
#
# $FreeBSD: projects/doscmd/Makefile,v 1.39 2004/03/30 17:10:01 des Exp $

PROG=	doscmd
WARNS?=	2
SRCS=	AsyncIO.c ParseBuffer.c bios.c callback.c cmos.c config.c cpu.c cwd.c \
	debug.c disktab.c dos.c doscmd.c ems.c emuint.c exe.c i386-pinsn.c \
	int.c int10.c int13.c int14.c int16.c int17.c int1a.c int2f.c intff.c \
	mem.c mouse.c net.c port.c setver.c signal.c timer.c trace.c trap.c \
	tty.c video.c xms.c ${FONTHDRS}
CFLAGS+=	-I. -DDISASSEMBLER
FONTFILES=	cp437-8x8.pcf.gz cp437-8x14.pcf.gz cp437-8x16.pcf.gz
FONTHDRS=	font8x8.h font8x14.h font8x16.h
CLEANFILES=	${FONTFILES} ${FONTHDRS} emsdriv.sys redir.com

PREFIX?=	/usr/local
BINDIR?=	${PREFIX}/bin
DATADIR?=	${PREFIX}/share/doscmd
DOCSDIR?=	${PREFIX}/share/doc/doscmd
FONTDIR?=	${DATADIR}/fonts

X11BASE?=	/usr/X11R6
XINCDIR?=	${X11BASE}/include
XLIBDIR?=	${X11BASE}/lib

DIRMODE?=	0755

.if !defined(NO_X)
CFLAGS+=	-I${XINCDIR}
LDFLAGS=	-L${XLIBDIR}
LDADD=		-lX11
DPADD=		${XLIBDIR}/libX11.a
.else
CFLAGS+=	-DNO_X
.endif

beforeinstall:
	${INSTALL} -d -o ${SHAREOWN} -g ${SHAREGRP} -m ${DIRMODE} ${DATADIR}
	${INSTALL} -o ${SHAREOWN} -g ${SHAREGRP} -m ${SHAREMODE} \
	    emsdriv.sys redir.com ${DATADIR}
	${INSTALL} -d -o ${DOCOWN} -g ${DOCGRP} -m ${DIRMODE} ${DOCSDIR}
	${INSTALL} -o ${DOCOWN} -g ${DOCGRP} -m ${DOCMODE} \
	    ${.CURDIR}/README* ${.CURDIR}/PROBLEMS ${DOCSDIR}
.if !defined(NO_X)
	${INSTALL} -d -o ${SHAREOWN} -g ${SHAREGRP} -m ${DIRMODE} ${FONTDIR}
	${INSTALL} -o ${SHAREOWN} -g ${SHAREGRP} -m ${SHAREMODE} \
	    ${FONTFILES} ${.CURDIR}/fonts.dir ${FONTDIR}
.endif

doscmd: ${FONTFILES} ${FONTHDRS} emsdriv.sys redir.com

cp437-8x8.pcf.gz: cp437-8x8.pcf.gz.uu
	uudecode ${.CURDIR}/cp437-8x8.pcf.gz.uu

cp437-8x14.pcf.gz: cp437-8x14.pcf.gz.uu
	uudecode ${.CURDIR}/cp437-8x14.pcf.gz.uu

cp437-8x16.pcf.gz: cp437-8x16.pcf.gz.uu
	uudecode ${.CURDIR}/cp437-8x16.pcf.gz.uu

emsdriv.sys: emsdriv.sys.uu
	uudecode ${.CURDIR}/emsdriv.sys.uu

font8x8.h: cp437-8x8.fnt.uu
	uudecode -p ${.ALLSRC} | \
		file2c 'u_int8_t font8x8[] = {' '};' > ${.TARGET}

font8x14.h: cp437-8x14.fnt.uu
	uudecode -p ${.ALLSRC} | \
		file2c 'u_int8_t font8x14[] = {' '};' > ${.TARGET}

font8x16.h: cp437-8x16.fnt.uu
	uudecode -p ${.ALLSRC} | \
		file2c 'u_int8_t font8x16[] = {' '};' > ${.TARGET}

redir.com: redir.com.uu
	uudecode ${.CURDIR}/redir.com.uu

.include <bsd.prog.mk>
