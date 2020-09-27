	.file	"f_fn_returns.cc"
	.text
	.section	.rodata.str1.1,"aMS",@progbits,1
.LC0:
	.string	"Hello world"
	.text
	.globl	_Z18char_star_functionv
	.type	_Z18char_star_functionv, @function
_Z18char_star_functionv:
.LFB25:
	endbr64
	leaq	.LC0(%rip), %rax
	ret
.LFE25:
	.size	_Z18char_star_functionv, .-_Z18char_star_functionv
	.globl	_Z12int_functionv
	.type	_Z12int_functionv, @function
_Z12int_functionv:
.LFB26:
	endbr64
	movl	$61, %eax
	ret
.LFE26:
	.size	_Z12int_functionv, .-_Z12int_functionv
	.globl	main
	.type	main, @function
main:
.LFB27:
	endbr64
	movl	$0, %eax
	ret
.LFE27:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 9.3.0-10ubuntu2) 9.3.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	 1f - 0f
	.long	 4f - 1f
	.long	 5
0:
	.string	 "GNU"
1:
	.align 8
	.long	 0xc0000002
	.long	 3f - 2f
2:
	.long	 0x3
3:
	.align 8
4:
