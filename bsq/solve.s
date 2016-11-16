	.section	__TEXT,__text,regular,pure_instructions
	.macosx_version_min 10, 11
	.intel_syntax noprefix
	.globl	_ts_result
	.align	4, 0x90
_ts_result:                             ## @ts_result
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
	lea	r8, [rbp + 16]
	lea	r10d, [rdx - 1]
	mov	r9, qword ptr [rip + _g_big_sz@GOTPCREL]
	cmp	r10d, dword ptr [r9]
	jle	LBB0_2
## BB#1:
	mov	ecx, dword ptr [r8 + 8]
	imul	ecx, esi
	add	ecx, edi
	mov	rax, qword ptr [rip + _g_big_idx@GOTPCREL]
	mov	dword ptr [rax], ecx
	mov	dword ptr [r9], r10d
LBB0_2:
	add	esi, edx
	mov	eax, 4
	cmp	esi, dword ptr [r8 + 16]
	je	LBB0_5
## BB#3:
	add	edx, edi
	mov	eax, 3
	cmp	edx, dword ptr [r8 + 12]
	je	LBB0_5
## BB#4:                                ## %select.false
	xor	eax, eax
LBB0_5:
	pop	rbp
	ret
	.cfi_endproc

	.globl	_check_new_border
	.align	4, 0x90
_check_new_border:                      ## @check_new_border
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
	push	r12
	push	rbx
Ltmp6:
	.cfi_offset rbx, -48
Ltmp7:
	.cfi_offset r12, -40
Ltmp8:
	.cfi_offset r14, -32
Ltmp9:
	.cfi_offset r15, -24
	xor	eax, eax
	test	edx, edx
	jle	LBB1_13
## BB#1:                                ## %.lr.ph6
	lea	r8, [rbp + 16]
	lea	eax, [rdx + rdi]
	mov	r9, qword ptr [r8]
	movsxd	r14, esi
	movsxd	r11, dword ptr [r8 + 8]
	movsxd	r10, eax
	xor	ebx, ebx
	test	dl, 1
	mov	eax, 0
	je	LBB1_3
## BB#2:
	mov	rax, r11
	imul	rax, r14
	add	rax, r10
	movzx	eax, byte ptr [r9 + rax]
	and	eax, 1
	mov	ebx, 1
LBB1_3:                                 ## %.lr.ph6.split
	cmp	edx, 1
	je	LBB1_6
## BB#4:                                ## %.lr.ph6.split.split
	mov	r12d, edx
	sub	r12d, ebx
	lea	r15, [rbx + r14]
	imul	r15, r11
	add	r15, r10
	add	r15, r9
	lea	r14, [rbx + r14 + 1]
	imul	r14, r11
	add	r11, r11
	add	r14, r10
	add	r14, r9
	xor	ebx, ebx
	mov	r9d, 1
	.align	4, 0x90
LBB1_5:                                 ## =>This Inner Loop Header: Depth=1
	mov	cl, byte ptr [r14 + rbx]
	or	cl, byte ptr [r15 + rbx]
	test	cl, 1
	cmovne	eax, r9d
	add	rbx, r11
	add	r12d, -2
	jne	LBB1_5
LBB1_6:                                 ## %.preheader
	test	edx, edx
	jle	LBB1_13
## BB#7:                                ## %.lr.ph
	add	esi, edx
	imul	esi, dword ptr [r8 + 8]
	mov	r8, qword ptr [r8]
	xor	ecx, ecx
	test	dl, 1
	jne	LBB1_9
## BB#8:
	xor	ebx, ebx
	jmp	LBB1_10
LBB1_9:
	lea	ecx, [rsi + rdi]
	movsxd	rcx, ecx
	test	byte ptr [r8 + rcx], 1
	mov	ebx, 1
	cmovne	eax, ebx
	mov	ecx, 1
LBB1_10:                                ## %.lr.ph.split
	cmp	edx, 1
	je	LBB1_13
