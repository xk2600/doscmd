/*
 * Copyright (c) 1992, 1993, 1996
 *	Berkeley Software Design, Inc.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. All advertising materials mentioning features or use of this software
 *    must display the following acknowledgement:
 *	This product includes software developed by Berkeley Software
 *	Design, Inc.
 *
 * THIS SOFTWARE IS PROVIDED BY Berkeley Software Design, Inc. ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL Berkeley Software Design, Inc. BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 *	BSDI vparams.h,v 2.2 1996/04/08 19:33:13 bostic Exp
 *
 * $FreeBSD: projects/doscmd/vparams.h,v 1.2 2001/07/24 11:44:20 tg Exp $
 */

/* Collect some default parameters for the VGA emulator in this file. This is
   supposed to be included only from 'video.c' and needs some type definitions
   from 'video.h'. */

u_int8_t videoparams[][64] = {
	/* Mode 0: Text, 40x25, CGA (200 lines) */
	{ 0x28, 0x18, 0x08, 0x00, 0x08, 0x09, 0x03, 0x00,
	  0x02, 0x63, 0x2d, 0x27, 0x28, 0x90, 0x2b, 0xa0,
	  0xbf, 0x1f, 0x00, 0xc7, 0x06, 0x07, 0x00, 0x00,
	  0x00, 0x00, 0x9c, 0x8e, 0x8f, 0x14, 0x1f, 0x96,
	  0xb9, 0xa3, 0xff, 0x00, 0x01, 0x02, 0x03, 0x04,
	  0x05, 0x14, 0x07, 0x38, 0x39, 0x3a, 0x3b, 0x3c,
	  0x3d, 0x3e, 0x3f, 0x08, 0x00, 0x0f, 0x00, 0x00,
	  0x00, 0x00, 0x00, 0x00, 0x10, 0x0e, 0x00, 0xff
	},
	/* Mode 1: Text, 40x25, CGA (200 lines) */
	{ 0x28, 0x18, 0x08, 0x00, 0x08, 0x09, 0x03, 0x00,
	  0x02, 0x63, 0x2d, 0x27, 0x28, 0x90, 0x2b, 0xa0,
	  0xbf, 0x1f, 0x00, 0xc7, 0x06, 0x07, 0x00, 0x00,
	  0x00, 0x00, 0x9c, 0x8e, 0x8f, 0x14, 0x1f, 0x96,
	  0xb9, 0xa3, 0xff, 0x00, 0x01, 0x02, 0x03, 0x04,
	  0x05, 0x14, 0x07, 0x38, 0x39, 0x3a, 0x3b, 0x3c,
	  0x3d, 0x3e, 0x3f, 0x08, 0x00, 0x0f, 0x00, 0x00,
	  0x00, 0x00, 0x00, 0x00, 0x10, 0x0e, 0x00, 0xff,
	},
	/* Mode 2: Text, 80x25, CGA (200 lines) */
	{ 0x50, 0x18, 0x08, 0x00, 0x10, 0x01, 0x03, 0x00,
	  0x02, 0x63, 0x5f, 0x4f, 0x50, 0x82, 0x55, 0x81,
	  0xbf, 0x1f, 0x00, 0xc7, 0x06, 0x07, 0x00, 0x00,
	  0x00, 0x00, 0x9c, 0x8e, 0x8f, 0x28, 0x1f, 0x96,
	  0xb9, 0xa3, 0xff, 0x00, 0x01, 0x02, 0x03, 0x04,
	  0x05, 0x14, 0x07, 0x38, 0x39, 0x3a, 0x3b, 0x3c,
	  0x3d, 0x3e, 0x3f, 0x08, 0x00, 0x0f, 0x00, 0x00,
	  0x00, 0x00, 0x00, 0x00, 0x10, 0x0e, 0x00, 0xff,
	},
	/* Mode 3: Text, 80x25, CGA (200 lines) */
	{ 0x50, 0x18, 0x08, 0x00, 0x10, 0x01, 0x03, 0x00,
	  0x02, 0x63, 0x5f, 0x4f, 0x50, 0x82, 0x55, 0x81,
	  0xbf, 0x1f, 0x00, 0xc7, 0x06, 0x07, 0x00, 0x00,
	  0x00, 0x00, 0x9c, 0x8e, 0x8f, 0x28, 0x1f, 0x96,
	  0xb9, 0xa3, 0xff, 0x00, 0x01, 0x02, 0x03, 0x04,
	  0x05, 0x14, 0x07, 0x38, 0x39, 0x3a, 0x3b, 0x3c,
	  0x3d, 0x3e, 0x3f, 0x08, 0x00, 0x0f, 0x00, 0x00,
	  0x00, 0x00, 0x00, 0x00, 0x10, 0x0e, 0x00, 0xff,
	},
	/* Mode 4: Graphics, 320x200, 4 colors */
	{ 0x28, 0x18, 0x08, 0x00, 0x40, 0x09, 0x03, 0x00,
	  0x02, 0x63, 0x2d, 0x27, 0x28, 0x90, 0x2b, 0x80,
	  0xbf, 0x1f, 0x00, 0xc1, 0x00, 0x00, 0x00, 0x00,
	  0x00, 0x00, 0x9c, 0x8e, 0x8f, 0x14, 0x00, 0x96,
	  0xb9, 0xa2, 0xff, 0x00, 0x13, 0x15, 0x17, 0x02,
	  0x04, 0x06, 0x07, 0x10, 0x11, 0x12, 0x13, 0x14,
	  0x15, 0x16, 0x17, 0x01, 0x00, 0x03, 0x00, 0x00,
	  0x00, 0x00, 0x00, 0x00, 0x30, 0x0f, 0x00, 0xff,
	},
	/* Mode 5: Graphics, 320x200, 4 colors */
	{ 0x28, 0x18, 0x08, 0x00, 0x40, 0x09, 0x03, 0x00,
	  0x02, 0x63, 0x2d, 0x27, 0x28, 0x90, 0x2b, 0x80,
	  0xbf, 0x1f, 0x00, 0xc1, 0x00, 0x00, 0x00, 0x00,
	  0x00, 0x00, 0x9c, 0x8e, 0x8f, 0x14, 0x00, 0x96,
	  0xb9, 0xa2, 0xff, 0x00, 0x13, 0x15, 0x17, 0x02,
	  0x04, 0x06, 0x07, 0x10, 0x11, 0x12, 0x13, 0x14,
	  0x15, 0x16, 0x17, 0x01, 0x00, 0x03, 0x00, 0x00,
	  0x00, 0x00, 0x00, 0x00, 0x30, 0x0f, 0x00, 0xff,
	},
	/* Mode 6: Graphics, 640x200, 2 colors */
	{ 0x50, 0x18, 0x08, 0x00, 0x40, 0x01, 0x01, 0x00,
	  0x06, 0x63, 0x5f, 0x4f, 0x50, 0x82, 0x54, 0x80,
	  0xbf, 0x1f, 0x00, 0xc1, 0x00, 0x00, 0x00, 0x00,
	  0x00, 0x00, 0x9c, 0x8e, 0x8f, 0x28, 0x00, 0x96,
	  0xb9, 0xc2, 0xff, 0x00, 0x17, 0x17, 0x17, 0x17,
	  0x17, 0x17, 0x17, 0x17, 0x17, 0x17, 0x17, 0x17,
	  0x17, 0x17, 0x17, 0x01, 0x00, 0x01, 0x00, 0x00,
	  0x00, 0x00, 0x00, 0x00, 0x00, 0x0d, 0x00, 0xff,
	},
	/* Mode 7: Text, 80x25, mono, MDA (350 lines) */
	{ 0x50, 0x18, 0x0e, 0x00, 0x10, 0x00, 0x03, 0x00,
	  0x03, 0xa6, 0x5f, 0x4f, 0x50, 0x82, 0x55, 0x81,
	  0xbf, 0x1f, 0x00, 0x4d, 0x0b, 0x0c, 0x00, 0x00,
	  0x00, 0x00, 0x83, 0x85, 0x5d, 0x28, 0x0d, 0x63,
	  0xba, 0xa3, 0xff, 0x00, 0x08, 0x08, 0x08, 0x08,
	  0x08, 0x08, 0x08, 0x10, 0x18, 0x18, 0x18, 0x18,
	  0x18, 0x18, 0x18, 0x0e, 0x00, 0x0f, 0x08, 0x00,
	  0x00, 0x00, 0x00, 0x00, 0x10, 0x0a, 0x00, 0xff,
	},
	/* Mode 8: reserved */
	{ 0x50, 0x18, 0x10, 0x00, 0x10, 0x01, 0x03, 0x00,
	  0x02, 0x62, 0x5f, 0x4f, 0x50, 0x82, 0x55, 0x81,
	  0xbf, 0x1f, 0x00, 0x4f, 0x0d, 0x0e, 0x00, 0x00,
	  0x00, 0x00, 0x9c, 0x8e, 0x8f, 0x28, 0x0f, 0x96,
	  0xb9, 0xa3, 0xff, 0x00, 0x08, 0x08, 0x08, 0x08,
	  0x08, 0x08, 0x08, 0x10, 0x18, 0x18, 0x18, 0x18,
	  0x18, 0x18, 0x18, 0x0a, 0x00, 0x0f, 0x00, 0x00,
	  0x00, 0x00, 0x00, 0x00, 0x10, 0x0a, 0x00, 0xff,
	},
	/* Mode 9: reserved */
	{ 0x28, 0x18, 0x10, 0x00, 0x08, 0x09, 0x03, 0x00,
	  0x02, 0x63, 0x2d, 0x27, 0x28, 0x90, 0x2b, 0xa0,
	  0xbf, 0x1f, 0x00, 0x4f, 0x0d, 0x0e, 0x00, 0x00,
	  0x00, 0x00, 0x9c, 0x8e, 0x8f, 0x14, 0x1f, 0x96,
	  0xb9, 0xa3, 0xff, 0x00, 0x01, 0x02, 0x03, 0x04,
	  0x05, 0x14, 0x07, 0x38, 0x39, 0x3a, 0x3b, 0x3c,
	  0x3d, 0x3e, 0x3f, 0x08, 0x00, 0x0f, 0x00, 0x00,
	  0x00, 0x00, 0x00, 0x00, 0x10, 0x0e, 0x00, 0xff,
	},
	/* Mode a: reserved */
	{ 0x50, 0x18, 0x10, 0x00, 0x10, 0x01, 0x03, 0x00,
	  0x02, 0x63, 0x60, 0x4f, 0x50, 0x82, 0x56, 0x82,
	  0xbf, 0x1f, 0x00, 0x4f, 0x0d, 0x0e, 0x00, 0x00,
	  0x00, 0x00, 0x9c, 0x8e, 0x8f, 0x28, 0x1f, 0x96,
	  0xb9, 0xa3, 0xff, 0x00, 0x01, 0x02, 0x03, 0x04,
	  0x05, 0x14, 0x07, 0x38, 0x39, 0x3a, 0x3b, 0x3c,
	  0x3d, 0x3e, 0x3f, 0x08, 0x00, 0x0f, 0x00, 0x00,
	  0x00, 0x00, 0x00, 0x00, 0x10, 0x0e, 0x00, 0xff,
	},
	/* Mode b: reserved */
	{ 0x50, 0x00, 0x00, 0x00, 0x00, 0x29, 0x0f, 0x00,
	  0x06, 0x62, 0x5f, 0x4f, 0x50, 0x82, 0x55, 0x81,
	  0xbf, 0x1f, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00,
	  0x00, 0x00, 0x9c, 0x8e, 0x8f, 0x28, 0x1f, 0x96,
	  0xb9, 0xe3, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00,
	  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	  0x00, 0x00, 0x3f, 0x01, 0x00, 0x0f, 0x00, 0x00,
	  0x00, 0x0f, 0x00, 0x00, 0x08, 0x05, 0x0f, 0xff,
	},
	/* Mode c: reserved */
	{ 0x50, 0x00, 0x00, 0x00, 0x00, 0x29, 0x0f, 0x00,
	  0x06, 0x63, 0x5f, 0x4f, 0x50, 0x82, 0x55, 0x81,
	  0xbf, 0x1f, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00,
	  0x00, 0x00, 0x9c, 0x8e, 0x8f, 0x28, 0x1f, 0x96,
	  0xb9, 0xe3, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00,
	  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	  0x00, 0x00, 0x3f, 0x01, 0x00, 0x0f, 0x00, 0x00,
	  0x00, 0x0f, 0x00, 0x00, 0x08, 0x05, 0x0f, 0xff,
	},
	/* Mode d: Graphics, 320x200, 16 colors */
	{ 0x28, 0x18, 0x08, 0x00, 0x20, 0x09, 0x0f, 0x00,
	  0x06, 0x63, 0x2d, 0x27, 0x28, 0x90, 0x2b, 0x80,
	  0xbf, 0x1f, 0x00, 0xc0, 0x00, 0x00, 0x00, 0x00,
	  0x00, 0x00, 0x9c, 0x8e, 0x8f, 0x14, 0x00, 0x96,
	  0xb9, 0xe3, 0xff, 0x00, 0x01, 0x02, 0x03, 0x04,
	  0x05, 0x06, 0x07, 0x10, 0x11, 0x12, 0x13, 0x14,
	  0x15, 0x16, 0x17, 0x01, 0x00, 0x0f, 0x00, 0x00,
	  0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x0f, 0xff,
	},
	/* Mode e: Graphics, 640x200, 16 colors */
	{ 0x50, 0x18, 0x08, 0x00, 0x40, 0x01, 0x0f, 0x00,
	  0x06, 0x63, 0x5f, 0x4f, 0x50, 0x82, 0x54, 0x80,
	  0xbf, 0x1f, 0x00, 0xc0, 0x00, 0x00, 0x00, 0x00,
	  0x00, 0x00, 0x9c, 0x8e, 0x8f, 0x28, 0x00, 0x96,
	  0xb9, 0xe3, 0xff, 0x00, 0x01, 0x02, 0x03, 0x04,
	  0x05, 0x06, 0x07, 0x10, 0x11, 0x12, 0x13, 0x14,
	  0x15, 0x16, 0x17, 0x01, 0x00, 0x0f, 0x00, 0x00,
	  0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x0f, 0xff,
	},
	/* Mode f: Graphics, 640x350, mono (EGA with 64K) */
	{ 0x50, 0x18, 0x0e, 0x00, 0x80, 0x01, 0x0f, 0x00,
	  0x06, 0xa2, 0x5f, 0x4f, 0x50, 0x82, 0x54, 0x80,
	  0xbf, 0x1f, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00,
	  0x00, 0x00, 0x83, 0x85, 0x5d, 0x28, 0x0f, 0x63,
	  0xba, 0xe3, 0xff, 0x00, 0x08, 0x00, 0x00, 0x18,
	  0x18, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00,
	  0x18, 0x00, 0x00, 0x0b, 0x00, 0x05, 0x00, 0x00,
	  0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x05, 0xff,
	},
	/* Mode 10: Graphics, 640x350, 4 colors (EGA with 64K) */
	{ 0x50, 0x18, 0x0e, 0x00, 0x80, 0x01, 0x0f, 0x00,
	  0x06, 0xa3, 0x5f, 0x4f, 0x50, 0x82, 0x54, 0x80,
	  0xbf, 0x1f, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00,
	  0x00, 0x00, 0x83, 0x85, 0x5d, 0x28, 0x0f, 0x63,
	  0xba, 0xe3, 0xff, 0x00, 0x01, 0x02, 0x03, 0x04,
	  0x05, 0x14, 0x07, 0x38, 0x39, 0x3a, 0x3b, 0x3c,
	  0x3d, 0x3e, 0x3f, 0x01, 0x00, 0x0f, 0x00, 0x00,
	  0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x0f, 0xff,
	},
	/* Mode f: Graphics, 640x350, mono (EGA with >64K) */
	{ 0x50, 0x18, 0x0e, 0x00, 0x80, 0x01, 0x0f, 0x00,
	  0x06, 0xa2, 0x5f, 0x4f, 0x50, 0x82, 0x54, 0x80,
	  0xbf, 0x1f, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00,
	  0x00, 0x00, 0x83, 0x85, 0x5d, 0x28, 0x0f, 0x63,
	  0xba, 0xe3, 0xff, 0x00, 0x08, 0x00, 0x00, 0x18,
	  0x18, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00,
	  0x18, 0x00, 0x00, 0x0b, 0x00, 0x05, 0x00, 0x00,
	  0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x05, 0xff,
	},
	/* Mode 10: Graphics, 640x350, 16 colors (EGA with >64K) */
	{ 0x50, 0x18, 0x0e, 0x00, 0x80, 0x01, 0x0f, 0x00,
	  0x06, 0xa3, 0x5f, 0x4f, 0x50, 0x82, 0x54, 0x80,
	  0xbf, 0x1f, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00,
	  0x00, 0x00, 0x83, 0x85, 0x5d, 0x28, 0x0f, 0x63,
	  0xba, 0xe3, 0xff, 0x00, 0x01, 0x02, 0x03, 0x04,
	  0x05, 0x14, 0x07, 0x38, 0x39, 0x3a, 0x3b, 0x3c,
	  0x3d, 0x3e, 0x3f, 0x01, 0x00, 0x0f, 0x00, 0x00,
	  0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x0f, 0xff,
	},
	/* Mode 0: Text, 40x25, EGA (350 lines) */
	{ 0x28, 0x18, 0x0e, 0x00, 0x08, 0x09, 0x03, 0x00,
	  0x02, 0xa3, 0x2d, 0x27, 0x28, 0x90, 0x2b, 0xa0,
	  0xbf, 0x1f, 0x00, 0x4d, 0x0b, 0x0c, 0x00, 0x00,
	  0x00, 0x00, 0x83, 0x85, 0x5d, 0x14, 0x1f, 0x63,
	  0xba, 0xa3, 0xff, 0x00, 0x01, 0x02, 0x03, 0x04,
	  0x05, 0x14, 0x07, 0x38, 0x39, 0x3a, 0x3b, 0x3c,
	  0x3d, 0x3e, 0x3f, 0x08, 0x00, 0x0f, 0x00, 0x00,
	  0x00, 0x00, 0x00, 0x00, 0x10, 0x0e, 0x00, 0xff,
	},
	/* Mode 1: Text, 40x25, EGA (350 lines) */
	{ 0x28, 0x18, 0x0e, 0x00, 0x08, 0x09, 0x03, 0x00,
	  0x02, 0xa3, 0x2d, 0x27, 0x28, 0x90, 0x2b, 0xa0,
	  0xbf, 0x1f, 0x00, 0x4d, 0x0b, 0x0c, 0x00, 0x00,
	  0x00, 0x00, 0x83, 0x85, 0x5d, 0x14, 0x1f, 0x63,
	  0xba, 0xa3, 0xff, 0x00, 0x01, 0x02, 0x03, 0x04,
	  0x05, 0x14, 0x07, 0x38, 0x39, 0x3a, 0x3b, 0x3c,
	  0x3d, 0x3e, 0x3f, 0x08, 0x00, 0x0f, 0x00, 0x00,
	  0x00, 0x00, 0x00, 0x00, 0x10, 0x0e, 0x00, 0xff,
	},
	/* Mode 2: Text, 80x25, EGA (350 lines) */
	{ 0x50, 0x18, 0x0e, 0x00, 0x10, 0x01, 0x03, 0x00,
	  0x02, 0xa3, 0x5f, 0x4f, 0x50, 0x82, 0x55, 0x81,
	  0xbf, 0x1f, 0x00, 0x4d, 0x0b, 0x0c, 0x00, 0x00,
	  0x00, 0x00, 0x83, 0x85, 0x5d, 0x28, 0x1f, 0x63,
	  0xba, 0xa3, 0xff, 0x00, 0x01, 0x02, 0x03, 0x04,
	  0x05, 0x14, 0x07, 0x38, 0x39, 0x3a, 0x3b, 0x3c,
	  0x3d, 0x3e, 0x3f, 0x08, 0x00, 0x0f, 0x00, 0x00,
	  0x00, 0x00, 0x00, 0x00, 0x10, 0x0e, 0x00, 0xff,
	},
	/* Mode 3: Text, 80x25, EGA (350 lines) */
	{ 0x50, 0x18, 0x0e, 0x00, 0x10, 0x01, 0x03, 0x00,
	  0x02, 0xa3, 0x5f, 0x4f, 0x50, 0x82, 0x55, 0x81,
	  0xbf, 0x1f, 0x00, 0x4d, 0x0b, 0x0c, 0x00, 0x00,
	  0x00, 0x00, 0x83, 0x85, 0x5d, 0x28, 0x1f, 0x63,
	  0xba, 0xa3, 0xff, 0x00, 0x01, 0x02, 0x03, 0x04,
	  0x05, 0x14, 0x07, 0x38, 0x39, 0x3a, 0x3b, 0x3c,
	  0x3d, 0x3e, 0x3f, 0x08, 0x00, 0x0f, 0x00, 0x00,
	  0x00, 0x00, 0x00, 0x00, 0x10, 0x0e, 0x00, 0xff,
	},
	/* Modes 0, 1: Text, 40x25, VGA (400 lines) */
	{ 0x28, 0x18, 0x10, 0x00, 0x08, 0x08, 0x03, 0x00,
	  0x02, 0x67, 0x2d, 0x27, 0x28, 0x90, 0x2b, 0xa0,
	  0xbf, 0x1f, 0x00, 0x4f, 0x0d, 0x0e, 0x00, 0x00,
	  0x00, 0x00, 0x9c, 0x8e, 0x8f, 0x14, 0x1f, 0x96,
	  0xb9, 0xa3, 0xff, 0x00, 0x01, 0x02, 0x03, 0x04,
	  0x05, 0x14, 0x07, 0x38, 0x39, 0x3a, 0x3b, 0x3c,
	  0x3d, 0x3e, 0x3f, 0x0c, 0x00, 0x0f, 0x08, 0x00,
	  0x00, 0x00, 0x00, 0x00, 0x10, 0x0e, 0x00, 0xff,
	},
	/* Modes 2, 3: Text, 80x25, VGA (400 lines) */
	{ 0x50, 0x18, 0x10, 0x00, 0x10, 0x00, 0x03, 0x00,
	  0x02, 0x67, 0x5f, 0x4f, 0x50, 0x82, 0x55, 0x81,
	  0xbf, 0x1f, 0x00, 0x4f, 0x0d, 0x0e, 0x00, 0x00,
	  0x00, 0x00, 0x9c, 0x8e, 0x8f, 0x28, 0x1f, 0x96,
	  0xb9, 0xa3, 0xff, 0x00, 0x01, 0x02, 0x03, 0x04,
	  0x05, 0x14, 0x07, 0x38, 0x39, 0x3a, 0x3b, 0x3c,
	  0x3d, 0x3e, 0x3f, 0x0c, 0x00, 0x0f, 0x08, 0x00,
	  0x00, 0x00, 0x00, 0x00, 0x10, 0x0e, 0x00, 0xff,
	},
	/* Mode 7: Text, 80x25, mono, VGA (400 lines) */
	{ 0x50, 0x18, 0x10, 0x00, 0x10, 0x00, 0x03, 0x00,
	  0x02, 0x66, 0x5f, 0x4f, 0x50, 0x82, 0x55, 0x81,
	  0xbf, 0x1f, 0x00, 0x4f, 0x0d, 0x0e, 0x00, 0x00,
	  0x00, 0x00, 0x9c, 0x8e, 0x8f, 0x28, 0x0f, 0x96,
	  0xb9, 0xa3, 0xff, 0x00, 0x08, 0x08, 0x08, 0x08,
	  0x08, 0x08, 0x08, 0x10, 0x18, 0x18, 0x18, 0x18,
	  0x18, 0x18, 0x18, 0x0e, 0x00, 0x0f, 0x08, 0x00,
	  0x00, 0x00, 0x00, 0x00, 0x10, 0x0a, 0x00, 0xff,
	},
	/* Mode 11: Graphics, 640x480, 2 colors */
	{ 0x50, 0x1d, 0x10, 0x00, 0xa0, 0x01, 0x0f, 0x00,
	  0x06, 0xe3, 0x5f, 0x4f, 0x50, 0x82, 0x54, 0x80,
	  0x0b, 0x3e, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00,
	  0x00, 0x00, 0xea, 0x8c, 0xdf, 0x28, 0x00, 0xe7,
	  0x04, 0xc3, 0xff, 0x00, 0x3f, 0x3f, 0x3f, 0x3f,
	  0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f,
	  0x3f, 0x3f, 0x3f, 0x01, 0x00, 0x0f, 0x00, 0x00,
	  0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x01, 0xff,
	},
	/* Mode 12: Graphics, 640x480, 16 colors */
	{ 0x50, 0x1d, 0x10, 0x00, 0xa0, 0x01, 0x0f, 0x00,
	  0x06, 0xe3, 0x5f, 0x4f, 0x50, 0x82, 0x54, 0x80,
	  0x0b, 0x3e, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00,
	  0x00, 0x00, 0xea, 0x8c, 0xdf, 0x28, 0x00, 0xe7,
	  0x04, 0xe3, 0xff, 0x00, 0x01, 0x02, 0x03, 0x04,
	  0x05, 0x14, 0x07, 0x38, 0x39, 0x3a, 0x3b, 0x3c,
	  0x3d, 0x3e, 0x3f, 0x01, 0x00, 0x0f, 0x00, 0x00,
	  0x80, 0x00, 0x00, 0x00, 0x00, 0x05, 0x0f, 0xff,
	},
	/* Mode 13: Graphics, 320x200, 256 colors */
	{ 0x28, 0x18, 0x08, 0x00, 0x20, 0x01, 0x0f, 0x00,
	  0x0e, 0x63, 0x5f, 0x4f, 0x50, 0x82, 0x54, 0x80,
	  0xbf, 0x1f, 0x00, 0x41, 0x00, 0x00, 0x00, 0x00,
	  0x00, 0x00, 0x9c, 0x8e, 0x8f, 0x28, 0x40, 0x96,
	  0xb9, 0xa3, 0xff, 0x00, 0x01, 0x02, 0x03, 0x04,
	  0x05, 0x06, 0x07, 0x08, 0x09, 0x0a, 0x0b, 0x0c,
	  0x0d, 0x0e, 0x0f, 0x41, 0x00, 0x0f, 0x00, 0x00,
	  0x00, 0x00, 0x00, 0x00, 0x40, 0x05, 0x0f, 0xff,
	},
	{ 0x50, 0x1d, 0x10, 0x00, 0x20, 0x01, 0x03, 0x00,
	  0x02, 0xe3, 0x5f, 0x4f, 0x50, 0x82, 0x57, 0x82,
	  0x08, 0x3e, 0x00, 0x4f, 0x0d, 0x0e, 0x00, 0x00,
	  0x00, 0x00, 0xea, 0x8f, 0xdf, 0x28, 0x00, 0xe7,
	  0x04, 0xa3, 0xff, 0x00, 0x01, 0x02, 0x03, 0x04,
	  0x05, 0x14, 0x07, 0x38, 0x39, 0x3a, 0x3b, 0x3c,
	  0x3d, 0x3e, 0x3f, 0x08, 0x00, 0x0f, 0x00, 0x00,
	  0x00, 0x00, 0x00, 0x00, 0x10, 0x0e, 0x00, 0xff,
	},
	{ 0x84, 0x18, 0x10, 0x00, 0x20, 0x01, 0x03, 0x00,
	  0x42, 0x62, 0x9b, 0x83, 0x86, 0x9e, 0x8a, 0x1b,
	  0xbf, 0x1f, 0x00, 0x4f, 0x0d, 0x0e, 0x00, 0x00,
	  0x00, 0x00, 0x9c, 0x8e, 0x8f, 0x42, 0x0f, 0x96,
	  0xb9, 0xa3, 0xff, 0x00, 0x08, 0x08, 0x08, 0x08,
	  0x08, 0x08, 0x08, 0x10, 0x18, 0x18, 0x18, 0x18,
	  0x18, 0x18, 0x18, 0x0a, 0x00, 0x0f, 0x00, 0x00,
	  0x00, 0x00, 0x00, 0x00, 0x10, 0x0a, 0x00, 0xff,
	},
	{ 0x84, 0x18, 0x10, 0x00, 0x20, 0x01, 0x03, 0x00,
	  0x42, 0x63, 0x9b, 0x83, 0x86, 0x9e, 0x8a, 0x1b,
	  0xbf, 0x1f, 0x00, 0x4f, 0x0d, 0x0e, 0x00, 0x00,
	  0x00, 0x00, 0x9c, 0x8e, 0x8f, 0x42, 0x0f, 0x96,
	  0xb9, 0xa3, 0xff, 0x00, 0x01, 0x02, 0x03, 0x04,
	  0x05, 0x14, 0x07, 0x38, 0x39, 0x3a, 0x3b, 0x3c,
	  0x3d, 0x3e, 0x3f, 0x08, 0x00, 0x0f, 0x00, 0x00,
	  0x00, 0x00, 0x00, 0x00, 0x10, 0x0e, 0x00, 0xff,
	},
};

