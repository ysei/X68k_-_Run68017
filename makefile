BCC	= CC
AS	= has
LK	= hlk

HEAP	= 65536
STACK	= 65536

CCFLAGS	=  /h$(HEAP) /s$(STACK)
ASFLAGS	= -m68000
LKFLAGS	= 
LIBS	= 
OBJS	= Run68017.o keepchk.o
PROGRAM	= Run68017.x

$(PROGRAM)	: $(OBJS)
	$(LK) $(LKFLAGS) -o $(PROGRAM) $^ $(LIBS)

Run68017.o:		Run68017.has
	$(AS) $(ASFLAGS) $<

keepchk.o:		keepchk.s
	$(AS) $(ASFLAGS) $<

