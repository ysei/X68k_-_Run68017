*	CONST.H
*	定数定義ファイル
*
*	コントロールコード
.NLIST
NULL		EQU	0
EOS		EQU	0
BELL		EQU	7
BS		EQU	8
TAB		EQU	9
LF		EQU	10
CR		EQU	13
EOF		EQU	26
ESC		EQU	27
SPACE		EQU	32
*	標準ファイルハンドル
STDIN		EQU	0	*標準入力
STDOUT		EQU	1	*標準出力
STDERR		EQU	2	*標準エラー出力
STDAUX		EQU	3	*標準補助装置
STDPRN		EQU	4	*標準プリンタ
*	ファイルアクセスモード
ROPEN		EQU	0
WOPEN		EQU	1
RWOPEN		EQU	2
*	ファイル属性
ARCHIVE		EQU	$20
SUBDIR		EQU	$10
VOLUME		EQU	$08
SYSTEM		EQU	$04
HIDDEN		EQU	$02
READONLY	EQU	$01
.LIST