/* The default DAC table for the EGA and VGA 16 color modes. This table is
   installed on startup. The values are taken from the output of 'scon -p
   list'. */
struct dac_colors dac_default64[] = {
	{0, 0, 0},    {0, 0, 42},   {0, 42, 0},   {0, 42, 42},
	{42, 0, 0},   {42, 0, 42},  {42, 42, 0},  {42, 42, 42},
	{0, 0, 21},   {0, 0, 63},   {0, 42, 21},  {0, 42, 63},
	{42, 0, 21},  {42, 0, 63},  {42, 42, 21}, {42, 42, 63},
	{0, 21, 0},   {0, 21, 42},  {0, 63, 0},   {0, 63, 42},
	{42, 21, 0},  {42, 21, 42}, {42, 63, 0},  {42, 63, 42},
	{0, 21, 21},  {0, 21, 63},  {0, 63, 21},  {0, 63, 63},
	{42, 21, 21}, {42, 21, 63}, {42, 63, 21}, {42, 63, 63},
	{21, 0, 0},   {21, 0, 42},  {21, 42, 0},  {21, 42, 42},
	{63, 0, 0},   {63, 0, 42},  {63, 42, 0},  {63, 42, 42},
	{21, 0, 21},  {21, 0, 63},  {21, 42, 21}, {21, 42, 63},
	{63, 0, 21},  {63, 0, 63},  {63, 42, 21}, {63, 42, 63},
	{21, 21, 0},  {21, 21, 42}, {21, 63, 0},  {21, 63, 42},
	{63, 21, 0},  {63, 21, 42}, {63, 63, 0},  {63, 63, 42},
	{21, 21, 21}, {21, 21, 63}, {21, 63, 21}, {21, 63, 63},
	{63, 21, 21}, {63, 21, 63}, {63, 63, 21}, {63, 63, 63}
};
   
/* The default DAC table for the 256 color mode. The values are taken from the
   output of 'vdacc.exe', from Michael Tischler's book ``PC intern 4''. */
struct dac_colors dac_default256[] = {
	/* 16 CGA colors */
	{0, 0, 0},    {0, 0, 42},   {0, 42, 0},   {0, 42, 42},
	{42, 0, 0},   {42, 0, 42},  {42, 21, 0},  {42, 42, 42},
	{21, 21, 21}, {21, 21, 63}, {21, 63, 21}, {21, 63, 63},
	{63, 21, 21}, {63, 21, 63}, {63, 63, 21}, {63, 63, 63},
	/* grayscale */
	{0, 0, 0},    {5, 5, 5},    {8, 8, 8},    {11, 11, 11},
	{14, 14, 14}, {17, 17, 17}, {20, 20, 20}, {24, 24, 24},
	{28, 28, 28}, {32, 32, 32}, {36, 36, 36}, {40, 40, 40},
	{45, 45, 45}, {50, 50, 50}, {56, 56, 56}, {63, 63, 63},
	/* high intensity, high saturation */
	{0, 0, 63},   {16, 0, 63},  {31, 0, 63},  {47, 0, 63},
	{63, 0, 63},  {63, 0, 47},  {63, 0, 31},  {63, 0, 16},
	{63, 63, 0},  {63, 16, 0},  {63, 31, 0},  {63, 47, 0},
	{63, 63, 0},  {47, 63, 0},  {31, 63, 0},  {16, 63, 0},
	{0, 63, 0},   {0, 63, 16},  {0, 63, 31},  {0, 63, 47},
	{0, 63, 63},  {0, 47, 63},  {0, 31, 63},  {0, 16, 63},
	/* high intensity, medium saturation */
	{31, 31, 63}, {39, 31, 63}, {47, 31, 63}, {55, 31, 63},
	{63, 31, 63}, {63, 31, 55}, {63, 31, 47}, {63, 31, 39},
	{63, 31, 31}, {63, 39, 31}, {63, 47, 31}, {63, 55, 31},
	{63, 63, 31}, {55, 63, 31}, {47, 63, 31}, {39, 63, 31},
	{31, 63, 31}, {31, 63, 39}, {31, 63, 47}, {31, 63, 55},
	{31, 63, 63}, {31, 55, 63}, {31, 47, 63}, {31, 39, 63},
	/* high intensity, low saturation */
	{45, 45, 63}, {49, 45, 63}, {54, 45, 63}, {58, 45, 63},
	{63, 45, 63}, {63, 45, 58}, {63, 45, 54}, {63, 45, 49},
	{63, 45, 45}, {63, 49, 45}, {63, 54, 45}, {63, 58, 45},
	{63, 63, 45}, {58, 63, 45}, {54, 63, 45}, {49, 63, 45},
	{45, 63, 45}, {45, 63, 49}, {45, 63, 54}, {45, 63, 58},
	{45, 63, 63}, {45, 58, 63}, {45, 54, 63}, {45, 49, 63},
	/* medium intensity, high saturation */
	{0, 0, 28},   {7, 0, 28},   {14, 0, 28},  {21, 0, 28},
	{28, 0, 28},  {28, 0, 21},  {28, 0, 14},  {28, 0, 7},
	{28, 0, 0},   {28, 7, 0},   {28, 14, 0},  {28, 21, 0},
	{28, 28, 0},  {21, 28, 0},  {14, 28, 0},  {7, 28, 0},
	{0, 28, 0},   {0, 28, 7},   {0, 28, 14},  {0, 28, 21},
	{0, 28, 28},  {0, 21, 28},  {0, 14, 28},  {0, 7, 28},
	/* medium intensity, medium saturation */
	{14, 14, 28}, {17, 14, 28}, {21, 14, 28}, {24, 14, 28},
	{28, 14, 28}, {28, 14, 24}, {28, 14, 21}, {28, 14, 17},
	{28, 14, 14}, {28, 17, 14}, {28, 21, 14}, {28, 24, 14},
	{28, 28, 14}, {24, 28, 14}, {21, 28, 14}, {17, 28, 14},
	{14, 28, 14}, {14, 28, 17}, {14, 28, 21}, {14, 28, 24},
	{14, 28, 28}, {14, 24, 28}, {14, 21, 28}, {14, 17, 28},
	/* medium intensity, low saturation */
	{20, 20, 28}, {22, 20, 28}, {24, 20, 28}, {26, 20, 28},
	{28, 20, 28}, {28, 20, 26}, {28, 20, 24}, {28, 20, 22},
	{28, 20, 20}, {28, 22, 20}, {28, 24, 20}, {28, 26, 20},
	{28, 28, 20}, {26, 28, 20}, {24, 28, 20}, {22, 28, 20},
	{20, 28, 20}, {20, 28, 22}, {20, 28, 24}, {20, 28, 26},
	{20, 28, 28}, {20, 26, 28}, {20, 24, 28}, {20, 22, 28},
	/* low intensity, high saturation */
	{0, 0, 16},   {4, 0, 16},   {8, 0, 16},   {12, 0, 16},
	{16, 0, 16},  {16, 0, 12},  {16, 0, 8},   {16, 0, 4},
	{16, 0, 0},   {16, 4, 0},   {16, 8, 0},   {16, 12, 0},
	{16, 16, 0},  {12, 16, 0},  {8, 16, 0},   {4, 16, 0},
	{0, 16, 0},   {0, 16, 4},   {0, 16, 8},   {0, 16, 12},
	{0, 16, 16},  {0, 12, 16},  {0, 8, 16},   {0, 4, 16},
	/* low intensity, medium saturation */
	{8, 8, 16},   {10, 8, 16},  {12, 8, 16},  {14, 8, 16},
	{16, 8, 16},  {16, 8, 14},  {16, 8, 12},  {16, 8, 10},
	{16, 8, 8},   {16, 10, 8},  {16, 12, 8},  {16, 14, 8},
	{16, 16, 8},  {14, 16, 8},  {12, 16, 8},  {10, 16, 8},
	{8, 16, 8},   {8, 16, 10},  {8, 16, 12},  {8, 16, 14},
	{8, 16, 16},  {8, 14, 16},  {8, 12, 16},  {8, 10, 16},
	/* low intensity, low saturation */
	{11, 11, 16}, {12, 11, 16}, {13, 11, 16}, {15, 11, 16},
	{16, 11, 16}, {16, 11, 15}, {16, 11, 13}, {16, 11, 12},
	{16, 11, 11}, {16, 12, 11}, {16, 13, 11}, {16, 15, 11},
	{16, 16, 11}, {15, 16, 11}, {13, 16, 11}, {12, 16, 11},
	{11, 16, 11}, {11, 16, 12}, {11, 16, 13}, {11, 16, 15},
	{11, 16, 16}, {11, 15, 16}, {11, 13, 16}, {11, 12, 16},
	/* black */
	{0, 0, 0},    {0, 0, 0},    {0, 0, 0},    {0, 0, 0},
	{0, 0, 0},    {0, 0, 0},    {0, 0, 0},    {0, 0, 0}
};

/* The Static Functionality Table, a collection of mode-independent status
   info. */
u_int8_t static_functionality_table[] = {
	0x0c,			/* Video modes 0 - 7 */
	0,			/* Video modes 8 - 15 */
	0,			/* Video modes 16 - 23 */
	0, 0, 0, 0,		/* reserved */
	4,			/* 400 lines */
	1,			/* Charset memory blocks available */
	1,			/* Charset memory blocks in use */
	0x79,			/* Bit 0: all modes on all displays
				       1: grayscale equivalents
				       2: user-definable charsets
				       3: user-definable palette
				       4: CGA cursor emulation
				       5: EGA palette
				       6: VGA color registers
				       7: color pages */
	0x8,			/* Bit 0: lightpen interface
				       1: save/load video status
				       2: toggle intensity/blink
				       3: DCC
				       4-7: reserved */
	0,			/* reserved */
	0,			/* Save Pointer functions available
				   Bit 0: 2 charsets
				       1: Palette Save Area
				       2: user-defined charset (text)
				       3: user-defined charset (graphics)
				       4: user-defined palette
				       5: DCC
				       6, 7: reserved */
	0			/* reserved */
};