## BB#11:                               ## %.lr.ph.split.split
	sub	edx, ecx
	add	ebx, edi
	lea	ecx, [rbx + rsi]
	lea	esi, [rsi + rbx + 1]
	movsxd	rsi, esi
	add	rsi, r8
	movsxd	rdi, ecx
	add	rdi, r8
	mov	ecx, 1
	.align	4, 0x90
LBB1_12:                                ## =>This Inner Loop Header: Depth=1
	mov	bl, byte ptr [rsi]
	or	bl, byte ptr [rdi]
	test	bl, 1
	cmovne	eax, ecx
	add	rsi, 2
	add	rdi, 2
	add	edx, -2
	jne	LBB1_12
LBB1_13:                                ## %._crit_edge
	pop	rbx
	pop	r12
	pop	r14
	pop	r15
	pop	rbp
	ret
	.cfi_endproc

	.globl	_try_square
	.align	4, 0x90
_try_square:                            ## @try_square
	.cfi_startproc
## BB#0:
	push	rbp
Ltmp10:
	.cfi_def_cfa_offset 16
Ltmp11:
	.cfi_offset rbp, -16
	mov	rbp, rsp
Ltmp12:
	.cfi_def_cfa_register rbp
	push	r15
	push	r14
	push	r13
	push	r12
	push	rbx
Ltmp13:
	.cfi_offset rbx, -56
Ltmp14:
	.cfi_offset r12, -48
Ltmp15:
	.cfi_offset r13, -40
Ltmp16:
	.cfi_offset r14, -32
Ltmp17:
	.cfi_offset r15, -24
	mov	qword ptr [rbp - 80], rsi ## 8-byte Spill
	lea	r8, [rbp + 16]
	mov	rax, qword ptr [rip + _g_big_sz@GOTPCREL]
	mov	r11d, dword ptr [rax]
	mov	rcx, qword ptr [rbp + 16]
	mov	r12, qword ptr [rbp + 24]
	mov	qword ptr [rbp - 48], r12 ## 8-byte Spill
	shr	r12, 32
	cmp	r11d, -1
	jl	LBB2_8
## BB#1:                                ## %.lr.ph35.preheader
	lea	eax, [r11 + rsi + 1]
	mov	dword ptr [rbp - 52], eax ## 4-byte Spill
	lea	eax, [rdi - 1]
	lea	ebx, [r11 + rdi + 1]
	mov	dword ptr [rbp - 56], ebx ## 4-byte Spill
	movsxd	r9, eax
	movsxd	rbx, ebx
	mov	r15d, esi
	mov	rax, qword ptr [rbp - 48] ## 8-byte Reload
	imul	r15d, eax
	add	r15d, edi
	mov	r14d, esi
LBB2_3:                                 ## %.lr.ph35
                                        ## =>This Loop Header: Depth=1
                                        ##     Child Loop BB2_4 Depth 2
	mov	r13, rsi
	mov	eax, r15d
	mov	rdx, r9
	.align	4, 0x90
LBB2_4:                                 ##   Parent Loop BB2_3 Depth=1
                                        ## =>  This Inner Loop Header: Depth=2
	cmp	rdx, rbx
	jge	LBB2_2
## BB#5:                                ## %select.unfold
                                        ##   in Loop: Header=BB2_4 Depth=2
	movsxd	rsi, eax
	inc	rdx
	lea	eax, [rsi + 1]
	test	byte ptr [rcx + rsi], 1
	je	LBB2_4
	jmp	LBB2_6
	.align	4, 0x90
LBB2_2:                                 ## %.critedge1.loopexit.thread.loopexit
                                        ##   in Loop: Header=BB2_3 Depth=1
	mov	rax, qword ptr [rbp - 48] ## 8-byte Reload
	add	r15d, eax
	cmp	r14d, dword ptr [rbp - 52] ## 4-byte Folded Reload
	lea	eax, [r14 + 1]
	mov	r14d, eax
	mov	rsi, r13
	jl	LBB2_3
