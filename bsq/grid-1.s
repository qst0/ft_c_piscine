	.section	__TEXT,__text,regular,pure_instructions
	.macosx_version_min 10, 11
	.intel_syntax noprefix
	.globl	_next_check
	.align	4, 0x90
_next_check:                            ## @next_check
	.cfi_startproc
## BB#0:
	push	rbp
Ltmp0:
	.cfi_def_cfa_offset 16
Ltmp1:
	.cfi_offset rbp, -16
	mov	rbp, rsp
Ltmp2:
	.cfi_def_cfa_register rbp
	xor	eax, eax
	pop	rbp
	ret
	.cfi_endproc

	.globl	_print_grid
	.align	4, 0x90
_print_grid:                            ## @print_grid
	.cfi_startproc
## BB#0:
	push	rbp
Ltmp3:
	.cfi_def_cfa_offset 16
Ltmp4:
	.cfi_offset rbp, -16
	mov	rbp, rsp
Ltmp5:
	.cfi_def_cfa_register rbp
	push	r15
	push	r14
	push	r13
	push	r12
	push	rbx
	sub	rsp, 72
Ltmp6:
	.cfi_offset rbx, -56
Ltmp7:
	.cfi_offset r12, -48
Ltmp8:
	.cfi_offset r13, -40
Ltmp9:
	.cfi_offset r14, -32
Ltmp10:
	.cfi_offset r15, -24
	mov	qword ptr [rbp - 48], rdx ## 8-byte Spill
	mov	rbx, rsi
	mov	qword ptr [rbp - 88], rdi ## 8-byte Spill
	cmp	dword ptr [rip + _g_big_idx], -1
	jne	LBB1_2
## BB#1:
	mov	dword ptr [rip + _g_big_idx], 0
	mov	dword ptr [rip + _g_big_sz], 0
LBB1_2:
	mov	eax, dword ptr [rip + _g_big_idx]
	cdq
	idiv	ebx
	mov	qword ptr [rbp - 56], rax ## 8-byte Spill
	mov	dword ptr [rbp - 68], edx ## 4-byte Spill
	mov	rax, rbx
	shr	rax, 32
	mov	qword ptr [rbp - 96], rax ## 8-byte Spill
	test	eax, eax
	jle	LBB1_14
## BB#3:                                ## %.preheader.lr.ph
	mov	rax, qword ptr [rbp - 48] ## 8-byte Reload
	lea	rax, [rax + 2]
	mov	qword ptr [rbp - 80], rax ## 8-byte Spill
	movsxd	r15, dword ptr [rbp - 68] ## 4-byte Folded Reload
	mov	rax, qword ptr [rbp - 56] ## 8-byte Reload
	cdqe
	mov	qword ptr [rbp - 64], rax ## 8-byte Spill
	movsxd	rax, ebx
	mov	qword ptr [rbp - 104], rax ## 8-byte Spill
	xor	r13d, r13d
	.align	4, 0x90
LBB1_4:                                 ## %.preheader
                                        ## =>This Loop Header: Depth=1
                                        ##     Child Loop BB1_6 Depth 2
	test	ebx, ebx
	jle	LBB1_13
## BB#5:                                ## %.lr.ph
                                        ##   in Loop: Header=BB1_4 Depth=1
	mov	r12, qword ptr [rbp - 88] ## 8-byte Reload
	xor	r14d, r14d
	.align	4, 0x90
LBB1_6:                                 ##   Parent Loop BB1_4 Depth=1
                                        ## =>  This Inner Loop Header: Depth=2
	cmp	r15, r14
	jg	LBB1_11
## BB#7:                                ##   in Loop: Header=BB1_6 Depth=2
	mov	eax, dword ptr [rip + _g_big_sz]
	mov	rcx, qword ptr [rbp - 56] ## 8-byte Reload
	lea	ecx, [rax + rcx]
	movsxd	rcx, ecx
	cmp	r13, rcx
	jge	LBB1_11
## BB#8:                                ##   in Loop: Header=BB1_6 Depth=2
	cmp	qword ptr [rbp - 64], r13 ## 8-byte Folded Reload
	jg	LBB1_11
## BB#9:                                ##   in Loop: Header=BB1_6 Depth=2
	add	eax, dword ptr [rbp - 68] ## 4-byte Folded Reload
	cdqe
	cmp	r14, rax
	jge	LBB1_11
## BB#10:                               ##   in Loop: Header=BB1_6 Depth=2
	mov	edi, 1
	mov	edx, 1
	mov	rsi, qword ptr [rbp - 80] ## 8-byte Reload
	jmp	LBB1_12
	.align	4, 0x90
LBB1_11:                                ##   in Loop: Header=BB1_6 Depth=2
	movzx	esi, byte ptr [r12]
	and	esi, 1
	add	rsi, qword ptr [rbp - 48] ## 8-byte Folded Reload
	mov	edi, 1
	mov	edx, 1
LBB1_12:                                ##   in Loop: Header=BB1_6 Depth=2
	call	_write
	inc	r14
	inc	r12
	cmp	ebx, r14d
	jne	LBB1_6
LBB1_13:                                ## %._crit_edge
                                        ##   in Loop: Header=BB1_4 Depth=1
	mov	edi, 1
	mov	edx, 1
	lea	rsi, [rip + L_.str]
	call	_write
	inc	r13
	mov	rax, qword ptr [rbp - 104] ## 8-byte Reload
	add	qword ptr [rbp - 88], rax ## 8-byte Folded Spill
	mov	rax, qword ptr [rbp - 96] ## 8-byte Reload
	cmp	r13d, eax
	jne	LBB1_4
LBB1_14:                                ## %._crit_edge.7
	add	rsp, 72
	pop	rbx
	pop	r12
	pop	r13
	pop	r14
	pop	r15
	pop	rbp
	ret
	.cfi_endproc

	.section	__DATA,__data
	.globl	_g_big_idx              ## @g_big_idx
	.align	2
_g_big_idx:
	.long	4294967295              ## 0xffffffff

	.globl	_g_big_sz               ## @g_big_sz
.zerofill __DATA,__common,_g_big_sz,4,2
	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"\n"


.subsections_via_symbols
