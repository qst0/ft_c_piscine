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
	mov	r14, rdx
	mov	rbx, rsi
	mov	eax, dword ptr [rip + _g_big_idx]
	cmp	eax, -1
	jne	LBB1_2
## BB#1:
	mov	dword ptr [rip + _g_big_idx], 0
	mov	dword ptr [rip + _g_big_sz], 0
	xor	eax, eax
LBB1_2:
	cdq
	idiv	ebx
	mov	qword ptr [rbp - 72], rax ## 8-byte Spill
	mov	dword ptr [rbp - 76], edx ## 4-byte Spill
	mov	r15, rbx
	shr	r15, 32
	mov	qword ptr [rbp - 96], r15 ## 8-byte Spill
	test	r15d, r15d
	jle	LBB1_6
## BB#3:                                ## %.preheader.lr.ph
	test	ebx, ebx
	jle	LBB1_4
## BB#7:                                ## %.lr.ph.us.preheader
	lea	rax, [r14 + 2]
	mov	qword ptr [rbp - 88], rax ## 8-byte Spill
	movsxd	rax, dword ptr [rbp - 76] ## 4-byte Folded Reload
	mov	qword ptr [rbp - 56], rax ## 8-byte Spill
	mov	rax, qword ptr [rbp - 72] ## 8-byte Reload
	cdqe
	mov	qword ptr [rbp - 104], rax ## 8-byte Spill
	movsxd	rax, ebx
	mov	qword ptr [rbp - 112], rax ## 8-byte Spill
	xor	ecx, ecx
	.align	4, 0x90
LBB1_8:                                 ## %.lr.ph.us
                                        ## =>This Loop Header: Depth=1
                                        ##     Child Loop BB1_11 Depth 2
                                        ##     Child Loop BB1_9 Depth 2
	mov	qword ptr [rbp - 64], rcx ## 8-byte Spill
	mov	qword ptr [rbp - 48], rdi ## 8-byte Spill
	cmp	qword ptr [rbp - 104], rcx ## 8-byte Folded Reload
	mov	r13d, 0
	mov	r15, rdi
	mov	r12d, 0
	jle	LBB1_11
	.align	4, 0x90
LBB1_9:                                 ## %.lr.ph..lr.ph.split_crit_edge.us
                                        ##   Parent Loop BB1_8 Depth=1
                                        ## =>  This Inner Loop Header: Depth=2
	mov	rax, qword ptr [rbp - 48] ## 8-byte Reload
	movzx	esi, byte ptr [rax + r13]
	and	esi, 1
	add	rsi, r14
	mov	edi, 1
	mov	edx, 1
	call	_write
	inc	r13
	cmp	ebx, r13d
	jne	LBB1_9
	jmp	LBB1_10
	.align	4, 0x90
LBB1_11:                                ## %.lr.ph.split.us.us
                                        ##   Parent Loop BB1_8 Depth=1
                                        ## =>  This Inner Loop Header: Depth=2
	cmp	qword ptr [rbp - 56], r12 ## 8-byte Folded Reload
	jg	LBB1_15
## BB#12:                               ##   in Loop: Header=BB1_11 Depth=2
	mov	eax, dword ptr [rip + _g_big_sz]
	mov	rcx, qword ptr [rbp - 72] ## 8-byte Reload
	lea	ecx, [rax + rcx]
	movsxd	rcx, ecx
	cmp	qword ptr [rbp - 64], rcx ## 8-byte Folded Reload
	jge	LBB1_15
## BB#13:                               ##   in Loop: Header=BB1_11 Depth=2
	add	eax, dword ptr [rbp - 76] ## 4-byte Folded Reload
	cdqe
	cmp	r12, rax
	jge	LBB1_15
## BB#14:                               ##   in Loop: Header=BB1_11 Depth=2
	mov	edi, 1
	mov	edx, 1
	mov	rsi, qword ptr [rbp - 88] ## 8-byte Reload
	jmp	LBB1_16
	.align	4, 0x90
LBB1_15:                                ##   in Loop: Header=BB1_11 Depth=2
	movzx	esi, byte ptr [r15]
	and	esi, 1
	add	rsi, r14
	mov	edi, 1
	mov	edx, 1
LBB1_16:                                ##   in Loop: Header=BB1_11 Depth=2
	call	_write
	inc	r12
	inc	r15
	cmp	ebx, r12d
	jne	LBB1_11
LBB1_10:                                ## %._crit_edge.us
                                        ##   in Loop: Header=BB1_8 Depth=1
	mov	edi, 1
	mov	edx, 1
	lea	rsi, [rip + L_.str]
	call	_write
	mov	rcx, qword ptr [rbp - 64] ## 8-byte Reload
	inc	rcx
	mov	rdi, qword ptr [rbp - 48] ## 8-byte Reload
	add	rdi, qword ptr [rbp - 112] ## 8-byte Folded Reload
	mov	rax, qword ptr [rbp - 96] ## 8-byte Reload
	cmp	ecx, eax
	jne	LBB1_8
	jmp	LBB1_6
LBB1_4:                                 ## %.preheader.preheader
	lea	rbx, [rip + L_.str]
	.align	4, 0x90
LBB1_5:                                 ## %.preheader
                                        ## =>This Inner Loop Header: Depth=1
	mov	edi, 1
	mov	edx, 1
	mov	rsi, rbx
	call	_write
	dec	r15d
	jne	LBB1_5
LBB1_6:                                 ## %._crit_edge.7
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