LBB2_8:                                 ## %.critedge
	mov	qword ptr [rbp - 144], r12 ## 8-byte Spill
	lea	ebx, [r11 + 2]
	mov	qword ptr [rbp - 88], rbx ## 8-byte Spill
	lea	r10d, [r11 + rsi + 2]
	mov	r8d, dword ptr [r8 + 16]
	mov	dword ptr [rbp - 92], r8d ## 4-byte Spill
	cmp	r10d, r8d
	jge	LBB2_9
## BB#10:                               ## %.lr.ph
	movsxd	r15, esi
	mov	qword ptr [rbp - 112], r15 ## 8-byte Spill
	movsxd	r13, ebx
	movsxd	r14, edi
	mov	qword ptr [rbp - 64], r14 ## 8-byte Spill
	mov	rax, qword ptr [rbp - 48] ## 8-byte Reload
	mov	rdx, rax
	sar	rdx, 32
	mov	qword ptr [rbp - 72], rdx ## 8-byte Spill
	lea	edx, [r11 + 1]
	mov	dword ptr [rbp - 52], edx ## 4-byte Spill
	movsxd	rdx, eax
	mov	qword ptr [rbp - 120], rdx ## 8-byte Spill
	mov	rax, r15
	imul	rax, rdx
	mov	qword ptr [rbp - 128], rax ## 8-byte Spill
	movsxd	r9, r13d
	add	r9, r14
	add	r9, rcx
	lea	r14, [rdx + rdx]
	lea	rax, [r15 + 1]
	mov	qword ptr [rbp - 136], rax ## 8-byte Spill
	lea	eax, [r11 + rsi + 2]
	mov	qword ptr [rbp - 152], r11 ## 8-byte Spill
	mov	r15d, edx
	imul	r15d, eax
	add	r15d, edi
	mov	qword ptr [rbp - 104], rdi ## 8-byte Spill
	xor	r11d, r11d
	mov	edi, 1
	.align	4, 0x90
LBB2_11:                                ## =>This Loop Header: Depth=1
                                        ##     Child Loop BB2_17 Depth 2
                                        ##     Child Loop BB2_23 Depth 2
	mov	rax, qword ptr [rbp - 64] ## 8-byte Reload
	lea	rax, [r13 + rax]
	cmp	rax, qword ptr [rbp - 72] ## 8-byte Folded Reload
	jge	LBB2_26
## BB#12:                               ##   in Loop: Header=BB2_11 Depth=1
	test	r13, r13
	jle	LBB2_25
## BB#13:                               ## %.lr.ph6.i.preheader
                                        ##   in Loop: Header=BB2_11 Depth=1
	mov	dword ptr [rbp - 56], r10d ## 4-byte Spill
	lea	edx, [rbx + r11]
	xor	r10d, r10d
	test	dl, 1
	mov	r12d, 0
	je	LBB2_15
## BB#14:                               ## %.lr.ph6.i.prol
                                        ##   in Loop: Header=BB2_11 Depth=1
	add	rax, qword ptr [rbp - 128] ## 8-byte Folded Reload
	movzx	r12d, byte ptr [rcx + rax]
	and	r12d, 1
	mov	r10d, 1
LBB2_15:                                ## %.lr.ph6.i.preheader.split
                                        ##   in Loop: Header=BB2_11 Depth=1
	mov	eax, dword ptr [rbp - 52] ## 4-byte Reload
	add	eax, r11d
	je	LBB2_18
## BB#16:                               ## %.lr.ph6.i.preheader.split.split
                                        ##   in Loop: Header=BB2_11 Depth=1
	mov	eax, r13d
	sub	eax, r10d
	mov	rsi, qword ptr [rbp - 112] ## 8-byte Reload
	lea	rbx, [rsi + r10]
	mov	rsi, qword ptr [rbp - 120] ## 8-byte Reload
	imul	rbx, rsi
	add	rbx, r9
	add	r10, qword ptr [rbp - 136] ## 8-byte Folded Reload
	imul	r10, rsi
	add	r10, r9
	xor	esi, esi
	.align	4, 0x90
