	.file	"chararray.c"
	.text
	.globl	a
	.type	a, @function
a:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movabsq	$7809632571816441203, %rax
	movq	%rax, -48(%rbp)
	movabsq	$7596562564204619369, %rax
	movq	%rax, -40(%rbp)
	movabsq	$8102931683653284979, %rax
	movq	%rax, -32(%rbp)
	movabsq	$8030885037587849577, %rax
	movq	%rax, -24(%rbp)
	movb	$0, -16(%rbp)
	movzbl	-46(%rbp), %eax
	movq	-8(%rbp), %rdx
	xorq	%fs:40, %rdx
	je	.L3
	call	__stack_chk_fail
.L3:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	a, .-a
	.ident	"GCC: (Ubuntu 5.2.1-22ubuntu2) 5.2.1 20151010"
	.section	.note.GNU-stack,"",@progbits
