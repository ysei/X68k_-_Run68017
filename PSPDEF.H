*	メモリ管理ポインタ／プロセス管理ポインタ構造定義

	.offset	0

PREVMEM:	.ds.l	1
KEEPFLAG:

MOTHER:		.ds.l	1
MEMEND:		.ds.l	1
NEXTMEM:	.ds.l	1
MPSIZ:
*
MEMCONTENTS:
ENVIRON:	.ds.l	1
EXITVEC:	.ds.l	1
ABORTVEC:	.ds.l	1
ERRORVEC:	.ds.l	1
COMMANDLINE:	.ds.l	1
FILEHDLFLAG:	.ds.l	3
BSSADR:		.ds.l	1
HEAPADR:	.ds.l	1
STACKADR:	.ds.l	1
MAMUSP:		.ds.l	1
MAMSSP:		.ds.l	1
MAMSR:		.ds.w	1
ABORTSR:	.ds.w	1
ABORTSSP:	.ds.l	1
TRAP10VEC:	.ds.l	1
TRAP11VEC:	.ds.l	1
TRAP12VEC:	.ds.l	1
TRAP13VEC:	.ds.l	1
TRAP14VEC:	.ds.l	1
OSFLAG:		.ds.l	1
		.ds.l	7
EXECPATH:	.ds.b	68
EXECNAME:	.ds.b	24
		.ds.l	9
PSPSIZ:
		.text