LBB2_17:                                ## %.lr.ph6.i
                                        ##   Parent Loop BB2_11 Depth=1
                                        ## =>  This Inner Loop Header: Depth=2
	mov	r8b, byte ptr [r10 + rsi]
	or	r8b, byte ptr [rbx + rsi]
	test	r8b, 1
	cmovne	r12d, edi
	add	rsi, r14
	add	eax, -2
	jne	LBB2_17
LBB2_18:                                ## %.lr.ph.i
                                        ##   in Loop: Header=BB2_11 Depth=1
	test	dl, 1
	jne	LBB2_20
## BB#19:                               ##   in Loop: Header=BB2_11 Depth=1
	xor	esi, esi
	mov	r8d, dword ptr [rbp - 92] ## 4-byte Reload
	mov	r10d, dword ptr [rbp - 56] ## 4-byte Reload
	jmp	LBB2_21
	.align	4, 0x90
LBB2_20:                                ##   in Loop: Header=BB2_11 Depth=1
	mov	rax, qword ptr [rbp - 48] ## 8-byte Reload
	mov	r10d, dword ptr [rbp - 56] ## 4-byte Reload
	imul	eax, r10d
	mov	rdx, qword ptr [rbp - 104] ## 8-byte Reload
	add	eax, edx
	cdqe
	test	byte ptr [rcx + rax], 1
	cmovne	r12d, edi
	mov	esi, 1
	mov	r8d, dword ptr [rbp - 92] ## 4-byte Reload
LBB2_21:                                ## %.lr.ph.i.split
                                        ##   in Loop: Header=BB2_11 Depth=1
	mov	eax, dword ptr [rbp - 52] ## 4-byte Reload
	add	eax, r11d
	je	LBB2_24
## BB#22:                               ## %.lr.ph.i.split.split
                                        ##   in Loop: Header=BB2_11 Depth=1
	mov	eax, r13d
	sub	eax, esi
	lea	ebx, [r15 + rsi]
	lea	esi, [r15 + rsi + 1]
	.align	4, 0x90
LBB2_23:                                ##   Parent Loop BB2_11 Depth=1
                                        ## =>  This Inner Loop Header: Depth=2
	movsxd	rbx, ebx
	movsxd	rsi, esi
	mov	dl, byte ptr [rcx + rsi]
	or	dl, byte ptr [rcx + rbx]
	test	dl, 1
	cmovne	r12d, edi
	add	ebx, 2
	add	esi, 2
	add	eax, -2
	jne	LBB2_23
LBB2_24:                                ## %check_new_border.exit
                                        ##   in Loop: Header=BB2_11 Depth=1
	test	r12d, r12d
	mov	rsi, qword ptr [rbp - 80] ## 8-byte Reload
	mov	rbx, qword ptr [rbp - 88] ## 8-byte Reload
	jne	LBB2_26
LBB2_25:                                ## %check_new_border.exit.thread
                                        ##   in Loop: Header=BB2_11 Depth=1
	inc	r13
	lea	r10d, [r13 + rsi]
	inc	r11d
	inc	r9
	mov	rax, qword ptr [rbp - 48] ## 8-byte Reload
	add	r15d, eax
	cmp	r10d, r8d
	jl	LBB2_11
	jmp	LBB2_26
LBB2_6:                                 ## %.critedge1.loopexit
	mov	eax, 4
	mov	ecx, dword ptr [rbp - 52] ## 4-byte Reload
	cmp	ecx, dword ptr [r8 + 16]
	je	LBB2_31
## BB#7:
	cmp	dword ptr [rbp - 56], r12d ## 4-byte Folded Reload
	jmp	LBB2_30
LBB2_9:
	mov	qword ptr [rbp - 152], r11 ## 8-byte Spill
	mov	qword ptr [rbp - 104], rdi ## 8-byte Spill
	mov	r13d, ebx
LBB2_26:                                ## %.critedge2
	lea	eax, [r13 - 1]
	mov	rcx, qword ptr [rbp - 152] ## 8-byte Reload
	cmp	eax, ecx
	mov	rdx, qword ptr [rbp - 104] ## 8-byte Reload
	jle	LBB2_28
## BB#27:
	mov	rcx, qword ptr [rbp - 48] ## 8-byte Reload
	imul	esi, ecx
	add	esi, edx
	mov	rcx, qword ptr [rip + _g_big_idx@GOTPCREL]
	mov	dword ptr [rcx], esi
	mov	rcx, qword ptr [rip + _g_big_sz@GOTPCREL]
	mov	dword ptr [rcx], eax
LBB2_28:
	mov	eax, 4
	cmp	r10d, r8d
	mov	rcx, qword ptr [rbp - 144] ## 8-byte Reload
	je	LBB2_31
## BB#29:
	add	r13d, edx
	cmp	r13d, ecx
LBB2_30:                                ## %ts_result.exit
	sete	al
	movzx	eax, al
	lea	eax, [rax + 2*rax]
LBB2_31:                                ## %ts_result.exit
	pop	rbx
	pop	r12
	pop	r13
	pop	r14
	pop	r15
	pop	rbp
	ret
	.cfi_endproc

	.globl	_solve_grid
	.align	4, 0x90
_solve_grid:                            ## @solve_grid
	.cfi_startproc
## BB#0:
	push	rbp
Ltmp18:
	.cfi_def_cfa_offset 16
Ltmp19:
	.cfi_offset rbp, -16
	mov	rbp, rsp
Ltmp20:
	.cfi_def_cfa_register rbp
	push	r15
	push	r14
	push	r13
	push	r12
	push	rbx
	sub	rsp, 24
Ltmp21:
	.cfi_offset rbx, -56
Ltmp22:
	.cfi_offset r12, -48
Ltmp23:
	.cfi_offset r13, -40
Ltmp24:
	.cfi_offset r14, -32
Ltmp25:
	.cfi_offset r15, -24
	mov	r15d, dword ptr [rbp + 32]
	test	r15d, r15d
	jle	LBB3_5
## BB#1:                                ## %.preheader.preheader
	lea	r12, [rbp + 16]
	mov	r13d, dword ptr [r12 + 12]
	xor	r14d, r14d
	.align	4, 0x90
LBB3_2:                                 ## %.preheader
                                        ## =>This Loop Header: Depth=1
                                        ##     Child Loop BB3_3 Depth 2
	test	r13d, r13d
	mov	ebx, 0
	jle	LBB3_4
	.align	4, 0x90
LBB3_3:                                 ## %.lr.ph
                                        ##   Parent Loop BB3_2 Depth=1
                                        ## =>  This Inner Loop Header: Depth=2
	mov	rax, qword ptr [r12 + 16]
	mov	qword ptr [rsp + 16], rax
	mov	rax, qword ptr [r12]
	mov	rcx, qword ptr [r12 + 8]
	mov	qword ptr [rsp + 8], rcx
	mov	qword ptr [rsp], rax
	mov	edi, ebx
	mov	esi, r14d
	call	_try_square
	cmp	eax, 4
	cmove	r15d, r14d
	add	eax, -3
	cmp	eax, 2
	cmovb	r13d, ebx
	inc	ebx
	cmp	ebx, r13d
	jl	LBB3_3
LBB3_4:                                 ## %._crit_edge
                                        ##   in Loop: Header=BB3_2 Depth=1
	inc	r14d
	cmp	r14d, r15d
	jl	LBB3_2
LBB3_5:                                 ## %._crit_edge.10
	add	rsp, 24
	pop	rbx
	pop	r12
	pop	r13
	pop	r14
	pop	r15
	pop	rbp
	ret
	.cfi_endproc


.subsections_via_symbols
