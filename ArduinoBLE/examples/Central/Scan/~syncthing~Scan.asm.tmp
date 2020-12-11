
Scan.elf:     file format elf32-avr


Disassembly of section .text:

00000200 <__vectors>:
     200:	0c 94 52 01 	jmp	0x2a4	; 0x2a4 <__dtors_end>
     204:	0c 94 7a 01 	jmp	0x2f4	; 0x2f4 <__bad_interrupt>
     208:	0c 94 7a 01 	jmp	0x2f4	; 0x2f4 <__bad_interrupt>
     20c:	0c 94 7a 01 	jmp	0x2f4	; 0x2f4 <__bad_interrupt>
     210:	0c 94 7a 01 	jmp	0x2f4	; 0x2f4 <__bad_interrupt>
     214:	0c 94 7a 01 	jmp	0x2f4	; 0x2f4 <__bad_interrupt>
     218:	0c 94 7a 01 	jmp	0x2f4	; 0x2f4 <__bad_interrupt>
     21c:	0c 94 7a 01 	jmp	0x2f4	; 0x2f4 <__bad_interrupt>
     220:	0c 94 7a 01 	jmp	0x2f4	; 0x2f4 <__bad_interrupt>
     224:	0c 94 7a 01 	jmp	0x2f4	; 0x2f4 <__bad_interrupt>
     228:	0c 94 7a 01 	jmp	0x2f4	; 0x2f4 <__bad_interrupt>
     22c:	0c 94 7a 01 	jmp	0x2f4	; 0x2f4 <__bad_interrupt>
     230:	0c 94 7a 01 	jmp	0x2f4	; 0x2f4 <__bad_interrupt>
     234:	0c 94 7a 01 	jmp	0x2f4	; 0x2f4 <__bad_interrupt>
     238:	0c 94 7a 01 	jmp	0x2f4	; 0x2f4 <__bad_interrupt>
     23c:	0c 94 7a 01 	jmp	0x2f4	; 0x2f4 <__bad_interrupt>
     240:	0c 94 7a 01 	jmp	0x2f4	; 0x2f4 <__bad_interrupt>
     244:	0c 94 5d 22 	jmp	0x44ba	; 0x44ba <__vector_17>
     248:	0c 94 cb 20 	jmp	0x4196	; 0x4196 <__vector_18>
     24c:	0c 94 7a 01 	jmp	0x2f4	; 0x2f4 <__bad_interrupt>
     250:	0c 94 a9 22 	jmp	0x4552	; 0x4552 <__vector_20>
     254:	0c 94 7a 01 	jmp	0x2f4	; 0x2f4 <__bad_interrupt>
     258:	0c 94 7a 01 	jmp	0x2f4	; 0x2f4 <__bad_interrupt>
     25c:	0c 94 7a 01 	jmp	0x2f4	; 0x2f4 <__bad_interrupt>
     260:	0c 94 7a 01 	jmp	0x2f4	; 0x2f4 <__bad_interrupt>
     264:	0c 94 7a 01 	jmp	0x2f4	; 0x2f4 <__bad_interrupt>
     268:	0c 94 7a 01 	jmp	0x2f4	; 0x2f4 <__bad_interrupt>
     26c:	0c 94 7a 01 	jmp	0x2f4	; 0x2f4 <__bad_interrupt>
     270:	0c 94 7a 01 	jmp	0x2f4	; 0x2f4 <__bad_interrupt>
     274:	0c 94 7a 01 	jmp	0x2f4	; 0x2f4 <__bad_interrupt>
     278:	0c 94 7a 01 	jmp	0x2f4	; 0x2f4 <__bad_interrupt>
     27c:	0c 94 7a 01 	jmp	0x2f4	; 0x2f4 <__bad_interrupt>
     280:	0c 94 7a 01 	jmp	0x2f4	; 0x2f4 <__bad_interrupt>
     284:	0c 94 7a 01 	jmp	0x2f4	; 0x2f4 <__bad_interrupt>
     288:	0c 94 7a 01 	jmp	0x2f4	; 0x2f4 <__bad_interrupt>
     28c:	0c 94 7a 01 	jmp	0x2f4	; 0x2f4 <__bad_interrupt>
     290:	0c 94 7a 01 	jmp	0x2f4	; 0x2f4 <__bad_interrupt>
     294:	0c 94 83 22 	jmp	0x4506	; 0x4506 <__vector_37>
     298:	0c 94 7a 01 	jmp	0x2f4	; 0x2f4 <__bad_interrupt>
     29c:	0c 94 7a 01 	jmp	0x2f4	; 0x2f4 <__bad_interrupt>

000002a0 <__ctors_start>:
     2a0:	36 24       	eor	r3, r6

000002a2 <__ctors_end>:
     2a2:	e7 25       	eor	r30, r7

000002a4 <__dtors_end>:
     2a4:	11 24       	eor	r1, r1
     2a6:	1f be       	out	0x3f, r1	; 63
     2a8:	cf ef       	ldi	r28, 0xFF	; 255
     2aa:	cd bf       	out	0x3d, r28	; 61
     2ac:	df e3       	ldi	r29, 0x3F	; 63
     2ae:	de bf       	out	0x3e, r29	; 62

000002b0 <__do_clear_bss>:
     2b0:	2c e2       	ldi	r18, 0x2C	; 44
     2b2:	a6 e0       	ldi	r26, 0x06	; 6
     2b4:	b8 e2       	ldi	r27, 0x28	; 40
     2b6:	01 c0       	rjmp	.+2      	; 0x2ba <.do_clear_bss_start>

000002b8 <.do_clear_bss_loop>:
     2b8:	1d 92       	st	X+, r1

000002ba <.do_clear_bss_start>:
     2ba:	a1 34       	cpi	r26, 0x41	; 65
     2bc:	b2 07       	cpc	r27, r18
     2be:	e1 f7       	brne	.-8      	; 0x2b8 <.do_clear_bss_loop>

000002c0 <__do_copy_data>:
     2c0:	18 e2       	ldi	r17, 0x28	; 40
     2c2:	a0 e0       	ldi	r26, 0x00	; 0
     2c4:	b8 e2       	ldi	r27, 0x28	; 40
     2c6:	e9 ed       	ldi	r30, 0xD9	; 217
     2c8:	ff e5       	ldi	r31, 0x5F	; 95
     2ca:	02 c0       	rjmp	.+4      	; 0x2d0 <__do_copy_data+0x10>
     2cc:	05 90       	lpm	r0, Z+
     2ce:	0d 92       	st	X+, r0
     2d0:	a6 30       	cpi	r26, 0x06	; 6
     2d2:	b1 07       	cpc	r27, r17
     2d4:	d9 f7       	brne	.-10     	; 0x2cc <__do_copy_data+0xc>

000002d6 <__do_global_ctors>:
     2d6:	11 e0       	ldi	r17, 0x01	; 1
     2d8:	c1 e5       	ldi	r28, 0x51	; 81
     2da:	d1 e0       	ldi	r29, 0x01	; 1
     2dc:	04 c0       	rjmp	.+8      	; 0x2e6 <__do_global_ctors+0x10>
     2de:	21 97       	sbiw	r28, 0x01	; 1
     2e0:	fe 01       	movw	r30, r28
     2e2:	0e 94 98 28 	call	0x5130	; 0x5130 <__tablejump2__>
     2e6:	c0 35       	cpi	r28, 0x50	; 80
     2e8:	d1 07       	cpc	r29, r17
     2ea:	c9 f7       	brne	.-14     	; 0x2de <__do_global_ctors+0x8>
     2ec:	0e 94 f3 25 	call	0x4be6	; 0x4be6 <main>
     2f0:	0c 94 56 2d 	jmp	0x5aac	; 0x5aac <__do_global_dtors>

000002f4 <__bad_interrupt>:
     2f4:	0c 94 00 01 	jmp	0x200	; 0x200 <__vectors>

000002f8 <_ZN9BLEDeviceD1Ev>:
     2f8:	08 95       	ret

000002fa <_ZN19L2CAPSignalingClassD1Ev>:
     2fa:	08 95       	ret

000002fc <_ZNK13BLELinkedListIP17BLELocalAttributeE3getEj>:
     2fc:	dc 01       	movw	r26, r24
     2fe:	2d 91       	ld	r18, X+
     300:	3c 91       	ld	r19, X
     302:	11 97       	sbiw	r26, 0x01	; 1
     304:	62 17       	cp	r22, r18
     306:	73 07       	cpc	r23, r19
     308:	80 f4       	brcc	.+32     	; 0x32a <_ZNK13BLELinkedListIP17BLELocalAttributeE3getEj+0x2e>
     30a:	12 96       	adiw	r26, 0x02	; 2
     30c:	ed 91       	ld	r30, X+
     30e:	fc 91       	ld	r31, X
     310:	90 e0       	ldi	r25, 0x00	; 0
     312:	80 e0       	ldi	r24, 0x00	; 0
     314:	86 17       	cp	r24, r22
     316:	97 07       	cpc	r25, r23
     318:	29 f0       	breq	.+10     	; 0x324 <_ZNK13BLELinkedListIP17BLELocalAttributeE3getEj+0x28>
     31a:	02 80       	ldd	r0, Z+2	; 0x02
     31c:	f3 81       	ldd	r31, Z+3	; 0x03
     31e:	e0 2d       	mov	r30, r0
     320:	01 96       	adiw	r24, 0x01	; 1
     322:	f8 cf       	rjmp	.-16     	; 0x314 <_ZNK13BLELinkedListIP17BLELocalAttributeE3getEj+0x18>
     324:	80 81       	ld	r24, Z
     326:	91 81       	ldd	r25, Z+1	; 0x01
     328:	08 95       	ret
     32a:	90 e0       	ldi	r25, 0x00	; 0
     32c:	80 e0       	ldi	r24, 0x00	; 0
     32e:	08 95       	ret

00000330 <_ZN21HCIUartTransportClass4readEv>:
     330:	dc 01       	movw	r26, r24
     332:	12 96       	adiw	r26, 0x02	; 2
     334:	8d 91       	ld	r24, X+
     336:	9c 91       	ld	r25, X
     338:	dc 01       	movw	r26, r24
     33a:	ed 91       	ld	r30, X+
     33c:	fc 91       	ld	r31, X
     33e:	02 84       	ldd	r0, Z+10	; 0x0a
     340:	f3 85       	ldd	r31, Z+11	; 0x0b
     342:	e0 2d       	mov	r30, r0
     344:	09 94       	ijmp

00000346 <_ZN21HCIUartTransportClass4peekEv>:
     346:	dc 01       	movw	r26, r24
     348:	12 96       	adiw	r26, 0x02	; 2
     34a:	8d 91       	ld	r24, X+
     34c:	9c 91       	ld	r25, X
     34e:	dc 01       	movw	r26, r24
     350:	ed 91       	ld	r30, X+
     352:	fc 91       	ld	r31, X
     354:	04 84       	ldd	r0, Z+12	; 0x0c
     356:	f5 85       	ldd	r31, Z+13	; 0x0d
     358:	e0 2d       	mov	r30, r0
     35a:	09 94       	ijmp

0000035c <_ZN21HCIUartTransportClass9availableEv>:
     35c:	dc 01       	movw	r26, r24
     35e:	12 96       	adiw	r26, 0x02	; 2
     360:	8d 91       	ld	r24, X+
     362:	9c 91       	ld	r25, X
     364:	dc 01       	movw	r26, r24
     366:	ed 91       	ld	r30, X+
     368:	fc 91       	ld	r31, X
     36a:	00 84       	ldd	r0, Z+8	; 0x08
     36c:	f1 85       	ldd	r31, Z+9	; 0x09
     36e:	e0 2d       	mov	r30, r0
     370:	09 94       	ijmp

00000372 <_ZN21HCIUartTransportClass3endEv>:
     372:	dc 01       	movw	r26, r24
     374:	12 96       	adiw	r26, 0x02	; 2
     376:	8d 91       	ld	r24, X+
     378:	9c 91       	ld	r25, X
     37a:	dc 01       	movw	r26, r24
     37c:	ed 91       	ld	r30, X+
     37e:	fc 91       	ld	r31, X
     380:	02 88       	ldd	r0, Z+18	; 0x12
     382:	f3 89       	ldd	r31, Z+19	; 0x13
     384:	e0 2d       	mov	r30, r0
     386:	09 94       	ijmp

00000388 <_ZN21HCIUartTransportClass5beginEv>:
     388:	fc 01       	movw	r30, r24
     38a:	a2 81       	ldd	r26, Z+2	; 0x02
     38c:	b3 81       	ldd	r27, Z+3	; 0x03
     38e:	44 81       	ldd	r20, Z+4	; 0x04
     390:	55 81       	ldd	r21, Z+5	; 0x05
     392:	66 81       	ldd	r22, Z+6	; 0x06
     394:	77 81       	ldd	r23, Z+7	; 0x07
     396:	ed 91       	ld	r30, X+
     398:	fc 91       	ld	r31, X
     39a:	11 97       	sbiw	r26, 0x01	; 1
     39c:	06 84       	ldd	r0, Z+14	; 0x0e
     39e:	f7 85       	ldd	r31, Z+15	; 0x0f
     3a0:	e0 2d       	mov	r30, r0
     3a2:	cd 01       	movw	r24, r26
     3a4:	09 95       	icall
     3a6:	81 e0       	ldi	r24, 0x01	; 1
     3a8:	90 e0       	ldi	r25, 0x00	; 0
     3aa:	08 95       	ret

000003ac <_ZN21HCIUartTransportClassD1Ev>:
     3ac:	08 95       	ret

000003ae <_ZN8HCIClassD1Ev>:
     3ae:	08 95       	ret

000003b0 <_ZN14BLELocalDeviceD1Ev>:
     3b0:	08 95       	ret

000003b2 <_ZNK18BLELocalDescriptor4typeEv>:
     3b2:	80 e0       	ldi	r24, 0x00	; 0
     3b4:	99 e2       	ldi	r25, 0x29	; 41
     3b6:	08 95       	ret

000003b8 <_ZN17BLELocalAttributeD1Ev>:
     3b8:	08 95       	ret

000003ba <_ZN18BLELocalDescriptorD1Ev>:
     3ba:	08 95       	ret

000003bc <_ZNK17BLELocalAttribute4typeEv>:
     3bc:	90 e0       	ldi	r25, 0x00	; 0
     3be:	80 e0       	ldi	r24, 0x00	; 0
     3c0:	08 95       	ret

000003c2 <_ZNK15BLELocalService4typeEv>:
     3c2:	80 e0       	ldi	r24, 0x00	; 0
     3c4:	98 e2       	ldi	r25, 0x28	; 40
     3c6:	08 95       	ret

000003c8 <_ZN9BLEDeviceC1ERKS_>:
     3c8:	cf 93       	push	r28
     3ca:	df 93       	push	r29
     3cc:	ec 01       	movw	r28, r24
     3ce:	8a ec       	ldi	r24, 0xCA	; 202
     3d0:	9a e9       	ldi	r25, 0x9A	; 154
     3d2:	88 83       	st	Y, r24
     3d4:	99 83       	std	Y+1, r25	; 0x01
     3d6:	fb 01       	movw	r30, r22
     3d8:	82 81       	ldd	r24, Z+2	; 0x02
     3da:	8a 83       	std	Y+2, r24	; 0x02
     3dc:	86 e0       	ldi	r24, 0x06	; 6
     3de:	33 96       	adiw	r30, 0x03	; 3
     3e0:	de 01       	movw	r26, r28
     3e2:	13 96       	adiw	r26, 0x03	; 3
     3e4:	01 90       	ld	r0, Z+
     3e6:	0d 92       	st	X+, r0
     3e8:	8a 95       	dec	r24
     3ea:	e1 f7       	brne	.-8      	; 0x3e4 <_ZN9BLEDeviceC1ERKS_+0x1c>
     3ec:	fb 01       	movw	r30, r22
     3ee:	81 85       	ldd	r24, Z+9	; 0x09
     3f0:	89 87       	std	Y+9, r24	; 0x09
     3f2:	82 85       	ldd	r24, Z+10	; 0x0a
     3f4:	8a 87       	std	Y+10, r24	; 0x0a
     3f6:	8e e3       	ldi	r24, 0x3E	; 62
     3f8:	3b 96       	adiw	r30, 0x0b	; 11
     3fa:	de 01       	movw	r26, r28
     3fc:	1b 96       	adiw	r26, 0x0b	; 11
     3fe:	01 90       	ld	r0, Z+
     400:	0d 92       	st	X+, r0
     402:	8a 95       	dec	r24
     404:	e1 f7       	brne	.-8      	; 0x3fe <_ZN9BLEDeviceC1ERKS_+0x36>
     406:	67 5b       	subi	r22, 0xB7	; 183
     408:	7f 4f       	sbci	r23, 0xFF	; 255
     40a:	fb 01       	movw	r30, r22
     40c:	80 81       	ld	r24, Z
     40e:	c7 5b       	subi	r28, 0xB7	; 183
     410:	df 4f       	sbci	r29, 0xFF	; 255
     412:	88 83       	st	Y, r24
     414:	df 91       	pop	r29
     416:	cf 91       	pop	r28
     418:	08 95       	ret

0000041a <_ZNK22BLELocalCharacteristic4typeEv>:
     41a:	83 e0       	ldi	r24, 0x03	; 3
     41c:	98 e2       	ldi	r25, 0x28	; 40
     41e:	08 95       	ret

00000420 <_ZN17BLECharacteristicD1Ev>:
     420:	cf 93       	push	r28
     422:	df 93       	push	r29
     424:	ec 01       	movw	r28, r24
     426:	84 ee       	ldi	r24, 0xE4	; 228
     428:	9a e9       	ldi	r25, 0x9A	; 154
     42a:	88 83       	st	Y, r24
     42c:	99 83       	std	Y+1, r25	; 0x01
     42e:	ea 81       	ldd	r30, Y+2	; 0x02
     430:	fb 81       	ldd	r31, Y+3	; 0x03
     432:	30 97       	sbiw	r30, 0x00	; 0
     434:	99 f0       	breq	.+38     	; 0x45c <_ZN17BLECharacteristicD1Ev+0x3c>
     436:	85 89       	ldd	r24, Z+21	; 0x15
     438:	96 89       	ldd	r25, Z+22	; 0x16
     43a:	01 97       	sbiw	r24, 0x01	; 1
     43c:	85 8b       	std	Z+21, r24	; 0x15
     43e:	96 8b       	std	Z+22, r25	; 0x16
     440:	18 16       	cp	r1, r24
     442:	19 06       	cpc	r1, r25
     444:	5c f0       	brlt	.+22     	; 0x45c <_ZN17BLECharacteristicD1Ev+0x3c>
     446:	8a 81       	ldd	r24, Y+2	; 0x02
     448:	9b 81       	ldd	r25, Y+3	; 0x03
     44a:	00 97       	sbiw	r24, 0x00	; 0
     44c:	39 f0       	breq	.+14     	; 0x45c <_ZN17BLECharacteristicD1Ev+0x3c>
     44e:	dc 01       	movw	r26, r24
     450:	ed 91       	ld	r30, X+
     452:	fc 91       	ld	r31, X
     454:	02 80       	ldd	r0, Z+2	; 0x02
     456:	f3 81       	ldd	r31, Z+3	; 0x03
     458:	e0 2d       	mov	r30, r0
     45a:	09 95       	icall
     45c:	ac 81       	ldd	r26, Y+4	; 0x04
     45e:	bd 81       	ldd	r27, Y+5	; 0x05
     460:	10 97       	sbiw	r26, 0x00	; 0
     462:	b1 f0       	breq	.+44     	; 0x490 <_ZN17BLECharacteristicD1Ev+0x70>
     464:	18 96       	adiw	r26, 0x08	; 8
     466:	8d 91       	ld	r24, X+
     468:	9c 91       	ld	r25, X
     46a:	19 97       	sbiw	r26, 0x09	; 9
     46c:	01 97       	sbiw	r24, 0x01	; 1
     46e:	18 96       	adiw	r26, 0x08	; 8
     470:	8d 93       	st	X+, r24
     472:	9c 93       	st	X, r25
     474:	19 97       	sbiw	r26, 0x09	; 9
     476:	18 16       	cp	r1, r24
     478:	19 06       	cpc	r1, r25
     47a:	54 f0       	brlt	.+20     	; 0x490 <_ZN17BLECharacteristicD1Ev+0x70>
     47c:	ed 91       	ld	r30, X+
     47e:	fc 91       	ld	r31, X
     480:	11 97       	sbiw	r26, 0x01	; 1
     482:	02 80       	ldd	r0, Z+2	; 0x02
     484:	f3 81       	ldd	r31, Z+3	; 0x03
     486:	e0 2d       	mov	r30, r0
     488:	cd 01       	movw	r24, r26
     48a:	df 91       	pop	r29
     48c:	cf 91       	pop	r28
     48e:	09 94       	ijmp
     490:	df 91       	pop	r29
     492:	cf 91       	pop	r28
     494:	08 95       	ret

00000496 <_ZN22BLELocalCharacteristic14writeCccdValueE9BLEDevicej>:
     496:	0f 93       	push	r16
     498:	1f 93       	push	r17
     49a:	cf 93       	push	r28
     49c:	df 93       	push	r29
     49e:	cd b7       	in	r28, 0x3d	; 61
     4a0:	de b7       	in	r29, 0x3e	; 62
     4a2:	c0 55       	subi	r28, 0x50	; 80
     4a4:	d1 09       	sbc	r29, r1
     4a6:	cd bf       	out	0x3d, r28	; 61
     4a8:	de bf       	out	0x3e, r29	; 62
     4aa:	fc 01       	movw	r30, r24
     4ac:	43 70       	andi	r20, 0x03	; 3
     4ae:	55 27       	eor	r21, r21
     4b0:	83 a1       	ldd	r24, Z+35	; 0x23
     4b2:	94 a1       	ldd	r25, Z+36	; 0x24
     4b4:	84 17       	cp	r24, r20
     4b6:	95 07       	cpc	r25, r21
     4b8:	c1 f1       	breq	.+112    	; 0x52a <_ZN22BLELocalCharacteristic14writeCccdValueE9BLEDevicej+0x94>
     4ba:	43 a3       	std	Z+35, r20	; 0x23
     4bc:	54 a3       	std	Z+36, r21	; 0x24
     4be:	81 e0       	ldi	r24, 0x01	; 1
     4c0:	90 e0       	ldi	r25, 0x00	; 0
     4c2:	45 2b       	or	r20, r21
     4c4:	11 f0       	breq	.+4      	; 0x4ca <_ZN22BLELocalCharacteristic14writeCccdValueE9BLEDevicej+0x34>
     4c6:	90 e0       	ldi	r25, 0x00	; 0
     4c8:	80 e0       	ldi	r24, 0x00	; 0
     4ca:	88 0f       	add	r24, r24
     4cc:	99 1f       	adc	r25, r25
     4ce:	df 01       	movw	r26, r30
     4d0:	a8 0f       	add	r26, r24
     4d2:	b9 1f       	adc	r27, r25
     4d4:	9b 96       	adiw	r26, 0x2b	; 43
     4d6:	0d 91       	ld	r16, X+
     4d8:	1c 91       	ld	r17, X
     4da:	01 15       	cp	r16, r1
     4dc:	11 05       	cpc	r17, r1
     4de:	29 f1       	breq	.+74     	; 0x52a <_ZN22BLELocalCharacteristic14writeCccdValueE9BLEDevicej+0x94>
     4e0:	84 ee       	ldi	r24, 0xE4	; 228
     4e2:	9a e9       	ldi	r25, 0x9A	; 154
     4e4:	2d 96       	adiw	r28, 0x0d	; 13
     4e6:	8e af       	std	Y+62, r24	; 0x3e
     4e8:	9f af       	std	Y+63, r25	; 0x3f
     4ea:	2d 97       	sbiw	r28, 0x0d	; 13
     4ec:	2f 96       	adiw	r28, 0x0f	; 15
     4ee:	ee af       	std	Y+62, r30	; 0x3e
     4f0:	ff af       	std	Y+63, r31	; 0x3f
     4f2:	2f 97       	sbiw	r28, 0x0f	; 15
     4f4:	61 96       	adiw	r28, 0x11	; 17
     4f6:	1e ae       	std	Y+62, r1	; 0x3e
     4f8:	1f ae       	std	Y+63, r1	; 0x3f
     4fa:	61 97       	sbiw	r28, 0x11	; 17
     4fc:	30 97       	sbiw	r30, 0x00	; 0
     4fe:	29 f0       	breq	.+10     	; 0x50a <_ZN22BLELocalCharacteristic14writeCccdValueE9BLEDevicej+0x74>
     500:	85 89       	ldd	r24, Z+21	; 0x15
     502:	96 89       	ldd	r25, Z+22	; 0x16
     504:	01 96       	adiw	r24, 0x01	; 1
     506:	85 8b       	std	Z+21, r24	; 0x15
     508:	96 8b       	std	Z+22, r25	; 0x16
     50a:	ce 01       	movw	r24, r28
     50c:	01 96       	adiw	r24, 0x01	; 1
     50e:	0e 94 e4 01 	call	0x3c8	; 0x3c8 <_ZN9BLEDeviceC1ERKS_>
     512:	be 01       	movw	r22, r28
     514:	65 5b       	subi	r22, 0xB5	; 181
     516:	7f 4f       	sbci	r23, 0xFF	; 255
     518:	ce 01       	movw	r24, r28
     51a:	01 96       	adiw	r24, 0x01	; 1
     51c:	f8 01       	movw	r30, r16
     51e:	09 95       	icall
     520:	ce 01       	movw	r24, r28
     522:	85 5b       	subi	r24, 0xB5	; 181
     524:	9f 4f       	sbci	r25, 0xFF	; 255
     526:	0e 94 10 02 	call	0x420	; 0x420 <_ZN17BLECharacteristicD1Ev>
     52a:	c0 5b       	subi	r28, 0xB0	; 176
     52c:	df 4f       	sbci	r29, 0xFF	; 255
     52e:	cd bf       	out	0x3d, r28	; 61
     530:	de bf       	out	0x3e, r29	; 62
     532:	df 91       	pop	r29
     534:	cf 91       	pop	r28
     536:	1f 91       	pop	r17
     538:	0f 91       	pop	r16
     53a:	08 95       	ret

0000053c <_ZN9UartClass17availableForWriteEv>:
     53c:	fc 01       	movw	r30, r24
     53e:	54 89       	ldd	r21, Z+20	; 0x14
     540:	45 89       	ldd	r20, Z+21	; 0x15
     542:	25 2f       	mov	r18, r21
     544:	30 e0       	ldi	r19, 0x00	; 0
     546:	84 2f       	mov	r24, r20
     548:	90 e0       	ldi	r25, 0x00	; 0
     54a:	82 1b       	sub	r24, r18
     54c:	93 0b       	sbc	r25, r19
     54e:	54 17       	cp	r21, r20
     550:	10 f0       	brcs	.+4      	; 0x556 <_ZN9UartClass17availableForWriteEv+0x1a>
     552:	cf 96       	adiw	r24, 0x3f	; 63
     554:	08 95       	ret
     556:	01 97       	sbiw	r24, 0x01	; 1
     558:	08 95       	ret

0000055a <_ZN9UartClass4readEv>:
     55a:	fc 01       	movw	r30, r24
     55c:	92 89       	ldd	r25, Z+18	; 0x12
     55e:	83 89       	ldd	r24, Z+19	; 0x13
     560:	98 17       	cp	r25, r24
     562:	61 f0       	breq	.+24     	; 0x57c <_ZN9UartClass4readEv+0x22>
     564:	a3 89       	ldd	r26, Z+19	; 0x13
     566:	ae 0f       	add	r26, r30
     568:	bf 2f       	mov	r27, r31
     56a:	b1 1d       	adc	r27, r1
     56c:	59 96       	adiw	r26, 0x19	; 25
     56e:	8c 91       	ld	r24, X
     570:	93 89       	ldd	r25, Z+19	; 0x13
     572:	9f 5f       	subi	r25, 0xFF	; 255
     574:	9f 73       	andi	r25, 0x3F	; 63
     576:	93 8b       	std	Z+19, r25	; 0x13
     578:	90 e0       	ldi	r25, 0x00	; 0
     57a:	08 95       	ret
     57c:	8f ef       	ldi	r24, 0xFF	; 255
     57e:	9f ef       	ldi	r25, 0xFF	; 255
     580:	08 95       	ret

00000582 <_ZN9UartClass4peekEv>:
     582:	fc 01       	movw	r30, r24
     584:	92 89       	ldd	r25, Z+18	; 0x12
     586:	83 89       	ldd	r24, Z+19	; 0x13
     588:	98 17       	cp	r25, r24
     58a:	31 f0       	breq	.+12     	; 0x598 <_ZN9UartClass4peekEv+0x16>
     58c:	83 89       	ldd	r24, Z+19	; 0x13
     58e:	e8 0f       	add	r30, r24
     590:	f1 1d       	adc	r31, r1
     592:	81 8d       	ldd	r24, Z+25	; 0x19
     594:	90 e0       	ldi	r25, 0x00	; 0
     596:	08 95       	ret
     598:	8f ef       	ldi	r24, 0xFF	; 255
     59a:	9f ef       	ldi	r25, 0xFF	; 255
     59c:	08 95       	ret

0000059e <_ZN9UartClass9availableEv>:
     59e:	fc 01       	movw	r30, r24
     5a0:	92 89       	ldd	r25, Z+18	; 0x12
     5a2:	23 89       	ldd	r18, Z+19	; 0x13
     5a4:	89 2f       	mov	r24, r25
     5a6:	90 e0       	ldi	r25, 0x00	; 0
     5a8:	80 5c       	subi	r24, 0xC0	; 192
     5aa:	9f 4f       	sbci	r25, 0xFF	; 255
     5ac:	82 1b       	sub	r24, r18
     5ae:	91 09       	sbc	r25, r1
     5b0:	8f 73       	andi	r24, 0x3F	; 63
     5b2:	99 27       	eor	r25, r25
     5b4:	08 95       	ret

000005b6 <_ZN9UartClass18_tx_data_empty_irqEv>:
     5b6:	fc 01       	movw	r30, r24
     5b8:	94 89       	ldd	r25, Z+20	; 0x14
     5ba:	85 89       	ldd	r24, Z+21	; 0x15
     5bc:	98 13       	cpse	r25, r24
     5be:	06 c0       	rjmp	.+12     	; 0x5cc <_ZN9UartClass18_tx_data_empty_irqEv+0x16>
     5c0:	80 91 05 08 	lds	r24, 0x0805	; 0x800805 <__TEXT_REGION_LENGTH__+0x700805>
     5c4:	8f 7d       	andi	r24, 0xDF	; 223
     5c6:	80 93 05 08 	sts	0x0805, r24	; 0x800805 <__TEXT_REGION_LENGTH__+0x700805>
     5ca:	08 95       	ret
     5cc:	a5 89       	ldd	r26, Z+21	; 0x15
     5ce:	ae 0f       	add	r26, r30
     5d0:	bf 2f       	mov	r27, r31
     5d2:	b1 1d       	adc	r27, r1
     5d4:	a7 5a       	subi	r26, 0xA7	; 167
     5d6:	bf 4f       	sbci	r27, 0xFF	; 255
     5d8:	2c 91       	ld	r18, X
     5da:	85 89       	ldd	r24, Z+21	; 0x15
     5dc:	90 e0       	ldi	r25, 0x00	; 0
     5de:	01 96       	adiw	r24, 0x01	; 1
     5e0:	8f 73       	andi	r24, 0x3F	; 63
     5e2:	99 27       	eor	r25, r25
     5e4:	85 8b       	std	Z+21, r24	; 0x15
     5e6:	80 e4       	ldi	r24, 0x40	; 64
     5e8:	80 93 04 08 	sts	0x0804, r24	; 0x800804 <__TEXT_REGION_LENGTH__+0x700804>
     5ec:	20 93 02 08 	sts	0x0802, r18	; 0x800802 <__TEXT_REGION_LENGTH__+0x700802>
     5f0:	94 89       	ldd	r25, Z+20	; 0x14
     5f2:	85 89       	ldd	r24, Z+21	; 0x15
     5f4:	98 13       	cpse	r25, r24
     5f6:	0c c0       	rjmp	.+24     	; 0x610 <_ZN9UartClass18_tx_data_empty_irqEv+0x5a>
     5f8:	80 91 05 08 	lds	r24, 0x0805	; 0x800805 <__TEXT_REGION_LENGTH__+0x700805>
     5fc:	8f 7d       	andi	r24, 0xDF	; 223
     5fe:	80 93 05 08 	sts	0x0805, r24	; 0x800805 <__TEXT_REGION_LENGTH__+0x700805>
     602:	87 89       	ldd	r24, Z+23	; 0x17
     604:	88 23       	and	r24, r24
     606:	21 f0       	breq	.+8      	; 0x610 <_ZN9UartClass18_tx_data_empty_irqEv+0x5a>
     608:	80 8d       	ldd	r24, Z+24	; 0x18
     60a:	80 93 13 01 	sts	0x0113, r24	; 0x800113 <__TEXT_REGION_LENGTH__+0x700113>
     60e:	17 8a       	std	Z+23, r1	; 0x17
     610:	08 95       	ret

00000612 <_ZN9UartClass19_poll_tx_data_emptyEv>:
     612:	0f b6       	in	r0, 0x3f	; 63
     614:	07 fe       	sbrs	r0, 7
     616:	04 c0       	rjmp	.+8      	; 0x620 <_ZN9UartClass19_poll_tx_data_emptyEv+0xe>
     618:	20 91 05 08 	lds	r18, 0x0805	; 0x800805 <__TEXT_REGION_LENGTH__+0x700805>
     61c:	25 fd       	sbrc	r18, 5
     61e:	05 c0       	rjmp	.+10     	; 0x62a <_ZN9UartClass19_poll_tx_data_emptyEv+0x18>
     620:	20 91 04 08 	lds	r18, 0x0804	; 0x800804 <__TEXT_REGION_LENGTH__+0x700804>
     624:	25 fd       	sbrc	r18, 5
     626:	0c 94 db 02 	jmp	0x5b6	; 0x5b6 <_ZN9UartClass18_tx_data_empty_irqEv>
     62a:	08 95       	ret

0000062c <_ZN9UartClass5flushEv>:
     62c:	cf 93       	push	r28
     62e:	df 93       	push	r29
     630:	fc 01       	movw	r30, r24
     632:	21 89       	ldd	r18, Z+17	; 0x11
     634:	22 23       	and	r18, r18
     636:	c9 f0       	breq	.+50     	; 0x66a <_ZN9UartClass5flushEv+0x3e>
     638:	ec 01       	movw	r28, r24
     63a:	80 91 11 01 	lds	r24, 0x0111	; 0x800111 <__TEXT_REGION_LENGTH__+0x700111>
     63e:	80 ff       	sbrs	r24, 0
     640:	08 c0       	rjmp	.+16     	; 0x652 <_ZN9UartClass5flushEv+0x26>
     642:	80 91 13 01 	lds	r24, 0x0113	; 0x800113 <__TEXT_REGION_LENGTH__+0x700113>
     646:	80 8f       	std	Z+24, r24	; 0x18
     648:	86 89       	ldd	r24, Z+22	; 0x16
     64a:	80 93 13 01 	sts	0x0113, r24	; 0x800113 <__TEXT_REGION_LENGTH__+0x700113>
     64e:	81 e0       	ldi	r24, 0x01	; 1
     650:	87 8b       	std	Z+23, r24	; 0x17
     652:	80 91 05 08 	lds	r24, 0x0805	; 0x800805 <__TEXT_REGION_LENGTH__+0x700805>
     656:	85 fd       	sbrc	r24, 5
     658:	04 c0       	rjmp	.+8      	; 0x662 <_ZN9UartClass5flushEv+0x36>
     65a:	80 91 04 08 	lds	r24, 0x0804	; 0x800804 <__TEXT_REGION_LENGTH__+0x700804>
     65e:	86 fd       	sbrc	r24, 6
     660:	04 c0       	rjmp	.+8      	; 0x66a <_ZN9UartClass5flushEv+0x3e>
     662:	ce 01       	movw	r24, r28
     664:	0e 94 09 03 	call	0x612	; 0x612 <_ZN9UartClass19_poll_tx_data_emptyEv>
     668:	f4 cf       	rjmp	.-24     	; 0x652 <_ZN9UartClass5flushEv+0x26>
     66a:	df 91       	pop	r29
     66c:	cf 91       	pop	r28
     66e:	08 95       	ret

00000670 <_ZN9UartClasscvbEv>:
     670:	81 e0       	ldi	r24, 0x01	; 1
     672:	08 95       	ret

00000674 <_ZN9UartClass5beginEm>:
     674:	dc 01       	movw	r26, r24
     676:	ed 91       	ld	r30, X+
     678:	fc 91       	ld	r31, X
     67a:	00 88       	ldd	r0, Z+16	; 0x10
     67c:	f1 89       	ldd	r31, Z+17	; 0x11
     67e:	e0 2d       	mov	r30, r0
     680:	23 e0       	ldi	r18, 0x03	; 3
     682:	30 e0       	ldi	r19, 0x00	; 0
     684:	09 94       	ijmp

00000686 <_ZN5Print5writeEPKhj>:
     686:	af 92       	push	r10
     688:	bf 92       	push	r11
     68a:	cf 92       	push	r12
     68c:	df 92       	push	r13
     68e:	ef 92       	push	r14
     690:	ff 92       	push	r15
     692:	0f 93       	push	r16
     694:	1f 93       	push	r17
     696:	cf 93       	push	r28
     698:	df 93       	push	r29
     69a:	6c 01       	movw	r12, r24
     69c:	7b 01       	movw	r14, r22
     69e:	8b 01       	movw	r16, r22
     6a0:	04 0f       	add	r16, r20
     6a2:	15 1f       	adc	r17, r21
     6a4:	eb 01       	movw	r28, r22
     6a6:	5e 01       	movw	r10, r28
     6a8:	ae 18       	sub	r10, r14
     6aa:	bf 08       	sbc	r11, r15
     6ac:	c0 17       	cp	r28, r16
     6ae:	d1 07       	cpc	r29, r17
     6b0:	59 f0       	breq	.+22     	; 0x6c8 <_ZN5Print5writeEPKhj+0x42>
     6b2:	69 91       	ld	r22, Y+
     6b4:	d6 01       	movw	r26, r12
     6b6:	ed 91       	ld	r30, X+
     6b8:	fc 91       	ld	r31, X
     6ba:	01 90       	ld	r0, Z+
     6bc:	f0 81       	ld	r31, Z
     6be:	e0 2d       	mov	r30, r0
     6c0:	c6 01       	movw	r24, r12
     6c2:	09 95       	icall
     6c4:	89 2b       	or	r24, r25
     6c6:	79 f7       	brne	.-34     	; 0x6a6 <_ZN5Print5writeEPKhj+0x20>
     6c8:	c5 01       	movw	r24, r10
     6ca:	df 91       	pop	r29
     6cc:	cf 91       	pop	r28
     6ce:	1f 91       	pop	r17
     6d0:	0f 91       	pop	r16
     6d2:	ff 90       	pop	r15
     6d4:	ef 90       	pop	r14
     6d6:	df 90       	pop	r13
     6d8:	cf 90       	pop	r12
     6da:	bf 90       	pop	r11
     6dc:	af 90       	pop	r10
     6de:	08 95       	ret

000006e0 <_ZN13BLELinkedListIP9BLEDeviceE6removeEj.constprop.99>:
     6e0:	cf 93       	push	r28
     6e2:	df 93       	push	r29
     6e4:	bc 01       	movw	r22, r24
     6e6:	80 91 40 2b 	lds	r24, 0x2B40	; 0x802b40 <GAP+0x17>
     6ea:	90 91 41 2b 	lds	r25, 0x2B41	; 0x802b41 <GAP+0x18>
     6ee:	d0 e0       	ldi	r29, 0x00	; 0
     6f0:	c0 e0       	ldi	r28, 0x00	; 0
     6f2:	68 17       	cp	r22, r24
     6f4:	79 07       	cpc	r23, r25
     6f6:	90 f5       	brcc	.+100    	; 0x75c <_ZN13BLELinkedListIP9BLEDeviceE6removeEj.constprop.99+0x7c>
     6f8:	e0 91 42 2b 	lds	r30, 0x2B42	; 0x802b42 <GAP+0x19>
     6fc:	f0 91 43 2b 	lds	r31, 0x2B43	; 0x802b43 <GAP+0x1a>
     700:	50 e0       	ldi	r21, 0x00	; 0
     702:	40 e0       	ldi	r20, 0x00	; 0
     704:	b0 e0       	ldi	r27, 0x00	; 0
     706:	a0 e0       	ldi	r26, 0x00	; 0
     708:	22 81       	ldd	r18, Z+2	; 0x02
     70a:	93 81       	ldd	r25, Z+3	; 0x03
     70c:	64 17       	cp	r22, r20
     70e:	75 07       	cpc	r23, r21
     710:	31 f0       	breq	.+12     	; 0x71e <_ZN13BLELinkedListIP9BLEDeviceE6removeEj.constprop.99+0x3e>
     712:	4f 5f       	subi	r20, 0xFF	; 255
     714:	5f 4f       	sbci	r21, 0xFF	; 255
     716:	df 01       	movw	r26, r30
     718:	e2 2f       	mov	r30, r18
     71a:	f9 2f       	mov	r31, r25
     71c:	f5 cf       	rjmp	.-22     	; 0x708 <_ZN13BLELinkedListIP9BLEDeviceE6removeEj.constprop.99+0x28>
     71e:	c0 81       	ld	r28, Z
     720:	d1 81       	ldd	r29, Z+1	; 0x01
     722:	10 97       	sbiw	r26, 0x00	; 0
     724:	f9 f4       	brne	.+62     	; 0x764 <_ZN13BLELinkedListIP9BLEDeviceE6removeEj.constprop.99+0x84>
     726:	20 93 42 2b 	sts	0x2B42, r18	; 0x802b42 <GAP+0x19>
     72a:	90 93 43 2b 	sts	0x2B43, r25	; 0x802b43 <GAP+0x1a>
     72e:	80 91 44 2b 	lds	r24, 0x2B44	; 0x802b44 <GAP+0x1b>
     732:	90 91 45 2b 	lds	r25, 0x2B45	; 0x802b45 <GAP+0x1c>
     736:	e8 17       	cp	r30, r24
     738:	f9 07       	cpc	r31, r25
     73a:	21 f4       	brne	.+8      	; 0x744 <_ZN13BLELinkedListIP9BLEDeviceE6removeEj.constprop.99+0x64>
     73c:	a0 93 44 2b 	sts	0x2B44, r26	; 0x802b44 <GAP+0x1b>
     740:	b0 93 45 2b 	sts	0x2B45, r27	; 0x802b45 <GAP+0x1c>
     744:	cf 01       	movw	r24, r30
     746:	0e 94 3a 29 	call	0x5274	; 0x5274 <free>
     74a:	80 91 40 2b 	lds	r24, 0x2B40	; 0x802b40 <GAP+0x17>
     74e:	90 91 41 2b 	lds	r25, 0x2B41	; 0x802b41 <GAP+0x18>
     752:	01 97       	sbiw	r24, 0x01	; 1
     754:	80 93 40 2b 	sts	0x2B40, r24	; 0x802b40 <GAP+0x17>
     758:	90 93 41 2b 	sts	0x2B41, r25	; 0x802b41 <GAP+0x18>
     75c:	ce 01       	movw	r24, r28
     75e:	df 91       	pop	r29
     760:	cf 91       	pop	r28
     762:	08 95       	ret
     764:	12 96       	adiw	r26, 0x02	; 2
     766:	2c 93       	st	X, r18
     768:	12 97       	sbiw	r26, 0x02	; 2
     76a:	13 96       	adiw	r26, 0x03	; 3
     76c:	9c 93       	st	X, r25
     76e:	13 97       	sbiw	r26, 0x03	; 3
     770:	de cf       	rjmp	.-68     	; 0x72e <_ZN13BLELinkedListIP9BLEDeviceE6removeEj.constprop.99+0x4e>

00000772 <_ZN19L2CAPSignalingClassD0Ev>:
     772:	0c 94 3a 29 	jmp	0x5274	; 0x5274 <free>

00000776 <_ZN13BLELinkedListIP17BLELocalAttributeE5clearEv>:
     776:	ef 92       	push	r14
     778:	ff 92       	push	r15
     77a:	0f 93       	push	r16
     77c:	1f 93       	push	r17
     77e:	cf 93       	push	r28
     780:	df 93       	push	r29
     782:	ec 01       	movw	r28, r24
     784:	8a 81       	ldd	r24, Y+2	; 0x02
     786:	9b 81       	ldd	r25, Y+3	; 0x03
     788:	10 e0       	ldi	r17, 0x00	; 0
     78a:	00 e0       	ldi	r16, 0x00	; 0
     78c:	28 81       	ld	r18, Y
     78e:	39 81       	ldd	r19, Y+1	; 0x01
     790:	02 17       	cp	r16, r18
     792:	13 07       	cpc	r17, r19
     794:	48 f4       	brcc	.+18     	; 0x7a8 <_ZN13BLELinkedListIP17BLELocalAttributeE5clearEv+0x32>
     796:	fc 01       	movw	r30, r24
     798:	e2 80       	ldd	r14, Z+2	; 0x02
     79a:	f3 80       	ldd	r15, Z+3	; 0x03
     79c:	0e 94 3a 29 	call	0x5274	; 0x5274 <free>
     7a0:	0f 5f       	subi	r16, 0xFF	; 255
     7a2:	1f 4f       	sbci	r17, 0xFF	; 255
     7a4:	c7 01       	movw	r24, r14
     7a6:	f2 cf       	rjmp	.-28     	; 0x78c <_ZN13BLELinkedListIP17BLELocalAttributeE5clearEv+0x16>
     7a8:	18 82       	st	Y, r1
     7aa:	19 82       	std	Y+1, r1	; 0x01
     7ac:	1a 82       	std	Y+2, r1	; 0x02
     7ae:	1b 82       	std	Y+3, r1	; 0x03
     7b0:	1c 82       	std	Y+4, r1	; 0x04
     7b2:	1d 82       	std	Y+5, r1	; 0x05
     7b4:	df 91       	pop	r29
     7b6:	cf 91       	pop	r28
     7b8:	1f 91       	pop	r17
     7ba:	0f 91       	pop	r16
     7bc:	ff 90       	pop	r15
     7be:	ef 90       	pop	r14
     7c0:	08 95       	ret

000007c2 <_ZN14BLELocalDevice3endEv.constprop.22>:
     7c2:	8a e5       	ldi	r24, 0x5A	; 90
     7c4:	9b e2       	ldi	r25, 0x2B	; 43
     7c6:	0e 94 bb 03 	call	0x776	; 0x776 <_ZN13BLELinkedListIP17BLELocalAttributeE5clearEv>
     7ca:	83 e3       	ldi	r24, 0x33	; 51
     7cc:	98 e2       	ldi	r25, 0x28	; 40
     7ce:	0e 94 b9 01 	call	0x372	; 0x372 <_ZN21HCIUartTransportClass3endEv>
     7d2:	80 e8       	ldi	r24, 0x80	; 128
     7d4:	80 93 05 04 	sts	0x0405, r24	; 0x800405 <__TEXT_REGION_LENGTH__+0x700405>
     7d8:	08 95       	ret

000007da <_ZN9GATTClass15clearAttributesEv>:
     7da:	ef 92       	push	r14
     7dc:	ff 92       	push	r15
     7de:	0f 93       	push	r16
     7e0:	1f 93       	push	r17
     7e2:	cf 93       	push	r28
     7e4:	df 93       	push	r29
     7e6:	7c 01       	movw	r14, r24
     7e8:	d0 e0       	ldi	r29, 0x00	; 0
     7ea:	c0 e0       	ldi	r28, 0x00	; 0
     7ec:	8c 01       	movw	r16, r24
     7ee:	0e 5f       	subi	r16, 0xFE	; 254
     7f0:	1f 4f       	sbci	r17, 0xFF	; 255
     7f2:	d7 01       	movw	r26, r14
     7f4:	12 96       	adiw	r26, 0x02	; 2
     7f6:	8d 91       	ld	r24, X+
     7f8:	9c 91       	ld	r25, X
     7fa:	c8 17       	cp	r28, r24
     7fc:	d9 07       	cpc	r29, r25
     7fe:	c8 f4       	brcc	.+50     	; 0x832 <_ZN9GATTClass15clearAttributesEv+0x58>
     800:	be 01       	movw	r22, r28
     802:	c8 01       	movw	r24, r16
     804:	0e 94 7e 01 	call	0x2fc	; 0x2fc <_ZNK13BLELinkedListIP17BLELocalAttributeE3getEj>
     808:	fc 01       	movw	r30, r24
     80a:	25 89       	ldd	r18, Z+21	; 0x15
     80c:	36 89       	ldd	r19, Z+22	; 0x16
     80e:	21 50       	subi	r18, 0x01	; 1
     810:	31 09       	sbc	r19, r1
     812:	25 8b       	std	Z+21, r18	; 0x15
     814:	36 8b       	std	Z+22, r19	; 0x16
     816:	12 16       	cp	r1, r18
     818:	13 06       	cpc	r1, r19
     81a:	4c f0       	brlt	.+18     	; 0x82e <_ZN9GATTClass15clearAttributesEv+0x54>
     81c:	00 97       	sbiw	r24, 0x00	; 0
     81e:	39 f0       	breq	.+14     	; 0x82e <_ZN9GATTClass15clearAttributesEv+0x54>
     820:	01 90       	ld	r0, Z+
     822:	f0 81       	ld	r31, Z
     824:	e0 2d       	mov	r30, r0
     826:	02 80       	ldd	r0, Z+2	; 0x02
     828:	f3 81       	ldd	r31, Z+3	; 0x03
     82a:	e0 2d       	mov	r30, r0
     82c:	09 95       	icall
     82e:	21 96       	adiw	r28, 0x01	; 1
     830:	e0 cf       	rjmp	.-64     	; 0x7f2 <_ZN9GATTClass15clearAttributesEv+0x18>
     832:	c8 01       	movw	r24, r16
     834:	df 91       	pop	r29
     836:	cf 91       	pop	r28
     838:	1f 91       	pop	r17
     83a:	0f 91       	pop	r16
     83c:	ff 90       	pop	r15
     83e:	ef 90       	pop	r14
     840:	0c 94 bb 03 	jmp	0x776	; 0x776 <_ZN13BLELinkedListIP17BLELocalAttributeE5clearEv>

00000844 <_ZN15BLELocalServiceD1Ev>:
     844:	0f 93       	push	r16
     846:	1f 93       	push	r17
     848:	cf 93       	push	r28
     84a:	df 93       	push	r29
     84c:	ec 01       	movw	r28, r24
     84e:	82 e1       	ldi	r24, 0x12	; 18
     850:	9b e9       	ldi	r25, 0x9B	; 155
     852:	88 83       	st	Y, r24
     854:	99 83       	std	Y+1, r25	; 0x01
     856:	10 e0       	ldi	r17, 0x00	; 0
     858:	00 e0       	ldi	r16, 0x00	; 0
     85a:	8b 8d       	ldd	r24, Y+27	; 0x1b
     85c:	9c 8d       	ldd	r25, Y+28	; 0x1c
     85e:	08 17       	cp	r16, r24
     860:	19 07       	cpc	r17, r25
     862:	38 f5       	brcc	.+78     	; 0x8b2 <_ZN15BLELocalServiceD1Ev+0x6e>
     864:	ed 8d       	ldd	r30, Y+29	; 0x1d
     866:	fe 8d       	ldd	r31, Y+30	; 0x1e
     868:	90 e0       	ldi	r25, 0x00	; 0
     86a:	80 e0       	ldi	r24, 0x00	; 0
     86c:	08 17       	cp	r16, r24
     86e:	19 07       	cpc	r17, r25
     870:	29 f0       	breq	.+10     	; 0x87c <_ZN15BLELocalServiceD1Ev+0x38>
     872:	02 80       	ldd	r0, Z+2	; 0x02
     874:	f3 81       	ldd	r31, Z+3	; 0x03
     876:	e0 2d       	mov	r30, r0
     878:	01 96       	adiw	r24, 0x01	; 1
     87a:	f8 cf       	rjmp	.-16     	; 0x86c <_ZN15BLELocalServiceD1Ev+0x28>
     87c:	a0 81       	ld	r26, Z
     87e:	b1 81       	ldd	r27, Z+1	; 0x01
     880:	55 96       	adiw	r26, 0x15	; 21
     882:	8d 91       	ld	r24, X+
     884:	9c 91       	ld	r25, X
     886:	56 97       	sbiw	r26, 0x16	; 22
     888:	01 97       	sbiw	r24, 0x01	; 1
     88a:	55 96       	adiw	r26, 0x15	; 21
     88c:	8d 93       	st	X+, r24
     88e:	9c 93       	st	X, r25
     890:	56 97       	sbiw	r26, 0x16	; 22
     892:	18 16       	cp	r1, r24
     894:	19 06       	cpc	r1, r25
     896:	54 f0       	brlt	.+20     	; 0x8ac <_ZN15BLELocalServiceD1Ev+0x68>
     898:	10 97       	sbiw	r26, 0x00	; 0
     89a:	41 f0       	breq	.+16     	; 0x8ac <_ZN15BLELocalServiceD1Ev+0x68>
     89c:	ed 91       	ld	r30, X+
     89e:	fc 91       	ld	r31, X
     8a0:	11 97       	sbiw	r26, 0x01	; 1
     8a2:	02 80       	ldd	r0, Z+2	; 0x02
     8a4:	f3 81       	ldd	r31, Z+3	; 0x03
     8a6:	e0 2d       	mov	r30, r0
     8a8:	cd 01       	movw	r24, r26
     8aa:	09 95       	icall
     8ac:	0f 5f       	subi	r16, 0xFF	; 255
     8ae:	1f 4f       	sbci	r17, 0xFF	; 255
     8b0:	d4 cf       	rjmp	.-88     	; 0x85a <_ZN15BLELocalServiceD1Ev+0x16>
     8b2:	6b 96       	adiw	r28, 0x1b	; 27
     8b4:	ce 01       	movw	r24, r28
     8b6:	0e 94 bb 03 	call	0x776	; 0x776 <_ZN13BLELinkedListIP17BLELocalAttributeE5clearEv>
     8ba:	ce 01       	movw	r24, r28
     8bc:	df 91       	pop	r29
     8be:	cf 91       	pop	r28
     8c0:	1f 91       	pop	r17
     8c2:	0f 91       	pop	r16
     8c4:	0c 94 bb 03 	jmp	0x776	; 0x776 <_ZN13BLELinkedListIP17BLELocalAttributeE5clearEv>

000008c8 <_ZN21HCIUartTransportClassD0Ev>:
     8c8:	0c 94 3a 29 	jmp	0x5274	; 0x5274 <free>

000008cc <_ZN8HCIClassD0Ev>:
     8cc:	0c 94 3a 29 	jmp	0x5274	; 0x5274 <free>

000008d0 <_ZN8ATTClassD1Ev>:
     8d0:	2a e4       	ldi	r18, 0x4A	; 74
     8d2:	3b e9       	ldi	r19, 0x9B	; 155
     8d4:	fc 01       	movw	r30, r24
     8d6:	20 83       	st	Z, r18
     8d8:	31 83       	std	Z+1, r19	; 0x01
     8da:	85 a9       	ldd	r24, Z+53	; 0x35
     8dc:	96 a9       	ldd	r25, Z+54	; 0x36
     8de:	00 97       	sbiw	r24, 0x00	; 0
     8e0:	11 f0       	breq	.+4      	; 0x8e6 <_ZN8ATTClassD1Ev+0x16>
     8e2:	0c 94 3a 29 	jmp	0x5274	; 0x5274 <free>
     8e6:	08 95       	ret

000008e8 <_ZN8ATTClassD0Ev>:
     8e8:	cf 93       	push	r28
     8ea:	df 93       	push	r29
     8ec:	ec 01       	movw	r28, r24
     8ee:	0e 94 68 04 	call	0x8d0	; 0x8d0 <_ZN8ATTClassD1Ev>
     8f2:	ce 01       	movw	r24, r28
     8f4:	df 91       	pop	r29
     8f6:	cf 91       	pop	r28
     8f8:	0c 94 3a 29 	jmp	0x5274	; 0x5274 <free>

000008fc <_ZN14BLELocalDeviceD0Ev>:
     8fc:	0c 94 3a 29 	jmp	0x5274	; 0x5274 <free>

00000900 <_ZN18BLELocalDescriptorD0Ev>:
     900:	0c 94 3a 29 	jmp	0x5274	; 0x5274 <free>

00000904 <_ZN17BLELocalAttributeD0Ev>:
     904:	0c 94 3a 29 	jmp	0x5274	; 0x5274 <free>

00000908 <_ZN15BLELocalServiceD0Ev>:
     908:	cf 93       	push	r28
     90a:	df 93       	push	r29
     90c:	ec 01       	movw	r28, r24
     90e:	0e 94 22 04 	call	0x844	; 0x844 <_ZN15BLELocalServiceD1Ev>
     912:	ce 01       	movw	r24, r28
     914:	df 91       	pop	r29
     916:	cf 91       	pop	r28
     918:	0c 94 3a 29 	jmp	0x5274	; 0x5274 <free>

0000091c <_ZN22BLELocalCharacteristicD1Ev>:
     91c:	0f 93       	push	r16
     91e:	1f 93       	push	r17
     920:	cf 93       	push	r28
     922:	df 93       	push	r29
     924:	ec 01       	movw	r28, r24
     926:	86 ef       	ldi	r24, 0xF6	; 246
     928:	9a e9       	ldi	r25, 0x9A	; 154
     92a:	88 83       	st	Y, r24
     92c:	99 83       	std	Y+1, r25	; 0x01
     92e:	10 e0       	ldi	r17, 0x00	; 0
     930:	00 e0       	ldi	r16, 0x00	; 0
     932:	8d a1       	ldd	r24, Y+37	; 0x25
     934:	9e a1       	ldd	r25, Y+38	; 0x26
     936:	08 17       	cp	r16, r24
     938:	19 07       	cpc	r17, r25
     93a:	38 f5       	brcc	.+78     	; 0x98a <_ZN22BLELocalCharacteristicD1Ev+0x6e>
     93c:	ef a1       	ldd	r30, Y+39	; 0x27
     93e:	f8 a5       	ldd	r31, Y+40	; 0x28
     940:	90 e0       	ldi	r25, 0x00	; 0
     942:	80 e0       	ldi	r24, 0x00	; 0
     944:	08 17       	cp	r16, r24
     946:	19 07       	cpc	r17, r25
     948:	29 f0       	breq	.+10     	; 0x954 <_ZN22BLELocalCharacteristicD1Ev+0x38>
     94a:	02 80       	ldd	r0, Z+2	; 0x02
     94c:	f3 81       	ldd	r31, Z+3	; 0x03
     94e:	e0 2d       	mov	r30, r0
     950:	01 96       	adiw	r24, 0x01	; 1
     952:	f8 cf       	rjmp	.-16     	; 0x944 <_ZN22BLELocalCharacteristicD1Ev+0x28>
     954:	a0 81       	ld	r26, Z
     956:	b1 81       	ldd	r27, Z+1	; 0x01
     958:	55 96       	adiw	r26, 0x15	; 21
     95a:	8d 91       	ld	r24, X+
     95c:	9c 91       	ld	r25, X
     95e:	56 97       	sbiw	r26, 0x16	; 22
     960:	01 97       	sbiw	r24, 0x01	; 1
     962:	55 96       	adiw	r26, 0x15	; 21
     964:	8d 93       	st	X+, r24
     966:	9c 93       	st	X, r25
     968:	56 97       	sbiw	r26, 0x16	; 22
     96a:	18 16       	cp	r1, r24
     96c:	19 06       	cpc	r1, r25
     96e:	54 f0       	brlt	.+20     	; 0x984 <_ZN22BLELocalCharacteristicD1Ev+0x68>
     970:	10 97       	sbiw	r26, 0x00	; 0
     972:	41 f0       	breq	.+16     	; 0x984 <_ZN22BLELocalCharacteristicD1Ev+0x68>
     974:	ed 91       	ld	r30, X+
     976:	fc 91       	ld	r31, X
     978:	11 97       	sbiw	r26, 0x01	; 1
     97a:	02 80       	ldd	r0, Z+2	; 0x02
     97c:	f3 81       	ldd	r31, Z+3	; 0x03
     97e:	e0 2d       	mov	r30, r0
     980:	cd 01       	movw	r24, r26
     982:	09 95       	icall
     984:	0f 5f       	subi	r16, 0xFF	; 255
     986:	1f 4f       	sbci	r17, 0xFF	; 255
     988:	d4 cf       	rjmp	.-88     	; 0x932 <_ZN22BLELocalCharacteristicD1Ev+0x16>
     98a:	8e 01       	movw	r16, r28
     98c:	0b 5d       	subi	r16, 0xDB	; 219
     98e:	1f 4f       	sbci	r17, 0xFF	; 255
     990:	c8 01       	movw	r24, r16
     992:	0e 94 bb 03 	call	0x776	; 0x776 <_ZN13BLELinkedListIP17BLELocalAttributeE5clearEv>
     996:	8a 8d       	ldd	r24, Y+26	; 0x1a
     998:	9b 8d       	ldd	r25, Y+27	; 0x1b
     99a:	00 97       	sbiw	r24, 0x00	; 0
     99c:	11 f0       	breq	.+4      	; 0x9a2 <_ZN22BLELocalCharacteristicD1Ev+0x86>
     99e:	0e 94 3a 29 	call	0x5274	; 0x5274 <free>
     9a2:	c8 01       	movw	r24, r16
     9a4:	df 91       	pop	r29
     9a6:	cf 91       	pop	r28
     9a8:	1f 91       	pop	r17
     9aa:	0f 91       	pop	r16
     9ac:	0c 94 bb 03 	jmp	0x776	; 0x776 <_ZN13BLELinkedListIP17BLELocalAttributeE5clearEv>

000009b0 <_ZN9GATTClassD1Ev>:
     9b0:	cf 93       	push	r28
     9b2:	df 93       	push	r29
     9b4:	ec 01       	movw	r28, r24
     9b6:	8c e1       	ldi	r24, 0x1C	; 28
     9b8:	9b e9       	ldi	r25, 0x9B	; 155
     9ba:	88 83       	st	Y, r24
     9bc:	99 83       	std	Y+1, r25	; 0x01
     9be:	ce 01       	movw	r24, r28
     9c0:	0e 94 ed 03 	call	0x7da	; 0x7da <_ZN9GATTClass15clearAttributesEv>
     9c4:	ce 01       	movw	r24, r28
     9c6:	80 55       	subi	r24, 0x50	; 80
     9c8:	9f 4f       	sbci	r25, 0xFF	; 255
     9ca:	0e 94 8e 04 	call	0x91c	; 0x91c <_ZN22BLELocalCharacteristicD1Ev>
     9ce:	ce 01       	movw	r24, r28
     9d0:	81 57       	subi	r24, 0x71	; 113
     9d2:	9f 4f       	sbci	r25, 0xFF	; 255
     9d4:	0e 94 22 04 	call	0x844	; 0x844 <_ZN15BLELocalServiceD1Ev>
     9d8:	ce 01       	movw	r24, r28
     9da:	84 5a       	subi	r24, 0xA4	; 164
     9dc:	9f 4f       	sbci	r25, 0xFF	; 255
     9de:	0e 94 8e 04 	call	0x91c	; 0x91c <_ZN22BLELocalCharacteristicD1Ev>
     9e2:	ce 01       	movw	r24, r28
     9e4:	89 96       	adiw	r24, 0x29	; 41
     9e6:	0e 94 8e 04 	call	0x91c	; 0x91c <_ZN22BLELocalCharacteristicD1Ev>
     9ea:	ce 01       	movw	r24, r28
     9ec:	08 96       	adiw	r24, 0x08	; 8
     9ee:	0e 94 22 04 	call	0x844	; 0x844 <_ZN15BLELocalServiceD1Ev>
     9f2:	ce 01       	movw	r24, r28
     9f4:	02 96       	adiw	r24, 0x02	; 2
     9f6:	df 91       	pop	r29
     9f8:	cf 91       	pop	r28
     9fa:	0c 94 bb 03 	jmp	0x776	; 0x776 <_ZN13BLELinkedListIP17BLELocalAttributeE5clearEv>

000009fe <_ZN9GATTClassD0Ev>:
     9fe:	cf 93       	push	r28
     a00:	df 93       	push	r29
     a02:	ec 01       	movw	r28, r24
     a04:	0e 94 d8 04 	call	0x9b0	; 0x9b0 <_ZN9GATTClassD1Ev>
     a08:	ce 01       	movw	r24, r28
     a0a:	df 91       	pop	r29
     a0c:	cf 91       	pop	r28
     a0e:	0c 94 3a 29 	jmp	0x5274	; 0x5274 <free>

00000a12 <_ZN22BLELocalCharacteristicD0Ev>:
     a12:	cf 93       	push	r28
     a14:	df 93       	push	r29
     a16:	ec 01       	movw	r28, r24
     a18:	0e 94 8e 04 	call	0x91c	; 0x91c <_ZN22BLELocalCharacteristicD1Ev>
     a1c:	ce 01       	movw	r24, r28
     a1e:	df 91       	pop	r29
     a20:	cf 91       	pop	r28
     a22:	0c 94 3a 29 	jmp	0x5274	; 0x5274 <free>

00000a26 <_ZN9BLEDeviceD0Ev>:
     a26:	0c 94 3a 29 	jmp	0x5274	; 0x5274 <free>

00000a2a <_ZN17BLECharacteristicD0Ev>:
     a2a:	cf 93       	push	r28
     a2c:	df 93       	push	r29
     a2e:	ec 01       	movw	r28, r24
     a30:	0e 94 10 02 	call	0x420	; 0x420 <_ZN17BLECharacteristicD1Ev>
     a34:	ce 01       	movw	r24, r28
     a36:	df 91       	pop	r29
     a38:	cf 91       	pop	r28
     a3a:	0c 94 3a 29 	jmp	0x5274	; 0x5274 <free>

00000a3e <_ZNK8ATTClass16connectionHandleEhPKh.constprop.84>:
     a3e:	cf 92       	push	r12
     a40:	df 92       	push	r13
     a42:	ff 92       	push	r15
     a44:	0f 93       	push	r16
     a46:	1f 93       	push	r17
     a48:	cf 93       	push	r28
     a4a:	df 93       	push	r29
     a4c:	f8 2e       	mov	r15, r24
     a4e:	6b 01       	movw	r12, r22
     a50:	06 ee       	ldi	r16, 0xE6	; 230
     a52:	1a e2       	ldi	r17, 0x2A	; 42
     a54:	d0 e0       	ldi	r29, 0x00	; 0
     a56:	c0 e0       	ldi	r28, 0x00	; 0
     a58:	f8 01       	movw	r30, r16
     a5a:	83 85       	ldd	r24, Z+11	; 0x0b
     a5c:	8f 11       	cpse	r24, r15
     a5e:	1b c0       	rjmp	.+54     	; 0xa96 <_ZNK8ATTClass16connectionHandleEhPKh.constprop.84+0x58>
     a60:	46 e0       	ldi	r20, 0x06	; 6
     a62:	50 e0       	ldi	r21, 0x00	; 0
     a64:	b6 01       	movw	r22, r12
     a66:	c8 01       	movw	r24, r16
     a68:	0c 96       	adiw	r24, 0x0c	; 12
     a6a:	0e 94 88 2a 	call	0x5510	; 0x5510 <memcmp>
     a6e:	89 2b       	or	r24, r25
     a70:	91 f4       	brne	.+36     	; 0xa96 <_ZNK8ATTClass16connectionHandleEhPKh.constprop.84+0x58>
     a72:	8e e0       	ldi	r24, 0x0E	; 14
     a74:	8c 9f       	mul	r24, r28
     a76:	f0 01       	movw	r30, r0
     a78:	8d 9f       	mul	r24, r29
     a7a:	f0 0d       	add	r31, r0
     a7c:	11 24       	eor	r1, r1
     a7e:	ea 51       	subi	r30, 0x1A	; 26
     a80:	f5 4d       	sbci	r31, 0xD5	; 213
     a82:	80 85       	ldd	r24, Z+8	; 0x08
     a84:	91 85       	ldd	r25, Z+9	; 0x09
     a86:	df 91       	pop	r29
     a88:	cf 91       	pop	r28
     a8a:	1f 91       	pop	r17
     a8c:	0f 91       	pop	r16
     a8e:	ff 90       	pop	r15
     a90:	df 90       	pop	r13
     a92:	cf 90       	pop	r12
     a94:	08 95       	ret
     a96:	21 96       	adiw	r28, 0x01	; 1
     a98:	02 5f       	subi	r16, 0xF2	; 242
     a9a:	1f 4f       	sbci	r17, 0xFF	; 255
     a9c:	c3 30       	cpi	r28, 0x03	; 3
     a9e:	d1 05       	cpc	r29, r1
     aa0:	d9 f6       	brne	.-74     	; 0xa58 <_ZNK8ATTClass16connectionHandleEhPKh.constprop.84+0x1a>
     aa2:	8f ef       	ldi	r24, 0xFF	; 255
     aa4:	9f ef       	ldi	r25, 0xFF	; 255
     aa6:	ef cf       	rjmp	.-34     	; 0xa86 <_ZNK8ATTClass16connectionHandleEhPKh.constprop.84+0x48>

00000aa8 <_ZNK9BLEDeviceneERKS_>:
     aa8:	fc 01       	movw	r30, r24
     aaa:	32 81       	ldd	r19, Z+2	; 0x02
     aac:	fb 01       	movw	r30, r22
     aae:	22 81       	ldd	r18, Z+2	; 0x02
     ab0:	32 13       	cpse	r19, r18
     ab2:	0d c0       	rjmp	.+26     	; 0xace <_ZNK9BLEDeviceneERKS_+0x26>
     ab4:	6d 5f       	subi	r22, 0xFD	; 253
     ab6:	7f 4f       	sbci	r23, 0xFF	; 255
     ab8:	46 e0       	ldi	r20, 0x06	; 6
     aba:	50 e0       	ldi	r21, 0x00	; 0
     abc:	03 96       	adiw	r24, 0x03	; 3
     abe:	0e 94 88 2a 	call	0x5510	; 0x5510 <memcmp>
     ac2:	21 e0       	ldi	r18, 0x01	; 1
     ac4:	89 2b       	or	r24, r25
     ac6:	09 f4       	brne	.+2      	; 0xaca <_ZNK9BLEDeviceneERKS_+0x22>
     ac8:	20 e0       	ldi	r18, 0x00	; 0
     aca:	82 2f       	mov	r24, r18
     acc:	08 95       	ret
     ace:	21 e0       	ldi	r18, 0x01	; 1
     ad0:	fc cf       	rjmp	.-8      	; 0xaca <_ZNK9BLEDeviceneERKS_+0x22>

00000ad2 <_ZNK9BLEDeviceeqERKS_>:
     ad2:	fc 01       	movw	r30, r24
     ad4:	32 81       	ldd	r19, Z+2	; 0x02
     ad6:	fb 01       	movw	r30, r22
     ad8:	22 81       	ldd	r18, Z+2	; 0x02
     ada:	32 13       	cpse	r19, r18
     adc:	0a c0       	rjmp	.+20     	; 0xaf2 <_ZNK9BLEDeviceeqERKS_+0x20>
     ade:	6d 5f       	subi	r22, 0xFD	; 253
     ae0:	7f 4f       	sbci	r23, 0xFF	; 255
     ae2:	46 e0       	ldi	r20, 0x06	; 6
     ae4:	50 e0       	ldi	r21, 0x00	; 0
     ae6:	03 96       	adiw	r24, 0x03	; 3
     ae8:	0e 94 88 2a 	call	0x5510	; 0x5510 <memcmp>
     aec:	21 e0       	ldi	r18, 0x01	; 1
     aee:	89 2b       	or	r24, r25
     af0:	09 f0       	breq	.+2      	; 0xaf4 <_ZNK9BLEDeviceeqERKS_+0x22>
     af2:	20 e0       	ldi	r18, 0x00	; 0
     af4:	82 2f       	mov	r24, r18
     af6:	08 95       	ret

00000af8 <_ZNK9BLEDevicecvbEv>:
     af8:	cf 93       	push	r28
     afa:	df 93       	push	r29
     afc:	cd b7       	in	r28, 0x3d	; 61
     afe:	de b7       	in	r29, 0x3e	; 62
     b00:	26 97       	sbiw	r28, 0x06	; 6
     b02:	cd bf       	out	0x3d, r28	; 61
     b04:	de bf       	out	0x3e, r29	; 62
     b06:	be 01       	movw	r22, r28
     b08:	6f 5f       	subi	r22, 0xFF	; 255
     b0a:	7f 4f       	sbci	r23, 0xFF	; 255
     b0c:	26 e0       	ldi	r18, 0x06	; 6
     b0e:	fb 01       	movw	r30, r22
     b10:	11 92       	st	Z+, r1
     b12:	2a 95       	dec	r18
     b14:	e9 f7       	brne	.-6      	; 0xb10 <_ZNK9BLEDevicecvbEv+0x18>
     b16:	46 e0       	ldi	r20, 0x06	; 6
     b18:	50 e0       	ldi	r21, 0x00	; 0
     b1a:	03 96       	adiw	r24, 0x03	; 3
     b1c:	0e 94 88 2a 	call	0x5510	; 0x5510 <memcmp>
     b20:	21 e0       	ldi	r18, 0x01	; 1
     b22:	89 2b       	or	r24, r25
     b24:	09 f4       	brne	.+2      	; 0xb28 <_ZNK9BLEDevicecvbEv+0x30>
     b26:	20 e0       	ldi	r18, 0x00	; 0
     b28:	82 2f       	mov	r24, r18
     b2a:	26 96       	adiw	r28, 0x06	; 6
     b2c:	cd bf       	out	0x3d, r28	; 61
     b2e:	de bf       	out	0x3e, r29	; 62
     b30:	df 91       	pop	r29
     b32:	cf 91       	pop	r28
     b34:	08 95       	ret

00000b36 <_ZN9BLEDeviceC1EhPh>:
     b36:	dc 01       	movw	r26, r24
     b38:	8a ec       	ldi	r24, 0xCA	; 202
     b3a:	9a e9       	ldi	r25, 0x9A	; 154
     b3c:	8d 93       	st	X+, r24
     b3e:	9c 93       	st	X, r25
     b40:	11 97       	sbiw	r26, 0x01	; 1
     b42:	12 96       	adiw	r26, 0x02	; 2
     b44:	6c 93       	st	X, r22
     b46:	12 97       	sbiw	r26, 0x02	; 2
     b48:	19 96       	adiw	r26, 0x09	; 9
     b4a:	1c 92       	st	X, r1
     b4c:	19 97       	sbiw	r26, 0x09	; 9
     b4e:	1a 96       	adiw	r26, 0x0a	; 10
     b50:	1c 92       	st	X, r1
     b52:	1a 97       	sbiw	r26, 0x0a	; 10
     b54:	fd 01       	movw	r30, r26
     b56:	e7 5b       	subi	r30, 0xB7	; 183
     b58:	ff 4f       	sbci	r31, 0xFF	; 255
     b5a:	8f e7       	ldi	r24, 0x7F	; 127
     b5c:	80 83       	st	Z, r24
     b5e:	13 96       	adiw	r26, 0x03	; 3
     b60:	86 e0       	ldi	r24, 0x06	; 6
     b62:	fa 01       	movw	r30, r20
     b64:	01 90       	ld	r0, Z+
     b66:	0d 92       	st	X+, r0
     b68:	8a 95       	dec	r24
     b6a:	e1 f7       	brne	.-8      	; 0xb64 <_ZN9BLEDeviceC1EhPh+0x2e>
     b6c:	08 95       	ret

00000b6e <_ZN23BLERemoteCharacteristic10writeValueE9BLEDevicePKhi>:
     b6e:	cf 92       	push	r12
     b70:	df 92       	push	r13
     b72:	ef 92       	push	r14
     b74:	ff 92       	push	r15
     b76:	0f 93       	push	r16
     b78:	1f 93       	push	r17
     b7a:	cf 93       	push	r28
     b7c:	df 93       	push	r29
     b7e:	cd b7       	in	r28, 0x3d	; 61
     b80:	de b7       	in	r29, 0x3e	; 62
     b82:	c0 55       	subi	r28, 0x50	; 80
     b84:	d1 09       	sbc	r29, r1
     b86:	cd bf       	out	0x3d, r28	; 61
     b88:	de bf       	out	0x3e, r29	; 62
     b8a:	8c 01       	movw	r16, r24
     b8c:	7b 01       	movw	r14, r22
     b8e:	6a 01       	movw	r12, r20
     b90:	fc 01       	movw	r30, r24
     b92:	23 8b       	std	Z+19, r18	; 0x13
     b94:	34 8b       	std	Z+20, r19	; 0x14
     b96:	b9 01       	movw	r22, r18
     b98:	81 89       	ldd	r24, Z+17	; 0x11
     b9a:	92 89       	ldd	r25, Z+18	; 0x12
     b9c:	0e 94 c3 29 	call	0x5386	; 0x5386 <realloc>
     ba0:	f8 01       	movw	r30, r16
     ba2:	81 8b       	std	Z+17, r24	; 0x11
     ba4:	92 8b       	std	Z+18, r25	; 0x12
     ba6:	00 97       	sbiw	r24, 0x00	; 0
     ba8:	79 f4       	brne	.+30     	; 0xbc8 <_ZN23BLERemoteCharacteristic10writeValueE9BLEDevicePKhi+0x5a>
     baa:	13 8a       	std	Z+19, r1	; 0x13
     bac:	14 8a       	std	Z+20, r1	; 0x14
     bae:	c0 5b       	subi	r28, 0xB0	; 176
     bb0:	df 4f       	sbci	r29, 0xFF	; 255
     bb2:	cd bf       	out	0x3d, r28	; 61
     bb4:	de bf       	out	0x3e, r29	; 62
     bb6:	df 91       	pop	r29
     bb8:	cf 91       	pop	r28
     bba:	1f 91       	pop	r17
     bbc:	0f 91       	pop	r16
     bbe:	ff 90       	pop	r15
     bc0:	ef 90       	pop	r14
     bc2:	df 90       	pop	r13
     bc4:	cf 90       	pop	r12
     bc6:	08 95       	ret
     bc8:	21 e0       	ldi	r18, 0x01	; 1
     bca:	25 8b       	std	Z+21, r18	; 0x15
     bcc:	16 8a       	std	Z+22, r1	; 0x16
     bce:	43 89       	ldd	r20, Z+19	; 0x13
     bd0:	54 89       	ldd	r21, Z+20	; 0x14
     bd2:	b6 01       	movw	r22, r12
     bd4:	0e 94 95 2a 	call	0x552a	; 0x552a <memcpy>
     bd8:	f8 01       	movw	r30, r16
     bda:	c5 8c       	ldd	r12, Z+29	; 0x1d
     bdc:	d6 8c       	ldd	r13, Z+30	; 0x1e
     bde:	c1 14       	cp	r12, r1
     be0:	d1 04       	cpc	r13, r1
     be2:	29 f3       	breq	.-54     	; 0xbae <_ZN23BLERemoteCharacteristic10writeValueE9BLEDevicePKhi+0x40>
     be4:	84 ee       	ldi	r24, 0xE4	; 228
     be6:	9a e9       	ldi	r25, 0x9A	; 154
     be8:	2d 96       	adiw	r28, 0x0d	; 13
     bea:	8e af       	std	Y+62, r24	; 0x3e
     bec:	9f af       	std	Y+63, r25	; 0x3f
     bee:	2d 97       	sbiw	r28, 0x0d	; 13
     bf0:	2f 96       	adiw	r28, 0x0f	; 15
     bf2:	1e ae       	std	Y+62, r1	; 0x3e
     bf4:	1f ae       	std	Y+63, r1	; 0x3f
     bf6:	2f 97       	sbiw	r28, 0x0f	; 15
     bf8:	61 96       	adiw	r28, 0x11	; 17
     bfa:	0e af       	std	Y+62, r16	; 0x3e
     bfc:	1f af       	std	Y+63, r17	; 0x3f
     bfe:	61 97       	sbiw	r28, 0x11	; 17
     c00:	01 2b       	or	r16, r17
     c02:	29 f0       	breq	.+10     	; 0xc0e <_ZN23BLERemoteCharacteristic10writeValueE9BLEDevicePKhi+0xa0>
     c04:	80 85       	ldd	r24, Z+8	; 0x08
     c06:	91 85       	ldd	r25, Z+9	; 0x09
     c08:	01 96       	adiw	r24, 0x01	; 1
     c0a:	80 87       	std	Z+8, r24	; 0x08
     c0c:	91 87       	std	Z+9, r25	; 0x09
     c0e:	b7 01       	movw	r22, r14
     c10:	ce 01       	movw	r24, r28
     c12:	01 96       	adiw	r24, 0x01	; 1
     c14:	0e 94 e4 01 	call	0x3c8	; 0x3c8 <_ZN9BLEDeviceC1ERKS_>
     c18:	be 01       	movw	r22, r28
     c1a:	65 5b       	subi	r22, 0xB5	; 181
     c1c:	7f 4f       	sbci	r23, 0xFF	; 255
     c1e:	ce 01       	movw	r24, r28
     c20:	01 96       	adiw	r24, 0x01	; 1
     c22:	f6 01       	movw	r30, r12
     c24:	09 95       	icall
     c26:	ce 01       	movw	r24, r28
     c28:	85 5b       	subi	r24, 0xB5	; 181
     c2a:	9f 4f       	sbci	r25, 0xFF	; 255
     c2c:	0e 94 10 02 	call	0x420	; 0x420 <_ZN17BLECharacteristicD1Ev>
     c30:	be cf       	rjmp	.-132    	; 0xbae <_ZN23BLERemoteCharacteristic10writeValueE9BLEDevicePKhi+0x40>

00000c32 <_ZN6String7reserveEj>:
     c32:	0f 93       	push	r16
     c34:	1f 93       	push	r17
     c36:	cf 93       	push	r28
     c38:	df 93       	push	r29
     c3a:	ec 01       	movw	r28, r24
     c3c:	88 81       	ld	r24, Y
     c3e:	99 81       	ldd	r25, Y+1	; 0x01
     c40:	00 97       	sbiw	r24, 0x00	; 0
     c42:	59 f0       	breq	.+22     	; 0xc5a <_ZN6String7reserveEj+0x28>
     c44:	2a 81       	ldd	r18, Y+2	; 0x02
     c46:	3b 81       	ldd	r19, Y+3	; 0x03
     c48:	26 17       	cp	r18, r22
     c4a:	37 07       	cpc	r19, r23
     c4c:	30 f0       	brcs	.+12     	; 0xc5a <_ZN6String7reserveEj+0x28>
     c4e:	81 e0       	ldi	r24, 0x01	; 1
     c50:	df 91       	pop	r29
     c52:	cf 91       	pop	r28
     c54:	1f 91       	pop	r17
     c56:	0f 91       	pop	r16
     c58:	08 95       	ret
     c5a:	8b 01       	movw	r16, r22
     c5c:	6f 5f       	subi	r22, 0xFF	; 255
     c5e:	7f 4f       	sbci	r23, 0xFF	; 255
     c60:	0e 94 c3 29 	call	0x5386	; 0x5386 <realloc>
     c64:	00 97       	sbiw	r24, 0x00	; 0
     c66:	59 f0       	breq	.+22     	; 0xc7e <_ZN6String7reserveEj+0x4c>
     c68:	88 83       	st	Y, r24
     c6a:	99 83       	std	Y+1, r25	; 0x01
     c6c:	0a 83       	std	Y+2, r16	; 0x02
     c6e:	1b 83       	std	Y+3, r17	; 0x03
     c70:	2c 81       	ldd	r18, Y+4	; 0x04
     c72:	3d 81       	ldd	r19, Y+5	; 0x05
     c74:	23 2b       	or	r18, r19
     c76:	59 f7       	brne	.-42     	; 0xc4e <_ZN6String7reserveEj+0x1c>
     c78:	fc 01       	movw	r30, r24
     c7a:	10 82       	st	Z, r1
     c7c:	e8 cf       	rjmp	.-48     	; 0xc4e <_ZN6String7reserveEj+0x1c>
     c7e:	80 e0       	ldi	r24, 0x00	; 0
     c80:	e7 cf       	rjmp	.-50     	; 0xc50 <_ZN6String7reserveEj+0x1e>

00000c82 <_ZN21HCIUartTransportClass4waitEm>:
     c82:	8f 92       	push	r8
     c84:	9f 92       	push	r9
     c86:	af 92       	push	r10
     c88:	bf 92       	push	r11
     c8a:	cf 92       	push	r12
     c8c:	df 92       	push	r13
     c8e:	ef 92       	push	r14
     c90:	ff 92       	push	r15
     c92:	cf 93       	push	r28
     c94:	df 93       	push	r29
     c96:	ec 01       	movw	r28, r24
     c98:	4a 01       	movw	r8, r20
     c9a:	5b 01       	movw	r10, r22
     c9c:	c1 2c       	mov	r12, r1
     c9e:	d1 2c       	mov	r13, r1
     ca0:	76 01       	movw	r14, r12
     ca2:	c8 14       	cp	r12, r8
     ca4:	d9 04       	cpc	r13, r9
     ca6:	ea 04       	cpc	r14, r10
     ca8:	fb 04       	cpc	r15, r11
     caa:	a9 f0       	breq	.+42     	; 0xcd6 <_ZN21HCIUartTransportClass4waitEm+0x54>
     cac:	8f e9       	ldi	r24, 0x9F	; 159
     cae:	9f e0       	ldi	r25, 0x0F	; 15
     cb0:	01 97       	sbiw	r24, 0x01	; 1
     cb2:	f1 f7       	brne	.-4      	; 0xcb0 <_ZN21HCIUartTransportClass4waitEm+0x2e>
     cb4:	00 c0       	rjmp	.+0      	; 0xcb6 <_ZN21HCIUartTransportClass4waitEm+0x34>
     cb6:	00 00       	nop
     cb8:	e8 81       	ld	r30, Y
     cba:	f9 81       	ldd	r31, Y+1	; 0x01
     cbc:	06 80       	ldd	r0, Z+6	; 0x06
     cbe:	f7 81       	ldd	r31, Z+7	; 0x07
     cc0:	e0 2d       	mov	r30, r0
     cc2:	ce 01       	movw	r24, r28
     cc4:	09 95       	icall
     cc6:	89 2b       	or	r24, r25
     cc8:	31 f4       	brne	.+12     	; 0xcd6 <_ZN21HCIUartTransportClass4waitEm+0x54>
     cca:	9f ef       	ldi	r25, 0xFF	; 255
     ccc:	c9 1a       	sub	r12, r25
     cce:	d9 0a       	sbc	r13, r25
     cd0:	e9 0a       	sbc	r14, r25
     cd2:	f9 0a       	sbc	r15, r25
     cd4:	e6 cf       	rjmp	.-52     	; 0xca2 <_ZN21HCIUartTransportClass4waitEm+0x20>
     cd6:	df 91       	pop	r29
     cd8:	cf 91       	pop	r28
     cda:	ff 90       	pop	r15
     cdc:	ef 90       	pop	r14
     cde:	df 90       	pop	r13
     ce0:	cf 90       	pop	r12
     ce2:	bf 90       	pop	r11
     ce4:	af 90       	pop	r10
     ce6:	9f 90       	pop	r9
     ce8:	8f 90       	pop	r8
     cea:	08 95       	ret

00000cec <_ZN13BLELinkedListIP17BLELocalAttributeE3addES1_.constprop.15>:
     cec:	cf 93       	push	r28
     cee:	df 93       	push	r29
     cf0:	ec 01       	movw	r28, r24
     cf2:	84 e0       	ldi	r24, 0x04	; 4
     cf4:	90 e0       	ldi	r25, 0x00	; 0
     cf6:	0e 94 9e 28 	call	0x513c	; 0x513c <malloc>
     cfa:	fc 01       	movw	r30, r24
     cfc:	12 82       	std	Z+2, r1	; 0x02
     cfe:	13 82       	std	Z+3, r1	; 0x03
     d00:	c0 83       	st	Z, r28
     d02:	d1 83       	std	Z+1, r29	; 0x01
     d04:	20 91 5c 2b 	lds	r18, 0x2B5C	; 0x802b5c <GATT+0x4>
     d08:	30 91 5d 2b 	lds	r19, 0x2B5D	; 0x802b5d <GATT+0x5>
     d0c:	23 2b       	or	r18, r19
     d0e:	a1 f4       	brne	.+40     	; 0xd38 <_ZN13BLELinkedListIP17BLELocalAttributeE3addES1_.constprop.15+0x4c>
     d10:	80 93 5c 2b 	sts	0x2B5C, r24	; 0x802b5c <GATT+0x4>
     d14:	90 93 5d 2b 	sts	0x2B5D, r25	; 0x802b5d <GATT+0x5>
     d18:	80 93 5e 2b 	sts	0x2B5E, r24	; 0x802b5e <GATT+0x6>
     d1c:	90 93 5f 2b 	sts	0x2B5F, r25	; 0x802b5f <GATT+0x7>
     d20:	80 91 5a 2b 	lds	r24, 0x2B5A	; 0x802b5a <GATT+0x2>
     d24:	90 91 5b 2b 	lds	r25, 0x2B5B	; 0x802b5b <GATT+0x3>
     d28:	01 96       	adiw	r24, 0x01	; 1
     d2a:	80 93 5a 2b 	sts	0x2B5A, r24	; 0x802b5a <GATT+0x2>
     d2e:	90 93 5b 2b 	sts	0x2B5B, r25	; 0x802b5b <GATT+0x3>
     d32:	df 91       	pop	r29
     d34:	cf 91       	pop	r28
     d36:	08 95       	ret
     d38:	e0 91 5e 2b 	lds	r30, 0x2B5E	; 0x802b5e <GATT+0x6>
     d3c:	f0 91 5f 2b 	lds	r31, 0x2B5F	; 0x802b5f <GATT+0x7>
     d40:	82 83       	std	Z+2, r24	; 0x02
     d42:	93 83       	std	Z+3, r25	; 0x03
     d44:	e9 cf       	rjmp	.-46     	; 0xd18 <_ZN13BLELinkedListIP17BLELocalAttributeE3addES1_.constprop.15+0x2c>

00000d46 <_ZN9GATTClass10addServiceEP15BLELocalService.constprop.14>:
     d46:	8f 92       	push	r8
     d48:	9f 92       	push	r9
     d4a:	af 92       	push	r10
     d4c:	bf 92       	push	r11
     d4e:	cf 92       	push	r12
     d50:	df 92       	push	r13
     d52:	ef 92       	push	r14
     d54:	ff 92       	push	r15
     d56:	0f 93       	push	r16
     d58:	1f 93       	push	r17
     d5a:	cf 93       	push	r28
     d5c:	df 93       	push	r29
     d5e:	ec 01       	movw	r28, r24
     d60:	8d 89       	ldd	r24, Y+21	; 0x15
     d62:	9e 89       	ldd	r25, Y+22	; 0x16
     d64:	01 96       	adiw	r24, 0x01	; 1
     d66:	8d 8b       	std	Y+21, r24	; 0x15
     d68:	9e 8b       	std	Y+22, r25	; 0x16
     d6a:	ce 01       	movw	r24, r28
     d6c:	0e 94 76 06 	call	0xcec	; 0xcec <_ZN13BLELinkedListIP17BLELocalAttributeE3addES1_.constprop.15>
     d70:	a0 90 5a 2b 	lds	r10, 0x2B5A	; 0x802b5a <GATT+0x2>
     d74:	b0 90 5b 2b 	lds	r11, 0x2B5B	; 0x802b5b <GATT+0x3>
     d78:	f1 2c       	mov	r15, r1
     d7a:	e1 2c       	mov	r14, r1
     d7c:	8b 8d       	ldd	r24, Y+27	; 0x1b
     d7e:	9c 8d       	ldd	r25, Y+28	; 0x1c
     d80:	e8 16       	cp	r14, r24
     d82:	f9 06       	cpc	r15, r25
     d84:	08 f0       	brcs	.+2      	; 0xd88 <_ZN9GATTClass10addServiceEP15BLELocalService.constprop.14+0x42>
     d86:	58 c0       	rjmp	.+176    	; 0xe38 <_ZN9GATTClass10addServiceEP15BLELocalService.constprop.14+0xf2>
     d88:	ed 8d       	ldd	r30, Y+29	; 0x1d
     d8a:	fe 8d       	ldd	r31, Y+30	; 0x1e
     d8c:	90 e0       	ldi	r25, 0x00	; 0
     d8e:	80 e0       	ldi	r24, 0x00	; 0
     d90:	e8 16       	cp	r14, r24
     d92:	f9 06       	cpc	r15, r25
     d94:	29 f0       	breq	.+10     	; 0xda0 <_ZN9GATTClass10addServiceEP15BLELocalService.constprop.14+0x5a>
     d96:	02 80       	ldd	r0, Z+2	; 0x02
     d98:	f3 81       	ldd	r31, Z+3	; 0x03
     d9a:	e0 2d       	mov	r30, r0
     d9c:	01 96       	adiw	r24, 0x01	; 1
     d9e:	f8 cf       	rjmp	.-16     	; 0xd90 <_ZN9GATTClass10addServiceEP15BLELocalService.constprop.14+0x4a>
     da0:	00 81       	ld	r16, Z
     da2:	11 81       	ldd	r17, Z+1	; 0x01
     da4:	d8 01       	movw	r26, r16
     da6:	55 96       	adiw	r26, 0x15	; 21
     da8:	8d 91       	ld	r24, X+
     daa:	9c 91       	ld	r25, X
     dac:	56 97       	sbiw	r26, 0x16	; 22
     dae:	01 96       	adiw	r24, 0x01	; 1
     db0:	55 96       	adiw	r26, 0x15	; 21
     db2:	8d 93       	st	X+, r24
     db4:	9c 93       	st	X, r25
     db6:	56 97       	sbiw	r26, 0x16	; 22
     db8:	c8 01       	movw	r24, r16
     dba:	0e 94 76 06 	call	0xcec	; 0xcec <_ZN13BLELinkedListIP17BLELocalAttributeE3addES1_.constprop.15>
     dbe:	80 91 5a 2b 	lds	r24, 0x2B5A	; 0x802b5a <GATT+0x2>
     dc2:	90 91 5b 2b 	lds	r25, 0x2B5B	; 0x802b5b <GATT+0x3>
     dc6:	f8 01       	movw	r30, r16
     dc8:	87 8f       	std	Z+31, r24	; 0x1f
     dca:	90 a3       	std	Z+32, r25	; 0x20
     dcc:	c8 01       	movw	r24, r16
     dce:	0e 94 76 06 	call	0xcec	; 0xcec <_ZN13BLELinkedListIP17BLELocalAttributeE3addES1_.constprop.15>
     dd2:	d1 2c       	mov	r13, r1
     dd4:	c1 2c       	mov	r12, r1
     dd6:	d8 01       	movw	r26, r16
     dd8:	95 96       	adiw	r26, 0x25	; 37
     dda:	8d 91       	ld	r24, X+
     ddc:	9c 91       	ld	r25, X
     dde:	96 97       	sbiw	r26, 0x26	; 38
     de0:	c8 16       	cp	r12, r24
     de2:	d9 06       	cpc	r13, r25
     de4:	28 f5       	brcc	.+74     	; 0xe30 <_ZN9GATTClass10addServiceEP15BLELocalService.constprop.14+0xea>
     de6:	97 96       	adiw	r26, 0x27	; 39
     de8:	ed 91       	ld	r30, X+
     dea:	fc 91       	ld	r31, X
     dec:	90 e0       	ldi	r25, 0x00	; 0
     dee:	80 e0       	ldi	r24, 0x00	; 0
     df0:	c8 16       	cp	r12, r24
     df2:	d9 06       	cpc	r13, r25
     df4:	29 f0       	breq	.+10     	; 0xe00 <_ZN9GATTClass10addServiceEP15BLELocalService.constprop.14+0xba>
     df6:	02 80       	ldd	r0, Z+2	; 0x02
     df8:	f3 81       	ldd	r31, Z+3	; 0x03
     dfa:	e0 2d       	mov	r30, r0
     dfc:	01 96       	adiw	r24, 0x01	; 1
     dfe:	f8 cf       	rjmp	.-16     	; 0xdf0 <_ZN9GATTClass10addServiceEP15BLELocalService.constprop.14+0xaa>
     e00:	80 80       	ld	r8, Z
     e02:	91 80       	ldd	r9, Z+1	; 0x01
     e04:	f4 01       	movw	r30, r8
     e06:	85 89       	ldd	r24, Z+21	; 0x15
     e08:	96 89       	ldd	r25, Z+22	; 0x16
     e0a:	01 96       	adiw	r24, 0x01	; 1
     e0c:	85 8b       	std	Z+21, r24	; 0x15
     e0e:	96 8b       	std	Z+22, r25	; 0x16
     e10:	c4 01       	movw	r24, r8
     e12:	0e 94 76 06 	call	0xcec	; 0xcec <_ZN13BLELinkedListIP17BLELocalAttributeE3addES1_.constprop.15>
     e16:	80 91 5a 2b 	lds	r24, 0x2B5A	; 0x802b5a <GATT+0x2>
     e1a:	90 91 5b 2b 	lds	r25, 0x2B5B	; 0x802b5b <GATT+0x3>
     e1e:	d4 01       	movw	r26, r8
     e20:	5b 96       	adiw	r26, 0x1b	; 27
     e22:	8d 93       	st	X+, r24
     e24:	9c 93       	st	X, r25
     e26:	5c 97       	sbiw	r26, 0x1c	; 28
     e28:	bf ef       	ldi	r27, 0xFF	; 255
     e2a:	cb 1a       	sub	r12, r27
     e2c:	db 0a       	sbc	r13, r27
     e2e:	d3 cf       	rjmp	.-90     	; 0xdd6 <_ZN9GATTClass10addServiceEP15BLELocalService.constprop.14+0x90>
     e30:	ef ef       	ldi	r30, 0xFF	; 255
     e32:	ee 1a       	sub	r14, r30
     e34:	fe 0a       	sbc	r15, r30
     e36:	a2 cf       	rjmp	.-188    	; 0xd7c <_ZN9GATTClass10addServiceEP15BLELocalService.constprop.14+0x36>
     e38:	80 91 5a 2b 	lds	r24, 0x2B5A	; 0x802b5a <GATT+0x2>
     e3c:	90 91 5b 2b 	lds	r25, 0x2B5B	; 0x802b5b <GATT+0x3>
     e40:	af 8a       	std	Y+23, r10	; 0x17
     e42:	b8 8e       	std	Y+24, r11	; 0x18
     e44:	89 8f       	std	Y+25, r24	; 0x19
     e46:	9a 8f       	std	Y+26, r25	; 0x1a
     e48:	df 91       	pop	r29
     e4a:	cf 91       	pop	r28
     e4c:	1f 91       	pop	r17
     e4e:	0f 91       	pop	r16
     e50:	ff 90       	pop	r15
     e52:	ef 90       	pop	r14
     e54:	df 90       	pop	r13
     e56:	cf 90       	pop	r12
     e58:	bf 90       	pop	r11
     e5a:	af 90       	pop	r10
     e5c:	9f 90       	pop	r9
     e5e:	8f 90       	pop	r8
     e60:	08 95       	ret

00000e62 <_ZN7BLEUuidC1EPKc>:
     e62:	cf 92       	push	r12
     e64:	df 92       	push	r13
     e66:	ef 92       	push	r14
     e68:	ff 92       	push	r15
     e6a:	0f 93       	push	r16
     e6c:	1f 93       	push	r17
     e6e:	cf 93       	push	r28
     e70:	df 93       	push	r29
     e72:	00 d0       	rcall	.+0      	; 0xe74 <_ZN7BLEUuidC1EPKc+0x12>
     e74:	1f 92       	push	r1
     e76:	cd b7       	in	r28, 0x3d	; 61
     e78:	de b7       	in	r29, 0x3e	; 62
     e7a:	7c 01       	movw	r14, r24
     e7c:	6b 01       	movw	r12, r22
     e7e:	fc 01       	movw	r30, r24
     e80:	61 93       	st	Z+, r22
     e82:	71 93       	st	Z+, r23
     e84:	1b 82       	std	Y+3, r1	; 0x03
     e86:	80 e1       	ldi	r24, 0x10	; 16
     e88:	df 01       	movw	r26, r30
     e8a:	1d 92       	st	X+, r1
     e8c:	8a 95       	dec	r24
     e8e:	e9 f7       	brne	.-6      	; 0xe8a <_ZN7BLEUuidC1EPKc+0x28>
     e90:	f7 01       	movw	r30, r14
     e92:	12 8a       	std	Z+18, r1	; 0x12
     e94:	db 01       	movw	r26, r22
     e96:	0d 90       	ld	r0, X+
     e98:	00 20       	and	r0, r0
     e9a:	e9 f7       	brne	.-6      	; 0xe96 <_ZN7BLEUuidC1EPKc+0x34>
     e9c:	8d 01       	movw	r16, r26
     e9e:	06 1b       	sub	r16, r22
     ea0:	17 0b       	sbc	r17, r23
     ea2:	02 50       	subi	r16, 0x02	; 2
     ea4:	11 09       	sbc	r17, r1
     ea6:	f7 01       	movw	r30, r14
     ea8:	82 89       	ldd	r24, Z+18	; 0x12
     eaa:	17 fd       	sbrc	r17, 7
     eac:	24 c0       	rjmp	.+72     	; 0xef6 <_ZN7BLEUuidC1EPKc+0x94>
     eae:	80 31       	cpi	r24, 0x10	; 16
     eb0:	90 f5       	brcc	.+100    	; 0xf16 <_ZN7BLEUuidC1EPKc+0xb4>
     eb2:	f6 01       	movw	r30, r12
     eb4:	e0 0f       	add	r30, r16
     eb6:	f1 1f       	adc	r31, r17
     eb8:	80 81       	ld	r24, Z
     eba:	8d 32       	cpi	r24, 0x2D	; 45
     ebc:	29 f4       	brne	.+10     	; 0xec8 <_ZN7BLEUuidC1EPKc+0x66>
     ebe:	0f 5f       	subi	r16, 0xFF	; 255
     ec0:	1f 4f       	sbci	r17, 0xFF	; 255
     ec2:	02 50       	subi	r16, 0x02	; 2
     ec4:	11 09       	sbc	r17, r1
     ec6:	ef cf       	rjmp	.-34     	; 0xea6 <_ZN7BLEUuidC1EPKc+0x44>
     ec8:	31 97       	sbiw	r30, 0x01	; 1
     eca:	90 81       	ld	r25, Z
     ecc:	99 83       	std	Y+1, r25	; 0x01
     ece:	8a 83       	std	Y+2, r24	; 0x02
     ed0:	40 e1       	ldi	r20, 0x10	; 16
     ed2:	50 e0       	ldi	r21, 0x00	; 0
     ed4:	70 e0       	ldi	r23, 0x00	; 0
     ed6:	60 e0       	ldi	r22, 0x00	; 0
     ed8:	ce 01       	movw	r24, r28
     eda:	01 96       	adiw	r24, 0x01	; 1
     edc:	0e 94 bf 26 	call	0x4d7e	; 0x4d7e <strtoul>
     ee0:	d7 01       	movw	r26, r14
     ee2:	52 96       	adiw	r26, 0x12	; 18
     ee4:	8c 91       	ld	r24, X
     ee6:	f7 01       	movw	r30, r14
     ee8:	e8 0f       	add	r30, r24
     eea:	f1 1d       	adc	r31, r1
     eec:	62 83       	std	Z+2, r22	; 0x02
     eee:	8f 5f       	subi	r24, 0xFF	; 255
     ef0:	f7 01       	movw	r30, r14
     ef2:	82 8b       	std	Z+18, r24	; 0x12
     ef4:	e6 cf       	rjmp	.-52     	; 0xec2 <_ZN7BLEUuidC1EPKc+0x60>
     ef6:	83 30       	cpi	r24, 0x03	; 3
     ef8:	70 f4       	brcc	.+28     	; 0xf16 <_ZN7BLEUuidC1EPKc+0xb4>
     efa:	82 e0       	ldi	r24, 0x02	; 2
     efc:	82 8b       	std	Z+18, r24	; 0x12
     efe:	23 96       	adiw	r28, 0x03	; 3
     f00:	cd bf       	out	0x3d, r28	; 61
     f02:	de bf       	out	0x3e, r29	; 62
     f04:	df 91       	pop	r29
     f06:	cf 91       	pop	r28
     f08:	1f 91       	pop	r17
     f0a:	0f 91       	pop	r16
     f0c:	ff 90       	pop	r15
     f0e:	ef 90       	pop	r14
     f10:	df 90       	pop	r13
     f12:	cf 90       	pop	r12
     f14:	08 95       	ret
     f16:	80 e1       	ldi	r24, 0x10	; 16
     f18:	f7 01       	movw	r30, r14
     f1a:	82 8b       	std	Z+18, r24	; 0x12
     f1c:	f0 cf       	rjmp	.-32     	; 0xefe <_ZN7BLEUuidC1EPKc+0x9c>

00000f1e <_ZN5Print5writeEPKc.part.2>:
     f1e:	fb 01       	movw	r30, r22
     f20:	01 90       	ld	r0, Z+
     f22:	00 20       	and	r0, r0
     f24:	e9 f7       	brne	.-6      	; 0xf20 <_ZN5Print5writeEPKc.part.2+0x2>
     f26:	31 97       	sbiw	r30, 0x01	; 1
     f28:	af 01       	movw	r20, r30
     f2a:	46 1b       	sub	r20, r22
     f2c:	57 0b       	sbc	r21, r23
     f2e:	dc 01       	movw	r26, r24
     f30:	ed 91       	ld	r30, X+
     f32:	fc 91       	ld	r31, X
     f34:	02 80       	ldd	r0, Z+2	; 0x02
     f36:	f3 81       	ldd	r31, Z+3	; 0x03
     f38:	e0 2d       	mov	r30, r0
     f3a:	09 94       	ijmp

00000f3c <_ZN5Print11printNumberEmh>:
     f3c:	8f 92       	push	r8
     f3e:	9f 92       	push	r9
     f40:	af 92       	push	r10
     f42:	bf 92       	push	r11
     f44:	ef 92       	push	r14
     f46:	ff 92       	push	r15
     f48:	0f 93       	push	r16
     f4a:	1f 93       	push	r17
     f4c:	cf 93       	push	r28
     f4e:	df 93       	push	r29
     f50:	cd b7       	in	r28, 0x3d	; 61
     f52:	de b7       	in	r29, 0x3e	; 62
     f54:	a1 97       	sbiw	r28, 0x21	; 33
     f56:	cd bf       	out	0x3d, r28	; 61
     f58:	de bf       	out	0x3e, r29	; 62
     f5a:	7c 01       	movw	r14, r24
     f5c:	fa 01       	movw	r30, r20
     f5e:	cb 01       	movw	r24, r22
     f60:	19 a2       	std	Y+33, r1	; 0x21
     f62:	22 30       	cpi	r18, 0x02	; 2
     f64:	08 f4       	brcc	.+2      	; 0xf68 <_ZN5Print11printNumberEmh+0x2c>
     f66:	2a e0       	ldi	r18, 0x0A	; 10
     f68:	8e 01       	movw	r16, r28
     f6a:	0f 5d       	subi	r16, 0xDF	; 223
     f6c:	1f 4f       	sbci	r17, 0xFF	; 255
     f6e:	82 2e       	mov	r8, r18
     f70:	91 2c       	mov	r9, r1
     f72:	b1 2c       	mov	r11, r1
     f74:	a1 2c       	mov	r10, r1
     f76:	bf 01       	movw	r22, r30
     f78:	a5 01       	movw	r20, r10
     f7a:	94 01       	movw	r18, r8
     f7c:	0e 94 f0 27 	call	0x4fe0	; 0x4fe0 <__udivmodsi4>
     f80:	f9 01       	movw	r30, r18
     f82:	ca 01       	movw	r24, r20
     f84:	6a 30       	cpi	r22, 0x0A	; 10
     f86:	f4 f4       	brge	.+60     	; 0xfc4 <_ZN5Print11printNumberEmh+0x88>
     f88:	60 5d       	subi	r22, 0xD0	; 208
     f8a:	d8 01       	movw	r26, r16
     f8c:	6e 93       	st	-X, r22
     f8e:	8d 01       	movw	r16, r26
     f90:	23 2b       	or	r18, r19
     f92:	24 2b       	or	r18, r20
     f94:	25 2b       	or	r18, r21
     f96:	79 f7       	brne	.-34     	; 0xf76 <_ZN5Print11printNumberEmh+0x3a>
     f98:	90 e0       	ldi	r25, 0x00	; 0
     f9a:	80 e0       	ldi	r24, 0x00	; 0
     f9c:	10 97       	sbiw	r26, 0x00	; 0
     f9e:	21 f0       	breq	.+8      	; 0xfa8 <_ZN5Print11printNumberEmh+0x6c>
     fa0:	bd 01       	movw	r22, r26
     fa2:	c7 01       	movw	r24, r14
     fa4:	0e 94 8f 07 	call	0xf1e	; 0xf1e <_ZN5Print5writeEPKc.part.2>
     fa8:	a1 96       	adiw	r28, 0x21	; 33
     faa:	cd bf       	out	0x3d, r28	; 61
     fac:	de bf       	out	0x3e, r29	; 62
     fae:	df 91       	pop	r29
     fb0:	cf 91       	pop	r28
     fb2:	1f 91       	pop	r17
     fb4:	0f 91       	pop	r16
     fb6:	ff 90       	pop	r15
     fb8:	ef 90       	pop	r14
     fba:	bf 90       	pop	r11
     fbc:	af 90       	pop	r10
     fbe:	9f 90       	pop	r9
     fc0:	8f 90       	pop	r8
     fc2:	08 95       	ret
     fc4:	69 5c       	subi	r22, 0xC9	; 201
     fc6:	e1 cf       	rjmp	.-62     	; 0xf8a <_ZN5Print11printNumberEmh+0x4e>

00000fc8 <_ZN8HCIClass7dumpPktEPKchPh.constprop.95>:
     fc8:	ff 92       	push	r15
     fca:	0f 93       	push	r16
     fcc:	1f 93       	push	r17
     fce:	cf 93       	push	r28
     fd0:	df 93       	push	r29
     fd2:	20 91 3d 28 	lds	r18, 0x283D	; 0x80283d <HCI+0x2>
     fd6:	30 91 3e 28 	lds	r19, 0x283E	; 0x80283e <HCI+0x3>
     fda:	21 15       	cp	r18, r1
     fdc:	31 05       	cpc	r19, r1
     fde:	d9 f1       	breq	.+118    	; 0x1056 <_ZN8HCIClass7dumpPktEPKchPh.constprop.95+0x8e>
     fe0:	15 2f       	mov	r17, r21
     fe2:	f4 2e       	mov	r15, r20
     fe4:	06 2f       	mov	r16, r22
     fe6:	bc 01       	movw	r22, r24
     fe8:	c9 01       	movw	r24, r18
     fea:	0e 94 8f 07 	call	0xf1e	; 0xf1e <_ZN5Print5writeEPKc.part.2>
     fee:	cf 2d       	mov	r28, r15
     ff0:	d1 2f       	mov	r29, r17
     ff2:	0c 0f       	add	r16, r28
     ff4:	1d 2f       	mov	r17, r29
     ff6:	11 1d       	adc	r17, r1
     ff8:	80 91 3d 28 	lds	r24, 0x283D	; 0x80283d <HCI+0x2>
     ffc:	90 91 3e 28 	lds	r25, 0x283E	; 0x80283e <HCI+0x3>
    1000:	0c 17       	cp	r16, r28
    1002:	1d 07       	cpc	r17, r29
    1004:	a1 f0       	breq	.+40     	; 0x102e <_ZN8HCIClass7dumpPktEPKchPh.constprop.95+0x66>
    1006:	f9 90       	ld	r15, Y+
    1008:	2f e0       	ldi	r18, 0x0F	; 15
    100a:	2f 15       	cp	r18, r15
    100c:	20 f0       	brcs	.+8      	; 0x1016 <_ZN8HCIClass7dumpPktEPKchPh.constprop.95+0x4e>
    100e:	69 e9       	ldi	r22, 0x99	; 153
    1010:	7b e9       	ldi	r23, 0x9B	; 155
    1012:	0e 94 8f 07 	call	0xf1e	; 0xf1e <_ZN5Print5writeEPKc.part.2>
    1016:	4f 2d       	mov	r20, r15
    1018:	50 e0       	ldi	r21, 0x00	; 0
    101a:	70 e0       	ldi	r23, 0x00	; 0
    101c:	60 e0       	ldi	r22, 0x00	; 0
    101e:	20 e1       	ldi	r18, 0x10	; 16
    1020:	80 91 3d 28 	lds	r24, 0x283D	; 0x80283d <HCI+0x2>
    1024:	90 91 3e 28 	lds	r25, 0x283E	; 0x80283e <HCI+0x3>
    1028:	0e 94 9e 07 	call	0xf3c	; 0xf3c <_ZN5Print11printNumberEmh>
    102c:	e5 cf       	rjmp	.-54     	; 0xff8 <_ZN8HCIClass7dumpPktEPKchPh.constprop.95+0x30>
    102e:	65 e7       	ldi	r22, 0x75	; 117
    1030:	7b e9       	ldi	r23, 0x9B	; 155
    1032:	0e 94 8f 07 	call	0xf1e	; 0xf1e <_ZN5Print5writeEPKc.part.2>
    1036:	80 91 3d 28 	lds	r24, 0x283D	; 0x80283d <HCI+0x2>
    103a:	90 91 3e 28 	lds	r25, 0x283E	; 0x80283e <HCI+0x3>
    103e:	dc 01       	movw	r26, r24
    1040:	ed 91       	ld	r30, X+
    1042:	fc 91       	ld	r31, X
    1044:	06 80       	ldd	r0, Z+6	; 0x06
    1046:	f7 81       	ldd	r31, Z+7	; 0x07
    1048:	e0 2d       	mov	r30, r0
    104a:	df 91       	pop	r29
    104c:	cf 91       	pop	r28
    104e:	1f 91       	pop	r17
    1050:	0f 91       	pop	r16
    1052:	ff 90       	pop	r15
    1054:	09 94       	ijmp
    1056:	df 91       	pop	r29
    1058:	cf 91       	pop	r28
    105a:	1f 91       	pop	r17
    105c:	0f 91       	pop	r16
    105e:	ff 90       	pop	r15
    1060:	08 95       	ret

00001062 <_ZN6String4copyEPKcj>:
    1062:	ef 92       	push	r14
    1064:	ff 92       	push	r15
    1066:	0f 93       	push	r16
    1068:	1f 93       	push	r17
    106a:	cf 93       	push	r28
    106c:	df 93       	push	r29
    106e:	ec 01       	movw	r28, r24
    1070:	7b 01       	movw	r14, r22
    1072:	8a 01       	movw	r16, r20
    1074:	ba 01       	movw	r22, r20
    1076:	0e 94 19 06 	call	0xc32	; 0xc32 <_ZN6String7reserveEj>
    107a:	28 81       	ld	r18, Y
    107c:	39 81       	ldd	r19, Y+1	; 0x01
    107e:	81 11       	cpse	r24, r1
    1080:	14 c0       	rjmp	.+40     	; 0x10aa <_ZN6String4copyEPKcj+0x48>
    1082:	21 15       	cp	r18, r1
    1084:	31 05       	cpc	r19, r1
    1086:	19 f0       	breq	.+6      	; 0x108e <_ZN6String4copyEPKcj+0x2c>
    1088:	c9 01       	movw	r24, r18
    108a:	0e 94 3a 29 	call	0x5274	; 0x5274 <free>
    108e:	18 82       	st	Y, r1
    1090:	19 82       	std	Y+1, r1	; 0x01
    1092:	1c 82       	std	Y+4, r1	; 0x04
    1094:	1d 82       	std	Y+5, r1	; 0x05
    1096:	1a 82       	std	Y+2, r1	; 0x02
    1098:	1b 82       	std	Y+3, r1	; 0x03
    109a:	ce 01       	movw	r24, r28
    109c:	df 91       	pop	r29
    109e:	cf 91       	pop	r28
    10a0:	1f 91       	pop	r17
    10a2:	0f 91       	pop	r16
    10a4:	ff 90       	pop	r15
    10a6:	ef 90       	pop	r14
    10a8:	08 95       	ret
    10aa:	0c 83       	std	Y+4, r16	; 0x04
    10ac:	1d 83       	std	Y+5, r17	; 0x05
    10ae:	b7 01       	movw	r22, r14
    10b0:	c9 01       	movw	r24, r18
    10b2:	0e 94 ae 2a 	call	0x555c	; 0x555c <strcpy>
    10b6:	f1 cf       	rjmp	.-30     	; 0x109a <_ZN6String4copyEPKcj+0x38>

000010b8 <_ZN6StringC1EPKc>:
    10b8:	fc 01       	movw	r30, r24
    10ba:	10 82       	st	Z, r1
    10bc:	11 82       	std	Z+1, r1	; 0x01
    10be:	12 82       	std	Z+2, r1	; 0x02
    10c0:	13 82       	std	Z+3, r1	; 0x03
    10c2:	14 82       	std	Z+4, r1	; 0x04
    10c4:	15 82       	std	Z+5, r1	; 0x05
    10c6:	fb 01       	movw	r30, r22
    10c8:	01 90       	ld	r0, Z+
    10ca:	00 20       	and	r0, r0
    10cc:	e9 f7       	brne	.-6      	; 0x10c8 <_ZN6StringC1EPKc+0x10>
    10ce:	31 97       	sbiw	r30, 0x01	; 1
    10d0:	af 01       	movw	r20, r30
    10d2:	46 1b       	sub	r20, r22
    10d4:	57 0b       	sbc	r21, r23
    10d6:	0c 94 31 08 	jmp	0x1062	; 0x1062 <_ZN6String4copyEPKcj>

000010da <_ZNK9BLEDevice7addressEv>:
    10da:	ef 92       	push	r14
    10dc:	ff 92       	push	r15
    10de:	0f 93       	push	r16
    10e0:	1f 93       	push	r17
    10e2:	cf 93       	push	r28
    10e4:	df 93       	push	r29
    10e6:	cd b7       	in	r28, 0x3d	; 61
    10e8:	de b7       	in	r29, 0x3e	; 62
    10ea:	62 97       	sbiw	r28, 0x12	; 18
    10ec:	cd bf       	out	0x3d, r28	; 61
    10ee:	de bf       	out	0x3e, r29	; 62
    10f0:	8c 01       	movw	r16, r24
    10f2:	fb 01       	movw	r30, r22
    10f4:	83 81       	ldd	r24, Z+3	; 0x03
    10f6:	1f 92       	push	r1
    10f8:	8f 93       	push	r24
    10fa:	84 81       	ldd	r24, Z+4	; 0x04
    10fc:	1f 92       	push	r1
    10fe:	8f 93       	push	r24
    1100:	85 81       	ldd	r24, Z+5	; 0x05
    1102:	1f 92       	push	r1
    1104:	8f 93       	push	r24
    1106:	86 81       	ldd	r24, Z+6	; 0x06
    1108:	1f 92       	push	r1
    110a:	8f 93       	push	r24
    110c:	87 81       	ldd	r24, Z+7	; 0x07
    110e:	1f 92       	push	r1
    1110:	8f 93       	push	r24
    1112:	80 85       	ldd	r24, Z+8	; 0x08
    1114:	1f 92       	push	r1
    1116:	8f 93       	push	r24
    1118:	88 e7       	ldi	r24, 0x78	; 120
    111a:	9b e9       	ldi	r25, 0x9B	; 155
    111c:	9f 93       	push	r25
    111e:	8f 93       	push	r24
    1120:	ce 01       	movw	r24, r28
    1122:	01 96       	adiw	r24, 0x01	; 1
    1124:	7c 01       	movw	r14, r24
    1126:	9f 93       	push	r25
    1128:	8f 93       	push	r24
    112a:	0e 94 b5 2a 	call	0x556a	; 0x556a <sprintf>
    112e:	b7 01       	movw	r22, r14
    1130:	c8 01       	movw	r24, r16
    1132:	0e 94 5c 08 	call	0x10b8	; 0x10b8 <_ZN6StringC1EPKc>
    1136:	cd bf       	out	0x3d, r28	; 61
    1138:	de bf       	out	0x3e, r29	; 62
    113a:	c8 01       	movw	r24, r16
    113c:	62 96       	adiw	r28, 0x12	; 18
    113e:	cd bf       	out	0x3d, r28	; 61
    1140:	de bf       	out	0x3e, r29	; 62
    1142:	df 91       	pop	r29
    1144:	cf 91       	pop	r28
    1146:	1f 91       	pop	r17
    1148:	0f 91       	pop	r16
    114a:	ff 90       	pop	r15
    114c:	ef 90       	pop	r14
    114e:	08 95       	ret

00001150 <_ZNK6String16equalsIgnoreCaseERKS_.part.6>:
    1150:	ef 92       	push	r14
    1152:	ff 92       	push	r15
    1154:	0f 93       	push	r16
    1156:	1f 93       	push	r17
    1158:	cf 93       	push	r28
    115a:	df 93       	push	r29
    115c:	fc 01       	movw	r30, r24
    115e:	00 81       	ld	r16, Z
    1160:	11 81       	ldd	r17, Z+1	; 0x01
    1162:	fb 01       	movw	r30, r22
    1164:	c0 81       	ld	r28, Z
    1166:	d1 81       	ldd	r29, Z+1	; 0x01
    1168:	f8 01       	movw	r30, r16
    116a:	81 91       	ld	r24, Z+
    116c:	8f 01       	movw	r16, r30
    116e:	88 23       	and	r24, r24
    1170:	b9 f0       	breq	.+46     	; 0x11a0 <_ZNK6String16equalsIgnoreCaseERKS_.part.6+0x50>
    1172:	08 2e       	mov	r0, r24
    1174:	00 0c       	add	r0, r0
    1176:	99 0b       	sbc	r25, r25
    1178:	0e 94 80 2a 	call	0x5500	; 0x5500 <tolower>
    117c:	7c 01       	movw	r14, r24
    117e:	89 91       	ld	r24, Y+
    1180:	08 2e       	mov	r0, r24
    1182:	00 0c       	add	r0, r0
    1184:	99 0b       	sbc	r25, r25
    1186:	0e 94 80 2a 	call	0x5500	; 0x5500 <tolower>
    118a:	e8 16       	cp	r14, r24
    118c:	f9 06       	cpc	r15, r25
    118e:	61 f3       	breq	.-40     	; 0x1168 <_ZNK6String16equalsIgnoreCaseERKS_.part.6+0x18>
    1190:	80 e0       	ldi	r24, 0x00	; 0
    1192:	df 91       	pop	r29
    1194:	cf 91       	pop	r28
    1196:	1f 91       	pop	r17
    1198:	0f 91       	pop	r16
    119a:	ff 90       	pop	r15
    119c:	ef 90       	pop	r14
    119e:	08 95       	ret
    11a0:	81 e0       	ldi	r24, 0x01	; 1
    11a2:	f7 cf       	rjmp	.-18     	; 0x1192 <_ZNK6String16equalsIgnoreCaseERKS_.part.6+0x42>

000011a4 <_ZNK9BLEDevice21advertisedServiceUuidEi>:
    11a4:	2f 92       	push	r2
    11a6:	3f 92       	push	r3
    11a8:	4f 92       	push	r4
    11aa:	5f 92       	push	r5
    11ac:	6f 92       	push	r6
    11ae:	7f 92       	push	r7
    11b0:	8f 92       	push	r8
    11b2:	9f 92       	push	r9
    11b4:	af 92       	push	r10
    11b6:	bf 92       	push	r11
    11b8:	cf 92       	push	r12
    11ba:	df 92       	push	r13
    11bc:	ef 92       	push	r14
    11be:	ff 92       	push	r15
    11c0:	0f 93       	push	r16
    11c2:	1f 93       	push	r17
    11c4:	cf 93       	push	r28
    11c6:	df 93       	push	r29
    11c8:	cd b7       	in	r28, 0x3d	; 61
    11ca:	de b7       	in	r29, 0x3e	; 62
    11cc:	2d 97       	sbiw	r28, 0x0d	; 13
    11ce:	cd bf       	out	0x3d, r28	; 61
    11d0:	de bf       	out	0x3e, r29	; 62
    11d2:	5c 01       	movw	r10, r24
    11d4:	6b 01       	movw	r12, r22
    11d6:	48 87       	std	Y+8, r20	; 0x08
    11d8:	59 87       	std	Y+9, r21	; 0x09
    11da:	67 e7       	ldi	r22, 0x77	; 119
    11dc:	7b e9       	ldi	r23, 0x9B	; 155
    11de:	0e 94 5c 08 	call	0x10b8	; 0x10b8 <_ZN6StringC1EPKc>
    11e2:	80 e0       	ldi	r24, 0x00	; 0
    11e4:	31 2c       	mov	r3, r1
    11e6:	21 2c       	mov	r2, r1
    11e8:	f6 01       	movw	r30, r12
    11ea:	92 85       	ldd	r25, Z+10	; 0x0a
    11ec:	89 17       	cp	r24, r25
    11ee:	08 f0       	brcs	.+2      	; 0x11f2 <_ZNK9BLEDevice21advertisedServiceUuidEi+0x4e>
    11f0:	a3 c0       	rjmp	.+326    	; 0x1338 <_ZNK9BLEDevice21advertisedServiceUuidEi+0x194>
    11f2:	f1 e0       	ldi	r31, 0x01	; 1
    11f4:	f8 0f       	add	r31, r24
    11f6:	fa 83       	std	Y+2, r31	; 0x02
    11f8:	f6 01       	movw	r30, r12
    11fa:	e8 0f       	add	r30, r24
    11fc:	f1 1d       	adc	r31, r1
    11fe:	23 85       	ldd	r18, Z+11	; 0x0b
    1200:	29 83       	std	Y+1, r18	; 0x01
    1202:	f6 01       	movw	r30, r12
    1204:	3a 81       	ldd	r19, Y+2	; 0x02
    1206:	e3 0f       	add	r30, r19
    1208:	f1 1d       	adc	r31, r1
    120a:	93 85       	ldd	r25, Z+11	; 0x0b
    120c:	49 2f       	mov	r20, r25
    120e:	42 50       	subi	r20, 0x02	; 2
    1210:	55 0b       	sbc	r21, r21
    1212:	42 30       	cpi	r20, 0x02	; 2
    1214:	51 05       	cpc	r21, r1
    1216:	08 f4       	brcc	.+2      	; 0x121a <_ZNK9BLEDevice21advertisedServiceUuidEi+0x76>
    1218:	84 c0       	rjmp	.+264    	; 0x1322 <_ZNK9BLEDevice21advertisedServiceUuidEi+0x17e>
    121a:	96 50       	subi	r25, 0x06	; 6
    121c:	92 30       	cpi	r25, 0x02	; 2
    121e:	08 f0       	brcs	.+2      	; 0x1222 <_ZNK9BLEDevice21advertisedServiceUuidEi+0x7e>
    1220:	87 c0       	rjmp	.+270    	; 0x1330 <_ZNK9BLEDevice21advertisedServiceUuidEi+0x18c>
    1222:	e0 e1       	ldi	r30, 0x10	; 16
    1224:	f0 e0       	ldi	r31, 0x00	; 0
    1226:	ec 87       	std	Y+12, r30	; 0x0c
    1228:	fd 87       	std	Y+13, r31	; 0x0d
    122a:	ec 85       	ldd	r30, Y+12	; 0x0c
    122c:	fd 85       	ldd	r31, Y+13	; 0x0d
    122e:	ee 9f       	mul	r30, r30
    1230:	a0 01       	movw	r20, r0
    1232:	ef 9f       	mul	r30, r31
    1234:	50 0d       	add	r21, r0
    1236:	50 0d       	add	r21, r0
    1238:	11 24       	eor	r1, r1
    123a:	4e 83       	std	Y+6, r20	; 0x06
    123c:	5f 83       	std	Y+7, r21	; 0x07
    123e:	8e 5f       	subi	r24, 0xFE	; 254
    1240:	e8 0f       	add	r30, r24
    1242:	f1 1d       	adc	r31, r1
    1244:	26 01       	movw	r4, r12
    1246:	4e 0e       	add	r4, r30
    1248:	5f 1e       	adc	r5, r31
    124a:	71 2c       	mov	r7, r1
    124c:	61 2c       	mov	r6, r1
    124e:	29 81       	ldd	r18, Y+1	; 0x01
    1250:	21 50       	subi	r18, 0x01	; 1
    1252:	33 0b       	sbc	r19, r19
    1254:	2a 87       	std	Y+10, r18	; 0x0a
    1256:	3b 87       	std	Y+11, r19	; 0x0b
    1258:	4a 85       	ldd	r20, Y+10	; 0x0a
    125a:	5b 85       	ldd	r21, Y+11	; 0x0b
    125c:	64 16       	cp	r6, r20
    125e:	75 06       	cpc	r7, r21
    1260:	0c f0       	brlt	.+2      	; 0x1264 <_ZNK9BLEDevice21advertisedServiceUuidEi+0xc0>
    1262:	66 c0       	rjmp	.+204    	; 0x1330 <_ZNK9BLEDevice21advertisedServiceUuidEi+0x18c>
    1264:	88 85       	ldd	r24, Y+8	; 0x08
    1266:	99 85       	ldd	r25, Y+9	; 0x09
    1268:	28 16       	cp	r2, r24
    126a:	39 06       	cpc	r3, r25
    126c:	09 f0       	breq	.+2      	; 0x1270 <_ZNK9BLEDevice21advertisedServiceUuidEi+0xcc>
    126e:	4d c0       	rjmp	.+154    	; 0x130a <_ZNK9BLEDevice21advertisedServiceUuidEi+0x166>
    1270:	0c 85       	ldd	r16, Y+12	; 0x0c
    1272:	1d 85       	ldd	r17, Y+13	; 0x0d
    1274:	01 50       	subi	r16, 0x01	; 1
    1276:	11 09       	sbc	r17, r1
    1278:	f2 01       	movw	r30, r4
    127a:	3b 96       	adiw	r30, 0x0b	; 11
    127c:	ec 83       	std	Y+4, r30	; 0x04
    127e:	fd 83       	std	Y+5, r31	; 0x05
    1280:	38 e0       	ldi	r19, 0x08	; 8
    1282:	e3 2e       	mov	r14, r19
    1284:	38 e2       	ldi	r19, 0x28	; 40
    1286:	f3 2e       	mov	r15, r19
    1288:	ec 81       	ldd	r30, Y+4	; 0x04
    128a:	fd 81       	ldd	r31, Y+5	; 0x05
    128c:	22 91       	ld	r18, -Z
    128e:	ec 83       	std	Y+4, r30	; 0x04
    1290:	fd 83       	std	Y+5, r31	; 0x05
    1292:	2b 83       	std	Y+3, r18	; 0x03
    1294:	82 2f       	mov	r24, r18
    1296:	90 e0       	ldi	r25, 0x00	; 0
    1298:	40 e1       	ldi	r20, 0x10	; 16
    129a:	b7 01       	movw	r22, r14
    129c:	24 e0       	ldi	r18, 0x04	; 4
    129e:	96 95       	lsr	r25
    12a0:	87 95       	ror	r24
    12a2:	2a 95       	dec	r18
    12a4:	e1 f7       	brne	.-8      	; 0x129e <_ZNK9BLEDevice21advertisedServiceUuidEi+0xfa>
    12a6:	0e 94 b3 27 	call	0x4f66	; 0x4f66 <__utoa_ncheck>
    12aa:	47 01       	movw	r8, r14
    12ac:	32 e0       	ldi	r19, 0x02	; 2
    12ae:	83 0e       	add	r8, r19
    12b0:	91 1c       	adc	r9, r1
    12b2:	8b 81       	ldd	r24, Y+3	; 0x03
    12b4:	8f 70       	andi	r24, 0x0F	; 15
    12b6:	40 e1       	ldi	r20, 0x10	; 16
    12b8:	b7 01       	movw	r22, r14
    12ba:	6f 5f       	subi	r22, 0xFF	; 255
    12bc:	7f 4f       	sbci	r23, 0xFF	; 255
    12be:	90 e0       	ldi	r25, 0x00	; 0
    12c0:	0e 94 b3 27 	call	0x4f66	; 0x4f66 <__utoa_ncheck>
    12c4:	06 30       	cpi	r16, 0x06	; 6
    12c6:	11 05       	cpc	r17, r1
    12c8:	39 f0       	breq	.+14     	; 0x12d8 <_ZNK9BLEDevice21advertisedServiceUuidEi+0x134>
    12ca:	c8 01       	movw	r24, r16
    12cc:	8d 7f       	andi	r24, 0xFD	; 253
    12ce:	08 97       	sbiw	r24, 0x08	; 8
    12d0:	19 f0       	breq	.+6      	; 0x12d8 <_ZNK9BLEDevice21advertisedServiceUuidEi+0x134>
    12d2:	0c 30       	cpi	r16, 0x0C	; 12
    12d4:	11 05       	cpc	r17, r1
    12d6:	39 f4       	brne	.+14     	; 0x12e6 <_ZNK9BLEDevice21advertisedServiceUuidEi+0x142>
    12d8:	47 01       	movw	r8, r14
    12da:	43 e0       	ldi	r20, 0x03	; 3
    12dc:	84 0e       	add	r8, r20
    12de:	91 1c       	adc	r9, r1
    12e0:	2d e2       	ldi	r18, 0x2D	; 45
    12e2:	f7 01       	movw	r30, r14
    12e4:	22 83       	std	Z+2, r18	; 0x02
    12e6:	01 50       	subi	r16, 0x01	; 1
    12e8:	11 09       	sbc	r17, r1
    12ea:	00 f5       	brcc	.+64     	; 0x132c <_ZNK9BLEDevice21advertisedServiceUuidEi+0x188>
    12ec:	f4 01       	movw	r30, r8
    12ee:	10 82       	st	Z, r1
    12f0:	e8 e0       	ldi	r30, 0x08	; 8
    12f2:	f8 e2       	ldi	r31, 0x28	; 40
    12f4:	01 90       	ld	r0, Z+
    12f6:	00 20       	and	r0, r0
    12f8:	e9 f7       	brne	.-6      	; 0x12f4 <_ZNK9BLEDevice21advertisedServiceUuidEi+0x150>
    12fa:	af 01       	movw	r20, r30
    12fc:	49 50       	subi	r20, 0x09	; 9
    12fe:	58 42       	sbci	r21, 0x28	; 40
    1300:	68 e0       	ldi	r22, 0x08	; 8
    1302:	78 e2       	ldi	r23, 0x28	; 40
    1304:	c5 01       	movw	r24, r10
    1306:	0e 94 31 08 	call	0x1062	; 0x1062 <_ZN6String4copyEPKcj>
    130a:	ff ef       	ldi	r31, 0xFF	; 255
    130c:	2f 1a       	sub	r2, r31
    130e:	3f 0a       	sbc	r3, r31
    1310:	2c 85       	ldd	r18, Y+12	; 0x0c
    1312:	3d 85       	ldd	r19, Y+13	; 0x0d
    1314:	62 0e       	add	r6, r18
    1316:	73 1e       	adc	r7, r19
    1318:	4e 81       	ldd	r20, Y+6	; 0x06
    131a:	5f 81       	ldd	r21, Y+7	; 0x07
    131c:	44 0e       	add	r4, r20
    131e:	55 1e       	adc	r5, r21
    1320:	9b cf       	rjmp	.-202    	; 0x1258 <_ZNK9BLEDevice21advertisedServiceUuidEi+0xb4>
    1322:	22 e0       	ldi	r18, 0x02	; 2
    1324:	30 e0       	ldi	r19, 0x00	; 0
    1326:	2c 87       	std	Y+12, r18	; 0x0c
    1328:	3d 87       	std	Y+13, r19	; 0x0d
    132a:	7f cf       	rjmp	.-258    	; 0x122a <_ZNK9BLEDevice21advertisedServiceUuidEi+0x86>
    132c:	74 01       	movw	r14, r8
    132e:	ac cf       	rjmp	.-168    	; 0x1288 <_ZNK9BLEDevice21advertisedServiceUuidEi+0xe4>
    1330:	89 81       	ldd	r24, Y+1	; 0x01
    1332:	5a 81       	ldd	r21, Y+2	; 0x02
    1334:	85 0f       	add	r24, r21
    1336:	58 cf       	rjmp	.-336    	; 0x11e8 <_ZNK9BLEDevice21advertisedServiceUuidEi+0x44>
    1338:	c5 01       	movw	r24, r10
    133a:	2d 96       	adiw	r28, 0x0d	; 13
    133c:	cd bf       	out	0x3d, r28	; 61
    133e:	de bf       	out	0x3e, r29	; 62
    1340:	df 91       	pop	r29
    1342:	cf 91       	pop	r28
    1344:	1f 91       	pop	r17
    1346:	0f 91       	pop	r16
    1348:	ff 90       	pop	r15
    134a:	ef 90       	pop	r14
    134c:	df 90       	pop	r13
    134e:	cf 90       	pop	r12
    1350:	bf 90       	pop	r11
    1352:	af 90       	pop	r10
    1354:	9f 90       	pop	r9
    1356:	8f 90       	pop	r8
    1358:	7f 90       	pop	r7
    135a:	6f 90       	pop	r6
    135c:	5f 90       	pop	r5
    135e:	4f 90       	pop	r4
    1360:	3f 90       	pop	r3
    1362:	2f 90       	pop	r2
    1364:	08 95       	ret

00001366 <_ZNK9BLEDevice9localNameEv>:
    1366:	8f 92       	push	r8
    1368:	9f 92       	push	r9
    136a:	af 92       	push	r10
    136c:	bf 92       	push	r11
    136e:	cf 92       	push	r12
    1370:	df 92       	push	r13
    1372:	ef 92       	push	r14
    1374:	ff 92       	push	r15
    1376:	0f 93       	push	r16
    1378:	1f 93       	push	r17
    137a:	cf 93       	push	r28
    137c:	df 93       	push	r29
    137e:	00 d0       	rcall	.+0      	; 0x1380 <_ZNK9BLEDevice9localNameEv+0x1a>
    1380:	cd b7       	in	r28, 0x3d	; 61
    1382:	de b7       	in	r29, 0x3e	; 62
    1384:	7c 01       	movw	r14, r24
    1386:	5b 01       	movw	r10, r22
    1388:	67 e7       	ldi	r22, 0x77	; 119
    138a:	7b e9       	ldi	r23, 0x9B	; 155
    138c:	0e 94 5c 08 	call	0x10b8	; 0x10b8 <_ZN6StringC1EPKc>
    1390:	f5 01       	movw	r30, r10
    1392:	82 85       	ldd	r24, Z+10	; 0x0a
    1394:	90 e0       	ldi	r25, 0x00	; 0
    1396:	f0 e0       	ldi	r31, 0x00	; 0
    1398:	e0 e0       	ldi	r30, 0x00	; 0
    139a:	e8 17       	cp	r30, r24
    139c:	f9 07       	cpc	r31, r25
    139e:	0c f0       	brlt	.+2      	; 0x13a2 <_ZNK9BLEDevice9localNameEv+0x3c>
    13a0:	43 c0       	rjmp	.+134    	; 0x1428 <_ZNK9BLEDevice9localNameEv+0xc2>
    13a2:	6f 01       	movw	r12, r30
    13a4:	22 e0       	ldi	r18, 0x02	; 2
    13a6:	c2 0e       	add	r12, r18
    13a8:	d1 1c       	adc	r13, r1
    13aa:	ea 0d       	add	r30, r10
    13ac:	fb 1d       	adc	r31, r11
    13ae:	03 85       	ldd	r16, Z+11	; 0x0b
    13b0:	01 50       	subi	r16, 0x01	; 1
    13b2:	11 0b       	sbc	r17, r17
    13b4:	24 85       	ldd	r18, Z+12	; 0x0c
    13b6:	28 50       	subi	r18, 0x08	; 8
    13b8:	33 0b       	sbc	r19, r19
    13ba:	22 30       	cpi	r18, 0x02	; 2
    13bc:	31 05       	cpc	r19, r1
    13be:	80 f5       	brcc	.+96     	; 0x1420 <_ZNK9BLEDevice9localNameEv+0xba>
    13c0:	b8 01       	movw	r22, r16
    13c2:	c7 01       	movw	r24, r14
    13c4:	0e 94 19 06 	call	0xc32	; 0xc32 <_ZN6String7reserveEj>
    13c8:	ca 0c       	add	r12, r10
    13ca:	db 1c       	adc	r13, r11
    13cc:	46 01       	movw	r8, r12
    13ce:	c6 01       	movw	r24, r12
    13d0:	88 19       	sub	r24, r8
    13d2:	99 09       	sbc	r25, r9
    13d4:	80 17       	cp	r24, r16
    13d6:	91 07       	cpc	r25, r17
    13d8:	3c f5       	brge	.+78     	; 0x1428 <_ZNK9BLEDevice9localNameEv+0xc2>
    13da:	f6 01       	movw	r30, r12
    13dc:	83 85       	ldd	r24, Z+11	; 0x0b
    13de:	89 83       	std	Y+1, r24	; 0x01
    13e0:	1a 82       	std	Y+2, r1	; 0x02
    13e2:	f7 01       	movw	r30, r14
    13e4:	a4 80       	ldd	r10, Z+4	; 0x04
    13e6:	b5 80       	ldd	r11, Z+5	; 0x05
    13e8:	ff ef       	ldi	r31, 0xFF	; 255
    13ea:	af 1a       	sub	r10, r31
    13ec:	bf 0a       	sbc	r11, r31
    13ee:	b5 01       	movw	r22, r10
    13f0:	c7 01       	movw	r24, r14
    13f2:	0e 94 19 06 	call	0xc32	; 0xc32 <_ZN6String7reserveEj>
    13f6:	88 23       	and	r24, r24
    13f8:	79 f0       	breq	.+30     	; 0x1418 <_ZNK9BLEDevice9localNameEv+0xb2>
    13fa:	f7 01       	movw	r30, r14
    13fc:	20 81       	ld	r18, Z
    13fe:	31 81       	ldd	r19, Z+1	; 0x01
    1400:	84 81       	ldd	r24, Z+4	; 0x04
    1402:	95 81       	ldd	r25, Z+5	; 0x05
    1404:	be 01       	movw	r22, r28
    1406:	6f 5f       	subi	r22, 0xFF	; 255
    1408:	7f 4f       	sbci	r23, 0xFF	; 255
    140a:	82 0f       	add	r24, r18
    140c:	93 1f       	adc	r25, r19
    140e:	0e 94 ae 2a 	call	0x555c	; 0x555c <strcpy>
    1412:	f7 01       	movw	r30, r14
    1414:	a4 82       	std	Z+4, r10	; 0x04
    1416:	b5 82       	std	Z+5, r11	; 0x05
    1418:	ff ef       	ldi	r31, 0xFF	; 255
    141a:	cf 1a       	sub	r12, r31
    141c:	df 0a       	sbc	r13, r31
    141e:	d7 cf       	rjmp	.-82     	; 0x13ce <_ZNK9BLEDevice9localNameEv+0x68>
    1420:	f8 01       	movw	r30, r16
    1422:	ec 0d       	add	r30, r12
    1424:	fd 1d       	adc	r31, r13
    1426:	b9 cf       	rjmp	.-142    	; 0x139a <_ZNK9BLEDevice9localNameEv+0x34>
    1428:	c7 01       	movw	r24, r14
    142a:	0f 90       	pop	r0
    142c:	0f 90       	pop	r0
    142e:	df 91       	pop	r29
    1430:	cf 91       	pop	r28
    1432:	1f 91       	pop	r17
    1434:	0f 91       	pop	r16
    1436:	ff 90       	pop	r15
    1438:	ef 90       	pop	r14
    143a:	df 90       	pop	r13
    143c:	cf 90       	pop	r12
    143e:	bf 90       	pop	r11
    1440:	af 90       	pop	r10
    1442:	9f 90       	pop	r9
    1444:	8f 90       	pop	r8
    1446:	08 95       	ret

00001448 <_ZNK9BLEDevice26advertisedServiceUuidCountEv>:
    1448:	0f 93       	push	r16
    144a:	1f 93       	push	r17
    144c:	cf 93       	push	r28
    144e:	df 93       	push	r29
    1450:	fc 01       	movw	r30, r24
    1452:	82 85       	ldd	r24, Z+10	; 0x0a
    1454:	90 e0       	ldi	r25, 0x00	; 0
    1456:	50 e0       	ldi	r21, 0x00	; 0
    1458:	40 e0       	ldi	r20, 0x00	; 0
    145a:	98 17       	cp	r25, r24
    145c:	50 f5       	brcc	.+84     	; 0x14b2 <_ZNK9BLEDevice26advertisedServiceUuidCountEv+0x6a>
    145e:	df 01       	movw	r26, r30
    1460:	a9 0f       	add	r26, r25
    1462:	b1 1d       	adc	r27, r1
    1464:	1b 96       	adiw	r26, 0x0b	; 11
    1466:	2c 91       	ld	r18, X
    1468:	a1 e0       	ldi	r26, 0x01	; 1
    146a:	a9 0f       	add	r26, r25
    146c:	ae 0f       	add	r26, r30
    146e:	bf 2f       	mov	r27, r31
    1470:	b1 1d       	adc	r27, r1
    1472:	1b 96       	adiw	r26, 0x0b	; 11
    1474:	3c 91       	ld	r19, X
    1476:	03 2f       	mov	r16, r19
    1478:	02 50       	subi	r16, 0x02	; 2
    147a:	11 0b       	sbc	r17, r17
    147c:	02 30       	cpi	r16, 0x02	; 2
    147e:	11 05       	cpc	r17, r1
    1480:	40 f0       	brcs	.+16     	; 0x1492 <_ZNK9BLEDevice26advertisedServiceUuidCountEv+0x4a>
    1482:	36 50       	subi	r19, 0x06	; 6
    1484:	a0 e1       	ldi	r26, 0x10	; 16
    1486:	b0 e0       	ldi	r27, 0x00	; 0
    1488:	32 30       	cpi	r19, 0x02	; 2
    148a:	28 f0       	brcs	.+10     	; 0x1496 <_ZNK9BLEDevice26advertisedServiceUuidCountEv+0x4e>
    148c:	2f 5f       	subi	r18, 0xFF	; 255
    148e:	92 0f       	add	r25, r18
    1490:	e4 cf       	rjmp	.-56     	; 0x145a <_ZNK9BLEDevice26advertisedServiceUuidCountEv+0x12>
    1492:	a2 e0       	ldi	r26, 0x02	; 2
    1494:	b0 e0       	ldi	r27, 0x00	; 0
    1496:	70 e0       	ldi	r23, 0x00	; 0
    1498:	60 e0       	ldi	r22, 0x00	; 0
    149a:	02 2f       	mov	r16, r18
    149c:	01 50       	subi	r16, 0x01	; 1
    149e:	11 0b       	sbc	r17, r17
    14a0:	e8 01       	movw	r28, r16
    14a2:	6c 17       	cp	r22, r28
    14a4:	7d 07       	cpc	r23, r29
    14a6:	94 f7       	brge	.-28     	; 0x148c <_ZNK9BLEDevice26advertisedServiceUuidCountEv+0x44>
    14a8:	4f 5f       	subi	r20, 0xFF	; 255
    14aa:	5f 4f       	sbci	r21, 0xFF	; 255
    14ac:	6a 0f       	add	r22, r26
    14ae:	7b 1f       	adc	r23, r27
    14b0:	f8 cf       	rjmp	.-16     	; 0x14a2 <_ZNK9BLEDevice26advertisedServiceUuidCountEv+0x5a>
    14b2:	ca 01       	movw	r24, r20
    14b4:	df 91       	pop	r29
    14b6:	cf 91       	pop	r28
    14b8:	1f 91       	pop	r17
    14ba:	0f 91       	pop	r16
    14bc:	08 95       	ret

000014be <_ZN6StringD1Ev>:
    14be:	fc 01       	movw	r30, r24
    14c0:	80 81       	ld	r24, Z
    14c2:	91 81       	ldd	r25, Z+1	; 0x01
    14c4:	00 97       	sbiw	r24, 0x00	; 0
    14c6:	11 f0       	breq	.+4      	; 0x14cc <_ZN6StringD1Ev+0xe>
    14c8:	0c 94 3a 29 	jmp	0x5274	; 0x5274 <free>
    14cc:	08 95       	ret

000014ce <_ZN8GAPClass17matchesScanFilterERK9BLEDevice.constprop.102>:
    14ce:	ef 92       	push	r14
    14d0:	ff 92       	push	r15
    14d2:	1f 93       	push	r17
    14d4:	cf 93       	push	r28
    14d6:	df 93       	push	r29
    14d8:	cd b7       	in	r28, 0x3d	; 61
    14da:	de b7       	in	r29, 0x3e	; 62
    14dc:	26 97       	sbiw	r28, 0x06	; 6
    14de:	cd bf       	out	0x3d, r28	; 61
    14e0:	de bf       	out	0x3e, r29	; 62
    14e2:	7c 01       	movw	r14, r24
    14e4:	80 91 56 2b 	lds	r24, 0x2B56	; 0x802b56 <GAP+0x2d>
    14e8:	90 91 57 2b 	lds	r25, 0x2B57	; 0x802b57 <GAP+0x2e>
    14ec:	89 2b       	or	r24, r25
    14ee:	59 f1       	breq	.+86     	; 0x1546 <_ZN8GAPClass17matchesScanFilterERK9BLEDevice.constprop.102+0x78>
    14f0:	b7 01       	movw	r22, r14
    14f2:	ce 01       	movw	r24, r28
    14f4:	01 96       	adiw	r24, 0x01	; 1
    14f6:	0e 94 6d 08 	call	0x10da	; 0x10da <_ZNK9BLEDevice7addressEv>
    14fa:	80 91 56 2b 	lds	r24, 0x2B56	; 0x802b56 <GAP+0x2d>
    14fe:	90 91 57 2b 	lds	r25, 0x2B57	; 0x802b57 <GAP+0x2e>
    1502:	2d 81       	ldd	r18, Y+5	; 0x05
    1504:	3e 81       	ldd	r19, Y+6	; 0x06
    1506:	11 e0       	ldi	r17, 0x01	; 1
    1508:	82 17       	cp	r24, r18
    150a:	93 07       	cpc	r25, r19
    150c:	61 f4       	brne	.+24     	; 0x1526 <_ZN8GAPClass17matchesScanFilterERK9BLEDevice.constprop.102+0x58>
    150e:	89 2b       	or	r24, r25
    1510:	49 f0       	breq	.+18     	; 0x1524 <_ZN8GAPClass17matchesScanFilterERK9BLEDevice.constprop.102+0x56>
    1512:	be 01       	movw	r22, r28
    1514:	6f 5f       	subi	r22, 0xFF	; 255
    1516:	7f 4f       	sbci	r23, 0xFF	; 255
    1518:	82 e5       	ldi	r24, 0x52	; 82
    151a:	9b e2       	ldi	r25, 0x2B	; 43
    151c:	0e 94 a8 08 	call	0x1150	; 0x1150 <_ZNK6String16equalsIgnoreCaseERKS_.part.6>
    1520:	11 e0       	ldi	r17, 0x01	; 1
    1522:	81 11       	cpse	r24, r1
    1524:	10 e0       	ldi	r17, 0x00	; 0
    1526:	ce 01       	movw	r24, r28
    1528:	01 96       	adiw	r24, 0x01	; 1
    152a:	0e 94 5f 0a 	call	0x14be	; 0x14be <_ZN6StringD1Ev>
    152e:	11 23       	and	r17, r17
    1530:	51 f0       	breq	.+20     	; 0x1546 <_ZN8GAPClass17matchesScanFilterERK9BLEDevice.constprop.102+0x78>
    1532:	80 e0       	ldi	r24, 0x00	; 0
    1534:	26 96       	adiw	r28, 0x06	; 6
    1536:	cd bf       	out	0x3d, r28	; 61
    1538:	de bf       	out	0x3e, r29	; 62
    153a:	df 91       	pop	r29
    153c:	cf 91       	pop	r28
    153e:	1f 91       	pop	r17
    1540:	ff 90       	pop	r15
    1542:	ef 90       	pop	r14
    1544:	08 95       	ret
    1546:	80 91 4a 2b 	lds	r24, 0x2B4A	; 0x802b4a <GAP+0x21>
    154a:	90 91 4b 2b 	lds	r25, 0x2B4B	; 0x802b4b <GAP+0x22>
    154e:	89 2b       	or	r24, r25
    1550:	c9 f1       	breq	.+114    	; 0x15c4 <_ZN8GAPClass17matchesScanFilterERK9BLEDevice.constprop.102+0xf6>
    1552:	b7 01       	movw	r22, r14
    1554:	ce 01       	movw	r24, r28
    1556:	01 96       	adiw	r24, 0x01	; 1
    1558:	0e 94 b3 09 	call	0x1366	; 0x1366 <_ZNK9BLEDevice9localNameEv>
    155c:	20 91 4a 2b 	lds	r18, 0x2B4A	; 0x802b4a <GAP+0x21>
    1560:	30 91 4b 2b 	lds	r19, 0x2B4B	; 0x802b4b <GAP+0x22>
    1564:	8d 81       	ldd	r24, Y+5	; 0x05
    1566:	9e 81       	ldd	r25, Y+6	; 0x06
    1568:	28 17       	cp	r18, r24
    156a:	39 07       	cpc	r19, r25
    156c:	19 f5       	brne	.+70     	; 0x15b4 <_ZN8GAPClass17matchesScanFilterERK9BLEDevice.constprop.102+0xe6>
    156e:	80 91 46 2b 	lds	r24, 0x2B46	; 0x802b46 <GAP+0x1d>
    1572:	90 91 47 2b 	lds	r25, 0x2B47	; 0x802b47 <GAP+0x1e>
    1576:	69 81       	ldd	r22, Y+1	; 0x01
    1578:	7a 81       	ldd	r23, Y+2	; 0x02
    157a:	00 97       	sbiw	r24, 0x00	; 0
    157c:	59 f0       	breq	.+22     	; 0x1594 <_ZN8GAPClass17matchesScanFilterERK9BLEDevice.constprop.102+0xc6>
    157e:	61 15       	cp	r22, r1
    1580:	71 05       	cpc	r23, r1
    1582:	09 f0       	breq	.+2      	; 0x1586 <_ZN8GAPClass17matchesScanFilterERK9BLEDevice.constprop.102+0xb8>
    1584:	49 c0       	rjmp	.+146    	; 0x1618 <_ZN8GAPClass17matchesScanFilterERK9BLEDevice.constprop.102+0x14a>
    1586:	23 2b       	or	r18, r19
    1588:	09 f4       	brne	.+2      	; 0x158c <_ZN8GAPClass17matchesScanFilterERK9BLEDevice.constprop.102+0xbe>
    158a:	49 c0       	rjmp	.+146    	; 0x161e <_ZN8GAPClass17matchesScanFilterERK9BLEDevice.constprop.102+0x150>
    158c:	fc 01       	movw	r30, r24
    158e:	80 81       	ld	r24, Z
    1590:	90 e0       	ldi	r25, 0x00	; 0
    1592:	0d c0       	rjmp	.+26     	; 0x15ae <_ZN8GAPClass17matchesScanFilterERK9BLEDevice.constprop.102+0xe0>
    1594:	61 15       	cp	r22, r1
    1596:	71 05       	cpc	r23, r1
    1598:	09 f4       	brne	.+2      	; 0x159c <_ZN8GAPClass17matchesScanFilterERK9BLEDevice.constprop.102+0xce>
    159a:	41 c0       	rjmp	.+130    	; 0x161e <_ZN8GAPClass17matchesScanFilterERK9BLEDevice.constprop.102+0x150>
    159c:	23 2b       	or	r18, r19
    159e:	09 f4       	brne	.+2      	; 0x15a2 <_ZN8GAPClass17matchesScanFilterERK9BLEDevice.constprop.102+0xd4>
    15a0:	3e c0       	rjmp	.+124    	; 0x161e <_ZN8GAPClass17matchesScanFilterERK9BLEDevice.constprop.102+0x150>
    15a2:	fb 01       	movw	r30, r22
    15a4:	80 81       	ld	r24, Z
    15a6:	90 e0       	ldi	r25, 0x00	; 0
    15a8:	91 95       	neg	r25
    15aa:	81 95       	neg	r24
    15ac:	91 09       	sbc	r25, r1
    15ae:	11 e0       	ldi	r17, 0x01	; 1
    15b0:	89 2b       	or	r24, r25
    15b2:	09 f0       	breq	.+2      	; 0x15b6 <_ZN8GAPClass17matchesScanFilterERK9BLEDevice.constprop.102+0xe8>
    15b4:	10 e0       	ldi	r17, 0x00	; 0
    15b6:	ce 01       	movw	r24, r28
    15b8:	01 96       	adiw	r24, 0x01	; 1
    15ba:	0e 94 5f 0a 	call	0x14be	; 0x14be <_ZN6StringD1Ev>
    15be:	11 23       	and	r17, r17
    15c0:	09 f4       	brne	.+2      	; 0x15c4 <_ZN8GAPClass17matchesScanFilterERK9BLEDevice.constprop.102+0xf6>
    15c2:	b7 cf       	rjmp	.-146    	; 0x1532 <_ZN8GAPClass17matchesScanFilterERK9BLEDevice.constprop.102+0x64>
    15c4:	80 91 50 2b 	lds	r24, 0x2B50	; 0x802b50 <GAP+0x27>
    15c8:	90 91 51 2b 	lds	r25, 0x2B51	; 0x802b51 <GAP+0x28>
    15cc:	89 2b       	or	r24, r25
    15ce:	49 f1       	breq	.+82     	; 0x1622 <_ZN8GAPClass17matchesScanFilterERK9BLEDevice.constprop.102+0x154>
    15d0:	50 e0       	ldi	r21, 0x00	; 0
    15d2:	40 e0       	ldi	r20, 0x00	; 0
    15d4:	b7 01       	movw	r22, r14
    15d6:	ce 01       	movw	r24, r28
    15d8:	01 96       	adiw	r24, 0x01	; 1
    15da:	0e 94 d2 08 	call	0x11a4	; 0x11a4 <_ZNK9BLEDevice21advertisedServiceUuidEi>
    15de:	80 91 50 2b 	lds	r24, 0x2B50	; 0x802b50 <GAP+0x27>
    15e2:	90 91 51 2b 	lds	r25, 0x2B51	; 0x802b51 <GAP+0x28>
    15e6:	2d 81       	ldd	r18, Y+5	; 0x05
    15e8:	3e 81       	ldd	r19, Y+6	; 0x06
    15ea:	11 e0       	ldi	r17, 0x01	; 1
    15ec:	82 17       	cp	r24, r18
    15ee:	93 07       	cpc	r25, r19
    15f0:	61 f4       	brne	.+24     	; 0x160a <_ZN8GAPClass17matchesScanFilterERK9BLEDevice.constprop.102+0x13c>
    15f2:	89 2b       	or	r24, r25
    15f4:	49 f0       	breq	.+18     	; 0x1608 <_ZN8GAPClass17matchesScanFilterERK9BLEDevice.constprop.102+0x13a>
    15f6:	be 01       	movw	r22, r28
    15f8:	6f 5f       	subi	r22, 0xFF	; 255
    15fa:	7f 4f       	sbci	r23, 0xFF	; 255
    15fc:	8c e4       	ldi	r24, 0x4C	; 76
    15fe:	9b e2       	ldi	r25, 0x2B	; 43
    1600:	0e 94 a8 08 	call	0x1150	; 0x1150 <_ZNK6String16equalsIgnoreCaseERKS_.part.6>
    1604:	11 e0       	ldi	r17, 0x01	; 1
    1606:	81 11       	cpse	r24, r1
    1608:	10 e0       	ldi	r17, 0x00	; 0
    160a:	ce 01       	movw	r24, r28
    160c:	01 96       	adiw	r24, 0x01	; 1
    160e:	0e 94 5f 0a 	call	0x14be	; 0x14be <_ZN6StringD1Ev>
    1612:	81 e0       	ldi	r24, 0x01	; 1
    1614:	81 27       	eor	r24, r17
    1616:	8e cf       	rjmp	.-228    	; 0x1534 <_ZN8GAPClass17matchesScanFilterERK9BLEDevice.constprop.102+0x66>
    1618:	0e 94 a5 2a 	call	0x554a	; 0x554a <strcmp>
    161c:	c8 cf       	rjmp	.-112    	; 0x15ae <_ZN8GAPClass17matchesScanFilterERK9BLEDevice.constprop.102+0xe0>
    161e:	11 e0       	ldi	r17, 0x01	; 1
    1620:	ca cf       	rjmp	.-108    	; 0x15b6 <_ZN8GAPClass17matchesScanFilterERK9BLEDevice.constprop.102+0xe8>
    1622:	81 e0       	ldi	r24, 0x01	; 1
    1624:	87 cf       	rjmp	.-242    	; 0x1534 <_ZN8GAPClass17matchesScanFilterERK9BLEDevice.constprop.102+0x66>

00001626 <_ZN8GAPClassD1Ev>:
    1626:	cf 93       	push	r28
    1628:	df 93       	push	r29
    162a:	ec 01       	movw	r28, r24
    162c:	82 e4       	ldi	r24, 0x42	; 66
    162e:	9b e9       	ldi	r25, 0x9B	; 155
    1630:	88 83       	st	Y, r24
    1632:	99 83       	std	Y+1, r25	; 0x01
    1634:	ce 01       	movw	r24, r28
    1636:	89 96       	adiw	r24, 0x29	; 41
    1638:	0e 94 5f 0a 	call	0x14be	; 0x14be <_ZN6StringD1Ev>
    163c:	ce 01       	movw	r24, r28
    163e:	83 96       	adiw	r24, 0x23	; 35
    1640:	0e 94 5f 0a 	call	0x14be	; 0x14be <_ZN6StringD1Ev>
    1644:	ce 01       	movw	r24, r28
    1646:	4d 96       	adiw	r24, 0x1d	; 29
    1648:	0e 94 5f 0a 	call	0x14be	; 0x14be <_ZN6StringD1Ev>
    164c:	ce 01       	movw	r24, r28
    164e:	47 96       	adiw	r24, 0x17	; 23
    1650:	df 91       	pop	r29
    1652:	cf 91       	pop	r28
    1654:	0c 94 bb 03 	jmp	0x776	; 0x776 <_ZN13BLELinkedListIP17BLELocalAttributeE5clearEv>

00001658 <_ZN8GAPClassD0Ev>:
    1658:	cf 93       	push	r28
    165a:	df 93       	push	r29
    165c:	ec 01       	movw	r28, r24
    165e:	0e 94 13 0b 	call	0x1626	; 0x1626 <_ZN8GAPClassD1Ev>
    1662:	ce 01       	movw	r24, r28
    1664:	df 91       	pop	r29
    1666:	cf 91       	pop	r28
    1668:	0c 94 3a 29 	jmp	0x5274	; 0x5274 <free>

0000166c <_ZNK9BLEDevice24hasAdvertisedServiceUuidEv>:
    166c:	1f 93       	push	r17
    166e:	cf 93       	push	r28
    1670:	df 93       	push	r29
    1672:	cd b7       	in	r28, 0x3d	; 61
    1674:	de b7       	in	r29, 0x3e	; 62
    1676:	26 97       	sbiw	r28, 0x06	; 6
    1678:	cd bf       	out	0x3d, r28	; 61
    167a:	de bf       	out	0x3e, r29	; 62
    167c:	50 e0       	ldi	r21, 0x00	; 0
    167e:	40 e0       	ldi	r20, 0x00	; 0
    1680:	bc 01       	movw	r22, r24
    1682:	ce 01       	movw	r24, r28
    1684:	01 96       	adiw	r24, 0x01	; 1
    1686:	0e 94 d2 08 	call	0x11a4	; 0x11a4 <_ZNK9BLEDevice21advertisedServiceUuidEi>
    168a:	11 e0       	ldi	r17, 0x01	; 1
    168c:	8d 81       	ldd	r24, Y+5	; 0x05
    168e:	9e 81       	ldd	r25, Y+6	; 0x06
    1690:	89 2b       	or	r24, r25
    1692:	09 f4       	brne	.+2      	; 0x1696 <_ZNK9BLEDevice24hasAdvertisedServiceUuidEv+0x2a>
    1694:	10 e0       	ldi	r17, 0x00	; 0
    1696:	ce 01       	movw	r24, r28
    1698:	01 96       	adiw	r24, 0x01	; 1
    169a:	0e 94 5f 0a 	call	0x14be	; 0x14be <_ZN6StringD1Ev>
    169e:	81 2f       	mov	r24, r17
    16a0:	26 96       	adiw	r28, 0x06	; 6
    16a2:	cd bf       	out	0x3d, r28	; 61
    16a4:	de bf       	out	0x3e, r29	; 62
    16a6:	df 91       	pop	r29
    16a8:	cf 91       	pop	r28
    16aa:	1f 91       	pop	r17
    16ac:	08 95       	ret

000016ae <_ZNK9BLEDevice12hasLocalNameEv>:
    16ae:	1f 93       	push	r17
    16b0:	cf 93       	push	r28
    16b2:	df 93       	push	r29
    16b4:	cd b7       	in	r28, 0x3d	; 61
    16b6:	de b7       	in	r29, 0x3e	; 62
    16b8:	26 97       	sbiw	r28, 0x06	; 6
    16ba:	cd bf       	out	0x3d, r28	; 61
    16bc:	de bf       	out	0x3e, r29	; 62
    16be:	bc 01       	movw	r22, r24
    16c0:	ce 01       	movw	r24, r28
    16c2:	01 96       	adiw	r24, 0x01	; 1
    16c4:	0e 94 b3 09 	call	0x1366	; 0x1366 <_ZNK9BLEDevice9localNameEv>
    16c8:	11 e0       	ldi	r17, 0x01	; 1
    16ca:	8d 81       	ldd	r24, Y+5	; 0x05
    16cc:	9e 81       	ldd	r25, Y+6	; 0x06
    16ce:	89 2b       	or	r24, r25
    16d0:	09 f4       	brne	.+2      	; 0x16d4 <_ZNK9BLEDevice12hasLocalNameEv+0x26>
    16d2:	10 e0       	ldi	r17, 0x00	; 0
    16d4:	ce 01       	movw	r24, r28
    16d6:	01 96       	adiw	r24, 0x01	; 1
    16d8:	0e 94 5f 0a 	call	0x14be	; 0x14be <_ZN6StringD1Ev>
    16dc:	81 2f       	mov	r24, r17
    16de:	26 96       	adiw	r28, 0x06	; 6
    16e0:	cd bf       	out	0x3d, r28	; 61
    16e2:	de bf       	out	0x3e, r29	; 62
    16e4:	df 91       	pop	r29
    16e6:	cf 91       	pop	r28
    16e8:	1f 91       	pop	r17
    16ea:	08 95       	ret

000016ec <_ZN3sio5setupEv>:
    16ec:	88 ed       	ldi	r24, 0xD8	; 216
    16ee:	84 bf       	out	0x34, r24	; 52
    16f0:	10 92 61 00 	sts	0x0061, r1	; 0x800061 <__TEXT_REGION_LENGTH__+0x700061>
    16f4:	84 bf       	out	0x34, r24	; 52
    16f6:	80 e4       	ldi	r24, 0x40	; 64
    16f8:	80 93 10 01 	sts	0x0110, r24	; 0x800110 <__TEXT_REGION_LENGTH__+0x700110>
    16fc:	e0 e2       	ldi	r30, 0x20	; 32
    16fe:	f4 e0       	ldi	r31, 0x04	; 4
    1700:	80 e1       	ldi	r24, 0x10	; 16
    1702:	81 83       	std	Z+1, r24	; 0x01
    1704:	80 e2       	ldi	r24, 0x20	; 32
    1706:	82 83       	std	Z+2, r24	; 0x02
    1708:	e2 ee       	ldi	r30, 0xE2	; 226
    170a:	f5 e0       	ldi	r31, 0x05	; 5
    170c:	80 81       	ld	r24, Z
    170e:	80 64       	ori	r24, 0x40	; 64
    1710:	80 83       	st	Z, r24
    1712:	8b e0       	ldi	r24, 0x0B	; 11
    1714:	9a e1       	ldi	r25, 0x1A	; 26
    1716:	80 93 68 08 	sts	0x0868, r24	; 0x800868 <__TEXT_REGION_LENGTH__+0x700868>
    171a:	90 93 69 08 	sts	0x0869, r25	; 0x800869 <__TEXT_REGION_LENGTH__+0x700869>
    171e:	80 ec       	ldi	r24, 0xC0	; 192
    1720:	80 93 66 08 	sts	0x0866, r24	; 0x800866 <__TEXT_REGION_LENGTH__+0x700866>
    1724:	08 95       	ret

00001726 <_ZN3sio5PrintEPKc>:
    1726:	fc 01       	movw	r30, r24
    1728:	91 91       	ld	r25, Z+
    172a:	99 23       	and	r25, r25
    172c:	39 f0       	breq	.+14     	; 0x173c <_ZN3sio5PrintEPKc+0x16>
    172e:	80 91 64 08 	lds	r24, 0x0864	; 0x800864 <__TEXT_REGION_LENGTH__+0x700864>
    1732:	85 ff       	sbrs	r24, 5
    1734:	fc cf       	rjmp	.-8      	; 0x172e <_ZN3sio5PrintEPKc+0x8>
    1736:	90 93 62 08 	sts	0x0862, r25	; 0x800862 <__TEXT_REGION_LENGTH__+0x700862>
    173a:	f6 cf       	rjmp	.-20     	; 0x1728 <_ZN3sio5PrintEPKc+0x2>
    173c:	08 95       	ret

0000173e <_ZN3sio7PrintlnEPKc>:
    173e:	0e 94 93 0b 	call	0x1726	; 0x1726 <_ZN3sio5PrintEPKc>
    1742:	86 e7       	ldi	r24, 0x76	; 118
    1744:	9b e9       	ldi	r25, 0x9B	; 155
    1746:	0c 94 93 0b 	jmp	0x1726	; 0x1726 <_ZN3sio5PrintEPKc>

0000174a <_ZN21HCIUartTransportClass5writeEPKhj>:
    174a:	ef 92       	push	r14
    174c:	ff 92       	push	r15
    174e:	0f 93       	push	r16
    1750:	1f 93       	push	r17
    1752:	cf 93       	push	r28
    1754:	df 93       	push	r29
    1756:	ec 01       	movw	r28, r24
    1758:	8b 01       	movw	r16, r22
    175a:	7a 01       	movw	r14, r20
    175c:	80 91 a8 04 	lds	r24, 0x04A8	; 0x8004a8 <__TEXT_REGION_LENGTH__+0x7004a8>
    1760:	83 fd       	sbrc	r24, 3
    1762:	fc cf       	rjmp	.-8      	; 0x175c <_ZN21HCIUartTransportClass5writeEPKhj+0x12>
    1764:	8f ea       	ldi	r24, 0xAF	; 175
    1766:	9b e9       	ldi	r25, 0x9B	; 155
    1768:	0e 94 9f 0b 	call	0x173e	; 0x173e <_ZN3sio7PrintlnEPKc>
    176c:	8a 81       	ldd	r24, Y+2	; 0x02
    176e:	9b 81       	ldd	r25, Y+3	; 0x03
    1770:	dc 01       	movw	r26, r24
    1772:	ed 91       	ld	r30, X+
    1774:	fc 91       	ld	r31, X
    1776:	02 80       	ldd	r0, Z+2	; 0x02
    1778:	f3 81       	ldd	r31, Z+3	; 0x03
    177a:	e0 2d       	mov	r30, r0
    177c:	a7 01       	movw	r20, r14
    177e:	b8 01       	movw	r22, r16
    1780:	09 95       	icall
    1782:	8c 01       	movw	r16, r24
    1784:	8a 81       	ldd	r24, Y+2	; 0x02
    1786:	9b 81       	ldd	r25, Y+3	; 0x03
    1788:	dc 01       	movw	r26, r24
    178a:	ed 91       	ld	r30, X+
    178c:	fc 91       	ld	r31, X
    178e:	06 80       	ldd	r0, Z+6	; 0x06
    1790:	f7 81       	ldd	r31, Z+7	; 0x07
    1792:	e0 2d       	mov	r30, r0
    1794:	09 95       	icall
    1796:	c8 01       	movw	r24, r16
    1798:	df 91       	pop	r29
    179a:	cf 91       	pop	r28
    179c:	1f 91       	pop	r17
    179e:	0f 91       	pop	r16
    17a0:	ff 90       	pop	r15
    17a2:	ef 90       	pop	r14
    17a4:	08 95       	ret

000017a6 <_ZN8HCIClass11sendCommandEjhPv.constprop.39>:
    17a6:	5f 92       	push	r5
    17a8:	6f 92       	push	r6
    17aa:	7f 92       	push	r7
    17ac:	8f 92       	push	r8
    17ae:	9f 92       	push	r9
    17b0:	af 92       	push	r10
    17b2:	bf 92       	push	r11
    17b4:	cf 92       	push	r12
    17b6:	df 92       	push	r13
    17b8:	ef 92       	push	r14
    17ba:	ff 92       	push	r15
    17bc:	0f 93       	push	r16
    17be:	1f 93       	push	r17
    17c0:	cf 93       	push	r28
    17c2:	df 93       	push	r29
    17c4:	cd b7       	in	r28, 0x3d	; 61
    17c6:	de b7       	in	r29, 0x3e	; 62
    17c8:	c0 58       	subi	r28, 0x80	; 128
    17ca:	d1 09       	sbc	r29, r1
    17cc:	cd bf       	out	0x3d, r28	; 61
    17ce:	de bf       	out	0x3e, r29	; 62
    17d0:	8c 01       	movw	r16, r24
    17d2:	56 2e       	mov	r5, r22
    17d4:	4a 01       	movw	r8, r20
    17d6:	6d b6       	in	r6, 0x3d	; 61
    17d8:	7e b6       	in	r7, 0x3e	; 62
    17da:	1f 93       	push	r17
    17dc:	8f 93       	push	r24
    17de:	80 91 44 29 	lds	r24, 0x2944	; 0x802944 <HCI+0x109>
    17e2:	8f 93       	push	r24
    17e4:	80 91 43 29 	lds	r24, 0x2943	; 0x802943 <HCI+0x108>
    17e8:	8f 93       	push	r24
    17ea:	85 e1       	ldi	r24, 0x15	; 21
    17ec:	9c e9       	ldi	r25, 0x9C	; 156
    17ee:	9f 93       	push	r25
    17f0:	8f 93       	push	r24
    17f2:	ce 01       	movw	r24, r28
    17f4:	01 96       	adiw	r24, 0x01	; 1
    17f6:	7c 01       	movw	r14, r24
    17f8:	9f 93       	push	r25
    17fa:	8f 93       	push	r24
    17fc:	0e 94 b5 2a 	call	0x556a	; 0x556a <sprintf>
    1800:	c7 01       	movw	r24, r14
    1802:	0e 94 9f 0b 	call	0x173e	; 0x173e <_ZN3sio7PrintlnEPKc>
    1806:	45 2d       	mov	r20, r5
    1808:	50 e0       	ldi	r21, 0x00	; 0
    180a:	5a 01       	movw	r10, r20
    180c:	94 e0       	ldi	r25, 0x04	; 4
    180e:	a9 0e       	add	r10, r25
    1810:	b1 1c       	adc	r11, r1
    1812:	ed b7       	in	r30, 0x3d	; 61
    1814:	fe b7       	in	r31, 0x3e	; 62
    1816:	38 96       	adiw	r30, 0x08	; 8
    1818:	ed bf       	out	0x3d, r30	; 61
    181a:	fe bf       	out	0x3e, r31	; 62
    181c:	8d b7       	in	r24, 0x3d	; 61
    181e:	9e b7       	in	r25, 0x3e	; 62
    1820:	8a 19       	sub	r24, r10
    1822:	9b 09       	sbc	r25, r11
    1824:	8d bf       	out	0x3d, r24	; 61
    1826:	9e bf       	out	0x3e, r25	; 62
    1828:	ed b7       	in	r30, 0x3d	; 61
    182a:	fe b7       	in	r31, 0x3e	; 62
    182c:	31 96       	adiw	r30, 0x01	; 1
    182e:	6f 01       	movw	r12, r30
    1830:	81 e0       	ldi	r24, 0x01	; 1
    1832:	ed b7       	in	r30, 0x3d	; 61
    1834:	fe b7       	in	r31, 0x3e	; 62
    1836:	81 83       	std	Z+1, r24	; 0x01
    1838:	f6 01       	movw	r30, r12
    183a:	01 83       	std	Z+1, r16	; 0x01
    183c:	12 83       	std	Z+2, r17	; 0x02
    183e:	53 82       	std	Z+3, r5	; 0x03
    1840:	8d b7       	in	r24, 0x3d	; 61
    1842:	9e b7       	in	r25, 0x3e	; 62
    1844:	05 96       	adiw	r24, 0x05	; 5
    1846:	b4 01       	movw	r22, r8
    1848:	0e 94 95 2a 	call	0x552a	; 0x552a <memcpy>
    184c:	80 91 3d 28 	lds	r24, 0x283D	; 0x80283d <HCI+0x2>
    1850:	90 91 3e 28 	lds	r25, 0x283E	; 0x80283e <HCI+0x3>
    1854:	89 2b       	or	r24, r25
    1856:	39 f0       	breq	.+14     	; 0x1866 <_ZN8HCIClass11sendCommandEjhPv.constprop.39+0xc0>
    1858:	64 e0       	ldi	r22, 0x04	; 4
    185a:	65 0d       	add	r22, r5
    185c:	a6 01       	movw	r20, r12
    185e:	82 ed       	ldi	r24, 0xD2	; 210
    1860:	9b e9       	ldi	r25, 0x9B	; 155
    1862:	0e 94 e4 07 	call	0xfc8	; 0xfc8 <_ZN8HCIClass7dumpPktEPKchPh.constprop.95>
    1866:	a5 01       	movw	r20, r10
    1868:	b6 01       	movw	r22, r12
    186a:	83 e3       	ldi	r24, 0x33	; 51
    186c:	98 e2       	ldi	r25, 0x28	; 40
    186e:	0e 94 a5 0b 	call	0x174a	; 0x174a <_ZN21HCIUartTransportClass5writeEPKhj>
    1872:	8f ef       	ldi	r24, 0xFF	; 255
    1874:	9f ef       	ldi	r25, 0xFF	; 255
    1876:	80 93 43 29 	sts	0x2943, r24	; 0x802943 <HCI+0x108>
    187a:	90 93 44 29 	sts	0x2944, r25	; 0x802944 <HCI+0x109>
    187e:	80 93 45 29 	sts	0x2945, r24	; 0x802945 <HCI+0x10a>
    1882:	90 93 46 29 	sts	0x2946, r25	; 0x802946 <HCI+0x10b>
    1886:	1f 93       	push	r17
    1888:	0f 93       	push	r16
    188a:	8f 93       	push	r24
    188c:	8f 93       	push	r24
    188e:	85 e1       	ldi	r24, 0x15	; 21
    1890:	9c e9       	ldi	r25, 0x9C	; 156
    1892:	9f 93       	push	r25
    1894:	8f 93       	push	r24
    1896:	ff 92       	push	r15
    1898:	ef 92       	push	r14
    189a:	0e 94 b5 2a 	call	0x556a	; 0x556a <sprintf>
    189e:	c7 01       	movw	r24, r14
    18a0:	0e 94 9f 0b 	call	0x173e	; 0x173e <_ZN3sio7PrintlnEPKc>
    18a4:	85 ee       	ldi	r24, 0xE5	; 229
    18a6:	9b e9       	ldi	r25, 0x9B	; 155
    18a8:	0e 94 9f 0b 	call	0x173e	; 0x173e <_ZN3sio7PrintlnEPKc>
    18ac:	8d b7       	in	r24, 0x3d	; 61
    18ae:	9e b7       	in	r25, 0x3e	; 62
    18b0:	08 96       	adiw	r24, 0x08	; 8
    18b2:	8d bf       	out	0x3d, r24	; 61
    18b4:	9e bf       	out	0x3e, r25	; 62
    18b6:	d1 2c       	mov	r13, r1
    18b8:	c1 2c       	mov	r12, r1
    18ba:	84 e6       	ldi	r24, 0x64	; 100
    18bc:	88 2e       	mov	r8, r24
    18be:	91 2c       	mov	r9, r1
    18c0:	95 e1       	ldi	r25, 0x15	; 21
    18c2:	a9 2e       	mov	r10, r25
    18c4:	9c e9       	ldi	r25, 0x9C	; 156
    18c6:	b9 2e       	mov	r11, r25
    18c8:	80 91 43 29 	lds	r24, 0x2943	; 0x802943 <HCI+0x108>
    18cc:	90 91 44 29 	lds	r25, 0x2944	; 0x802944 <HCI+0x109>
    18d0:	08 17       	cp	r16, r24
    18d2:	19 07       	cpc	r17, r25
    18d4:	69 f1       	breq	.+90     	; 0x1930 <_ZN8HCIClass11sendCommandEjhPv.constprop.39+0x18a>
    18d6:	e8 e8       	ldi	r30, 0x88	; 136
    18d8:	ce 16       	cp	r12, r30
    18da:	e3 e1       	ldi	r30, 0x13	; 19
    18dc:	de 06       	cpc	r13, r30
    18de:	49 f1       	breq	.+82     	; 0x1932 <_ZN8HCIClass11sendCommandEjhPv.constprop.39+0x18c>
    18e0:	8f e9       	ldi	r24, 0x9F	; 159
    18e2:	9f e0       	ldi	r25, 0x0F	; 15
    18e4:	01 97       	sbiw	r24, 0x01	; 1
    18e6:	f1 f7       	brne	.-4      	; 0x18e4 <_ZN8HCIClass11sendCommandEjhPv.constprop.39+0x13e>
    18e8:	00 c0       	rjmp	.+0      	; 0x18ea <_ZN8HCIClass11sendCommandEjhPv.constprop.39+0x144>
    18ea:	00 00       	nop
    18ec:	c6 01       	movw	r24, r12
    18ee:	b4 01       	movw	r22, r8
    18f0:	0e 94 5d 28 	call	0x50ba	; 0x50ba <__udivmodhi4>
    18f4:	89 2b       	or	r24, r25
    18f6:	b1 f4       	brne	.+44     	; 0x1924 <_ZN8HCIClass11sendCommandEjhPv.constprop.39+0x17e>
    18f8:	1f 93       	push	r17
    18fa:	0f 93       	push	r16
    18fc:	80 91 44 29 	lds	r24, 0x2944	; 0x802944 <HCI+0x109>
    1900:	8f 93       	push	r24
    1902:	80 91 43 29 	lds	r24, 0x2943	; 0x802943 <HCI+0x108>
    1906:	8f 93       	push	r24
    1908:	bf 92       	push	r11
    190a:	af 92       	push	r10
    190c:	ff 92       	push	r15
    190e:	ef 92       	push	r14
    1910:	0e 94 b5 2a 	call	0x556a	; 0x556a <sprintf>
    1914:	c7 01       	movw	r24, r14
    1916:	0e 94 9f 0b 	call	0x173e	; 0x173e <_ZN3sio7PrintlnEPKc>
    191a:	ed b7       	in	r30, 0x3d	; 61
    191c:	fe b7       	in	r31, 0x3e	; 62
    191e:	38 96       	adiw	r30, 0x08	; 8
    1920:	ed bf       	out	0x3d, r30	; 61
    1922:	fe bf       	out	0x3e, r31	; 62
    1924:	ff ef       	ldi	r31, 0xFF	; 255
    1926:	cf 1a       	sub	r12, r31
    1928:	df 0a       	sbc	r13, r31
    192a:	0e 94 05 1e 	call	0x3c0a	; 0x3c0a <_ZN8HCIClass4pollEv.constprop.33>
    192e:	cc cf       	rjmp	.-104    	; 0x18c8 <_ZN8HCIClass11sendCommandEjhPv.constprop.39+0x122>
    1930:	c8 01       	movw	r24, r16
    1932:	1f 93       	push	r17
    1934:	0f 93       	push	r16
    1936:	9f 93       	push	r25
    1938:	8f 93       	push	r24
    193a:	df 92       	push	r13
    193c:	cf 92       	push	r12
    193e:	85 e0       	ldi	r24, 0x05	; 5
    1940:	9c e9       	ldi	r25, 0x9C	; 156
    1942:	9f 93       	push	r25
    1944:	8f 93       	push	r24
    1946:	ff 92       	push	r15
    1948:	ef 92       	push	r14
    194a:	0e 94 b5 2a 	call	0x556a	; 0x556a <sprintf>
    194e:	c7 01       	movw	r24, r14
    1950:	0e 94 9f 0b 	call	0x173e	; 0x173e <_ZN3sio7PrintlnEPKc>
    1954:	86 e3       	ldi	r24, 0x36	; 54
    1956:	9c e9       	ldi	r25, 0x9C	; 156
    1958:	0e 94 9f 0b 	call	0x173e	; 0x173e <_ZN3sio7PrintlnEPKc>
    195c:	8d b7       	in	r24, 0x3d	; 61
    195e:	9e b7       	in	r25, 0x3e	; 62
    1960:	0a 96       	adiw	r24, 0x0a	; 10
    1962:	8d bf       	out	0x3d, r24	; 61
    1964:	9e bf       	out	0x3e, r25	; 62
    1966:	80 91 45 29 	lds	r24, 0x2945	; 0x802945 <HCI+0x10a>
    196a:	90 91 46 29 	lds	r25, 0x2946	; 0x802946 <HCI+0x10b>
    196e:	6d be       	out	0x3d, r6	; 61
    1970:	7e be       	out	0x3e, r7	; 62
    1972:	c0 58       	subi	r28, 0x80	; 128
    1974:	df 4f       	sbci	r29, 0xFF	; 255
    1976:	cd bf       	out	0x3d, r28	; 61
    1978:	de bf       	out	0x3e, r29	; 62
    197a:	df 91       	pop	r29
    197c:	cf 91       	pop	r28
    197e:	1f 91       	pop	r17
    1980:	0f 91       	pop	r16
    1982:	ff 90       	pop	r15
    1984:	ef 90       	pop	r14
    1986:	df 90       	pop	r13
    1988:	cf 90       	pop	r12
    198a:	bf 90       	pop	r11
    198c:	af 90       	pop	r10
    198e:	9f 90       	pop	r9
    1990:	8f 90       	pop	r8
    1992:	7f 90       	pop	r7
    1994:	6f 90       	pop	r6
    1996:	5f 90       	pop	r5
    1998:	08 95       	ret

0000199a <_ZN14BLELocalDevice4scanEb>:
    199a:	0f 93       	push	r16
    199c:	1f 93       	push	r17
    199e:	cf 93       	push	r28
    19a0:	df 93       	push	r29
    19a2:	cd b7       	in	r28, 0x3d	; 61
    19a4:	de b7       	in	r29, 0x3e	; 62
    19a6:	27 97       	sbiw	r28, 0x07	; 7
    19a8:	cd bf       	out	0x3d, r28	; 61
    19aa:	de bf       	out	0x3e, r29	; 62
    19ac:	06 2f       	mov	r16, r22
    19ae:	19 82       	std	Y+1, r1	; 0x01
    19b0:	11 e0       	ldi	r17, 0x01	; 1
    19b2:	1a 83       	std	Y+2, r17	; 0x02
    19b4:	ae 01       	movw	r20, r28
    19b6:	4f 5f       	subi	r20, 0xFF	; 255
    19b8:	5f 4f       	sbci	r21, 0xFF	; 255
    19ba:	62 e0       	ldi	r22, 0x02	; 2
    19bc:	8c e0       	ldi	r24, 0x0C	; 12
    19be:	90 e2       	ldi	r25, 0x20	; 32
    19c0:	0e 94 d3 0b 	call	0x17a6	; 0x17a6 <_ZN8HCIClass11sendCommandEjhPv.constprop.39>
    19c4:	19 83       	std	Y+1, r17	; 0x01
    19c6:	80 e1       	ldi	r24, 0x10	; 16
    19c8:	90 e0       	ldi	r25, 0x00	; 0
    19ca:	8a 83       	std	Y+2, r24	; 0x02
    19cc:	9b 83       	std	Y+3, r25	; 0x03
    19ce:	8c 83       	std	Y+4, r24	; 0x04
    19d0:	9d 83       	std	Y+5, r25	; 0x05
    19d2:	1e 82       	std	Y+6, r1	; 0x06
    19d4:	1f 82       	std	Y+7, r1	; 0x07
    19d6:	ae 01       	movw	r20, r28
    19d8:	4f 5f       	subi	r20, 0xFF	; 255
    19da:	5f 4f       	sbci	r21, 0xFF	; 255
    19dc:	67 e0       	ldi	r22, 0x07	; 7
    19de:	8b e0       	ldi	r24, 0x0B	; 11
    19e0:	90 e2       	ldi	r25, 0x20	; 32
    19e2:	0e 94 d3 0b 	call	0x17a6	; 0x17a6 <_ZN8HCIClass11sendCommandEjhPv.constprop.39>
    19e6:	89 2b       	or	r24, r25
    19e8:	e1 f4       	brne	.+56     	; 0x1a22 <_ZN14BLELocalDevice4scanEb+0x88>
    19ea:	10 93 2c 2b 	sts	0x2B2C, r17	; 0x802b2c <GAP+0x3>
    19ee:	19 83       	std	Y+1, r17	; 0x01
    19f0:	10 27       	eor	r17, r16
    19f2:	1a 83       	std	Y+2, r17	; 0x02
    19f4:	ae 01       	movw	r20, r28
    19f6:	4f 5f       	subi	r20, 0xFF	; 255
    19f8:	5f 4f       	sbci	r21, 0xFF	; 255
    19fa:	62 e0       	ldi	r22, 0x02	; 2
    19fc:	8c e0       	ldi	r24, 0x0C	; 12
    19fe:	90 e2       	ldi	r25, 0x20	; 32
    1a00:	0e 94 d3 0b 	call	0x17a6	; 0x17a6 <_ZN8HCIClass11sendCommandEjhPv.constprop.39>
    1a04:	31 e0       	ldi	r19, 0x01	; 1
    1a06:	20 e0       	ldi	r18, 0x00	; 0
    1a08:	89 2b       	or	r24, r25
    1a0a:	09 f0       	breq	.+2      	; 0x1a0e <_ZN14BLELocalDevice4scanEb+0x74>
    1a0c:	30 e0       	ldi	r19, 0x00	; 0
    1a0e:	83 2f       	mov	r24, r19
    1a10:	92 2f       	mov	r25, r18
    1a12:	27 96       	adiw	r28, 0x07	; 7
    1a14:	cd bf       	out	0x3d, r28	; 61
    1a16:	de bf       	out	0x3e, r29	; 62
    1a18:	df 91       	pop	r29
    1a1a:	cf 91       	pop	r28
    1a1c:	1f 91       	pop	r17
    1a1e:	0f 91       	pop	r16
    1a20:	08 95       	ret
    1a22:	80 e0       	ldi	r24, 0x00	; 0
    1a24:	90 e0       	ldi	r25, 0x00	; 0
    1a26:	f5 cf       	rjmp	.-22     	; 0x1a12 <_ZN14BLELocalDevice4scanEb+0x78>

00001a28 <_ZN22BLELocalCharacteristic10writeValueEPKhi>:
    1a28:	2f 92       	push	r2
    1a2a:	3f 92       	push	r3
    1a2c:	4f 92       	push	r4
    1a2e:	5f 92       	push	r5
    1a30:	6f 92       	push	r6
    1a32:	7f 92       	push	r7
    1a34:	8f 92       	push	r8
    1a36:	9f 92       	push	r9
    1a38:	af 92       	push	r10
    1a3a:	bf 92       	push	r11
    1a3c:	cf 92       	push	r12
    1a3e:	df 92       	push	r13
    1a40:	ef 92       	push	r14
    1a42:	ff 92       	push	r15
    1a44:	0f 93       	push	r16
    1a46:	1f 93       	push	r17
    1a48:	cf 93       	push	r28
    1a4a:	df 93       	push	r29
    1a4c:	cd b7       	in	r28, 0x3d	; 61
    1a4e:	de b7       	in	r29, 0x3e	; 62
    1a50:	c6 56       	subi	r28, 0x66	; 102
    1a52:	d1 09       	sbc	r29, r1
    1a54:	cd bf       	out	0x3d, r28	; 61
    1a56:	de bf       	out	0x3e, r29	; 62
    1a58:	8c 01       	movw	r16, r24
    1a5a:	3b 01       	movw	r6, r22
    1a5c:	4a 01       	movw	r8, r20
    1a5e:	2d b7       	in	r18, 0x3d	; 61
    1a60:	3e b7       	in	r19, 0x3e	; 62
    1a62:	a7 96       	adiw	r28, 0x27	; 39
    1a64:	2e af       	std	Y+62, r18	; 0x3e
    1a66:	3f af       	std	Y+63, r19	; 0x3f
    1a68:	a7 97       	sbiw	r28, 0x27	; 39
    1a6a:	dc 01       	movw	r26, r24
    1a6c:	58 96       	adiw	r26, 0x18	; 24
    1a6e:	4d 91       	ld	r20, X+
    1a70:	5c 91       	ld	r21, X
    1a72:	84 16       	cp	r8, r20
    1a74:	95 06       	cpc	r9, r21
    1a76:	0c f4       	brge	.+2      	; 0x1a7a <_ZN22BLELocalCharacteristic10writeValueEPKhi+0x52>
    1a78:	a4 01       	movw	r20, r8
    1a7a:	f8 01       	movw	r30, r16
    1a7c:	44 8f       	std	Z+28, r20	; 0x1c
    1a7e:	55 8f       	std	Z+29, r21	; 0x1d
    1a80:	b3 01       	movw	r22, r6
    1a82:	82 8d       	ldd	r24, Z+26	; 0x1a
    1a84:	93 8d       	ldd	r25, Z+27	; 0x1b
    1a86:	0e 94 95 2a 	call	0x552a	; 0x552a <memcpy>
    1a8a:	d8 01       	movw	r26, r16
    1a8c:	5e 96       	adiw	r26, 0x1e	; 30
    1a8e:	8c 91       	ld	r24, X
    1a90:	5e 97       	sbiw	r26, 0x1e	; 30
    1a92:	88 23       	and	r24, r24
    1a94:	41 f0       	breq	.+16     	; 0x1aa6 <_ZN22BLELocalCharacteristic10writeValueEPKhi+0x7e>
    1a96:	58 96       	adiw	r26, 0x18	; 24
    1a98:	8d 91       	ld	r24, X+
    1a9a:	9c 91       	ld	r25, X
    1a9c:	59 97       	sbiw	r26, 0x19	; 25
    1a9e:	5c 96       	adiw	r26, 0x1c	; 28
    1aa0:	8d 93       	st	X+, r24
    1aa2:	9c 93       	st	X, r25
    1aa4:	5d 97       	sbiw	r26, 0x1d	; 29
    1aa6:	f8 01       	movw	r30, r16
    1aa8:	87 89       	ldd	r24, Z+23	; 0x17
    1aaa:	85 ff       	sbrs	r24, 5
    1aac:	87 c0       	rjmp	.+270    	; 0x1bbc <_ZN22BLELocalCharacteristic10writeValueEPKhi+0x194>
    1aae:	93 a1       	ldd	r25, Z+35	; 0x23
    1ab0:	91 ff       	sbrs	r25, 1
    1ab2:	84 c0       	rjmp	.+264    	; 0x1bbc <_ZN22BLELocalCharacteristic10writeValueEPKhi+0x194>
    1ab4:	e4 8c       	ldd	r14, Z+28	; 0x1c
    1ab6:	f5 8c       	ldd	r15, Z+29	; 0x1d
    1ab8:	22 8c       	ldd	r2, Z+26	; 0x1a
    1aba:	33 8c       	ldd	r3, Z+27	; 0x1b
    1abc:	47 8c       	ldd	r4, Z+31	; 0x1f
    1abe:	50 a0       	ldd	r5, Z+32	; 0x20
    1ac0:	ff ef       	ldi	r31, 0xFF	; 255
    1ac2:	4f 1a       	sub	r4, r31
    1ac4:	5f 0a       	sbc	r5, r31
    1ac6:	06 ee       	ldi	r16, 0xE6	; 230
    1ac8:	1a e2       	ldi	r17, 0x2A	; 42
    1aca:	d1 2c       	mov	r13, r1
    1acc:	c1 2c       	mov	r12, r1
    1ace:	6d b6       	in	r6, 0x3d	; 61
    1ad0:	7e b6       	in	r7, 0x3e	; 62
    1ad2:	d8 01       	movw	r26, r16
    1ad4:	18 96       	adiw	r26, 0x08	; 8
    1ad6:	8d 90       	ld	r8, X+
    1ad8:	9c 90       	ld	r9, X
    1ada:	bf ef       	ldi	r27, 0xFF	; 255
    1adc:	8b 16       	cp	r8, r27
    1ade:	9b 06       	cpc	r9, r27
    1ae0:	09 f4       	brne	.+2      	; 0x1ae4 <_ZN22BLELocalCharacteristic10writeValueEPKhi+0xbc>
    1ae2:	42 c0       	rjmp	.+132    	; 0x1b68 <_ZN22BLELocalCharacteristic10writeValueEPKhi+0x140>
    1ae4:	f8 01       	movw	r30, r16
    1ae6:	82 89       	ldd	r24, Z+18	; 0x12
    1ae8:	93 89       	ldd	r25, Z+19	; 0x13
    1aea:	2d b7       	in	r18, 0x3d	; 61
    1aec:	3e b7       	in	r19, 0x3e	; 62
    1aee:	28 1b       	sub	r18, r24
    1af0:	39 0b       	sbc	r19, r25
    1af2:	2d bf       	out	0x3d, r18	; 61
    1af4:	3e bf       	out	0x3e, r19	; 62
    1af6:	ad b7       	in	r26, 0x3d	; 61
    1af8:	be b7       	in	r27, 0x3e	; 62
    1afa:	11 96       	adiw	r26, 0x01	; 1
    1afc:	5d 01       	movw	r10, r26
    1afe:	2d e1       	ldi	r18, 0x1D	; 29
    1b00:	ed b7       	in	r30, 0x3d	; 61
    1b02:	fe b7       	in	r31, 0x3e	; 62
    1b04:	21 83       	std	Z+1, r18	; 0x01
    1b06:	11 96       	adiw	r26, 0x01	; 1
    1b08:	4d 92       	st	X+, r4
    1b0a:	5c 92       	st	X, r5
    1b0c:	12 97       	sbiw	r26, 0x02	; 2
    1b0e:	03 97       	sbiw	r24, 0x03	; 3
    1b10:	e8 16       	cp	r14, r24
    1b12:	f9 06       	cpc	r15, r25
    1b14:	08 f4       	brcc	.+2      	; 0x1b18 <_ZN22BLELocalCharacteristic10writeValueEPKhi+0xf0>
    1b16:	c7 01       	movw	r24, r14
    1b18:	7c 01       	movw	r14, r24
    1b1a:	ac 01       	movw	r20, r24
    1b1c:	b1 01       	movw	r22, r2
    1b1e:	c5 01       	movw	r24, r10
    1b20:	03 96       	adiw	r24, 0x03	; 3
    1b22:	0e 94 95 2a 	call	0x552a	; 0x552a <memcpy>
    1b26:	10 92 18 2b 	sts	0x2B18, r1	; 0x802b18 <ATT+0x32>
    1b2a:	a7 01       	movw	r20, r14
    1b2c:	4d 5f       	subi	r20, 0xFD	; 253
    1b2e:	5f 4f       	sbci	r21, 0xFF	; 255
    1b30:	95 01       	movw	r18, r10
    1b32:	64 e0       	ldi	r22, 0x04	; 4
    1b34:	c4 01       	movw	r24, r8
    1b36:	0e 94 0a 1e 	call	0x3c14	; 0x3c14 <_ZN8HCIClass10sendAclPktEjhhPv.constprop.37>
    1b3a:	58 01       	movw	r10, r16
    1b3c:	3c e0       	ldi	r19, 0x0C	; 12
    1b3e:	a3 0e       	add	r10, r19
    1b40:	b1 1c       	adc	r11, r1
    1b42:	80 91 18 2b 	lds	r24, 0x2B18	; 0x802b18 <ATT+0x32>
    1b46:	81 11       	cpse	r24, r1
    1b48:	0a c0       	rjmp	.+20     	; 0x1b5e <_ZN22BLELocalCharacteristic10writeValueEPKhi+0x136>
    1b4a:	0e 94 05 1e 	call	0x3c0a	; 0x3c0a <_ZN8HCIClass4pollEv.constprop.33>
    1b4e:	b5 01       	movw	r22, r10
    1b50:	d8 01       	movw	r26, r16
    1b52:	1b 96       	adiw	r26, 0x0b	; 11
    1b54:	8c 91       	ld	r24, X
    1b56:	0e 94 1f 05 	call	0xa3e	; 0xa3e <_ZNK8ATTClass16connectionHandleEhPKh.constprop.84>
    1b5a:	01 96       	adiw	r24, 0x01	; 1
    1b5c:	91 f7       	brne	.-28     	; 0x1b42 <_ZN22BLELocalCharacteristic10writeValueEPKhi+0x11a>
    1b5e:	ef ef       	ldi	r30, 0xFF	; 255
    1b60:	ce 1a       	sub	r12, r30
    1b62:	de 0a       	sbc	r13, r30
    1b64:	6d be       	out	0x3d, r6	; 61
    1b66:	7e be       	out	0x3e, r7	; 62
    1b68:	02 5f       	subi	r16, 0xF2	; 242
    1b6a:	1f 4f       	sbci	r17, 0xFF	; 255
    1b6c:	fb e2       	ldi	r31, 0x2B	; 43
    1b6e:	00 31       	cpi	r16, 0x10	; 16
    1b70:	1f 07       	cpc	r17, r31
    1b72:	09 f0       	breq	.+2      	; 0x1b76 <_ZN22BLELocalCharacteristic10writeValueEPKhi+0x14e>
    1b74:	ac cf       	rjmp	.-168    	; 0x1ace <_ZN22BLELocalCharacteristic10writeValueEPKhi+0xa6>
    1b76:	81 e0       	ldi	r24, 0x01	; 1
    1b78:	90 e0       	ldi	r25, 0x00	; 0
    1b7a:	1c 14       	cp	r1, r12
    1b7c:	1d 04       	cpc	r1, r13
    1b7e:	0c f0       	brlt	.+2      	; 0x1b82 <_ZN22BLELocalCharacteristic10writeValueEPKhi+0x15a>
    1b80:	80 e0       	ldi	r24, 0x00	; 0
    1b82:	a7 96       	adiw	r28, 0x27	; 39
    1b84:	ee ad       	ldd	r30, Y+62	; 0x3e
    1b86:	ff ad       	ldd	r31, Y+63	; 0x3f
    1b88:	a7 97       	sbiw	r28, 0x27	; 39
    1b8a:	ed bf       	out	0x3d, r30	; 61
    1b8c:	fe bf       	out	0x3e, r31	; 62
    1b8e:	ca 59       	subi	r28, 0x9A	; 154
    1b90:	df 4f       	sbci	r29, 0xFF	; 255
    1b92:	cd bf       	out	0x3d, r28	; 61
    1b94:	de bf       	out	0x3e, r29	; 62
    1b96:	df 91       	pop	r29
    1b98:	cf 91       	pop	r28
    1b9a:	1f 91       	pop	r17
    1b9c:	0f 91       	pop	r16
    1b9e:	ff 90       	pop	r15
    1ba0:	ef 90       	pop	r14
    1ba2:	df 90       	pop	r13
    1ba4:	cf 90       	pop	r12
    1ba6:	bf 90       	pop	r11
    1ba8:	af 90       	pop	r10
    1baa:	9f 90       	pop	r9
    1bac:	8f 90       	pop	r8
    1bae:	7f 90       	pop	r7
    1bb0:	6f 90       	pop	r6
    1bb2:	5f 90       	pop	r5
    1bb4:	4f 90       	pop	r4
    1bb6:	3f 90       	pop	r3
    1bb8:	2f 90       	pop	r2
    1bba:	08 95       	ret
    1bbc:	84 ff       	sbrs	r24, 4
    1bbe:	57 c0       	rjmp	.+174    	; 0x1c6e <_ZN22BLELocalCharacteristic10writeValueEPKhi+0x246>
    1bc0:	d8 01       	movw	r26, r16
    1bc2:	93 96       	adiw	r26, 0x23	; 35
    1bc4:	8c 91       	ld	r24, X
    1bc6:	93 97       	sbiw	r26, 0x23	; 35
    1bc8:	80 ff       	sbrs	r24, 0
    1bca:	51 c0       	rjmp	.+162    	; 0x1c6e <_ZN22BLELocalCharacteristic10writeValueEPKhi+0x246>
    1bcc:	5c 96       	adiw	r26, 0x1c	; 28
    1bce:	ed 90       	ld	r14, X+
    1bd0:	fc 90       	ld	r15, X
    1bd2:	5d 97       	sbiw	r26, 0x1d	; 29
    1bd4:	5a 96       	adiw	r26, 0x1a	; 26
    1bd6:	2d 90       	ld	r2, X+
    1bd8:	3c 90       	ld	r3, X
    1bda:	5b 97       	sbiw	r26, 0x1b	; 27
    1bdc:	5f 96       	adiw	r26, 0x1f	; 31
    1bde:	4d 90       	ld	r4, X+
    1be0:	5c 90       	ld	r5, X
    1be2:	bf ef       	ldi	r27, 0xFF	; 255
    1be4:	4b 1a       	sub	r4, r27
    1be6:	5b 0a       	sbc	r5, r27
    1be8:	06 ee       	ldi	r16, 0xE6	; 230
    1bea:	1a e2       	ldi	r17, 0x2A	; 42
    1bec:	d1 2c       	mov	r13, r1
    1bee:	c1 2c       	mov	r12, r1
    1bf0:	6d b6       	in	r6, 0x3d	; 61
    1bf2:	7e b6       	in	r7, 0x3e	; 62
    1bf4:	f8 01       	movw	r30, r16
    1bf6:	80 84       	ldd	r8, Z+8	; 0x08
    1bf8:	91 84       	ldd	r9, Z+9	; 0x09
    1bfa:	ff ef       	ldi	r31, 0xFF	; 255
    1bfc:	8f 16       	cp	r8, r31
    1bfe:	9f 06       	cpc	r9, r31
    1c00:	79 f1       	breq	.+94     	; 0x1c60 <_ZN22BLELocalCharacteristic10writeValueEPKhi+0x238>
    1c02:	d8 01       	movw	r26, r16
    1c04:	52 96       	adiw	r26, 0x12	; 18
    1c06:	8d 91       	ld	r24, X+
    1c08:	9c 91       	ld	r25, X
    1c0a:	ed b7       	in	r30, 0x3d	; 61
    1c0c:	fe b7       	in	r31, 0x3e	; 62
    1c0e:	e8 1b       	sub	r30, r24
    1c10:	f9 0b       	sbc	r31, r25
    1c12:	ed bf       	out	0x3d, r30	; 61
    1c14:	fe bf       	out	0x3e, r31	; 62
    1c16:	2d b7       	in	r18, 0x3d	; 61
    1c18:	3e b7       	in	r19, 0x3e	; 62
    1c1a:	2f 5f       	subi	r18, 0xFF	; 255
    1c1c:	3f 4f       	sbci	r19, 0xFF	; 255
    1c1e:	59 01       	movw	r10, r18
    1c20:	3b e1       	ldi	r19, 0x1B	; 27
    1c22:	31 83       	std	Z+1, r19	; 0x01
    1c24:	d5 01       	movw	r26, r10
    1c26:	11 96       	adiw	r26, 0x01	; 1
    1c28:	4d 92       	st	X+, r4
    1c2a:	5c 92       	st	X, r5
    1c2c:	12 97       	sbiw	r26, 0x02	; 2
    1c2e:	03 97       	sbiw	r24, 0x03	; 3
    1c30:	e8 16       	cp	r14, r24
    1c32:	f9 06       	cpc	r15, r25
    1c34:	08 f4       	brcc	.+2      	; 0x1c38 <_ZN22BLELocalCharacteristic10writeValueEPKhi+0x210>
    1c36:	c7 01       	movw	r24, r14
    1c38:	7c 01       	movw	r14, r24
    1c3a:	ac 01       	movw	r20, r24
    1c3c:	b1 01       	movw	r22, r2
    1c3e:	c5 01       	movw	r24, r10
    1c40:	03 96       	adiw	r24, 0x03	; 3
    1c42:	0e 94 95 2a 	call	0x552a	; 0x552a <memcpy>
    1c46:	a7 01       	movw	r20, r14
    1c48:	4d 5f       	subi	r20, 0xFD	; 253
    1c4a:	5f 4f       	sbci	r21, 0xFF	; 255
    1c4c:	95 01       	movw	r18, r10
    1c4e:	64 e0       	ldi	r22, 0x04	; 4
    1c50:	c4 01       	movw	r24, r8
    1c52:	0e 94 0a 1e 	call	0x3c14	; 0x3c14 <_ZN8HCIClass10sendAclPktEjhhPv.constprop.37>
    1c56:	bf ef       	ldi	r27, 0xFF	; 255
    1c58:	cb 1a       	sub	r12, r27
    1c5a:	db 0a       	sbc	r13, r27
    1c5c:	6d be       	out	0x3d, r6	; 61
    1c5e:	7e be       	out	0x3e, r7	; 62
    1c60:	02 5f       	subi	r16, 0xF2	; 242
    1c62:	1f 4f       	sbci	r17, 0xFF	; 255
    1c64:	eb e2       	ldi	r30, 0x2B	; 43
    1c66:	00 31       	cpi	r16, 0x10	; 16
    1c68:	1e 07       	cpc	r17, r30
    1c6a:	11 f6       	brne	.-124    	; 0x1bf0 <_ZN22BLELocalCharacteristic10writeValueEPKhi+0x1c8>
    1c6c:	84 cf       	rjmp	.-248    	; 0x1b76 <_ZN22BLELocalCharacteristic10writeValueEPKhi+0x14e>
    1c6e:	d8 01       	movw	r26, r16
    1c70:	91 96       	adiw	r26, 0x21	; 33
    1c72:	8c 91       	ld	r24, X
    1c74:	81 11       	cpse	r24, r1
    1c76:	03 c0       	rjmp	.+6      	; 0x1c7e <_ZN22BLELocalCharacteristic10writeValueEPKhi+0x256>
    1c78:	81 e0       	ldi	r24, 0x01	; 1
    1c7a:	90 e0       	ldi	r25, 0x00	; 0
    1c7c:	82 cf       	rjmp	.-252    	; 0x1b82 <_ZN22BLELocalCharacteristic10writeValueEPKhi+0x15a>
    1c7e:	b1 2c       	mov	r11, r1
    1c80:	a1 2c       	mov	r10, r1
    1c82:	f1 2c       	mov	r15, r1
    1c84:	e1 2c       	mov	r14, r1
    1c86:	80 91 5a 2b 	lds	r24, 0x2B5A	; 0x802b5a <GATT+0x2>
    1c8a:	90 91 5b 2b 	lds	r25, 0x2B5B	; 0x802b5b <GATT+0x3>
    1c8e:	a8 16       	cp	r10, r24
    1c90:	b9 06       	cpc	r11, r25
    1c92:	c8 f4       	brcc	.+50     	; 0x1cc6 <_ZN22BLELocalCharacteristic10writeValueEPKhi+0x29e>
    1c94:	b5 01       	movw	r22, r10
    1c96:	8a e5       	ldi	r24, 0x5A	; 90
    1c98:	9b e2       	ldi	r25, 0x2B	; 43
    1c9a:	0e 94 7e 01 	call	0x2fc	; 0x2fc <_ZNK13BLELinkedListIP17BLELocalAttributeE3getEj>
    1c9e:	6c 01       	movw	r12, r24
    1ca0:	dc 01       	movw	r26, r24
    1ca2:	ed 91       	ld	r30, X+
    1ca4:	fc 91       	ld	r31, X
    1ca6:	04 80       	ldd	r0, Z+4	; 0x04
    1ca8:	f5 81       	ldd	r31, Z+5	; 0x05
    1caa:	e0 2d       	mov	r30, r0
    1cac:	09 95       	icall
    1cae:	81 15       	cp	r24, r1
    1cb0:	98 42       	sbci	r25, 0x28	; 40
    1cb2:	21 f0       	breq	.+8      	; 0x1cbc <_ZN22BLELocalCharacteristic10writeValueEPKhi+0x294>
    1cb4:	0c 15       	cp	r16, r12
    1cb6:	1d 05       	cpc	r17, r13
    1cb8:	31 f0       	breq	.+12     	; 0x1cc6 <_ZN22BLELocalCharacteristic10writeValueEPKhi+0x29e>
    1cba:	67 01       	movw	r12, r14
    1cbc:	ef ef       	ldi	r30, 0xFF	; 255
    1cbe:	ae 1a       	sub	r10, r30
    1cc0:	be 0a       	sbc	r11, r30
    1cc2:	76 01       	movw	r14, r12
    1cc4:	e0 cf       	rjmp	.-64     	; 0x1c86 <_ZN22BLELocalCharacteristic10writeValueEPKhi+0x25e>
    1cc6:	90 e0       	ldi	r25, 0x00	; 0
    1cc8:	80 e0       	ldi	r24, 0x00	; 0
    1cca:	e1 14       	cp	r14, r1
    1ccc:	f1 04       	cpc	r15, r1
    1cce:	51 f0       	breq	.+20     	; 0x1ce4 <_ZN22BLELocalCharacteristic10writeValueEPKhi+0x2bc>
    1cd0:	d7 01       	movw	r26, r14
    1cd2:	54 96       	adiw	r26, 0x14	; 20
    1cd4:	8c 91       	ld	r24, X
    1cd6:	54 97       	sbiw	r26, 0x14	; 20
    1cd8:	82 30       	cpi	r24, 0x02	; 2
    1cda:	09 f0       	breq	.+2      	; 0x1cde <_ZN22BLELocalCharacteristic10writeValueEPKhi+0x2b6>
    1cdc:	35 c1       	rjmp	.+618    	; 0x1f48 <_ZN22BLELocalCharacteristic10writeValueEPKhi+0x520>
    1cde:	14 96       	adiw	r26, 0x04	; 4
    1ce0:	8d 91       	ld	r24, X+
    1ce2:	9c 91       	ld	r25, X
    1ce4:	80 93 38 2b 	sts	0x2B38, r24	; 0x802b38 <GAP+0xf>
    1ce8:	90 93 39 2b 	sts	0x2B39, r25	; 0x802b39 <GAP+0x10>
    1cec:	60 92 3a 2b 	sts	0x2B3A, r6	; 0x802b3a <GAP+0x11>
    1cf0:	70 92 3b 2b 	sts	0x2B3B, r7	; 0x802b3b <GAP+0x12>
    1cf4:	80 92 3c 2b 	sts	0x2B3C, r8	; 0x802b3c <GAP+0x13>
    1cf8:	90 92 3d 2b 	sts	0x2B3D, r9	; 0x802b3d <GAP+0x14>
    1cfc:	80 91 ee 2a 	lds	r24, 0x2AEE	; 0x802aee <ATT+0x8>
    1d00:	90 91 ef 2a 	lds	r25, 0x2AEF	; 0x802aef <ATT+0x9>
    1d04:	01 96       	adiw	r24, 0x01	; 1
    1d06:	09 f0       	breq	.+2      	; 0x1d0a <_ZN22BLELocalCharacteristic10writeValueEPKhi+0x2e2>
    1d08:	b7 cf       	rjmp	.-146    	; 0x1c78 <_ZN22BLELocalCharacteristic10writeValueEPKhi+0x250>
    1d0a:	80 91 fc 2a 	lds	r24, 0x2AFC	; 0x802afc <ATT+0x16>
    1d0e:	90 91 fd 2a 	lds	r25, 0x2AFD	; 0x802afd <ATT+0x17>
    1d12:	01 96       	adiw	r24, 0x01	; 1
    1d14:	09 f0       	breq	.+2      	; 0x1d18 <_ZN22BLELocalCharacteristic10writeValueEPKhi+0x2f0>
    1d16:	b0 cf       	rjmp	.-160    	; 0x1c78 <_ZN22BLELocalCharacteristic10writeValueEPKhi+0x250>
    1d18:	80 91 0a 2b 	lds	r24, 0x2B0A	; 0x802b0a <ATT+0x24>
    1d1c:	90 91 0b 2b 	lds	r25, 0x2B0B	; 0x802b0b <ATT+0x25>
    1d20:	01 96       	adiw	r24, 0x01	; 1
    1d22:	09 f0       	breq	.+2      	; 0x1d26 <_ZN22BLELocalCharacteristic10writeValueEPKhi+0x2fe>
    1d24:	a9 cf       	rjmp	.-174    	; 0x1c78 <_ZN22BLELocalCharacteristic10writeValueEPKhi+0x250>
    1d26:	80 91 2b 2b 	lds	r24, 0x2B2B	; 0x802b2b <GAP+0x2>
    1d2a:	88 23       	and	r24, r24
    1d2c:	09 f4       	brne	.+2      	; 0x1d30 <_ZN22BLELocalCharacteristic10writeValueEPKhi+0x308>
    1d2e:	a4 cf       	rjmp	.-184    	; 0x1c78 <_ZN22BLELocalCharacteristic10writeValueEPKhi+0x250>
    1d30:	fe 01       	movw	r30, r28
    1d32:	e1 5a       	subi	r30, 0xA1	; 161
    1d34:	ff 4f       	sbci	r31, 0xFF	; 255
    1d36:	86 e0       	ldi	r24, 0x06	; 6
    1d38:	df 01       	movw	r26, r30
    1d3a:	1d 92       	st	X+, r1
    1d3c:	8a 95       	dec	r24
    1d3e:	e9 f7       	brne	.-6      	; 0x1d3a <_ZN22BLELocalCharacteristic10writeValueEPKhi+0x312>
    1d40:	80 91 37 2b 	lds	r24, 0x2B37	; 0x802b37 <GAP+0xe>
    1d44:	81 11       	cpse	r24, r1
    1d46:	04 c1       	rjmp	.+520    	; 0x1f50 <_ZN22BLELocalCharacteristic10writeValueEPKhi+0x528>
    1d48:	80 91 33 2b 	lds	r24, 0x2B33	; 0x802b33 <GAP+0xa>
    1d4c:	90 91 34 2b 	lds	r25, 0x2B34	; 0x802b34 <GAP+0xb>
    1d50:	89 2b       	or	r24, r25
    1d52:	09 f0       	breq	.+2      	; 0x1d56 <_ZN22BLELocalCharacteristic10writeValueEPKhi+0x32e>
    1d54:	ff c0       	rjmp	.+510    	; 0x1f54 <_ZN22BLELocalCharacteristic10writeValueEPKhi+0x52c>
    1d56:	83 e0       	ldi	r24, 0x03	; 3
    1d58:	10 92 2b 2b 	sts	0x2B2B, r1	; 0x802b2b <GAP+0x2>
    1d5c:	20 91 35 2b 	lds	r18, 0x2B35	; 0x802b35 <GAP+0xc>
    1d60:	30 91 36 2b 	lds	r19, 0x2B36	; 0x802b36 <GAP+0xd>
    1d64:	29 83       	std	Y+1, r18	; 0x01
    1d66:	3a 83       	std	Y+2, r19	; 0x02
    1d68:	2b 83       	std	Y+3, r18	; 0x03
    1d6a:	3c 83       	std	Y+4, r19	; 0x04
    1d6c:	8d 83       	std	Y+5, r24	; 0x05
    1d6e:	1e 82       	std	Y+6, r1	; 0x06
    1d70:	1f 82       	std	Y+7, r1	; 0x07
    1d72:	86 e0       	ldi	r24, 0x06	; 6
    1d74:	de 01       	movw	r26, r28
    1d76:	18 96       	adiw	r26, 0x08	; 8
    1d78:	01 90       	ld	r0, Z+
    1d7a:	0d 92       	st	X+, r0
    1d7c:	8a 95       	dec	r24
    1d7e:	e1 f7       	brne	.-8      	; 0x1d78 <_ZN22BLELocalCharacteristic10writeValueEPKhi+0x350>
    1d80:	87 e0       	ldi	r24, 0x07	; 7
    1d82:	8e 87       	std	Y+14, r24	; 0x0e
    1d84:	1f 86       	std	Y+15, r1	; 0x0f
    1d86:	fe 01       	movw	r30, r28
    1d88:	31 96       	adiw	r30, 0x01	; 1
    1d8a:	7f 01       	movw	r14, r30
    1d8c:	af 01       	movw	r20, r30
    1d8e:	6f e0       	ldi	r22, 0x0F	; 15
    1d90:	86 e0       	ldi	r24, 0x06	; 6
    1d92:	90 e2       	ldi	r25, 0x20	; 32
    1d94:	0e 94 d3 0b 	call	0x17a6	; 0x17a6 <_ZN8HCIClass11sendCommandEjhPv.constprop.39>
    1d98:	89 2b       	or	r24, r25
    1d9a:	09 f0       	breq	.+2      	; 0x1d9e <_ZN22BLELocalCharacteristic10writeValueEPKhi+0x376>
    1d9c:	6d cf       	rjmp	.-294    	; 0x1c78 <_ZN22BLELocalCharacteristic10writeValueEPKhi+0x250>
    1d9e:	82 e0       	ldi	r24, 0x02	; 2
    1da0:	21 96       	adiw	r28, 0x01	; 1
    1da2:	8f af       	std	Y+63, r24	; 0x3f
    1da4:	21 97       	sbiw	r28, 0x01	; 1
    1da6:	81 e0       	ldi	r24, 0x01	; 1
    1da8:	22 96       	adiw	r28, 0x02	; 2
    1daa:	8f af       	std	Y+63, r24	; 0x3f
    1dac:	22 97       	sbiw	r28, 0x02	; 2
    1dae:	86 e0       	ldi	r24, 0x06	; 6
    1db0:	23 96       	adiw	r28, 0x03	; 3
    1db2:	8f af       	std	Y+63, r24	; 0x3f
    1db4:	23 97       	sbiw	r28, 0x03	; 3
    1db6:	60 91 2d 2b 	lds	r22, 0x2B2D	; 0x802b2d <GAP+0x4>
    1dba:	70 91 2e 2b 	lds	r23, 0x2B2E	; 0x802b2e <GAP+0x5>
    1dbe:	61 15       	cp	r22, r1
    1dc0:	71 05       	cpc	r23, r1
    1dc2:	09 f4       	brne	.+2      	; 0x1dc6 <_ZN22BLELocalCharacteristic10writeValueEPKhi+0x39e>
    1dc4:	c9 c0       	rjmp	.+402    	; 0x1f58 <_ZN22BLELocalCharacteristic10writeValueEPKhi+0x530>
    1dc6:	c7 01       	movw	r24, r14
    1dc8:	0e 94 31 07 	call	0xe62	; 0xe62 <_ZN7BLEUuidC1EPKc>
    1dcc:	0b 89       	ldd	r16, Y+19	; 0x13
    1dce:	81 e0       	ldi	r24, 0x01	; 1
    1dd0:	80 0f       	add	r24, r16
    1dd2:	24 96       	adiw	r28, 0x04	; 4
    1dd4:	8f af       	std	Y+63, r24	; 0x3f
    1dd6:	24 97       	sbiw	r28, 0x04	; 4
    1dd8:	82 e0       	ldi	r24, 0x02	; 2
    1dda:	03 30       	cpi	r16, 0x03	; 3
    1ddc:	08 f0       	brcs	.+2      	; 0x1de0 <_ZN22BLELocalCharacteristic10writeValueEPKhi+0x3b8>
    1dde:	86 e0       	ldi	r24, 0x06	; 6
    1de0:	25 96       	adiw	r28, 0x05	; 5
    1de2:	8f af       	std	Y+63, r24	; 0x3f
    1de4:	25 97       	sbiw	r28, 0x05	; 5
    1de6:	40 2f       	mov	r20, r16
    1de8:	50 e0       	ldi	r21, 0x00	; 0
    1dea:	be 01       	movw	r22, r28
    1dec:	6d 5f       	subi	r22, 0xFD	; 253
    1dee:	7f 4f       	sbci	r23, 0xFF	; 255
    1df0:	80 e4       	ldi	r24, 0x40	; 64
    1df2:	90 e0       	ldi	r25, 0x00	; 0
    1df4:	8c 0f       	add	r24, r28
    1df6:	9d 1f       	adc	r25, r29
    1df8:	05 96       	adiw	r24, 0x05	; 5
    1dfa:	0e 94 95 2a 	call	0x552a	; 0x552a <memcpy>
    1dfe:	0b 5f       	subi	r16, 0xFB	; 251
    1e00:	60 91 3a 2b 	lds	r22, 0x2B3A	; 0x802b3a <GAP+0x11>
    1e04:	70 91 3b 2b 	lds	r23, 0x2B3B	; 0x802b3b <GAP+0x12>
    1e08:	61 15       	cp	r22, r1
    1e0a:	71 05       	cpc	r23, r1
    1e0c:	f1 f1       	breq	.+124    	; 0x1e8a <_ZN22BLELocalCharacteristic10writeValueEPKhi+0x462>
    1e0e:	c0 90 3c 2b 	lds	r12, 0x2B3C	; 0x802b3c <GAP+0x13>
    1e12:	d0 90 3d 2b 	lds	r13, 0x2B3D	; 0x802b3d <GAP+0x14>
    1e16:	1c 14       	cp	r1, r12
    1e18:	1d 04       	cpc	r1, r13
    1e1a:	bc f5       	brge	.+110    	; 0x1e8a <_ZN22BLELocalCharacteristic10writeValueEPKhi+0x462>
    1e1c:	80 2f       	mov	r24, r16
    1e1e:	90 e0       	ldi	r25, 0x00	; 0
    1e20:	96 01       	movw	r18, r12
    1e22:	2d 5f       	subi	r18, 0xFD	; 253
    1e24:	3f 4f       	sbci	r19, 0xFF	; 255
    1e26:	28 17       	cp	r18, r24
    1e28:	39 07       	cpc	r19, r25
    1e2a:	7c f5       	brge	.+94     	; 0x1e8a <_ZN22BLELocalCharacteristic10writeValueEPKhi+0x462>
    1e2c:	20 e4       	ldi	r18, 0x40	; 64
    1e2e:	30 e0       	ldi	r19, 0x00	; 0
    1e30:	2c 0f       	add	r18, r28
    1e32:	3d 1f       	adc	r19, r29
    1e34:	82 0f       	add	r24, r18
    1e36:	93 1f       	adc	r25, r19
    1e38:	23 e0       	ldi	r18, 0x03	; 3
    1e3a:	2c 0d       	add	r18, r12
    1e3c:	dc 01       	movw	r26, r24
    1e3e:	2c 93       	st	X, r18
    1e40:	e1 e0       	ldi	r30, 0x01	; 1
    1e42:	e0 0f       	add	r30, r16
    1e44:	20 e4       	ldi	r18, 0x40	; 64
    1e46:	30 e0       	ldi	r19, 0x00	; 0
    1e48:	2c 0f       	add	r18, r28
    1e4a:	3d 1f       	adc	r19, r29
    1e4c:	2e 0f       	add	r18, r30
    1e4e:	31 1d       	adc	r19, r1
    1e50:	f9 01       	movw	r30, r18
    1e52:	86 e1       	ldi	r24, 0x16	; 22
    1e54:	80 83       	st	Z, r24
    1e56:	e2 e0       	ldi	r30, 0x02	; 2
    1e58:	e0 0f       	add	r30, r16
    1e5a:	80 e4       	ldi	r24, 0x40	; 64
    1e5c:	90 e0       	ldi	r25, 0x00	; 0
    1e5e:	8c 0f       	add	r24, r28
    1e60:	9d 1f       	adc	r25, r29
    1e62:	8e 0f       	add	r24, r30
    1e64:	91 1d       	adc	r25, r1
    1e66:	fc 01       	movw	r30, r24
    1e68:	80 91 38 2b 	lds	r24, 0x2B38	; 0x802b38 <GAP+0xf>
    1e6c:	90 91 39 2b 	lds	r25, 0x2B39	; 0x802b39 <GAP+0x10>
    1e70:	80 83       	st	Z, r24
    1e72:	91 83       	std	Z+1, r25	; 0x01
    1e74:	0c 5f       	subi	r16, 0xFC	; 252
    1e76:	a6 01       	movw	r20, r12
    1e78:	80 e4       	ldi	r24, 0x40	; 64
    1e7a:	90 e0       	ldi	r25, 0x00	; 0
    1e7c:	8c 0f       	add	r24, r28
    1e7e:	9d 1f       	adc	r25, r29
    1e80:	80 0f       	add	r24, r16
    1e82:	91 1d       	adc	r25, r1
    1e84:	0e 94 95 2a 	call	0x552a	; 0x552a <memcpy>
    1e88:	0c 0d       	add	r16, r12
    1e8a:	80 e2       	ldi	r24, 0x20	; 32
    1e8c:	d7 01       	movw	r26, r14
    1e8e:	1d 92       	st	X+, r1
    1e90:	8a 95       	dec	r24
    1e92:	e9 f7       	brne	.-6      	; 0x1e8e <_ZN22BLELocalCharacteristic10writeValueEPKhi+0x466>
    1e94:	09 83       	std	Y+1, r16	; 0x01
    1e96:	40 2f       	mov	r20, r16
    1e98:	50 e0       	ldi	r21, 0x00	; 0
    1e9a:	be 01       	movw	r22, r28
    1e9c:	60 5c       	subi	r22, 0xC0	; 192
    1e9e:	7f 4f       	sbci	r23, 0xFF	; 255
    1ea0:	ce 01       	movw	r24, r28
    1ea2:	02 96       	adiw	r24, 0x02	; 2
    1ea4:	0e 94 95 2a 	call	0x552a	; 0x552a <memcpy>
    1ea8:	a7 01       	movw	r20, r14
    1eaa:	60 e2       	ldi	r22, 0x20	; 32
    1eac:	88 e0       	ldi	r24, 0x08	; 8
    1eae:	90 e2       	ldi	r25, 0x20	; 32
    1eb0:	0e 94 d3 0b 	call	0x17a6	; 0x17a6 <_ZN8HCIClass11sendCommandEjhPv.constprop.39>
    1eb4:	89 2b       	or	r24, r25
    1eb6:	09 f0       	breq	.+2      	; 0x1eba <_ZN22BLELocalCharacteristic10writeValueEPKhi+0x492>
    1eb8:	df ce       	rjmp	.-578    	; 0x1c78 <_ZN22BLELocalCharacteristic10writeValueEPKhi+0x250>
    1eba:	60 91 33 2b 	lds	r22, 0x2B33	; 0x802b33 <GAP+0xa>
    1ebe:	70 91 34 2b 	lds	r23, 0x2B34	; 0x802b34 <GAP+0xb>
    1ec2:	10 e0       	ldi	r17, 0x00	; 0
    1ec4:	61 15       	cp	r22, r1
    1ec6:	71 05       	cpc	r23, r1
    1ec8:	c9 f0       	breq	.+50     	; 0x1efc <_ZN22BLELocalCharacteristic10writeValueEPKhi+0x4d4>
    1eca:	fb 01       	movw	r30, r22
    1ecc:	01 90       	ld	r0, Z+
    1ece:	00 20       	and	r0, r0
    1ed0:	e9 f7       	brne	.-6      	; 0x1ecc <_ZN22BLELocalCharacteristic10writeValueEPKhi+0x4a4>
    1ed2:	cf 01       	movw	r24, r30
    1ed4:	01 97       	sbiw	r24, 0x01	; 1
    1ed6:	86 1b       	sub	r24, r22
    1ed8:	97 0b       	sbc	r25, r23
    1eda:	8e 31       	cpi	r24, 0x1E	; 30
    1edc:	91 05       	cpc	r25, r1
    1ede:	08 f4       	brcc	.+2      	; 0x1ee2 <_ZN22BLELocalCharacteristic10writeValueEPKhi+0x4ba>
    1ee0:	56 c0       	rjmp	.+172    	; 0x1f8e <_ZN22BLELocalCharacteristic10writeValueEPKhi+0x566>
    1ee2:	88 e0       	ldi	r24, 0x08	; 8
    1ee4:	8a a3       	std	Y+34, r24	; 0x22
    1ee6:	1d e1       	ldi	r17, 0x1D	; 29
    1ee8:	50 e0       	ldi	r21, 0x00	; 0
    1eea:	81 e0       	ldi	r24, 0x01	; 1
    1eec:	81 0f       	add	r24, r17
    1eee:	89 a3       	std	Y+33, r24	; 0x21
    1ef0:	41 2f       	mov	r20, r17
    1ef2:	ce 01       	movw	r24, r28
    1ef4:	83 96       	adiw	r24, 0x23	; 35
    1ef6:	0e 94 95 2a 	call	0x552a	; 0x552a <memcpy>
    1efa:	1e 5f       	subi	r17, 0xFE	; 254
    1efc:	80 e2       	ldi	r24, 0x20	; 32
    1efe:	d7 01       	movw	r26, r14
    1f00:	1d 92       	st	X+, r1
    1f02:	8a 95       	dec	r24
    1f04:	e9 f7       	brne	.-6      	; 0x1f00 <_ZN22BLELocalCharacteristic10writeValueEPKhi+0x4d8>
    1f06:	19 83       	std	Y+1, r17	; 0x01
    1f08:	41 2f       	mov	r20, r17
    1f0a:	50 e0       	ldi	r21, 0x00	; 0
    1f0c:	be 01       	movw	r22, r28
    1f0e:	6f 5d       	subi	r22, 0xDF	; 223
    1f10:	7f 4f       	sbci	r23, 0xFF	; 255
    1f12:	ce 01       	movw	r24, r28
    1f14:	02 96       	adiw	r24, 0x02	; 2
    1f16:	0e 94 95 2a 	call	0x552a	; 0x552a <memcpy>
    1f1a:	a7 01       	movw	r20, r14
    1f1c:	60 e2       	ldi	r22, 0x20	; 32
    1f1e:	89 e0       	ldi	r24, 0x09	; 9
    1f20:	90 e2       	ldi	r25, 0x20	; 32
    1f22:	0e 94 d3 0b 	call	0x17a6	; 0x17a6 <_ZN8HCIClass11sendCommandEjhPv.constprop.39>
    1f26:	89 2b       	or	r24, r25
    1f28:	09 f0       	breq	.+2      	; 0x1f2c <_ZN22BLELocalCharacteristic10writeValueEPKhi+0x504>
    1f2a:	a6 ce       	rjmp	.-692    	; 0x1c78 <_ZN22BLELocalCharacteristic10writeValueEPKhi+0x250>
    1f2c:	81 e0       	ldi	r24, 0x01	; 1
    1f2e:	89 83       	std	Y+1, r24	; 0x01
    1f30:	a7 01       	movw	r20, r14
    1f32:	61 e0       	ldi	r22, 0x01	; 1
    1f34:	8a e0       	ldi	r24, 0x0A	; 10
    1f36:	90 e2       	ldi	r25, 0x20	; 32
    1f38:	0e 94 d3 0b 	call	0x17a6	; 0x17a6 <_ZN8HCIClass11sendCommandEjhPv.constprop.39>
    1f3c:	89 2b       	or	r24, r25
    1f3e:	09 f0       	breq	.+2      	; 0x1f42 <_ZN22BLELocalCharacteristic10writeValueEPKhi+0x51a>
    1f40:	9b ce       	rjmp	.-714    	; 0x1c78 <_ZN22BLELocalCharacteristic10writeValueEPKhi+0x250>
    1f42:	10 92 2b 2b 	sts	0x2B2B, r1	; 0x802b2b <GAP+0x2>
    1f46:	98 ce       	rjmp	.-720    	; 0x1c78 <_ZN22BLELocalCharacteristic10writeValueEPKhi+0x250>
    1f48:	f7 01       	movw	r30, r14
    1f4a:	86 85       	ldd	r24, Z+14	; 0x0e
    1f4c:	97 85       	ldd	r25, Z+15	; 0x0f
    1f4e:	ca ce       	rjmp	.-620    	; 0x1ce4 <_ZN22BLELocalCharacteristic10writeValueEPKhi+0x2bc>
    1f50:	80 e0       	ldi	r24, 0x00	; 0
    1f52:	02 cf       	rjmp	.-508    	; 0x1d58 <_ZN22BLELocalCharacteristic10writeValueEPKhi+0x330>
    1f54:	82 e0       	ldi	r24, 0x02	; 2
    1f56:	00 cf       	rjmp	.-512    	; 0x1d58 <_ZN22BLELocalCharacteristic10writeValueEPKhi+0x330>
    1f58:	60 91 2f 2b 	lds	r22, 0x2B2F	; 0x802b2f <GAP+0x6>
    1f5c:	70 91 30 2b 	lds	r23, 0x2B30	; 0x802b30 <GAP+0x7>
    1f60:	61 15       	cp	r22, r1
    1f62:	71 05       	cpc	r23, r1
    1f64:	91 f0       	breq	.+36     	; 0x1f8a <_ZN22BLELocalCharacteristic10writeValueEPKhi+0x562>
    1f66:	00 91 31 2b 	lds	r16, 0x2B31	; 0x802b31 <GAP+0x8>
    1f6a:	10 91 32 2b 	lds	r17, 0x2B32	; 0x802b32 <GAP+0x9>
    1f6e:	01 15       	cp	r16, r1
    1f70:	11 05       	cpc	r17, r1
    1f72:	59 f0       	breq	.+22     	; 0x1f8a <_ZN22BLELocalCharacteristic10writeValueEPKhi+0x562>
    1f74:	81 e0       	ldi	r24, 0x01	; 1
    1f76:	80 0f       	add	r24, r16
    1f78:	24 96       	adiw	r28, 0x04	; 4
    1f7a:	8f af       	std	Y+63, r24	; 0x3f
    1f7c:	24 97       	sbiw	r28, 0x04	; 4
    1f7e:	8f ef       	ldi	r24, 0xFF	; 255
    1f80:	25 96       	adiw	r28, 0x05	; 5
    1f82:	8f af       	std	Y+63, r24	; 0x3f
    1f84:	25 97       	sbiw	r28, 0x05	; 5
    1f86:	a8 01       	movw	r20, r16
    1f88:	33 cf       	rjmp	.-410    	; 0x1df0 <_ZN22BLELocalCharacteristic10writeValueEPKhi+0x3c8>
    1f8a:	03 e0       	ldi	r16, 0x03	; 3
    1f8c:	39 cf       	rjmp	.-398    	; 0x1e00 <_ZN22BLELocalCharacteristic10writeValueEPKhi+0x3d8>
    1f8e:	18 2f       	mov	r17, r24
    1f90:	59 2f       	mov	r21, r25
    1f92:	89 e0       	ldi	r24, 0x09	; 9
    1f94:	8a a3       	std	Y+34, r24	; 0x22
    1f96:	a9 cf       	rjmp	.-174    	; 0x1eea <_ZN22BLELocalCharacteristic10writeValueEPKhi+0x4c2>

00001f98 <_ZN8ATTClass10handleDataEjhPh.constprop.46>:
    1f98:	2f 92       	push	r2
    1f9a:	3f 92       	push	r3
    1f9c:	4f 92       	push	r4
    1f9e:	5f 92       	push	r5
    1fa0:	6f 92       	push	r6
    1fa2:	7f 92       	push	r7
    1fa4:	8f 92       	push	r8
    1fa6:	9f 92       	push	r9
    1fa8:	af 92       	push	r10
    1faa:	bf 92       	push	r11
    1fac:	cf 92       	push	r12
    1fae:	df 92       	push	r13
    1fb0:	ef 92       	push	r14
    1fb2:	ff 92       	push	r15
    1fb4:	0f 93       	push	r16
    1fb6:	1f 93       	push	r17
    1fb8:	cf 93       	push	r28
    1fba:	df 93       	push	r29
    1fbc:	cd b7       	in	r28, 0x3d	; 61
    1fbe:	de b7       	in	r29, 0x3e	; 62
    1fc0:	c4 55       	subi	r28, 0x54	; 84
    1fc2:	d1 09       	sbc	r29, r1
    1fc4:	cd bf       	out	0x3d, r28	; 61
    1fc6:	de bf       	out	0x3e, r29	; 62
    1fc8:	1c 01       	movw	r2, r24
    1fca:	2c 96       	adiw	r28, 0x0c	; 12
    1fcc:	6f af       	std	Y+63, r22	; 0x3f
    1fce:	2c 97       	sbiw	r28, 0x0c	; 12
    1fd0:	7a 01       	movw	r14, r20
    1fd2:	2d b7       	in	r18, 0x3d	; 61
    1fd4:	3e b7       	in	r19, 0x3e	; 62
    1fd6:	65 96       	adiw	r28, 0x15	; 21
    1fd8:	2e af       	std	Y+62, r18	; 0x3e
    1fda:	3f af       	std	Y+63, r19	; 0x3f
    1fdc:	65 97       	sbiw	r28, 0x15	; 21
    1fde:	d7 01       	movw	r26, r14
    1fe0:	1d 91       	ld	r17, X+
    1fe2:	5d 01       	movw	r10, r26
    1fe4:	06 2f       	mov	r16, r22
    1fe6:	01 50       	subi	r16, 0x01	; 1
    1fe8:	c0 90 ee 2a 	lds	r12, 0x2AEE	; 0x802aee <ATT+0x8>
    1fec:	d0 90 ef 2a 	lds	r13, 0x2AEF	; 0x802aef <ATT+0x9>
    1ff0:	8c 15       	cp	r24, r12
    1ff2:	9d 05       	cpc	r25, r13
    1ff4:	a1 f1       	breq	.+104    	; 0x205e <_ZN8ATTClass10handleDataEjhPh.constprop.46+0xc6>
    1ff6:	80 91 fc 2a 	lds	r24, 0x2AFC	; 0x802afc <ATT+0x16>
    1ffa:	90 91 fd 2a 	lds	r25, 0x2AFD	; 0x802afd <ATT+0x17>
    1ffe:	28 16       	cp	r2, r24
    2000:	39 06       	cpc	r3, r25
    2002:	81 f1       	breq	.+96     	; 0x2064 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0xcc>
    2004:	80 91 0a 2b 	lds	r24, 0x2B0A	; 0x802b0a <ATT+0x24>
    2008:	90 91 0b 2b 	lds	r25, 0x2B0B	; 0x802b0b <ATT+0x25>
    200c:	28 16       	cp	r2, r24
    200e:	39 06       	cpc	r3, r25
    2010:	61 f5       	brne	.+88     	; 0x206a <_ZN8ATTClass10handleDataEjhPh.constprop.46+0xd2>
    2012:	82 e0       	ldi	r24, 0x02	; 2
    2014:	90 e0       	ldi	r25, 0x00	; 0
    2016:	2e e0       	ldi	r18, 0x0E	; 14
    2018:	28 9f       	mul	r18, r24
    201a:	f0 01       	movw	r30, r0
    201c:	29 9f       	mul	r18, r25
    201e:	f0 0d       	add	r31, r0
    2020:	11 24       	eor	r1, r1
    2022:	ea 51       	subi	r30, 0x1A	; 26
    2024:	f5 4d       	sbci	r31, 0xD5	; 213
    2026:	22 89       	ldd	r18, Z+18	; 0x12
    2028:	33 89       	ldd	r19, Z+19	; 0x13
    202a:	2f 96       	adiw	r28, 0x0f	; 15
    202c:	2e af       	std	Y+62, r18	; 0x3e
    202e:	3f af       	std	Y+63, r19	; 0x3f
    2030:	2f 97       	sbiw	r28, 0x0f	; 15
    2032:	1c 30       	cpi	r17, 0x0C	; 12
    2034:	09 f4       	brne	.+2      	; 0x2038 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0xa0>
    2036:	3f c5       	rjmp	.+2686   	; 0x2ab6 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0xb1e>
    2038:	08 f0       	brcs	.+2      	; 0x203c <_ZN8ATTClass10handleDataEjhPh.constprop.46+0xa4>
    203a:	b7 c1       	rjmp	.+878    	; 0x23aa <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x412>
    203c:	15 30       	cpi	r17, 0x05	; 5
    203e:	09 f4       	brne	.+2      	; 0x2042 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0xaa>
    2040:	3c c3       	rjmp	.+1656   	; 0x26ba <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x722>
    2042:	08 f0       	brcs	.+2      	; 0x2046 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0xae>
    2044:	d2 c0       	rjmp	.+420    	; 0x21ea <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x252>
    2046:	12 30       	cpi	r17, 0x02	; 2
    2048:	09 f4       	brne	.+2      	; 0x204c <_ZN8ATTClass10handleDataEjhPh.constprop.46+0xb4>
    204a:	8d c2       	rjmp	.+1306   	; 0x2566 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x5ce>
    204c:	a8 f4       	brcc	.+42     	; 0x2078 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0xe0>
    204e:	11 30       	cpi	r17, 0x01	; 1
    2050:	09 f4       	brne	.+2      	; 0x2054 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0xbc>
    2052:	45 c2       	rjmp	.+1162   	; 0x24de <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x546>
    2054:	26 e0       	ldi	r18, 0x06	; 6
    2056:	50 e0       	ldi	r21, 0x00	; 0
    2058:	40 e0       	ldi	r20, 0x00	; 0
    205a:	61 2f       	mov	r22, r17
    205c:	8a c2       	rjmp	.+1300   	; 0x2572 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x5da>
    205e:	90 e0       	ldi	r25, 0x00	; 0
    2060:	80 e0       	ldi	r24, 0x00	; 0
    2062:	d9 cf       	rjmp	.-78     	; 0x2016 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x7e>
    2064:	81 e0       	ldi	r24, 0x01	; 1
    2066:	90 e0       	ldi	r25, 0x00	; 0
    2068:	d6 cf       	rjmp	.-84     	; 0x2016 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x7e>
    206a:	87 e1       	ldi	r24, 0x17	; 23
    206c:	90 e0       	ldi	r25, 0x00	; 0
    206e:	2f 96       	adiw	r28, 0x0f	; 15
    2070:	8e af       	std	Y+62, r24	; 0x3e
    2072:	9f af       	std	Y+63, r25	; 0x3f
    2074:	2f 97       	sbiw	r28, 0x0f	; 15
    2076:	dd cf       	rjmp	.-70     	; 0x2032 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x9a>
    2078:	13 30       	cpi	r17, 0x03	; 3
    207a:	09 f4       	brne	.+2      	; 0x207e <_ZN8ATTClass10handleDataEjhPh.constprop.46+0xe6>
    207c:	b9 c2       	rjmp	.+1394   	; 0x25f0 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x658>
    207e:	14 30       	cpi	r17, 0x04	; 4
    2080:	49 f7       	brne	.-46     	; 0x2054 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0xbc>
    2082:	ed b7       	in	r30, 0x3d	; 61
    2084:	fe b7       	in	r31, 0x3e	; 62
    2086:	61 96       	adiw	r28, 0x11	; 17
    2088:	ee af       	std	Y+62, r30	; 0x3e
    208a:	ff af       	std	Y+63, r31	; 0x3f
    208c:	61 97       	sbiw	r28, 0x11	; 17
    208e:	d7 01       	movw	r26, r14
    2090:	11 96       	adiw	r26, 0x01	; 1
    2092:	4d 91       	ld	r20, X+
    2094:	5c 91       	ld	r21, X
    2096:	24 e0       	ldi	r18, 0x04	; 4
    2098:	64 e0       	ldi	r22, 0x04	; 4
    209a:	04 30       	cpi	r16, 0x04	; 4
    209c:	09 f0       	breq	.+2      	; 0x20a0 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x108>
    209e:	41 c3       	rjmp	.+1666   	; 0x2722 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x78a>
    20a0:	ed b7       	in	r30, 0x3d	; 61
    20a2:	fe b7       	in	r31, 0x3e	; 62
    20a4:	2f 96       	adiw	r28, 0x0f	; 15
    20a6:	2e ad       	ldd	r18, Y+62	; 0x3e
    20a8:	3f ad       	ldd	r19, Y+63	; 0x3f
    20aa:	2f 97       	sbiw	r28, 0x0f	; 15
    20ac:	e2 1b       	sub	r30, r18
    20ae:	f3 0b       	sbc	r31, r19
    20b0:	ed bf       	out	0x3d, r30	; 61
    20b2:	fe bf       	out	0x3e, r31	; 62
    20b4:	8d b7       	in	r24, 0x3d	; 61
    20b6:	9e b7       	in	r25, 0x3e	; 62
    20b8:	01 96       	adiw	r24, 0x01	; 1
    20ba:	2c 01       	movw	r4, r24
    20bc:	85 e0       	ldi	r24, 0x05	; 5
    20be:	81 83       	std	Z+1, r24	; 0x01
    20c0:	d2 01       	movw	r26, r4
    20c2:	11 96       	adiw	r26, 0x01	; 1
    20c4:	1c 92       	st	X, r1
    20c6:	5a 01       	movw	r10, r20
    20c8:	b1 e0       	ldi	r27, 0x01	; 1
    20ca:	ab 1a       	sub	r10, r27
    20cc:	b1 08       	sbc	r11, r1
    20ce:	02 e0       	ldi	r16, 0x02	; 2
    20d0:	10 e0       	ldi	r17, 0x00	; 0
    20d2:	80 91 5a 2b 	lds	r24, 0x2B5A	; 0x802b5a <GATT+0x2>
    20d6:	90 91 5b 2b 	lds	r25, 0x2B5B	; 0x802b5b <GATT+0x3>
    20da:	a8 16       	cp	r10, r24
    20dc:	b9 06       	cpc	r11, r25
    20de:	08 f0       	brcs	.+2      	; 0x20e2 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x14a>
    20e0:	76 c0       	rjmp	.+236    	; 0x21ce <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x236>
    20e2:	f7 01       	movw	r30, r14
    20e4:	83 81       	ldd	r24, Z+3	; 0x03
    20e6:	94 81       	ldd	r25, Z+4	; 0x04
    20e8:	01 97       	sbiw	r24, 0x01	; 1
    20ea:	8a 15       	cp	r24, r10
    20ec:	9b 05       	cpc	r25, r11
    20ee:	08 f4       	brcc	.+2      	; 0x20f2 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x15a>
    20f0:	6e c0       	rjmp	.+220    	; 0x21ce <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x236>
    20f2:	b5 01       	movw	r22, r10
    20f4:	8a e5       	ldi	r24, 0x5A	; 90
    20f6:	9b e2       	ldi	r25, 0x2B	; 43
    20f8:	0e 94 7e 01 	call	0x2fc	; 0x2fc <_ZNK13BLELinkedListIP17BLELocalAttributeE3getEj>
    20fc:	6c 01       	movw	r12, r24
    20fe:	ff ef       	ldi	r31, 0xFF	; 255
    2100:	af 1a       	sub	r10, r31
    2102:	bf 0a       	sbc	r11, r31
    2104:	dc 01       	movw	r26, r24
    2106:	ed 91       	ld	r30, X+
    2108:	fc 91       	ld	r31, X
    210a:	04 80       	ldd	r0, Z+4	; 0x04
    210c:	f5 81       	ldd	r31, Z+5	; 0x05
    210e:	e0 2d       	mov	r30, r0
    2110:	09 95       	icall
    2112:	83 30       	cpi	r24, 0x03	; 3
    2114:	98 42       	sbci	r25, 0x28	; 40
    2116:	41 f4       	brne	.+16     	; 0x2128 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x190>
    2118:	f6 01       	movw	r30, r12
    211a:	87 8d       	ldd	r24, Z+31	; 0x1f
    211c:	90 a1       	ldd	r25, Z+32	; 0x20
    211e:	01 96       	adiw	r24, 0x01	; 1
    2120:	a8 16       	cp	r10, r24
    2122:	b9 06       	cpc	r11, r25
    2124:	09 f4       	brne	.+2      	; 0x2128 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x190>
    2126:	ab c2       	rjmp	.+1366   	; 0x267e <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x6e6>
    2128:	d6 01       	movw	r26, r12
    212a:	54 96       	adiw	r26, 0x14	; 20
    212c:	6c 90       	ld	r6, X
    212e:	71 2c       	mov	r7, r1
    2130:	20 e0       	ldi	r18, 0x00	; 0
    2132:	82 e0       	ldi	r24, 0x02	; 2
    2134:	90 e0       	ldi	r25, 0x00	; 0
    2136:	b2 e0       	ldi	r27, 0x02	; 2
    2138:	6b 16       	cp	r6, r27
    213a:	71 04       	cpc	r7, r1
    213c:	11 f4       	brne	.+4      	; 0x2142 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x1aa>
    213e:	81 e0       	ldi	r24, 0x01	; 1
    2140:	90 e0       	ldi	r25, 0x00	; 0
    2142:	f2 01       	movw	r30, r4
    2144:	31 81       	ldd	r19, Z+1	; 0x01
    2146:	31 11       	cpse	r19, r1
    2148:	01 c0       	rjmp	.+2      	; 0x214c <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x1b4>
    214a:	81 83       	std	Z+1, r24	; 0x01
    214c:	d2 01       	movw	r26, r4
    214e:	11 96       	adiw	r26, 0x01	; 1
    2150:	3c 91       	ld	r19, X
    2152:	38 17       	cp	r19, r24
    2154:	19 06       	cpc	r1, r25
    2156:	d9 f5       	brne	.+118    	; 0x21ce <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x236>
    2158:	f2 01       	movw	r30, r4
    215a:	e0 0f       	add	r30, r16
    215c:	f1 1f       	adc	r31, r17
    215e:	a0 82       	st	Z, r10
    2160:	b1 82       	std	Z+1, r11	; 0x01
    2162:	48 01       	movw	r8, r16
    2164:	b2 e0       	ldi	r27, 0x02	; 2
    2166:	8b 0e       	add	r8, r27
    2168:	91 1c       	adc	r9, r1
    216a:	f2 01       	movw	r30, r4
    216c:	e8 0d       	add	r30, r8
    216e:	f9 1d       	adc	r31, r9
    2170:	2d 96       	adiw	r28, 0x0d	; 13
    2172:	ee af       	std	Y+62, r30	; 0x3e
    2174:	ff af       	std	Y+63, r31	; 0x3f
    2176:	2d 97       	sbiw	r28, 0x0d	; 13
    2178:	21 11       	cpse	r18, r1
    217a:	86 c2       	rjmp	.+1292   	; 0x2688 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x6f0>
    217c:	d6 01       	movw	r26, r12
    217e:	ed 91       	ld	r30, X+
    2180:	fc 91       	ld	r31, X
    2182:	04 80       	ldd	r0, Z+4	; 0x04
    2184:	f5 81       	ldd	r31, Z+5	; 0x05
    2186:	e0 2d       	mov	r30, r0
    2188:	c6 01       	movw	r24, r12
    218a:	09 95       	icall
    218c:	81 15       	cp	r24, r1
    218e:	99 42       	sbci	r25, 0x29	; 41
    2190:	09 f4       	brne	.+2      	; 0x2194 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x1fc>
    2192:	7a c2       	rjmp	.+1268   	; 0x2688 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x6f0>
    2194:	d6 01       	movw	r26, r12
    2196:	ed 91       	ld	r30, X+
    2198:	fc 91       	ld	r31, X
    219a:	04 80       	ldd	r0, Z+4	; 0x04
    219c:	f5 81       	ldd	r31, Z+5	; 0x05
    219e:	e0 2d       	mov	r30, r0
    21a0:	c6 01       	movw	r24, r12
    21a2:	09 95       	icall
    21a4:	2d 96       	adiw	r28, 0x0d	; 13
    21a6:	ee ad       	ldd	r30, Y+62	; 0x3e
    21a8:	ff ad       	ldd	r31, Y+63	; 0x3f
    21aa:	2d 97       	sbiw	r28, 0x0d	; 13
    21ac:	80 83       	st	Z, r24
    21ae:	91 83       	std	Z+1, r25	; 0x01
    21b0:	0c 5f       	subi	r16, 0xFC	; 252
    21b2:	1f 4f       	sbci	r17, 0xFF	; 255
    21b4:	f2 e0       	ldi	r31, 0x02	; 2
    21b6:	6f 0e       	add	r6, r31
    21b8:	71 1c       	adc	r7, r1
    21ba:	60 0e       	add	r6, r16
    21bc:	71 1e       	adc	r7, r17
    21be:	2f 96       	adiw	r28, 0x0f	; 15
    21c0:	2e ad       	ldd	r18, Y+62	; 0x3e
    21c2:	3f ad       	ldd	r19, Y+63	; 0x3f
    21c4:	2f 97       	sbiw	r28, 0x0f	; 15
    21c6:	26 15       	cp	r18, r6
    21c8:	37 05       	cpc	r19, r7
    21ca:	08 f0       	brcs	.+2      	; 0x21ce <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x236>
    21cc:	82 cf       	rjmp	.-252    	; 0x20d2 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x13a>
    21ce:	02 30       	cpi	r16, 0x02	; 2
    21d0:	11 05       	cpc	r17, r1
    21d2:	09 f0       	breq	.+2      	; 0x21d6 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x23e>
    21d4:	67 c2       	rjmp	.+1230   	; 0x26a4 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x70c>
    21d6:	d7 01       	movw	r26, r14
    21d8:	11 96       	adiw	r26, 0x01	; 1
    21da:	4d 91       	ld	r20, X+
    21dc:	5c 91       	ld	r21, X
    21de:	2a e0       	ldi	r18, 0x0A	; 10
    21e0:	64 e0       	ldi	r22, 0x04	; 4
    21e2:	c1 01       	movw	r24, r2
    21e4:	0e 94 7a 1e 	call	0x3cf4	; 0x3cf4 <_ZN8ATTClass9sendErrorEjhjh.constprop.47>
    21e8:	63 c2       	rjmp	.+1222   	; 0x26b0 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x718>
    21ea:	19 30       	cpi	r17, 0x09	; 9
    21ec:	09 f4       	brne	.+2      	; 0x21f0 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x258>
    21ee:	aa c3       	rjmp	.+1876   	; 0x2944 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x9ac>
    21f0:	08 f0       	brcs	.+2      	; 0x21f4 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x25c>
    21f2:	b3 c0       	rjmp	.+358    	; 0x235a <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x3c2>
    21f4:	16 30       	cpi	r17, 0x06	; 6
    21f6:	09 f4       	brne	.+2      	; 0x21fa <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x262>
    21f8:	85 c2       	rjmp	.+1290   	; 0x2704 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x76c>
    21fa:	18 30       	cpi	r17, 0x08	; 8
    21fc:	09 f0       	breq	.+2      	; 0x2200 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x268>
    21fe:	2a cf       	rjmp	.-428    	; 0x2054 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0xbc>
    2200:	8d b7       	in	r24, 0x3d	; 61
    2202:	9e b7       	in	r25, 0x3e	; 62
    2204:	2d 96       	adiw	r28, 0x0d	; 13
    2206:	8e af       	std	Y+62, r24	; 0x3e
    2208:	9f af       	std	Y+63, r25	; 0x3f
    220a:	2d 97       	sbiw	r28, 0x0d	; 13
    220c:	d7 01       	movw	r26, r14
    220e:	11 96       	adiw	r26, 0x01	; 1
    2210:	4d 91       	ld	r20, X+
    2212:	5c 91       	ld	r21, X
    2214:	24 e0       	ldi	r18, 0x04	; 4
    2216:	68 e0       	ldi	r22, 0x08	; 8
    2218:	06 30       	cpi	r16, 0x06	; 6
    221a:	09 f0       	breq	.+2      	; 0x221e <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x286>
    221c:	82 c2       	rjmp	.+1284   	; 0x2722 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x78a>
    221e:	ed b7       	in	r30, 0x3d	; 61
    2220:	fe b7       	in	r31, 0x3e	; 62
    2222:	2f 96       	adiw	r28, 0x0f	; 15
    2224:	2e ad       	ldd	r18, Y+62	; 0x3e
    2226:	3f ad       	ldd	r19, Y+63	; 0x3f
    2228:	2f 97       	sbiw	r28, 0x0f	; 15
    222a:	e2 1b       	sub	r30, r18
    222c:	f3 0b       	sbc	r31, r19
    222e:	ed bf       	out	0x3d, r30	; 61
    2230:	fe bf       	out	0x3e, r31	; 62
    2232:	8d b7       	in	r24, 0x3d	; 61
    2234:	9e b7       	in	r25, 0x3e	; 62
    2236:	01 96       	adiw	r24, 0x01	; 1
    2238:	4c 01       	movw	r8, r24
    223a:	89 e0       	ldi	r24, 0x09	; 9
    223c:	81 83       	std	Z+1, r24	; 0x01
    223e:	d4 01       	movw	r26, r8
    2240:	11 96       	adiw	r26, 0x01	; 1
    2242:	1c 92       	st	X, r1
    2244:	3a 01       	movw	r6, r20
    2246:	b1 e0       	ldi	r27, 0x01	; 1
    2248:	6b 1a       	sub	r6, r27
    224a:	71 08       	sbc	r7, r1
    224c:	52 e0       	ldi	r21, 0x02	; 2
    224e:	c5 2e       	mov	r12, r21
    2250:	d1 2c       	mov	r13, r1
    2252:	f7 01       	movw	r30, r14
    2254:	35 96       	adiw	r30, 0x05	; 5
    2256:	61 96       	adiw	r28, 0x11	; 17
    2258:	ee af       	std	Y+62, r30	; 0x3e
    225a:	ff af       	std	Y+63, r31	; 0x3f
    225c:	61 97       	sbiw	r28, 0x11	; 17
    225e:	80 91 5a 2b 	lds	r24, 0x2B5A	; 0x802b5a <GATT+0x2>
    2262:	90 91 5b 2b 	lds	r25, 0x2B5B	; 0x802b5b <GATT+0x3>
    2266:	68 16       	cp	r6, r24
    2268:	79 06       	cpc	r7, r25
    226a:	08 f0       	brcs	.+2      	; 0x226e <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x2d6>
    226c:	1c c3       	rjmp	.+1592   	; 0x28a6 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x90e>
    226e:	d7 01       	movw	r26, r14
    2270:	13 96       	adiw	r26, 0x03	; 3
    2272:	8d 91       	ld	r24, X+
    2274:	9c 91       	ld	r25, X
    2276:	01 97       	sbiw	r24, 0x01	; 1
    2278:	86 15       	cp	r24, r6
    227a:	97 05       	cpc	r25, r7
    227c:	08 f4       	brcc	.+2      	; 0x2280 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x2e8>
    227e:	13 c3       	rjmp	.+1574   	; 0x28a6 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x90e>
    2280:	b3 01       	movw	r22, r6
    2282:	8a e5       	ldi	r24, 0x5A	; 90
    2284:	9b e2       	ldi	r25, 0x2B	; 43
    2286:	0e 94 7e 01 	call	0x2fc	; 0x2fc <_ZNK13BLELinkedListIP17BLELocalAttributeE3getEj>
    228a:	5c 01       	movw	r10, r24
    228c:	23 01       	movw	r4, r6
    228e:	bf ef       	ldi	r27, 0xFF	; 255
    2290:	4b 1a       	sub	r4, r27
    2292:	5b 0a       	sbc	r5, r27
    2294:	dc 01       	movw	r26, r24
    2296:	ed 91       	ld	r30, X+
    2298:	fc 91       	ld	r31, X
    229a:	04 80       	ldd	r0, Z+4	; 0x04
    229c:	f5 81       	ldd	r31, Z+5	; 0x05
    229e:	e0 2d       	mov	r30, r0
    22a0:	09 95       	icall
    22a2:	f7 01       	movw	r30, r14
    22a4:	25 81       	ldd	r18, Z+5	; 0x05
    22a6:	36 81       	ldd	r19, Z+6	; 0x06
    22a8:	d5 01       	movw	r26, r10
    22aa:	ed 91       	ld	r30, X+
    22ac:	fc 91       	ld	r31, X
    22ae:	04 80       	ldd	r0, Z+4	; 0x04
    22b0:	f5 81       	ldd	r31, Z+5	; 0x05
    22b2:	e0 2d       	mov	r30, r0
    22b4:	82 17       	cp	r24, r18
    22b6:	93 07       	cpc	r25, r19
    22b8:	09 f0       	breq	.+2      	; 0x22bc <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x324>
    22ba:	05 c3       	rjmp	.+1546   	; 0x28c6 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x92e>
    22bc:	c5 01       	movw	r24, r10
    22be:	09 95       	icall
    22c0:	83 30       	cpi	r24, 0x03	; 3
    22c2:	98 42       	sbci	r25, 0x28	; 40
    22c4:	09 f0       	breq	.+2      	; 0x22c8 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x330>
    22c6:	bd c2       	rjmp	.+1402   	; 0x2842 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x8aa>
    22c8:	f5 01       	movw	r30, r10
    22ca:	87 8d       	ldd	r24, Z+31	; 0x1f
    22cc:	90 a1       	ldd	r25, Z+32	; 0x20
    22ce:	01 96       	adiw	r24, 0x01	; 1
    22d0:	48 16       	cp	r4, r24
    22d2:	59 06       	cpc	r5, r25
    22d4:	f1 f1       	breq	.+124    	; 0x2352 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x3ba>
    22d6:	84 89       	ldd	r24, Z+20	; 0x14
    22d8:	07 e0       	ldi	r16, 0x07	; 7
    22da:	10 e0       	ldi	r17, 0x00	; 0
    22dc:	82 30       	cpi	r24, 0x02	; 2
    22de:	11 f0       	breq	.+4      	; 0x22e4 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x34c>
    22e0:	05 e1       	ldi	r16, 0x15	; 21
    22e2:	10 e0       	ldi	r17, 0x00	; 0
    22e4:	d4 01       	movw	r26, r8
    22e6:	11 96       	adiw	r26, 0x01	; 1
    22e8:	9c 91       	ld	r25, X
    22ea:	11 97       	sbiw	r26, 0x01	; 1
    22ec:	91 11       	cpse	r25, r1
    22ee:	02 c0       	rjmp	.+4      	; 0x22f4 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x35c>
    22f0:	11 96       	adiw	r26, 0x01	; 1
    22f2:	0c 93       	st	X, r16
    22f4:	f4 01       	movw	r30, r8
    22f6:	91 81       	ldd	r25, Z+1	; 0x01
    22f8:	90 17       	cp	r25, r16
    22fa:	11 06       	cpc	r1, r17
    22fc:	09 f0       	breq	.+2      	; 0x2300 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x368>
    22fe:	d3 c2       	rjmp	.+1446   	; 0x28a6 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x90e>
    2300:	ec 0d       	add	r30, r12
    2302:	fd 1d       	adc	r31, r13
    2304:	40 82       	st	Z, r4
    2306:	51 82       	std	Z+1, r5	; 0x01
    2308:	d5 01       	movw	r26, r10
    230a:	57 96       	adiw	r26, 0x17	; 23
    230c:	9c 91       	ld	r25, X
    230e:	92 83       	std	Z+2, r25	; 0x02
    2310:	b2 e0       	ldi	r27, 0x02	; 2
    2312:	6b 0e       	add	r6, r27
    2314:	71 1c       	adc	r7, r1
    2316:	63 82       	std	Z+3, r6	; 0x03
    2318:	74 82       	std	Z+4, r7	; 0x04
    231a:	e5 e0       	ldi	r30, 0x05	; 5
    231c:	ce 0e       	add	r12, r30
    231e:	d1 1c       	adc	r13, r1
    2320:	68 2e       	mov	r6, r24
    2322:	71 2c       	mov	r7, r1
    2324:	b5 01       	movw	r22, r10
    2326:	6c 5f       	subi	r22, 0xFC	; 252
    2328:	7f 4f       	sbci	r23, 0xFF	; 255
    232a:	a3 01       	movw	r20, r6
    232c:	c4 01       	movw	r24, r8
    232e:	8c 0d       	add	r24, r12
    2330:	9d 1d       	adc	r25, r13
    2332:	0e 94 95 2a 	call	0x552a	; 0x552a <memcpy>
    2336:	c6 0c       	add	r12, r6
    2338:	d7 1c       	adc	r13, r7
    233a:	c8 01       	movw	r24, r16
    233c:	8c 0d       	add	r24, r12
    233e:	9d 1d       	adc	r25, r13
    2340:	2f 96       	adiw	r28, 0x0f	; 15
    2342:	2e ad       	ldd	r18, Y+62	; 0x3e
    2344:	3f ad       	ldd	r19, Y+63	; 0x3f
    2346:	2f 97       	sbiw	r28, 0x0f	; 15
    2348:	28 17       	cp	r18, r24
    234a:	39 07       	cpc	r19, r25
    234c:	08 f4       	brcc	.+2      	; 0x2350 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x3b8>
    234e:	ab c2       	rjmp	.+1366   	; 0x28a6 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x90e>
    2350:	32 01       	movw	r6, r4
    2352:	bf ef       	ldi	r27, 0xFF	; 255
    2354:	6b 1a       	sub	r6, r27
    2356:	7b 0a       	sbc	r7, r27
    2358:	82 cf       	rjmp	.-252    	; 0x225e <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x2c6>
    235a:	1a 30       	cpi	r17, 0x0A	; 10
    235c:	09 f4       	brne	.+2      	; 0x2360 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x3c8>
    235e:	ab c3       	rjmp	.+1878   	; 0x2ab6 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0xb1e>
    2360:	1b 30       	cpi	r17, 0x0B	; 11
    2362:	09 f0       	breq	.+2      	; 0x2366 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x3ce>
    2364:	77 ce       	rjmp	.-786    	; 0x2054 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0xbc>
    2366:	80 91 1f 2b 	lds	r24, 0x2B1F	; 0x802b1f <ATT+0x39>
    236a:	90 91 20 2b 	lds	r25, 0x2B20	; 0x802b20 <ATT+0x3a>
    236e:	28 16       	cp	r2, r24
    2370:	39 06       	cpc	r3, r25
    2372:	09 f0       	breq	.+2      	; 0x2376 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x3de>
    2374:	db c0       	rjmp	.+438    	; 0x252c <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x594>
    2376:	80 91 21 2b 	lds	r24, 0x2B21	; 0x802b21 <ATT+0x3b>
    237a:	8b 30       	cpi	r24, 0x0B	; 11
    237c:	09 f0       	breq	.+2      	; 0x2380 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x3e8>
    237e:	d6 c0       	rjmp	.+428    	; 0x252c <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x594>
    2380:	e0 91 22 2b 	lds	r30, 0x2B22	; 0x802b22 <ATT+0x3c>
    2384:	f0 91 23 2b 	lds	r31, 0x2B23	; 0x802b23 <ATT+0x3d>
    2388:	80 83       	st	Z, r24
    238a:	80 91 22 2b 	lds	r24, 0x2B22	; 0x802b22 <ATT+0x3c>
    238e:	90 91 23 2b 	lds	r25, 0x2B23	; 0x802b23 <ATT+0x3d>
    2392:	40 2f       	mov	r20, r16
    2394:	50 e0       	ldi	r21, 0x00	; 0
    2396:	b5 01       	movw	r22, r10
    2398:	01 96       	adiw	r24, 0x01	; 1
    239a:	0e 94 95 2a 	call	0x552a	; 0x552a <memcpy>
    239e:	2c 96       	adiw	r28, 0x0c	; 12
    23a0:	3f ad       	ldd	r19, Y+63	; 0x3f
    23a2:	2c 97       	sbiw	r28, 0x0c	; 12
    23a4:	30 93 24 2b 	sts	0x2B24, r19	; 0x802b24 <ATT+0x3e>
    23a8:	c1 c0       	rjmp	.+386    	; 0x252c <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x594>
    23aa:	16 31       	cpi	r17, 0x16	; 22
    23ac:	09 f4       	brne	.+2      	; 0x23b0 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x418>
    23ae:	84 c5       	rjmp	.+2824   	; 0x2eb8 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0xf20>
    23b0:	d0 f5       	brcc	.+116    	; 0x2426 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x48e>
    23b2:	11 31       	cpi	r17, 0x11	; 17
    23b4:	09 f4       	brne	.+2      	; 0x23b8 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x420>
    23b6:	6e c3       	rjmp	.+1756   	; 0x2a94 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0xafc>
    23b8:	d0 f4       	brcc	.+52     	; 0x23ee <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x456>
    23ba:	10 31       	cpi	r17, 0x10	; 16
    23bc:	09 f0       	breq	.+2      	; 0x23c0 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x428>
    23be:	4a ce       	rjmp	.-876    	; 0x2054 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0xbc>
    23c0:	2d b7       	in	r18, 0x3d	; 61
    23c2:	3e b7       	in	r19, 0x3e	; 62
    23c4:	2d 96       	adiw	r28, 0x0d	; 13
    23c6:	2e af       	std	Y+62, r18	; 0x3e
    23c8:	3f af       	std	Y+63, r19	; 0x3f
    23ca:	2d 97       	sbiw	r28, 0x0d	; 13
    23cc:	d7 01       	movw	r26, r14
    23ce:	11 96       	adiw	r26, 0x01	; 1
    23d0:	4d 91       	ld	r20, X+
    23d2:	5c 91       	ld	r21, X
    23d4:	12 97       	sbiw	r26, 0x02	; 2
    23d6:	06 30       	cpi	r16, 0x06	; 6
    23d8:	39 f4       	brne	.+14     	; 0x23e8 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x450>
    23da:	15 96       	adiw	r26, 0x05	; 5
    23dc:	8d 91       	ld	r24, X+
    23de:	9c 91       	ld	r25, X
    23e0:	98 52       	subi	r25, 0x28	; 40
    23e2:	02 97       	sbiw	r24, 0x02	; 2
    23e4:	08 f4       	brcc	.+2      	; 0x23e8 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x450>
    23e6:	bf c2       	rjmp	.+1406   	; 0x2966 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x9ce>
    23e8:	20 e1       	ldi	r18, 0x10	; 16
    23ea:	60 e1       	ldi	r22, 0x10	; 16
    23ec:	68 c2       	rjmp	.+1232   	; 0x28be <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x926>
    23ee:	12 31       	cpi	r17, 0x12	; 18
    23f0:	09 f4       	brne	.+2      	; 0x23f4 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x45c>
    23f2:	6b c0       	rjmp	.+214    	; 0x24ca <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x532>
    23f4:	13 31       	cpi	r17, 0x13	; 19
    23f6:	09 f0       	breq	.+2      	; 0x23fa <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x462>
    23f8:	2d ce       	rjmp	.-934    	; 0x2054 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0xbc>
    23fa:	01 11       	cpse	r16, r1
    23fc:	97 c0       	rjmp	.+302    	; 0x252c <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x594>
    23fe:	80 91 1f 2b 	lds	r24, 0x2B1F	; 0x802b1f <ATT+0x39>
    2402:	90 91 20 2b 	lds	r25, 0x2B20	; 0x802b20 <ATT+0x3a>
    2406:	28 16       	cp	r2, r24
    2408:	39 06       	cpc	r3, r25
    240a:	09 f0       	breq	.+2      	; 0x240e <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x476>
    240c:	8f c0       	rjmp	.+286    	; 0x252c <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x594>
    240e:	80 91 21 2b 	lds	r24, 0x2B21	; 0x802b21 <ATT+0x3b>
    2412:	83 31       	cpi	r24, 0x13	; 19
    2414:	09 f0       	breq	.+2      	; 0x2418 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x480>
    2416:	8a c0       	rjmp	.+276    	; 0x252c <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x594>
    2418:	e0 91 22 2b 	lds	r30, 0x2B22	; 0x802b22 <ATT+0x3c>
    241c:	f0 91 23 2b 	lds	r31, 0x2B23	; 0x802b23 <ATT+0x3d>
    2420:	80 83       	st	Z, r24
    2422:	81 e0       	ldi	r24, 0x01	; 1
    2424:	81 c0       	rjmp	.+258    	; 0x2528 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x590>
    2426:	1d 31       	cpi	r17, 0x1D	; 29
    2428:	41 f0       	breq	.+16     	; 0x243a <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x4a2>
    242a:	08 f0       	brcs	.+2      	; 0x242e <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x496>
    242c:	48 c0       	rjmp	.+144    	; 0x24be <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x526>
    242e:	18 31       	cpi	r17, 0x18	; 24
    2430:	09 f4       	brne	.+2      	; 0x2434 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x49c>
    2432:	f7 c5       	rjmp	.+3054   	; 0x3022 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x108a>
    2434:	1b 31       	cpi	r17, 0x1B	; 27
    2436:	09 f0       	breq	.+2      	; 0x243a <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x4a2>
    2438:	0d ce       	rjmp	.-998    	; 0x2054 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0xbc>
    243a:	02 30       	cpi	r16, 0x02	; 2
    243c:	08 f4       	brcc	.+2      	; 0x2440 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x4a8>
    243e:	76 c0       	rjmp	.+236    	; 0x252c <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x594>
    2440:	f7 01       	movw	r30, r14
    2442:	81 80       	ldd	r8, Z+1	; 0x01
    2444:	92 80       	ldd	r9, Z+2	; 0x02
    2446:	86 ee       	ldi	r24, 0xE6	; 230
    2448:	c8 2e       	mov	r12, r24
    244a:	8a e2       	ldi	r24, 0x2A	; 42
    244c:	d8 2e       	mov	r13, r24
    244e:	99 24       	eor	r9, r9
    2450:	20 2f       	mov	r18, r16
    2452:	22 50       	subi	r18, 0x02	; 2
    2454:	33 0b       	sbc	r19, r19
    2456:	63 96       	adiw	r28, 0x13	; 19
    2458:	2e af       	std	Y+62, r18	; 0x3e
    245a:	3f af       	std	Y+63, r19	; 0x3f
    245c:	63 97       	sbiw	r28, 0x13	; 19
    245e:	27 01       	movw	r4, r14
    2460:	33 e0       	ldi	r19, 0x03	; 3
    2462:	43 0e       	add	r4, r19
    2464:	51 1c       	adc	r5, r1
    2466:	d6 01       	movw	r26, r12
    2468:	18 96       	adiw	r26, 0x08	; 8
    246a:	8d 91       	ld	r24, X+
    246c:	9c 91       	ld	r25, X
    246e:	19 97       	sbiw	r26, 0x09	; 9
    2470:	28 16       	cp	r2, r24
    2472:	39 06       	cpc	r3, r25
    2474:	09 f0       	breq	.+2      	; 0x2478 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x4e0>
    2476:	c0 c6       	rjmp	.+3456   	; 0x31f8 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x1260>
    2478:	54 96       	adiw	r26, 0x14	; 20
    247a:	ed 91       	ld	r30, X+
    247c:	fc 91       	ld	r31, X
    247e:	30 97       	sbiw	r30, 0x00	; 0
    2480:	09 f4       	brne	.+2      	; 0x2484 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x4ec>
    2482:	c3 c6       	rjmp	.+3462   	; 0x320a <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x1272>
    2484:	22 81       	ldd	r18, Z+2	; 0x02
    2486:	33 81       	ldd	r19, Z+3	; 0x03
    2488:	90 e0       	ldi	r25, 0x00	; 0
    248a:	80 e0       	ldi	r24, 0x00	; 0
    248c:	82 17       	cp	r24, r18
    248e:	93 07       	cpc	r25, r19
    2490:	0c f0       	brlt	.+2      	; 0x2494 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x4fc>
    2492:	b2 c6       	rjmp	.+3428   	; 0x31f8 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x1260>
    2494:	71 2c       	mov	r7, r1
    2496:	61 2c       	mov	r6, r1
    2498:	82 17       	cp	r24, r18
    249a:	93 07       	cpc	r25, r19
    249c:	08 f0       	brcs	.+2      	; 0x24a0 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x508>
    249e:	3b c6       	rjmp	.+3190   	; 0x3116 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x117e>
    24a0:	a4 81       	ldd	r26, Z+4	; 0x04
    24a2:	b5 81       	ldd	r27, Z+5	; 0x05
    24a4:	50 e0       	ldi	r21, 0x00	; 0
    24a6:	40 e0       	ldi	r20, 0x00	; 0
    24a8:	84 17       	cp	r24, r20
    24aa:	95 07       	cpc	r25, r21
    24ac:	09 f4       	brne	.+2      	; 0x24b0 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x518>
    24ae:	31 c6       	rjmp	.+3170   	; 0x3112 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x117a>
    24b0:	12 96       	adiw	r26, 0x02	; 2
    24b2:	0d 90       	ld	r0, X+
    24b4:	bc 91       	ld	r27, X
    24b6:	a0 2d       	mov	r26, r0
    24b8:	4f 5f       	subi	r20, 0xFF	; 255
    24ba:	5f 4f       	sbci	r21, 0xFF	; 255
    24bc:	f5 cf       	rjmp	.-22     	; 0x24a8 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x510>
    24be:	1e 31       	cpi	r17, 0x1E	; 30
    24c0:	09 f4       	brne	.+2      	; 0x24c4 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x52c>
    24c2:	ad c6       	rjmp	.+3418   	; 0x321e <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x1286>
    24c4:	12 35       	cpi	r17, 0x52	; 82
    24c6:	09 f0       	breq	.+2      	; 0x24ca <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x532>
    24c8:	c5 cd       	rjmp	.-1142   	; 0x2054 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0xbc>
    24ca:	02 30       	cpi	r16, 0x02	; 2
    24cc:	08 f0       	brcs	.+2      	; 0x24d0 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x538>
    24ce:	00 c4       	rjmp	.+2048   	; 0x2cd0 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0xd38>
    24d0:	24 e0       	ldi	r18, 0x04	; 4
    24d2:	50 e0       	ldi	r21, 0x00	; 0
    24d4:	40 e0       	ldi	r20, 0x00	; 0
    24d6:	12 31       	cpi	r17, 0x12	; 18
    24d8:	49 f5       	brne	.+82     	; 0x252c <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x594>
    24da:	62 e1       	ldi	r22, 0x12	; 18
    24dc:	4a c0       	rjmp	.+148    	; 0x2572 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x5da>
    24de:	04 30       	cpi	r16, 0x04	; 4
    24e0:	29 f5       	brne	.+74     	; 0x252c <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x594>
    24e2:	80 91 1f 2b 	lds	r24, 0x2B1F	; 0x802b1f <ATT+0x39>
    24e6:	90 91 20 2b 	lds	r25, 0x2B20	; 0x802b20 <ATT+0x3a>
    24ea:	28 16       	cp	r2, r24
    24ec:	39 06       	cpc	r3, r25
    24ee:	f1 f4       	brne	.+60     	; 0x252c <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x594>
    24f0:	80 91 21 2b 	lds	r24, 0x2B21	; 0x802b21 <ATT+0x3b>
    24f4:	81 50       	subi	r24, 0x01	; 1
    24f6:	99 0b       	sbc	r25, r25
    24f8:	d7 01       	movw	r26, r14
    24fa:	11 96       	adiw	r26, 0x01	; 1
    24fc:	2c 91       	ld	r18, X
    24fe:	28 17       	cp	r18, r24
    2500:	19 06       	cpc	r1, r25
    2502:	a1 f4       	brne	.+40     	; 0x252c <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x594>
    2504:	e0 91 22 2b 	lds	r30, 0x2B22	; 0x802b22 <ATT+0x3c>
    2508:	f0 91 23 2b 	lds	r31, 0x2B23	; 0x802b23 <ATT+0x3d>
    250c:	81 e0       	ldi	r24, 0x01	; 1
    250e:	80 83       	st	Z, r24
    2510:	a0 91 22 2b 	lds	r26, 0x2B22	; 0x802b22 <ATT+0x3c>
    2514:	b0 91 23 2b 	lds	r27, 0x2B23	; 0x802b23 <ATT+0x3d>
    2518:	11 96       	adiw	r26, 0x01	; 1
    251a:	84 e0       	ldi	r24, 0x04	; 4
    251c:	f5 01       	movw	r30, r10
    251e:	01 90       	ld	r0, Z+
    2520:	0d 92       	st	X+, r0
    2522:	8a 95       	dec	r24
    2524:	e1 f7       	brne	.-8      	; 0x251e <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x586>
    2526:	85 e0       	ldi	r24, 0x05	; 5
    2528:	80 93 24 2b 	sts	0x2B24, r24	; 0x802b24 <ATT+0x3e>
    252c:	65 96       	adiw	r28, 0x15	; 21
    252e:	2e ad       	ldd	r18, Y+62	; 0x3e
    2530:	3f ad       	ldd	r19, Y+63	; 0x3f
    2532:	65 97       	sbiw	r28, 0x15	; 21
    2534:	2d bf       	out	0x3d, r18	; 61
    2536:	3e bf       	out	0x3e, r19	; 62
    2538:	cc 5a       	subi	r28, 0xAC	; 172
    253a:	df 4f       	sbci	r29, 0xFF	; 255
    253c:	cd bf       	out	0x3d, r28	; 61
    253e:	de bf       	out	0x3e, r29	; 62
    2540:	df 91       	pop	r29
    2542:	cf 91       	pop	r28
    2544:	1f 91       	pop	r17
    2546:	0f 91       	pop	r16
    2548:	ff 90       	pop	r15
    254a:	ef 90       	pop	r14
    254c:	df 90       	pop	r13
    254e:	cf 90       	pop	r12
    2550:	bf 90       	pop	r11
    2552:	af 90       	pop	r10
    2554:	9f 90       	pop	r9
    2556:	8f 90       	pop	r8
    2558:	7f 90       	pop	r7
    255a:	6f 90       	pop	r6
    255c:	5f 90       	pop	r5
    255e:	4f 90       	pop	r4
    2560:	3f 90       	pop	r3
    2562:	2f 90       	pop	r2
    2564:	08 95       	ret
    2566:	02 30       	cpi	r16, 0x02	; 2
    2568:	41 f0       	breq	.+16     	; 0x257a <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x5e2>
    256a:	24 e0       	ldi	r18, 0x04	; 4
    256c:	50 e0       	ldi	r21, 0x00	; 0
    256e:	40 e0       	ldi	r20, 0x00	; 0
    2570:	62 e0       	ldi	r22, 0x02	; 2
    2572:	c1 01       	movw	r24, r2
    2574:	0e 94 7a 1e 	call	0x3cf4	; 0x3cf4 <_ZN8ATTClass9sendErrorEjhjh.constprop.47>
    2578:	d9 cf       	rjmp	.-78     	; 0x252c <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x594>
    257a:	f7 01       	movw	r30, r14
    257c:	21 81       	ldd	r18, Z+1	; 0x01
    257e:	32 81       	ldd	r19, Z+2	; 0x02
    2580:	80 91 e8 2a 	lds	r24, 0x2AE8	; 0x802ae8 <ATT+0x2>
    2584:	90 91 e9 2a 	lds	r25, 0x2AE9	; 0x802ae9 <ATT+0x3>
    2588:	28 17       	cp	r18, r24
    258a:	39 07       	cpc	r19, r25
    258c:	08 f4       	brcc	.+2      	; 0x2590 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x5f8>
    258e:	c9 01       	movw	r24, r18
    2590:	2c 14       	cp	r2, r12
    2592:	3d 04       	cpc	r3, r13
    2594:	39 f1       	breq	.+78     	; 0x25e4 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x64c>
    2596:	20 91 fc 2a 	lds	r18, 0x2AFC	; 0x802afc <ATT+0x16>
    259a:	30 91 fd 2a 	lds	r19, 0x2AFD	; 0x802afd <ATT+0x17>
    259e:	22 16       	cp	r2, r18
    25a0:	33 06       	cpc	r3, r19
    25a2:	19 f1       	breq	.+70     	; 0x25ea <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x652>
    25a4:	20 91 0a 2b 	lds	r18, 0x2B0A	; 0x802b0a <ATT+0x24>
    25a8:	30 91 0b 2b 	lds	r19, 0x2B0B	; 0x802b0b <ATT+0x25>
    25ac:	22 16       	cp	r2, r18
    25ae:	33 06       	cpc	r3, r19
    25b0:	61 f4       	brne	.+24     	; 0x25ca <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x632>
    25b2:	22 e0       	ldi	r18, 0x02	; 2
    25b4:	30 e0       	ldi	r19, 0x00	; 0
    25b6:	4e e0       	ldi	r20, 0x0E	; 14
    25b8:	42 9f       	mul	r20, r18
    25ba:	f0 01       	movw	r30, r0
    25bc:	43 9f       	mul	r20, r19
    25be:	f0 0d       	add	r31, r0
    25c0:	11 24       	eor	r1, r1
    25c2:	ea 51       	subi	r30, 0x1A	; 26
    25c4:	f5 4d       	sbci	r31, 0xD5	; 213
    25c6:	82 8b       	std	Z+18, r24	; 0x12
    25c8:	93 8b       	std	Z+19, r25	; 0x13
    25ca:	23 e0       	ldi	r18, 0x03	; 3
    25cc:	29 83       	std	Y+1, r18	; 0x01
    25ce:	8a 83       	std	Y+2, r24	; 0x02
    25d0:	9b 83       	std	Y+3, r25	; 0x03
    25d2:	9e 01       	movw	r18, r28
    25d4:	2f 5f       	subi	r18, 0xFF	; 255
    25d6:	3f 4f       	sbci	r19, 0xFF	; 255
    25d8:	43 e0       	ldi	r20, 0x03	; 3
    25da:	64 e0       	ldi	r22, 0x04	; 4
    25dc:	c1 01       	movw	r24, r2
    25de:	0e 94 0a 1e 	call	0x3c14	; 0x3c14 <_ZN8HCIClass10sendAclPktEjhhPv.constprop.37>
    25e2:	a4 cf       	rjmp	.-184    	; 0x252c <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x594>
    25e4:	30 e0       	ldi	r19, 0x00	; 0
    25e6:	20 e0       	ldi	r18, 0x00	; 0
    25e8:	e6 cf       	rjmp	.-52     	; 0x25b6 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x61e>
    25ea:	21 e0       	ldi	r18, 0x01	; 1
    25ec:	30 e0       	ldi	r19, 0x00	; 0
    25ee:	e3 cf       	rjmp	.-58     	; 0x25b6 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x61e>
    25f0:	02 30       	cpi	r16, 0x02	; 2
    25f2:	09 f0       	breq	.+2      	; 0x25f6 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x65e>
    25f4:	9b cf       	rjmp	.-202    	; 0x252c <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x594>
    25f6:	2c 14       	cp	r2, r12
    25f8:	3d 04       	cpc	r3, r13
    25fa:	d9 f1       	breq	.+118    	; 0x2672 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x6da>
    25fc:	80 91 fc 2a 	lds	r24, 0x2AFC	; 0x802afc <ATT+0x16>
    2600:	90 91 fd 2a 	lds	r25, 0x2AFD	; 0x802afd <ATT+0x17>
    2604:	28 16       	cp	r2, r24
    2606:	39 06       	cpc	r3, r25
    2608:	b9 f1       	breq	.+110    	; 0x2678 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x6e0>
    260a:	80 91 0a 2b 	lds	r24, 0x2B0A	; 0x802b0a <ATT+0x24>
    260e:	90 91 0b 2b 	lds	r25, 0x2B0B	; 0x802b0b <ATT+0x25>
    2612:	28 16       	cp	r2, r24
    2614:	39 06       	cpc	r3, r25
    2616:	81 f4       	brne	.+32     	; 0x2638 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x6a0>
    2618:	82 e0       	ldi	r24, 0x02	; 2
    261a:	90 e0       	ldi	r25, 0x00	; 0
    261c:	d7 01       	movw	r26, r14
    261e:	11 96       	adiw	r26, 0x01	; 1
    2620:	2d 91       	ld	r18, X+
    2622:	3c 91       	ld	r19, X
    2624:	4e e0       	ldi	r20, 0x0E	; 14
    2626:	48 9f       	mul	r20, r24
    2628:	f0 01       	movw	r30, r0
    262a:	49 9f       	mul	r20, r25
    262c:	f0 0d       	add	r31, r0
    262e:	11 24       	eor	r1, r1
    2630:	ea 51       	subi	r30, 0x1A	; 26
    2632:	f5 4d       	sbci	r31, 0xD5	; 213
    2634:	22 8b       	std	Z+18, r18	; 0x12
    2636:	33 8b       	std	Z+19, r19	; 0x13
    2638:	80 91 1f 2b 	lds	r24, 0x2B1F	; 0x802b1f <ATT+0x39>
    263c:	90 91 20 2b 	lds	r25, 0x2B20	; 0x802b20 <ATT+0x3a>
    2640:	28 16       	cp	r2, r24
    2642:	39 06       	cpc	r3, r25
    2644:	09 f0       	breq	.+2      	; 0x2648 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x6b0>
    2646:	72 cf       	rjmp	.-284    	; 0x252c <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x594>
    2648:	80 91 21 2b 	lds	r24, 0x2B21	; 0x802b21 <ATT+0x3b>
    264c:	83 30       	cpi	r24, 0x03	; 3
    264e:	09 f0       	breq	.+2      	; 0x2652 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x6ba>
    2650:	6d cf       	rjmp	.-294    	; 0x252c <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x594>
    2652:	e0 91 22 2b 	lds	r30, 0x2B22	; 0x802b22 <ATT+0x3c>
    2656:	f0 91 23 2b 	lds	r31, 0x2B23	; 0x802b23 <ATT+0x3d>
    265a:	80 83       	st	Z, r24
    265c:	e0 91 22 2b 	lds	r30, 0x2B22	; 0x802b22 <ATT+0x3c>
    2660:	f0 91 23 2b 	lds	r31, 0x2B23	; 0x802b23 <ATT+0x3d>
    2664:	d7 01       	movw	r26, r14
    2666:	11 96       	adiw	r26, 0x01	; 1
    2668:	2d 91       	ld	r18, X+
    266a:	3c 91       	ld	r19, X
    266c:	21 83       	std	Z+1, r18	; 0x01
    266e:	32 83       	std	Z+2, r19	; 0x02
    2670:	5b cf       	rjmp	.-330    	; 0x2528 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x590>
    2672:	90 e0       	ldi	r25, 0x00	; 0
    2674:	80 e0       	ldi	r24, 0x00	; 0
    2676:	d2 cf       	rjmp	.-92     	; 0x261c <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x684>
    2678:	81 e0       	ldi	r24, 0x01	; 1
    267a:	90 e0       	ldi	r25, 0x00	; 0
    267c:	cf cf       	rjmp	.-98     	; 0x261c <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x684>
    267e:	62 e0       	ldi	r22, 0x02	; 2
    2680:	66 2e       	mov	r6, r22
    2682:	71 2c       	mov	r7, r1
    2684:	21 e0       	ldi	r18, 0x01	; 1
    2686:	5b cd       	rjmp	.-1354   	; 0x213e <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x1a6>
    2688:	b6 01       	movw	r22, r12
    268a:	6c 5f       	subi	r22, 0xFC	; 252
    268c:	7f 4f       	sbci	r23, 0xFF	; 255
    268e:	a3 01       	movw	r20, r6
    2690:	2d 96       	adiw	r28, 0x0d	; 13
    2692:	8e ad       	ldd	r24, Y+62	; 0x3e
    2694:	9f ad       	ldd	r25, Y+63	; 0x3f
    2696:	2d 97       	sbiw	r28, 0x0d	; 13
    2698:	0e 94 95 2a 	call	0x552a	; 0x552a <memcpy>
    269c:	84 01       	movw	r16, r8
    269e:	06 0d       	add	r16, r6
    26a0:	17 1d       	adc	r17, r7
    26a2:	88 cd       	rjmp	.-1264   	; 0x21b4 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x21c>
    26a4:	92 01       	movw	r18, r4
    26a6:	40 2f       	mov	r20, r16
    26a8:	64 e0       	ldi	r22, 0x04	; 4
    26aa:	c1 01       	movw	r24, r2
    26ac:	0e 94 0a 1e 	call	0x3c14	; 0x3c14 <_ZN8HCIClass10sendAclPktEjhhPv.constprop.37>
    26b0:	61 96       	adiw	r28, 0x11	; 17
    26b2:	ee ad       	ldd	r30, Y+62	; 0x3e
    26b4:	ff ad       	ldd	r31, Y+63	; 0x3f
    26b6:	61 97       	sbiw	r28, 0x11	; 17
    26b8:	ea c1       	rjmp	.+980    	; 0x2a8e <_ZN8ATTClass10handleDataEjhPh.constprop.46+0xaf6>
    26ba:	02 30       	cpi	r16, 0x02	; 2
    26bc:	08 f4       	brcc	.+2      	; 0x26c0 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x728>
    26be:	36 cf       	rjmp	.-404    	; 0x252c <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x594>
    26c0:	80 91 1f 2b 	lds	r24, 0x2B1F	; 0x802b1f <ATT+0x39>
    26c4:	90 91 20 2b 	lds	r25, 0x2B20	; 0x802b20 <ATT+0x3a>
    26c8:	28 16       	cp	r2, r24
    26ca:	39 06       	cpc	r3, r25
    26cc:	09 f0       	breq	.+2      	; 0x26d0 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x738>
    26ce:	2e cf       	rjmp	.-420    	; 0x252c <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x594>
    26d0:	80 91 21 2b 	lds	r24, 0x2B21	; 0x802b21 <ATT+0x3b>
    26d4:	85 30       	cpi	r24, 0x05	; 5
    26d6:	09 f0       	breq	.+2      	; 0x26da <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x742>
    26d8:	29 cf       	rjmp	.-430    	; 0x252c <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x594>
    26da:	e0 91 22 2b 	lds	r30, 0x2B22	; 0x802b22 <ATT+0x3c>
    26de:	f0 91 23 2b 	lds	r31, 0x2B23	; 0x802b23 <ATT+0x3d>
    26e2:	10 83       	st	Z, r17
    26e4:	80 91 22 2b 	lds	r24, 0x2B22	; 0x802b22 <ATT+0x3c>
    26e8:	90 91 23 2b 	lds	r25, 0x2B23	; 0x802b23 <ATT+0x3d>
    26ec:	40 2f       	mov	r20, r16
    26ee:	50 e0       	ldi	r21, 0x00	; 0
    26f0:	b5 01       	movw	r22, r10
    26f2:	01 96       	adiw	r24, 0x01	; 1
    26f4:	0e 94 95 2a 	call	0x552a	; 0x552a <memcpy>
    26f8:	2c 96       	adiw	r28, 0x0c	; 12
    26fa:	ff ad       	ldd	r31, Y+63	; 0x3f
    26fc:	2c 97       	sbiw	r28, 0x0c	; 12
    26fe:	f0 93 24 2b 	sts	0x2B24, r31	; 0x802b24 <ATT+0x3e>
    2702:	14 cf       	rjmp	.-472    	; 0x252c <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x594>
    2704:	2d b7       	in	r18, 0x3d	; 61
    2706:	3e b7       	in	r19, 0x3e	; 62
    2708:	2d 96       	adiw	r28, 0x0d	; 13
    270a:	2e af       	std	Y+62, r18	; 0x3e
    270c:	3f af       	std	Y+63, r19	; 0x3f
    270e:	2d 97       	sbiw	r28, 0x0d	; 13
    2710:	d7 01       	movw	r26, r14
    2712:	11 96       	adiw	r26, 0x01	; 1
    2714:	4d 91       	ld	r20, X+
    2716:	5c 91       	ld	r21, X
    2718:	12 97       	sbiw	r26, 0x02	; 2
    271a:	06 30       	cpi	r16, 0x06	; 6
    271c:	30 f4       	brcc	.+12     	; 0x272a <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x792>
    271e:	24 e0       	ldi	r18, 0x04	; 4
    2720:	67 e0       	ldi	r22, 0x07	; 7
    2722:	c1 01       	movw	r24, r2
    2724:	0e 94 7a 1e 	call	0x3cf4	; 0x3cf4 <_ZN8ATTClass9sendErrorEjhjh.constprop.47>
    2728:	01 cf       	rjmp	.-510    	; 0x252c <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x594>
    272a:	ed b7       	in	r30, 0x3d	; 61
    272c:	fe b7       	in	r31, 0x3e	; 62
    272e:	2f 96       	adiw	r28, 0x0f	; 15
    2730:	2e ad       	ldd	r18, Y+62	; 0x3e
    2732:	3f ad       	ldd	r19, Y+63	; 0x3f
    2734:	2f 97       	sbiw	r28, 0x0f	; 15
    2736:	e2 1b       	sub	r30, r18
    2738:	f3 0b       	sbc	r31, r19
    273a:	ed bf       	out	0x3d, r30	; 61
    273c:	fe bf       	out	0x3e, r31	; 62
    273e:	8d b7       	in	r24, 0x3d	; 61
    2740:	9e b7       	in	r25, 0x3e	; 62
    2742:	01 96       	adiw	r24, 0x01	; 1
    2744:	5c 01       	movw	r10, r24
    2746:	87 e0       	ldi	r24, 0x07	; 7
    2748:	81 83       	std	Z+1, r24	; 0x01
    274a:	15 96       	adiw	r26, 0x05	; 5
    274c:	8d 91       	ld	r24, X+
    274e:	9c 91       	ld	r25, X
    2750:	81 15       	cp	r24, r1
    2752:	98 42       	sbci	r25, 0x28	; 40
    2754:	49 f0       	breq	.+18     	; 0x2768 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x7d0>
    2756:	f7 01       	movw	r30, r14
    2758:	41 81       	ldd	r20, Z+1	; 0x01
    275a:	52 81       	ldd	r21, Z+2	; 0x02
    275c:	2a e0       	ldi	r18, 0x0A	; 10
    275e:	67 e0       	ldi	r22, 0x07	; 7
    2760:	c1 01       	movw	r24, r2
    2762:	0e 94 7a 1e 	call	0x3cf4	; 0x3cf4 <_ZN8ATTClass9sendErrorEjhjh.constprop.47>
    2766:	66 c0       	rjmp	.+204    	; 0x2834 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x89c>
    2768:	20 2f       	mov	r18, r16
    276a:	26 50       	subi	r18, 0x06	; 6
    276c:	33 0b       	sbc	r19, r19
    276e:	39 01       	movw	r6, r18
    2770:	6a 01       	movw	r12, r20
    2772:	31 e0       	ldi	r19, 0x01	; 1
    2774:	c3 1a       	sub	r12, r19
    2776:	d1 08       	sbc	r13, r1
    2778:	01 e0       	ldi	r16, 0x01	; 1
    277a:	10 e0       	ldi	r17, 0x00	; 0
    277c:	27 01       	movw	r4, r14
    277e:	47 e0       	ldi	r20, 0x07	; 7
    2780:	44 0e       	add	r4, r20
    2782:	51 1c       	adc	r5, r1
    2784:	80 91 5a 2b 	lds	r24, 0x2B5A	; 0x802b5a <GATT+0x2>
    2788:	90 91 5b 2b 	lds	r25, 0x2B5B	; 0x802b5b <GATT+0x3>
    278c:	c8 16       	cp	r12, r24
    278e:	d9 06       	cpc	r13, r25
    2790:	08 f0       	brcs	.+2      	; 0x2794 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x7fc>
    2792:	46 c0       	rjmp	.+140    	; 0x2820 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x888>
    2794:	d7 01       	movw	r26, r14
    2796:	13 96       	adiw	r26, 0x03	; 3
    2798:	8d 91       	ld	r24, X+
    279a:	9c 91       	ld	r25, X
    279c:	01 97       	sbiw	r24, 0x01	; 1
    279e:	8c 15       	cp	r24, r12
    27a0:	9d 05       	cpc	r25, r13
    27a2:	f0 f1       	brcs	.+124    	; 0x2820 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x888>
    27a4:	b6 01       	movw	r22, r12
    27a6:	8a e5       	ldi	r24, 0x5A	; 90
    27a8:	9b e2       	ldi	r25, 0x2B	; 43
    27aa:	0e 94 7e 01 	call	0x2fc	; 0x2fc <_ZNK13BLELinkedListIP17BLELocalAttributeE3getEj>
    27ae:	4c 01       	movw	r8, r24
    27b0:	dc 01       	movw	r26, r24
    27b2:	ed 91       	ld	r30, X+
    27b4:	fc 91       	ld	r31, X
    27b6:	04 80       	ldd	r0, Z+4	; 0x04
    27b8:	f5 81       	ldd	r31, Z+5	; 0x05
    27ba:	e0 2d       	mov	r30, r0
    27bc:	09 95       	icall
    27be:	f7 01       	movw	r30, r14
    27c0:	25 81       	ldd	r18, Z+5	; 0x05
    27c2:	36 81       	ldd	r19, Z+6	; 0x06
    27c4:	82 17       	cp	r24, r18
    27c6:	93 07       	cpc	r25, r19
    27c8:	f1 f4       	brne	.+60     	; 0x2806 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x86e>
    27ca:	d4 01       	movw	r26, r8
    27cc:	54 96       	adiw	r26, 0x14	; 20
    27ce:	8c 91       	ld	r24, X
    27d0:	86 15       	cp	r24, r6
    27d2:	17 04       	cpc	r1, r7
    27d4:	c1 f4       	brne	.+48     	; 0x2806 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x86e>
    27d6:	a3 01       	movw	r20, r6
    27d8:	b2 01       	movw	r22, r4
    27da:	c4 01       	movw	r24, r8
    27dc:	04 96       	adiw	r24, 0x04	; 4
    27de:	0e 94 88 2a 	call	0x5510	; 0x5510 <memcmp>
    27e2:	89 2b       	or	r24, r25
    27e4:	81 f4       	brne	.+32     	; 0x2806 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x86e>
    27e6:	f4 01       	movw	r30, r8
    27e8:	87 89       	ldd	r24, Z+23	; 0x17
    27ea:	90 8d       	ldd	r25, Z+24	; 0x18
    27ec:	f5 01       	movw	r30, r10
    27ee:	e0 0f       	add	r30, r16
    27f0:	f1 1f       	adc	r31, r17
    27f2:	80 83       	st	Z, r24
    27f4:	91 83       	std	Z+1, r25	; 0x01
    27f6:	d4 01       	movw	r26, r8
    27f8:	59 96       	adiw	r26, 0x19	; 25
    27fa:	8d 91       	ld	r24, X+
    27fc:	9c 91       	ld	r25, X
    27fe:	82 83       	std	Z+2, r24	; 0x02
    2800:	93 83       	std	Z+3, r25	; 0x03
    2802:	0c 5f       	subi	r16, 0xFC	; 252
    2804:	1f 4f       	sbci	r17, 0xFF	; 255
    2806:	c8 01       	movw	r24, r16
    2808:	04 96       	adiw	r24, 0x04	; 4
    280a:	2f 96       	adiw	r28, 0x0f	; 15
    280c:	ee ad       	ldd	r30, Y+62	; 0x3e
    280e:	ff ad       	ldd	r31, Y+63	; 0x3f
    2810:	2f 97       	sbiw	r28, 0x0f	; 15
    2812:	e8 17       	cp	r30, r24
    2814:	f9 07       	cpc	r31, r25
    2816:	20 f0       	brcs	.+8      	; 0x2820 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x888>
    2818:	ff ef       	ldi	r31, 0xFF	; 255
    281a:	cf 1a       	sub	r12, r31
    281c:	df 0a       	sbc	r13, r31
    281e:	b2 cf       	rjmp	.-156    	; 0x2784 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x7ec>
    2820:	01 30       	cpi	r16, 0x01	; 1
    2822:	11 05       	cpc	r17, r1
    2824:	09 f4       	brne	.+2      	; 0x2828 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x890>
    2826:	97 cf       	rjmp	.-210    	; 0x2756 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x7be>
    2828:	95 01       	movw	r18, r10
    282a:	40 2f       	mov	r20, r16
    282c:	64 e0       	ldi	r22, 0x04	; 4
    282e:	c1 01       	movw	r24, r2
    2830:	0e 94 0a 1e 	call	0x3c14	; 0x3c14 <_ZN8HCIClass10sendAclPktEjhhPv.constprop.37>
    2834:	2d 96       	adiw	r28, 0x0d	; 13
    2836:	2e ad       	ldd	r18, Y+62	; 0x3e
    2838:	3f ad       	ldd	r19, Y+63	; 0x3f
    283a:	2d 97       	sbiw	r28, 0x0d	; 13
    283c:	2d bf       	out	0x3d, r18	; 61
    283e:	3e bf       	out	0x3e, r19	; 62
    2840:	75 ce       	rjmp	.-790    	; 0x252c <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x594>
    2842:	d5 01       	movw	r26, r10
    2844:	ed 91       	ld	r30, X+
    2846:	fc 91       	ld	r31, X
    2848:	04 80       	ldd	r0, Z+4	; 0x04
    284a:	f5 81       	ldd	r31, Z+5	; 0x05
    284c:	e0 2d       	mov	r30, r0
    284e:	c5 01       	movw	r24, r10
    2850:	09 95       	icall
    2852:	82 30       	cpi	r24, 0x02	; 2
    2854:	99 42       	sbci	r25, 0x29	; 41
    2856:	09 f0       	breq	.+2      	; 0x285a <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x8c2>
    2858:	7c cd       	rjmp	.-1288   	; 0x2352 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x3ba>
    285a:	f4 01       	movw	r30, r8
    285c:	ec 0d       	add	r30, r12
    285e:	fd 1d       	adc	r31, r13
    2860:	40 82       	st	Z, r4
    2862:	51 82       	std	Z+1, r5	; 0x01
    2864:	e2 e0       	ldi	r30, 0x02	; 2
    2866:	ce 0e       	add	r12, r30
    2868:	d1 1c       	adc	r13, r1
    286a:	2f 96       	adiw	r28, 0x0f	; 15
    286c:	0e ad       	ldd	r16, Y+62	; 0x3e
    286e:	1f ad       	ldd	r17, Y+63	; 0x3f
    2870:	2f 97       	sbiw	r28, 0x0f	; 15
    2872:	0c 19       	sub	r16, r12
    2874:	1d 09       	sbc	r17, r13
    2876:	d5 01       	movw	r26, r10
    2878:	59 96       	adiw	r26, 0x19	; 25
    287a:	6d 90       	ld	r6, X+
    287c:	7c 90       	ld	r7, X
    287e:	06 15       	cp	r16, r6
    2880:	17 05       	cpc	r17, r7
    2882:	08 f4       	brcc	.+2      	; 0x2886 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x8ee>
    2884:	38 01       	movw	r6, r16
    2886:	f5 01       	movw	r30, r10
    2888:	67 89       	ldd	r22, Z+23	; 0x17
    288a:	70 8d       	ldd	r23, Z+24	; 0x18
    288c:	a3 01       	movw	r20, r6
    288e:	c4 01       	movw	r24, r8
    2890:	8c 0d       	add	r24, r12
    2892:	9d 1d       	adc	r25, r13
    2894:	0e 94 95 2a 	call	0x552a	; 0x552a <memcpy>
    2898:	c6 0c       	add	r12, r6
    289a:	d7 1c       	adc	r13, r7
    289c:	63 94       	inc	r6
    289e:	63 94       	inc	r6
    28a0:	d4 01       	movw	r26, r8
    28a2:	11 96       	adiw	r26, 0x01	; 1
    28a4:	6c 92       	st	X, r6
    28a6:	94 01       	movw	r18, r8
    28a8:	e2 e0       	ldi	r30, 0x02	; 2
    28aa:	ce 16       	cp	r12, r30
    28ac:	d1 04       	cpc	r13, r1
    28ae:	09 f0       	breq	.+2      	; 0x28b2 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x91a>
    28b0:	e5 c0       	rjmp	.+458    	; 0x2a7c <_ZN8ATTClass10handleDataEjhPh.constprop.46+0xae4>
    28b2:	d7 01       	movw	r26, r14
    28b4:	11 96       	adiw	r26, 0x01	; 1
    28b6:	4d 91       	ld	r20, X+
    28b8:	5c 91       	ld	r21, X
    28ba:	2a e0       	ldi	r18, 0x0A	; 10
    28bc:	68 e0       	ldi	r22, 0x08	; 8
    28be:	c1 01       	movw	r24, r2
    28c0:	0e 94 7a 1e 	call	0x3cf4	; 0x3cf4 <_ZN8ATTClass9sendErrorEjhjh.constprop.47>
    28c4:	e0 c0       	rjmp	.+448    	; 0x2a86 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0xaee>
    28c6:	c5 01       	movw	r24, r10
    28c8:	09 95       	icall
    28ca:	83 30       	cpi	r24, 0x03	; 3
    28cc:	98 42       	sbci	r25, 0x28	; 40
    28ce:	09 f0       	breq	.+2      	; 0x28d2 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x93a>
    28d0:	40 cd       	rjmp	.-1408   	; 0x2352 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x3ba>
    28d2:	f5 01       	movw	r30, r10
    28d4:	84 89       	ldd	r24, Z+20	; 0x14
    28d6:	82 30       	cpi	r24, 0x02	; 2
    28d8:	09 f0       	breq	.+2      	; 0x28dc <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x944>
    28da:	3b cd       	rjmp	.-1418   	; 0x2352 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x3ba>
    28dc:	42 e0       	ldi	r20, 0x02	; 2
    28de:	50 e0       	ldi	r21, 0x00	; 0
    28e0:	b5 01       	movw	r22, r10
    28e2:	6c 5f       	subi	r22, 0xFC	; 252
    28e4:	7f 4f       	sbci	r23, 0xFF	; 255
    28e6:	61 96       	adiw	r28, 0x11	; 17
    28e8:	8e ad       	ldd	r24, Y+62	; 0x3e
    28ea:	9f ad       	ldd	r25, Y+63	; 0x3f
    28ec:	61 97       	sbiw	r28, 0x11	; 17
    28ee:	0e 94 88 2a 	call	0x5510	; 0x5510 <memcmp>
    28f2:	89 2b       	or	r24, r25
    28f4:	09 f0       	breq	.+2      	; 0x28f8 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x960>
    28f6:	2d cd       	rjmp	.-1446   	; 0x2352 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x3ba>
    28f8:	f4 01       	movw	r30, r8
    28fa:	ec 0d       	add	r30, r12
    28fc:	fd 1d       	adc	r31, r13
    28fe:	40 82       	st	Z, r4
    2900:	51 82       	std	Z+1, r5	; 0x01
    2902:	f2 e0       	ldi	r31, 0x02	; 2
    2904:	cf 0e       	add	r12, r31
    2906:	d1 1c       	adc	r13, r1
    2908:	d5 01       	movw	r26, r10
    290a:	5c 96       	adiw	r26, 0x1c	; 28
    290c:	8d 91       	ld	r24, X+
    290e:	9c 91       	ld	r25, X
    2910:	2f 96       	adiw	r28, 0x0f	; 15
    2912:	0e ad       	ldd	r16, Y+62	; 0x3e
    2914:	1f ad       	ldd	r17, Y+63	; 0x3f
    2916:	2f 97       	sbiw	r28, 0x0f	; 15
    2918:	0c 19       	sub	r16, r12
    291a:	1d 09       	sbc	r17, r13
    291c:	80 17       	cp	r24, r16
    291e:	91 07       	cpc	r25, r17
    2920:	08 f4       	brcc	.+2      	; 0x2924 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x98c>
    2922:	8c 01       	movw	r16, r24
    2924:	f5 01       	movw	r30, r10
    2926:	62 8d       	ldd	r22, Z+26	; 0x1a
    2928:	73 8d       	ldd	r23, Z+27	; 0x1b
    292a:	a8 01       	movw	r20, r16
    292c:	c4 01       	movw	r24, r8
    292e:	8c 0d       	add	r24, r12
    2930:	9d 1d       	adc	r25, r13
    2932:	0e 94 95 2a 	call	0x552a	; 0x552a <memcpy>
    2936:	c0 0e       	add	r12, r16
    2938:	d1 1e       	adc	r13, r17
    293a:	0e 5f       	subi	r16, 0xFE	; 254
    293c:	d4 01       	movw	r26, r8
    293e:	11 96       	adiw	r26, 0x01	; 1
    2940:	0c 93       	st	X, r16
    2942:	b1 cf       	rjmp	.-158    	; 0x28a6 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x90e>
    2944:	00 23       	and	r16, r16
    2946:	09 f4       	brne	.+2      	; 0x294a <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x9b2>
    2948:	f1 cd       	rjmp	.-1054   	; 0x252c <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x594>
    294a:	80 91 1f 2b 	lds	r24, 0x2B1F	; 0x802b1f <ATT+0x39>
    294e:	90 91 20 2b 	lds	r25, 0x2B20	; 0x802b20 <ATT+0x3a>
    2952:	28 16       	cp	r2, r24
    2954:	39 06       	cpc	r3, r25
    2956:	09 f0       	breq	.+2      	; 0x295a <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x9c2>
    2958:	e9 cd       	rjmp	.-1070   	; 0x252c <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x594>
    295a:	80 91 21 2b 	lds	r24, 0x2B21	; 0x802b21 <ATT+0x3b>
    295e:	89 30       	cpi	r24, 0x09	; 9
    2960:	09 f0       	breq	.+2      	; 0x2964 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x9cc>
    2962:	e4 cd       	rjmp	.-1080   	; 0x252c <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x594>
    2964:	ba ce       	rjmp	.-652    	; 0x26da <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x742>
    2966:	2d b7       	in	r18, 0x3d	; 61
    2968:	3e b7       	in	r19, 0x3e	; 62
    296a:	2f 96       	adiw	r28, 0x0f	; 15
    296c:	8e ad       	ldd	r24, Y+62	; 0x3e
    296e:	9f ad       	ldd	r25, Y+63	; 0x3f
    2970:	2f 97       	sbiw	r28, 0x0f	; 15
    2972:	28 1b       	sub	r18, r24
    2974:	39 0b       	sbc	r19, r25
    2976:	2d bf       	out	0x3d, r18	; 61
    2978:	3e bf       	out	0x3e, r19	; 62
    297a:	ad b7       	in	r26, 0x3d	; 61
    297c:	be b7       	in	r27, 0x3e	; 62
    297e:	11 96       	adiw	r26, 0x01	; 1
    2980:	3d 01       	movw	r6, r26
    2982:	81 e1       	ldi	r24, 0x11	; 17
    2984:	ed b7       	in	r30, 0x3d	; 61
    2986:	fe b7       	in	r31, 0x3e	; 62
    2988:	81 83       	std	Z+1, r24	; 0x01
    298a:	11 96       	adiw	r26, 0x01	; 1
    298c:	1c 92       	st	X, r1
    298e:	5a 01       	movw	r10, r20
    2990:	f1 e0       	ldi	r31, 0x01	; 1
    2992:	af 1a       	sub	r10, r31
    2994:	b1 08       	sbc	r11, r1
    2996:	42 e0       	ldi	r20, 0x02	; 2
    2998:	c4 2e       	mov	r12, r20
    299a:	d1 2c       	mov	r13, r1
    299c:	80 91 5a 2b 	lds	r24, 0x2B5A	; 0x802b5a <GATT+0x2>
    29a0:	90 91 5b 2b 	lds	r25, 0x2B5B	; 0x802b5b <GATT+0x3>
    29a4:	a8 16       	cp	r10, r24
    29a6:	b9 06       	cpc	r11, r25
    29a8:	08 f0       	brcs	.+2      	; 0x29ac <_ZN8ATTClass10handleDataEjhPh.constprop.46+0xa14>
    29aa:	5d c0       	rjmp	.+186    	; 0x2a66 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0xace>
    29ac:	d7 01       	movw	r26, r14
    29ae:	13 96       	adiw	r26, 0x03	; 3
    29b0:	8d 91       	ld	r24, X+
    29b2:	9c 91       	ld	r25, X
    29b4:	01 97       	sbiw	r24, 0x01	; 1
    29b6:	8a 15       	cp	r24, r10
    29b8:	9b 05       	cpc	r25, r11
    29ba:	08 f4       	brcc	.+2      	; 0x29be <_ZN8ATTClass10handleDataEjhPh.constprop.46+0xa26>
    29bc:	54 c0       	rjmp	.+168    	; 0x2a66 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0xace>
    29be:	b5 01       	movw	r22, r10
    29c0:	8a e5       	ldi	r24, 0x5A	; 90
    29c2:	9b e2       	ldi	r25, 0x2B	; 43
    29c4:	0e 94 7e 01 	call	0x2fc	; 0x2fc <_ZNK13BLELinkedListIP17BLELocalAttributeE3getEj>
    29c8:	4c 01       	movw	r8, r24
    29ca:	f7 01       	movw	r30, r14
    29cc:	45 80       	ldd	r4, Z+5	; 0x05
    29ce:	56 80       	ldd	r5, Z+6	; 0x06
    29d0:	dc 01       	movw	r26, r24
    29d2:	ed 91       	ld	r30, X+
    29d4:	fc 91       	ld	r31, X
    29d6:	04 80       	ldd	r0, Z+4	; 0x04
    29d8:	f5 81       	ldd	r31, Z+5	; 0x05
    29da:	e0 2d       	mov	r30, r0
    29dc:	09 95       	icall
    29de:	48 16       	cp	r4, r24
    29e0:	59 06       	cpc	r5, r25
    29e2:	e9 f5       	brne	.+122    	; 0x2a5e <_ZN8ATTClass10handleDataEjhPh.constprop.46+0xac6>
    29e4:	f4 01       	movw	r30, r8
    29e6:	84 89       	ldd	r24, Z+20	; 0x14
    29e8:	06 e0       	ldi	r16, 0x06	; 6
    29ea:	10 e0       	ldi	r17, 0x00	; 0
    29ec:	82 30       	cpi	r24, 0x02	; 2
    29ee:	11 f0       	breq	.+4      	; 0x29f4 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0xa5c>
    29f0:	04 e1       	ldi	r16, 0x14	; 20
    29f2:	10 e0       	ldi	r17, 0x00	; 0
    29f4:	d3 01       	movw	r26, r6
    29f6:	11 96       	adiw	r26, 0x01	; 1
    29f8:	9c 91       	ld	r25, X
    29fa:	11 97       	sbiw	r26, 0x01	; 1
    29fc:	91 11       	cpse	r25, r1
    29fe:	02 c0       	rjmp	.+4      	; 0x2a04 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0xa6c>
    2a00:	11 96       	adiw	r26, 0x01	; 1
    2a02:	0c 93       	st	X, r16
    2a04:	f3 01       	movw	r30, r6
    2a06:	91 81       	ldd	r25, Z+1	; 0x01
    2a08:	90 17       	cp	r25, r16
    2a0a:	11 06       	cpc	r1, r17
    2a0c:	61 f5       	brne	.+88     	; 0x2a66 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0xace>
    2a0e:	d4 01       	movw	r26, r8
    2a10:	57 96       	adiw	r26, 0x17	; 23
    2a12:	2d 91       	ld	r18, X+
    2a14:	3c 91       	ld	r19, X
    2a16:	58 97       	sbiw	r26, 0x18	; 24
    2a18:	ec 0d       	add	r30, r12
    2a1a:	fd 1d       	adc	r31, r13
    2a1c:	20 83       	st	Z, r18
    2a1e:	31 83       	std	Z+1, r19	; 0x01
    2a20:	59 96       	adiw	r26, 0x19	; 25
    2a22:	2d 91       	ld	r18, X+
    2a24:	3c 91       	ld	r19, X
    2a26:	22 83       	std	Z+2, r18	; 0x02
    2a28:	33 83       	std	Z+3, r19	; 0x03
    2a2a:	b4 e0       	ldi	r27, 0x04	; 4
    2a2c:	cb 0e       	add	r12, r27
    2a2e:	d1 1c       	adc	r13, r1
    2a30:	48 2e       	mov	r4, r24
    2a32:	51 2c       	mov	r5, r1
    2a34:	b4 01       	movw	r22, r8
    2a36:	6c 5f       	subi	r22, 0xFC	; 252
    2a38:	7f 4f       	sbci	r23, 0xFF	; 255
    2a3a:	a2 01       	movw	r20, r4
    2a3c:	c3 01       	movw	r24, r6
    2a3e:	8c 0d       	add	r24, r12
    2a40:	9d 1d       	adc	r25, r13
    2a42:	0e 94 95 2a 	call	0x552a	; 0x552a <memcpy>
    2a46:	c4 0c       	add	r12, r4
    2a48:	d5 1c       	adc	r13, r5
    2a4a:	28 01       	movw	r4, r16
    2a4c:	4c 0c       	add	r4, r12
    2a4e:	5d 1c       	adc	r5, r13
    2a50:	2f 96       	adiw	r28, 0x0f	; 15
    2a52:	ee ad       	ldd	r30, Y+62	; 0x3e
    2a54:	ff ad       	ldd	r31, Y+63	; 0x3f
    2a56:	2f 97       	sbiw	r28, 0x0f	; 15
    2a58:	e4 15       	cp	r30, r4
    2a5a:	f5 05       	cpc	r31, r5
    2a5c:	20 f0       	brcs	.+8      	; 0x2a66 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0xace>
    2a5e:	ff ef       	ldi	r31, 0xFF	; 255
    2a60:	af 1a       	sub	r10, r31
    2a62:	bf 0a       	sbc	r11, r31
    2a64:	9b cf       	rjmp	.-202    	; 0x299c <_ZN8ATTClass10handleDataEjhPh.constprop.46+0xa04>
    2a66:	22 e0       	ldi	r18, 0x02	; 2
    2a68:	c2 16       	cp	r12, r18
    2a6a:	d1 04       	cpc	r13, r1
    2a6c:	31 f4       	brne	.+12     	; 0x2a7a <_ZN8ATTClass10handleDataEjhPh.constprop.46+0xae2>
    2a6e:	d7 01       	movw	r26, r14
    2a70:	11 96       	adiw	r26, 0x01	; 1
    2a72:	4d 91       	ld	r20, X+
    2a74:	5c 91       	ld	r21, X
    2a76:	2a e0       	ldi	r18, 0x0A	; 10
    2a78:	b8 cc       	rjmp	.-1680   	; 0x23ea <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x452>
    2a7a:	93 01       	movw	r18, r6
    2a7c:	4c 2d       	mov	r20, r12
    2a7e:	64 e0       	ldi	r22, 0x04	; 4
    2a80:	c1 01       	movw	r24, r2
    2a82:	0e 94 0a 1e 	call	0x3c14	; 0x3c14 <_ZN8HCIClass10sendAclPktEjhhPv.constprop.37>
    2a86:	2d 96       	adiw	r28, 0x0d	; 13
    2a88:	ee ad       	ldd	r30, Y+62	; 0x3e
    2a8a:	ff ad       	ldd	r31, Y+63	; 0x3f
    2a8c:	2d 97       	sbiw	r28, 0x0d	; 13
    2a8e:	ed bf       	out	0x3d, r30	; 61
    2a90:	fe bf       	out	0x3e, r31	; 62
    2a92:	4c cd       	rjmp	.-1384   	; 0x252c <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x594>
    2a94:	02 30       	cpi	r16, 0x02	; 2
    2a96:	08 f4       	brcc	.+2      	; 0x2a9a <_ZN8ATTClass10handleDataEjhPh.constprop.46+0xb02>
    2a98:	49 cd       	rjmp	.-1390   	; 0x252c <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x594>
    2a9a:	80 91 1f 2b 	lds	r24, 0x2B1F	; 0x802b1f <ATT+0x39>
    2a9e:	90 91 20 2b 	lds	r25, 0x2B20	; 0x802b20 <ATT+0x3a>
    2aa2:	28 16       	cp	r2, r24
    2aa4:	39 06       	cpc	r3, r25
    2aa6:	09 f0       	breq	.+2      	; 0x2aaa <_ZN8ATTClass10handleDataEjhPh.constprop.46+0xb12>
    2aa8:	41 cd       	rjmp	.-1406   	; 0x252c <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x594>
    2aaa:	80 91 21 2b 	lds	r24, 0x2B21	; 0x802b21 <ATT+0x3b>
    2aae:	81 31       	cpi	r24, 0x11	; 17
    2ab0:	09 f0       	breq	.+2      	; 0x2ab4 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0xb1c>
    2ab2:	3c cd       	rjmp	.-1416   	; 0x252c <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x594>
    2ab4:	12 ce       	rjmp	.-988    	; 0x26da <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x742>
    2ab6:	2d b7       	in	r18, 0x3d	; 61
    2ab8:	3e b7       	in	r19, 0x3e	; 62
    2aba:	2d 96       	adiw	r28, 0x0d	; 13
    2abc:	2e af       	std	Y+62, r18	; 0x3e
    2abe:	3f af       	std	Y+63, r19	; 0x3f
    2ac0:	2d 97       	sbiw	r28, 0x0d	; 13
    2ac2:	1a 30       	cpi	r17, 0x0A	; 10
    2ac4:	39 f4       	brne	.+14     	; 0x2ad4 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0xb3c>
    2ac6:	02 30       	cpi	r16, 0x02	; 2
    2ac8:	61 f0       	breq	.+24     	; 0x2ae2 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0xb4a>
    2aca:	24 e0       	ldi	r18, 0x04	; 4
    2acc:	50 e0       	ldi	r21, 0x00	; 0
    2ace:	40 e0       	ldi	r20, 0x00	; 0
    2ad0:	6a e0       	ldi	r22, 0x0A	; 10
    2ad2:	46 ce       	rjmp	.-884    	; 0x2760 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x7c8>
    2ad4:	04 30       	cpi	r16, 0x04	; 4
    2ad6:	29 f0       	breq	.+10     	; 0x2ae2 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0xb4a>
    2ad8:	24 e0       	ldi	r18, 0x04	; 4
    2ada:	50 e0       	ldi	r21, 0x00	; 0
    2adc:	40 e0       	ldi	r20, 0x00	; 0
    2ade:	6c e0       	ldi	r22, 0x0C	; 12
    2ae0:	3f ce       	rjmp	.-898    	; 0x2760 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x7c8>
    2ae2:	d7 01       	movw	r26, r14
    2ae4:	11 96       	adiw	r26, 0x01	; 1
    2ae6:	ad 90       	ld	r10, X+
    2ae8:	bc 90       	ld	r11, X
    2aea:	12 97       	sbiw	r26, 0x02	; 2
    2aec:	d1 2c       	mov	r13, r1
    2aee:	c1 2c       	mov	r12, r1
    2af0:	1a 30       	cpi	r17, 0x0A	; 10
    2af2:	19 f0       	breq	.+6      	; 0x2afa <_ZN8ATTClass10handleDataEjhPh.constprop.46+0xb62>
    2af4:	13 96       	adiw	r26, 0x03	; 3
    2af6:	cd 90       	ld	r12, X+
    2af8:	dc 90       	ld	r13, X
    2afa:	b5 01       	movw	r22, r10
    2afc:	61 50       	subi	r22, 0x01	; 1
    2afe:	71 09       	sbc	r23, r1
    2b00:	80 91 5a 2b 	lds	r24, 0x2B5A	; 0x802b5a <GATT+0x2>
    2b04:	90 91 5b 2b 	lds	r25, 0x2B5B	; 0x802b5b <GATT+0x3>
    2b08:	2a e0       	ldi	r18, 0x0A	; 10
    2b0a:	86 17       	cp	r24, r22
    2b0c:	97 07       	cpc	r25, r23
    2b0e:	08 f4       	brcc	.+2      	; 0x2b12 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0xb7a>
    2b10:	72 c0       	rjmp	.+228    	; 0x2bf6 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0xc5e>
    2b12:	ed b7       	in	r30, 0x3d	; 61
    2b14:	fe b7       	in	r31, 0x3e	; 62
    2b16:	2f 96       	adiw	r28, 0x0f	; 15
    2b18:	2e ad       	ldd	r18, Y+62	; 0x3e
    2b1a:	3f ad       	ldd	r19, Y+63	; 0x3f
    2b1c:	2f 97       	sbiw	r28, 0x0f	; 15
    2b1e:	e2 1b       	sub	r30, r18
    2b20:	f3 0b       	sbc	r31, r19
    2b22:	ed bf       	out	0x3d, r30	; 61
    2b24:	fe bf       	out	0x3e, r31	; 62
    2b26:	8d b7       	in	r24, 0x3d	; 61
    2b28:	9e b7       	in	r25, 0x3e	; 62
    2b2a:	01 96       	adiw	r24, 0x01	; 1
    2b2c:	4c 01       	movw	r8, r24
    2b2e:	8b e0       	ldi	r24, 0x0B	; 11
    2b30:	1a 30       	cpi	r17, 0x0A	; 10
    2b32:	09 f0       	breq	.+2      	; 0x2b36 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0xb9e>
    2b34:	8d e0       	ldi	r24, 0x0D	; 13
    2b36:	d4 01       	movw	r26, r8
    2b38:	8c 93       	st	X, r24
    2b3a:	8a e5       	ldi	r24, 0x5A	; 90
    2b3c:	9b e2       	ldi	r25, 0x2B	; 43
    2b3e:	0e 94 7e 01 	call	0x2fc	; 0x2fc <_ZNK13BLELinkedListIP17BLELocalAttributeE3getEj>
    2b42:	7c 01       	movw	r14, r24
    2b44:	dc 01       	movw	r26, r24
    2b46:	ed 91       	ld	r30, X+
    2b48:	fc 91       	ld	r31, X
    2b4a:	04 80       	ldd	r0, Z+4	; 0x04
    2b4c:	f5 81       	ldd	r31, Z+5	; 0x05
    2b4e:	e0 2d       	mov	r30, r0
    2b50:	09 95       	icall
    2b52:	81 15       	cp	r24, r1
    2b54:	b8 e2       	ldi	r27, 0x28	; 40
    2b56:	9b 07       	cpc	r25, r27
    2b58:	b9 f4       	brne	.+46     	; 0x2b88 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0xbf0>
    2b5a:	24 e0       	ldi	r18, 0x04	; 4
    2b5c:	a5 01       	movw	r20, r10
    2b5e:	6b e0       	ldi	r22, 0x0B	; 11
    2b60:	cd 28       	or	r12, r13
    2b62:	09 f0       	breq	.+2      	; 0x2b66 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0xbce>
    2b64:	fd cd       	rjmp	.-1030   	; 0x2760 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x7c8>
    2b66:	f7 01       	movw	r30, r14
    2b68:	a4 88       	ldd	r10, Z+20	; 0x14
    2b6a:	b1 2c       	mov	r11, r1
    2b6c:	b7 01       	movw	r22, r14
    2b6e:	6c 5f       	subi	r22, 0xFC	; 252
    2b70:	7f 4f       	sbci	r23, 0xFF	; 255
    2b72:	a5 01       	movw	r20, r10
    2b74:	c4 01       	movw	r24, r8
    2b76:	01 96       	adiw	r24, 0x01	; 1
    2b78:	0e 94 95 2a 	call	0x552a	; 0x552a <memcpy>
    2b7c:	ff ef       	ldi	r31, 0xFF	; 255
    2b7e:	af 1a       	sub	r10, r31
    2b80:	bf 0a       	sbc	r11, r31
    2b82:	94 01       	movw	r18, r8
    2b84:	4a 2d       	mov	r20, r10
    2b86:	7b cf       	rjmp	.-266    	; 0x2a7e <_ZN8ATTClass10handleDataEjhPh.constprop.46+0xae6>
    2b88:	83 30       	cpi	r24, 0x03	; 3
    2b8a:	28 e2       	ldi	r18, 0x28	; 40
    2b8c:	92 07       	cpc	r25, r18
    2b8e:	09 f0       	breq	.+2      	; 0x2b92 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0xbfa>
    2b90:	75 c0       	rjmp	.+234    	; 0x2c7c <_ZN8ATTClass10handleDataEjhPh.constprop.46+0xce4>
    2b92:	d7 01       	movw	r26, r14
    2b94:	5f 96       	adiw	r26, 0x1f	; 31
    2b96:	8d 91       	ld	r24, X+
    2b98:	9c 91       	ld	r25, X
    2b9a:	90 97       	sbiw	r26, 0x20	; 32
    2b9c:	a8 16       	cp	r10, r24
    2b9e:	b9 06       	cpc	r11, r25
    2ba0:	f1 f4       	brne	.+60     	; 0x2bde <_ZN8ATTClass10handleDataEjhPh.constprop.46+0xc46>
    2ba2:	2b e0       	ldi	r18, 0x0B	; 11
    2ba4:	cd 28       	or	r12, r13
    2ba6:	39 f5       	brne	.+78     	; 0x2bf6 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0xc5e>
    2ba8:	f7 01       	movw	r30, r14
    2baa:	87 89       	ldd	r24, Z+23	; 0x17
    2bac:	d4 01       	movw	r26, r8
    2bae:	11 96       	adiw	r26, 0x01	; 1
    2bb0:	8c 93       	st	X, r24
    2bb2:	11 97       	sbiw	r26, 0x01	; 1
    2bb4:	87 8d       	ldd	r24, Z+31	; 0x1f
    2bb6:	90 a1       	ldd	r25, Z+32	; 0x20
    2bb8:	01 96       	adiw	r24, 0x01	; 1
    2bba:	12 96       	adiw	r26, 0x02	; 2
    2bbc:	8d 93       	st	X+, r24
    2bbe:	9c 93       	st	X, r25
    2bc0:	13 97       	sbiw	r26, 0x03	; 3
    2bc2:	a4 88       	ldd	r10, Z+20	; 0x14
    2bc4:	b1 2c       	mov	r11, r1
    2bc6:	b7 01       	movw	r22, r14
    2bc8:	6c 5f       	subi	r22, 0xFC	; 252
    2bca:	7f 4f       	sbci	r23, 0xFF	; 255
    2bcc:	a5 01       	movw	r20, r10
    2bce:	c4 01       	movw	r24, r8
    2bd0:	04 96       	adiw	r24, 0x04	; 4
    2bd2:	0e 94 95 2a 	call	0x552a	; 0x552a <memcpy>
    2bd6:	b4 e0       	ldi	r27, 0x04	; 4
    2bd8:	ab 0e       	add	r10, r27
    2bda:	b1 1c       	adc	r11, r1
    2bdc:	d2 cf       	rjmp	.-92     	; 0x2b82 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0xbea>
    2bde:	f7 01       	movw	r30, r14
    2be0:	87 89       	ldd	r24, Z+23	; 0x17
    2be2:	22 e0       	ldi	r18, 0x02	; 2
    2be4:	81 ff       	sbrs	r24, 1
    2be6:	07 c0       	rjmp	.+14     	; 0x2bf6 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0xc5e>
    2be8:	5c 96       	adiw	r26, 0x1c	; 28
    2bea:	8d 91       	ld	r24, X+
    2bec:	9c 91       	ld	r25, X
    2bee:	c8 16       	cp	r12, r24
    2bf0:	d9 06       	cpc	r13, r25
    2bf2:	20 f0       	brcs	.+8      	; 0x2bfc <_ZN8ATTClass10handleDataEjhPh.constprop.46+0xc64>
    2bf4:	27 e0       	ldi	r18, 0x07	; 7
    2bf6:	a5 01       	movw	r20, r10
    2bf8:	61 2f       	mov	r22, r17
    2bfa:	b2 cd       	rjmp	.-1180   	; 0x2760 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x7c8>
    2bfc:	2f 96       	adiw	r28, 0x0f	; 15
    2bfe:	0e ad       	ldd	r16, Y+62	; 0x3e
    2c00:	1f ad       	ldd	r17, Y+63	; 0x3f
    2c02:	2f 97       	sbiw	r28, 0x0f	; 15
    2c04:	01 50       	subi	r16, 0x01	; 1
    2c06:	11 09       	sbc	r17, r1
    2c08:	3c 01       	movw	r6, r24
    2c0a:	6c 18       	sub	r6, r12
    2c0c:	7d 08       	sbc	r7, r13
    2c0e:	06 15       	cp	r16, r6
    2c10:	17 05       	cpc	r17, r7
    2c12:	08 f4       	brcc	.+2      	; 0x2c16 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0xc7e>
    2c14:	38 01       	movw	r6, r16
    2c16:	26 ee       	ldi	r18, 0xE6	; 230
    2c18:	42 2e       	mov	r4, r18
    2c1a:	2a e2       	ldi	r18, 0x2A	; 42
    2c1c:	52 2e       	mov	r5, r18
    2c1e:	aa 24       	eor	r10, r10
    2c20:	a3 94       	inc	r10
    2c22:	b1 2c       	mov	r11, r1
    2c24:	f2 01       	movw	r30, r4
    2c26:	80 85       	ldd	r24, Z+8	; 0x08
    2c28:	91 85       	ldd	r25, Z+9	; 0x09
    2c2a:	28 16       	cp	r2, r24
    2c2c:	39 06       	cpc	r3, r25
    2c2e:	e9 f4       	brne	.+58     	; 0x2c6a <_ZN8ATTClass10handleDataEjhPh.constprop.46+0xcd2>
    2c30:	94 01       	movw	r18, r8
    2c32:	2a 0d       	add	r18, r10
    2c34:	3b 1d       	adc	r19, r11
    2c36:	2f 96       	adiw	r28, 0x0f	; 15
    2c38:	2e af       	std	Y+62, r18	; 0x3e
    2c3a:	3f af       	std	Y+63, r19	; 0x3f
    2c3c:	2f 97       	sbiw	r28, 0x0f	; 15
    2c3e:	a2 01       	movw	r20, r4
    2c40:	44 5f       	subi	r20, 0xF4	; 244
    2c42:	5f 4f       	sbci	r21, 0xFF	; 255
    2c44:	63 85       	ldd	r22, Z+11	; 0x0b
    2c46:	ce 01       	movw	r24, r28
    2c48:	01 96       	adiw	r24, 0x01	; 1
    2c4a:	0e 94 9b 05 	call	0xb36	; 0xb36 <_ZN9BLEDeviceC1EhPh>
    2c4e:	83 01       	movw	r16, r6
    2c50:	2f 96       	adiw	r28, 0x0f	; 15
    2c52:	2e ad       	ldd	r18, Y+62	; 0x3e
    2c54:	3f ad       	ldd	r19, Y+63	; 0x3f
    2c56:	2f 97       	sbiw	r28, 0x0f	; 15
    2c58:	a6 01       	movw	r20, r12
    2c5a:	be 01       	movw	r22, r28
    2c5c:	6f 5f       	subi	r22, 0xFF	; 255
    2c5e:	7f 4f       	sbci	r23, 0xFF	; 255
    2c60:	c7 01       	movw	r24, r14
    2c62:	0e 94 d2 22 	call	0x45a4	; 0x45a4 <_ZN22BLELocalCharacteristic9readValueE9BLEDevicejPhi>
    2c66:	a6 0c       	add	r10, r6
    2c68:	b7 1c       	adc	r11, r7
    2c6a:	3e e0       	ldi	r19, 0x0E	; 14
    2c6c:	43 0e       	add	r4, r19
    2c6e:	51 1c       	adc	r5, r1
    2c70:	80 e1       	ldi	r24, 0x10	; 16
    2c72:	9b e2       	ldi	r25, 0x2B	; 43
    2c74:	84 15       	cp	r24, r4
    2c76:	95 05       	cpc	r25, r5
    2c78:	a9 f6       	brne	.-86     	; 0x2c24 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0xc8c>
    2c7a:	83 cf       	rjmp	.-250    	; 0x2b82 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0xbea>
    2c7c:	81 15       	cp	r24, r1
    2c7e:	99 42       	sbci	r25, 0x29	; 41
    2c80:	19 f5       	brne	.+70     	; 0x2cc8 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0xd30>
    2c82:	f7 01       	movw	r30, r14
    2c84:	81 8d       	ldd	r24, Z+25	; 0x19
    2c86:	92 8d       	ldd	r25, Z+26	; 0x1a
    2c88:	c8 16       	cp	r12, r24
    2c8a:	d9 06       	cpc	r13, r25
    2c8c:	08 f0       	brcs	.+2      	; 0x2c90 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0xcf8>
    2c8e:	b2 cf       	rjmp	.-156    	; 0x2bf4 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0xc5c>
    2c90:	8c 19       	sub	r24, r12
    2c92:	9d 09       	sbc	r25, r13
    2c94:	2f 96       	adiw	r28, 0x0f	; 15
    2c96:	ae ac       	ldd	r10, Y+62	; 0x3e
    2c98:	bf ac       	ldd	r11, Y+63	; 0x3f
    2c9a:	2f 97       	sbiw	r28, 0x0f	; 15
    2c9c:	f1 e0       	ldi	r31, 0x01	; 1
    2c9e:	af 1a       	sub	r10, r31
    2ca0:	b1 08       	sbc	r11, r1
    2ca2:	8a 15       	cp	r24, r10
    2ca4:	9b 05       	cpc	r25, r11
    2ca6:	08 f4       	brcc	.+2      	; 0x2caa <_ZN8ATTClass10handleDataEjhPh.constprop.46+0xd12>
    2ca8:	5c 01       	movw	r10, r24
    2caa:	d7 01       	movw	r26, r14
    2cac:	57 96       	adiw	r26, 0x17	; 23
    2cae:	6d 91       	ld	r22, X+
    2cb0:	7c 91       	ld	r23, X
    2cb2:	6c 0d       	add	r22, r12
    2cb4:	7d 1d       	adc	r23, r13
    2cb6:	a5 01       	movw	r20, r10
    2cb8:	c4 01       	movw	r24, r8
    2cba:	01 96       	adiw	r24, 0x01	; 1
    2cbc:	0e 94 95 2a 	call	0x552a	; 0x552a <memcpy>
    2cc0:	bf ef       	ldi	r27, 0xFF	; 255
    2cc2:	ab 1a       	sub	r10, r27
    2cc4:	bb 0a       	sbc	r11, r27
    2cc6:	5d cf       	rjmp	.-326    	; 0x2b82 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0xbea>
    2cc8:	aa 24       	eor	r10, r10
    2cca:	a3 94       	inc	r10
    2ccc:	b1 2c       	mov	r11, r1
    2cce:	59 cf       	rjmp	.-334    	; 0x2b82 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0xbea>
    2cd0:	d7 01       	movw	r26, r14
    2cd2:	11 96       	adiw	r26, 0x01	; 1
    2cd4:	ad 90       	ld	r10, X+
    2cd6:	bc 90       	ld	r11, X
    2cd8:	b5 01       	movw	r22, r10
    2cda:	61 50       	subi	r22, 0x01	; 1
    2cdc:	71 09       	sbc	r23, r1
    2cde:	80 91 5a 2b 	lds	r24, 0x2B5A	; 0x802b5a <GATT+0x2>
    2ce2:	90 91 5b 2b 	lds	r25, 0x2B5B	; 0x802b5b <GATT+0x3>
    2ce6:	86 17       	cp	r24, r22
    2ce8:	97 07       	cpc	r25, r23
    2cea:	30 f4       	brcc	.+12     	; 0x2cf8 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0xd60>
    2cec:	2a e0       	ldi	r18, 0x0A	; 10
    2cee:	12 31       	cpi	r17, 0x12	; 18
    2cf0:	09 f0       	breq	.+2      	; 0x2cf4 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0xd5c>
    2cf2:	1c cc       	rjmp	.-1992   	; 0x252c <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x594>
    2cf4:	a5 01       	movw	r20, r10
    2cf6:	f1 cb       	rjmp	.-2078   	; 0x24da <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x542>
    2cf8:	8a e5       	ldi	r24, 0x5A	; 90
    2cfa:	9b e2       	ldi	r25, 0x2B	; 43
    2cfc:	0e 94 7e 01 	call	0x2fc	; 0x2fc <_ZNK13BLELinkedListIP17BLELocalAttributeE3getEj>
    2d00:	6c 01       	movw	r12, r24
    2d02:	dc 01       	movw	r26, r24
    2d04:	ed 91       	ld	r30, X+
    2d06:	fc 91       	ld	r31, X
    2d08:	04 80       	ldd	r0, Z+4	; 0x04
    2d0a:	f5 81       	ldd	r31, Z+5	; 0x05
    2d0c:	e0 2d       	mov	r30, r0
    2d0e:	09 95       	icall
    2d10:	83 30       	cpi	r24, 0x03	; 3
    2d12:	98 42       	sbci	r25, 0x28	; 40
    2d14:	09 f0       	breq	.+2      	; 0x2d18 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0xd80>
    2d16:	6a c0       	rjmp	.+212    	; 0x2dec <_ZN8ATTClass10handleDataEjhPh.constprop.46+0xe54>
    2d18:	f6 01       	movw	r30, r12
    2d1a:	27 89       	ldd	r18, Z+23	; 0x17
    2d1c:	87 8d       	ldd	r24, Z+31	; 0x1f
    2d1e:	90 a1       	ldd	r25, Z+32	; 0x20
    2d20:	01 96       	adiw	r24, 0x01	; 1
    2d22:	a8 16       	cp	r10, r24
    2d24:	b9 06       	cpc	r11, r25
    2d26:	11 f4       	brne	.+4      	; 0x2d2c <_ZN8ATTClass10handleDataEjhPh.constprop.46+0xd94>
    2d28:	12 31       	cpi	r17, 0x12	; 18
    2d2a:	d9 f4       	brne	.+54     	; 0x2d62 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0xdca>
    2d2c:	23 ff       	sbrs	r18, 3
    2d2e:	72 c0       	rjmp	.+228    	; 0x2e14 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0xe7c>
    2d30:	80 91 ee 2a 	lds	r24, 0x2AEE	; 0x802aee <ATT+0x8>
    2d34:	90 91 ef 2a 	lds	r25, 0x2AEF	; 0x802aef <ATT+0x9>
    2d38:	28 16       	cp	r2, r24
    2d3a:	39 06       	cpc	r3, r25
    2d3c:	a9 f0       	breq	.+42     	; 0x2d68 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0xdd0>
    2d3e:	80 91 fc 2a 	lds	r24, 0x2AFC	; 0x802afc <ATT+0x16>
    2d42:	90 91 fd 2a 	lds	r25, 0x2AFD	; 0x802afd <ATT+0x17>
    2d46:	28 16       	cp	r2, r24
    2d48:	39 06       	cpc	r3, r25
    2d4a:	09 f4       	brne	.+2      	; 0x2d4e <_ZN8ATTClass10handleDataEjhPh.constprop.46+0xdb6>
    2d4c:	4c c0       	rjmp	.+152    	; 0x2de6 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0xe4e>
    2d4e:	80 91 0a 2b 	lds	r24, 0x2B0A	; 0x802b0a <ATT+0x24>
    2d52:	90 91 0b 2b 	lds	r25, 0x2B0B	; 0x802b0b <ATT+0x25>
    2d56:	28 16       	cp	r2, r24
    2d58:	39 06       	cpc	r3, r25
    2d5a:	41 f5       	brne	.+80     	; 0x2dac <_ZN8ATTClass10handleDataEjhPh.constprop.46+0xe14>
    2d5c:	22 e0       	ldi	r18, 0x02	; 2
    2d5e:	30 e0       	ldi	r19, 0x00	; 0
    2d60:	05 c0       	rjmp	.+10     	; 0x2d6c <_ZN8ATTClass10handleDataEjhPh.constprop.46+0xdd4>
    2d62:	22 ff       	sbrs	r18, 2
    2d64:	e3 cb       	rjmp	.-2106   	; 0x252c <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x594>
    2d66:	e4 cf       	rjmp	.-56     	; 0x2d30 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0xd98>
    2d68:	30 e0       	ldi	r19, 0x00	; 0
    2d6a:	20 e0       	ldi	r18, 0x00	; 0
    2d6c:	4e e0       	ldi	r20, 0x0E	; 14
    2d6e:	42 9f       	mul	r20, r18
    2d70:	c0 01       	movw	r24, r0
    2d72:	43 9f       	mul	r20, r19
    2d74:	90 0d       	add	r25, r0
    2d76:	11 24       	eor	r1, r1
    2d78:	ac 01       	movw	r20, r24
    2d7a:	4e 50       	subi	r20, 0x0E	; 14
    2d7c:	55 4d       	sbci	r21, 0xD5	; 213
    2d7e:	8a 51       	subi	r24, 0x1A	; 26
    2d80:	95 4d       	sbci	r25, 0xD5	; 213
    2d82:	dc 01       	movw	r26, r24
    2d84:	1b 96       	adiw	r26, 0x0b	; 11
    2d86:	6c 91       	ld	r22, X
    2d88:	ce 01       	movw	r24, r28
    2d8a:	01 96       	adiw	r24, 0x01	; 1
    2d8c:	0e 94 9b 05 	call	0xb36	; 0xb36 <_ZN9BLEDeviceC1EhPh>
    2d90:	2c 96       	adiw	r28, 0x0c	; 12
    2d92:	2f ad       	ldd	r18, Y+63	; 0x3f
    2d94:	2c 97       	sbiw	r28, 0x0c	; 12
    2d96:	23 50       	subi	r18, 0x03	; 3
    2d98:	30 e0       	ldi	r19, 0x00	; 0
    2d9a:	a7 01       	movw	r20, r14
    2d9c:	4d 5f       	subi	r20, 0xFD	; 253
    2d9e:	5f 4f       	sbci	r21, 0xFF	; 255
    2da0:	be 01       	movw	r22, r28
    2da2:	6f 5f       	subi	r22, 0xFF	; 255
    2da4:	7f 4f       	sbci	r23, 0xFF	; 255
    2da6:	c6 01       	movw	r24, r12
    2da8:	0e 94 2d 23 	call	0x465a	; 0x465a <_ZN22BLELocalCharacteristic10writeValueE9BLEDevicePKhi>
    2dac:	12 31       	cpi	r17, 0x12	; 18
    2dae:	09 f0       	breq	.+2      	; 0x2db2 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0xe1a>
    2db0:	bd cb       	rjmp	.-2182   	; 0x252c <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x594>
    2db2:	ed b6       	in	r14, 0x3d	; 61
    2db4:	fe b6       	in	r15, 0x3e	; 62
    2db6:	ed b7       	in	r30, 0x3d	; 61
    2db8:	fe b7       	in	r31, 0x3e	; 62
    2dba:	2f 96       	adiw	r28, 0x0f	; 15
    2dbc:	2e ad       	ldd	r18, Y+62	; 0x3e
    2dbe:	3f ad       	ldd	r19, Y+63	; 0x3f
    2dc0:	2f 97       	sbiw	r28, 0x0f	; 15
    2dc2:	e2 1b       	sub	r30, r18
    2dc4:	f3 0b       	sbc	r31, r19
    2dc6:	ed bf       	out	0x3d, r30	; 61
    2dc8:	fe bf       	out	0x3e, r31	; 62
    2dca:	2d b7       	in	r18, 0x3d	; 61
    2dcc:	3e b7       	in	r19, 0x3e	; 62
    2dce:	2f 5f       	subi	r18, 0xFF	; 255
    2dd0:	3f 4f       	sbci	r19, 0xFF	; 255
    2dd2:	83 e1       	ldi	r24, 0x13	; 19
    2dd4:	81 83       	std	Z+1, r24	; 0x01
    2dd6:	41 e0       	ldi	r20, 0x01	; 1
    2dd8:	64 e0       	ldi	r22, 0x04	; 4
    2dda:	c1 01       	movw	r24, r2
    2ddc:	0e 94 0a 1e 	call	0x3c14	; 0x3c14 <_ZN8HCIClass10sendAclPktEjhhPv.constprop.37>
    2de0:	ed be       	out	0x3d, r14	; 61
    2de2:	fe be       	out	0x3e, r15	; 62
    2de4:	a3 cb       	rjmp	.-2234   	; 0x252c <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x594>
    2de6:	21 e0       	ldi	r18, 0x01	; 1
    2de8:	30 e0       	ldi	r19, 0x00	; 0
    2dea:	c0 cf       	rjmp	.-128    	; 0x2d6c <_ZN8ATTClass10handleDataEjhPh.constprop.46+0xdd4>
    2dec:	d6 01       	movw	r26, r12
    2dee:	ed 91       	ld	r30, X+
    2df0:	fc 91       	ld	r31, X
    2df2:	04 80       	ldd	r0, Z+4	; 0x04
    2df4:	f5 81       	ldd	r31, Z+5	; 0x05
    2df6:	e0 2d       	mov	r30, r0
    2df8:	c6 01       	movw	r24, r12
    2dfa:	09 95       	icall
    2dfc:	81 15       	cp	r24, r1
    2dfe:	99 42       	sbci	r25, 0x29	; 41
    2e00:	49 f4       	brne	.+18     	; 0x2e14 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0xe7c>
    2e02:	f6 01       	movw	r30, r12
    2e04:	84 89       	ldd	r24, Z+20	; 0x14
    2e06:	82 30       	cpi	r24, 0x02	; 2
    2e08:	29 f4       	brne	.+10     	; 0x2e14 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0xe7c>
    2e0a:	84 81       	ldd	r24, Z+4	; 0x04
    2e0c:	95 81       	ldd	r25, Z+5	; 0x05
    2e0e:	82 30       	cpi	r24, 0x02	; 2
    2e10:	99 42       	sbci	r25, 0x29	; 41
    2e12:	29 f0       	breq	.+10     	; 0x2e1e <_ZN8ATTClass10handleDataEjhPh.constprop.46+0xe86>
    2e14:	12 31       	cpi	r17, 0x12	; 18
    2e16:	09 f0       	breq	.+2      	; 0x2e1a <_ZN8ATTClass10handleDataEjhPh.constprop.46+0xe82>
    2e18:	89 cb       	rjmp	.-2286   	; 0x252c <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x594>
    2e1a:	23 e0       	ldi	r18, 0x03	; 3
    2e1c:	6b cf       	rjmp	.-298    	; 0x2cf4 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0xd5c>
    2e1e:	b5 01       	movw	r22, r10
    2e20:	62 50       	subi	r22, 0x02	; 2
    2e22:	71 09       	sbc	r23, r1
    2e24:	8a e5       	ldi	r24, 0x5A	; 90
    2e26:	9b e2       	ldi	r25, 0x2B	; 43
    2e28:	0e 94 7e 01 	call	0x2fc	; 0x2fc <_ZNK13BLELinkedListIP17BLELocalAttributeE3getEj>
    2e2c:	6c 01       	movw	r12, r24
    2e2e:	dc 01       	movw	r26, r24
    2e30:	ed 91       	ld	r30, X+
    2e32:	fc 91       	ld	r31, X
    2e34:	04 80       	ldd	r0, Z+4	; 0x04
    2e36:	f5 81       	ldd	r31, Z+5	; 0x05
    2e38:	e0 2d       	mov	r30, r0
    2e3a:	09 95       	icall
    2e3c:	83 30       	cpi	r24, 0x03	; 3
    2e3e:	98 42       	sbci	r25, 0x28	; 40
    2e40:	49 f7       	brne	.-46     	; 0x2e14 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0xe7c>
    2e42:	80 91 ee 2a 	lds	r24, 0x2AEE	; 0x802aee <ATT+0x8>
    2e46:	90 91 ef 2a 	lds	r25, 0x2AEF	; 0x802aef <ATT+0x9>
    2e4a:	28 16       	cp	r2, r24
    2e4c:	39 06       	cpc	r3, r25
    2e4e:	91 f0       	breq	.+36     	; 0x2e74 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0xedc>
    2e50:	80 91 fc 2a 	lds	r24, 0x2AFC	; 0x802afc <ATT+0x16>
    2e54:	90 91 fd 2a 	lds	r25, 0x2AFD	; 0x802afd <ATT+0x17>
    2e58:	28 16       	cp	r2, r24
    2e5a:	39 06       	cpc	r3, r25
    2e5c:	51 f1       	breq	.+84     	; 0x2eb2 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0xf1a>
    2e5e:	80 91 0a 2b 	lds	r24, 0x2B0A	; 0x802b0a <ATT+0x24>
    2e62:	90 91 0b 2b 	lds	r25, 0x2B0B	; 0x802b0b <ATT+0x25>
    2e66:	28 16       	cp	r2, r24
    2e68:	39 06       	cpc	r3, r25
    2e6a:	09 f0       	breq	.+2      	; 0x2e6e <_ZN8ATTClass10handleDataEjhPh.constprop.46+0xed6>
    2e6c:	9f cf       	rjmp	.-194    	; 0x2dac <_ZN8ATTClass10handleDataEjhPh.constprop.46+0xe14>
    2e6e:	22 e0       	ldi	r18, 0x02	; 2
    2e70:	30 e0       	ldi	r19, 0x00	; 0
    2e72:	02 c0       	rjmp	.+4      	; 0x2e78 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0xee0>
    2e74:	30 e0       	ldi	r19, 0x00	; 0
    2e76:	20 e0       	ldi	r18, 0x00	; 0
    2e78:	f7 01       	movw	r30, r14
    2e7a:	e3 80       	ldd	r14, Z+3	; 0x03
    2e7c:	f4 80       	ldd	r15, Z+4	; 0x04
    2e7e:	4e e0       	ldi	r20, 0x0E	; 14
    2e80:	42 9f       	mul	r20, r18
    2e82:	c0 01       	movw	r24, r0
    2e84:	43 9f       	mul	r20, r19
    2e86:	90 0d       	add	r25, r0
    2e88:	11 24       	eor	r1, r1
    2e8a:	ac 01       	movw	r20, r24
    2e8c:	4e 50       	subi	r20, 0x0E	; 14
    2e8e:	55 4d       	sbci	r21, 0xD5	; 213
    2e90:	8a 51       	subi	r24, 0x1A	; 26
    2e92:	95 4d       	sbci	r25, 0xD5	; 213
    2e94:	dc 01       	movw	r26, r24
    2e96:	1b 96       	adiw	r26, 0x0b	; 11
    2e98:	6c 91       	ld	r22, X
    2e9a:	ce 01       	movw	r24, r28
    2e9c:	01 96       	adiw	r24, 0x01	; 1
    2e9e:	0e 94 9b 05 	call	0xb36	; 0xb36 <_ZN9BLEDeviceC1EhPh>
    2ea2:	a7 01       	movw	r20, r14
    2ea4:	be 01       	movw	r22, r28
    2ea6:	6f 5f       	subi	r22, 0xFF	; 255
    2ea8:	7f 4f       	sbci	r23, 0xFF	; 255
    2eaa:	c6 01       	movw	r24, r12
    2eac:	0e 94 4b 02 	call	0x496	; 0x496 <_ZN22BLELocalCharacteristic14writeCccdValueE9BLEDevicej>
    2eb0:	7d cf       	rjmp	.-262    	; 0x2dac <_ZN8ATTClass10handleDataEjhPh.constprop.46+0xe14>
    2eb2:	21 e0       	ldi	r18, 0x01	; 1
    2eb4:	30 e0       	ldi	r19, 0x00	; 0
    2eb6:	e0 cf       	rjmp	.-64     	; 0x2e78 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0xee0>
    2eb8:	8d b7       	in	r24, 0x3d	; 61
    2eba:	9e b7       	in	r25, 0x3e	; 62
    2ebc:	61 96       	adiw	r28, 0x11	; 17
    2ebe:	8e af       	std	Y+62, r24	; 0x3e
    2ec0:	9f af       	std	Y+63, r25	; 0x3f
    2ec2:	61 97       	sbiw	r28, 0x11	; 17
    2ec4:	24 e0       	ldi	r18, 0x04	; 4
    2ec6:	50 e0       	ldi	r21, 0x00	; 0
    2ec8:	40 e0       	ldi	r20, 0x00	; 0
    2eca:	04 30       	cpi	r16, 0x04	; 4
    2ecc:	18 f1       	brcs	.+70     	; 0x2f14 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0xf7c>
    2ece:	d7 01       	movw	r26, r14
    2ed0:	11 96       	adiw	r26, 0x01	; 1
    2ed2:	cd 90       	ld	r12, X+
    2ed4:	dc 90       	ld	r13, X
    2ed6:	b6 01       	movw	r22, r12
    2ed8:	61 50       	subi	r22, 0x01	; 1
    2eda:	71 09       	sbc	r23, r1
    2edc:	80 91 5a 2b 	lds	r24, 0x2B5A	; 0x802b5a <GATT+0x2>
    2ee0:	90 91 5b 2b 	lds	r25, 0x2B5B	; 0x802b5b <GATT+0x3>
    2ee4:	2a e0       	ldi	r18, 0x0A	; 10
    2ee6:	86 17       	cp	r24, r22
    2ee8:	97 07       	cpc	r25, r23
    2eea:	98 f0       	brcs	.+38     	; 0x2f12 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0xf7a>
    2eec:	f7 01       	movw	r30, r14
    2eee:	43 80       	ldd	r4, Z+3	; 0x03
    2ef0:	54 80       	ldd	r5, Z+4	; 0x04
    2ef2:	8a e5       	ldi	r24, 0x5A	; 90
    2ef4:	9b e2       	ldi	r25, 0x2B	; 43
    2ef6:	0e 94 7e 01 	call	0x2fc	; 0x2fc <_ZNK13BLELinkedListIP17BLELocalAttributeE3getEj>
    2efa:	4c 01       	movw	r8, r24
    2efc:	dc 01       	movw	r26, r24
    2efe:	ed 91       	ld	r30, X+
    2f00:	fc 91       	ld	r31, X
    2f02:	04 80       	ldd	r0, Z+4	; 0x04
    2f04:	f5 81       	ldd	r31, Z+5	; 0x05
    2f06:	e0 2d       	mov	r30, r0
    2f08:	09 95       	icall
    2f0a:	83 30       	cpi	r24, 0x03	; 3
    2f0c:	98 42       	sbci	r25, 0x28	; 40
    2f0e:	21 f0       	breq	.+8      	; 0x2f18 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0xf80>
    2f10:	2b e0       	ldi	r18, 0x0B	; 11
    2f12:	a6 01       	movw	r20, r12
    2f14:	66 e1       	ldi	r22, 0x16	; 22
    2f16:	65 c9       	rjmp	.-3382   	; 0x21e2 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x24a>
    2f18:	f4 01       	movw	r30, r8
    2f1a:	87 8d       	ldd	r24, Z+31	; 0x1f
    2f1c:	90 a1       	ldd	r25, Z+32	; 0x20
    2f1e:	01 96       	adiw	r24, 0x01	; 1
    2f20:	c8 16       	cp	r12, r24
    2f22:	d9 06       	cpc	r13, r25
    2f24:	a9 f7       	brne	.-22     	; 0x2f10 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0xf78>
    2f26:	87 89       	ldd	r24, Z+23	; 0x17
    2f28:	23 e0       	ldi	r18, 0x03	; 3
    2f2a:	83 ff       	sbrs	r24, 3
    2f2c:	f2 cf       	rjmp	.-28     	; 0x2f12 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0xf7a>
    2f2e:	80 91 19 2b 	lds	r24, 0x2B19	; 0x802b19 <ATT+0x33>
    2f32:	90 91 1a 2b 	lds	r25, 0x2B1A	; 0x802b1a <ATT+0x34>
    2f36:	00 97       	sbiw	r24, 0x00	; 0
    2f38:	99 f5       	brne	.+102    	; 0x2fa0 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x1008>
    2f3a:	60 8c       	ldd	r6, Z+24	; 0x18
    2f3c:	71 8c       	ldd	r7, Z+25	; 0x19
    2f3e:	b3 01       	movw	r22, r6
    2f40:	80 91 1b 2b 	lds	r24, 0x2B1B	; 0x802b1b <ATT+0x35>
    2f44:	90 91 1c 2b 	lds	r25, 0x2B1C	; 0x802b1c <ATT+0x36>
    2f48:	0e 94 c3 29 	call	0x5386	; 0x5386 <realloc>
    2f4c:	80 93 1b 2b 	sts	0x2B1B, r24	; 0x802b1b <ATT+0x35>
    2f50:	90 93 1c 2b 	sts	0x2B1C, r25	; 0x802b1c <ATT+0x36>
    2f54:	10 92 1d 2b 	sts	0x2B1D, r1	; 0x802b1d <ATT+0x37>
    2f58:	10 92 1e 2b 	sts	0x2B1E, r1	; 0x802b1e <ATT+0x38>
    2f5c:	c0 92 19 2b 	sts	0x2B19, r12	; 0x802b19 <ATT+0x33>
    2f60:	d0 92 1a 2b 	sts	0x2B1A, r13	; 0x802b1a <ATT+0x34>
    2f64:	a3 01       	movw	r20, r6
    2f66:	70 e0       	ldi	r23, 0x00	; 0
    2f68:	60 e0       	ldi	r22, 0x00	; 0
    2f6a:	0e 94 9e 2a 	call	0x553c	; 0x553c <memset>
    2f6e:	80 91 1d 2b 	lds	r24, 0x2B1D	; 0x802b1d <ATT+0x37>
    2f72:	90 91 1e 2b 	lds	r25, 0x2B1E	; 0x802b1e <ATT+0x38>
    2f76:	48 16       	cp	r4, r24
    2f78:	59 06       	cpc	r5, r25
    2f7a:	81 f4       	brne	.+32     	; 0x2f9c <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x1004>
    2f7c:	2c 96       	adiw	r28, 0x0c	; 12
    2f7e:	8f ad       	ldd	r24, Y+63	; 0x3f
    2f80:	2c 97       	sbiw	r28, 0x0c	; 12
    2f82:	85 50       	subi	r24, 0x05	; 5
    2f84:	68 2e       	mov	r6, r24
    2f86:	71 2c       	mov	r7, r1
    2f88:	92 01       	movw	r18, r4
    2f8a:	26 0d       	add	r18, r6
    2f8c:	37 1d       	adc	r19, r7
    2f8e:	d4 01       	movw	r26, r8
    2f90:	58 96       	adiw	r26, 0x18	; 24
    2f92:	8d 91       	ld	r24, X+
    2f94:	9c 91       	ld	r25, X
    2f96:	82 17       	cp	r24, r18
    2f98:	93 07       	cpc	r25, r19
    2f9a:	38 f4       	brcc	.+14     	; 0x2faa <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x1012>
    2f9c:	27 e0       	ldi	r18, 0x07	; 7
    2f9e:	b9 cf       	rjmp	.-142    	; 0x2f12 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0xf7a>
    2fa0:	2e e0       	ldi	r18, 0x0E	; 14
    2fa2:	c8 16       	cp	r12, r24
    2fa4:	d9 06       	cpc	r13, r25
    2fa6:	19 f3       	breq	.-58     	; 0x2f6e <_ZN8ATTClass10handleDataEjhPh.constprop.46+0xfd6>
    2fa8:	b4 cf       	rjmp	.-152    	; 0x2f12 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0xf7a>
    2faa:	80 91 1b 2b 	lds	r24, 0x2B1B	; 0x802b1b <ATT+0x35>
    2fae:	90 91 1c 2b 	lds	r25, 0x2B1C	; 0x802b1c <ATT+0x36>
    2fb2:	b7 01       	movw	r22, r14
    2fb4:	6b 5f       	subi	r22, 0xFB	; 251
    2fb6:	7f 4f       	sbci	r23, 0xFF	; 255
    2fb8:	a3 01       	movw	r20, r6
    2fba:	84 0d       	add	r24, r4
    2fbc:	95 1d       	adc	r25, r5
    2fbe:	0e 94 95 2a 	call	0x552a	; 0x552a <memcpy>
    2fc2:	80 91 1d 2b 	lds	r24, 0x2B1D	; 0x802b1d <ATT+0x37>
    2fc6:	90 91 1e 2b 	lds	r25, 0x2B1E	; 0x802b1e <ATT+0x38>
    2fca:	86 0d       	add	r24, r6
    2fcc:	97 1d       	adc	r25, r7
    2fce:	80 93 1d 2b 	sts	0x2B1D, r24	; 0x802b1d <ATT+0x37>
    2fd2:	90 93 1e 2b 	sts	0x2B1E, r25	; 0x802b1e <ATT+0x38>
    2fd6:	ed b7       	in	r30, 0x3d	; 61
    2fd8:	fe b7       	in	r31, 0x3e	; 62
    2fda:	2f 96       	adiw	r28, 0x0f	; 15
    2fdc:	2e ad       	ldd	r18, Y+62	; 0x3e
    2fde:	3f ad       	ldd	r19, Y+63	; 0x3f
    2fe0:	2f 97       	sbiw	r28, 0x0f	; 15
    2fe2:	e2 1b       	sub	r30, r18
    2fe4:	f3 0b       	sbc	r31, r19
    2fe6:	ed bf       	out	0x3d, r30	; 61
    2fe8:	fe bf       	out	0x3e, r31	; 62
    2fea:	8d b7       	in	r24, 0x3d	; 61
    2fec:	9e b7       	in	r25, 0x3e	; 62
    2fee:	01 96       	adiw	r24, 0x01	; 1
    2ff0:	7c 01       	movw	r14, r24
    2ff2:	87 e1       	ldi	r24, 0x17	; 23
    2ff4:	81 83       	std	Z+1, r24	; 0x01
    2ff6:	40 2f       	mov	r20, r16
    2ff8:	50 e0       	ldi	r21, 0x00	; 0
    2ffa:	b5 01       	movw	r22, r10
    2ffc:	c7 01       	movw	r24, r14
    2ffe:	01 96       	adiw	r24, 0x01	; 1
    3000:	0e 94 95 2a 	call	0x552a	; 0x552a <memcpy>
    3004:	97 01       	movw	r18, r14
    3006:	2c 96       	adiw	r28, 0x0c	; 12
    3008:	4f ad       	ldd	r20, Y+63	; 0x3f
    300a:	2c 97       	sbiw	r28, 0x0c	; 12
    300c:	64 e0       	ldi	r22, 0x04	; 4
    300e:	c1 01       	movw	r24, r2
    3010:	0e 94 0a 1e 	call	0x3c14	; 0x3c14 <_ZN8HCIClass10sendAclPktEjhhPv.constprop.37>
    3014:	61 96       	adiw	r28, 0x11	; 17
    3016:	ae ad       	ldd	r26, Y+62	; 0x3e
    3018:	bf ad       	ldd	r27, Y+63	; 0x3f
    301a:	61 97       	sbiw	r28, 0x11	; 17
    301c:	ad bf       	out	0x3d, r26	; 61
    301e:	be bf       	out	0x3e, r27	; 62
    3020:	85 ca       	rjmp	.-2806   	; 0x252c <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x594>
    3022:	8d b6       	in	r8, 0x3d	; 61
    3024:	9e b6       	in	r9, 0x3e	; 62
    3026:	01 30       	cpi	r16, 0x01	; 1
    3028:	29 f0       	breq	.+10     	; 0x3034 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x109c>
    302a:	24 e0       	ldi	r18, 0x04	; 4
    302c:	50 e0       	ldi	r21, 0x00	; 0
    302e:	40 e0       	ldi	r20, 0x00	; 0
    3030:	68 e1       	ldi	r22, 0x18	; 24
    3032:	77 cb       	rjmp	.-2322   	; 0x2722 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x78a>
    3034:	60 91 19 2b 	lds	r22, 0x2B19	; 0x802b19 <ATT+0x33>
    3038:	70 91 1a 2b 	lds	r23, 0x2B1A	; 0x802b1a <ATT+0x34>
    303c:	61 15       	cp	r22, r1
    303e:	71 05       	cpc	r23, r1
    3040:	01 f1       	breq	.+64     	; 0x3082 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x10ea>
    3042:	d7 01       	movw	r26, r14
    3044:	11 96       	adiw	r26, 0x01	; 1
    3046:	8c 91       	ld	r24, X
    3048:	80 ff       	sbrs	r24, 0
    304a:	1b c0       	rjmp	.+54     	; 0x3082 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x10ea>
    304c:	61 50       	subi	r22, 0x01	; 1
    304e:	71 09       	sbc	r23, r1
    3050:	8a e5       	ldi	r24, 0x5A	; 90
    3052:	9b e2       	ldi	r25, 0x2B	; 43
    3054:	0e 94 7e 01 	call	0x2fc	; 0x2fc <_ZNK13BLELinkedListIP17BLELocalAttributeE3getEj>
    3058:	7c 01       	movw	r14, r24
    305a:	2c 14       	cp	r2, r12
    305c:	3d 04       	cpc	r3, r13
    305e:	91 f1       	breq	.+100    	; 0x30c4 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x112c>
    3060:	80 91 fc 2a 	lds	r24, 0x2AFC	; 0x802afc <ATT+0x16>
    3064:	90 91 fd 2a 	lds	r25, 0x2AFD	; 0x802afd <ATT+0x17>
    3068:	28 16       	cp	r2, r24
    306a:	39 06       	cpc	r3, r25
    306c:	09 f4       	brne	.+2      	; 0x3070 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x10d8>
    306e:	4e c0       	rjmp	.+156    	; 0x310c <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x1174>
    3070:	80 91 0a 2b 	lds	r24, 0x2B0A	; 0x802b0a <ATT+0x24>
    3074:	90 91 0b 2b 	lds	r25, 0x2B0B	; 0x802b0b <ATT+0x25>
    3078:	22 e0       	ldi	r18, 0x02	; 2
    307a:	30 e0       	ldi	r19, 0x00	; 0
    307c:	28 16       	cp	r2, r24
    307e:	39 06       	cpc	r3, r25
    3080:	19 f1       	breq	.+70     	; 0x30c8 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x1130>
    3082:	10 92 19 2b 	sts	0x2B19, r1	; 0x802b19 <ATT+0x33>
    3086:	10 92 1a 2b 	sts	0x2B1A, r1	; 0x802b1a <ATT+0x34>
    308a:	10 92 1d 2b 	sts	0x2B1D, r1	; 0x802b1d <ATT+0x37>
    308e:	10 92 1e 2b 	sts	0x2B1E, r1	; 0x802b1e <ATT+0x38>
    3092:	2d b7       	in	r18, 0x3d	; 61
    3094:	3e b7       	in	r19, 0x3e	; 62
    3096:	2f 96       	adiw	r28, 0x0f	; 15
    3098:	8e ad       	ldd	r24, Y+62	; 0x3e
    309a:	9f ad       	ldd	r25, Y+63	; 0x3f
    309c:	2f 97       	sbiw	r28, 0x0f	; 15
    309e:	28 1b       	sub	r18, r24
    30a0:	39 0b       	sbc	r19, r25
    30a2:	2d bf       	out	0x3d, r18	; 61
    30a4:	3e bf       	out	0x3e, r19	; 62
    30a6:	2f 5f       	subi	r18, 0xFF	; 255
    30a8:	3f 4f       	sbci	r19, 0xFF	; 255
    30aa:	89 e1       	ldi	r24, 0x19	; 25
    30ac:	ad b7       	in	r26, 0x3d	; 61
    30ae:	be b7       	in	r27, 0x3e	; 62
    30b0:	11 96       	adiw	r26, 0x01	; 1
    30b2:	8c 93       	st	X, r24
    30b4:	41 e0       	ldi	r20, 0x01	; 1
    30b6:	64 e0       	ldi	r22, 0x04	; 4
    30b8:	c1 01       	movw	r24, r2
    30ba:	0e 94 0a 1e 	call	0x3c14	; 0x3c14 <_ZN8HCIClass10sendAclPktEjhhPv.constprop.37>
    30be:	8d be       	out	0x3d, r8	; 61
    30c0:	9e be       	out	0x3e, r9	; 62
    30c2:	34 ca       	rjmp	.-2968   	; 0x252c <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x594>
    30c4:	30 e0       	ldi	r19, 0x00	; 0
    30c6:	20 e0       	ldi	r18, 0x00	; 0
    30c8:	a0 90 1d 2b 	lds	r10, 0x2B1D	; 0x802b1d <ATT+0x37>
    30cc:	b0 90 1e 2b 	lds	r11, 0x2B1E	; 0x802b1e <ATT+0x38>
    30d0:	c0 90 1b 2b 	lds	r12, 0x2B1B	; 0x802b1b <ATT+0x35>
    30d4:	d0 90 1c 2b 	lds	r13, 0x2B1C	; 0x802b1c <ATT+0x36>
    30d8:	4e e0       	ldi	r20, 0x0E	; 14
    30da:	42 9f       	mul	r20, r18
    30dc:	c0 01       	movw	r24, r0
    30de:	43 9f       	mul	r20, r19
    30e0:	90 0d       	add	r25, r0
    30e2:	11 24       	eor	r1, r1
    30e4:	ac 01       	movw	r20, r24
    30e6:	4e 50       	subi	r20, 0x0E	; 14
    30e8:	55 4d       	sbci	r21, 0xD5	; 213
    30ea:	8a 51       	subi	r24, 0x1A	; 26
    30ec:	95 4d       	sbci	r25, 0xD5	; 213
    30ee:	fc 01       	movw	r30, r24
    30f0:	63 85       	ldd	r22, Z+11	; 0x0b
    30f2:	ce 01       	movw	r24, r28
    30f4:	01 96       	adiw	r24, 0x01	; 1
    30f6:	0e 94 9b 05 	call	0xb36	; 0xb36 <_ZN9BLEDeviceC1EhPh>
    30fa:	95 01       	movw	r18, r10
    30fc:	a6 01       	movw	r20, r12
    30fe:	be 01       	movw	r22, r28
    3100:	6f 5f       	subi	r22, 0xFF	; 255
    3102:	7f 4f       	sbci	r23, 0xFF	; 255
    3104:	c7 01       	movw	r24, r14
    3106:	0e 94 2d 23 	call	0x465a	; 0x465a <_ZN22BLELocalCharacteristic10writeValueE9BLEDevicePKhi>
    310a:	bb cf       	rjmp	.-138    	; 0x3082 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x10ea>
    310c:	21 e0       	ldi	r18, 0x01	; 1
    310e:	30 e0       	ldi	r19, 0x00	; 0
    3110:	db cf       	rjmp	.-74     	; 0x30c8 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x1130>
    3112:	6d 90       	ld	r6, X+
    3114:	7c 90       	ld	r7, X
    3116:	d3 01       	movw	r26, r6
    3118:	1a 96       	adiw	r26, 0x0a	; 10
    311a:	4d 91       	ld	r20, X+
    311c:	5c 91       	ld	r21, X
    311e:	1b 97       	sbiw	r26, 0x0b	; 11
    3120:	48 15       	cp	r20, r8
    3122:	59 05       	cpc	r21, r9
    3124:	08 f0       	brcs	.+2      	; 0x3128 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x1190>
    3126:	42 c0       	rjmp	.+132    	; 0x31ac <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x1214>
    3128:	1c 96       	adiw	r26, 0x0c	; 12
    312a:	4d 91       	ld	r20, X+
    312c:	5c 91       	ld	r21, X
    312e:	1d 97       	sbiw	r26, 0x0d	; 13
    3130:	48 15       	cp	r20, r8
    3132:	59 05       	cpc	r21, r9
    3134:	d8 f1       	brcs	.+118    	; 0x31ac <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x1214>
    3136:	54 96       	adiw	r26, 0x14	; 20
    3138:	ed 91       	ld	r30, X+
    313a:	fc 91       	ld	r31, X
    313c:	2f 96       	adiw	r28, 0x0f	; 15
    313e:	ee af       	std	Y+62, r30	; 0x3e
    3140:	ff af       	std	Y+63, r31	; 0x3f
    3142:	2f 97       	sbiw	r28, 0x0f	; 15
    3144:	fe e0       	ldi	r31, 0x0E	; 14
    3146:	f8 9f       	mul	r31, r24
    3148:	90 01       	movw	r18, r0
    314a:	f9 9f       	mul	r31, r25
    314c:	30 0d       	add	r19, r0
    314e:	11 24       	eor	r1, r1
    3150:	c9 01       	movw	r24, r18
    3152:	8e 50       	subi	r24, 0x0E	; 14
    3154:	95 4d       	sbci	r25, 0xD5	; 213
    3156:	2d 96       	adiw	r28, 0x0d	; 13
    3158:	8e af       	std	Y+62, r24	; 0x3e
    315a:	9f af       	std	Y+63, r25	; 0x3f
    315c:	2d 97       	sbiw	r28, 0x0d	; 13
    315e:	f1 2c       	mov	r15, r1
    3160:	e1 2c       	mov	r14, r1
    3162:	d9 01       	movw	r26, r18
    3164:	af 50       	subi	r26, 0x0F	; 15
    3166:	b5 4d       	sbci	r27, 0xD5	; 213
    3168:	61 96       	adiw	r28, 0x11	; 17
    316a:	ae af       	std	Y+62, r26	; 0x3e
    316c:	bf af       	std	Y+63, r27	; 0x3f
    316e:	61 97       	sbiw	r28, 0x11	; 17
    3170:	2f 96       	adiw	r28, 0x0f	; 15
    3172:	ee ad       	ldd	r30, Y+62	; 0x3e
    3174:	ff ad       	ldd	r31, Y+63	; 0x3f
    3176:	2f 97       	sbiw	r28, 0x0f	; 15
    3178:	ee 16       	cp	r14, r30
    317a:	ff 06       	cpc	r15, r31
    317c:	ec f5       	brge	.+122    	; 0x31f8 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x1260>
    317e:	d3 01       	movw	r26, r6
    3180:	54 96       	adiw	r26, 0x14	; 20
    3182:	8d 91       	ld	r24, X+
    3184:	9c 91       	ld	r25, X
    3186:	55 97       	sbiw	r26, 0x15	; 21
    3188:	b1 2c       	mov	r11, r1
    318a:	a1 2c       	mov	r10, r1
    318c:	e8 16       	cp	r14, r24
    318e:	f9 06       	cpc	r15, r25
    3190:	88 f4       	brcc	.+34     	; 0x31b4 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x121c>
    3192:	56 96       	adiw	r26, 0x16	; 22
    3194:	ed 91       	ld	r30, X+
    3196:	fc 91       	ld	r31, X
    3198:	90 e0       	ldi	r25, 0x00	; 0
    319a:	80 e0       	ldi	r24, 0x00	; 0
    319c:	e8 16       	cp	r14, r24
    319e:	f9 06       	cpc	r15, r25
    31a0:	39 f0       	breq	.+14     	; 0x31b0 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x1218>
    31a2:	02 80       	ldd	r0, Z+2	; 0x02
    31a4:	f3 81       	ldd	r31, Z+3	; 0x03
    31a6:	e0 2d       	mov	r30, r0
    31a8:	01 96       	adiw	r24, 0x01	; 1
    31aa:	f8 cf       	rjmp	.-16     	; 0x319c <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x1204>
    31ac:	01 96       	adiw	r24, 0x01	; 1
    31ae:	6e c9       	rjmp	.-3364   	; 0x248c <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x4f4>
    31b0:	a0 80       	ld	r10, Z
    31b2:	b1 80       	ldd	r11, Z+1	; 0x01
    31b4:	f5 01       	movw	r30, r10
    31b6:	87 85       	ldd	r24, Z+15	; 0x0f
    31b8:	90 89       	ldd	r25, Z+16	; 0x10
    31ba:	88 16       	cp	r8, r24
    31bc:	99 06       	cpc	r9, r25
    31be:	c1 f4       	brne	.+48     	; 0x31f0 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x1258>
    31c0:	2d 96       	adiw	r28, 0x0d	; 13
    31c2:	4e ad       	ldd	r20, Y+62	; 0x3e
    31c4:	5f ad       	ldd	r21, Y+63	; 0x3f
    31c6:	2d 97       	sbiw	r28, 0x0d	; 13
    31c8:	61 96       	adiw	r28, 0x11	; 17
    31ca:	ae ad       	ldd	r26, Y+62	; 0x3e
    31cc:	bf ad       	ldd	r27, Y+63	; 0x3f
    31ce:	61 97       	sbiw	r28, 0x11	; 17
    31d0:	6c 91       	ld	r22, X
    31d2:	ce 01       	movw	r24, r28
    31d4:	01 96       	adiw	r24, 0x01	; 1
    31d6:	0e 94 9b 05 	call	0xb36	; 0xb36 <_ZN9BLEDeviceC1EhPh>
    31da:	63 96       	adiw	r28, 0x13	; 19
    31dc:	2e ad       	ldd	r18, Y+62	; 0x3e
    31de:	3f ad       	ldd	r19, Y+63	; 0x3f
    31e0:	63 97       	sbiw	r28, 0x13	; 19
    31e2:	a2 01       	movw	r20, r4
    31e4:	be 01       	movw	r22, r28
    31e6:	6f 5f       	subi	r22, 0xFF	; 255
    31e8:	7f 4f       	sbci	r23, 0xFF	; 255
    31ea:	c5 01       	movw	r24, r10
    31ec:	0e 94 b7 05 	call	0xb6e	; 0xb6e <_ZN23BLERemoteCharacteristic10writeValueE9BLEDevicePKhi>
    31f0:	bf ef       	ldi	r27, 0xFF	; 255
    31f2:	eb 1a       	sub	r14, r27
    31f4:	fb 0a       	sbc	r15, r27
    31f6:	bc cf       	rjmp	.-136    	; 0x3170 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x11d8>
    31f8:	ee e0       	ldi	r30, 0x0E	; 14
    31fa:	ce 0e       	add	r12, r30
    31fc:	d1 1c       	adc	r13, r1
    31fe:	f0 e1       	ldi	r31, 0x10	; 16
    3200:	cf 16       	cp	r12, r31
    3202:	fb e2       	ldi	r31, 0x2B	; 43
    3204:	df 06       	cpc	r13, r31
    3206:	09 f0       	breq	.+2      	; 0x320a <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x1272>
    3208:	2e c9       	rjmp	.-3492   	; 0x2466 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x4ce>
    320a:	1d 31       	cpi	r17, 0x1D	; 29
    320c:	09 f0       	breq	.+2      	; 0x3210 <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x1278>
    320e:	8e c9       	rjmp	.-3300   	; 0x252c <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x594>
    3210:	8e e1       	ldi	r24, 0x1E	; 30
    3212:	89 83       	std	Y+1, r24	; 0x01
    3214:	9e 01       	movw	r18, r28
    3216:	2f 5f       	subi	r18, 0xFF	; 255
    3218:	3f 4f       	sbci	r19, 0xFF	; 255
    321a:	41 e0       	ldi	r20, 0x01	; 1
    321c:	de c9       	rjmp	.-3140   	; 0x25da <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x642>
    321e:	81 e0       	ldi	r24, 0x01	; 1
    3220:	80 93 18 2b 	sts	0x2B18, r24	; 0x802b18 <ATT+0x32>
    3224:	83 c9       	rjmp	.-3322   	; 0x252c <_ZN8ATTClass10handleDataEjhPh.constprop.46+0x594>

00003226 <_ZN8HCIClass4pollEm.constprop.34>:
    3226:	2f 92       	push	r2
    3228:	3f 92       	push	r3
    322a:	4f 92       	push	r4
    322c:	5f 92       	push	r5
    322e:	6f 92       	push	r6
    3230:	7f 92       	push	r7
    3232:	8f 92       	push	r8
    3234:	9f 92       	push	r9
    3236:	af 92       	push	r10
    3238:	bf 92       	push	r11
    323a:	cf 92       	push	r12
    323c:	df 92       	push	r13
    323e:	ef 92       	push	r14
    3240:	ff 92       	push	r15
    3242:	0f 93       	push	r16
    3244:	1f 93       	push	r17
    3246:	cf 93       	push	r28
    3248:	df 93       	push	r29
    324a:	cd b7       	in	r28, 0x3d	; 61
    324c:	de b7       	in	r29, 0x3e	; 62
    324e:	cd 5f       	subi	r28, 0xFD	; 253
    3250:	d1 09       	sbc	r29, r1
    3252:	cd bf       	out	0x3d, r28	; 61
    3254:	de bf       	out	0x3e, r29	; 62
    3256:	ab 01       	movw	r20, r22
    3258:	bc 01       	movw	r22, r24
    325a:	80 e4       	ldi	r24, 0x40	; 64
    325c:	80 93 02 04 	sts	0x0402, r24	; 0x800402 <__TEXT_REGION_LENGTH__+0x700402>
    3260:	41 15       	cp	r20, r1
    3262:	51 05       	cpc	r21, r1
    3264:	61 05       	cpc	r22, r1
    3266:	71 05       	cpc	r23, r1
    3268:	21 f0       	breq	.+8      	; 0x3272 <_ZN8HCIClass4pollEm.constprop.34+0x4c>
    326a:	83 e3       	ldi	r24, 0x33	; 51
    326c:	98 e2       	ldi	r25, 0x28	; 40
    326e:	0e 94 41 06 	call	0xc82	; 0xc82 <_ZN21HCIUartTransportClass4waitEm>
    3272:	9e 01       	movw	r18, r28
    3274:	2b 52       	subi	r18, 0x2B	; 43
    3276:	3f 4f       	sbci	r19, 0xFF	; 255
    3278:	ca 50       	subi	r28, 0x0A	; 10
    327a:	df 4f       	sbci	r29, 0xFF	; 255
    327c:	28 83       	st	Y, r18
    327e:	39 83       	std	Y+1, r19	; 0x01
    3280:	c6 5f       	subi	r28, 0xF6	; 246
    3282:	d0 40       	sbci	r29, 0x00	; 0
    3284:	be 01       	movw	r22, r28
    3286:	6b 56       	subi	r22, 0x6B	; 107
    3288:	7f 4f       	sbci	r23, 0xFF	; 255
    328a:	c8 50       	subi	r28, 0x08	; 8
    328c:	df 4f       	sbci	r29, 0xFF	; 255
    328e:	68 83       	st	Y, r22
    3290:	79 83       	std	Y+1, r23	; 0x01
    3292:	c8 5f       	subi	r28, 0xF8	; 248
    3294:	d0 40       	sbci	r29, 0x00	; 0
    3296:	ce 01       	movw	r24, r28
    3298:	01 96       	adiw	r24, 0x01	; 1
    329a:	7c 01       	movw	r14, r24
    329c:	ab e4       	ldi	r26, 0x4B	; 75
    329e:	b0 e0       	ldi	r27, 0x00	; 0
    32a0:	ac 0f       	add	r26, r28
    32a2:	bd 1f       	adc	r27, r29
    32a4:	1b 96       	adiw	r26, 0x0b	; 11
    32a6:	c4 50       	subi	r28, 0x04	; 4
    32a8:	df 4f       	sbci	r29, 0xFF	; 255
    32aa:	a8 83       	st	Y, r26
    32ac:	b9 83       	std	Y+1, r27	; 0x01
    32ae:	cc 5f       	subi	r28, 0xFC	; 252
    32b0:	d0 40       	sbci	r29, 0x00	; 0
    32b2:	83 e3       	ldi	r24, 0x33	; 51
    32b4:	98 e2       	ldi	r25, 0x28	; 40
    32b6:	0e 94 ae 01 	call	0x35c	; 0x35c <_ZN21HCIUartTransportClass9availableEv>
    32ba:	89 2b       	or	r24, r25
    32bc:	09 f4       	brne	.+2      	; 0x32c0 <_ZN8HCIClass4pollEm.constprop.34+0x9a>
    32be:	8b c4       	rjmp	.+2326   	; 0x3bd6 <_ZN8HCIClass4pollEm.constprop.34+0x9b0>
    32c0:	83 e3       	ldi	r24, 0x33	; 51
    32c2:	98 e2       	ldi	r25, 0x28	; 40
    32c4:	0e 94 ae 01 	call	0x35c	; 0x35c <_ZN21HCIUartTransportClass9availableEv>
    32c8:	9f 93       	push	r25
    32ca:	8f 93       	push	r24
    32cc:	e5 e5       	ldi	r30, 0x55	; 85
    32ce:	fc e9       	ldi	r31, 0x9C	; 156
    32d0:	ff 93       	push	r31
    32d2:	ef 93       	push	r30
    32d4:	c9 50       	subi	r28, 0x09	; 9
    32d6:	df 4f       	sbci	r29, 0xFF	; 255
    32d8:	38 81       	ld	r19, Y
    32da:	c7 5f       	subi	r28, 0xF7	; 247
    32dc:	d0 40       	sbci	r29, 0x00	; 0
    32de:	3f 93       	push	r19
    32e0:	ca 50       	subi	r28, 0x0A	; 10
    32e2:	df 4f       	sbci	r29, 0xFF	; 255
    32e4:	68 81       	ld	r22, Y
    32e6:	c6 5f       	subi	r28, 0xF6	; 246
    32e8:	d0 40       	sbci	r29, 0x00	; 0
    32ea:	6f 93       	push	r22
    32ec:	0e 94 b5 2a 	call	0x556a	; 0x556a <sprintf>
    32f0:	ce 01       	movw	r24, r28
    32f2:	8b 52       	subi	r24, 0x2B	; 43
    32f4:	9f 4f       	sbci	r25, 0xFF	; 255
    32f6:	0e 94 9f 0b 	call	0x173e	; 0x173e <_ZN3sio7PrintlnEPKc>
    32fa:	83 e3       	ldi	r24, 0x33	; 51
    32fc:	98 e2       	ldi	r25, 0x28	; 40
    32fe:	0e 94 98 01 	call	0x330	; 0x330 <_ZN21HCIUartTransportClass4readEv>
    3302:	20 91 3f 28 	lds	r18, 0x283F	; 0x80283f <HCI+0x4>
    3306:	30 91 40 28 	lds	r19, 0x2840	; 0x802840 <HCI+0x5>
    330a:	b9 01       	movw	r22, r18
    330c:	6f 5f       	subi	r22, 0xFF	; 255
    330e:	7f 4f       	sbci	r23, 0xFF	; 255
    3310:	60 93 3f 28 	sts	0x283F, r22	; 0x80283f <HCI+0x4>
    3314:	70 93 40 28 	sts	0x2840, r23	; 0x802840 <HCI+0x5>
    3318:	25 5c       	subi	r18, 0xC5	; 197
    331a:	37 4d       	sbci	r19, 0xD7	; 215
    331c:	d9 01       	movw	r26, r18
    331e:	16 96       	adiw	r26, 0x06	; 6
    3320:	8c 93       	st	X, r24
    3322:	90 91 41 28 	lds	r25, 0x2841	; 0x802841 <HCI+0x6>
    3326:	0f 90       	pop	r0
    3328:	0f 90       	pop	r0
    332a:	0f 90       	pop	r0
    332c:	0f 90       	pop	r0
    332e:	0f 90       	pop	r0
    3330:	0f 90       	pop	r0
    3332:	92 30       	cpi	r25, 0x02	; 2
    3334:	09 f0       	breq	.+2      	; 0x3338 <_ZN8HCIClass4pollEm.constprop.34+0x112>
    3336:	30 c1       	rjmp	.+608    	; 0x3598 <_ZN8HCIClass4pollEm.constprop.34+0x372>
    3338:	66 30       	cpi	r22, 0x06	; 6
    333a:	71 05       	cpc	r23, r1
    333c:	0c f4       	brge	.+2      	; 0x3340 <_ZN8HCIClass4pollEm.constprop.34+0x11a>
    333e:	b9 cf       	rjmp	.-142    	; 0x32b2 <_ZN8HCIClass4pollEm.constprop.34+0x8c>
    3340:	80 91 45 28 	lds	r24, 0x2845	; 0x802845 <HCI+0xa>
    3344:	28 2f       	mov	r18, r24
    3346:	30 e0       	ldi	r19, 0x00	; 0
    3348:	32 2f       	mov	r19, r18
    334a:	22 27       	eor	r18, r18
    334c:	80 91 44 28 	lds	r24, 0x2844	; 0x802844 <HCI+0x9>
    3350:	82 0f       	add	r24, r18
    3352:	93 2f       	mov	r25, r19
    3354:	91 1d       	adc	r25, r1
    3356:	04 96       	adiw	r24, 0x04	; 4
    3358:	86 17       	cp	r24, r22
    335a:	97 07       	cpc	r25, r23
    335c:	0c f0       	brlt	.+2      	; 0x3360 <_ZN8HCIClass4pollEm.constprop.34+0x13a>
    335e:	a9 cf       	rjmp	.-174    	; 0x32b2 <_ZN8HCIClass4pollEm.constprop.34+0x8c>
    3360:	80 91 3d 28 	lds	r24, 0x283D	; 0x80283d <HCI+0x2>
    3364:	90 91 3e 28 	lds	r25, 0x283E	; 0x80283e <HCI+0x3>
    3368:	89 2b       	or	r24, r25
    336a:	31 f0       	breq	.+12     	; 0x3378 <_ZN8HCIClass4pollEm.constprop.34+0x152>
    336c:	41 e4       	ldi	r20, 0x41	; 65
    336e:	58 e2       	ldi	r21, 0x28	; 40
    3370:	85 e6       	ldi	r24, 0x65	; 101
    3372:	9c e9       	ldi	r25, 0x9C	; 156
    3374:	0e 94 e4 07 	call	0xfc8	; 0xfc8 <_ZN8HCIClass7dumpPktEPKchPh.constprop.95>
    3378:	80 e4       	ldi	r24, 0x40	; 64
    337a:	80 93 05 04 	sts	0x0405, r24	; 0x800405 <__TEXT_REGION_LENGTH__+0x700405>
    337e:	10 92 3f 28 	sts	0x283F, r1	; 0x80283f <HCI+0x4>
    3382:	10 92 40 28 	sts	0x2840, r1	; 0x802840 <HCI+0x5>
    3386:	80 91 43 28 	lds	r24, 0x2843	; 0x802843 <HCI+0x8>
    338a:	82 95       	swap	r24
    338c:	8f 70       	andi	r24, 0x0F	; 15
    338e:	c6 50       	subi	r28, 0x06	; 6
    3390:	df 4f       	sbci	r29, 0xFF	; 255
    3392:	88 83       	st	Y, r24
    3394:	ca 5f       	subi	r28, 0xFA	; 250
    3396:	d0 40       	sbci	r29, 0x00	; 0
    3398:	c5 50       	subi	r28, 0x05	; 5
    339a:	df 4f       	sbci	r29, 0xFF	; 255
    339c:	18 82       	st	Y, r1
    339e:	cb 5f       	subi	r28, 0xFB	; 251
    33a0:	d0 40       	sbci	r29, 0x00	; 0
    33a2:	40 91 44 28 	lds	r20, 0x2844	; 0x802844 <HCI+0x9>
    33a6:	50 91 45 28 	lds	r21, 0x2845	; 0x802845 <HCI+0xa>
    33aa:	9a 01       	movw	r18, r20
    33ac:	24 50       	subi	r18, 0x04	; 4
    33ae:	31 09       	sbc	r19, r1
    33b0:	80 91 46 28 	lds	r24, 0x2846	; 0x802846 <HCI+0xb>
    33b4:	90 91 47 28 	lds	r25, 0x2847	; 0x802847 <HCI+0xc>
    33b8:	28 17       	cp	r18, r24
    33ba:	39 07       	cpc	r19, r25
    33bc:	81 f0       	breq	.+32     	; 0x33de <_ZN8HCIClass4pollEm.constprop.34+0x1b8>
    33be:	c6 50       	subi	r28, 0x06	; 6
    33c0:	df 4f       	sbci	r29, 0xFF	; 255
    33c2:	e8 81       	ld	r30, Y
    33c4:	f9 81       	ldd	r31, Y+1	; 0x01
    33c6:	ca 5f       	subi	r28, 0xFA	; 250
    33c8:	d0 40       	sbci	r29, 0x00	; 0
    33ca:	31 97       	sbiw	r30, 0x01	; 1
    33cc:	59 f0       	breq	.+22     	; 0x33e4 <_ZN8HCIClass4pollEm.constprop.34+0x1be>
    33ce:	4c 5f       	subi	r20, 0xFC	; 252
    33d0:	5f 4f       	sbci	r21, 0xFF	; 255
    33d2:	62 e4       	ldi	r22, 0x42	; 66
    33d4:	78 e2       	ldi	r23, 0x28	; 40
    33d6:	8c e4       	ldi	r24, 0x4C	; 76
    33d8:	99 e2       	ldi	r25, 0x29	; 41
    33da:	0e 94 95 2a 	call	0x552a	; 0x552a <memcpy>
    33de:	e2 e4       	ldi	r30, 0x42	; 66
    33e0:	f8 e2       	ldi	r31, 0x28	; 40
    33e2:	1a c0       	rjmp	.+52     	; 0x3418 <_ZN8HCIClass4pollEm.constprop.34+0x1f2>
    33e4:	80 91 4e 29 	lds	r24, 0x294E	; 0x80294e <HCI+0x113>
    33e8:	90 91 4f 29 	lds	r25, 0x294F	; 0x80294f <HCI+0x114>
    33ec:	66 e4       	ldi	r22, 0x46	; 70
    33ee:	78 e2       	ldi	r23, 0x28	; 40
    33f0:	80 5b       	subi	r24, 0xB0	; 176
    33f2:	96 4d       	sbci	r25, 0xD6	; 214
    33f4:	0e 94 95 2a 	call	0x552a	; 0x552a <memcpy>
    33f8:	80 91 4e 29 	lds	r24, 0x294E	; 0x80294e <HCI+0x113>
    33fc:	90 91 4f 29 	lds	r25, 0x294F	; 0x80294f <HCI+0x114>
    3400:	20 91 44 28 	lds	r18, 0x2844	; 0x802844 <HCI+0x9>
    3404:	30 91 45 28 	lds	r19, 0x2845	; 0x802845 <HCI+0xa>
    3408:	82 0f       	add	r24, r18
    340a:	93 1f       	adc	r25, r19
    340c:	80 93 4e 29 	sts	0x294E, r24	; 0x80294e <HCI+0x113>
    3410:	90 93 4f 29 	sts	0x294F, r25	; 0x80294f <HCI+0x114>
    3414:	ec e4       	ldi	r30, 0x4C	; 76
    3416:	f9 e2       	ldi	r31, 0x29	; 41
    3418:	62 81       	ldd	r22, Z+2	; 0x02
    341a:	73 81       	ldd	r23, Z+3	; 0x03
    341c:	64 50       	subi	r22, 0x04	; 4
    341e:	71 09       	sbc	r23, r1
    3420:	84 81       	ldd	r24, Z+4	; 0x04
    3422:	95 81       	ldd	r25, Z+5	; 0x05
    3424:	68 17       	cp	r22, r24
    3426:	79 07       	cpc	r23, r25
    3428:	c1 f4       	brne	.+48     	; 0x345a <_ZN8HCIClass4pollEm.constprop.34+0x234>
    342a:	86 81       	ldd	r24, Z+6	; 0x06
    342c:	97 81       	ldd	r25, Z+7	; 0x07
    342e:	00 81       	ld	r16, Z
    3430:	11 81       	ldd	r17, Z+1	; 0x01
    3432:	1f 70       	andi	r17, 0x0F	; 15
    3434:	84 30       	cpi	r24, 0x04	; 4
    3436:	91 05       	cpc	r25, r1
    3438:	a1 f4       	brne	.+40     	; 0x3462 <_ZN8HCIClass4pollEm.constprop.34+0x23c>
    343a:	c6 50       	subi	r28, 0x06	; 6
    343c:	df 4f       	sbci	r29, 0xFF	; 255
    343e:	28 81       	ld	r18, Y
    3440:	39 81       	ldd	r19, Y+1	; 0x01
    3442:	ca 5f       	subi	r28, 0xFA	; 250
    3444:	d0 40       	sbci	r29, 0x00	; 0
    3446:	44 e5       	ldi	r20, 0x54	; 84
    3448:	59 e2       	ldi	r21, 0x29	; 41
    344a:	21 30       	cpi	r18, 0x01	; 1
    344c:	31 05       	cpc	r19, r1
    344e:	11 f0       	breq	.+4      	; 0x3454 <_ZN8HCIClass4pollEm.constprop.34+0x22e>
    3450:	4a e4       	ldi	r20, 0x4A	; 74
    3452:	58 e2       	ldi	r21, 0x28	; 40
    3454:	c8 01       	movw	r24, r16
    3456:	0e 94 cc 0f 	call	0x1f98	; 0x1f98 <_ZN8ATTClass10handleDataEjhPh.constprop.46>
    345a:	80 e4       	ldi	r24, 0x40	; 64
    345c:	80 93 06 04 	sts	0x0406, r24	; 0x800406 <__TEXT_REGION_LENGTH__+0x700406>
    3460:	28 cf       	rjmp	.-432    	; 0x32b2 <_ZN8HCIClass4pollEm.constprop.34+0x8c>
    3462:	85 30       	cpi	r24, 0x05	; 5
    3464:	91 05       	cpc	r25, r1
    3466:	09 f0       	breq	.+2      	; 0x346a <_ZN8HCIClass4pollEm.constprop.34+0x244>
    3468:	7f c0       	rjmp	.+254    	; 0x3568 <_ZN8HCIClass4pollEm.constprop.34+0x342>
    346a:	64 30       	cpi	r22, 0x04	; 4
    346c:	b0 f3       	brcs	.-20     	; 0x345a <_ZN8HCIClass4pollEm.constprop.34+0x234>
    346e:	80 91 4c 28 	lds	r24, 0x284C	; 0x80284c <HCI+0x11>
    3472:	90 91 4d 28 	lds	r25, 0x284D	; 0x80284d <HCI+0x12>
    3476:	9c 01       	movw	r18, r24
    3478:	2c 5f       	subi	r18, 0xFC	; 252
    347a:	3f 4f       	sbci	r19, 0xFF	; 255
    347c:	62 17       	cp	r22, r18
    347e:	13 06       	cpc	r1, r19
    3480:	61 f7       	brne	.-40     	; 0x345a <_ZN8HCIClass4pollEm.constprop.34+0x234>
    3482:	20 91 4a 28 	lds	r18, 0x284A	; 0x80284a <HCI+0xf>
    3486:	22 31       	cpi	r18, 0x12	; 18
    3488:	41 f7       	brne	.-48     	; 0x345a <_ZN8HCIClass4pollEm.constprop.34+0x234>
    348a:	88 30       	cpi	r24, 0x08	; 8
    348c:	30 f3       	brcs	.-52     	; 0x345a <_ZN8HCIClass4pollEm.constprop.34+0x234>
    348e:	80 91 4b 28 	lds	r24, 0x284B	; 0x80284b <HCI+0x10>
    3492:	61 96       	adiw	r28, 0x11	; 17
    3494:	1e ae       	std	Y+62, r1	; 0x3e
    3496:	1f ae       	std	Y+63, r1	; 0x3f
    3498:	61 97       	sbiw	r28, 0x11	; 17
    349a:	93 e1       	ldi	r25, 0x13	; 19
    349c:	2c 96       	adiw	r28, 0x0c	; 12
    349e:	9f af       	std	Y+63, r25	; 0x3f
    34a0:	2c 97       	sbiw	r28, 0x0c	; 12
    34a2:	22 e0       	ldi	r18, 0x02	; 2
    34a4:	30 e0       	ldi	r19, 0x00	; 0
    34a6:	2f 96       	adiw	r28, 0x0f	; 15
    34a8:	2e af       	std	Y+62, r18	; 0x3e
    34aa:	3f af       	std	Y+63, r19	; 0x3f
    34ac:	2f 97       	sbiw	r28, 0x0f	; 15
    34ae:	2d 96       	adiw	r28, 0x0d	; 13
    34b0:	8f af       	std	Y+63, r24	; 0x3f
    34b2:	2d 97       	sbiw	r28, 0x0d	; 13
    34b4:	20 91 2f 28 	lds	r18, 0x282F	; 0x80282f <L2CAPSignaling+0x2>
    34b8:	30 91 30 28 	lds	r19, 0x2830	; 0x802830 <L2CAPSignaling+0x3>
    34bc:	21 15       	cp	r18, r1
    34be:	31 05       	cpc	r19, r1
    34c0:	d9 f0       	breq	.+54     	; 0x34f8 <_ZN8HCIClass4pollEm.constprop.34+0x2d2>
    34c2:	80 91 31 28 	lds	r24, 0x2831	; 0x802831 <L2CAPSignaling+0x4>
    34c6:	90 91 32 28 	lds	r25, 0x2832	; 0x802832 <L2CAPSignaling+0x5>
    34ca:	00 97       	sbiw	r24, 0x00	; 0
    34cc:	a9 f0       	breq	.+42     	; 0x34f8 <_ZN8HCIClass4pollEm.constprop.34+0x2d2>
    34ce:	40 91 4e 28 	lds	r20, 0x284E	; 0x80284e <HCI+0x13>
    34d2:	50 91 4f 28 	lds	r21, 0x284F	; 0x80284f <HCI+0x14>
    34d6:	42 17       	cp	r20, r18
    34d8:	53 07       	cpc	r21, r19
    34da:	38 f0       	brcs	.+14     	; 0x34ea <_ZN8HCIClass4pollEm.constprop.34+0x2c4>
    34dc:	20 91 50 28 	lds	r18, 0x2850	; 0x802850 <HCI+0x15>
    34e0:	30 91 51 28 	lds	r19, 0x2851	; 0x802851 <HCI+0x16>
    34e4:	82 17       	cp	r24, r18
    34e6:	93 07       	cpc	r25, r19
    34e8:	38 f4       	brcc	.+14     	; 0x34f8 <_ZN8HCIClass4pollEm.constprop.34+0x2d2>
    34ea:	31 e0       	ldi	r19, 0x01	; 1
    34ec:	60 96       	adiw	r28, 0x10	; 16
    34ee:	3f af       	std	Y+63, r19	; 0x3f
    34f0:	60 97       	sbiw	r28, 0x10	; 16
    34f2:	61 96       	adiw	r28, 0x11	; 17
    34f4:	1f ae       	std	Y+63, r1	; 0x3f
    34f6:	61 97       	sbiw	r28, 0x11	; 17
    34f8:	9e 01       	movw	r18, r28
    34fa:	25 5b       	subi	r18, 0xB5	; 181
    34fc:	3f 4f       	sbci	r19, 0xFF	; 255
    34fe:	46 e0       	ldi	r20, 0x06	; 6
    3500:	65 e0       	ldi	r22, 0x05	; 5
    3502:	c8 01       	movw	r24, r16
    3504:	0e 94 0a 1e 	call	0x3c14	; 0x3c14 <_ZN8HCIClass10sendAclPktEjhhPv.constprop.37>
    3508:	61 96       	adiw	r28, 0x11	; 17
    350a:	8e ad       	ldd	r24, Y+62	; 0x3e
    350c:	9f ad       	ldd	r25, Y+63	; 0x3f
    350e:	61 97       	sbiw	r28, 0x11	; 17
    3510:	89 2b       	or	r24, r25
    3512:	09 f0       	breq	.+2      	; 0x3516 <_ZN8HCIClass4pollEm.constprop.34+0x2f0>
    3514:	a2 cf       	rjmp	.-188    	; 0x345a <_ZN8HCIClass4pollEm.constprop.34+0x234>
    3516:	80 91 54 28 	lds	r24, 0x2854	; 0x802854 <HCI+0x19>
    351a:	90 91 55 28 	lds	r25, 0x2855	; 0x802855 <HCI+0x1a>
    351e:	20 91 52 28 	lds	r18, 0x2852	; 0x802852 <HCI+0x17>
    3522:	30 91 53 28 	lds	r19, 0x2853	; 0x802853 <HCI+0x18>
    3526:	40 91 50 28 	lds	r20, 0x2850	; 0x802850 <HCI+0x15>
    352a:	50 91 51 28 	lds	r21, 0x2851	; 0x802851 <HCI+0x16>
    352e:	60 91 4e 28 	lds	r22, 0x284E	; 0x80284e <HCI+0x13>
    3532:	70 91 4f 28 	lds	r23, 0x284F	; 0x80284f <HCI+0x14>
    3536:	09 83       	std	Y+1, r16	; 0x01
    3538:	1a 83       	std	Y+2, r17	; 0x02
    353a:	6b 83       	std	Y+3, r22	; 0x03
    353c:	7c 83       	std	Y+4, r23	; 0x04
    353e:	4d 83       	std	Y+5, r20	; 0x05
    3540:	5e 83       	std	Y+6, r21	; 0x06
    3542:	2f 83       	std	Y+7, r18	; 0x07
    3544:	38 87       	std	Y+8, r19	; 0x08
    3546:	89 87       	std	Y+9, r24	; 0x09
    3548:	9a 87       	std	Y+10, r25	; 0x0a
    354a:	84 e0       	ldi	r24, 0x04	; 4
    354c:	90 e0       	ldi	r25, 0x00	; 0
    354e:	8b 87       	std	Y+11, r24	; 0x0b
    3550:	9c 87       	std	Y+12, r25	; 0x0c
    3552:	86 e0       	ldi	r24, 0x06	; 6
    3554:	90 e0       	ldi	r25, 0x00	; 0
    3556:	8d 87       	std	Y+13, r24	; 0x0d
    3558:	9e 87       	std	Y+14, r25	; 0x0e
    355a:	a7 01       	movw	r20, r14
    355c:	6e e0       	ldi	r22, 0x0E	; 14
    355e:	83 e1       	ldi	r24, 0x13	; 19
    3560:	90 e2       	ldi	r25, 0x20	; 32
    3562:	0e 94 d3 0b 	call	0x17a6	; 0x17a6 <_ZN8HCIClass11sendCommandEjhPv.constprop.39>
    3566:	79 cf       	rjmp	.-270    	; 0x345a <_ZN8HCIClass4pollEm.constprop.34+0x234>
    3568:	2a e0       	ldi	r18, 0x0A	; 10
    356a:	d7 01       	movw	r26, r14
    356c:	1d 92       	st	X+, r1
    356e:	2a 95       	dec	r18
    3570:	e9 f7       	brne	.-6      	; 0x356c <_ZN8HCIClass4pollEm.constprop.34+0x346>
    3572:	21 e0       	ldi	r18, 0x01	; 1
    3574:	29 83       	std	Y+1, r18	; 0x01
    3576:	26 e0       	ldi	r18, 0x06	; 6
    3578:	30 e0       	ldi	r19, 0x00	; 0
    357a:	2b 83       	std	Y+3, r18	; 0x03
    357c:	3c 83       	std	Y+4, r19	; 0x04
    357e:	22 e0       	ldi	r18, 0x02	; 2
    3580:	30 e0       	ldi	r19, 0x00	; 0
    3582:	2d 83       	std	Y+5, r18	; 0x05
    3584:	3e 83       	std	Y+6, r19	; 0x06
    3586:	8f 83       	std	Y+7, r24	; 0x07
    3588:	98 87       	std	Y+8, r25	; 0x08
    358a:	97 01       	movw	r18, r14
    358c:	4a e0       	ldi	r20, 0x0A	; 10
    358e:	65 e0       	ldi	r22, 0x05	; 5
    3590:	c8 01       	movw	r24, r16
    3592:	0e 94 0a 1e 	call	0x3c14	; 0x3c14 <_ZN8HCIClass10sendAclPktEjhhPv.constprop.37>
    3596:	61 cf       	rjmp	.-318    	; 0x345a <_ZN8HCIClass4pollEm.constprop.34+0x234>
    3598:	94 30       	cpi	r25, 0x04	; 4
    359a:	09 f0       	breq	.+2      	; 0x359e <_ZN8HCIClass4pollEm.constprop.34+0x378>
    359c:	02 c3       	rjmp	.+1540   	; 0x3ba2 <_ZN8HCIClass4pollEm.constprop.34+0x97c>
    359e:	64 30       	cpi	r22, 0x04	; 4
    35a0:	71 05       	cpc	r23, r1
    35a2:	0c f4       	brge	.+2      	; 0x35a6 <_ZN8HCIClass4pollEm.constprop.34+0x380>
    35a4:	86 ce       	rjmp	.-756    	; 0x32b2 <_ZN8HCIClass4pollEm.constprop.34+0x8c>
    35a6:	80 91 43 28 	lds	r24, 0x2843	; 0x802843 <HCI+0x8>
    35aa:	90 e0       	ldi	r25, 0x00	; 0
    35ac:	02 96       	adiw	r24, 0x02	; 2
    35ae:	86 17       	cp	r24, r22
    35b0:	97 07       	cpc	r25, r23
    35b2:	0c f0       	brlt	.+2      	; 0x35b6 <_ZN8HCIClass4pollEm.constprop.34+0x390>
    35b4:	7e ce       	rjmp	.-772    	; 0x32b2 <_ZN8HCIClass4pollEm.constprop.34+0x8c>
    35b6:	80 91 3d 28 	lds	r24, 0x283D	; 0x80283d <HCI+0x2>
    35ba:	90 91 3e 28 	lds	r25, 0x283E	; 0x80283e <HCI+0x3>
    35be:	89 2b       	or	r24, r25
    35c0:	31 f0       	breq	.+12     	; 0x35ce <_ZN8HCIClass4pollEm.constprop.34+0x3a8>
    35c2:	41 e4       	ldi	r20, 0x41	; 65
    35c4:	58 e2       	ldi	r21, 0x28	; 40
    35c6:	88 e7       	ldi	r24, 0x78	; 120
    35c8:	9c e9       	ldi	r25, 0x9C	; 156
    35ca:	0e 94 e4 07 	call	0xfc8	; 0xfc8 <_ZN8HCIClass7dumpPktEPKchPh.constprop.95>
    35ce:	80 e4       	ldi	r24, 0x40	; 64
    35d0:	80 93 05 04 	sts	0x0405, r24	; 0x800405 <__TEXT_REGION_LENGTH__+0x700405>
    35d4:	10 92 3f 28 	sts	0x283F, r1	; 0x80283f <HCI+0x4>
    35d8:	10 92 40 28 	sts	0x2840, r1	; 0x802840 <HCI+0x5>
    35dc:	80 91 42 28 	lds	r24, 0x2842	; 0x802842 <HCI+0x7>
    35e0:	1f 92       	push	r1
    35e2:	8f 93       	push	r24
    35e4:	e9 e8       	ldi	r30, 0x89	; 137
    35e6:	fc e9       	ldi	r31, 0x9C	; 156
    35e8:	ff 93       	push	r31
    35ea:	ef 93       	push	r30
    35ec:	c7 50       	subi	r28, 0x07	; 7
    35ee:	df 4f       	sbci	r29, 0xFF	; 255
    35f0:	38 81       	ld	r19, Y
    35f2:	c9 5f       	subi	r28, 0xF9	; 249
    35f4:	d0 40       	sbci	r29, 0x00	; 0
    35f6:	3f 93       	push	r19
    35f8:	c8 50       	subi	r28, 0x08	; 8
    35fa:	df 4f       	sbci	r29, 0xFF	; 255
    35fc:	68 81       	ld	r22, Y
    35fe:	c8 5f       	subi	r28, 0xF8	; 248
    3600:	d0 40       	sbci	r29, 0x00	; 0
    3602:	6f 93       	push	r22
    3604:	0e 94 b5 2a 	call	0x556a	; 0x556a <sprintf>
    3608:	ce 01       	movw	r24, r28
    360a:	8b 56       	subi	r24, 0x6B	; 107
    360c:	9f 4f       	sbci	r25, 0xFF	; 255
    360e:	0e 94 9f 0b 	call	0x173e	; 0x173e <_ZN3sio7PrintlnEPKc>
    3612:	80 91 42 28 	lds	r24, 0x2842	; 0x802842 <HCI+0x7>
    3616:	0f 90       	pop	r0
    3618:	0f 90       	pop	r0
    361a:	0f 90       	pop	r0
    361c:	0f 90       	pop	r0
    361e:	0f 90       	pop	r0
    3620:	0f 90       	pop	r0
    3622:	85 30       	cpi	r24, 0x05	; 5
    3624:	09 f0       	breq	.+2      	; 0x3628 <_ZN8HCIClass4pollEm.constprop.34+0x402>
    3626:	b3 c0       	rjmp	.+358    	; 0x378e <_ZN8HCIClass4pollEm.constprop.34+0x568>
    3628:	40 91 45 28 	lds	r20, 0x2845	; 0x802845 <HCI+0xa>
    362c:	50 91 46 28 	lds	r21, 0x2846	; 0x802846 <HCI+0xb>
    3630:	e6 ee       	ldi	r30, 0xE6	; 230
    3632:	fa e2       	ldi	r31, 0x2A	; 42
    3634:	0f ef       	ldi	r16, 0xFF	; 255
    3636:	1f ef       	ldi	r17, 0xFF	; 255
    3638:	d1 2c       	mov	r13, r1
    363a:	c1 2c       	mov	r12, r1
    363c:	90 e0       	ldi	r25, 0x00	; 0
    363e:	80 e0       	ldi	r24, 0x00	; 0
    3640:	20 85       	ldd	r18, Z+8	; 0x08
    3642:	31 85       	ldd	r19, Z+9	; 0x09
    3644:	42 17       	cp	r20, r18
    3646:	53 07       	cpc	r21, r19
    3648:	09 f4       	brne	.+2      	; 0x364c <_ZN8HCIClass4pollEm.constprop.34+0x426>
    364a:	8c 01       	movw	r16, r24
    364c:	2f 3f       	cpi	r18, 0xFF	; 255
    364e:	3f 4f       	sbci	r19, 0xFF	; 255
    3650:	19 f0       	breq	.+6      	; 0x3658 <_ZN8HCIClass4pollEm.constprop.34+0x432>
    3652:	af ef       	ldi	r26, 0xFF	; 255
    3654:	ca 1a       	sub	r12, r26
    3656:	da 0a       	sbc	r13, r26
    3658:	01 96       	adiw	r24, 0x01	; 1
    365a:	3e 96       	adiw	r30, 0x0e	; 14
    365c:	83 30       	cpi	r24, 0x03	; 3
    365e:	91 05       	cpc	r25, r1
    3660:	79 f7       	brne	.-34     	; 0x3640 <_ZN8HCIClass4pollEm.constprop.34+0x41a>
    3662:	0f 3f       	cpi	r16, 0xFF	; 255
    3664:	10 07       	cpc	r17, r16
    3666:	09 f4       	brne	.+2      	; 0x366a <_ZN8HCIClass4pollEm.constprop.34+0x444>
    3668:	85 c0       	rjmp	.+266    	; 0x3774 <_ZN8HCIClass4pollEm.constprop.34+0x54e>
    366a:	2e e0       	ldi	r18, 0x0E	; 14
    366c:	20 9f       	mul	r18, r16
    366e:	c0 01       	movw	r24, r0
    3670:	21 9f       	mul	r18, r17
    3672:	90 0d       	add	r25, r0
    3674:	11 24       	eor	r1, r1
    3676:	fc 01       	movw	r30, r24
    3678:	ee 50       	subi	r30, 0x0E	; 14
    367a:	f5 4d       	sbci	r31, 0xD5	; 213
    367c:	4f 01       	movw	r8, r30
    367e:	8a 51       	subi	r24, 0x1A	; 26
    3680:	95 4d       	sbci	r25, 0xD5	; 213
    3682:	af 01       	movw	r20, r30
    3684:	dc 01       	movw	r26, r24
    3686:	1b 96       	adiw	r26, 0x0b	; 11
    3688:	6c 91       	ld	r22, X
    368a:	ce 01       	movw	r24, r28
    368c:	85 5b       	subi	r24, 0xB5	; 181
    368e:	9f 4f       	sbci	r25, 0xFF	; 255
    3690:	0e 94 9b 05 	call	0xb36	; 0xb36 <_ZN9BLEDeviceC1EhPh>
    3694:	ca 94       	dec	r12
    3696:	cd 28       	or	r12, r13
    3698:	89 f5       	brne	.+98     	; 0x36fc <_ZN8HCIClass4pollEm.constprop.34+0x4d6>
    369a:	d1 2c       	mov	r13, r1
    369c:	c1 2c       	mov	r12, r1
    369e:	80 91 5a 2b 	lds	r24, 0x2B5A	; 0x802b5a <GATT+0x2>
    36a2:	90 91 5b 2b 	lds	r25, 0x2B5B	; 0x802b5b <GATT+0x3>
    36a6:	c8 16       	cp	r12, r24
    36a8:	d9 06       	cpc	r13, r25
    36aa:	00 f5       	brcc	.+64     	; 0x36ec <_ZN8HCIClass4pollEm.constprop.34+0x4c6>
    36ac:	b6 01       	movw	r22, r12
    36ae:	8a e5       	ldi	r24, 0x5A	; 90
    36b0:	9b e2       	ldi	r25, 0x2B	; 43
    36b2:	0e 94 7e 01 	call	0x2fc	; 0x2fc <_ZNK13BLELinkedListIP17BLELocalAttributeE3getEj>
    36b6:	5c 01       	movw	r10, r24
    36b8:	dc 01       	movw	r26, r24
    36ba:	ed 91       	ld	r30, X+
    36bc:	fc 91       	ld	r31, X
    36be:	04 80       	ldd	r0, Z+4	; 0x04
    36c0:	f5 81       	ldd	r31, Z+5	; 0x05
    36c2:	e0 2d       	mov	r30, r0
    36c4:	09 95       	icall
    36c6:	83 30       	cpi	r24, 0x03	; 3
    36c8:	98 42       	sbci	r25, 0x28	; 40
    36ca:	61 f4       	brne	.+24     	; 0x36e4 <_ZN8HCIClass4pollEm.constprop.34+0x4be>
    36cc:	be 01       	movw	r22, r28
    36ce:	65 5b       	subi	r22, 0xB5	; 181
    36d0:	7f 4f       	sbci	r23, 0xFF	; 255
    36d2:	c7 01       	movw	r24, r14
    36d4:	0e 94 e4 01 	call	0x3c8	; 0x3c8 <_ZN9BLEDeviceC1ERKS_>
    36d8:	50 e0       	ldi	r21, 0x00	; 0
    36da:	40 e0       	ldi	r20, 0x00	; 0
    36dc:	b7 01       	movw	r22, r14
    36de:	c5 01       	movw	r24, r10
    36e0:	0e 94 4b 02 	call	0x496	; 0x496 <_ZN22BLELocalCharacteristic14writeCccdValueE9BLEDevicej>
    36e4:	ef ef       	ldi	r30, 0xFF	; 255
    36e6:	ce 1a       	sub	r12, r30
    36e8:	de 0a       	sbc	r13, r30
    36ea:	d9 cf       	rjmp	.-78     	; 0x369e <_ZN8HCIClass4pollEm.constprop.34+0x478>
    36ec:	10 92 19 2b 	sts	0x2B19, r1	; 0x802b19 <ATT+0x33>
    36f0:	10 92 1a 2b 	sts	0x2B1A, r1	; 0x802b1a <ATT+0x34>
    36f4:	10 92 1d 2b 	sts	0x2B1D, r1	; 0x802b1d <ATT+0x37>
    36f8:	10 92 1e 2b 	sts	0x2B1E, r1	; 0x802b1e <ATT+0x38>
    36fc:	c0 90 27 2b 	lds	r12, 0x2B27	; 0x802b27 <ATT+0x41>
    3700:	d0 90 28 2b 	lds	r13, 0x2B28	; 0x802b28 <ATT+0x42>
    3704:	c1 14       	cp	r12, r1
    3706:	d1 04       	cpc	r13, r1
    3708:	49 f0       	breq	.+18     	; 0x371c <_ZN8HCIClass4pollEm.constprop.34+0x4f6>
    370a:	be 01       	movw	r22, r28
    370c:	65 5b       	subi	r22, 0xB5	; 181
    370e:	7f 4f       	sbci	r23, 0xFF	; 255
    3710:	c7 01       	movw	r24, r14
    3712:	0e 94 e4 01 	call	0x3c8	; 0x3c8 <_ZN9BLEDeviceC1ERKS_>
    3716:	c7 01       	movw	r24, r14
    3718:	f6 01       	movw	r30, r12
    371a:	09 95       	icall
    371c:	8e e0       	ldi	r24, 0x0E	; 14
    371e:	80 9f       	mul	r24, r16
    3720:	f0 01       	movw	r30, r0
    3722:	81 9f       	mul	r24, r17
    3724:	f0 0d       	add	r31, r0
    3726:	11 24       	eor	r1, r1
    3728:	ea 51       	subi	r30, 0x1A	; 26
    372a:	f5 4d       	sbci	r31, 0xD5	; 213
    372c:	8f ef       	ldi	r24, 0xFF	; 255
    372e:	9f ef       	ldi	r25, 0xFF	; 255
    3730:	80 87       	std	Z+8, r24	; 0x08
    3732:	91 87       	std	Z+9, r25	; 0x09
    3734:	12 86       	std	Z+10, r1	; 0x0a
    3736:	13 86       	std	Z+11, r1	; 0x0b
    3738:	86 e0       	ldi	r24, 0x06	; 6
    373a:	d4 01       	movw	r26, r8
    373c:	1d 92       	st	X+, r1
    373e:	8a 95       	dec	r24
    3740:	e9 f7       	brne	.-6      	; 0x373c <_ZN8HCIClass4pollEm.constprop.34+0x516>
    3742:	27 e1       	ldi	r18, 0x17	; 23
    3744:	30 e0       	ldi	r19, 0x00	; 0
    3746:	22 8b       	std	Z+18, r18	; 0x12
    3748:	33 8b       	std	Z+19, r19	; 0x13
    374a:	84 89       	ldd	r24, Z+20	; 0x14
    374c:	95 89       	ldd	r25, Z+21	; 0x15
    374e:	00 97       	sbiw	r24, 0x00	; 0
    3750:	39 f0       	breq	.+14     	; 0x3760 <_ZN8HCIClass4pollEm.constprop.34+0x53a>
    3752:	dc 01       	movw	r26, r24
    3754:	ed 91       	ld	r30, X+
    3756:	fc 91       	ld	r31, X
    3758:	02 80       	ldd	r0, Z+2	; 0x02
    375a:	f3 81       	ldd	r31, Z+3	; 0x03
    375c:	e0 2d       	mov	r30, r0
    375e:	09 95       	icall
    3760:	8e e0       	ldi	r24, 0x0E	; 14
    3762:	80 9f       	mul	r24, r16
    3764:	f0 01       	movw	r30, r0
    3766:	81 9f       	mul	r24, r17
    3768:	f0 0d       	add	r31, r0
    376a:	11 24       	eor	r1, r1
    376c:	ea 51       	subi	r30, 0x1A	; 26
    376e:	f5 4d       	sbci	r31, 0xD5	; 213
    3770:	14 8a       	std	Z+20, r1	; 0x14
    3772:	15 8a       	std	Z+21, r1	; 0x15
    3774:	81 e0       	ldi	r24, 0x01	; 1
    3776:	cb 50       	subi	r28, 0x0B	; 11
    3778:	df 4f       	sbci	r29, 0xFF	; 255
    377a:	88 83       	st	Y, r24
    377c:	c5 5f       	subi	r28, 0xF5	; 245
    377e:	d0 40       	sbci	r29, 0x00	; 0
    3780:	ae 01       	movw	r20, r28
    3782:	4b 50       	subi	r20, 0x0B	; 11
    3784:	5f 4f       	sbci	r21, 0xFF	; 255
    3786:	61 e0       	ldi	r22, 0x01	; 1
    3788:	8a e0       	ldi	r24, 0x0A	; 10
    378a:	90 e2       	ldi	r25, 0x20	; 32
    378c:	ea ce       	rjmp	.-556    	; 0x3562 <_ZN8HCIClass4pollEm.constprop.34+0x33c>
    378e:	8e 30       	cpi	r24, 0x0E	; 14
    3790:	f9 f4       	brne	.+62     	; 0x37d0 <_ZN8HCIClass4pollEm.constprop.34+0x5aa>
    3792:	82 ea       	ldi	r24, 0xA2	; 162
    3794:	9c e9       	ldi	r25, 0x9C	; 156
    3796:	0e 94 9f 0b 	call	0x173e	; 0x173e <_ZN3sio7PrintlnEPKc>
    379a:	80 91 45 28 	lds	r24, 0x2845	; 0x802845 <HCI+0xa>
    379e:	90 91 46 28 	lds	r25, 0x2846	; 0x802846 <HCI+0xb>
    37a2:	80 93 43 29 	sts	0x2943, r24	; 0x802943 <HCI+0x108>
    37a6:	90 93 44 29 	sts	0x2944, r25	; 0x802944 <HCI+0x109>
    37aa:	80 91 47 28 	lds	r24, 0x2847	; 0x802847 <HCI+0xc>
    37ae:	90 e0       	ldi	r25, 0x00	; 0
    37b0:	80 93 45 29 	sts	0x2945, r24	; 0x802945 <HCI+0x10a>
    37b4:	90 93 46 29 	sts	0x2946, r25	; 0x802946 <HCI+0x10b>
    37b8:	80 91 43 28 	lds	r24, 0x2843	; 0x802843 <HCI+0x8>
    37bc:	84 50       	subi	r24, 0x04	; 4
    37be:	80 93 47 29 	sts	0x2947, r24	; 0x802947 <HCI+0x10c>
    37c2:	88 e4       	ldi	r24, 0x48	; 72
    37c4:	98 e2       	ldi	r25, 0x28	; 40
    37c6:	80 93 48 29 	sts	0x2948, r24	; 0x802948 <HCI+0x10d>
    37ca:	90 93 49 29 	sts	0x2949, r25	; 0x802949 <HCI+0x10e>
    37ce:	45 ce       	rjmp	.-886    	; 0x345a <_ZN8HCIClass4pollEm.constprop.34+0x234>
    37d0:	8f 30       	cpi	r24, 0x0F	; 15
    37d2:	b1 f4       	brne	.+44     	; 0x3800 <_ZN8HCIClass4pollEm.constprop.34+0x5da>
    37d4:	8e ec       	ldi	r24, 0xCE	; 206
    37d6:	9c e9       	ldi	r25, 0x9C	; 156
    37d8:	0e 94 9f 0b 	call	0x173e	; 0x173e <_ZN3sio7PrintlnEPKc>
    37dc:	80 91 46 28 	lds	r24, 0x2846	; 0x802846 <HCI+0xb>
    37e0:	90 91 47 28 	lds	r25, 0x2847	; 0x802847 <HCI+0xc>
    37e4:	80 93 43 29 	sts	0x2943, r24	; 0x802943 <HCI+0x108>
    37e8:	90 93 44 29 	sts	0x2944, r25	; 0x802944 <HCI+0x109>
    37ec:	80 91 44 28 	lds	r24, 0x2844	; 0x802844 <HCI+0x9>
    37f0:	90 e0       	ldi	r25, 0x00	; 0
    37f2:	80 93 45 29 	sts	0x2945, r24	; 0x802945 <HCI+0x10a>
    37f6:	90 93 46 29 	sts	0x2946, r25	; 0x802946 <HCI+0x10b>
    37fa:	10 92 47 29 	sts	0x2947, r1	; 0x802947 <HCI+0x10c>
    37fe:	2d ce       	rjmp	.-934    	; 0x345a <_ZN8HCIClass4pollEm.constprop.34+0x234>
    3800:	83 31       	cpi	r24, 0x13	; 19
    3802:	e1 f4       	brne	.+56     	; 0x383c <_ZN8HCIClass4pollEm.constprop.34+0x616>
    3804:	40 91 44 28 	lds	r20, 0x2844	; 0x802844 <HCI+0x9>
    3808:	eb e3       	ldi	r30, 0x3B	; 59
    380a:	f8 e2       	ldi	r31, 0x28	; 40
    380c:	90 e0       	ldi	r25, 0x00	; 0
    380e:	49 17       	cp	r20, r25
    3810:	09 f4       	brne	.+2      	; 0x3814 <_ZN8HCIClass4pollEm.constprop.34+0x5ee>
    3812:	23 ce       	rjmp	.-954    	; 0x345a <_ZN8HCIClass4pollEm.constprop.34+0x234>
    3814:	24 85       	ldd	r18, Z+12	; 0x0c
    3816:	35 85       	ldd	r19, Z+13	; 0x0d
    3818:	21 15       	cp	r18, r1
    381a:	31 05       	cpc	r19, r1
    381c:	61 f0       	breq	.+24     	; 0x3836 <_ZN8HCIClass4pollEm.constprop.34+0x610>
    381e:	80 91 4b 29 	lds	r24, 0x294B	; 0x80294b <HCI+0x110>
    3822:	82 17       	cp	r24, r18
    3824:	13 06       	cpc	r1, r19
    3826:	39 f0       	breq	.+14     	; 0x3836 <_ZN8HCIClass4pollEm.constprop.34+0x610>
    3828:	30 f0       	brcs	.+12     	; 0x3836 <_ZN8HCIClass4pollEm.constprop.34+0x610>
    382a:	82 1b       	sub	r24, r18
    382c:	80 93 4b 29 	sts	0x294B, r24	; 0x80294b <HCI+0x110>
    3830:	9f 5f       	subi	r25, 0xFF	; 255
    3832:	34 96       	adiw	r30, 0x04	; 4
    3834:	ec cf       	rjmp	.-40     	; 0x380e <_ZN8HCIClass4pollEm.constprop.34+0x5e8>
    3836:	10 92 4b 29 	sts	0x294B, r1	; 0x80294b <HCI+0x110>
    383a:	fa cf       	rjmp	.-12     	; 0x3830 <_ZN8HCIClass4pollEm.constprop.34+0x60a>
    383c:	8e 33       	cpi	r24, 0x3E	; 62
    383e:	09 f0       	breq	.+2      	; 0x3842 <_ZN8HCIClass4pollEm.constprop.34+0x61c>
    3840:	0c ce       	rjmp	.-1000   	; 0x345a <_ZN8HCIClass4pollEm.constprop.34+0x234>
    3842:	80 91 44 28 	lds	r24, 0x2844	; 0x802844 <HCI+0x9>
    3846:	81 30       	cpi	r24, 0x01	; 1
    3848:	09 f0       	breq	.+2      	; 0x384c <_ZN8HCIClass4pollEm.constprop.34+0x626>
    384a:	8a c0       	rjmp	.+276    	; 0x3960 <_ZN8HCIClass4pollEm.constprop.34+0x73a>
    384c:	80 91 45 28 	lds	r24, 0x2845	; 0x802845 <HCI+0xa>
    3850:	81 11       	cpse	r24, r1
    3852:	03 ce       	rjmp	.-1018   	; 0x345a <_ZN8HCIClass4pollEm.constprop.34+0x234>
    3854:	80 91 ee 2a 	lds	r24, 0x2AEE	; 0x802aee <ATT+0x8>
    3858:	90 91 ef 2a 	lds	r25, 0x2AEF	; 0x802aef <ATT+0x9>
    385c:	01 96       	adiw	r24, 0x01	; 1
    385e:	81 f0       	breq	.+32     	; 0x3880 <_ZN8HCIClass4pollEm.constprop.34+0x65a>
    3860:	80 91 fc 2a 	lds	r24, 0x2AFC	; 0x802afc <ATT+0x16>
    3864:	90 91 fd 2a 	lds	r25, 0x2AFD	; 0x802afd <ATT+0x17>
    3868:	01 96       	adiw	r24, 0x01	; 1
    386a:	09 f4       	brne	.+2      	; 0x386e <_ZN8HCIClass4pollEm.constprop.34+0x648>
    386c:	76 c0       	rjmp	.+236    	; 0x395a <_ZN8HCIClass4pollEm.constprop.34+0x734>
    386e:	80 91 0a 2b 	lds	r24, 0x2B0A	; 0x802b0a <ATT+0x24>
    3872:	90 91 0b 2b 	lds	r25, 0x2B0B	; 0x802b0b <ATT+0x25>
    3876:	01 96       	adiw	r24, 0x01	; 1
    3878:	b1 f5       	brne	.+108    	; 0x38e6 <_ZN8HCIClass4pollEm.constprop.34+0x6c0>
    387a:	82 e0       	ldi	r24, 0x02	; 2
    387c:	90 e0       	ldi	r25, 0x00	; 0
    387e:	02 c0       	rjmp	.+4      	; 0x3884 <_ZN8HCIClass4pollEm.constprop.34+0x65e>
    3880:	90 e0       	ldi	r25, 0x00	; 0
    3882:	80 e0       	ldi	r24, 0x00	; 0
    3884:	60 91 49 28 	lds	r22, 0x2849	; 0x802849 <HCI+0xe>
    3888:	20 91 48 28 	lds	r18, 0x2848	; 0x802848 <HCI+0xd>
    388c:	3e e0       	ldi	r19, 0x0E	; 14
    388e:	38 9f       	mul	r19, r24
    3890:	d0 01       	movw	r26, r0
    3892:	39 9f       	mul	r19, r25
    3894:	b0 0d       	add	r27, r0
    3896:	11 24       	eor	r1, r1
    3898:	fd 01       	movw	r30, r26
    389a:	ea 51       	subi	r30, 0x1A	; 26
    389c:	f5 4d       	sbci	r31, 0xD5	; 213
    389e:	80 91 46 28 	lds	r24, 0x2846	; 0x802846 <HCI+0xb>
    38a2:	90 91 47 28 	lds	r25, 0x2847	; 0x802847 <HCI+0xc>
    38a6:	80 87       	std	Z+8, r24	; 0x08
    38a8:	91 87       	std	Z+9, r25	; 0x09
    38aa:	22 87       	std	Z+10, r18	; 0x0a
    38ac:	27 e1       	ldi	r18, 0x17	; 23
    38ae:	30 e0       	ldi	r19, 0x00	; 0
    38b0:	22 8b       	std	Z+18, r18	; 0x12
    38b2:	33 8b       	std	Z+19, r19	; 0x13
    38b4:	63 87       	std	Z+11, r22	; 0x0b
    38b6:	ae 50       	subi	r26, 0x0E	; 14
    38b8:	b5 4d       	sbci	r27, 0xD5	; 213
    38ba:	86 e0       	ldi	r24, 0x06	; 6
    38bc:	ea e4       	ldi	r30, 0x4A	; 74
    38be:	f8 e2       	ldi	r31, 0x28	; 40
    38c0:	01 90       	ld	r0, Z+
    38c2:	0d 92       	st	X+, r0
    38c4:	8a 95       	dec	r24
    38c6:	e1 f7       	brne	.-8      	; 0x38c0 <_ZN8HCIClass4pollEm.constprop.34+0x69a>
    38c8:	00 91 25 2b 	lds	r16, 0x2B25	; 0x802b25 <ATT+0x3f>
    38cc:	10 91 26 2b 	lds	r17, 0x2B26	; 0x802b26 <ATT+0x40>
    38d0:	01 15       	cp	r16, r1
    38d2:	11 05       	cpc	r17, r1
    38d4:	41 f0       	breq	.+16     	; 0x38e6 <_ZN8HCIClass4pollEm.constprop.34+0x6c0>
    38d6:	4a e4       	ldi	r20, 0x4A	; 74
    38d8:	58 e2       	ldi	r21, 0x28	; 40
    38da:	c7 01       	movw	r24, r14
    38dc:	0e 94 9b 05 	call	0xb36	; 0xb36 <_ZN9BLEDeviceC1EhPh>
    38e0:	c7 01       	movw	r24, r14
    38e2:	f8 01       	movw	r30, r16
    38e4:	09 95       	icall
    38e6:	80 91 48 28 	lds	r24, 0x2848	; 0x802848 <HCI+0xd>
    38ea:	81 30       	cpi	r24, 0x01	; 1
    38ec:	09 f0       	breq	.+2      	; 0x38f0 <_ZN8HCIClass4pollEm.constprop.34+0x6ca>
    38ee:	b5 cd       	rjmp	.-1174   	; 0x345a <_ZN8HCIClass4pollEm.constprop.34+0x234>
    38f0:	40 91 2f 28 	lds	r20, 0x282F	; 0x80282f <L2CAPSignaling+0x2>
    38f4:	50 91 30 28 	lds	r21, 0x2830	; 0x802830 <L2CAPSignaling+0x3>
    38f8:	41 15       	cp	r20, r1
    38fa:	51 05       	cpc	r21, r1
    38fc:	09 f4       	brne	.+2      	; 0x3900 <_ZN8HCIClass4pollEm.constprop.34+0x6da>
    38fe:	ad cd       	rjmp	.-1190   	; 0x345a <_ZN8HCIClass4pollEm.constprop.34+0x234>
    3900:	20 91 31 28 	lds	r18, 0x2831	; 0x802831 <L2CAPSignaling+0x4>
    3904:	30 91 32 28 	lds	r19, 0x2832	; 0x802832 <L2CAPSignaling+0x5>
    3908:	21 15       	cp	r18, r1
    390a:	31 05       	cpc	r19, r1
    390c:	09 f4       	brne	.+2      	; 0x3910 <_ZN8HCIClass4pollEm.constprop.34+0x6ea>
    390e:	a5 cd       	rjmp	.-1206   	; 0x345a <_ZN8HCIClass4pollEm.constprop.34+0x234>
    3910:	80 91 50 28 	lds	r24, 0x2850	; 0x802850 <HCI+0x15>
    3914:	90 91 51 28 	lds	r25, 0x2851	; 0x802851 <HCI+0x16>
    3918:	84 17       	cp	r24, r20
    391a:	95 07       	cpc	r25, r21
    391c:	20 f0       	brcs	.+8      	; 0x3926 <_ZN8HCIClass4pollEm.constprop.34+0x700>
    391e:	28 17       	cp	r18, r24
    3920:	39 07       	cpc	r19, r25
    3922:	08 f0       	brcs	.+2      	; 0x3926 <_ZN8HCIClass4pollEm.constprop.34+0x700>
    3924:	9a cd       	rjmp	.-1228   	; 0x345a <_ZN8HCIClass4pollEm.constprop.34+0x234>
    3926:	80 91 46 28 	lds	r24, 0x2846	; 0x802846 <HCI+0xb>
    392a:	90 91 47 28 	lds	r25, 0x2847	; 0x802847 <HCI+0xc>
    392e:	19 86       	std	Y+9, r1	; 0x09
    3930:	1a 86       	std	Y+10, r1	; 0x0a
    3932:	62 e1       	ldi	r22, 0x12	; 18
    3934:	69 83       	std	Y+1, r22	; 0x01
    3936:	61 e0       	ldi	r22, 0x01	; 1
    3938:	6a 83       	std	Y+2, r22	; 0x02
    393a:	68 e0       	ldi	r22, 0x08	; 8
    393c:	70 e0       	ldi	r23, 0x00	; 0
    393e:	6b 83       	std	Y+3, r22	; 0x03
    3940:	7c 83       	std	Y+4, r23	; 0x04
    3942:	a8 ec       	ldi	r26, 0xC8	; 200
    3944:	b0 e0       	ldi	r27, 0x00	; 0
    3946:	ab 87       	std	Y+11, r26	; 0x0b
    3948:	bc 87       	std	Y+12, r27	; 0x0c
    394a:	4d 83       	std	Y+5, r20	; 0x05
    394c:	5e 83       	std	Y+6, r21	; 0x06
    394e:	2f 83       	std	Y+7, r18	; 0x07
    3950:	38 87       	std	Y+8, r19	; 0x08
    3952:	97 01       	movw	r18, r14
    3954:	4c e0       	ldi	r20, 0x0C	; 12
    3956:	65 e0       	ldi	r22, 0x05	; 5
    3958:	1c ce       	rjmp	.-968    	; 0x3592 <_ZN8HCIClass4pollEm.constprop.34+0x36c>
    395a:	81 e0       	ldi	r24, 0x01	; 1
    395c:	90 e0       	ldi	r25, 0x00	; 0
    395e:	92 cf       	rjmp	.-220    	; 0x3884 <_ZN8HCIClass4pollEm.constprop.34+0x65e>
    3960:	82 30       	cpi	r24, 0x02	; 2
    3962:	09 f0       	breq	.+2      	; 0x3966 <_ZN8HCIClass4pollEm.constprop.34+0x740>
    3964:	7a cd       	rjmp	.-1292   	; 0x345a <_ZN8HCIClass4pollEm.constprop.34+0x234>
    3966:	80 91 45 28 	lds	r24, 0x2845	; 0x802845 <HCI+0xa>
    396a:	81 30       	cpi	r24, 0x01	; 1
    396c:	09 f0       	breq	.+2      	; 0x3970 <_ZN8HCIClass4pollEm.constprop.34+0x74a>
    396e:	75 cd       	rjmp	.-1302   	; 0x345a <_ZN8HCIClass4pollEm.constprop.34+0x234>
    3970:	80 91 2c 2b 	lds	r24, 0x2B2C	; 0x802b2c <GAP+0x3>
    3974:	88 23       	and	r24, r24
    3976:	09 f4       	brne	.+2      	; 0x397a <_ZN8HCIClass4pollEm.constprop.34+0x754>
    3978:	70 cd       	rjmp	.-1312   	; 0x345a <_ZN8HCIClass4pollEm.constprop.34+0x234>
    397a:	b0 90 4e 28 	lds	r11, 0x284E	; 0x80284e <HCI+0x13>
    397e:	8b 2c       	mov	r8, r11
    3980:	91 2c       	mov	r9, r1
    3982:	f4 01       	movw	r30, r8
    3984:	e5 5c       	subi	r30, 0xC5	; 197
    3986:	f7 4d       	sbci	r31, 0xD7	; 215
    3988:	a4 88       	ldd	r10, Z+20	; 0x14
    398a:	40 90 47 28 	lds	r4, 0x2847	; 0x802847 <HCI+0xc>
    398e:	50 90 46 28 	lds	r5, 0x2846	; 0x802846 <HCI+0xb>
    3992:	80 91 3e 2b 	lds	r24, 0x2B3E	; 0x802b3e <GAP+0x15>
    3996:	90 91 3f 2b 	lds	r25, 0x2B3F	; 0x802b3f <GAP+0x16>
    399a:	89 2b       	or	r24, r25
    399c:	19 f0       	breq	.+6      	; 0x39a4 <_ZN8HCIClass4pollEm.constprop.34+0x77e>
    399e:	b3 e0       	ldi	r27, 0x03	; 3
    39a0:	5b 16       	cp	r5, r27
    39a2:	d1 f0       	breq	.+52     	; 0x39d8 <_ZN8HCIClass4pollEm.constprop.34+0x7b2>
    39a4:	60 90 40 2b 	lds	r6, 0x2B40	; 0x802b40 <GAP+0x17>
    39a8:	70 90 41 2b 	lds	r7, 0x2B41	; 0x802b41 <GAP+0x18>
    39ac:	30 90 42 2b 	lds	r3, 0x2B42	; 0x802b42 <GAP+0x19>
    39b0:	20 90 43 2b 	lds	r2, 0x2B43	; 0x802b43 <GAP+0x1a>
    39b4:	d1 2c       	mov	r13, r1
    39b6:	c1 2c       	mov	r12, r1
    39b8:	6c 14       	cp	r6, r12
    39ba:	7d 04       	cpc	r7, r13
    39bc:	09 f4       	brne	.+2      	; 0x39c0 <_ZN8HCIClass4pollEm.constprop.34+0x79a>
    39be:	5b c0       	rjmp	.+182    	; 0x3a76 <_ZN8HCIClass4pollEm.constprop.34+0x850>
    39c0:	e3 2d       	mov	r30, r3
    39c2:	f2 2d       	mov	r31, r2
    39c4:	90 e0       	ldi	r25, 0x00	; 0
    39c6:	80 e0       	ldi	r24, 0x00	; 0
    39c8:	c8 16       	cp	r12, r24
    39ca:	d9 06       	cpc	r13, r25
    39cc:	d1 f1       	breq	.+116    	; 0x3a42 <_ZN8HCIClass4pollEm.constprop.34+0x81c>
    39ce:	02 80       	ldd	r0, Z+2	; 0x02
    39d0:	f3 81       	ldd	r31, Z+3	; 0x03
    39d2:	e0 2d       	mov	r30, r0
    39d4:	01 96       	adiw	r24, 0x01	; 1
    39d6:	f8 cf       	rjmp	.-16     	; 0x39c8 <_ZN8HCIClass4pollEm.constprop.34+0x7a2>
    39d8:	48 e4       	ldi	r20, 0x48	; 72
    39da:	58 e2       	ldi	r21, 0x28	; 40
    39dc:	64 2d       	mov	r22, r4
    39de:	ce 01       	movw	r24, r28
    39e0:	85 5b       	subi	r24, 0xB5	; 181
    39e2:	9f 4f       	sbci	r25, 0xFF	; 255
    39e4:	0e 94 9b 05 	call	0xb36	; 0xb36 <_ZN9BLEDeviceC1EhPh>
    39e8:	88 e0       	ldi	r24, 0x08	; 8
    39ea:	65 96       	adiw	r28, 0x15	; 21
    39ec:	8f af       	std	Y+63, r24	; 0x3f
    39ee:	65 97       	sbiw	r28, 0x15	; 21
    39f0:	66 96       	adiw	r28, 0x16	; 22
    39f2:	bf ae       	std	Y+63, r11	; 0x3f
    39f4:	66 97       	sbiw	r28, 0x16	; 22
    39f6:	a4 01       	movw	r20, r8
    39f8:	6f e4       	ldi	r22, 0x4F	; 79
    39fa:	78 e2       	ldi	r23, 0x28	; 40
    39fc:	c4 50       	subi	r28, 0x04	; 4
    39fe:	df 4f       	sbci	r29, 0xFF	; 255
    3a00:	88 81       	ld	r24, Y
    3a02:	99 81       	ldd	r25, Y+1	; 0x01
    3a04:	cc 5f       	subi	r28, 0xFC	; 252
    3a06:	d0 40       	sbci	r29, 0x00	; 0
    3a08:	0e 94 95 2a 	call	0x552a	; 0x552a <memcpy>
    3a0c:	cc 56       	subi	r28, 0x6C	; 108
    3a0e:	df 4f       	sbci	r29, 0xFF	; 255
    3a10:	a8 82       	st	Y, r10
    3a12:	c4 59       	subi	r28, 0x94	; 148
    3a14:	d0 40       	sbci	r29, 0x00	; 0
    3a16:	ce 01       	movw	r24, r28
    3a18:	85 5b       	subi	r24, 0xB5	; 181
    3a1a:	9f 4f       	sbci	r25, 0xFF	; 255
    3a1c:	0e 94 67 0a 	call	0x14ce	; 0x14ce <_ZN8GAPClass17matchesScanFilterERK9BLEDevice.constprop.102>
    3a20:	88 23       	and	r24, r24
    3a22:	09 f4       	brne	.+2      	; 0x3a26 <_ZN8HCIClass4pollEm.constprop.34+0x800>
    3a24:	1a cd       	rjmp	.-1484   	; 0x345a <_ZN8HCIClass4pollEm.constprop.34+0x234>
    3a26:	00 91 3e 2b 	lds	r16, 0x2B3E	; 0x802b3e <GAP+0x15>
    3a2a:	10 91 3f 2b 	lds	r17, 0x2B3F	; 0x802b3f <GAP+0x16>
    3a2e:	be 01       	movw	r22, r28
    3a30:	65 5b       	subi	r22, 0xB5	; 181
    3a32:	7f 4f       	sbci	r23, 0xFF	; 255
    3a34:	c7 01       	movw	r24, r14
    3a36:	0e 94 e4 01 	call	0x3c8	; 0x3c8 <_ZN9BLEDeviceC1ERKS_>
    3a3a:	c7 01       	movw	r24, r14
    3a3c:	f8 01       	movw	r30, r16
    3a3e:	09 95       	icall
    3a40:	0c cd       	rjmp	.-1512   	; 0x345a <_ZN8HCIClass4pollEm.constprop.34+0x234>
    3a42:	00 81       	ld	r16, Z
    3a44:	11 81       	ldd	r17, Z+1	; 0x01
    3a46:	d8 01       	movw	r26, r16
    3a48:	12 96       	adiw	r26, 0x02	; 2
    3a4a:	8c 91       	ld	r24, X
    3a4c:	48 12       	cpse	r4, r24
    3a4e:	0a c0       	rjmp	.+20     	; 0x3a64 <_ZN8HCIClass4pollEm.constprop.34+0x83e>
    3a50:	46 e0       	ldi	r20, 0x06	; 6
    3a52:	50 e0       	ldi	r21, 0x00	; 0
    3a54:	68 e4       	ldi	r22, 0x48	; 72
    3a56:	78 e2       	ldi	r23, 0x28	; 40
    3a58:	c8 01       	movw	r24, r16
    3a5a:	03 96       	adiw	r24, 0x03	; 3
    3a5c:	0e 94 88 2a 	call	0x5510	; 0x5510 <memcmp>
    3a60:	89 2b       	or	r24, r25
    3a62:	21 f0       	breq	.+8      	; 0x3a6c <_ZN8HCIClass4pollEm.constprop.34+0x846>
    3a64:	bf ef       	ldi	r27, 0xFF	; 255
    3a66:	cb 1a       	sub	r12, r27
    3a68:	db 0a       	sbc	r13, r27
    3a6a:	a6 cf       	rjmp	.-180    	; 0x39b8 <_ZN8HCIClass4pollEm.constprop.34+0x792>
    3a6c:	3c 2c       	mov	r3, r12
    3a6e:	2d 2c       	mov	r2, r13
    3a70:	01 15       	cp	r16, r1
    3a72:	11 05       	cpc	r17, r1
    3a74:	b1 f5       	brne	.+108    	; 0x3ae2 <_ZN8HCIClass4pollEm.constprop.34+0x8bc>
    3a76:	e5 e0       	ldi	r30, 0x05	; 5
    3a78:	6e 16       	cp	r6, r30
    3a7a:	71 04       	cpc	r7, r1
    3a7c:	08 f0       	brcs	.+2      	; 0x3a80 <_ZN8HCIClass4pollEm.constprop.34+0x85a>
    3a7e:	ed cc       	rjmp	.-1574   	; 0x345a <_ZN8HCIClass4pollEm.constprop.34+0x234>
    3a80:	8a e4       	ldi	r24, 0x4A	; 74
    3a82:	90 e0       	ldi	r25, 0x00	; 0
    3a84:	0e 94 9e 28 	call	0x513c	; 0x513c <malloc>
    3a88:	8c 01       	movw	r16, r24
    3a8a:	48 e4       	ldi	r20, 0x48	; 72
    3a8c:	58 e2       	ldi	r21, 0x28	; 40
    3a8e:	64 2d       	mov	r22, r4
    3a90:	0e 94 9b 05 	call	0xb36	; 0xb36 <_ZN9BLEDeviceC1EhPh>
    3a94:	84 e0       	ldi	r24, 0x04	; 4
    3a96:	90 e0       	ldi	r25, 0x00	; 0
    3a98:	0e 94 9e 28 	call	0x513c	; 0x513c <malloc>
    3a9c:	dc 01       	movw	r26, r24
    3a9e:	12 96       	adiw	r26, 0x02	; 2
    3aa0:	1d 92       	st	X+, r1
    3aa2:	1c 92       	st	X, r1
    3aa4:	13 97       	sbiw	r26, 0x03	; 3
    3aa6:	0d 93       	st	X+, r16
    3aa8:	1c 93       	st	X, r17
    3aaa:	20 91 42 2b 	lds	r18, 0x2B42	; 0x802b42 <GAP+0x19>
    3aae:	30 91 43 2b 	lds	r19, 0x2B43	; 0x802b43 <GAP+0x1a>
    3ab2:	23 2b       	or	r18, r19
    3ab4:	09 f0       	breq	.+2      	; 0x3ab8 <_ZN8HCIClass4pollEm.constprop.34+0x892>
    3ab6:	54 c0       	rjmp	.+168    	; 0x3b60 <_ZN8HCIClass4pollEm.constprop.34+0x93a>
    3ab8:	80 93 42 2b 	sts	0x2B42, r24	; 0x802b42 <GAP+0x19>
    3abc:	90 93 43 2b 	sts	0x2B43, r25	; 0x802b43 <GAP+0x1a>
    3ac0:	80 93 44 2b 	sts	0x2B44, r24	; 0x802b44 <GAP+0x1b>
    3ac4:	90 93 45 2b 	sts	0x2B45, r25	; 0x802b45 <GAP+0x1c>
    3ac8:	80 91 40 2b 	lds	r24, 0x2B40	; 0x802b40 <GAP+0x17>
    3acc:	90 91 41 2b 	lds	r25, 0x2B41	; 0x802b41 <GAP+0x18>
    3ad0:	9c 01       	movw	r18, r24
    3ad2:	2f 5f       	subi	r18, 0xFF	; 255
    3ad4:	3f 4f       	sbci	r19, 0xFF	; 255
    3ad6:	20 93 40 2b 	sts	0x2B40, r18	; 0x802b40 <GAP+0x17>
    3ada:	30 93 41 2b 	sts	0x2B41, r19	; 0x802b41 <GAP+0x18>
    3ade:	38 2e       	mov	r3, r24
    3ae0:	29 2e       	mov	r2, r25
    3ae2:	f8 01       	movw	r30, r16
    3ae4:	e7 5b       	subi	r30, 0xB7	; 183
    3ae6:	ff 4f       	sbci	r31, 0xFF	; 255
    3ae8:	6f 01       	movw	r12, r30
    3aea:	f4 e0       	ldi	r31, 0x04	; 4
    3aec:	5f 16       	cp	r5, r31
    3aee:	09 f4       	brne	.+2      	; 0x3af2 <_ZN8HCIClass4pollEm.constprop.34+0x8cc>
    3af0:	3e c0       	rjmp	.+124    	; 0x3b6e <_ZN8HCIClass4pollEm.constprop.34+0x948>
    3af2:	81 e0       	ldi	r24, 0x01	; 1
    3af4:	01 c0       	rjmp	.+2      	; 0x3af8 <_ZN8HCIClass4pollEm.constprop.34+0x8d2>
    3af6:	88 0f       	add	r24, r24
    3af8:	5a 94       	dec	r5
    3afa:	ea f7       	brpl	.-6      	; 0x3af6 <_ZN8HCIClass4pollEm.constprop.34+0x8d0>
    3afc:	d8 01       	movw	r26, r16
    3afe:	19 96       	adiw	r26, 0x09	; 9
    3b00:	8c 93       	st	X, r24
    3b02:	19 97       	sbiw	r26, 0x09	; 9
    3b04:	1a 96       	adiw	r26, 0x0a	; 10
    3b06:	bc 92       	st	X, r11
    3b08:	a4 01       	movw	r20, r8
    3b0a:	6f e4       	ldi	r22, 0x4F	; 79
    3b0c:	78 e2       	ldi	r23, 0x28	; 40
    3b0e:	c8 01       	movw	r24, r16
    3b10:	0b 96       	adiw	r24, 0x0b	; 11
    3b12:	0e 94 95 2a 	call	0x552a	; 0x552a <memcpy>
    3b16:	f6 01       	movw	r30, r12
    3b18:	a0 82       	st	Z, r10
    3b1a:	f8 01       	movw	r30, r16
    3b1c:	81 85       	ldd	r24, Z+9	; 0x09
    3b1e:	88 71       	andi	r24, 0x18	; 24
    3b20:	09 f4       	brne	.+2      	; 0x3b24 <_ZN8HCIClass4pollEm.constprop.34+0x8fe>
    3b22:	9b cc       	rjmp	.-1738   	; 0x345a <_ZN8HCIClass4pollEm.constprop.34+0x234>
    3b24:	80 91 3e 2b 	lds	r24, 0x2B3E	; 0x802b3e <GAP+0x15>
    3b28:	90 91 3f 2b 	lds	r25, 0x2B3F	; 0x802b3f <GAP+0x16>
    3b2c:	89 2b       	or	r24, r25
    3b2e:	09 f4       	brne	.+2      	; 0x3b32 <_ZN8HCIClass4pollEm.constprop.34+0x90c>
    3b30:	94 cc       	rjmp	.-1752   	; 0x345a <_ZN8HCIClass4pollEm.constprop.34+0x234>
    3b32:	b8 01       	movw	r22, r16
    3b34:	ce 01       	movw	r24, r28
    3b36:	85 5b       	subi	r24, 0xB5	; 181
    3b38:	9f 4f       	sbci	r25, 0xFF	; 255
    3b3a:	0e 94 e4 01 	call	0x3c8	; 0x3c8 <_ZN9BLEDeviceC1ERKS_>
    3b3e:	83 2d       	mov	r24, r3
    3b40:	92 2d       	mov	r25, r2
    3b42:	0e 94 70 03 	call	0x6e0	; 0x6e0 <_ZN13BLELinkedListIP9BLEDeviceE6removeEj.constprop.99>
    3b46:	01 15       	cp	r16, r1
    3b48:	11 05       	cpc	r17, r1
    3b4a:	09 f4       	brne	.+2      	; 0x3b4e <_ZN8HCIClass4pollEm.constprop.34+0x928>
    3b4c:	64 cf       	rjmp	.-312    	; 0x3a16 <_ZN8HCIClass4pollEm.constprop.34+0x7f0>
    3b4e:	d8 01       	movw	r26, r16
    3b50:	ed 91       	ld	r30, X+
    3b52:	fc 91       	ld	r31, X
    3b54:	02 80       	ldd	r0, Z+2	; 0x02
    3b56:	f3 81       	ldd	r31, Z+3	; 0x03
    3b58:	e0 2d       	mov	r30, r0
    3b5a:	c8 01       	movw	r24, r16
    3b5c:	09 95       	icall
    3b5e:	5b cf       	rjmp	.-330    	; 0x3a16 <_ZN8HCIClass4pollEm.constprop.34+0x7f0>
    3b60:	e0 91 44 2b 	lds	r30, 0x2B44	; 0x802b44 <GAP+0x1b>
    3b64:	f0 91 45 2b 	lds	r31, 0x2B45	; 0x802b45 <GAP+0x1c>
    3b68:	82 83       	std	Z+2, r24	; 0x02
    3b6a:	93 83       	std	Z+3, r25	; 0x03
    3b6c:	a9 cf       	rjmp	.-174    	; 0x3ac0 <_ZN8HCIClass4pollEm.constprop.34+0x89a>
    3b6e:	d8 01       	movw	r26, r16
    3b70:	19 96       	adiw	r26, 0x09	; 9
    3b72:	8c 91       	ld	r24, X
    3b74:	19 97       	sbiw	r26, 0x09	; 9
    3b76:	80 61       	ori	r24, 0x10	; 16
    3b78:	19 96       	adiw	r26, 0x09	; 9
    3b7a:	8c 93       	st	X, r24
    3b7c:	19 97       	sbiw	r26, 0x09	; 9
    3b7e:	1a 96       	adiw	r26, 0x0a	; 10
    3b80:	8c 91       	ld	r24, X
    3b82:	90 e0       	ldi	r25, 0x00	; 0
    3b84:	0b 96       	adiw	r24, 0x0b	; 11
    3b86:	a4 01       	movw	r20, r8
    3b88:	6f e4       	ldi	r22, 0x4F	; 79
    3b8a:	78 e2       	ldi	r23, 0x28	; 40
    3b8c:	80 0f       	add	r24, r16
    3b8e:	91 1f       	adc	r25, r17
    3b90:	0e 94 95 2a 	call	0x552a	; 0x552a <memcpy>
    3b94:	f8 01       	movw	r30, r16
    3b96:	82 85       	ldd	r24, Z+10	; 0x0a
    3b98:	b8 0e       	add	r11, r24
    3b9a:	b2 86       	std	Z+10, r11	; 0x0a
    3b9c:	d6 01       	movw	r26, r12
    3b9e:	ac 92       	st	X, r10
    3ba0:	bc cf       	rjmp	.-136    	; 0x3b1a <_ZN8HCIClass4pollEm.constprop.34+0x8f4>
    3ba2:	10 92 3f 28 	sts	0x283F, r1	; 0x80283f <HCI+0x4>
    3ba6:	10 92 40 28 	sts	0x2840, r1	; 0x802840 <HCI+0x5>
    3baa:	00 91 3d 28 	lds	r16, 0x283D	; 0x80283d <HCI+0x2>
    3bae:	10 91 3e 28 	lds	r17, 0x283E	; 0x80283e <HCI+0x3>
    3bb2:	01 15       	cp	r16, r1
    3bb4:	11 05       	cpc	r17, r1
    3bb6:	09 f4       	brne	.+2      	; 0x3bba <_ZN8HCIClass4pollEm.constprop.34+0x994>
    3bb8:	7c cb       	rjmp	.-2312   	; 0x32b2 <_ZN8HCIClass4pollEm.constprop.34+0x8c>
    3bba:	48 2f       	mov	r20, r24
    3bbc:	50 e0       	ldi	r21, 0x00	; 0
    3bbe:	70 e0       	ldi	r23, 0x00	; 0
    3bc0:	60 e0       	ldi	r22, 0x00	; 0
    3bc2:	20 e1       	ldi	r18, 0x10	; 16
    3bc4:	c8 01       	movw	r24, r16
    3bc6:	0e 94 9e 07 	call	0xf3c	; 0xf3c <_ZN5Print11printNumberEmh>
    3bca:	65 e7       	ldi	r22, 0x75	; 117
    3bcc:	7b e9       	ldi	r23, 0x9B	; 155
    3bce:	c8 01       	movw	r24, r16
    3bd0:	0e 94 8f 07 	call	0xf1e	; 0xf1e <_ZN5Print5writeEPKc.part.2>
    3bd4:	6e cb       	rjmp	.-2340   	; 0x32b2 <_ZN8HCIClass4pollEm.constprop.34+0x8c>
    3bd6:	80 e4       	ldi	r24, 0x40	; 64
    3bd8:	80 93 05 04 	sts	0x0405, r24	; 0x800405 <__TEXT_REGION_LENGTH__+0x700405>
    3bdc:	c3 50       	subi	r28, 0x03	; 3
    3bde:	df 4f       	sbci	r29, 0xFF	; 255
    3be0:	cd bf       	out	0x3d, r28	; 61
    3be2:	de bf       	out	0x3e, r29	; 62
    3be4:	df 91       	pop	r29
    3be6:	cf 91       	pop	r28
    3be8:	1f 91       	pop	r17
    3bea:	0f 91       	pop	r16
    3bec:	ff 90       	pop	r15
    3bee:	ef 90       	pop	r14
    3bf0:	df 90       	pop	r13
    3bf2:	cf 90       	pop	r12
    3bf4:	bf 90       	pop	r11
    3bf6:	af 90       	pop	r10
    3bf8:	9f 90       	pop	r9
    3bfa:	8f 90       	pop	r8
    3bfc:	7f 90       	pop	r7
    3bfe:	6f 90       	pop	r6
    3c00:	5f 90       	pop	r5
    3c02:	4f 90       	pop	r4
    3c04:	3f 90       	pop	r3
    3c06:	2f 90       	pop	r2
    3c08:	08 95       	ret

00003c0a <_ZN8HCIClass4pollEv.constprop.33>:
    3c0a:	60 e0       	ldi	r22, 0x00	; 0
    3c0c:	70 e0       	ldi	r23, 0x00	; 0
    3c0e:	cb 01       	movw	r24, r22
    3c10:	0c 94 13 19 	jmp	0x3226	; 0x3226 <_ZN8HCIClass4pollEm.constprop.34>

00003c14 <_ZN8HCIClass10sendAclPktEjhhPv.constprop.37>:
    3c14:	6f 92       	push	r6
    3c16:	7f 92       	push	r7
    3c18:	8f 92       	push	r8
    3c1a:	9f 92       	push	r9
    3c1c:	af 92       	push	r10
    3c1e:	bf 92       	push	r11
    3c20:	cf 92       	push	r12
    3c22:	df 92       	push	r13
    3c24:	ef 92       	push	r14
    3c26:	ff 92       	push	r15
    3c28:	0f 93       	push	r16
    3c2a:	1f 93       	push	r17
    3c2c:	cf 93       	push	r28
    3c2e:	df 93       	push	r29
    3c30:	cd b7       	in	r28, 0x3d	; 61
    3c32:	de b7       	in	r29, 0x3e	; 62
    3c34:	3c 01       	movw	r6, r24
    3c36:	e6 2e       	mov	r14, r22
    3c38:	f4 2e       	mov	r15, r20
    3c3a:	49 01       	movw	r8, r18
    3c3c:	ad b6       	in	r10, 0x3d	; 61
    3c3e:	be b6       	in	r11, 0x3e	; 62
    3c40:	90 91 4b 29 	lds	r25, 0x294B	; 0x80294b <HCI+0x110>
    3c44:	80 91 4a 29 	lds	r24, 0x294A	; 0x80294a <HCI+0x10f>
    3c48:	98 17       	cp	r25, r24
    3c4a:	18 f0       	brcs	.+6      	; 0x3c52 <_ZN8HCIClass10sendAclPktEjhhPv.constprop.37+0x3e>
    3c4c:	0e 94 05 1e 	call	0x3c0a	; 0x3c0a <_ZN8HCIClass4pollEv.constprop.33>
    3c50:	f7 cf       	rjmp	.-18     	; 0x3c40 <_ZN8HCIClass10sendAclPktEjhhPv.constprop.37+0x2c>
    3c52:	4f 2d       	mov	r20, r15
    3c54:	50 e0       	ldi	r21, 0x00	; 0
    3c56:	6a 01       	movw	r12, r20
    3c58:	89 e0       	ldi	r24, 0x09	; 9
    3c5a:	c8 0e       	add	r12, r24
    3c5c:	d1 1c       	adc	r13, r1
    3c5e:	ed b7       	in	r30, 0x3d	; 61
    3c60:	fe b7       	in	r31, 0x3e	; 62
    3c62:	ec 19       	sub	r30, r12
    3c64:	fd 09       	sbc	r31, r13
    3c66:	ed bf       	out	0x3d, r30	; 61
    3c68:	fe bf       	out	0x3e, r31	; 62
    3c6a:	0d b7       	in	r16, 0x3d	; 61
    3c6c:	1e b7       	in	r17, 0x3e	; 62
    3c6e:	0f 5f       	subi	r16, 0xFF	; 255
    3c70:	1f 4f       	sbci	r17, 0xFF	; 255
    3c72:	82 e0       	ldi	r24, 0x02	; 2
    3c74:	81 83       	std	Z+1, r24	; 0x01
    3c76:	f8 01       	movw	r30, r16
    3c78:	61 82       	std	Z+1, r6	; 0x01
    3c7a:	72 82       	std	Z+2, r7	; 0x02
    3c7c:	84 e0       	ldi	r24, 0x04	; 4
    3c7e:	8f 0d       	add	r24, r15
    3c80:	90 e0       	ldi	r25, 0x00	; 0
    3c82:	83 83       	std	Z+3, r24	; 0x03
    3c84:	94 83       	std	Z+4, r25	; 0x04
    3c86:	45 83       	std	Z+5, r20	; 0x05
    3c88:	56 83       	std	Z+6, r21	; 0x06
    3c8a:	6e 2d       	mov	r22, r14
    3c8c:	70 e0       	ldi	r23, 0x00	; 0
    3c8e:	67 83       	std	Z+7, r22	; 0x07
    3c90:	70 87       	std	Z+8, r23	; 0x08
    3c92:	8d b7       	in	r24, 0x3d	; 61
    3c94:	9e b7       	in	r25, 0x3e	; 62
    3c96:	0a 96       	adiw	r24, 0x0a	; 10
    3c98:	b4 01       	movw	r22, r8
    3c9a:	0e 94 95 2a 	call	0x552a	; 0x552a <memcpy>
    3c9e:	80 91 3d 28 	lds	r24, 0x283D	; 0x80283d <HCI+0x2>
    3ca2:	90 91 3e 28 	lds	r25, 0x283E	; 0x80283e <HCI+0x3>
    3ca6:	89 2b       	or	r24, r25
    3ca8:	39 f0       	breq	.+14     	; 0x3cb8 <_ZN8HCIClass10sendAclPktEjhhPv.constprop.37+0xa4>
    3caa:	69 e0       	ldi	r22, 0x09	; 9
    3cac:	6f 0d       	add	r22, r15
    3cae:	a8 01       	movw	r20, r16
    3cb0:	8a ef       	ldi	r24, 0xFA	; 250
    3cb2:	9c e9       	ldi	r25, 0x9C	; 156
    3cb4:	0e 94 e4 07 	call	0xfc8	; 0xfc8 <_ZN8HCIClass7dumpPktEPKchPh.constprop.95>
    3cb8:	80 91 4b 29 	lds	r24, 0x294B	; 0x80294b <HCI+0x110>
    3cbc:	8f 5f       	subi	r24, 0xFF	; 255
    3cbe:	80 93 4b 29 	sts	0x294B, r24	; 0x80294b <HCI+0x110>
    3cc2:	a6 01       	movw	r20, r12
    3cc4:	b8 01       	movw	r22, r16
    3cc6:	83 e3       	ldi	r24, 0x33	; 51
    3cc8:	98 e2       	ldi	r25, 0x28	; 40
    3cca:	0e 94 a5 0b 	call	0x174a	; 0x174a <_ZN21HCIUartTransportClass5writeEPKhj>
    3cce:	90 e0       	ldi	r25, 0x00	; 0
    3cd0:	80 e0       	ldi	r24, 0x00	; 0
    3cd2:	ad be       	out	0x3d, r10	; 61
    3cd4:	be be       	out	0x3e, r11	; 62
    3cd6:	df 91       	pop	r29
    3cd8:	cf 91       	pop	r28
    3cda:	1f 91       	pop	r17
    3cdc:	0f 91       	pop	r16
    3cde:	ff 90       	pop	r15
    3ce0:	ef 90       	pop	r14
    3ce2:	df 90       	pop	r13
    3ce4:	cf 90       	pop	r12
    3ce6:	bf 90       	pop	r11
    3ce8:	af 90       	pop	r10
    3cea:	9f 90       	pop	r9
    3cec:	8f 90       	pop	r8
    3cee:	7f 90       	pop	r7
    3cf0:	6f 90       	pop	r6
    3cf2:	08 95       	ret

00003cf4 <_ZN8ATTClass9sendErrorEjhjh.constprop.47>:
    3cf4:	cf 93       	push	r28
    3cf6:	df 93       	push	r29
    3cf8:	cd b7       	in	r28, 0x3d	; 61
    3cfa:	de b7       	in	r29, 0x3e	; 62
    3cfc:	25 97       	sbiw	r28, 0x05	; 5
    3cfe:	cd bf       	out	0x3d, r28	; 61
    3d00:	de bf       	out	0x3e, r29	; 62
    3d02:	31 e0       	ldi	r19, 0x01	; 1
    3d04:	39 83       	std	Y+1, r19	; 0x01
    3d06:	6a 83       	std	Y+2, r22	; 0x02
    3d08:	4b 83       	std	Y+3, r20	; 0x03
    3d0a:	5c 83       	std	Y+4, r21	; 0x04
    3d0c:	2d 83       	std	Y+5, r18	; 0x05
    3d0e:	9e 01       	movw	r18, r28
    3d10:	2f 5f       	subi	r18, 0xFF	; 255
    3d12:	3f 4f       	sbci	r19, 0xFF	; 255
    3d14:	45 e0       	ldi	r20, 0x05	; 5
    3d16:	64 e0       	ldi	r22, 0x04	; 4
    3d18:	0e 94 0a 1e 	call	0x3c14	; 0x3c14 <_ZN8HCIClass10sendAclPktEjhhPv.constprop.37>
    3d1c:	25 96       	adiw	r28, 0x05	; 5
    3d1e:	cd bf       	out	0x3d, r28	; 61
    3d20:	de bf       	out	0x3e, r29	; 62
    3d22:	df 91       	pop	r29
    3d24:	cf 91       	pop	r28
    3d26:	08 95       	ret

00003d28 <_ZN14BLELocalDevice9availableEv>:
    3d28:	cf 92       	push	r12
    3d2a:	df 92       	push	r13
    3d2c:	ef 92       	push	r14
    3d2e:	ff 92       	push	r15
    3d30:	0f 93       	push	r16
    3d32:	1f 93       	push	r17
    3d34:	cf 93       	push	r28
    3d36:	df 93       	push	r29
    3d38:	cd b7       	in	r28, 0x3d	; 61
    3d3a:	de b7       	in	r29, 0x3e	; 62
    3d3c:	ca 54       	subi	r28, 0x4A	; 74
    3d3e:	d1 09       	sbc	r29, r1
    3d40:	cd bf       	out	0x3d, r28	; 61
    3d42:	de bf       	out	0x3e, r29	; 62
    3d44:	8c 01       	movw	r16, r24
    3d46:	0e 94 05 1e 	call	0x3c0a	; 0x3c0a <_ZN8HCIClass4pollEv.constprop.33>
    3d4a:	f1 2c       	mov	r15, r1
    3d4c:	e1 2c       	mov	r14, r1
    3d4e:	80 91 40 2b 	lds	r24, 0x2B40	; 0x802b40 <GAP+0x17>
    3d52:	90 91 41 2b 	lds	r25, 0x2B41	; 0x802b41 <GAP+0x18>
    3d56:	e8 16       	cp	r14, r24
    3d58:	f9 06       	cpc	r15, r25
    3d5a:	08 f0       	brcs	.+2      	; 0x3d5e <_ZN14BLELocalDevice9availableEv+0x36>
    3d5c:	46 c0       	rjmp	.+140    	; 0x3dea <_ZN14BLELocalDevice9availableEv+0xc2>
    3d5e:	e0 91 42 2b 	lds	r30, 0x2B42	; 0x802b42 <GAP+0x19>
    3d62:	f0 91 43 2b 	lds	r31, 0x2B43	; 0x802b43 <GAP+0x1a>
    3d66:	90 e0       	ldi	r25, 0x00	; 0
    3d68:	80 e0       	ldi	r24, 0x00	; 0
    3d6a:	e8 16       	cp	r14, r24
    3d6c:	f9 06       	cpc	r15, r25
    3d6e:	29 f0       	breq	.+10     	; 0x3d7a <_ZN14BLELocalDevice9availableEv+0x52>
    3d70:	02 80       	ldd	r0, Z+2	; 0x02
    3d72:	f3 81       	ldd	r31, Z+3	; 0x03
    3d74:	e0 2d       	mov	r30, r0
    3d76:	01 96       	adiw	r24, 0x01	; 1
    3d78:	f8 cf       	rjmp	.-16     	; 0x3d6a <_ZN14BLELocalDevice9availableEv+0x42>
    3d7a:	c0 80       	ld	r12, Z
    3d7c:	d1 80       	ldd	r13, Z+1	; 0x01
    3d7e:	d6 01       	movw	r26, r12
    3d80:	19 96       	adiw	r26, 0x09	; 9
    3d82:	8c 91       	ld	r24, X
    3d84:	88 71       	andi	r24, 0x18	; 24
    3d86:	69 f1       	breq	.+90     	; 0x3de2 <_ZN14BLELocalDevice9availableEv+0xba>
    3d88:	b6 01       	movw	r22, r12
    3d8a:	ce 01       	movw	r24, r28
    3d8c:	01 96       	adiw	r24, 0x01	; 1
    3d8e:	0e 94 e4 01 	call	0x3c8	; 0x3c8 <_ZN9BLEDeviceC1ERKS_>
    3d92:	c7 01       	movw	r24, r14
    3d94:	0e 94 70 03 	call	0x6e0	; 0x6e0 <_ZN13BLELinkedListIP9BLEDeviceE6removeEj.constprop.99>
    3d98:	c1 14       	cp	r12, r1
    3d9a:	d1 04       	cpc	r13, r1
    3d9c:	41 f0       	breq	.+16     	; 0x3dae <_ZN14BLELocalDevice9availableEv+0x86>
    3d9e:	d6 01       	movw	r26, r12
    3da0:	ed 91       	ld	r30, X+
    3da2:	fc 91       	ld	r31, X
    3da4:	02 80       	ldd	r0, Z+2	; 0x02
    3da6:	f3 81       	ldd	r31, Z+3	; 0x03
    3da8:	e0 2d       	mov	r30, r0
    3daa:	c6 01       	movw	r24, r12
    3dac:	09 95       	icall
    3dae:	ce 01       	movw	r24, r28
    3db0:	01 96       	adiw	r24, 0x01	; 1
    3db2:	0e 94 67 0a 	call	0x14ce	; 0x14ce <_ZN8GAPClass17matchesScanFilterERK9BLEDevice.constprop.102>
    3db6:	88 23       	and	r24, r24
    3db8:	a1 f0       	breq	.+40     	; 0x3de2 <_ZN14BLELocalDevice9availableEv+0xba>
    3dba:	be 01       	movw	r22, r28
    3dbc:	6f 5f       	subi	r22, 0xFF	; 255
    3dbe:	7f 4f       	sbci	r23, 0xFF	; 255
    3dc0:	c8 01       	movw	r24, r16
    3dc2:	0e 94 e4 01 	call	0x3c8	; 0x3c8 <_ZN9BLEDeviceC1ERKS_>
    3dc6:	c8 01       	movw	r24, r16
    3dc8:	c6 5b       	subi	r28, 0xB6	; 182
    3dca:	df 4f       	sbci	r29, 0xFF	; 255
    3dcc:	cd bf       	out	0x3d, r28	; 61
    3dce:	de bf       	out	0x3e, r29	; 62
    3dd0:	df 91       	pop	r29
    3dd2:	cf 91       	pop	r28
    3dd4:	1f 91       	pop	r17
    3dd6:	0f 91       	pop	r16
    3dd8:	ff 90       	pop	r15
    3dda:	ef 90       	pop	r14
    3ddc:	df 90       	pop	r13
    3dde:	cf 90       	pop	r12
    3de0:	08 95       	ret
    3de2:	bf ef       	ldi	r27, 0xFF	; 255
    3de4:	eb 1a       	sub	r14, r27
    3de6:	fb 0a       	sbc	r15, r27
    3de8:	b2 cf       	rjmp	.-156    	; 0x3d4e <_ZN14BLELocalDevice9availableEv+0x26>
    3dea:	8a ec       	ldi	r24, 0xCA	; 202
    3dec:	9a e9       	ldi	r25, 0x9A	; 154
    3dee:	f8 01       	movw	r30, r16
    3df0:	80 83       	st	Z, r24
    3df2:	91 83       	std	Z+1, r25	; 0x01
    3df4:	11 86       	std	Z+9, r1	; 0x09
    3df6:	12 86       	std	Z+10, r1	; 0x0a
    3df8:	8f e7       	ldi	r24, 0x7F	; 127
    3dfa:	e7 5b       	subi	r30, 0xB7	; 183
    3dfc:	ff 4f       	sbci	r31, 0xFF	; 255
    3dfe:	80 83       	st	Z, r24
    3e00:	86 e0       	ldi	r24, 0x06	; 6
    3e02:	e6 54       	subi	r30, 0x46	; 70
    3e04:	f1 09       	sbc	r31, r1
    3e06:	df 01       	movw	r26, r30
    3e08:	1d 92       	st	X+, r1
    3e0a:	8a 95       	dec	r24
    3e0c:	e9 f7       	brne	.-6      	; 0x3e08 <_ZN14BLELocalDevice9availableEv+0xe0>
    3e0e:	db cf       	rjmp	.-74     	; 0x3dc6 <_ZN14BLELocalDevice9availableEv+0x9e>

00003e10 <_ZNK9BLEDevice9connectedEv>:
    3e10:	cf 93       	push	r28
    3e12:	df 93       	push	r29
    3e14:	ec 01       	movw	r28, r24
    3e16:	0e 94 05 1e 	call	0x3c0a	; 0x3c0a <_ZN8HCIClass4pollEv.constprop.33>
    3e1a:	e8 81       	ld	r30, Y
    3e1c:	f9 81       	ldd	r31, Y+1	; 0x01
    3e1e:	00 88       	ldd	r0, Z+16	; 0x10
    3e20:	f1 89       	ldd	r31, Z+17	; 0x11
    3e22:	e0 2d       	mov	r30, r0
    3e24:	ce 01       	movw	r24, r28
    3e26:	09 95       	icall
    3e28:	28 2f       	mov	r18, r24
    3e2a:	88 23       	and	r24, r24
    3e2c:	51 f0       	breq	.+20     	; 0x3e42 <_ZNK9BLEDevice9connectedEv+0x32>
    3e2e:	be 01       	movw	r22, r28
    3e30:	6d 5f       	subi	r22, 0xFD	; 253
    3e32:	7f 4f       	sbci	r23, 0xFF	; 255
    3e34:	8a 81       	ldd	r24, Y+2	; 0x02
    3e36:	0e 94 1f 05 	call	0xa3e	; 0xa3e <_ZNK8ATTClass16connectionHandleEhPKh.constprop.84>
    3e3a:	21 e0       	ldi	r18, 0x01	; 1
    3e3c:	01 96       	adiw	r24, 0x01	; 1
    3e3e:	09 f4       	brne	.+2      	; 0x3e42 <_ZNK9BLEDevice9connectedEv+0x32>
    3e40:	20 e0       	ldi	r18, 0x00	; 0
    3e42:	82 2f       	mov	r24, r18
    3e44:	df 91       	pop	r29
    3e46:	cf 91       	pop	r28
    3e48:	08 95       	ret

00003e4a <_ZN9BLEDevice4pollEv>:
    3e4a:	0c 94 05 1e 	jmp	0x3c0a	; 0x3c0a <_ZN8HCIClass4pollEv.constprop.33>

00003e4e <_ZN9BLEDevice4pollEm>:
    3e4e:	cb 01       	movw	r24, r22
    3e50:	ba 01       	movw	r22, r20
    3e52:	0c 94 13 19 	jmp	0x3226	; 0x3226 <_ZN8HCIClass4pollEm.constprop.34>

00003e56 <_ZN9BLEDevice4rssiEv>:
    3e56:	0f 93       	push	r16
    3e58:	1f 93       	push	r17
    3e5a:	cf 93       	push	r28
    3e5c:	df 93       	push	r29
    3e5e:	00 d0       	rcall	.+0      	; 0x3e60 <_ZN9BLEDevice4rssiEv+0xa>
    3e60:	cd b7       	in	r28, 0x3d	; 61
    3e62:	de b7       	in	r29, 0x3e	; 62
    3e64:	8c 01       	movw	r16, r24
    3e66:	bc 01       	movw	r22, r24
    3e68:	6d 5f       	subi	r22, 0xFD	; 253
    3e6a:	7f 4f       	sbci	r23, 0xFF	; 255
    3e6c:	fc 01       	movw	r30, r24
    3e6e:	82 81       	ldd	r24, Z+2	; 0x02
    3e70:	0e 94 1f 05 	call	0xa3e	; 0xa3e <_ZNK8ATTClass16connectionHandleEhPKh.constprop.84>
    3e74:	8f 3f       	cpi	r24, 0xFF	; 255
    3e76:	98 07       	cpc	r25, r24
    3e78:	11 f1       	breq	.+68     	; 0x3ebe <_ZN9BLEDevice4rssiEv+0x68>
    3e7a:	89 83       	std	Y+1, r24	; 0x01
    3e7c:	9a 83       	std	Y+2, r25	; 0x02
    3e7e:	ae 01       	movw	r20, r28
    3e80:	4f 5f       	subi	r20, 0xFF	; 255
    3e82:	5f 4f       	sbci	r21, 0xFF	; 255
    3e84:	62 e0       	ldi	r22, 0x02	; 2
    3e86:	85 e0       	ldi	r24, 0x05	; 5
    3e88:	94 e1       	ldi	r25, 0x14	; 20
    3e8a:	0e 94 d3 0b 	call	0x17a6	; 0x17a6 <_ZN8HCIClass11sendCommandEjhPv.constprop.39>
    3e8e:	89 2b       	or	r24, r25
    3e90:	d9 f4       	brne	.+54     	; 0x3ec8 <_ZN9BLEDevice4rssiEv+0x72>
    3e92:	e0 91 48 29 	lds	r30, 0x2948	; 0x802948 <HCI+0x10d>
    3e96:	f0 91 49 29 	lds	r31, 0x2949	; 0x802949 <HCI+0x10e>
    3e9a:	20 81       	ld	r18, Z
    3e9c:	31 81       	ldd	r19, Z+1	; 0x01
    3e9e:	89 81       	ldd	r24, Y+1	; 0x01
    3ea0:	9a 81       	ldd	r25, Y+2	; 0x02
    3ea2:	28 17       	cp	r18, r24
    3ea4:	39 07       	cpc	r19, r25
    3ea6:	81 f4       	brne	.+32     	; 0x3ec8 <_ZN9BLEDevice4rssiEv+0x72>
    3ea8:	82 81       	ldd	r24, Z+2	; 0x02
    3eaa:	08 2e       	mov	r0, r24
    3eac:	00 0c       	add	r0, r0
    3eae:	99 0b       	sbc	r25, r25
    3eb0:	0f 90       	pop	r0
    3eb2:	0f 90       	pop	r0
    3eb4:	df 91       	pop	r29
    3eb6:	cf 91       	pop	r28
    3eb8:	1f 91       	pop	r17
    3eba:	0f 91       	pop	r16
    3ebc:	08 95       	ret
    3ebe:	f8 01       	movw	r30, r16
    3ec0:	e7 5b       	subi	r30, 0xB7	; 183
    3ec2:	ff 4f       	sbci	r31, 0xFF	; 255
    3ec4:	80 81       	ld	r24, Z
    3ec6:	f1 cf       	rjmp	.-30     	; 0x3eaa <_ZN9BLEDevice4rssiEv+0x54>
    3ec8:	8f e7       	ldi	r24, 0x7F	; 127
    3eca:	90 e0       	ldi	r25, 0x00	; 0
    3ecc:	f1 cf       	rjmp	.-30     	; 0x3eb0 <_ZN9BLEDevice4rssiEv+0x5a>

00003ece <_ZN9BLEDevice10disconnectEv>:
    3ece:	cf 92       	push	r12
    3ed0:	df 92       	push	r13
    3ed2:	ef 92       	push	r14
    3ed4:	ff 92       	push	r15
    3ed6:	0f 93       	push	r16
    3ed8:	1f 93       	push	r17
    3eda:	cf 93       	push	r28
    3edc:	df 93       	push	r29
    3ede:	00 d0       	rcall	.+0      	; 0x3ee0 <_ZN9BLEDevice10disconnectEv+0x12>
    3ee0:	1f 92       	push	r1
    3ee2:	cd b7       	in	r28, 0x3d	; 61
    3ee4:	de b7       	in	r29, 0x3e	; 62
    3ee6:	bc 01       	movw	r22, r24
    3ee8:	6d 5f       	subi	r22, 0xFD	; 253
    3eea:	7f 4f       	sbci	r23, 0xFF	; 255
    3eec:	fc 01       	movw	r30, r24
    3eee:	82 81       	ldd	r24, Z+2	; 0x02
    3ef0:	0e 94 1f 05 	call	0xa3e	; 0xa3e <_ZNK8ATTClass16connectionHandleEhPKh.constprop.84>
    3ef4:	8c 01       	movw	r16, r24
    3ef6:	01 96       	adiw	r24, 0x01	; 1
    3ef8:	69 f4       	brne	.+26     	; 0x3f14 <_ZN9BLEDevice10disconnectEv+0x46>
    3efa:	80 e0       	ldi	r24, 0x00	; 0
    3efc:	23 96       	adiw	r28, 0x03	; 3
    3efe:	cd bf       	out	0x3d, r28	; 61
    3f00:	de bf       	out	0x3e, r29	; 62
    3f02:	df 91       	pop	r29
    3f04:	cf 91       	pop	r28
    3f06:	1f 91       	pop	r17
    3f08:	0f 91       	pop	r16
    3f0a:	ff 90       	pop	r15
    3f0c:	ef 90       	pop	r14
    3f0e:	df 90       	pop	r13
    3f10:	cf 90       	pop	r12
    3f12:	08 95       	ret
    3f14:	83 e1       	ldi	r24, 0x13	; 19
    3f16:	8b 83       	std	Y+3, r24	; 0x03
    3f18:	09 83       	std	Y+1, r16	; 0x01
    3f1a:	1a 83       	std	Y+2, r17	; 0x02
    3f1c:	ae 01       	movw	r20, r28
    3f1e:	4f 5f       	subi	r20, 0xFF	; 255
    3f20:	5f 4f       	sbci	r21, 0xFF	; 255
    3f22:	63 e0       	ldi	r22, 0x03	; 3
    3f24:	86 e0       	ldi	r24, 0x06	; 6
    3f26:	94 e0       	ldi	r25, 0x04	; 4
    3f28:	0e 94 d3 0b 	call	0x17a6	; 0x17a6 <_ZN8HCIClass11sendCommandEjhPv.constprop.39>
    3f2c:	d1 2c       	mov	r13, r1
    3f2e:	c1 2c       	mov	r12, r1
    3f30:	f1 2c       	mov	r15, r1
    3f32:	e1 2c       	mov	r14, r1
    3f34:	c6 01       	movw	r24, r12
    3f36:	b0 e0       	ldi	r27, 0x00	; 0
    3f38:	a0 e0       	ldi	r26, 0x00	; 0
    3f3a:	40 91 ea 2a 	lds	r20, 0x2AEA	; 0x802aea <ATT+0x4>
    3f3e:	50 91 eb 2a 	lds	r21, 0x2AEB	; 0x802aeb <ATT+0x5>
    3f42:	60 91 ec 2a 	lds	r22, 0x2AEC	; 0x802aec <ATT+0x6>
    3f46:	70 91 ed 2a 	lds	r23, 0x2AED	; 0x802aed <ATT+0x7>
    3f4a:	84 17       	cp	r24, r20
    3f4c:	95 07       	cpc	r25, r21
    3f4e:	a6 07       	cpc	r26, r22
    3f50:	b7 07       	cpc	r27, r23
    3f52:	98 f6       	brcc	.-90     	; 0x3efa <_ZN9BLEDevice10disconnectEv+0x2c>
    3f54:	8f ef       	ldi	r24, 0xFF	; 255
    3f56:	e8 1a       	sub	r14, r24
    3f58:	f8 0a       	sbc	r15, r24
    3f5a:	e0 e4       	ldi	r30, 0x40	; 64
    3f5c:	ee 16       	cp	r14, r30
    3f5e:	f1 04       	cpc	r15, r1
    3f60:	19 f4       	brne	.+6      	; 0x3f68 <_ZN9BLEDevice10disconnectEv+0x9a>
    3f62:	ff ef       	ldi	r31, 0xFF	; 255
    3f64:	cf 1a       	sub	r12, r31
    3f66:	df 0a       	sbc	r13, r31
    3f68:	0e 94 05 1e 	call	0x3c0a	; 0x3c0a <_ZN8HCIClass4pollEv.constprop.33>
    3f6c:	0e 94 05 1e 	call	0x3c0a	; 0x3c0a <_ZN8HCIClass4pollEv.constprop.33>
    3f70:	80 91 ee 2a 	lds	r24, 0x2AEE	; 0x802aee <ATT+0x8>
    3f74:	90 91 ef 2a 	lds	r25, 0x2AEF	; 0x802aef <ATT+0x9>
    3f78:	80 17       	cp	r24, r16
    3f7a:	91 07       	cpc	r25, r17
    3f7c:	d9 f2       	breq	.-74     	; 0x3f34 <_ZN9BLEDevice10disconnectEv+0x66>
    3f7e:	80 91 fc 2a 	lds	r24, 0x2AFC	; 0x802afc <ATT+0x16>
    3f82:	90 91 fd 2a 	lds	r25, 0x2AFD	; 0x802afd <ATT+0x17>
    3f86:	08 17       	cp	r16, r24
    3f88:	19 07       	cpc	r17, r25
    3f8a:	a1 f2       	breq	.-88     	; 0x3f34 <_ZN9BLEDevice10disconnectEv+0x66>
    3f8c:	80 91 0a 2b 	lds	r24, 0x2B0A	; 0x802b0a <ATT+0x24>
    3f90:	90 91 0b 2b 	lds	r25, 0x2B0B	; 0x802b0b <ATT+0x25>
    3f94:	08 17       	cp	r16, r24
    3f96:	19 07       	cpc	r17, r25
    3f98:	69 f2       	breq	.-102    	; 0x3f34 <_ZN9BLEDevice10disconnectEv+0x66>
    3f9a:	81 e0       	ldi	r24, 0x01	; 1
    3f9c:	af cf       	rjmp	.-162    	; 0x3efc <_ZN9BLEDevice10disconnectEv+0x2e>

00003f9e <_ZN14BLELocalDevice5beginEv>:
    3f9e:	0f 93       	push	r16
    3fa0:	1f 93       	push	r17
    3fa2:	cf 93       	push	r28
    3fa4:	df 93       	push	r29
    3fa6:	cd b7       	in	r28, 0x3d	; 61
    3fa8:	de b7       	in	r29, 0x3e	; 62
    3faa:	a2 97       	sbiw	r28, 0x22	; 34
    3fac:	cd bf       	out	0x3d, r28	; 61
    3fae:	de bf       	out	0x3e, r29	; 62
    3fb0:	8d e0       	ldi	r24, 0x0D	; 13
    3fb2:	9d e9       	ldi	r25, 0x9D	; 157
    3fb4:	0e 94 9f 0b 	call	0x173e	; 0x173e <_ZN3sio7PrintlnEPKc>
    3fb8:	84 e0       	ldi	r24, 0x04	; 4
    3fba:	80 93 a1 04 	sts	0x04A1, r24	; 0x8004a1 <__TEXT_REGION_LENGTH__+0x7004a1>
    3fbe:	90 e8       	ldi	r25, 0x80	; 128
    3fc0:	90 93 01 04 	sts	0x0401, r25	; 0x800401 <__TEXT_REGION_LENGTH__+0x700401>
    3fc4:	80 93 a6 04 	sts	0x04A6, r24	; 0x8004a6 <__TEXT_REGION_LENGTH__+0x7004a6>
    3fc8:	90 93 05 04 	sts	0x0405, r25	; 0x800405 <__TEXT_REGION_LENGTH__+0x700405>
    3fcc:	2f ef       	ldi	r18, 0xFF	; 255
    3fce:	31 ee       	ldi	r19, 0xE1	; 225
    3fd0:	44 e0       	ldi	r20, 0x04	; 4
    3fd2:	21 50       	subi	r18, 0x01	; 1
    3fd4:	30 40       	sbci	r19, 0x00	; 0
    3fd6:	40 40       	sbci	r20, 0x00	; 0
    3fd8:	e1 f7       	brne	.-8      	; 0x3fd2 <_ZN14BLELocalDevice5beginEv+0x34>
    3fda:	00 c0       	rjmp	.+0      	; 0x3fdc <_ZN14BLELocalDevice5beginEv+0x3e>
    3fdc:	00 00       	nop
    3fde:	90 93 06 04 	sts	0x0406, r25	; 0x800406 <__TEXT_REGION_LENGTH__+0x700406>
    3fe2:	9f ef       	ldi	r25, 0xFF	; 255
    3fe4:	24 e3       	ldi	r18, 0x34	; 52
    3fe6:	3c e0       	ldi	r19, 0x0C	; 12
    3fe8:	91 50       	subi	r25, 0x01	; 1
    3fea:	20 40       	sbci	r18, 0x00	; 0
    3fec:	30 40       	sbci	r19, 0x00	; 0
    3fee:	e1 f7       	brne	.-8      	; 0x3fe8 <_ZN14BLELocalDevice5beginEv+0x4a>
    3ff0:	00 c0       	rjmp	.+0      	; 0x3ff2 <_ZN14BLELocalDevice5beginEv+0x54>
    3ff2:	00 00       	nop
    3ff4:	4f ef       	ldi	r20, 0xFF	; 255
    3ff6:	94 e3       	ldi	r25, 0x34	; 52
    3ff8:	2c e0       	ldi	r18, 0x0C	; 12
    3ffa:	41 50       	subi	r20, 0x01	; 1
    3ffc:	90 40       	sbci	r25, 0x00	; 0
    3ffe:	20 40       	sbci	r18, 0x00	; 0
    4000:	e1 f7       	brne	.-8      	; 0x3ffa <_ZN14BLELocalDevice5beginEv+0x5c>
    4002:	00 c0       	rjmp	.+0      	; 0x4004 <__RODATA_PM_OFFSET__+0x4>
    4004:	00 00       	nop
    4006:	3f ef       	ldi	r19, 0xFF	; 255
    4008:	44 e3       	ldi	r20, 0x34	; 52
    400a:	9c e0       	ldi	r25, 0x0C	; 12
    400c:	31 50       	subi	r19, 0x01	; 1
    400e:	40 40       	sbci	r20, 0x00	; 0
    4010:	90 40       	sbci	r25, 0x00	; 0
    4012:	e1 f7       	brne	.-8      	; 0x400c <__RODATA_PM_OFFSET__+0xc>
    4014:	00 c0       	rjmp	.+0      	; 0x4016 <__RODATA_PM_OFFSET__+0x16>
    4016:	00 00       	nop
    4018:	80 93 a5 04 	sts	0x04A5, r24	; 0x8004a5 <__TEXT_REGION_LENGTH__+0x7004a5>
    401c:	80 e4       	ldi	r24, 0x40	; 64
    401e:	80 93 01 04 	sts	0x0401, r24	; 0x800401 <__TEXT_REGION_LENGTH__+0x700401>
    4022:	80 93 05 04 	sts	0x0405, r24	; 0x800405 <__TEXT_REGION_LENGTH__+0x700405>
    4026:	88 e0       	ldi	r24, 0x08	; 8
    4028:	80 93 a2 04 	sts	0x04A2, r24	; 0x8004a2 <__TEXT_REGION_LENGTH__+0x7004a2>
    402c:	8e e1       	ldi	r24, 0x1E	; 30
    402e:	9d e9       	ldi	r25, 0x9D	; 157
    4030:	0e 94 9f 0b 	call	0x173e	; 0x173e <_ZN3sio7PrintlnEPKc>
    4034:	10 92 3f 28 	sts	0x283F, r1	; 0x80283f <HCI+0x4>
    4038:	10 92 40 28 	sts	0x2840, r1	; 0x802840 <HCI+0x5>
    403c:	87 e3       	ldi	r24, 0x37	; 55
    403e:	9d e9       	ldi	r25, 0x9D	; 157
    4040:	0e 94 9f 0b 	call	0x173e	; 0x173e <_ZN3sio7PrintlnEPKc>
    4044:	83 e3       	ldi	r24, 0x33	; 51
    4046:	98 e2       	ldi	r25, 0x28	; 40
    4048:	0e 94 c4 01 	call	0x388	; 0x388 <_ZN21HCIUartTransportClass5beginEv>
    404c:	8c 01       	movw	r16, r24
    404e:	89 2b       	or	r24, r25
    4050:	79 f4       	brne	.+30     	; 0x4070 <__RODATA_PM_OFFSET__+0x70>
    4052:	89 e5       	ldi	r24, 0x59	; 89
    4054:	9d e9       	ldi	r25, 0x9D	; 157
    4056:	0e 94 9f 0b 	call	0x173e	; 0x173e <_ZN3sio7PrintlnEPKc>
    405a:	0e 94 e1 03 	call	0x7c2	; 0x7c2 <_ZN14BLELocalDevice3endEv.constprop.22>
    405e:	c8 01       	movw	r24, r16
    4060:	a2 96       	adiw	r28, 0x22	; 34
    4062:	cd bf       	out	0x3d, r28	; 61
    4064:	de bf       	out	0x3e, r29	; 62
    4066:	df 91       	pop	r29
    4068:	cf 91       	pop	r28
    406a:	1f 91       	pop	r17
    406c:	0f 91       	pop	r16
    406e:	08 95       	ret
    4070:	8b e7       	ldi	r24, 0x7B	; 123
    4072:	9d e9       	ldi	r25, 0x9D	; 157
    4074:	0e 94 9f 0b 	call	0x173e	; 0x173e <_ZN3sio7PrintlnEPKc>
    4078:	2f ef       	ldi	r18, 0xFF	; 255
    407a:	31 ee       	ldi	r19, 0xE1	; 225
    407c:	44 e0       	ldi	r20, 0x04	; 4
    407e:	21 50       	subi	r18, 0x01	; 1
    4080:	30 40       	sbci	r19, 0x00	; 0
    4082:	40 40       	sbci	r20, 0x00	; 0
    4084:	e1 f7       	brne	.-8      	; 0x407e <__RODATA_PM_OFFSET__+0x7e>
    4086:	00 c0       	rjmp	.+0      	; 0x4088 <__RODATA_PM_OFFSET__+0x88>
    4088:	00 00       	nop
    408a:	83 e9       	ldi	r24, 0x93	; 147
    408c:	9d e9       	ldi	r25, 0x9D	; 157
    408e:	0e 94 9f 0b 	call	0x173e	; 0x173e <_ZN3sio7PrintlnEPKc>
    4092:	50 e0       	ldi	r21, 0x00	; 0
    4094:	40 e0       	ldi	r20, 0x00	; 0
    4096:	60 e0       	ldi	r22, 0x00	; 0
    4098:	83 e0       	ldi	r24, 0x03	; 3
    409a:	9c e0       	ldi	r25, 0x0C	; 12
    409c:	0e 94 d3 0b 	call	0x17a6	; 0x17a6 <_ZN8HCIClass11sendCommandEjhPv.constprop.39>
    40a0:	00 97       	sbiw	r24, 0x00	; 0
    40a2:	f9 f0       	breq	.+62     	; 0x40e2 <__RODATA_PM_OFFSET__+0xe2>
    40a4:	9f 93       	push	r25
    40a6:	8f 93       	push	r24
    40a8:	8e ea       	ldi	r24, 0xAE	; 174
    40aa:	9d e9       	ldi	r25, 0x9D	; 157
    40ac:	9f 93       	push	r25
    40ae:	8f 93       	push	r24
    40b0:	8e 01       	movw	r16, r28
    40b2:	0f 5f       	subi	r16, 0xFF	; 255
    40b4:	1f 4f       	sbci	r17, 0xFF	; 255
    40b6:	1f 93       	push	r17
    40b8:	0f 93       	push	r16
    40ba:	0e 94 b5 2a 	call	0x556a	; 0x556a <sprintf>
    40be:	c8 01       	movw	r24, r16
    40c0:	0e 94 9f 0b 	call	0x173e	; 0x173e <_ZN3sio7PrintlnEPKc>
    40c4:	8c eb       	ldi	r24, 0xBC	; 188
    40c6:	9d e9       	ldi	r25, 0x9D	; 157
    40c8:	0e 94 9f 0b 	call	0x173e	; 0x173e <_ZN3sio7PrintlnEPKc>
    40cc:	0e 94 e1 03 	call	0x7c2	; 0x7c2 <_ZN14BLELocalDevice3endEv.constprop.22>
    40d0:	0f 90       	pop	r0
    40d2:	0f 90       	pop	r0
    40d4:	0f 90       	pop	r0
    40d6:	0f 90       	pop	r0
    40d8:	0f 90       	pop	r0
    40da:	0f 90       	pop	r0
    40dc:	10 e0       	ldi	r17, 0x00	; 0
    40de:	00 e0       	ldi	r16, 0x00	; 0
    40e0:	be cf       	rjmp	.-132    	; 0x405e <__RODATA_PM_OFFSET__+0x5e>
    40e2:	8e ed       	ldi	r24, 0xDE	; 222
    40e4:	9d e9       	ldi	r25, 0x9D	; 157
    40e6:	0e 94 9f 0b 	call	0x173e	; 0x173e <_ZN3sio7PrintlnEPKc>
    40ea:	50 e0       	ldi	r21, 0x00	; 0
    40ec:	40 e0       	ldi	r20, 0x00	; 0
    40ee:	60 e0       	ldi	r22, 0x00	; 0
    40f0:	81 e0       	ldi	r24, 0x01	; 1
    40f2:	90 e1       	ldi	r25, 0x10	; 16
    40f4:	0e 94 d3 0b 	call	0x17a6	; 0x17a6 <_ZN8HCIClass11sendCommandEjhPv.constprop.39>
    40f8:	89 2b       	or	r24, r25
    40fa:	19 f0       	breq	.+6      	; 0x4102 <__RODATA_PM_OFFSET__+0x102>
    40fc:	0e 94 e1 03 	call	0x7c2	; 0x7c2 <_ZN14BLELocalDevice3endEv.constprop.22>
    4100:	ed cf       	rjmp	.-38     	; 0x40dc <__RODATA_PM_OFFSET__+0xdc>
    4102:	8f ef       	ldi	r24, 0xFF	; 255
    4104:	89 83       	std	Y+1, r24	; 0x01
    4106:	8a 83       	std	Y+2, r24	; 0x02
    4108:	8b 83       	std	Y+3, r24	; 0x03
    410a:	8c 83       	std	Y+4, r24	; 0x04
    410c:	8d 83       	std	Y+5, r24	; 0x05
    410e:	8e 83       	std	Y+6, r24	; 0x06
    4110:	8f 83       	std	Y+7, r24	; 0x07
    4112:	8f e3       	ldi	r24, 0x3F	; 63
    4114:	88 87       	std	Y+8, r24	; 0x08
    4116:	ae 01       	movw	r20, r28
    4118:	4f 5f       	subi	r20, 0xFF	; 255
    411a:	5f 4f       	sbci	r21, 0xFF	; 255
    411c:	68 e0       	ldi	r22, 0x08	; 8
    411e:	81 e0       	ldi	r24, 0x01	; 1
    4120:	9c e0       	ldi	r25, 0x0C	; 12
    4122:	0e 94 d3 0b 	call	0x17a6	; 0x17a6 <_ZN8HCIClass11sendCommandEjhPv.constprop.39>
    4126:	89 2b       	or	r24, r25
    4128:	49 f7       	brne	.-46     	; 0x40fc <__RODATA_PM_OFFSET__+0xfc>
    412a:	50 e0       	ldi	r21, 0x00	; 0
    412c:	40 e0       	ldi	r20, 0x00	; 0
    412e:	60 e0       	ldi	r22, 0x00	; 0
    4130:	82 e0       	ldi	r24, 0x02	; 2
    4132:	90 e2       	ldi	r25, 0x20	; 32
    4134:	0e 94 d3 0b 	call	0x17a6	; 0x17a6 <_ZN8HCIClass11sendCommandEjhPv.constprop.39>
    4138:	89 2b       	or	r24, r25
    413a:	01 f7       	brne	.-64     	; 0x40fc <__RODATA_PM_OFFSET__+0xfc>
    413c:	e0 91 48 29 	lds	r30, 0x2948	; 0x802948 <HCI+0x10d>
    4140:	f0 91 49 29 	lds	r31, 0x2949	; 0x802949 <HCI+0x10e>
    4144:	82 81       	ldd	r24, Z+2	; 0x02
    4146:	80 93 4a 29 	sts	0x294A, r24	; 0x80294a <HCI+0x10f>
    414a:	47 e0       	ldi	r20, 0x07	; 7
    414c:	50 e0       	ldi	r21, 0x00	; 0
    414e:	66 ef       	ldi	r22, 0xF6	; 246
    4150:	7d e9       	ldi	r23, 0x9D	; 157
    4152:	81 e8       	ldi	r24, 0x81	; 129
    4154:	9b e2       	ldi	r25, 0x2B	; 43
    4156:	0e 94 14 0d 	call	0x1a28	; 0x1a28 <_ZN22BLELocalCharacteristic10writeValueEPKhi>
    415a:	19 a2       	std	Y+33, r1	; 0x21
    415c:	1a a2       	std	Y+34, r1	; 0x22
    415e:	42 e0       	ldi	r20, 0x02	; 2
    4160:	50 e0       	ldi	r21, 0x00	; 0
    4162:	be 01       	movw	r22, r28
    4164:	6f 5d       	subi	r22, 0xDF	; 223
    4166:	7f 4f       	sbci	r23, 0xFF	; 255
    4168:	84 eb       	ldi	r24, 0xB4	; 180
    416a:	9b e2       	ldi	r25, 0x2B	; 43
    416c:	0e 94 14 0d 	call	0x1a28	; 0x1a28 <_ZN22BLELocalCharacteristic10writeValueEPKhi>
    4170:	88 e5       	ldi	r24, 0x58	; 88
    4172:	9b e2       	ldi	r25, 0x2B	; 43
    4174:	0e 94 ed 03 	call	0x7da	; 0x7da <_ZN9GATTClass15clearAttributesEv>
    4178:	80 e6       	ldi	r24, 0x60	; 96
    417a:	9b e2       	ldi	r25, 0x2B	; 43
    417c:	0e 94 a3 06 	call	0xd46	; 0xd46 <_ZN9GATTClass10addServiceEP15BLELocalService.constprop.14>
    4180:	87 ee       	ldi	r24, 0xE7	; 231
    4182:	9b e2       	ldi	r25, 0x2B	; 43
    4184:	0e 94 a3 06 	call	0xd46	; 0xd46 <_ZN9GATTClass10addServiceEP15BLELocalService.constprop.14>
    4188:	8e ef       	ldi	r24, 0xFE	; 254
    418a:	9d e9       	ldi	r25, 0x9D	; 157
    418c:	0e 94 9f 0b 	call	0x173e	; 0x173e <_ZN3sio7PrintlnEPKc>
    4190:	01 e0       	ldi	r16, 0x01	; 1
    4192:	10 e0       	ldi	r17, 0x00	; 0
    4194:	64 cf       	rjmp	.-312    	; 0x405e <__RODATA_PM_OFFSET__+0x5e>

00004196 <__vector_18>:
    4196:	1f 92       	push	r1
    4198:	0f 92       	push	r0
    419a:	0f b6       	in	r0, 0x3f	; 63
    419c:	0f 92       	push	r0
    419e:	11 24       	eor	r1, r1
    41a0:	2f 93       	push	r18
    41a2:	3f 93       	push	r19
    41a4:	4f 93       	push	r20
    41a6:	5f 93       	push	r21
    41a8:	6f 93       	push	r22
    41aa:	7f 93       	push	r23
    41ac:	8f 93       	push	r24
    41ae:	9f 93       	push	r25
    41b0:	af 93       	push	r26
    41b2:	bf 93       	push	r27
    41b4:	ef 93       	push	r30
    41b6:	ff 93       	push	r31
    41b8:	87 e1       	ldi	r24, 0x17	; 23
    41ba:	9e e9       	ldi	r25, 0x9E	; 158
    41bc:	0e 94 9f 0b 	call	0x173e	; 0x173e <_ZN3sio7PrintlnEPKc>
    41c0:	8b e4       	ldi	r24, 0x4B	; 75
    41c2:	9a e2       	ldi	r25, 0x2A	; 42
    41c4:	0e 94 db 02 	call	0x5b6	; 0x5b6 <_ZN9UartClass18_tx_data_empty_irqEv>
    41c8:	ff 91       	pop	r31
    41ca:	ef 91       	pop	r30
    41cc:	bf 91       	pop	r27
    41ce:	af 91       	pop	r26
    41d0:	9f 91       	pop	r25
    41d2:	8f 91       	pop	r24
    41d4:	7f 91       	pop	r23
    41d6:	6f 91       	pop	r22
    41d8:	5f 91       	pop	r21
    41da:	4f 91       	pop	r20
    41dc:	3f 91       	pop	r19
    41de:	2f 91       	pop	r18
    41e0:	0f 90       	pop	r0
    41e2:	0f be       	out	0x3f, r0	; 63
    41e4:	0f 90       	pop	r0
    41e6:	1f 90       	pop	r1
    41e8:	18 95       	reti

000041ea <_ZN9UartClass5writeEh>:
    41ea:	ef 92       	push	r14
    41ec:	ff 92       	push	r15
    41ee:	0f 93       	push	r16
    41f0:	1f 93       	push	r17
    41f2:	cf 93       	push	r28
    41f4:	df 93       	push	r29
    41f6:	ec 01       	movw	r28, r24
    41f8:	f6 2e       	mov	r15, r22
    41fa:	8a e1       	ldi	r24, 0x1A	; 26
    41fc:	9e e9       	ldi	r25, 0x9E	; 158
    41fe:	0e 94 9f 0b 	call	0x173e	; 0x173e <_ZN3sio7PrintlnEPKc>
    4202:	81 e0       	ldi	r24, 0x01	; 1
    4204:	89 8b       	std	Y+17, r24	; 0x11
    4206:	9c 89       	ldd	r25, Y+20	; 0x14
    4208:	8d 89       	ldd	r24, Y+21	; 0x15
    420a:	98 13       	cpse	r25, r24
    420c:	17 c0       	rjmp	.+46     	; 0x423c <_ZN9UartClass5writeEh+0x52>
    420e:	80 91 04 08 	lds	r24, 0x0804	; 0x800804 <__TEXT_REGION_LENGTH__+0x700804>
    4212:	85 ff       	sbrs	r24, 5
    4214:	13 c0       	rjmp	.+38     	; 0x423c <_ZN9UartClass5writeEh+0x52>
    4216:	f0 92 02 08 	sts	0x0802, r15	; 0x800802 <__TEXT_REGION_LENGTH__+0x700802>
    421a:	80 e4       	ldi	r24, 0x40	; 64
    421c:	80 93 04 08 	sts	0x0804, r24	; 0x800804 <__TEXT_REGION_LENGTH__+0x700804>
    4220:	80 91 05 08 	lds	r24, 0x0805	; 0x800805 <__TEXT_REGION_LENGTH__+0x700805>
    4224:	8f 7d       	andi	r24, 0xDF	; 223
    4226:	80 93 05 08 	sts	0x0805, r24	; 0x800805 <__TEXT_REGION_LENGTH__+0x700805>
    422a:	81 e0       	ldi	r24, 0x01	; 1
    422c:	90 e0       	ldi	r25, 0x00	; 0
    422e:	df 91       	pop	r29
    4230:	cf 91       	pop	r28
    4232:	1f 91       	pop	r17
    4234:	0f 91       	pop	r16
    4236:	ff 90       	pop	r15
    4238:	ef 90       	pop	r14
    423a:	08 95       	ret
    423c:	80 91 11 01 	lds	r24, 0x0111	; 0x800111 <__TEXT_REGION_LENGTH__+0x700111>
    4240:	80 ff       	sbrs	r24, 0
    4242:	08 c0       	rjmp	.+16     	; 0x4254 <_ZN9UartClass5writeEh+0x6a>
    4244:	80 91 13 01 	lds	r24, 0x0113	; 0x800113 <__TEXT_REGION_LENGTH__+0x700113>
    4248:	88 8f       	std	Y+24, r24	; 0x18
    424a:	8e 89       	ldd	r24, Y+22	; 0x16
    424c:	80 93 13 01 	sts	0x0113, r24	; 0x800113 <__TEXT_REGION_LENGTH__+0x700113>
    4250:	81 e0       	ldi	r24, 0x01	; 1
    4252:	8f 8b       	std	Y+23, r24	; 0x17
    4254:	0c 89       	ldd	r16, Y+20	; 0x14
    4256:	10 e0       	ldi	r17, 0x00	; 0
    4258:	0f 5f       	subi	r16, 0xFF	; 255
    425a:	1f 4f       	sbci	r17, 0xFF	; 255
    425c:	0f 73       	andi	r16, 0x3F	; 63
    425e:	11 27       	eor	r17, r17
    4260:	e0 2e       	mov	r14, r16
    4262:	8d 89       	ldd	r24, Y+21	; 0x15
    4264:	8e 11       	cpse	r24, r14
    4266:	04 c0       	rjmp	.+8      	; 0x4270 <_ZN9UartClass5writeEh+0x86>
    4268:	ce 01       	movw	r24, r28
    426a:	0e 94 09 03 	call	0x612	; 0x612 <_ZN9UartClass19_poll_tx_data_emptyEv>
    426e:	f9 cf       	rjmp	.-14     	; 0x4262 <_ZN9UartClass5writeEh+0x78>
    4270:	ec 89       	ldd	r30, Y+20	; 0x14
    4272:	ec 0f       	add	r30, r28
    4274:	fd 2f       	mov	r31, r29
    4276:	f1 1d       	adc	r31, r1
    4278:	e7 5a       	subi	r30, 0xA7	; 167
    427a:	ff 4f       	sbci	r31, 0xFF	; 255
    427c:	f0 82       	st	Z, r15
    427e:	0c 8b       	std	Y+20, r16	; 0x14
    4280:	80 91 05 08 	lds	r24, 0x0805	; 0x800805 <__TEXT_REGION_LENGTH__+0x700805>
    4284:	80 62       	ori	r24, 0x20	; 32
    4286:	cf cf       	rjmp	.-98     	; 0x4226 <_ZN9UartClass5writeEh+0x3c>

00004288 <_ZN9UartClass3endEv>:
    4288:	cf 93       	push	r28
    428a:	df 93       	push	r29
    428c:	ec 01       	movw	r28, r24
    428e:	88 e2       	ldi	r24, 0x28	; 40
    4290:	9e e9       	ldi	r25, 0x9E	; 158
    4292:	0e 94 9f 0b 	call	0x173e	; 0x173e <_ZN3sio7PrintlnEPKc>
    4296:	e8 81       	ld	r30, Y
    4298:	f9 81       	ldd	r31, Y+1	; 0x01
    429a:	06 80       	ldd	r0, Z+6	; 0x06
    429c:	f7 81       	ldd	r31, Z+7	; 0x07
    429e:	e0 2d       	mov	r30, r0
    42a0:	ce 01       	movw	r24, r28
    42a2:	09 95       	icall
    42a4:	e0 e0       	ldi	r30, 0x00	; 0
    42a6:	f8 e0       	ldi	r31, 0x08	; 8
    42a8:	86 81       	ldd	r24, Z+6	; 0x06
    42aa:	8f 73       	andi	r24, 0x3F	; 63
    42ac:	86 83       	std	Z+6, r24	; 0x06
    42ae:	85 81       	ldd	r24, Z+5	; 0x05
    42b0:	8f 75       	andi	r24, 0x5F	; 95
    42b2:	85 83       	std	Z+5, r24	; 0x05
    42b4:	8b 89       	ldd	r24, Y+19	; 0x13
    42b6:	8a 8b       	std	Y+18, r24	; 0x12
    42b8:	19 8a       	std	Y+17, r1	; 0x11
    42ba:	df 91       	pop	r29
    42bc:	cf 91       	pop	r28
    42be:	08 95       	ret

000042c0 <_ZN9UartClass5beginEmj>:
    42c0:	8f 92       	push	r8
    42c2:	9f 92       	push	r9
    42c4:	af 92       	push	r10
    42c6:	bf 92       	push	r11
    42c8:	cf 92       	push	r12
    42ca:	df 92       	push	r13
    42cc:	ef 92       	push	r14
    42ce:	ff 92       	push	r15
    42d0:	0f 93       	push	r16
    42d2:	1f 93       	push	r17
    42d4:	cf 93       	push	r28
    42d6:	df 93       	push	r29
    42d8:	cd b7       	in	r28, 0x3d	; 61
    42da:	de b7       	in	r29, 0x3e	; 62
    42dc:	c0 58       	subi	r28, 0x80	; 128
    42de:	d1 09       	sbc	r29, r1
    42e0:	cd bf       	out	0x3d, r28	; 61
    42e2:	de bf       	out	0x3e, r29	; 62
    42e4:	8c 01       	movw	r16, r24
    42e6:	4a 01       	movw	r8, r20
    42e8:	6b 01       	movw	r12, r22
    42ea:	a2 2e       	mov	r10, r18
    42ec:	3f 93       	push	r19
    42ee:	2f 93       	push	r18
    42f0:	df 92       	push	r13
    42f2:	6f 93       	push	r22
    42f4:	9f 92       	push	r9
    42f6:	4f 93       	push	r20
    42f8:	8f e3       	ldi	r24, 0x3F	; 63
    42fa:	9e e9       	ldi	r25, 0x9E	; 158
    42fc:	9f 93       	push	r25
    42fe:	8f 93       	push	r24
    4300:	ce 01       	movw	r24, r28
    4302:	01 96       	adiw	r24, 0x01	; 1
    4304:	7c 01       	movw	r14, r24
    4306:	9f 93       	push	r25
    4308:	8f 93       	push	r24
    430a:	0e 94 b5 2a 	call	0x556a	; 0x556a <sprintf>
    430e:	c7 01       	movw	r24, r14
    4310:	0e 94 9f 0b 	call	0x173e	; 0x173e <_ZN3sio7PrintlnEPKc>
    4314:	8d e5       	ldi	r24, 0x5D	; 93
    4316:	9e e9       	ldi	r25, 0x9E	; 158
    4318:	0e 94 9f 0b 	call	0x173e	; 0x173e <_ZN3sio7PrintlnEPKc>
    431c:	cd bf       	out	0x3d, r28	; 61
    431e:	de bf       	out	0x3e, r29	; 62
    4320:	f8 01       	movw	r30, r16
    4322:	81 89       	ldd	r24, Z+17	; 0x11
    4324:	88 23       	and	r24, r24
    4326:	41 f0       	breq	.+16     	; 0x4338 <_ZN9UartClass5beginEmj+0x78>
    4328:	01 90       	ld	r0, Z+
    432a:	f0 81       	ld	r31, Z
    432c:	e0 2d       	mov	r30, r0
    432e:	02 88       	ldd	r0, Z+18	; 0x12
    4330:	f3 89       	ldd	r31, Z+19	; 0x13
    4332:	e0 2d       	mov	r30, r0
    4334:	c8 01       	movw	r24, r16
    4336:	09 95       	icall
    4338:	80 91 e2 05 	lds	r24, 0x05E2	; 0x8005e2 <__TEXT_REGION_LENGTH__+0x7005e2>
    433c:	81 60       	ori	r24, 0x01	; 1
    433e:	80 93 e2 05 	sts	0x05E2, r24	; 0x8005e2 <__TEXT_REGION_LENGTH__+0x7005e2>
    4342:	80 91 e2 05 	lds	r24, 0x05E2	; 0x8005e2 <__TEXT_REGION_LENGTH__+0x7005e2>
    4346:	1f 92       	push	r1
    4348:	8f 93       	push	r24
    434a:	8b e7       	ldi	r24, 0x7B	; 123
    434c:	9e e9       	ldi	r25, 0x9E	; 158
    434e:	9f 93       	push	r25
    4350:	8f 93       	push	r24
    4352:	ff 92       	push	r15
    4354:	ef 92       	push	r14
    4356:	0e 94 b5 2a 	call	0x556a	; 0x556a <sprintf>
    435a:	c7 01       	movw	r24, r14
    435c:	0e 94 9f 0b 	call	0x173e	; 0x173e <_ZN3sio7PrintlnEPKc>
    4360:	bf b6       	in	r11, 0x3f	; 63
    4362:	f8 94       	cli
    4364:	60 e0       	ldi	r22, 0x00	; 0
    4366:	70 e2       	ldi	r23, 0x20	; 32
    4368:	81 ea       	ldi	r24, 0xA1	; 161
    436a:	97 e0       	ldi	r25, 0x07	; 7
    436c:	94 01       	movw	r18, r8
    436e:	a6 01       	movw	r20, r12
    4370:	0e 94 f0 27 	call	0x4fe0	; 0x4fe0 <__udivmodsi4>
    4374:	69 01       	movw	r12, r18
    4376:	7a 01       	movw	r14, r20
    4378:	ff ef       	ldi	r31, 0xFF	; 255
    437a:	cf 1a       	sub	r12, r31
    437c:	df 0a       	sbc	r13, r31
    437e:	ef 0a       	sbc	r14, r31
    4380:	ff 0a       	sbc	r15, r31
    4382:	f6 94       	lsr	r15
    4384:	e7 94       	ror	r14
    4386:	d7 94       	ror	r13
    4388:	c7 94       	ror	r12
    438a:	80 91 06 08 	lds	r24, 0x0806	; 0x800806 <__TEXT_REGION_LENGTH__+0x700806>
    438e:	8d 7f       	andi	r24, 0xFD	; 253
    4390:	80 93 06 08 	sts	0x0806, r24	; 0x800806 <__TEXT_REGION_LENGTH__+0x700806>
    4394:	80 91 06 08 	lds	r24, 0x0806	; 0x800806 <__TEXT_REGION_LENGTH__+0x700806>
    4398:	80 93 06 08 	sts	0x0806, r24	; 0x800806 <__TEXT_REGION_LENGTH__+0x700806>
    439c:	d8 01       	movw	r26, r16
    439e:	51 96       	adiw	r26, 0x11	; 17
    43a0:	1c 92       	st	X, r1
    43a2:	8d e9       	ldi	r24, 0x9D	; 157
    43a4:	9e e9       	ldi	r25, 0x9E	; 158
    43a6:	0e 94 9f 0b 	call	0x173e	; 0x173e <_ZN3sio7PrintlnEPKc>
    43aa:	a0 91 23 11 	lds	r26, 0x1123	; 0x801123 <__TEXT_REGION_LENGTH__+0x701123>
    43ae:	0a 2e       	mov	r0, r26
    43b0:	00 0c       	add	r0, r0
    43b2:	bb 0b       	sbc	r27, r27
    43b4:	a7 01       	movw	r20, r14
    43b6:	96 01       	movw	r18, r12
    43b8:	0e 94 90 28 	call	0x5120	; 0x5120 <__mulshisi3>
    43bc:	20 e0       	ldi	r18, 0x00	; 0
    43be:	34 e0       	ldi	r19, 0x04	; 4
    43c0:	40 e0       	ldi	r20, 0x00	; 0
    43c2:	50 e0       	ldi	r21, 0x00	; 0
    43c4:	0e 94 71 28 	call	0x50e2	; 0x50e2 <__divmodsi4>
    43c8:	c2 0e       	add	r12, r18
    43ca:	d3 1e       	adc	r13, r19
    43cc:	e4 1e       	adc	r14, r20
    43ce:	f5 1e       	adc	r15, r21
    43d0:	c0 92 08 08 	sts	0x0808, r12	; 0x800808 <__TEXT_REGION_LENGTH__+0x700808>
    43d4:	d0 92 09 08 	sts	0x0809, r13	; 0x800809 <__TEXT_REGION_LENGTH__+0x700809>
    43d8:	a0 92 07 08 	sts	0x0807, r10	; 0x800807 <__TEXT_REGION_LENGTH__+0x700807>
    43dc:	80 91 06 08 	lds	r24, 0x0806	; 0x800806 <__TEXT_REGION_LENGTH__+0x700806>
    43e0:	80 6c       	ori	r24, 0xC0	; 192
    43e2:	80 93 06 08 	sts	0x0806, r24	; 0x800806 <__TEXT_REGION_LENGTH__+0x700806>
    43e6:	80 91 05 08 	lds	r24, 0x0805	; 0x800805 <__TEXT_REGION_LENGTH__+0x700805>
    43ea:	80 68       	ori	r24, 0x80	; 128
    43ec:	80 93 05 08 	sts	0x0805, r24	; 0x800805 <__TEXT_REGION_LENGTH__+0x700805>
    43f0:	88 e0       	ldi	r24, 0x08	; 8
    43f2:	80 93 15 04 	sts	0x0415, r24	; 0x800415 <__TEXT_REGION_LENGTH__+0x700415>
    43f6:	80 e2       	ldi	r24, 0x20	; 32
    43f8:	80 93 02 04 	sts	0x0402, r24	; 0x800402 <__TEXT_REGION_LENGTH__+0x700402>
    43fc:	80 e1       	ldi	r24, 0x10	; 16
    43fe:	80 93 05 04 	sts	0x0405, r24	; 0x800405 <__TEXT_REGION_LENGTH__+0x700405>
    4402:	80 93 01 04 	sts	0x0401, r24	; 0x800401 <__TEXT_REGION_LENGTH__+0x700401>
    4406:	78 94       	sei
    4408:	bf be       	out	0x3f, r11	; 63
    440a:	8c eb       	ldi	r24, 0xBC	; 188
    440c:	9e e9       	ldi	r25, 0x9E	; 158
    440e:	0e 94 9f 0b 	call	0x173e	; 0x173e <_ZN3sio7PrintlnEPKc>
    4412:	80 91 05 08 	lds	r24, 0x0805	; 0x800805 <__TEXT_REGION_LENGTH__+0x700805>
    4416:	1f 92       	push	r1
    4418:	8f 93       	push	r24
    441a:	88 ed       	ldi	r24, 0xD8	; 216
    441c:	9e e9       	ldi	r25, 0x9E	; 158
    441e:	9f 93       	push	r25
    4420:	8f 93       	push	r24
    4422:	8e 01       	movw	r16, r28
    4424:	0f 5b       	subi	r16, 0xBF	; 191
    4426:	1f 4f       	sbci	r17, 0xFF	; 255
    4428:	1f 93       	push	r17
    442a:	0f 93       	push	r16
    442c:	0e 94 b5 2a 	call	0x556a	; 0x556a <sprintf>
    4430:	c8 01       	movw	r24, r16
    4432:	0e 94 9f 0b 	call	0x173e	; 0x173e <_ZN3sio7PrintlnEPKc>
    4436:	80 91 06 08 	lds	r24, 0x0806	; 0x800806 <__TEXT_REGION_LENGTH__+0x700806>
    443a:	1f 92       	push	r1
    443c:	8f 93       	push	r24
    443e:	86 ee       	ldi	r24, 0xE6	; 230
    4440:	9e e9       	ldi	r25, 0x9E	; 158
    4442:	9f 93       	push	r25
    4444:	8f 93       	push	r24
    4446:	1f 93       	push	r17
    4448:	0f 93       	push	r16
    444a:	0e 94 b5 2a 	call	0x556a	; 0x556a <sprintf>
    444e:	c8 01       	movw	r24, r16
    4450:	0e 94 9f 0b 	call	0x173e	; 0x173e <_ZN3sio7PrintlnEPKc>
    4454:	80 91 07 08 	lds	r24, 0x0807	; 0x800807 <__TEXT_REGION_LENGTH__+0x700807>
    4458:	1f 92       	push	r1
    445a:	8f 93       	push	r24
    445c:	84 ef       	ldi	r24, 0xF4	; 244
    445e:	9e e9       	ldi	r25, 0x9E	; 158
    4460:	9f 93       	push	r25
    4462:	8f 93       	push	r24
    4464:	1f 93       	push	r17
    4466:	0f 93       	push	r16
    4468:	0e 94 b5 2a 	call	0x556a	; 0x556a <sprintf>
    446c:	c8 01       	movw	r24, r16
    446e:	0e 94 9f 0b 	call	0x173e	; 0x173e <_ZN3sio7PrintlnEPKc>
    4472:	80 91 08 08 	lds	r24, 0x0808	; 0x800808 <__TEXT_REGION_LENGTH__+0x700808>
    4476:	90 91 09 08 	lds	r25, 0x0809	; 0x800809 <__TEXT_REGION_LENGTH__+0x700809>
    447a:	9f 93       	push	r25
    447c:	8f 93       	push	r24
    447e:	82 e0       	ldi	r24, 0x02	; 2
    4480:	9f e9       	ldi	r25, 0x9F	; 159
    4482:	9f 93       	push	r25
    4484:	8f 93       	push	r24
    4486:	1f 93       	push	r17
    4488:	0f 93       	push	r16
    448a:	0e 94 b5 2a 	call	0x556a	; 0x556a <sprintf>
    448e:	c8 01       	movw	r24, r16
    4490:	0e 94 9f 0b 	call	0x173e	; 0x173e <_ZN3sio7PrintlnEPKc>
    4494:	cd bf       	out	0x3d, r28	; 61
    4496:	de bf       	out	0x3e, r29	; 62
    4498:	c0 58       	subi	r28, 0x80	; 128
    449a:	df 4f       	sbci	r29, 0xFF	; 255
    449c:	cd bf       	out	0x3d, r28	; 61
    449e:	de bf       	out	0x3e, r29	; 62
    44a0:	df 91       	pop	r29
    44a2:	cf 91       	pop	r28
    44a4:	1f 91       	pop	r17
    44a6:	0f 91       	pop	r16
    44a8:	ff 90       	pop	r15
    44aa:	ef 90       	pop	r14
    44ac:	df 90       	pop	r13
    44ae:	cf 90       	pop	r12
    44b0:	bf 90       	pop	r11
    44b2:	af 90       	pop	r10
    44b4:	9f 90       	pop	r9
    44b6:	8f 90       	pop	r8
    44b8:	08 95       	ret

000044ba <__vector_17>:
    44ba:	1f 92       	push	r1
    44bc:	0f 92       	push	r0
    44be:	0f b6       	in	r0, 0x3f	; 63
    44c0:	0f 92       	push	r0
    44c2:	11 24       	eor	r1, r1
    44c4:	2f 93       	push	r18
    44c6:	3f 93       	push	r19
    44c8:	4f 93       	push	r20
    44ca:	5f 93       	push	r21
    44cc:	6f 93       	push	r22
    44ce:	7f 93       	push	r23
    44d0:	8f 93       	push	r24
    44d2:	9f 93       	push	r25
    44d4:	af 93       	push	r26
    44d6:	bf 93       	push	r27
    44d8:	ef 93       	push	r30
    44da:	ff 93       	push	r31
    44dc:	80 e1       	ldi	r24, 0x10	; 16
    44de:	9f e9       	ldi	r25, 0x9F	; 159
    44e0:	0e 94 9f 0b 	call	0x173e	; 0x173e <_ZN3sio7PrintlnEPKc>
    44e4:	ff 91       	pop	r31
    44e6:	ef 91       	pop	r30
    44e8:	bf 91       	pop	r27
    44ea:	af 91       	pop	r26
    44ec:	9f 91       	pop	r25
    44ee:	8f 91       	pop	r24
    44f0:	7f 91       	pop	r23
    44f2:	6f 91       	pop	r22
    44f4:	5f 91       	pop	r21
    44f6:	4f 91       	pop	r20
    44f8:	3f 91       	pop	r19
    44fa:	2f 91       	pop	r18
    44fc:	0f 90       	pop	r0
    44fe:	0f be       	out	0x3f, r0	; 63
    4500:	0f 90       	pop	r0
    4502:	1f 90       	pop	r1
    4504:	18 95       	reti

00004506 <__vector_37>:
    4506:	1f 92       	push	r1
    4508:	0f 92       	push	r0
    450a:	0f b6       	in	r0, 0x3f	; 63
    450c:	0f 92       	push	r0
    450e:	11 24       	eor	r1, r1
    4510:	2f 93       	push	r18
    4512:	3f 93       	push	r19
    4514:	4f 93       	push	r20
    4516:	5f 93       	push	r21
    4518:	6f 93       	push	r22
    451a:	7f 93       	push	r23
    451c:	8f 93       	push	r24
    451e:	9f 93       	push	r25
    4520:	af 93       	push	r26
    4522:	bf 93       	push	r27
    4524:	ef 93       	push	r30
    4526:	ff 93       	push	r31
    4528:	8f e0       	ldi	r24, 0x0F	; 15
    452a:	9f e9       	ldi	r25, 0x9F	; 159
    452c:	0e 94 9f 0b 	call	0x173e	; 0x173e <_ZN3sio7PrintlnEPKc>
    4530:	ff 91       	pop	r31
    4532:	ef 91       	pop	r30
    4534:	bf 91       	pop	r27
    4536:	af 91       	pop	r26
    4538:	9f 91       	pop	r25
    453a:	8f 91       	pop	r24
    453c:	7f 91       	pop	r23
    453e:	6f 91       	pop	r22
    4540:	5f 91       	pop	r21
    4542:	4f 91       	pop	r20
    4544:	3f 91       	pop	r19
    4546:	2f 91       	pop	r18
    4548:	0f 90       	pop	r0
    454a:	0f be       	out	0x3f, r0	; 63
    454c:	0f 90       	pop	r0
    454e:	1f 90       	pop	r1
    4550:	18 95       	reti

00004552 <__vector_20>:
    4552:	1f 92       	push	r1
    4554:	0f 92       	push	r0
    4556:	0f b6       	in	r0, 0x3f	; 63
    4558:	0f 92       	push	r0
    455a:	11 24       	eor	r1, r1
    455c:	2f 93       	push	r18
    455e:	3f 93       	push	r19
    4560:	4f 93       	push	r20
    4562:	5f 93       	push	r21
    4564:	6f 93       	push	r22
    4566:	7f 93       	push	r23
    4568:	8f 93       	push	r24
    456a:	9f 93       	push	r25
    456c:	af 93       	push	r26
    456e:	bf 93       	push	r27
    4570:	ef 93       	push	r30
    4572:	ff 93       	push	r31
    4574:	83 e1       	ldi	r24, 0x13	; 19
    4576:	9f e9       	ldi	r25, 0x9F	; 159
    4578:	0e 94 9f 0b 	call	0x173e	; 0x173e <_ZN3sio7PrintlnEPKc>
    457c:	81 e0       	ldi	r24, 0x01	; 1
    457e:	80 93 69 04 	sts	0x0469, r24	; 0x800469 <__TEXT_REGION_LENGTH__+0x700469>
    4582:	ff 91       	pop	r31
    4584:	ef 91       	pop	r30
    4586:	bf 91       	pop	r27
    4588:	af 91       	pop	r26
    458a:	9f 91       	pop	r25
    458c:	8f 91       	pop	r24
    458e:	7f 91       	pop	r23
    4590:	6f 91       	pop	r22
    4592:	5f 91       	pop	r21
    4594:	4f 91       	pop	r20
    4596:	3f 91       	pop	r19
    4598:	2f 91       	pop	r18
    459a:	0f 90       	pop	r0
    459c:	0f be       	out	0x3f, r0	; 63
    459e:	0f 90       	pop	r0
    45a0:	1f 90       	pop	r1
    45a2:	18 95       	reti

000045a4 <_ZN22BLELocalCharacteristic9readValueE9BLEDevicejPhi>:
    45a4:	8f 92       	push	r8
    45a6:	9f 92       	push	r9
    45a8:	af 92       	push	r10
    45aa:	bf 92       	push	r11
    45ac:	cf 92       	push	r12
    45ae:	df 92       	push	r13
    45b0:	ef 92       	push	r14
    45b2:	ff 92       	push	r15
    45b4:	0f 93       	push	r16
    45b6:	1f 93       	push	r17
    45b8:	cf 93       	push	r28
    45ba:	df 93       	push	r29
    45bc:	cd b7       	in	r28, 0x3d	; 61
    45be:	de b7       	in	r29, 0x3e	; 62
    45c0:	c0 55       	subi	r28, 0x50	; 80
    45c2:	d1 09       	sbc	r29, r1
    45c4:	cd bf       	out	0x3d, r28	; 61
    45c6:	de bf       	out	0x3e, r29	; 62
    45c8:	7c 01       	movw	r14, r24
    45ca:	5a 01       	movw	r10, r20
    45cc:	69 01       	movw	r12, r18
    45ce:	fc 01       	movw	r30, r24
    45d0:	87 a4       	ldd	r8, Z+47	; 0x2f
    45d2:	90 a8       	ldd	r9, Z+48	; 0x30
    45d4:	81 14       	cp	r8, r1
    45d6:	91 04       	cpc	r9, r1
    45d8:	31 f1       	breq	.+76     	; 0x4626 <_ZN22BLELocalCharacteristic9readValueE9BLEDevicejPhi+0x82>
    45da:	84 ee       	ldi	r24, 0xE4	; 228
    45dc:	9a e9       	ldi	r25, 0x9A	; 154
    45de:	2d 96       	adiw	r28, 0x0d	; 13
    45e0:	8e af       	std	Y+62, r24	; 0x3e
    45e2:	9f af       	std	Y+63, r25	; 0x3f
    45e4:	2d 97       	sbiw	r28, 0x0d	; 13
    45e6:	2f 96       	adiw	r28, 0x0f	; 15
    45e8:	ee ae       	std	Y+62, r14	; 0x3e
    45ea:	ff ae       	std	Y+63, r15	; 0x3f
    45ec:	2f 97       	sbiw	r28, 0x0f	; 15
    45ee:	61 96       	adiw	r28, 0x11	; 17
    45f0:	1e ae       	std	Y+62, r1	; 0x3e
    45f2:	1f ae       	std	Y+63, r1	; 0x3f
    45f4:	61 97       	sbiw	r28, 0x11	; 17
    45f6:	e1 14       	cp	r14, r1
    45f8:	f1 04       	cpc	r15, r1
    45fa:	29 f0       	breq	.+10     	; 0x4606 <_ZN22BLELocalCharacteristic9readValueE9BLEDevicejPhi+0x62>
    45fc:	85 89       	ldd	r24, Z+21	; 0x15
    45fe:	96 89       	ldd	r25, Z+22	; 0x16
    4600:	01 96       	adiw	r24, 0x01	; 1
    4602:	85 8b       	std	Z+21, r24	; 0x15
    4604:	96 8b       	std	Z+22, r25	; 0x16
    4606:	ce 01       	movw	r24, r28
    4608:	01 96       	adiw	r24, 0x01	; 1
    460a:	0e 94 e4 01 	call	0x3c8	; 0x3c8 <_ZN9BLEDeviceC1ERKS_>
    460e:	be 01       	movw	r22, r28
    4610:	65 5b       	subi	r22, 0xB5	; 181
    4612:	7f 4f       	sbci	r23, 0xFF	; 255
    4614:	ce 01       	movw	r24, r28
    4616:	01 96       	adiw	r24, 0x01	; 1
    4618:	f4 01       	movw	r30, r8
    461a:	09 95       	icall
    461c:	ce 01       	movw	r24, r28
    461e:	85 5b       	subi	r24, 0xB5	; 181
    4620:	9f 4f       	sbci	r25, 0xFF	; 255
    4622:	0e 94 10 02 	call	0x420	; 0x420 <_ZN17BLECharacteristicD1Ev>
    4626:	f7 01       	movw	r30, r14
    4628:	62 8d       	ldd	r22, Z+26	; 0x1a
    462a:	73 8d       	ldd	r23, Z+27	; 0x1b
    462c:	6a 0d       	add	r22, r10
    462e:	7b 1d       	adc	r23, r11
    4630:	a8 01       	movw	r20, r16
    4632:	c6 01       	movw	r24, r12
    4634:	0e 94 95 2a 	call	0x552a	; 0x552a <memcpy>
    4638:	c0 5b       	subi	r28, 0xB0	; 176
    463a:	df 4f       	sbci	r29, 0xFF	; 255
    463c:	cd bf       	out	0x3d, r28	; 61
    463e:	de bf       	out	0x3e, r29	; 62
    4640:	df 91       	pop	r29
    4642:	cf 91       	pop	r28
    4644:	1f 91       	pop	r17
    4646:	0f 91       	pop	r16
    4648:	ff 90       	pop	r15
    464a:	ef 90       	pop	r14
    464c:	df 90       	pop	r13
    464e:	cf 90       	pop	r12
    4650:	bf 90       	pop	r11
    4652:	af 90       	pop	r10
    4654:	9f 90       	pop	r9
    4656:	8f 90       	pop	r8
    4658:	08 95       	ret

0000465a <_ZN22BLELocalCharacteristic10writeValueE9BLEDevicePKhi>:
    465a:	cf 92       	push	r12
    465c:	df 92       	push	r13
    465e:	ef 92       	push	r14
    4660:	ff 92       	push	r15
    4662:	0f 93       	push	r16
    4664:	1f 93       	push	r17
    4666:	cf 93       	push	r28
    4668:	df 93       	push	r29
    466a:	cd b7       	in	r28, 0x3d	; 61
    466c:	de b7       	in	r29, 0x3e	; 62
    466e:	c0 55       	subi	r28, 0x50	; 80
    4670:	d1 09       	sbc	r29, r1
    4672:	cd bf       	out	0x3d, r28	; 61
    4674:	de bf       	out	0x3e, r29	; 62
    4676:	8c 01       	movw	r16, r24
    4678:	6b 01       	movw	r12, r22
    467a:	ba 01       	movw	r22, r20
    467c:	81 e0       	ldi	r24, 0x01	; 1
    467e:	f8 01       	movw	r30, r16
    4680:	82 a3       	std	Z+34, r24	; 0x22
    4682:	a9 01       	movw	r20, r18
    4684:	c8 01       	movw	r24, r16
    4686:	0e 94 14 0d 	call	0x1a28	; 0x1a28 <_ZN22BLELocalCharacteristic10writeValueEPKhi>
    468a:	f8 01       	movw	r30, r16
    468c:	e1 a8       	ldd	r14, Z+49	; 0x31
    468e:	f2 a8       	ldd	r15, Z+50	; 0x32
    4690:	e1 14       	cp	r14, r1
    4692:	f1 04       	cpc	r15, r1
    4694:	31 f1       	breq	.+76     	; 0x46e2 <_ZN22BLELocalCharacteristic10writeValueE9BLEDevicePKhi+0x88>
    4696:	84 ee       	ldi	r24, 0xE4	; 228
    4698:	9a e9       	ldi	r25, 0x9A	; 154
    469a:	2d 96       	adiw	r28, 0x0d	; 13
    469c:	8e af       	std	Y+62, r24	; 0x3e
    469e:	9f af       	std	Y+63, r25	; 0x3f
    46a0:	2d 97       	sbiw	r28, 0x0d	; 13
    46a2:	2f 96       	adiw	r28, 0x0f	; 15
    46a4:	0e af       	std	Y+62, r16	; 0x3e
    46a6:	1f af       	std	Y+63, r17	; 0x3f
    46a8:	2f 97       	sbiw	r28, 0x0f	; 15
    46aa:	61 96       	adiw	r28, 0x11	; 17
    46ac:	1e ae       	std	Y+62, r1	; 0x3e
    46ae:	1f ae       	std	Y+63, r1	; 0x3f
    46b0:	61 97       	sbiw	r28, 0x11	; 17
    46b2:	01 2b       	or	r16, r17
    46b4:	29 f0       	breq	.+10     	; 0x46c0 <_ZN22BLELocalCharacteristic10writeValueE9BLEDevicePKhi+0x66>
    46b6:	85 89       	ldd	r24, Z+21	; 0x15
    46b8:	96 89       	ldd	r25, Z+22	; 0x16
    46ba:	01 96       	adiw	r24, 0x01	; 1
    46bc:	85 8b       	std	Z+21, r24	; 0x15
    46be:	96 8b       	std	Z+22, r25	; 0x16
    46c0:	b6 01       	movw	r22, r12
    46c2:	ce 01       	movw	r24, r28
    46c4:	01 96       	adiw	r24, 0x01	; 1
    46c6:	0e 94 e4 01 	call	0x3c8	; 0x3c8 <_ZN9BLEDeviceC1ERKS_>
    46ca:	be 01       	movw	r22, r28
    46cc:	65 5b       	subi	r22, 0xB5	; 181
    46ce:	7f 4f       	sbci	r23, 0xFF	; 255
    46d0:	ce 01       	movw	r24, r28
    46d2:	01 96       	adiw	r24, 0x01	; 1
    46d4:	f7 01       	movw	r30, r14
    46d6:	09 95       	icall
    46d8:	ce 01       	movw	r24, r28
    46da:	85 5b       	subi	r24, 0xB5	; 181
    46dc:	9f 4f       	sbci	r25, 0xFF	; 255
    46de:	0e 94 10 02 	call	0x420	; 0x420 <_ZN17BLECharacteristicD1Ev>
    46e2:	c0 5b       	subi	r28, 0xB0	; 176
    46e4:	df 4f       	sbci	r29, 0xFF	; 255
    46e6:	cd bf       	out	0x3d, r28	; 61
    46e8:	de bf       	out	0x3e, r29	; 62
    46ea:	df 91       	pop	r29
    46ec:	cf 91       	pop	r28
    46ee:	1f 91       	pop	r17
    46f0:	0f 91       	pop	r16
    46f2:	ff 90       	pop	r15
    46f4:	ef 90       	pop	r14
    46f6:	df 90       	pop	r13
    46f8:	cf 90       	pop	r12
    46fa:	08 95       	ret

000046fc <_ZN15BLELocalService17addCharacteristicEP22BLELocalCharacteristic>:
    46fc:	0f 93       	push	r16
    46fe:	1f 93       	push	r17
    4700:	cf 93       	push	r28
    4702:	df 93       	push	r29
    4704:	ec 01       	movw	r28, r24
    4706:	8b 01       	movw	r16, r22
    4708:	fb 01       	movw	r30, r22
    470a:	85 89       	ldd	r24, Z+21	; 0x15
    470c:	96 89       	ldd	r25, Z+22	; 0x16
    470e:	01 96       	adiw	r24, 0x01	; 1
    4710:	85 8b       	std	Z+21, r24	; 0x15
    4712:	96 8b       	std	Z+22, r25	; 0x16
    4714:	84 e0       	ldi	r24, 0x04	; 4
    4716:	90 e0       	ldi	r25, 0x00	; 0
    4718:	0e 94 9e 28 	call	0x513c	; 0x513c <malloc>
    471c:	fc 01       	movw	r30, r24
    471e:	12 82       	std	Z+2, r1	; 0x02
    4720:	13 82       	std	Z+3, r1	; 0x03
    4722:	00 83       	st	Z, r16
    4724:	11 83       	std	Z+1, r17	; 0x01
    4726:	2d 8d       	ldd	r18, Y+29	; 0x1d
    4728:	3e 8d       	ldd	r19, Y+30	; 0x1e
    472a:	23 2b       	or	r18, r19
    472c:	71 f4       	brne	.+28     	; 0x474a <_ZN15BLELocalService17addCharacteristicEP22BLELocalCharacteristic+0x4e>
    472e:	8d 8f       	std	Y+29, r24	; 0x1d
    4730:	9e 8f       	std	Y+30, r25	; 0x1e
    4732:	8f 8f       	std	Y+31, r24	; 0x1f
    4734:	98 a3       	std	Y+32, r25	; 0x20
    4736:	8b 8d       	ldd	r24, Y+27	; 0x1b
    4738:	9c 8d       	ldd	r25, Y+28	; 0x1c
    473a:	01 96       	adiw	r24, 0x01	; 1
    473c:	8b 8f       	std	Y+27, r24	; 0x1b
    473e:	9c 8f       	std	Y+28, r25	; 0x1c
    4740:	df 91       	pop	r29
    4742:	cf 91       	pop	r28
    4744:	1f 91       	pop	r17
    4746:	0f 91       	pop	r16
    4748:	08 95       	ret
    474a:	ef 8d       	ldd	r30, Y+31	; 0x1f
    474c:	f8 a1       	ldd	r31, Y+32	; 0x20
    474e:	82 83       	std	Z+2, r24	; 0x02
    4750:	93 83       	std	Z+3, r25	; 0x03
    4752:	ef cf       	rjmp	.-34     	; 0x4732 <_ZN15BLELocalService17addCharacteristicEP22BLELocalCharacteristic+0x36>

00004754 <_ZN22BLELocalCharacteristicC2EPKchib.constprop.25>:
    4754:	ef 92       	push	r14
    4756:	ff 92       	push	r15
    4758:	0f 93       	push	r16
    475a:	1f 93       	push	r17
    475c:	cf 93       	push	r28
    475e:	df 93       	push	r29
    4760:	ec 01       	movw	r28, r24
    4762:	14 2f       	mov	r17, r20
    4764:	79 01       	movw	r14, r18
    4766:	28 e0       	ldi	r18, 0x08	; 8
    4768:	3b e9       	ldi	r19, 0x9B	; 155
    476a:	dc 01       	movw	r26, r24
    476c:	2d 93       	st	X+, r18
    476e:	3d 93       	st	X+, r19
    4770:	cd 01       	movw	r24, r26
    4772:	0e 94 31 07 	call	0xe62	; 0xe62 <_ZN7BLEUuidC1EPKc>
    4776:	1d 8a       	std	Y+21, r1	; 0x15
    4778:	1e 8a       	std	Y+22, r1	; 0x16
    477a:	86 ef       	ldi	r24, 0xF6	; 246
    477c:	9a e9       	ldi	r25, 0x9A	; 154
    477e:	88 83       	st	Y, r24
    4780:	99 83       	std	Y+1, r25	; 0x01
    4782:	1f 8b       	std	Y+23, r17	; 0x17
    4784:	9e 2d       	mov	r25, r14
    4786:	8f 2d       	mov	r24, r15
    4788:	b1 e0       	ldi	r27, 0x01	; 1
    478a:	eb 16       	cp	r14, r27
    478c:	b2 e0       	ldi	r27, 0x02	; 2
    478e:	fb 06       	cpc	r15, r27
    4790:	14 f0       	brlt	.+4      	; 0x4796 <_ZN22BLELocalCharacteristicC2EPKchib.constprop.25+0x42>
    4792:	90 e0       	ldi	r25, 0x00	; 0
    4794:	82 e0       	ldi	r24, 0x02	; 2
    4796:	98 8f       	std	Y+24, r25	; 0x18
    4798:	89 8f       	std	Y+25, r24	; 0x19
    479a:	1c 8e       	std	Y+28, r1	; 0x1c
    479c:	1d 8e       	std	Y+29, r1	; 0x1d
    479e:	1e 8e       	std	Y+30, r1	; 0x1e
    47a0:	1f 8e       	std	Y+31, r1	; 0x1f
    47a2:	18 a2       	std	Y+32, r1	; 0x20
    47a4:	19 a2       	std	Y+33, r1	; 0x21
    47a6:	1a a2       	std	Y+34, r1	; 0x22
    47a8:	1b a2       	std	Y+35, r1	; 0x23
    47aa:	1c a2       	std	Y+36, r1	; 0x24
    47ac:	1d a2       	std	Y+37, r1	; 0x25
    47ae:	1e a2       	std	Y+38, r1	; 0x26
    47b0:	1f a2       	std	Y+39, r1	; 0x27
    47b2:	18 a6       	std	Y+40, r1	; 0x28
    47b4:	19 a6       	std	Y+41, r1	; 0x29
    47b6:	1a a6       	std	Y+42, r1	; 0x2a
    47b8:	88 e0       	ldi	r24, 0x08	; 8
    47ba:	fe 01       	movw	r30, r28
    47bc:	bb 96       	adiw	r30, 0x2b	; 43
    47be:	df 01       	movw	r26, r30
    47c0:	1d 92       	st	X+, r1
    47c2:	8a 95       	dec	r24
    47c4:	e9 f7       	brne	.-6      	; 0x47c0 <_ZN22BLELocalCharacteristicC2EPKchib.constprop.25+0x6c>
    47c6:	10 73       	andi	r17, 0x30	; 48
    47c8:	09 f4       	brne	.+2      	; 0x47cc <_ZN22BLELocalCharacteristicC2EPKchib.constprop.25+0x78>
    47ca:	3f c0       	rjmp	.+126    	; 0x484a <_ZN22BLELocalCharacteristicC2EPKchib.constprop.25+0xf6>
    47cc:	8d e1       	ldi	r24, 0x1D	; 29
    47ce:	90 e0       	ldi	r25, 0x00	; 0
    47d0:	0e 94 9e 28 	call	0x513c	; 0x513c <malloc>
    47d4:	8c 01       	movw	r16, r24
    47d6:	28 e0       	ldi	r18, 0x08	; 8
    47d8:	3b e9       	ldi	r19, 0x9B	; 155
    47da:	fc 01       	movw	r30, r24
    47dc:	21 93       	st	Z+, r18
    47de:	31 93       	st	Z+, r19
    47e0:	cf 01       	movw	r24, r30
    47e2:	60 e7       	ldi	r22, 0x70	; 112
    47e4:	7b e9       	ldi	r23, 0x9B	; 155
    47e6:	0e 94 31 07 	call	0xe62	; 0xe62 <_ZN7BLEUuidC1EPKc>
    47ea:	d8 01       	movw	r26, r16
    47ec:	55 96       	adiw	r26, 0x15	; 21
    47ee:	1d 92       	st	X+, r1
    47f0:	1c 92       	st	X, r1
    47f2:	56 97       	sbiw	r26, 0x16	; 22
    47f4:	8c ee       	ldi	r24, 0xEC	; 236
    47f6:	9a e9       	ldi	r25, 0x9A	; 154
    47f8:	8d 93       	st	X+, r24
    47fa:	9c 93       	st	X, r25
    47fc:	11 97       	sbiw	r26, 0x01	; 1
    47fe:	ce 01       	movw	r24, r28
    4800:	83 96       	adiw	r24, 0x23	; 35
    4802:	57 96       	adiw	r26, 0x17	; 23
    4804:	8d 93       	st	X+, r24
    4806:	9c 93       	st	X, r25
    4808:	58 97       	sbiw	r26, 0x18	; 24
    480a:	82 e0       	ldi	r24, 0x02	; 2
    480c:	90 e0       	ldi	r25, 0x00	; 0
    480e:	59 96       	adiw	r26, 0x19	; 25
    4810:	8d 93       	st	X+, r24
    4812:	9c 93       	st	X, r25
    4814:	5a 97       	sbiw	r26, 0x1a	; 26
    4816:	5b 96       	adiw	r26, 0x1b	; 27
    4818:	1d 92       	st	X+, r1
    481a:	1c 92       	st	X, r1
    481c:	5c 97       	sbiw	r26, 0x1c	; 28
    481e:	84 e0       	ldi	r24, 0x04	; 4
    4820:	90 e0       	ldi	r25, 0x00	; 0
    4822:	0e 94 9e 28 	call	0x513c	; 0x513c <malloc>
    4826:	fc 01       	movw	r30, r24
    4828:	12 82       	std	Z+2, r1	; 0x02
    482a:	13 82       	std	Z+3, r1	; 0x03
    482c:	00 83       	st	Z, r16
    482e:	11 83       	std	Z+1, r17	; 0x01
    4830:	2f a1       	ldd	r18, Y+39	; 0x27
    4832:	38 a5       	ldd	r19, Y+40	; 0x28
    4834:	23 2b       	or	r18, r19
    4836:	a9 f4       	brne	.+42     	; 0x4862 <_ZN22BLELocalCharacteristicC2EPKchib.constprop.25+0x10e>
    4838:	8f a3       	std	Y+39, r24	; 0x27
    483a:	98 a7       	std	Y+40, r25	; 0x28
    483c:	89 a7       	std	Y+41, r24	; 0x29
    483e:	9a a7       	std	Y+42, r25	; 0x2a
    4840:	8d a1       	ldd	r24, Y+37	; 0x25
    4842:	9e a1       	ldd	r25, Y+38	; 0x26
    4844:	01 96       	adiw	r24, 0x01	; 1
    4846:	8d a3       	std	Y+37, r24	; 0x25
    4848:	9e a3       	std	Y+38, r25	; 0x26
    484a:	c7 01       	movw	r24, r14
    484c:	0e 94 9e 28 	call	0x513c	; 0x513c <malloc>
    4850:	8a 8f       	std	Y+26, r24	; 0x1a
    4852:	9b 8f       	std	Y+27, r25	; 0x1b
    4854:	df 91       	pop	r29
    4856:	cf 91       	pop	r28
    4858:	1f 91       	pop	r17
    485a:	0f 91       	pop	r16
    485c:	ff 90       	pop	r15
    485e:	ef 90       	pop	r14
    4860:	08 95       	ret
    4862:	e9 a5       	ldd	r30, Y+41	; 0x29
    4864:	fa a5       	ldd	r31, Y+42	; 0x2a
    4866:	82 83       	std	Z+2, r24	; 0x02
    4868:	93 83       	std	Z+3, r25	; 0x03
    486a:	e8 cf       	rjmp	.-48     	; 0x483c <_ZN22BLELocalCharacteristicC2EPKchib.constprop.25+0xe8>

0000486c <_GLOBAL__I_65535_0_new.cpp.o.5800>:
    486c:	0f 93       	push	r16
    486e:	1f 93       	push	r17
    4870:	cf 93       	push	r28
    4872:	df 93       	push	r29
    4874:	80 e0       	ldi	r24, 0x00	; 0
    4876:	9b e9       	ldi	r25, 0x9B	; 155
    4878:	80 93 2d 28 	sts	0x282D, r24	; 0x80282d <L2CAPSignaling>
    487c:	90 93 2e 28 	sts	0x282E, r25	; 0x80282e <L2CAPSignaling+0x1>
    4880:	10 92 2f 28 	sts	0x282F, r1	; 0x80282f <L2CAPSignaling+0x2>
    4884:	10 92 30 28 	sts	0x2830, r1	; 0x802830 <L2CAPSignaling+0x3>
    4888:	10 92 31 28 	sts	0x2831, r1	; 0x802831 <L2CAPSignaling+0x4>
    488c:	10 92 32 28 	sts	0x2832, r1	; 0x802832 <L2CAPSignaling+0x5>
    4890:	8c e1       	ldi	r24, 0x1C	; 28
    4892:	9b e9       	ldi	r25, 0x9B	; 155
    4894:	80 93 58 2b 	sts	0x2B58, r24	; 0x802b58 <GATT>
    4898:	90 93 59 2b 	sts	0x2B59, r25	; 0x802b59 <GATT+0x1>
    489c:	10 92 5a 2b 	sts	0x2B5A, r1	; 0x802b5a <GATT+0x2>
    48a0:	10 92 5b 2b 	sts	0x2B5B, r1	; 0x802b5b <GATT+0x3>
    48a4:	10 92 5c 2b 	sts	0x2B5C, r1	; 0x802b5c <GATT+0x4>
    48a8:	10 92 5d 2b 	sts	0x2B5D, r1	; 0x802b5d <GATT+0x5>
    48ac:	10 92 5e 2b 	sts	0x2B5E, r1	; 0x802b5e <GATT+0x6>
    48b0:	10 92 5f 2b 	sts	0x2B5F, r1	; 0x802b5f <GATT+0x7>
    48b4:	08 e0       	ldi	r16, 0x08	; 8
    48b6:	1b e9       	ldi	r17, 0x9B	; 155
    48b8:	00 93 60 2b 	sts	0x2B60, r16	; 0x802b60 <GATT+0x8>
    48bc:	10 93 61 2b 	sts	0x2B61, r17	; 0x802b61 <GATT+0x9>
    48c0:	66 e9       	ldi	r22, 0x96	; 150
    48c2:	7b e9       	ldi	r23, 0x9B	; 155
    48c4:	82 e6       	ldi	r24, 0x62	; 98
    48c6:	9b e2       	ldi	r25, 0x2B	; 43
    48c8:	0e 94 31 07 	call	0xe62	; 0xe62 <_ZN7BLEUuidC1EPKc>
    48cc:	10 92 75 2b 	sts	0x2B75, r1	; 0x802b75 <GATT+0x1d>
    48d0:	10 92 76 2b 	sts	0x2B76, r1	; 0x802b76 <GATT+0x1e>
    48d4:	c2 e1       	ldi	r28, 0x12	; 18
    48d6:	db e9       	ldi	r29, 0x9B	; 155
    48d8:	c0 93 60 2b 	sts	0x2B60, r28	; 0x802b60 <GATT+0x8>
    48dc:	d0 93 61 2b 	sts	0x2B61, r29	; 0x802b61 <GATT+0x9>
    48e0:	10 92 77 2b 	sts	0x2B77, r1	; 0x802b77 <GATT+0x1f>
    48e4:	10 92 78 2b 	sts	0x2B78, r1	; 0x802b78 <GATT+0x20>
    48e8:	10 92 79 2b 	sts	0x2B79, r1	; 0x802b79 <GATT+0x21>
    48ec:	10 92 7a 2b 	sts	0x2B7A, r1	; 0x802b7a <GATT+0x22>
    48f0:	10 92 7b 2b 	sts	0x2B7B, r1	; 0x802b7b <GATT+0x23>
    48f4:	10 92 7c 2b 	sts	0x2B7C, r1	; 0x802b7c <GATT+0x24>
    48f8:	10 92 7d 2b 	sts	0x2B7D, r1	; 0x802b7d <GATT+0x25>
    48fc:	10 92 7e 2b 	sts	0x2B7E, r1	; 0x802b7e <GATT+0x26>
    4900:	10 92 7f 2b 	sts	0x2B7F, r1	; 0x802b7f <GATT+0x27>
    4904:	10 92 80 2b 	sts	0x2B80, r1	; 0x802b80 <GATT+0x28>
    4908:	24 e1       	ldi	r18, 0x14	; 20
    490a:	30 e0       	ldi	r19, 0x00	; 0
    490c:	42 e0       	ldi	r20, 0x02	; 2
    490e:	6b e9       	ldi	r22, 0x9B	; 155
    4910:	7b e9       	ldi	r23, 0x9B	; 155
    4912:	81 e8       	ldi	r24, 0x81	; 129
    4914:	9b e2       	ldi	r25, 0x2B	; 43
    4916:	0e 94 aa 23 	call	0x4754	; 0x4754 <_ZN22BLELocalCharacteristicC2EPKchib.constprop.25>
    491a:	22 e0       	ldi	r18, 0x02	; 2
    491c:	30 e0       	ldi	r19, 0x00	; 0
    491e:	42 e0       	ldi	r20, 0x02	; 2
    4920:	60 ea       	ldi	r22, 0xA0	; 160
    4922:	7b e9       	ldi	r23, 0x9B	; 155
    4924:	84 eb       	ldi	r24, 0xB4	; 180
    4926:	9b e2       	ldi	r25, 0x2B	; 43
    4928:	0e 94 aa 23 	call	0x4754	; 0x4754 <_ZN22BLELocalCharacteristicC2EPKchib.constprop.25>
    492c:	00 93 e7 2b 	sts	0x2BE7, r16	; 0x802be7 <GATT+0x8f>
    4930:	10 93 e8 2b 	sts	0x2BE8, r17	; 0x802be8 <GATT+0x90>
    4934:	65 ea       	ldi	r22, 0xA5	; 165
    4936:	7b e9       	ldi	r23, 0x9B	; 155
    4938:	89 ee       	ldi	r24, 0xE9	; 233
    493a:	9b e2       	ldi	r25, 0x2B	; 43
    493c:	0e 94 31 07 	call	0xe62	; 0xe62 <_ZN7BLEUuidC1EPKc>
    4940:	10 92 fc 2b 	sts	0x2BFC, r1	; 0x802bfc <GATT+0xa4>
    4944:	10 92 fd 2b 	sts	0x2BFD, r1	; 0x802bfd <GATT+0xa5>
    4948:	c0 93 e7 2b 	sts	0x2BE7, r28	; 0x802be7 <GATT+0x8f>
    494c:	d0 93 e8 2b 	sts	0x2BE8, r29	; 0x802be8 <GATT+0x90>
    4950:	10 92 fe 2b 	sts	0x2BFE, r1	; 0x802bfe <GATT+0xa6>
    4954:	10 92 ff 2b 	sts	0x2BFF, r1	; 0x802bff <GATT+0xa7>
    4958:	10 92 00 2c 	sts	0x2C00, r1	; 0x802c00 <GATT+0xa8>
    495c:	10 92 01 2c 	sts	0x2C01, r1	; 0x802c01 <GATT+0xa9>
    4960:	10 92 02 2c 	sts	0x2C02, r1	; 0x802c02 <GATT+0xaa>
    4964:	10 92 03 2c 	sts	0x2C03, r1	; 0x802c03 <GATT+0xab>
    4968:	10 92 04 2c 	sts	0x2C04, r1	; 0x802c04 <GATT+0xac>
    496c:	10 92 05 2c 	sts	0x2C05, r1	; 0x802c05 <GATT+0xad>
    4970:	10 92 06 2c 	sts	0x2C06, r1	; 0x802c06 <GATT+0xae>
    4974:	10 92 07 2c 	sts	0x2C07, r1	; 0x802c07 <GATT+0xaf>
    4978:	24 e0       	ldi	r18, 0x04	; 4
    497a:	30 e0       	ldi	r19, 0x00	; 0
    497c:	40 e2       	ldi	r20, 0x20	; 32
    497e:	6a ea       	ldi	r22, 0xAA	; 170
    4980:	7b e9       	ldi	r23, 0x9B	; 155
    4982:	88 e0       	ldi	r24, 0x08	; 8
    4984:	9c e2       	ldi	r25, 0x2C	; 44
    4986:	0e 94 aa 23 	call	0x4754	; 0x4754 <_ZN22BLELocalCharacteristicC2EPKchib.constprop.25>
    498a:	80 91 75 2b 	lds	r24, 0x2B75	; 0x802b75 <GATT+0x1d>
    498e:	90 91 76 2b 	lds	r25, 0x2B76	; 0x802b76 <GATT+0x1e>
    4992:	01 96       	adiw	r24, 0x01	; 1
    4994:	80 93 75 2b 	sts	0x2B75, r24	; 0x802b75 <GATT+0x1d>
    4998:	90 93 76 2b 	sts	0x2B76, r25	; 0x802b76 <GATT+0x1e>
    499c:	80 91 fc 2b 	lds	r24, 0x2BFC	; 0x802bfc <GATT+0xa4>
    49a0:	90 91 fd 2b 	lds	r25, 0x2BFD	; 0x802bfd <GATT+0xa5>
    49a4:	01 96       	adiw	r24, 0x01	; 1
    49a6:	80 93 fc 2b 	sts	0x2BFC, r24	; 0x802bfc <GATT+0xa4>
    49aa:	90 93 fd 2b 	sts	0x2BFD, r25	; 0x802bfd <GATT+0xa5>
    49ae:	61 e8       	ldi	r22, 0x81	; 129
    49b0:	7b e2       	ldi	r23, 0x2B	; 43
    49b2:	80 e6       	ldi	r24, 0x60	; 96
    49b4:	9b e2       	ldi	r25, 0x2B	; 43
    49b6:	0e 94 7e 23 	call	0x46fc	; 0x46fc <_ZN15BLELocalService17addCharacteristicEP22BLELocalCharacteristic>
    49ba:	64 eb       	ldi	r22, 0xB4	; 180
    49bc:	7b e2       	ldi	r23, 0x2B	; 43
    49be:	80 e6       	ldi	r24, 0x60	; 96
    49c0:	9b e2       	ldi	r25, 0x2B	; 43
    49c2:	0e 94 7e 23 	call	0x46fc	; 0x46fc <_ZN15BLELocalService17addCharacteristicEP22BLELocalCharacteristic>
    49c6:	68 e0       	ldi	r22, 0x08	; 8
    49c8:	7c e2       	ldi	r23, 0x2C	; 44
    49ca:	87 ee       	ldi	r24, 0xE7	; 231
    49cc:	9b e2       	ldi	r25, 0x2B	; 43
    49ce:	0e 94 7e 23 	call	0x46fc	; 0x46fc <_ZN15BLELocalService17addCharacteristicEP22BLELocalCharacteristic>
    49d2:	84 e2       	ldi	r24, 0x24	; 36
    49d4:	9b e9       	ldi	r25, 0x9B	; 155
    49d6:	80 93 33 28 	sts	0x2833, r24	; 0x802833 <HCIUartTransport>
    49da:	90 93 34 28 	sts	0x2834, r25	; 0x802834 <HCIUartTransport+0x1>
    49de:	8b e4       	ldi	r24, 0x4B	; 75
    49e0:	9a e2       	ldi	r25, 0x2A	; 42
    49e2:	80 93 35 28 	sts	0x2835, r24	; 0x802835 <HCIUartTransport+0x2>
    49e6:	90 93 36 28 	sts	0x2836, r25	; 0x802836 <HCIUartTransport+0x3>
    49ea:	80 e3       	ldi	r24, 0x30	; 48
    49ec:	93 ed       	ldi	r25, 0xD3	; 211
    49ee:	a1 e0       	ldi	r26, 0x01	; 1
    49f0:	b0 e0       	ldi	r27, 0x00	; 0
    49f2:	80 93 37 28 	sts	0x2837, r24	; 0x802837 <HCIUartTransport+0x4>
    49f6:	90 93 38 28 	sts	0x2838, r25	; 0x802838 <HCIUartTransport+0x5>
    49fa:	a0 93 39 28 	sts	0x2839, r26	; 0x802839 <HCIUartTransport+0x6>
    49fe:	b0 93 3a 28 	sts	0x283A, r27	; 0x80283a <HCIUartTransport+0x7>
    4a02:	8a e3       	ldi	r24, 0x3A	; 58
    4a04:	9b e9       	ldi	r25, 0x9B	; 155
    4a06:	80 93 3b 28 	sts	0x283B, r24	; 0x80283b <HCI>
    4a0a:	90 93 3c 28 	sts	0x283C, r25	; 0x80283c <HCI+0x1>
    4a0e:	10 92 3d 28 	sts	0x283D, r1	; 0x80283d <HCI+0x2>
    4a12:	10 92 3e 28 	sts	0x283E, r1	; 0x80283e <HCI+0x3>
    4a16:	10 92 3f 28 	sts	0x283F, r1	; 0x80283f <HCI+0x4>
    4a1a:	10 92 40 28 	sts	0x2840, r1	; 0x802840 <HCI+0x5>
    4a1e:	10 92 4b 29 	sts	0x294B, r1	; 0x80294b <HCI+0x110>
    4a22:	82 e4       	ldi	r24, 0x42	; 66
    4a24:	9b e9       	ldi	r25, 0x9B	; 155
    4a26:	80 93 29 2b 	sts	0x2B29, r24	; 0x802b29 <GAP>
    4a2a:	90 93 2a 2b 	sts	0x2B2A, r25	; 0x802b2a <GAP+0x1>
    4a2e:	10 92 2b 2b 	sts	0x2B2B, r1	; 0x802b2b <GAP+0x2>
    4a32:	10 92 2c 2b 	sts	0x2B2C, r1	; 0x802b2c <GAP+0x3>
    4a36:	10 92 2d 2b 	sts	0x2B2D, r1	; 0x802b2d <GAP+0x4>
    4a3a:	10 92 2e 2b 	sts	0x2B2E, r1	; 0x802b2e <GAP+0x5>
    4a3e:	10 92 2f 2b 	sts	0x2B2F, r1	; 0x802b2f <GAP+0x6>
    4a42:	10 92 30 2b 	sts	0x2B30, r1	; 0x802b30 <GAP+0x7>
    4a46:	10 92 31 2b 	sts	0x2B31, r1	; 0x802b31 <GAP+0x8>
    4a4a:	10 92 32 2b 	sts	0x2B32, r1	; 0x802b32 <GAP+0x9>
    4a4e:	10 92 33 2b 	sts	0x2B33, r1	; 0x802b33 <GAP+0xa>
    4a52:	10 92 34 2b 	sts	0x2B34, r1	; 0x802b34 <GAP+0xb>
    4a56:	80 ea       	ldi	r24, 0xA0	; 160
    4a58:	90 e0       	ldi	r25, 0x00	; 0
    4a5a:	80 93 35 2b 	sts	0x2B35, r24	; 0x802b35 <GAP+0xc>
    4a5e:	90 93 36 2b 	sts	0x2B36, r25	; 0x802b36 <GAP+0xd>
    4a62:	81 e0       	ldi	r24, 0x01	; 1
    4a64:	80 93 37 2b 	sts	0x2B37, r24	; 0x802b37 <GAP+0xe>
    4a68:	10 92 3a 2b 	sts	0x2B3A, r1	; 0x802b3a <GAP+0x11>
    4a6c:	10 92 3b 2b 	sts	0x2B3B, r1	; 0x802b3b <GAP+0x12>
    4a70:	10 92 3c 2b 	sts	0x2B3C, r1	; 0x802b3c <GAP+0x13>
    4a74:	10 92 3d 2b 	sts	0x2B3D, r1	; 0x802b3d <GAP+0x14>
    4a78:	10 92 3e 2b 	sts	0x2B3E, r1	; 0x802b3e <GAP+0x15>
    4a7c:	10 92 3f 2b 	sts	0x2B3F, r1	; 0x802b3f <GAP+0x16>
    4a80:	10 92 40 2b 	sts	0x2B40, r1	; 0x802b40 <GAP+0x17>
    4a84:	10 92 41 2b 	sts	0x2B41, r1	; 0x802b41 <GAP+0x18>
    4a88:	10 92 42 2b 	sts	0x2B42, r1	; 0x802b42 <GAP+0x19>
    4a8c:	10 92 43 2b 	sts	0x2B43, r1	; 0x802b43 <GAP+0x1a>
    4a90:	10 92 44 2b 	sts	0x2B44, r1	; 0x802b44 <GAP+0x1b>
    4a94:	10 92 45 2b 	sts	0x2B45, r1	; 0x802b45 <GAP+0x1c>
    4a98:	67 e7       	ldi	r22, 0x77	; 119
    4a9a:	7b e9       	ldi	r23, 0x9B	; 155
    4a9c:	86 e4       	ldi	r24, 0x46	; 70
    4a9e:	9b e2       	ldi	r25, 0x2B	; 43
    4aa0:	0e 94 5c 08 	call	0x10b8	; 0x10b8 <_ZN6StringC1EPKc>
    4aa4:	67 e7       	ldi	r22, 0x77	; 119
    4aa6:	7b e9       	ldi	r23, 0x9B	; 155
    4aa8:	8c e4       	ldi	r24, 0x4C	; 76
    4aaa:	9b e2       	ldi	r25, 0x2B	; 43
    4aac:	0e 94 5c 08 	call	0x10b8	; 0x10b8 <_ZN6StringC1EPKc>
    4ab0:	67 e7       	ldi	r22, 0x77	; 119
    4ab2:	7b e9       	ldi	r23, 0x9B	; 155
    4ab4:	82 e5       	ldi	r24, 0x52	; 82
    4ab6:	9b e2       	ldi	r25, 0x2B	; 43
    4ab8:	0e 94 5c 08 	call	0x10b8	; 0x10b8 <_ZN6StringC1EPKc>
    4abc:	8a e4       	ldi	r24, 0x4A	; 74
    4abe:	9b e9       	ldi	r25, 0x9B	; 155
    4ac0:	80 93 e6 2a 	sts	0x2AE6, r24	; 0x802ae6 <ATT>
    4ac4:	90 93 e7 2a 	sts	0x2AE7, r25	; 0x802ae7 <ATT+0x1>
    4ac8:	87 e1       	ldi	r24, 0x17	; 23
    4aca:	90 e0       	ldi	r25, 0x00	; 0
    4acc:	80 93 e8 2a 	sts	0x2AE8, r24	; 0x802ae8 <ATT+0x2>
    4ad0:	90 93 e9 2a 	sts	0x2AE9, r25	; 0x802ae9 <ATT+0x3>
    4ad4:	88 e8       	ldi	r24, 0x88	; 136
    4ad6:	93 e1       	ldi	r25, 0x13	; 19
    4ad8:	a0 e0       	ldi	r26, 0x00	; 0
    4ada:	b0 e0       	ldi	r27, 0x00	; 0
    4adc:	80 93 ea 2a 	sts	0x2AEA, r24	; 0x802aea <ATT+0x4>
    4ae0:	90 93 eb 2a 	sts	0x2AEB, r25	; 0x802aeb <ATT+0x5>
    4ae4:	a0 93 ec 2a 	sts	0x2AEC, r26	; 0x802aec <ATT+0x6>
    4ae8:	b0 93 ed 2a 	sts	0x2AED, r27	; 0x802aed <ATT+0x7>
    4aec:	10 92 19 2b 	sts	0x2B19, r1	; 0x802b19 <ATT+0x33>
    4af0:	10 92 1a 2b 	sts	0x2B1A, r1	; 0x802b1a <ATT+0x34>
    4af4:	10 92 1b 2b 	sts	0x2B1B, r1	; 0x802b1b <ATT+0x35>
    4af8:	10 92 1c 2b 	sts	0x2B1C, r1	; 0x802b1c <ATT+0x36>
    4afc:	10 92 1d 2b 	sts	0x2B1D, r1	; 0x802b1d <ATT+0x37>
    4b00:	10 92 1e 2b 	sts	0x2B1E, r1	; 0x802b1e <ATT+0x38>
    4b04:	e6 ee       	ldi	r30, 0xE6	; 230
    4b06:	fa e2       	ldi	r31, 0x2A	; 42
    4b08:	4f ef       	ldi	r20, 0xFF	; 255
    4b0a:	5f ef       	ldi	r21, 0xFF	; 255
    4b0c:	26 e0       	ldi	r18, 0x06	; 6
    4b0e:	87 e1       	ldi	r24, 0x17	; 23
    4b10:	90 e0       	ldi	r25, 0x00	; 0
    4b12:	40 87       	std	Z+8, r20	; 0x08
    4b14:	51 87       	std	Z+9, r21	; 0x09
    4b16:	12 86       	std	Z+10, r1	; 0x0a
    4b18:	13 86       	std	Z+11, r1	; 0x0b
    4b1a:	df 01       	movw	r26, r30
    4b1c:	1c 96       	adiw	r26, 0x0c	; 12
    4b1e:	ed 01       	movw	r28, r26
    4b20:	32 2f       	mov	r19, r18
    4b22:	19 92       	st	Y+, r1
    4b24:	3a 95       	dec	r19
    4b26:	e9 f7       	brne	.-6      	; 0x4b22 <_GLOBAL__I_65535_0_new.cpp.o.5800+0x2b6>
    4b28:	82 8b       	std	Z+18, r24	; 0x12
    4b2a:	93 8b       	std	Z+19, r25	; 0x13
    4b2c:	14 8a       	std	Z+20, r1	; 0x14
    4b2e:	15 8a       	std	Z+21, r1	; 0x15
    4b30:	3e 96       	adiw	r30, 0x0e	; 14
    4b32:	ab e2       	ldi	r26, 0x2B	; 43
    4b34:	e0 31       	cpi	r30, 0x10	; 16
    4b36:	fa 07       	cpc	r31, r26
    4b38:	61 f7       	brne	.-40     	; 0x4b12 <_GLOBAL__I_65535_0_new.cpp.o.5800+0x2a6>
    4b3a:	e5 e2       	ldi	r30, 0x25	; 37
    4b3c:	fb e2       	ldi	r31, 0x2B	; 43
    4b3e:	84 e0       	ldi	r24, 0x04	; 4
    4b40:	ef 01       	movw	r28, r30
    4b42:	19 92       	st	Y+, r1
    4b44:	8a 95       	dec	r24
    4b46:	e9 f7       	brne	.-6      	; 0x4b42 <_GLOBAL__I_65535_0_new.cpp.o.5800+0x2d6>
    4b48:	82 e5       	ldi	r24, 0x52	; 82
    4b4a:	9b e9       	ldi	r25, 0x9B	; 155
    4b4c:	80 93 06 28 	sts	0x2806, r24	; 0x802806 <BLE>
    4b50:	90 93 07 28 	sts	0x2807, r25	; 0x802807 <BLE+0x1>
    4b54:	10 92 4d 2a 	sts	0x2A4D, r1	; 0x802a4d <Serial2+0x2>
    4b58:	10 92 4e 2a 	sts	0x2A4E, r1	; 0x802a4e <Serial2+0x3>
    4b5c:	88 ee       	ldi	r24, 0xE8	; 232
    4b5e:	93 e0       	ldi	r25, 0x03	; 3
    4b60:	a0 e0       	ldi	r26, 0x00	; 0
    4b62:	b0 e0       	ldi	r27, 0x00	; 0
    4b64:	80 93 4f 2a 	sts	0x2A4F, r24	; 0x802a4f <Serial2+0x4>
    4b68:	90 93 50 2a 	sts	0x2A50, r25	; 0x802a50 <Serial2+0x5>
    4b6c:	a0 93 51 2a 	sts	0x2A51, r26	; 0x802a51 <Serial2+0x6>
    4b70:	b0 93 52 2a 	sts	0x2A52, r27	; 0x802a52 <Serial2+0x7>
    4b74:	8a e5       	ldi	r24, 0x5A	; 90
    4b76:	9b e9       	ldi	r25, 0x9B	; 155
    4b78:	80 93 4b 2a 	sts	0x2A4B, r24	; 0x802a4b <Serial2>
    4b7c:	90 93 4c 2a 	sts	0x2A4C, r25	; 0x802a4c <Serial2+0x1>
    4b80:	80 e0       	ldi	r24, 0x00	; 0
    4b82:	98 e0       	ldi	r25, 0x08	; 8
    4b84:	80 93 57 2a 	sts	0x2A57, r24	; 0x802a57 <Serial2+0xc>
    4b88:	90 93 58 2a 	sts	0x2A58, r25	; 0x802a58 <Serial2+0xd>
    4b8c:	87 e1       	ldi	r24, 0x17	; 23
    4b8e:	80 93 59 2a 	sts	0x2A59, r24	; 0x802a59 <Serial2+0xe>
    4b92:	88 e1       	ldi	r24, 0x18	; 24
    4b94:	80 93 5a 2a 	sts	0x2A5A, r24	; 0x802a5a <Serial2+0xf>
    4b98:	81 e0       	ldi	r24, 0x01	; 1
    4b9a:	80 93 5b 2a 	sts	0x2A5B, r24	; 0x802a5b <Serial2+0x10>
    4b9e:	10 92 5d 2a 	sts	0x2A5D, r1	; 0x802a5d <Serial2+0x12>
    4ba2:	10 92 5e 2a 	sts	0x2A5E, r1	; 0x802a5e <Serial2+0x13>
    4ba6:	10 92 5f 2a 	sts	0x2A5F, r1	; 0x802a5f <Serial2+0x14>
    4baa:	10 92 60 2a 	sts	0x2A60, r1	; 0x802a60 <Serial2+0x15>
    4bae:	82 e1       	ldi	r24, 0x12	; 18
    4bb0:	80 93 61 2a 	sts	0x2A61, r24	; 0x802a61 <Serial2+0x16>
    4bb4:	10 92 62 2a 	sts	0x2A62, r1	; 0x802a62 <Serial2+0x17>
    4bb8:	10 92 63 2a 	sts	0x2A63, r1	; 0x802a63 <Serial2+0x18>
    4bbc:	10 92 e4 2a 	sts	0x2AE4, r1	; 0x802ae4 <Serial2+0x99>
    4bc0:	10 92 e5 2a 	sts	0x2AE5, r1	; 0x802ae5 <Serial2+0x9a>
    4bc4:	df 91       	pop	r29
    4bc6:	cf 91       	pop	r28
    4bc8:	1f 91       	pop	r17
    4bca:	0f 91       	pop	r16
    4bcc:	08 95       	ret

00004bce <_GLOBAL__D_65535_1_new.cpp.o.5802>:
    4bce:	86 ee       	ldi	r24, 0xE6	; 230
    4bd0:	9a e2       	ldi	r25, 0x2A	; 42
    4bd2:	0e 94 68 04 	call	0x8d0	; 0x8d0 <_ZN8ATTClassD1Ev>
    4bd6:	89 e2       	ldi	r24, 0x29	; 41
    4bd8:	9b e2       	ldi	r25, 0x2B	; 43
    4bda:	0e 94 13 0b 	call	0x1626	; 0x1626 <_ZN8GAPClassD1Ev>
    4bde:	88 e5       	ldi	r24, 0x58	; 88
    4be0:	9b e2       	ldi	r25, 0x2B	; 43
    4be2:	0c 94 d8 04 	jmp	0x9b0	; 0x9b0 <_ZN9GATTClassD1Ev>

00004be6 <main>:
    4be6:	0f 93       	push	r16
    4be8:	1f 93       	push	r17
    4bea:	cf 93       	push	r28
    4bec:	df 93       	push	r29
    4bee:	cd b7       	in	r28, 0x3d	; 61
    4bf0:	de b7       	in	r29, 0x3e	; 62
    4bf2:	c0 55       	subi	r28, 0x50	; 80
    4bf4:	d1 09       	sbc	r29, r1
    4bf6:	cd bf       	out	0x3d, r28	; 61
    4bf8:	de bf       	out	0x3e, r29	; 62
    4bfa:	0e 94 76 0b 	call	0x16ec	; 0x16ec <_ZN3sio5setupEv>
    4bfe:	83 e2       	ldi	r24, 0x23	; 35
    4c00:	9f e9       	ldi	r25, 0x9F	; 159
    4c02:	0e 94 9f 0b 	call	0x173e	; 0x173e <_ZN3sio7PrintlnEPKc>
    4c06:	83 e3       	ldi	r24, 0x33	; 51
    4c08:	9f e9       	ldi	r25, 0x9F	; 159
    4c0a:	0e 94 9f 0b 	call	0x173e	; 0x173e <_ZN3sio7PrintlnEPKc>
    4c0e:	84 e4       	ldi	r24, 0x44	; 68
    4c10:	9f e9       	ldi	r25, 0x9F	; 159
    4c12:	0e 94 9f 0b 	call	0x173e	; 0x173e <_ZN3sio7PrintlnEPKc>
    4c16:	86 e0       	ldi	r24, 0x06	; 6
    4c18:	98 e2       	ldi	r25, 0x28	; 40
    4c1a:	0e 94 cf 1f 	call	0x3f9e	; 0x3f9e <_ZN14BLELocalDevice5beginEv>
    4c1e:	89 2b       	or	r24, r25
    4c20:	b1 f4       	brne	.+44     	; 0x4c4e <main+0x68>
    4c22:	85 e5       	ldi	r24, 0x55	; 85
    4c24:	9f e9       	ldi	r25, 0x9F	; 159
    4c26:	0e 94 9f 0b 	call	0x173e	; 0x173e <_ZN3sio7PrintlnEPKc>
    4c2a:	87 e0       	ldi	r24, 0x07	; 7
    4c2c:	80 93 62 04 	sts	0x0462, r24	; 0x800462 <__TEXT_REGION_LENGTH__+0x700462>
    4c30:	88 e0       	ldi	r24, 0x08	; 8
    4c32:	80 93 70 04 	sts	0x0470, r24	; 0x800470 <__TEXT_REGION_LENGTH__+0x700470>
    4c36:	80 91 70 04 	lds	r24, 0x0470	; 0x800470 <__TEXT_REGION_LENGTH__+0x700470>
    4c3a:	81 60       	ori	r24, 0x01	; 1
    4c3c:	80 93 70 04 	sts	0x0470, r24	; 0x800470 <__TEXT_REGION_LENGTH__+0x700470>
    4c40:	80 91 65 08 	lds	r24, 0x0865	; 0x800865 <__TEXT_REGION_LENGTH__+0x700865>
    4c44:	80 6a       	ori	r24, 0xA0	; 160
    4c46:	80 93 65 08 	sts	0x0865, r24	; 0x800865 <__TEXT_REGION_LENGTH__+0x700865>
    4c4a:	78 94       	sei
    4c4c:	ff cf       	rjmp	.-2      	; 0x4c4c <main+0x66>
    4c4e:	8a e6       	ldi	r24, 0x6A	; 106
    4c50:	9f e9       	ldi	r25, 0x9F	; 159
    4c52:	0e 94 9f 0b 	call	0x173e	; 0x173e <_ZN3sio7PrintlnEPKc>
    4c56:	60 e0       	ldi	r22, 0x00	; 0
    4c58:	86 e0       	ldi	r24, 0x06	; 6
    4c5a:	98 e2       	ldi	r25, 0x28	; 40
    4c5c:	0e 94 cd 0c 	call	0x199a	; 0x199a <_ZN14BLELocalDevice4scanEb>
    4c60:	04 c0       	rjmp	.+8      	; 0x4c6a <main+0x84>
    4c62:	ce 01       	movw	r24, r28
    4c64:	01 96       	adiw	r24, 0x01	; 1
    4c66:	0e 94 7c 01 	call	0x2f8	; 0x2f8 <_ZN9BLEDeviceD1Ev>
    4c6a:	66 e0       	ldi	r22, 0x06	; 6
    4c6c:	78 e2       	ldi	r23, 0x28	; 40
    4c6e:	ce 01       	movw	r24, r28
    4c70:	01 96       	adiw	r24, 0x01	; 1
    4c72:	0e 94 94 1e 	call	0x3d28	; 0x3d28 <_ZN14BLELocalDevice9availableEv>
    4c76:	ce 01       	movw	r24, r28
    4c78:	01 96       	adiw	r24, 0x01	; 1
    4c7a:	0e 94 7c 05 	call	0xaf8	; 0xaf8 <_ZNK9BLEDevicecvbEv>
    4c7e:	88 23       	and	r24, r24
    4c80:	81 f3       	breq	.-32     	; 0x4c62 <main+0x7c>
    4c82:	8b e7       	ldi	r24, 0x7B	; 123
    4c84:	9f e9       	ldi	r25, 0x9F	; 159
    4c86:	0e 94 9f 0b 	call	0x173e	; 0x173e <_ZN3sio7PrintlnEPKc>
    4c8a:	83 e9       	ldi	r24, 0x93	; 147
    4c8c:	9f e9       	ldi	r25, 0x9F	; 159
    4c8e:	0e 94 9f 0b 	call	0x173e	; 0x173e <_ZN3sio7PrintlnEPKc>
    4c92:	8b ea       	ldi	r24, 0xAB	; 171
    4c94:	9f e9       	ldi	r25, 0x9F	; 159
    4c96:	0e 94 93 0b 	call	0x1726	; 0x1726 <_ZN3sio5PrintEPKc>
    4c9a:	be 01       	movw	r22, r28
    4c9c:	6f 5f       	subi	r22, 0xFF	; 255
    4c9e:	7f 4f       	sbci	r23, 0xFF	; 255
    4ca0:	ce 01       	movw	r24, r28
    4ca2:	85 5b       	subi	r24, 0xB5	; 181
    4ca4:	9f 4f       	sbci	r25, 0xFF	; 255
    4ca6:	0e 94 6d 08 	call	0x10da	; 0x10da <_ZNK9BLEDevice7addressEv>
    4caa:	2d 96       	adiw	r28, 0x0d	; 13
    4cac:	8e ad       	ldd	r24, Y+62	; 0x3e
    4cae:	9f ad       	ldd	r25, Y+63	; 0x3f
    4cb0:	2d 97       	sbiw	r28, 0x0d	; 13
    4cb2:	0e 94 9f 0b 	call	0x173e	; 0x173e <_ZN3sio7PrintlnEPKc>
    4cb6:	ce 01       	movw	r24, r28
    4cb8:	85 5b       	subi	r24, 0xB5	; 181
    4cba:	9f 4f       	sbci	r25, 0xFF	; 255
    4cbc:	0e 94 5f 0a 	call	0x14be	; 0x14be <_ZN6StringD1Ev>
    4cc0:	ce 01       	movw	r24, r28
    4cc2:	01 96       	adiw	r24, 0x01	; 1
    4cc4:	0e 94 57 0b 	call	0x16ae	; 0x16ae <_ZNK9BLEDevice12hasLocalNameEv>
    4cc8:	81 11       	cpse	r24, r1
    4cca:	0f c0       	rjmp	.+30     	; 0x4cea <main+0x104>
    4ccc:	ce 01       	movw	r24, r28
    4cce:	01 96       	adiw	r24, 0x01	; 1
    4cd0:	0e 94 36 0b 	call	0x166c	; 0x166c <_ZNK9BLEDevice24hasAdvertisedServiceUuidEv>
    4cd4:	81 11       	cpse	r24, r1
    4cd6:	26 c0       	rjmp	.+76     	; 0x4d24 <main+0x13e>
    4cd8:	82 ed       	ldi	r24, 0xD2	; 210
    4cda:	9f e9       	ldi	r25, 0x9F	; 159
    4cdc:	0e 94 93 0b 	call	0x1726	; 0x1726 <_ZN3sio5PrintEPKc>
    4ce0:	87 e7       	ldi	r24, 0x77	; 119
    4ce2:	9b e9       	ldi	r25, 0x9B	; 155
    4ce4:	0e 94 9f 0b 	call	0x173e	; 0x173e <_ZN3sio7PrintlnEPKc>
    4ce8:	bc cf       	rjmp	.-136    	; 0x4c62 <main+0x7c>
    4cea:	85 eb       	ldi	r24, 0xB5	; 181
    4cec:	9f e9       	ldi	r25, 0x9F	; 159
    4cee:	0e 94 93 0b 	call	0x1726	; 0x1726 <_ZN3sio5PrintEPKc>
    4cf2:	be 01       	movw	r22, r28
    4cf4:	6f 5f       	subi	r22, 0xFF	; 255
    4cf6:	7f 4f       	sbci	r23, 0xFF	; 255
    4cf8:	ce 01       	movw	r24, r28
    4cfa:	85 5b       	subi	r24, 0xB5	; 181
    4cfc:	9f 4f       	sbci	r25, 0xFF	; 255
    4cfe:	0e 94 b3 09 	call	0x1366	; 0x1366 <_ZNK9BLEDevice9localNameEv>
    4d02:	2d 96       	adiw	r28, 0x0d	; 13
    4d04:	8e ad       	ldd	r24, Y+62	; 0x3e
    4d06:	9f ad       	ldd	r25, Y+63	; 0x3f
    4d08:	2d 97       	sbiw	r28, 0x0d	; 13
    4d0a:	0e 94 9f 0b 	call	0x173e	; 0x173e <_ZN3sio7PrintlnEPKc>
    4d0e:	ce 01       	movw	r24, r28
    4d10:	85 5b       	subi	r24, 0xB5	; 181
    4d12:	9f 4f       	sbci	r25, 0xFF	; 255
    4d14:	0e 94 5f 0a 	call	0x14be	; 0x14be <_ZN6StringD1Ev>
    4d18:	ce 01       	movw	r24, r28
    4d1a:	01 96       	adiw	r24, 0x01	; 1
    4d1c:	0e 94 36 0b 	call	0x166c	; 0x166c <_ZNK9BLEDevice24hasAdvertisedServiceUuidEv>
    4d20:	88 23       	and	r24, r24
    4d22:	d1 f2       	breq	.-76     	; 0x4cd8 <main+0xf2>
    4d24:	82 ec       	ldi	r24, 0xC2	; 194
    4d26:	9f e9       	ldi	r25, 0x9F	; 159
    4d28:	0e 94 93 0b 	call	0x1726	; 0x1726 <_ZN3sio5PrintEPKc>
    4d2c:	10 e0       	ldi	r17, 0x00	; 0
    4d2e:	00 e0       	ldi	r16, 0x00	; 0
    4d30:	1a c0       	rjmp	.+52     	; 0x4d66 <main+0x180>
    4d32:	a8 01       	movw	r20, r16
    4d34:	be 01       	movw	r22, r28
    4d36:	6f 5f       	subi	r22, 0xFF	; 255
    4d38:	7f 4f       	sbci	r23, 0xFF	; 255
    4d3a:	ce 01       	movw	r24, r28
    4d3c:	85 5b       	subi	r24, 0xB5	; 181
    4d3e:	9f 4f       	sbci	r25, 0xFF	; 255
    4d40:	0e 94 d2 08 	call	0x11a4	; 0x11a4 <_ZNK9BLEDevice21advertisedServiceUuidEi>
    4d44:	2d 96       	adiw	r28, 0x0d	; 13
    4d46:	8e ad       	ldd	r24, Y+62	; 0x3e
    4d48:	9f ad       	ldd	r25, Y+63	; 0x3f
    4d4a:	2d 97       	sbiw	r28, 0x0d	; 13
    4d4c:	0e 94 93 0b 	call	0x1726	; 0x1726 <_ZN3sio5PrintEPKc>
    4d50:	ce 01       	movw	r24, r28
    4d52:	85 5b       	subi	r24, 0xB5	; 181
    4d54:	9f 4f       	sbci	r25, 0xFF	; 255
    4d56:	0e 94 5f 0a 	call	0x14be	; 0x14be <_ZN6StringD1Ev>
    4d5a:	86 e7       	ldi	r24, 0x76	; 118
    4d5c:	9c e9       	ldi	r25, 0x9C	; 156
    4d5e:	0e 94 93 0b 	call	0x1726	; 0x1726 <_ZN3sio5PrintEPKc>
    4d62:	0f 5f       	subi	r16, 0xFF	; 255
    4d64:	1f 4f       	sbci	r17, 0xFF	; 255
    4d66:	ce 01       	movw	r24, r28
    4d68:	01 96       	adiw	r24, 0x01	; 1
    4d6a:	0e 94 24 0a 	call	0x1448	; 0x1448 <_ZNK9BLEDevice26advertisedServiceUuidCountEv>
    4d6e:	08 17       	cp	r16, r24
    4d70:	19 07       	cpc	r17, r25
    4d72:	fc f2       	brlt	.-66     	; 0x4d32 <main+0x14c>
    4d74:	87 e7       	ldi	r24, 0x77	; 119
    4d76:	9b e9       	ldi	r25, 0x9B	; 155
    4d78:	0e 94 9f 0b 	call	0x173e	; 0x173e <_ZN3sio7PrintlnEPKc>
    4d7c:	ad cf       	rjmp	.-166    	; 0x4cd8 <main+0xf2>

00004d7e <strtoul>:
    4d7e:	b0 e0       	ldi	r27, 0x00	; 0
    4d80:	a0 e0       	ldi	r26, 0x00	; 0
    4d82:	e5 ec       	ldi	r30, 0xC5	; 197
    4d84:	f6 e2       	ldi	r31, 0x26	; 38
    4d86:	0c 94 1e 28 	jmp	0x503c	; 0x503c <__prologue_saves__+0x2>
    4d8a:	5c 01       	movw	r10, r24
    4d8c:	6b 01       	movw	r12, r22
    4d8e:	7a 01       	movw	r14, r20
    4d90:	61 15       	cp	r22, r1
    4d92:	71 05       	cpc	r23, r1
    4d94:	19 f0       	breq	.+6      	; 0x4d9c <strtoul+0x1e>
    4d96:	fb 01       	movw	r30, r22
    4d98:	80 83       	st	Z, r24
    4d9a:	91 83       	std	Z+1, r25	; 0x01
    4d9c:	e1 14       	cp	r14, r1
    4d9e:	f1 04       	cpc	r15, r1
    4da0:	49 f0       	breq	.+18     	; 0x4db4 <strtoul+0x36>
    4da2:	c7 01       	movw	r24, r14
    4da4:	02 97       	sbiw	r24, 0x02	; 2
    4da6:	83 97       	sbiw	r24, 0x23	; 35
    4da8:	28 f0       	brcs	.+10     	; 0x4db4 <strtoul+0x36>
    4daa:	60 e0       	ldi	r22, 0x00	; 0
    4dac:	70 e0       	ldi	r23, 0x00	; 0
    4dae:	cb 01       	movw	r24, r22
    4db0:	9c c0       	rjmp	.+312    	; 0x4eea <strtoul+0x16c>
    4db2:	5e 01       	movw	r10, r28
    4db4:	e5 01       	movw	r28, r10
    4db6:	21 96       	adiw	r28, 0x01	; 1
    4db8:	f5 01       	movw	r30, r10
    4dba:	10 81       	ld	r17, Z
    4dbc:	81 2f       	mov	r24, r17
    4dbe:	90 e0       	ldi	r25, 0x00	; 0
    4dc0:	0e 94 aa 27 	call	0x4f54	; 0x4f54 <isspace>
    4dc4:	89 2b       	or	r24, r25
    4dc6:	a9 f7       	brne	.-22     	; 0x4db2 <strtoul+0x34>
    4dc8:	1d 32       	cpi	r17, 0x2D	; 45
    4dca:	09 f0       	breq	.+2      	; 0x4dce <strtoul+0x50>
    4dcc:	56 c0       	rjmp	.+172    	; 0x4e7a <strtoul+0xfc>
    4dce:	21 96       	adiw	r28, 0x01	; 1
    4dd0:	f5 01       	movw	r30, r10
    4dd2:	11 81       	ldd	r17, Z+1	; 0x01
    4dd4:	01 e0       	ldi	r16, 0x01	; 1
    4dd6:	e1 14       	cp	r14, r1
    4dd8:	f1 04       	cpc	r15, r1
    4dda:	09 f4       	brne	.+2      	; 0x4dde <strtoul+0x60>
    4ddc:	ae c0       	rjmp	.+348    	; 0x4f3a <strtoul+0x1bc>
    4dde:	f0 e1       	ldi	r31, 0x10	; 16
    4de0:	ef 16       	cp	r14, r31
    4de2:	f1 04       	cpc	r15, r1
    4de4:	09 f0       	breq	.+2      	; 0x4de8 <strtoul+0x6a>
    4de6:	8e c0       	rjmp	.+284    	; 0x4f04 <strtoul+0x186>
    4de8:	10 33       	cpi	r17, 0x30	; 48
    4dea:	41 f4       	brne	.+16     	; 0x4dfc <strtoul+0x7e>
    4dec:	88 81       	ld	r24, Y
    4dee:	8f 7d       	andi	r24, 0xDF	; 223
    4df0:	88 35       	cpi	r24, 0x58	; 88
    4df2:	09 f0       	breq	.+2      	; 0x4df6 <strtoul+0x78>
    4df4:	83 c0       	rjmp	.+262    	; 0x4efc <strtoul+0x17e>
    4df6:	19 81       	ldd	r17, Y+1	; 0x01
    4df8:	22 96       	adiw	r28, 0x02	; 2
    4dfa:	02 60       	ori	r16, 0x02	; 2
    4dfc:	e0 e1       	ldi	r30, 0x10	; 16
    4dfe:	ee 2e       	mov	r14, r30
    4e00:	f1 2c       	mov	r15, r1
    4e02:	88 24       	eor	r8, r8
    4e04:	8a 94       	dec	r8
    4e06:	98 2c       	mov	r9, r8
    4e08:	a8 2c       	mov	r10, r8
    4e0a:	ff e0       	ldi	r31, 0x0F	; 15
    4e0c:	bf 2e       	mov	r11, r31
    4e0e:	20 e0       	ldi	r18, 0x00	; 0
    4e10:	60 e0       	ldi	r22, 0x00	; 0
    4e12:	70 e0       	ldi	r23, 0x00	; 0
    4e14:	cb 01       	movw	r24, r22
    4e16:	27 01       	movw	r4, r14
    4e18:	0f 2c       	mov	r0, r15
    4e1a:	00 0c       	add	r0, r0
    4e1c:	66 08       	sbc	r6, r6
    4e1e:	77 08       	sbc	r7, r7
    4e20:	fe 01       	movw	r30, r28
    4e22:	50 ed       	ldi	r21, 0xD0	; 208
    4e24:	35 2e       	mov	r3, r21
    4e26:	31 0e       	add	r3, r17
    4e28:	39 e0       	ldi	r19, 0x09	; 9
    4e2a:	33 15       	cp	r19, r3
    4e2c:	38 f4       	brcc	.+14     	; 0x4e3c <strtoul+0xbe>
    4e2e:	3f eb       	ldi	r19, 0xBF	; 191
    4e30:	31 0f       	add	r19, r17
    4e32:	3a 31       	cpi	r19, 0x1A	; 26
    4e34:	a0 f5       	brcc	.+104    	; 0x4e9e <strtoul+0x120>
    4e36:	49 ec       	ldi	r20, 0xC9	; 201
    4e38:	34 2e       	mov	r3, r20
    4e3a:	31 0e       	add	r3, r17
    4e3c:	3e 14       	cp	r3, r14
    4e3e:	1f 04       	cpc	r1, r15
    4e40:	bc f5       	brge	.+110    	; 0x4eb0 <strtoul+0x132>
    4e42:	2f 3f       	cpi	r18, 0xFF	; 255
    4e44:	b9 f0       	breq	.+46     	; 0x4e74 <strtoul+0xf6>
    4e46:	86 16       	cp	r8, r22
    4e48:	97 06       	cpc	r9, r23
    4e4a:	a8 06       	cpc	r10, r24
    4e4c:	b9 06       	cpc	r11, r25
    4e4e:	70 f1       	brcs	.+92     	; 0x4eac <strtoul+0x12e>
    4e50:	a3 01       	movw	r20, r6
    4e52:	92 01       	movw	r18, r4
    4e54:	0e 94 e0 27 	call	0x4fc0	; 0x4fc0 <__mulsi3>
    4e58:	23 2d       	mov	r18, r3
    4e5a:	30 e0       	ldi	r19, 0x00	; 0
    4e5c:	50 e0       	ldi	r21, 0x00	; 0
    4e5e:	40 e0       	ldi	r20, 0x00	; 0
    4e60:	62 0f       	add	r22, r18
    4e62:	73 1f       	adc	r23, r19
    4e64:	84 1f       	adc	r24, r20
    4e66:	95 1f       	adc	r25, r21
    4e68:	62 17       	cp	r22, r18
    4e6a:	73 07       	cpc	r23, r19
    4e6c:	84 07       	cpc	r24, r20
    4e6e:	95 07       	cpc	r25, r21
    4e70:	e8 f0       	brcs	.+58     	; 0x4eac <strtoul+0x12e>
    4e72:	21 e0       	ldi	r18, 0x01	; 1
    4e74:	21 96       	adiw	r28, 0x01	; 1
    4e76:	10 81       	ld	r17, Z
    4e78:	d3 cf       	rjmp	.-90     	; 0x4e20 <strtoul+0xa2>
    4e7a:	1b 32       	cpi	r17, 0x2B	; 43
    4e7c:	21 f4       	brne	.+8      	; 0x4e86 <strtoul+0x108>
    4e7e:	e5 01       	movw	r28, r10
    4e80:	22 96       	adiw	r28, 0x02	; 2
    4e82:	f5 01       	movw	r30, r10
    4e84:	11 81       	ldd	r17, Z+1	; 0x01
    4e86:	00 e0       	ldi	r16, 0x00	; 0
    4e88:	a6 cf       	rjmp	.-180    	; 0x4dd6 <strtoul+0x58>
    4e8a:	78 e0       	ldi	r23, 0x08	; 8
    4e8c:	e7 2e       	mov	r14, r23
    4e8e:	f1 2c       	mov	r15, r1
    4e90:	88 24       	eor	r8, r8
    4e92:	8a 94       	dec	r8
    4e94:	98 2c       	mov	r9, r8
    4e96:	a8 2c       	mov	r10, r8
    4e98:	6f e1       	ldi	r22, 0x1F	; 31
    4e9a:	b6 2e       	mov	r11, r22
    4e9c:	b8 cf       	rjmp	.-144    	; 0x4e0e <strtoul+0x90>
    4e9e:	3f e9       	ldi	r19, 0x9F	; 159
    4ea0:	31 0f       	add	r19, r17
    4ea2:	3a 31       	cpi	r19, 0x1A	; 26
    4ea4:	28 f4       	brcc	.+10     	; 0x4eb0 <strtoul+0x132>
    4ea6:	39 ea       	ldi	r19, 0xA9	; 169
    4ea8:	33 2e       	mov	r3, r19
    4eaa:	c7 cf       	rjmp	.-114    	; 0x4e3a <strtoul+0xbc>
    4eac:	2f ef       	ldi	r18, 0xFF	; 255
    4eae:	e2 cf       	rjmp	.-60     	; 0x4e74 <strtoul+0xf6>
    4eb0:	c1 14       	cp	r12, r1
    4eb2:	d1 04       	cpc	r13, r1
    4eb4:	31 f0       	breq	.+12     	; 0x4ec2 <strtoul+0x144>
    4eb6:	22 23       	and	r18, r18
    4eb8:	e9 f0       	breq	.+58     	; 0x4ef4 <strtoul+0x176>
    4eba:	21 97       	sbiw	r28, 0x01	; 1
    4ebc:	f6 01       	movw	r30, r12
    4ebe:	c0 83       	st	Z, r28
    4ec0:	d1 83       	std	Z+1, r29	; 0x01
    4ec2:	00 ff       	sbrs	r16, 0
    4ec4:	07 c0       	rjmp	.+14     	; 0x4ed4 <strtoul+0x156>
    4ec6:	90 95       	com	r25
    4ec8:	80 95       	com	r24
    4eca:	70 95       	com	r23
    4ecc:	61 95       	neg	r22
    4ece:	7f 4f       	sbci	r23, 0xFF	; 255
    4ed0:	8f 4f       	sbci	r24, 0xFF	; 255
    4ed2:	9f 4f       	sbci	r25, 0xFF	; 255
    4ed4:	2f 3f       	cpi	r18, 0xFF	; 255
    4ed6:	49 f4       	brne	.+18     	; 0x4eea <strtoul+0x16c>
    4ed8:	82 e2       	ldi	r24, 0x22	; 34
    4eda:	90 e0       	ldi	r25, 0x00	; 0
    4edc:	80 93 3b 2c 	sts	0x2C3B, r24	; 0x802c3b <errno>
    4ee0:	90 93 3c 2c 	sts	0x2C3C, r25	; 0x802c3c <errno+0x1>
    4ee4:	6f ef       	ldi	r22, 0xFF	; 255
    4ee6:	7f ef       	ldi	r23, 0xFF	; 255
    4ee8:	cb 01       	movw	r24, r22
    4eea:	cd b7       	in	r28, 0x3d	; 61
    4eec:	de b7       	in	r29, 0x3e	; 62
    4eee:	e1 e1       	ldi	r30, 0x11	; 17
    4ef0:	0c 94 37 28 	jmp	0x506e	; 0x506e <__epilogue_restores__+0x2>
    4ef4:	01 ff       	sbrs	r16, 1
    4ef6:	e5 cf       	rjmp	.-54     	; 0x4ec2 <strtoul+0x144>
    4ef8:	22 97       	sbiw	r28, 0x02	; 2
    4efa:	e0 cf       	rjmp	.-64     	; 0x4ebc <strtoul+0x13e>
    4efc:	10 e3       	ldi	r17, 0x30	; 48
    4efe:	e1 14       	cp	r14, r1
    4f00:	f1 04       	cpc	r15, r1
    4f02:	19 f2       	breq	.-122    	; 0x4e8a <strtoul+0x10c>
    4f04:	3a e0       	ldi	r19, 0x0A	; 10
    4f06:	e3 16       	cp	r14, r19
    4f08:	f1 04       	cpc	r15, r1
    4f0a:	e9 f0       	breq	.+58     	; 0x4f46 <strtoul+0x1c8>
    4f0c:	80 e1       	ldi	r24, 0x10	; 16
    4f0e:	e8 16       	cp	r14, r24
    4f10:	f1 04       	cpc	r15, r1
    4f12:	09 f4       	brne	.+2      	; 0x4f16 <strtoul+0x198>
    4f14:	73 cf       	rjmp	.-282    	; 0x4dfc <strtoul+0x7e>
    4f16:	e8 e0       	ldi	r30, 0x08	; 8
    4f18:	ee 16       	cp	r14, r30
    4f1a:	f1 04       	cpc	r15, r1
    4f1c:	09 f4       	brne	.+2      	; 0x4f20 <strtoul+0x1a2>
    4f1e:	b8 cf       	rjmp	.-144    	; 0x4e90 <strtoul+0x112>
    4f20:	6f ef       	ldi	r22, 0xFF	; 255
    4f22:	7f ef       	ldi	r23, 0xFF	; 255
    4f24:	cb 01       	movw	r24, r22
    4f26:	97 01       	movw	r18, r14
    4f28:	0f 2c       	mov	r0, r15
    4f2a:	00 0c       	add	r0, r0
    4f2c:	44 0b       	sbc	r20, r20
    4f2e:	55 0b       	sbc	r21, r21
    4f30:	0e 94 f0 27 	call	0x4fe0	; 0x4fe0 <__udivmodsi4>
    4f34:	49 01       	movw	r8, r18
    4f36:	5a 01       	movw	r10, r20
    4f38:	6a cf       	rjmp	.-300    	; 0x4e0e <strtoul+0x90>
    4f3a:	10 33       	cpi	r17, 0x30	; 48
    4f3c:	09 f4       	brne	.+2      	; 0x4f40 <strtoul+0x1c2>
    4f3e:	56 cf       	rjmp	.-340    	; 0x4dec <strtoul+0x6e>
    4f40:	9a e0       	ldi	r25, 0x0A	; 10
    4f42:	e9 2e       	mov	r14, r25
    4f44:	f1 2c       	mov	r15, r1
    4f46:	89 e9       	ldi	r24, 0x99	; 153
    4f48:	88 2e       	mov	r8, r24
    4f4a:	98 2c       	mov	r9, r8
    4f4c:	a8 2c       	mov	r10, r8
    4f4e:	89 e1       	ldi	r24, 0x19	; 25
    4f50:	b8 2e       	mov	r11, r24
    4f52:	5d cf       	rjmp	.-326    	; 0x4e0e <strtoul+0x90>

00004f54 <isspace>:
    4f54:	91 11       	cpse	r25, r1
    4f56:	0c 94 cd 27 	jmp	0x4f9a	; 0x4f9a <__ctype_isfalse>
    4f5a:	80 32       	cpi	r24, 0x20	; 32
    4f5c:	19 f0       	breq	.+6      	; 0x4f64 <isspace+0x10>
    4f5e:	89 50       	subi	r24, 0x09	; 9
    4f60:	85 50       	subi	r24, 0x05	; 5
    4f62:	c8 f7       	brcc	.-14     	; 0x4f56 <isspace+0x2>
    4f64:	08 95       	ret

00004f66 <__utoa_ncheck>:
    4f66:	bb 27       	eor	r27, r27

00004f68 <__utoa_common>:
    4f68:	fb 01       	movw	r30, r22
    4f6a:	55 27       	eor	r21, r21
    4f6c:	aa 27       	eor	r26, r26
    4f6e:	88 0f       	add	r24, r24
    4f70:	99 1f       	adc	r25, r25
    4f72:	aa 1f       	adc	r26, r26
    4f74:	a4 17       	cp	r26, r20
    4f76:	10 f0       	brcs	.+4      	; 0x4f7c <__utoa_common+0x14>
    4f78:	a4 1b       	sub	r26, r20
    4f7a:	83 95       	inc	r24
    4f7c:	50 51       	subi	r21, 0x10	; 16
    4f7e:	b9 f7       	brne	.-18     	; 0x4f6e <__utoa_common+0x6>
    4f80:	a0 5d       	subi	r26, 0xD0	; 208
    4f82:	aa 33       	cpi	r26, 0x3A	; 58
    4f84:	08 f0       	brcs	.+2      	; 0x4f88 <__utoa_common+0x20>
    4f86:	a9 5d       	subi	r26, 0xD9	; 217
    4f88:	a1 93       	st	Z+, r26
    4f8a:	00 97       	sbiw	r24, 0x00	; 0
    4f8c:	79 f7       	brne	.-34     	; 0x4f6c <__utoa_common+0x4>
    4f8e:	b1 11       	cpse	r27, r1
    4f90:	b1 93       	st	Z+, r27
    4f92:	11 92       	st	Z+, r1
    4f94:	cb 01       	movw	r24, r22
    4f96:	0c 94 d0 27 	jmp	0x4fa0	; 0x4fa0 <strrev>

00004f9a <__ctype_isfalse>:
    4f9a:	99 27       	eor	r25, r25
    4f9c:	88 27       	eor	r24, r24

00004f9e <__ctype_istrue>:
    4f9e:	08 95       	ret

00004fa0 <strrev>:
    4fa0:	dc 01       	movw	r26, r24
    4fa2:	fc 01       	movw	r30, r24
    4fa4:	67 2f       	mov	r22, r23
    4fa6:	71 91       	ld	r23, Z+
    4fa8:	77 23       	and	r23, r23
    4faa:	e1 f7       	brne	.-8      	; 0x4fa4 <strrev+0x4>
    4fac:	32 97       	sbiw	r30, 0x02	; 2
    4fae:	04 c0       	rjmp	.+8      	; 0x4fb8 <strrev+0x18>
    4fb0:	7c 91       	ld	r23, X
    4fb2:	6d 93       	st	X+, r22
    4fb4:	70 83       	st	Z, r23
    4fb6:	62 91       	ld	r22, -Z
    4fb8:	ae 17       	cp	r26, r30
    4fba:	bf 07       	cpc	r27, r31
    4fbc:	c8 f3       	brcs	.-14     	; 0x4fb0 <strrev+0x10>
    4fbe:	08 95       	ret

00004fc0 <__mulsi3>:
    4fc0:	db 01       	movw	r26, r22
    4fc2:	8f 93       	push	r24
    4fc4:	9f 93       	push	r25
    4fc6:	0e 94 12 28 	call	0x5024	; 0x5024 <__muluhisi3>
    4fca:	bf 91       	pop	r27
    4fcc:	af 91       	pop	r26
    4fce:	a2 9f       	mul	r26, r18
    4fd0:	80 0d       	add	r24, r0
    4fd2:	91 1d       	adc	r25, r1
    4fd4:	a3 9f       	mul	r26, r19
    4fd6:	90 0d       	add	r25, r0
    4fd8:	b2 9f       	mul	r27, r18
    4fda:	90 0d       	add	r25, r0
    4fdc:	11 24       	eor	r1, r1
    4fde:	08 95       	ret

00004fe0 <__udivmodsi4>:
    4fe0:	a1 e2       	ldi	r26, 0x21	; 33
    4fe2:	1a 2e       	mov	r1, r26
    4fe4:	aa 1b       	sub	r26, r26
    4fe6:	bb 1b       	sub	r27, r27
    4fe8:	fd 01       	movw	r30, r26
    4fea:	0d c0       	rjmp	.+26     	; 0x5006 <__udivmodsi4_ep>

00004fec <__udivmodsi4_loop>:
    4fec:	aa 1f       	adc	r26, r26
    4fee:	bb 1f       	adc	r27, r27
    4ff0:	ee 1f       	adc	r30, r30
    4ff2:	ff 1f       	adc	r31, r31
    4ff4:	a2 17       	cp	r26, r18
    4ff6:	b3 07       	cpc	r27, r19
    4ff8:	e4 07       	cpc	r30, r20
    4ffa:	f5 07       	cpc	r31, r21
    4ffc:	20 f0       	brcs	.+8      	; 0x5006 <__udivmodsi4_ep>
    4ffe:	a2 1b       	sub	r26, r18
    5000:	b3 0b       	sbc	r27, r19
    5002:	e4 0b       	sbc	r30, r20
    5004:	f5 0b       	sbc	r31, r21

00005006 <__udivmodsi4_ep>:
    5006:	66 1f       	adc	r22, r22
    5008:	77 1f       	adc	r23, r23
    500a:	88 1f       	adc	r24, r24
    500c:	99 1f       	adc	r25, r25
    500e:	1a 94       	dec	r1
    5010:	69 f7       	brne	.-38     	; 0x4fec <__udivmodsi4_loop>
    5012:	60 95       	com	r22
    5014:	70 95       	com	r23
    5016:	80 95       	com	r24
    5018:	90 95       	com	r25
    501a:	9b 01       	movw	r18, r22
    501c:	ac 01       	movw	r20, r24
    501e:	bd 01       	movw	r22, r26
    5020:	cf 01       	movw	r24, r30
    5022:	08 95       	ret

00005024 <__muluhisi3>:
    5024:	0e 94 4e 28 	call	0x509c	; 0x509c <__umulhisi3>
    5028:	a5 9f       	mul	r26, r21
    502a:	90 0d       	add	r25, r0
    502c:	b4 9f       	mul	r27, r20
    502e:	90 0d       	add	r25, r0
    5030:	a4 9f       	mul	r26, r20
    5032:	80 0d       	add	r24, r0
    5034:	91 1d       	adc	r25, r1
    5036:	11 24       	eor	r1, r1
    5038:	08 95       	ret

0000503a <__prologue_saves__>:
    503a:	2f 92       	push	r2
    503c:	3f 92       	push	r3
    503e:	4f 92       	push	r4
    5040:	5f 92       	push	r5
    5042:	6f 92       	push	r6
    5044:	7f 92       	push	r7
    5046:	8f 92       	push	r8
    5048:	9f 92       	push	r9
    504a:	af 92       	push	r10
    504c:	bf 92       	push	r11
    504e:	cf 92       	push	r12
    5050:	df 92       	push	r13
    5052:	ef 92       	push	r14
    5054:	ff 92       	push	r15
    5056:	0f 93       	push	r16
    5058:	1f 93       	push	r17
    505a:	cf 93       	push	r28
    505c:	df 93       	push	r29
    505e:	cd b7       	in	r28, 0x3d	; 61
    5060:	de b7       	in	r29, 0x3e	; 62
    5062:	ca 1b       	sub	r28, r26
    5064:	db 0b       	sbc	r29, r27
    5066:	cd bf       	out	0x3d, r28	; 61
    5068:	de bf       	out	0x3e, r29	; 62
    506a:	09 94       	ijmp

0000506c <__epilogue_restores__>:
    506c:	2a 88       	ldd	r2, Y+18	; 0x12
    506e:	39 88       	ldd	r3, Y+17	; 0x11
    5070:	48 88       	ldd	r4, Y+16	; 0x10
    5072:	5f 84       	ldd	r5, Y+15	; 0x0f
    5074:	6e 84       	ldd	r6, Y+14	; 0x0e
    5076:	7d 84       	ldd	r7, Y+13	; 0x0d
    5078:	8c 84       	ldd	r8, Y+12	; 0x0c
    507a:	9b 84       	ldd	r9, Y+11	; 0x0b
    507c:	aa 84       	ldd	r10, Y+10	; 0x0a
    507e:	b9 84       	ldd	r11, Y+9	; 0x09
    5080:	c8 84       	ldd	r12, Y+8	; 0x08
    5082:	df 80       	ldd	r13, Y+7	; 0x07
    5084:	ee 80       	ldd	r14, Y+6	; 0x06
    5086:	fd 80       	ldd	r15, Y+5	; 0x05
    5088:	0c 81       	ldd	r16, Y+4	; 0x04
    508a:	1b 81       	ldd	r17, Y+3	; 0x03
    508c:	aa 81       	ldd	r26, Y+2	; 0x02
    508e:	b9 81       	ldd	r27, Y+1	; 0x01
    5090:	ce 0f       	add	r28, r30
    5092:	d1 1d       	adc	r29, r1
    5094:	cd bf       	out	0x3d, r28	; 61
    5096:	de bf       	out	0x3e, r29	; 62
    5098:	ed 01       	movw	r28, r26
    509a:	08 95       	ret

0000509c <__umulhisi3>:
    509c:	a2 9f       	mul	r26, r18
    509e:	b0 01       	movw	r22, r0
    50a0:	b3 9f       	mul	r27, r19
    50a2:	c0 01       	movw	r24, r0
    50a4:	a3 9f       	mul	r26, r19
    50a6:	70 0d       	add	r23, r0
    50a8:	81 1d       	adc	r24, r1
    50aa:	11 24       	eor	r1, r1
    50ac:	91 1d       	adc	r25, r1
    50ae:	b2 9f       	mul	r27, r18
    50b0:	70 0d       	add	r23, r0
    50b2:	81 1d       	adc	r24, r1
    50b4:	11 24       	eor	r1, r1
    50b6:	91 1d       	adc	r25, r1
    50b8:	08 95       	ret

000050ba <__udivmodhi4>:
    50ba:	aa 1b       	sub	r26, r26
    50bc:	bb 1b       	sub	r27, r27
    50be:	51 e1       	ldi	r21, 0x11	; 17
    50c0:	07 c0       	rjmp	.+14     	; 0x50d0 <__udivmodhi4_ep>

000050c2 <__udivmodhi4_loop>:
    50c2:	aa 1f       	adc	r26, r26
    50c4:	bb 1f       	adc	r27, r27
    50c6:	a6 17       	cp	r26, r22
    50c8:	b7 07       	cpc	r27, r23
    50ca:	10 f0       	brcs	.+4      	; 0x50d0 <__udivmodhi4_ep>
    50cc:	a6 1b       	sub	r26, r22
    50ce:	b7 0b       	sbc	r27, r23

000050d0 <__udivmodhi4_ep>:
    50d0:	88 1f       	adc	r24, r24
    50d2:	99 1f       	adc	r25, r25
    50d4:	5a 95       	dec	r21
    50d6:	a9 f7       	brne	.-22     	; 0x50c2 <__udivmodhi4_loop>
    50d8:	80 95       	com	r24
    50da:	90 95       	com	r25
    50dc:	bc 01       	movw	r22, r24
    50de:	cd 01       	movw	r24, r26
    50e0:	08 95       	ret

000050e2 <__divmodsi4>:
    50e2:	05 2e       	mov	r0, r21
    50e4:	97 fb       	bst	r25, 7
    50e6:	1e f4       	brtc	.+6      	; 0x50ee <__divmodsi4+0xc>
    50e8:	00 94       	com	r0
    50ea:	0e 94 88 28 	call	0x5110	; 0x5110 <__negsi2>
    50ee:	57 fd       	sbrc	r21, 7
    50f0:	07 d0       	rcall	.+14     	; 0x5100 <__divmodsi4_neg2>
    50f2:	0e 94 f0 27 	call	0x4fe0	; 0x4fe0 <__udivmodsi4>
    50f6:	07 fc       	sbrc	r0, 7
    50f8:	03 d0       	rcall	.+6      	; 0x5100 <__divmodsi4_neg2>
    50fa:	4e f4       	brtc	.+18     	; 0x510e <__divmodsi4_exit>
    50fc:	0c 94 88 28 	jmp	0x5110	; 0x5110 <__negsi2>

00005100 <__divmodsi4_neg2>:
    5100:	50 95       	com	r21
    5102:	40 95       	com	r20
    5104:	30 95       	com	r19
    5106:	21 95       	neg	r18
    5108:	3f 4f       	sbci	r19, 0xFF	; 255
    510a:	4f 4f       	sbci	r20, 0xFF	; 255
    510c:	5f 4f       	sbci	r21, 0xFF	; 255

0000510e <__divmodsi4_exit>:
    510e:	08 95       	ret

00005110 <__negsi2>:
    5110:	90 95       	com	r25
    5112:	80 95       	com	r24
    5114:	70 95       	com	r23
    5116:	61 95       	neg	r22
    5118:	7f 4f       	sbci	r23, 0xFF	; 255
    511a:	8f 4f       	sbci	r24, 0xFF	; 255
    511c:	9f 4f       	sbci	r25, 0xFF	; 255
    511e:	08 95       	ret

00005120 <__mulshisi3>:
    5120:	b7 ff       	sbrs	r27, 7
    5122:	0c 94 12 28 	jmp	0x5024	; 0x5024 <__muluhisi3>

00005126 <__mulohisi3>:
    5126:	0e 94 12 28 	call	0x5024	; 0x5024 <__muluhisi3>
    512a:	82 1b       	sub	r24, r18
    512c:	93 0b       	sbc	r25, r19
    512e:	08 95       	ret

00005130 <__tablejump2__>:
    5130:	ee 0f       	add	r30, r30
    5132:	ff 1f       	adc	r31, r31
    5134:	05 90       	lpm	r0, Z+
    5136:	f4 91       	lpm	r31, Z
    5138:	e0 2d       	mov	r30, r0
    513a:	09 94       	ijmp

0000513c <malloc>:
    513c:	0f 93       	push	r16
    513e:	1f 93       	push	r17
    5140:	cf 93       	push	r28
    5142:	df 93       	push	r29
    5144:	82 30       	cpi	r24, 0x02	; 2
    5146:	91 05       	cpc	r25, r1
    5148:	10 f4       	brcc	.+4      	; 0x514e <malloc+0x12>
    514a:	82 e0       	ldi	r24, 0x02	; 2
    514c:	90 e0       	ldi	r25, 0x00	; 0
    514e:	e0 91 3f 2c 	lds	r30, 0x2C3F	; 0x802c3f <__flp>
    5152:	f0 91 40 2c 	lds	r31, 0x2C40	; 0x802c40 <__flp+0x1>
    5156:	30 e0       	ldi	r19, 0x00	; 0
    5158:	20 e0       	ldi	r18, 0x00	; 0
    515a:	b0 e0       	ldi	r27, 0x00	; 0
    515c:	a0 e0       	ldi	r26, 0x00	; 0
    515e:	30 97       	sbiw	r30, 0x00	; 0
    5160:	99 f4       	brne	.+38     	; 0x5188 <malloc+0x4c>
    5162:	21 15       	cp	r18, r1
    5164:	31 05       	cpc	r19, r1
    5166:	09 f4       	brne	.+2      	; 0x516a <malloc+0x2e>
    5168:	4a c0       	rjmp	.+148    	; 0x51fe <malloc+0xc2>
    516a:	28 1b       	sub	r18, r24
    516c:	39 0b       	sbc	r19, r25
    516e:	24 30       	cpi	r18, 0x04	; 4
    5170:	31 05       	cpc	r19, r1
    5172:	d8 f5       	brcc	.+118    	; 0x51ea <malloc+0xae>
    5174:	8a 81       	ldd	r24, Y+2	; 0x02
    5176:	9b 81       	ldd	r25, Y+3	; 0x03
    5178:	61 15       	cp	r22, r1
    517a:	71 05       	cpc	r23, r1
    517c:	89 f1       	breq	.+98     	; 0x51e0 <malloc+0xa4>
    517e:	fb 01       	movw	r30, r22
    5180:	82 83       	std	Z+2, r24	; 0x02
    5182:	93 83       	std	Z+3, r25	; 0x03
    5184:	fe 01       	movw	r30, r28
    5186:	11 c0       	rjmp	.+34     	; 0x51aa <malloc+0x6e>
    5188:	40 81       	ld	r20, Z
    518a:	51 81       	ldd	r21, Z+1	; 0x01
    518c:	02 81       	ldd	r16, Z+2	; 0x02
    518e:	13 81       	ldd	r17, Z+3	; 0x03
    5190:	48 17       	cp	r20, r24
    5192:	59 07       	cpc	r21, r25
    5194:	e0 f0       	brcs	.+56     	; 0x51ce <malloc+0x92>
    5196:	48 17       	cp	r20, r24
    5198:	59 07       	cpc	r21, r25
    519a:	99 f4       	brne	.+38     	; 0x51c2 <malloc+0x86>
    519c:	10 97       	sbiw	r26, 0x00	; 0
    519e:	61 f0       	breq	.+24     	; 0x51b8 <malloc+0x7c>
    51a0:	12 96       	adiw	r26, 0x02	; 2
    51a2:	0c 93       	st	X, r16
    51a4:	12 97       	sbiw	r26, 0x02	; 2
    51a6:	13 96       	adiw	r26, 0x03	; 3
    51a8:	1c 93       	st	X, r17
    51aa:	32 96       	adiw	r30, 0x02	; 2
    51ac:	cf 01       	movw	r24, r30
    51ae:	df 91       	pop	r29
    51b0:	cf 91       	pop	r28
    51b2:	1f 91       	pop	r17
    51b4:	0f 91       	pop	r16
    51b6:	08 95       	ret
    51b8:	00 93 3f 2c 	sts	0x2C3F, r16	; 0x802c3f <__flp>
    51bc:	10 93 40 2c 	sts	0x2C40, r17	; 0x802c40 <__flp+0x1>
    51c0:	f4 cf       	rjmp	.-24     	; 0x51aa <malloc+0x6e>
    51c2:	21 15       	cp	r18, r1
    51c4:	31 05       	cpc	r19, r1
    51c6:	51 f0       	breq	.+20     	; 0x51dc <malloc+0xa0>
    51c8:	42 17       	cp	r20, r18
    51ca:	53 07       	cpc	r21, r19
    51cc:	38 f0       	brcs	.+14     	; 0x51dc <malloc+0xa0>
    51ce:	a9 01       	movw	r20, r18
    51d0:	db 01       	movw	r26, r22
    51d2:	9a 01       	movw	r18, r20
    51d4:	bd 01       	movw	r22, r26
    51d6:	df 01       	movw	r26, r30
    51d8:	f8 01       	movw	r30, r16
    51da:	c1 cf       	rjmp	.-126    	; 0x515e <malloc+0x22>
    51dc:	ef 01       	movw	r28, r30
    51de:	f9 cf       	rjmp	.-14     	; 0x51d2 <malloc+0x96>
    51e0:	80 93 3f 2c 	sts	0x2C3F, r24	; 0x802c3f <__flp>
    51e4:	90 93 40 2c 	sts	0x2C40, r25	; 0x802c40 <__flp+0x1>
    51e8:	cd cf       	rjmp	.-102    	; 0x5184 <malloc+0x48>
    51ea:	fe 01       	movw	r30, r28
    51ec:	e2 0f       	add	r30, r18
    51ee:	f3 1f       	adc	r31, r19
    51f0:	81 93       	st	Z+, r24
    51f2:	91 93       	st	Z+, r25
    51f4:	22 50       	subi	r18, 0x02	; 2
    51f6:	31 09       	sbc	r19, r1
    51f8:	28 83       	st	Y, r18
    51fa:	39 83       	std	Y+1, r19	; 0x01
    51fc:	d7 cf       	rjmp	.-82     	; 0x51ac <malloc+0x70>
    51fe:	20 91 3d 2c 	lds	r18, 0x2C3D	; 0x802c3d <__brkval>
    5202:	30 91 3e 2c 	lds	r19, 0x2C3E	; 0x802c3e <__brkval+0x1>
    5206:	23 2b       	or	r18, r19
    5208:	41 f4       	brne	.+16     	; 0x521a <malloc+0xde>
    520a:	20 91 02 28 	lds	r18, 0x2802	; 0x802802 <__malloc_heap_start>
    520e:	30 91 03 28 	lds	r19, 0x2803	; 0x802803 <__malloc_heap_start+0x1>
    5212:	20 93 3d 2c 	sts	0x2C3D, r18	; 0x802c3d <__brkval>
    5216:	30 93 3e 2c 	sts	0x2C3E, r19	; 0x802c3e <__brkval+0x1>
    521a:	20 91 00 28 	lds	r18, 0x2800	; 0x802800 <__malloc_heap_end>
    521e:	30 91 01 28 	lds	r19, 0x2801	; 0x802801 <__malloc_heap_end+0x1>
    5222:	21 15       	cp	r18, r1
    5224:	31 05       	cpc	r19, r1
    5226:	41 f4       	brne	.+16     	; 0x5238 <malloc+0xfc>
    5228:	2d b7       	in	r18, 0x3d	; 61
    522a:	3e b7       	in	r19, 0x3e	; 62
    522c:	40 91 04 28 	lds	r20, 0x2804	; 0x802804 <__malloc_margin>
    5230:	50 91 05 28 	lds	r21, 0x2805	; 0x802805 <__malloc_margin+0x1>
    5234:	24 1b       	sub	r18, r20
    5236:	35 0b       	sbc	r19, r21
    5238:	e0 91 3d 2c 	lds	r30, 0x2C3D	; 0x802c3d <__brkval>
    523c:	f0 91 3e 2c 	lds	r31, 0x2C3E	; 0x802c3e <__brkval+0x1>
    5240:	e2 17       	cp	r30, r18
    5242:	f3 07       	cpc	r31, r19
    5244:	a0 f4       	brcc	.+40     	; 0x526e <malloc+0x132>
    5246:	2e 1b       	sub	r18, r30
    5248:	3f 0b       	sbc	r19, r31
    524a:	28 17       	cp	r18, r24
    524c:	39 07       	cpc	r19, r25
    524e:	78 f0       	brcs	.+30     	; 0x526e <malloc+0x132>
    5250:	ac 01       	movw	r20, r24
    5252:	4e 5f       	subi	r20, 0xFE	; 254
    5254:	5f 4f       	sbci	r21, 0xFF	; 255
    5256:	24 17       	cp	r18, r20
    5258:	35 07       	cpc	r19, r21
    525a:	48 f0       	brcs	.+18     	; 0x526e <malloc+0x132>
    525c:	4e 0f       	add	r20, r30
    525e:	5f 1f       	adc	r21, r31
    5260:	40 93 3d 2c 	sts	0x2C3D, r20	; 0x802c3d <__brkval>
    5264:	50 93 3e 2c 	sts	0x2C3E, r21	; 0x802c3e <__brkval+0x1>
    5268:	81 93       	st	Z+, r24
    526a:	91 93       	st	Z+, r25
    526c:	9f cf       	rjmp	.-194    	; 0x51ac <malloc+0x70>
    526e:	f0 e0       	ldi	r31, 0x00	; 0
    5270:	e0 e0       	ldi	r30, 0x00	; 0
    5272:	9c cf       	rjmp	.-200    	; 0x51ac <malloc+0x70>

00005274 <free>:
    5274:	cf 93       	push	r28
    5276:	df 93       	push	r29
    5278:	00 97       	sbiw	r24, 0x00	; 0
    527a:	e9 f0       	breq	.+58     	; 0x52b6 <free+0x42>
    527c:	fc 01       	movw	r30, r24
    527e:	32 97       	sbiw	r30, 0x02	; 2
    5280:	12 82       	std	Z+2, r1	; 0x02
    5282:	13 82       	std	Z+3, r1	; 0x03
    5284:	a0 91 3f 2c 	lds	r26, 0x2C3F	; 0x802c3f <__flp>
    5288:	b0 91 40 2c 	lds	r27, 0x2C40	; 0x802c40 <__flp+0x1>
    528c:	ed 01       	movw	r28, r26
    528e:	30 e0       	ldi	r19, 0x00	; 0
    5290:	20 e0       	ldi	r18, 0x00	; 0
    5292:	10 97       	sbiw	r26, 0x00	; 0
    5294:	a1 f4       	brne	.+40     	; 0x52be <free+0x4a>
    5296:	20 81       	ld	r18, Z
    5298:	31 81       	ldd	r19, Z+1	; 0x01
    529a:	82 0f       	add	r24, r18
    529c:	93 1f       	adc	r25, r19
    529e:	20 91 3d 2c 	lds	r18, 0x2C3D	; 0x802c3d <__brkval>
    52a2:	30 91 3e 2c 	lds	r19, 0x2C3E	; 0x802c3e <__brkval+0x1>
    52a6:	28 17       	cp	r18, r24
    52a8:	39 07       	cpc	r19, r25
    52aa:	09 f0       	breq	.+2      	; 0x52ae <free+0x3a>
    52ac:	61 c0       	rjmp	.+194    	; 0x5370 <free+0xfc>
    52ae:	e0 93 3d 2c 	sts	0x2C3D, r30	; 0x802c3d <__brkval>
    52b2:	f0 93 3e 2c 	sts	0x2C3E, r31	; 0x802c3e <__brkval+0x1>
    52b6:	df 91       	pop	r29
    52b8:	cf 91       	pop	r28
    52ba:	08 95       	ret
    52bc:	ea 01       	movw	r28, r20
    52be:	ce 17       	cp	r28, r30
    52c0:	df 07       	cpc	r29, r31
    52c2:	e8 f5       	brcc	.+122    	; 0x533e <free+0xca>
    52c4:	4a 81       	ldd	r20, Y+2	; 0x02
    52c6:	5b 81       	ldd	r21, Y+3	; 0x03
    52c8:	9e 01       	movw	r18, r28
    52ca:	41 15       	cp	r20, r1
    52cc:	51 05       	cpc	r21, r1
    52ce:	b1 f7       	brne	.-20     	; 0x52bc <free+0x48>
    52d0:	e9 01       	movw	r28, r18
    52d2:	ea 83       	std	Y+2, r30	; 0x02
    52d4:	fb 83       	std	Y+3, r31	; 0x03
    52d6:	49 91       	ld	r20, Y+
    52d8:	59 91       	ld	r21, Y+
    52da:	c4 0f       	add	r28, r20
    52dc:	d5 1f       	adc	r29, r21
    52de:	ec 17       	cp	r30, r28
    52e0:	fd 07       	cpc	r31, r29
    52e2:	61 f4       	brne	.+24     	; 0x52fc <free+0x88>
    52e4:	80 81       	ld	r24, Z
    52e6:	91 81       	ldd	r25, Z+1	; 0x01
    52e8:	02 96       	adiw	r24, 0x02	; 2
    52ea:	84 0f       	add	r24, r20
    52ec:	95 1f       	adc	r25, r21
    52ee:	e9 01       	movw	r28, r18
    52f0:	88 83       	st	Y, r24
    52f2:	99 83       	std	Y+1, r25	; 0x01
    52f4:	82 81       	ldd	r24, Z+2	; 0x02
    52f6:	93 81       	ldd	r25, Z+3	; 0x03
    52f8:	8a 83       	std	Y+2, r24	; 0x02
    52fa:	9b 83       	std	Y+3, r25	; 0x03
    52fc:	f0 e0       	ldi	r31, 0x00	; 0
    52fe:	e0 e0       	ldi	r30, 0x00	; 0
    5300:	12 96       	adiw	r26, 0x02	; 2
    5302:	8d 91       	ld	r24, X+
    5304:	9c 91       	ld	r25, X
    5306:	13 97       	sbiw	r26, 0x03	; 3
    5308:	00 97       	sbiw	r24, 0x00	; 0
    530a:	b9 f5       	brne	.+110    	; 0x537a <free+0x106>
    530c:	2d 91       	ld	r18, X+
    530e:	3c 91       	ld	r19, X
    5310:	11 97       	sbiw	r26, 0x01	; 1
    5312:	cd 01       	movw	r24, r26
    5314:	02 96       	adiw	r24, 0x02	; 2
    5316:	82 0f       	add	r24, r18
    5318:	93 1f       	adc	r25, r19
    531a:	20 91 3d 2c 	lds	r18, 0x2C3D	; 0x802c3d <__brkval>
    531e:	30 91 3e 2c 	lds	r19, 0x2C3E	; 0x802c3e <__brkval+0x1>
    5322:	28 17       	cp	r18, r24
    5324:	39 07       	cpc	r19, r25
    5326:	39 f6       	brne	.-114    	; 0x52b6 <free+0x42>
    5328:	30 97       	sbiw	r30, 0x00	; 0
    532a:	51 f5       	brne	.+84     	; 0x5380 <free+0x10c>
    532c:	10 92 3f 2c 	sts	0x2C3F, r1	; 0x802c3f <__flp>
    5330:	10 92 40 2c 	sts	0x2C40, r1	; 0x802c40 <__flp+0x1>
    5334:	a0 93 3d 2c 	sts	0x2C3D, r26	; 0x802c3d <__brkval>
    5338:	b0 93 3e 2c 	sts	0x2C3E, r27	; 0x802c3e <__brkval+0x1>
    533c:	bc cf       	rjmp	.-136    	; 0x52b6 <free+0x42>
    533e:	c2 83       	std	Z+2, r28	; 0x02
    5340:	d3 83       	std	Z+3, r29	; 0x03
    5342:	40 81       	ld	r20, Z
    5344:	51 81       	ldd	r21, Z+1	; 0x01
    5346:	84 0f       	add	r24, r20
    5348:	95 1f       	adc	r25, r21
    534a:	c8 17       	cp	r28, r24
    534c:	d9 07       	cpc	r29, r25
    534e:	61 f4       	brne	.+24     	; 0x5368 <free+0xf4>
    5350:	4e 5f       	subi	r20, 0xFE	; 254
    5352:	5f 4f       	sbci	r21, 0xFF	; 255
    5354:	88 81       	ld	r24, Y
    5356:	99 81       	ldd	r25, Y+1	; 0x01
    5358:	48 0f       	add	r20, r24
    535a:	59 1f       	adc	r21, r25
    535c:	40 83       	st	Z, r20
    535e:	51 83       	std	Z+1, r21	; 0x01
    5360:	8a 81       	ldd	r24, Y+2	; 0x02
    5362:	9b 81       	ldd	r25, Y+3	; 0x03
    5364:	82 83       	std	Z+2, r24	; 0x02
    5366:	93 83       	std	Z+3, r25	; 0x03
    5368:	21 15       	cp	r18, r1
    536a:	31 05       	cpc	r19, r1
    536c:	09 f0       	breq	.+2      	; 0x5370 <free+0xfc>
    536e:	b0 cf       	rjmp	.-160    	; 0x52d0 <free+0x5c>
    5370:	e0 93 3f 2c 	sts	0x2C3F, r30	; 0x802c3f <__flp>
    5374:	f0 93 40 2c 	sts	0x2C40, r31	; 0x802c40 <__flp+0x1>
    5378:	9e cf       	rjmp	.-196    	; 0x52b6 <free+0x42>
    537a:	fd 01       	movw	r30, r26
    537c:	dc 01       	movw	r26, r24
    537e:	c0 cf       	rjmp	.-128    	; 0x5300 <free+0x8c>
    5380:	12 82       	std	Z+2, r1	; 0x02
    5382:	13 82       	std	Z+3, r1	; 0x03
    5384:	d7 cf       	rjmp	.-82     	; 0x5334 <free+0xc0>

00005386 <realloc>:
    5386:	b0 e0       	ldi	r27, 0x00	; 0
    5388:	a0 e0       	ldi	r26, 0x00	; 0
    538a:	e9 ec       	ldi	r30, 0xC9	; 201
    538c:	f9 e2       	ldi	r31, 0x29	; 41
    538e:	0c 94 1f 28 	jmp	0x503e	; 0x503e <__prologue_saves__+0x4>
    5392:	8c 01       	movw	r16, r24
    5394:	00 97       	sbiw	r24, 0x00	; 0
    5396:	51 f4       	brne	.+20     	; 0x53ac <realloc+0x26>
    5398:	cb 01       	movw	r24, r22
    539a:	0e 94 9e 28 	call	0x513c	; 0x513c <malloc>
    539e:	8c 01       	movw	r16, r24
    53a0:	c8 01       	movw	r24, r16
    53a2:	cd b7       	in	r28, 0x3d	; 61
    53a4:	de b7       	in	r29, 0x3e	; 62
    53a6:	e0 e1       	ldi	r30, 0x10	; 16
    53a8:	0c 94 38 28 	jmp	0x5070	; 0x5070 <__epilogue_restores__+0x4>
    53ac:	fc 01       	movw	r30, r24
    53ae:	e6 0f       	add	r30, r22
    53b0:	f7 1f       	adc	r31, r23
    53b2:	9c 01       	movw	r18, r24
    53b4:	22 50       	subi	r18, 0x02	; 2
    53b6:	31 09       	sbc	r19, r1
    53b8:	e2 17       	cp	r30, r18
    53ba:	f3 07       	cpc	r31, r19
    53bc:	08 f4       	brcc	.+2      	; 0x53c0 <realloc+0x3a>
    53be:	9d c0       	rjmp	.+314    	; 0x54fa <realloc+0x174>
    53c0:	d9 01       	movw	r26, r18
    53c2:	cd 91       	ld	r28, X+
    53c4:	dc 91       	ld	r29, X
    53c6:	11 97       	sbiw	r26, 0x01	; 1
    53c8:	c6 17       	cp	r28, r22
    53ca:	d7 07       	cpc	r29, r23
    53cc:	98 f0       	brcs	.+38     	; 0x53f4 <realloc+0x6e>
    53ce:	c5 30       	cpi	r28, 0x05	; 5
    53d0:	d1 05       	cpc	r29, r1
    53d2:	30 f3       	brcs	.-52     	; 0x53a0 <realloc+0x1a>
    53d4:	ce 01       	movw	r24, r28
    53d6:	04 97       	sbiw	r24, 0x04	; 4
    53d8:	86 17       	cp	r24, r22
    53da:	97 07       	cpc	r25, r23
    53dc:	08 f3       	brcs	.-62     	; 0x53a0 <realloc+0x1a>
    53de:	c6 1b       	sub	r28, r22
    53e0:	d7 0b       	sbc	r29, r23
    53e2:	22 97       	sbiw	r28, 0x02	; 2
    53e4:	c1 93       	st	Z+, r28
    53e6:	d1 93       	st	Z+, r29
    53e8:	6d 93       	st	X+, r22
    53ea:	7c 93       	st	X, r23
    53ec:	cf 01       	movw	r24, r30
    53ee:	0e 94 3a 29 	call	0x5274	; 0x5274 <free>
    53f2:	d6 cf       	rjmp	.-84     	; 0x53a0 <realloc+0x1a>
    53f4:	5b 01       	movw	r10, r22
    53f6:	ac 1a       	sub	r10, r28
    53f8:	bd 0a       	sbc	r11, r29
    53fa:	4c 01       	movw	r8, r24
    53fc:	8c 0e       	add	r8, r28
    53fe:	9d 1e       	adc	r9, r29
    5400:	a0 91 3f 2c 	lds	r26, 0x2C3F	; 0x802c3f <__flp>
    5404:	b0 91 40 2c 	lds	r27, 0x2C40	; 0x802c40 <__flp+0x1>
    5408:	51 2c       	mov	r5, r1
    540a:	41 2c       	mov	r4, r1
    540c:	f1 2c       	mov	r15, r1
    540e:	e1 2c       	mov	r14, r1
    5410:	10 97       	sbiw	r26, 0x00	; 0
    5412:	31 f5       	brne	.+76     	; 0x5460 <realloc+0xda>
    5414:	80 91 3d 2c 	lds	r24, 0x2C3D	; 0x802c3d <__brkval>
    5418:	90 91 3e 2c 	lds	r25, 0x2C3E	; 0x802c3e <__brkval+0x1>
    541c:	88 15       	cp	r24, r8
    541e:	99 05       	cpc	r25, r9
    5420:	09 f0       	breq	.+2      	; 0x5424 <realloc+0x9e>
    5422:	5c c0       	rjmp	.+184    	; 0x54dc <realloc+0x156>
    5424:	46 16       	cp	r4, r22
    5426:	57 06       	cpc	r5, r23
    5428:	08 f0       	brcs	.+2      	; 0x542c <realloc+0xa6>
    542a:	58 c0       	rjmp	.+176    	; 0x54dc <realloc+0x156>
    542c:	80 91 00 28 	lds	r24, 0x2800	; 0x802800 <__malloc_heap_end>
    5430:	90 91 01 28 	lds	r25, 0x2801	; 0x802801 <__malloc_heap_end+0x1>
    5434:	00 97       	sbiw	r24, 0x00	; 0
    5436:	41 f4       	brne	.+16     	; 0x5448 <realloc+0xc2>
    5438:	8d b7       	in	r24, 0x3d	; 61
    543a:	9e b7       	in	r25, 0x3e	; 62
    543c:	40 91 04 28 	lds	r20, 0x2804	; 0x802804 <__malloc_margin>
    5440:	50 91 05 28 	lds	r21, 0x2805	; 0x802805 <__malloc_margin+0x1>
    5444:	84 1b       	sub	r24, r20
    5446:	95 0b       	sbc	r25, r21
    5448:	e8 17       	cp	r30, r24
    544a:	f9 07       	cpc	r31, r25
    544c:	08 f0       	brcs	.+2      	; 0x5450 <realloc+0xca>
    544e:	55 c0       	rjmp	.+170    	; 0x54fa <realloc+0x174>
    5450:	e0 93 3d 2c 	sts	0x2C3D, r30	; 0x802c3d <__brkval>
    5454:	f0 93 3e 2c 	sts	0x2C3E, r31	; 0x802c3e <__brkval+0x1>
    5458:	f9 01       	movw	r30, r18
    545a:	60 83       	st	Z, r22
    545c:	71 83       	std	Z+1, r23	; 0x01
    545e:	a0 cf       	rjmp	.-192    	; 0x53a0 <realloc+0x1a>
    5460:	8d 91       	ld	r24, X+
    5462:	9c 91       	ld	r25, X
    5464:	11 97       	sbiw	r26, 0x01	; 1
    5466:	12 96       	adiw	r26, 0x02	; 2
    5468:	6c 90       	ld	r6, X
    546a:	12 97       	sbiw	r26, 0x02	; 2
    546c:	13 96       	adiw	r26, 0x03	; 3
    546e:	7c 90       	ld	r7, X
    5470:	13 97       	sbiw	r26, 0x03	; 3
    5472:	a8 15       	cp	r26, r8
    5474:	b9 05       	cpc	r27, r9
    5476:	59 f5       	brne	.+86     	; 0x54ce <realloc+0x148>
    5478:	6c 01       	movw	r12, r24
    547a:	42 e0       	ldi	r20, 0x02	; 2
    547c:	c4 0e       	add	r12, r20
    547e:	d1 1c       	adc	r13, r1
    5480:	ca 14       	cp	r12, r10
    5482:	db 04       	cpc	r13, r11
    5484:	20 f1       	brcs	.+72     	; 0x54ce <realloc+0x148>
    5486:	ac 01       	movw	r20, r24
    5488:	4a 19       	sub	r20, r10
    548a:	5b 09       	sbc	r21, r11
    548c:	da 01       	movw	r26, r20
    548e:	12 96       	adiw	r26, 0x02	; 2
    5490:	15 97       	sbiw	r26, 0x05	; 5
    5492:	80 f0       	brcs	.+32     	; 0x54b4 <realloc+0x12e>
    5494:	62 82       	std	Z+2, r6	; 0x02
    5496:	73 82       	std	Z+3, r7	; 0x03
    5498:	40 83       	st	Z, r20
    549a:	51 83       	std	Z+1, r21	; 0x01
    549c:	d9 01       	movw	r26, r18
    549e:	6d 93       	st	X+, r22
    54a0:	7c 93       	st	X, r23
    54a2:	e1 14       	cp	r14, r1
    54a4:	f1 04       	cpc	r15, r1
    54a6:	71 f0       	breq	.+28     	; 0x54c4 <realloc+0x13e>
    54a8:	d7 01       	movw	r26, r14
    54aa:	12 96       	adiw	r26, 0x02	; 2
    54ac:	ed 93       	st	X+, r30
    54ae:	fc 93       	st	X, r31
    54b0:	13 97       	sbiw	r26, 0x03	; 3
    54b2:	76 cf       	rjmp	.-276    	; 0x53a0 <realloc+0x1a>
    54b4:	22 96       	adiw	r28, 0x02	; 2
    54b6:	8c 0f       	add	r24, r28
    54b8:	9d 1f       	adc	r25, r29
    54ba:	f9 01       	movw	r30, r18
    54bc:	80 83       	st	Z, r24
    54be:	91 83       	std	Z+1, r25	; 0x01
    54c0:	f3 01       	movw	r30, r6
    54c2:	ef cf       	rjmp	.-34     	; 0x54a2 <realloc+0x11c>
    54c4:	e0 93 3f 2c 	sts	0x2C3F, r30	; 0x802c3f <__flp>
    54c8:	f0 93 40 2c 	sts	0x2C40, r31	; 0x802c40 <__flp+0x1>
    54cc:	69 cf       	rjmp	.-302    	; 0x53a0 <realloc+0x1a>
    54ce:	48 16       	cp	r4, r24
    54d0:	59 06       	cpc	r5, r25
    54d2:	08 f4       	brcc	.+2      	; 0x54d6 <realloc+0x150>
    54d4:	2c 01       	movw	r4, r24
    54d6:	7d 01       	movw	r14, r26
    54d8:	d3 01       	movw	r26, r6
    54da:	9a cf       	rjmp	.-204    	; 0x5410 <realloc+0x8a>
    54dc:	cb 01       	movw	r24, r22
    54de:	0e 94 9e 28 	call	0x513c	; 0x513c <malloc>
    54e2:	7c 01       	movw	r14, r24
    54e4:	00 97       	sbiw	r24, 0x00	; 0
    54e6:	49 f0       	breq	.+18     	; 0x54fa <realloc+0x174>
    54e8:	ae 01       	movw	r20, r28
    54ea:	b8 01       	movw	r22, r16
    54ec:	0e 94 95 2a 	call	0x552a	; 0x552a <memcpy>
    54f0:	c8 01       	movw	r24, r16
    54f2:	0e 94 3a 29 	call	0x5274	; 0x5274 <free>
    54f6:	87 01       	movw	r16, r14
    54f8:	53 cf       	rjmp	.-346    	; 0x53a0 <realloc+0x1a>
    54fa:	10 e0       	ldi	r17, 0x00	; 0
    54fc:	00 e0       	ldi	r16, 0x00	; 0
    54fe:	50 cf       	rjmp	.-352    	; 0x53a0 <realloc+0x1a>

00005500 <tolower>:
    5500:	91 11       	cpse	r25, r1
    5502:	08 95       	ret
    5504:	81 54       	subi	r24, 0x41	; 65
    5506:	8a 51       	subi	r24, 0x1A	; 26
    5508:	08 f4       	brcc	.+2      	; 0x550c <tolower+0xc>
    550a:	80 5e       	subi	r24, 0xE0	; 224
    550c:	85 5a       	subi	r24, 0xA5	; 165
    550e:	08 95       	ret

00005510 <memcmp>:
    5510:	fb 01       	movw	r30, r22
    5512:	dc 01       	movw	r26, r24
    5514:	04 c0       	rjmp	.+8      	; 0x551e <memcmp+0xe>
    5516:	8d 91       	ld	r24, X+
    5518:	01 90       	ld	r0, Z+
    551a:	80 19       	sub	r24, r0
    551c:	21 f4       	brne	.+8      	; 0x5526 <memcmp+0x16>
    551e:	41 50       	subi	r20, 0x01	; 1
    5520:	50 40       	sbci	r21, 0x00	; 0
    5522:	c8 f7       	brcc	.-14     	; 0x5516 <memcmp+0x6>
    5524:	88 1b       	sub	r24, r24
    5526:	99 0b       	sbc	r25, r25
    5528:	08 95       	ret

0000552a <memcpy>:
    552a:	fb 01       	movw	r30, r22
    552c:	dc 01       	movw	r26, r24
    552e:	02 c0       	rjmp	.+4      	; 0x5534 <memcpy+0xa>
    5530:	01 90       	ld	r0, Z+
    5532:	0d 92       	st	X+, r0
    5534:	41 50       	subi	r20, 0x01	; 1
    5536:	50 40       	sbci	r21, 0x00	; 0
    5538:	d8 f7       	brcc	.-10     	; 0x5530 <memcpy+0x6>
    553a:	08 95       	ret

0000553c <memset>:
    553c:	dc 01       	movw	r26, r24
    553e:	01 c0       	rjmp	.+2      	; 0x5542 <memset+0x6>
    5540:	6d 93       	st	X+, r22
    5542:	41 50       	subi	r20, 0x01	; 1
    5544:	50 40       	sbci	r21, 0x00	; 0
    5546:	e0 f7       	brcc	.-8      	; 0x5540 <memset+0x4>
    5548:	08 95       	ret

0000554a <strcmp>:
    554a:	fb 01       	movw	r30, r22
    554c:	dc 01       	movw	r26, r24
    554e:	8d 91       	ld	r24, X+
    5550:	01 90       	ld	r0, Z+
    5552:	80 19       	sub	r24, r0
    5554:	01 10       	cpse	r0, r1
    5556:	d9 f3       	breq	.-10     	; 0x554e <strcmp+0x4>
    5558:	99 0b       	sbc	r25, r25
    555a:	08 95       	ret

0000555c <strcpy>:
    555c:	fb 01       	movw	r30, r22
    555e:	dc 01       	movw	r26, r24
    5560:	01 90       	ld	r0, Z+
    5562:	0d 92       	st	X+, r0
    5564:	00 20       	and	r0, r0
    5566:	e1 f7       	brne	.-8      	; 0x5560 <strcpy+0x4>
    5568:	08 95       	ret

0000556a <sprintf>:
    556a:	ae e0       	ldi	r26, 0x0E	; 14
    556c:	b0 e0       	ldi	r27, 0x00	; 0
    556e:	eb eb       	ldi	r30, 0xBB	; 187
    5570:	fa e2       	ldi	r31, 0x2A	; 42
    5572:	0c 94 2b 28 	jmp	0x5056	; 0x5056 <__prologue_saves__+0x1c>
    5576:	0d 89       	ldd	r16, Y+21	; 0x15
    5578:	1e 89       	ldd	r17, Y+22	; 0x16
    557a:	86 e0       	ldi	r24, 0x06	; 6
    557c:	8c 83       	std	Y+4, r24	; 0x04
    557e:	09 83       	std	Y+1, r16	; 0x01
    5580:	1a 83       	std	Y+2, r17	; 0x02
    5582:	8f ef       	ldi	r24, 0xFF	; 255
    5584:	9f e7       	ldi	r25, 0x7F	; 127
    5586:	8d 83       	std	Y+5, r24	; 0x05
    5588:	9e 83       	std	Y+6, r25	; 0x06
    558a:	ae 01       	movw	r20, r28
    558c:	47 5e       	subi	r20, 0xE7	; 231
    558e:	5f 4f       	sbci	r21, 0xFF	; 255
    5590:	6f 89       	ldd	r22, Y+23	; 0x17
    5592:	78 8d       	ldd	r23, Y+24	; 0x18
    5594:	ce 01       	movw	r24, r28
    5596:	01 96       	adiw	r24, 0x01	; 1
    5598:	0e 94 d8 2a 	call	0x55b0	; 0x55b0 <vfprintf>
    559c:	2f 81       	ldd	r18, Y+7	; 0x07
    559e:	38 85       	ldd	r19, Y+8	; 0x08
    55a0:	02 0f       	add	r16, r18
    55a2:	13 1f       	adc	r17, r19
    55a4:	f8 01       	movw	r30, r16
    55a6:	10 82       	st	Z, r1
    55a8:	2e 96       	adiw	r28, 0x0e	; 14
    55aa:	e4 e0       	ldi	r30, 0x04	; 4
    55ac:	0c 94 44 28 	jmp	0x5088	; 0x5088 <__epilogue_restores__+0x1c>

000055b0 <vfprintf>:
    55b0:	ab e0       	ldi	r26, 0x0B	; 11
    55b2:	b0 e0       	ldi	r27, 0x00	; 0
    55b4:	ee ed       	ldi	r30, 0xDE	; 222
    55b6:	fa e2       	ldi	r31, 0x2A	; 42
    55b8:	0c 94 1d 28 	jmp	0x503a	; 0x503a <__prologue_saves__>
    55bc:	7c 01       	movw	r14, r24
    55be:	3b 01       	movw	r6, r22
    55c0:	8a 01       	movw	r16, r20
    55c2:	fc 01       	movw	r30, r24
    55c4:	16 82       	std	Z+6, r1	; 0x06
    55c6:	17 82       	std	Z+7, r1	; 0x07
    55c8:	83 81       	ldd	r24, Z+3	; 0x03
    55ca:	81 ff       	sbrs	r24, 1
    55cc:	c8 c1       	rjmp	.+912    	; 0x595e <vfprintf+0x3ae>
    55ce:	ce 01       	movw	r24, r28
    55d0:	01 96       	adiw	r24, 0x01	; 1
    55d2:	5c 01       	movw	r10, r24
    55d4:	f7 01       	movw	r30, r14
    55d6:	93 81       	ldd	r25, Z+3	; 0x03
    55d8:	f3 01       	movw	r30, r6
    55da:	93 fd       	sbrc	r25, 3
    55dc:	85 91       	lpm	r24, Z+
    55de:	93 ff       	sbrs	r25, 3
    55e0:	81 91       	ld	r24, Z+
    55e2:	3f 01       	movw	r6, r30
    55e4:	88 23       	and	r24, r24
    55e6:	09 f4       	brne	.+2      	; 0x55ea <vfprintf+0x3a>
    55e8:	53 c1       	rjmp	.+678    	; 0x5890 <vfprintf+0x2e0>
    55ea:	85 32       	cpi	r24, 0x25	; 37
    55ec:	39 f4       	brne	.+14     	; 0x55fc <vfprintf+0x4c>
    55ee:	93 fd       	sbrc	r25, 3
    55f0:	85 91       	lpm	r24, Z+
    55f2:	93 ff       	sbrs	r25, 3
    55f4:	81 91       	ld	r24, Z+
    55f6:	3f 01       	movw	r6, r30
    55f8:	85 32       	cpi	r24, 0x25	; 37
    55fa:	29 f4       	brne	.+10     	; 0x5606 <vfprintf+0x56>
    55fc:	b7 01       	movw	r22, r14
    55fe:	90 e0       	ldi	r25, 0x00	; 0
    5600:	0e 94 c8 2c 	call	0x5990	; 0x5990 <fputc>
    5604:	e7 cf       	rjmp	.-50     	; 0x55d4 <vfprintf+0x24>
    5606:	91 2c       	mov	r9, r1
    5608:	21 2c       	mov	r2, r1
    560a:	31 2c       	mov	r3, r1
    560c:	ff e1       	ldi	r31, 0x1F	; 31
    560e:	f3 15       	cp	r31, r3
    5610:	38 f0       	brcs	.+14     	; 0x5620 <vfprintf+0x70>
    5612:	8b 32       	cpi	r24, 0x2B	; 43
    5614:	11 f1       	breq	.+68     	; 0x565a <vfprintf+0xaa>
    5616:	90 f4       	brcc	.+36     	; 0x563c <vfprintf+0x8c>
    5618:	80 32       	cpi	r24, 0x20	; 32
    561a:	09 f1       	breq	.+66     	; 0x565e <vfprintf+0xae>
    561c:	83 32       	cpi	r24, 0x23	; 35
    561e:	29 f1       	breq	.+74     	; 0x566a <vfprintf+0xba>
    5620:	37 fc       	sbrc	r3, 7
    5622:	3c c0       	rjmp	.+120    	; 0x569c <vfprintf+0xec>
    5624:	20 ed       	ldi	r18, 0xD0	; 208
    5626:	28 0f       	add	r18, r24
    5628:	2a 30       	cpi	r18, 0x0A	; 10
    562a:	50 f5       	brcc	.+84     	; 0x5680 <vfprintf+0xd0>
    562c:	36 fe       	sbrs	r3, 6
    562e:	20 c0       	rjmp	.+64     	; 0x5670 <vfprintf+0xc0>
    5630:	8a e0       	ldi	r24, 0x0A	; 10
    5632:	98 9e       	mul	r9, r24
    5634:	20 0d       	add	r18, r0
    5636:	11 24       	eor	r1, r1
    5638:	92 2e       	mov	r9, r18
    563a:	06 c0       	rjmp	.+12     	; 0x5648 <vfprintf+0x98>
    563c:	8d 32       	cpi	r24, 0x2D	; 45
    563e:	91 f0       	breq	.+36     	; 0x5664 <vfprintf+0xb4>
    5640:	80 33       	cpi	r24, 0x30	; 48
    5642:	71 f7       	brne	.-36     	; 0x5620 <vfprintf+0x70>
    5644:	68 94       	set
    5646:	30 f8       	bld	r3, 0
    5648:	f3 01       	movw	r30, r6
    564a:	93 fd       	sbrc	r25, 3
    564c:	85 91       	lpm	r24, Z+
    564e:	93 ff       	sbrs	r25, 3
    5650:	81 91       	ld	r24, Z+
    5652:	3f 01       	movw	r6, r30
    5654:	81 11       	cpse	r24, r1
    5656:	da cf       	rjmp	.-76     	; 0x560c <vfprintf+0x5c>
    5658:	21 c0       	rjmp	.+66     	; 0x569c <vfprintf+0xec>
    565a:	68 94       	set
    565c:	31 f8       	bld	r3, 1
    565e:	68 94       	set
    5660:	32 f8       	bld	r3, 2
    5662:	f2 cf       	rjmp	.-28     	; 0x5648 <vfprintf+0x98>
    5664:	68 94       	set
    5666:	33 f8       	bld	r3, 3
    5668:	ef cf       	rjmp	.-34     	; 0x5648 <vfprintf+0x98>
    566a:	68 94       	set
    566c:	34 f8       	bld	r3, 4
    566e:	ec cf       	rjmp	.-40     	; 0x5648 <vfprintf+0x98>
    5670:	ea e0       	ldi	r30, 0x0A	; 10
    5672:	2e 9e       	mul	r2, r30
    5674:	20 0d       	add	r18, r0
    5676:	11 24       	eor	r1, r1
    5678:	22 2e       	mov	r2, r18
    567a:	68 94       	set
    567c:	35 f8       	bld	r3, 5
    567e:	e4 cf       	rjmp	.-56     	; 0x5648 <vfprintf+0x98>
    5680:	8e 32       	cpi	r24, 0x2E	; 46
    5682:	29 f4       	brne	.+10     	; 0x568e <vfprintf+0xde>
    5684:	36 fc       	sbrc	r3, 6
    5686:	04 c1       	rjmp	.+520    	; 0x5890 <vfprintf+0x2e0>
    5688:	68 94       	set
    568a:	36 f8       	bld	r3, 6
    568c:	dd cf       	rjmp	.-70     	; 0x5648 <vfprintf+0x98>
    568e:	8c 36       	cpi	r24, 0x6C	; 108
    5690:	19 f4       	brne	.+6      	; 0x5698 <vfprintf+0xe8>
    5692:	68 94       	set
    5694:	37 f8       	bld	r3, 7
    5696:	d8 cf       	rjmp	.-80     	; 0x5648 <vfprintf+0x98>
    5698:	88 36       	cpi	r24, 0x68	; 104
    569a:	b1 f2       	breq	.-84     	; 0x5648 <vfprintf+0x98>
    569c:	98 2f       	mov	r25, r24
    569e:	9f 7d       	andi	r25, 0xDF	; 223
    56a0:	95 54       	subi	r25, 0x45	; 69
    56a2:	93 30       	cpi	r25, 0x03	; 3
    56a4:	e0 f0       	brcs	.+56     	; 0x56de <vfprintf+0x12e>
    56a6:	83 36       	cpi	r24, 0x63	; 99
    56a8:	a1 f1       	breq	.+104    	; 0x5712 <vfprintf+0x162>
    56aa:	83 37       	cpi	r24, 0x73	; 115
    56ac:	c1 f1       	breq	.+112    	; 0x571e <vfprintf+0x16e>
    56ae:	83 35       	cpi	r24, 0x53	; 83
    56b0:	09 f0       	breq	.+2      	; 0x56b4 <vfprintf+0x104>
    56b2:	63 c0       	rjmp	.+198    	; 0x577a <vfprintf+0x1ca>
    56b4:	28 01       	movw	r4, r16
    56b6:	f2 e0       	ldi	r31, 0x02	; 2
    56b8:	4f 0e       	add	r4, r31
    56ba:	51 1c       	adc	r5, r1
    56bc:	f8 01       	movw	r30, r16
    56be:	c0 80       	ld	r12, Z
    56c0:	d1 80       	ldd	r13, Z+1	; 0x01
    56c2:	69 2d       	mov	r22, r9
    56c4:	70 e0       	ldi	r23, 0x00	; 0
    56c6:	36 fc       	sbrc	r3, 6
    56c8:	02 c0       	rjmp	.+4      	; 0x56ce <vfprintf+0x11e>
    56ca:	6f ef       	ldi	r22, 0xFF	; 255
    56cc:	7f ef       	ldi	r23, 0xFF	; 255
    56ce:	c6 01       	movw	r24, r12
    56d0:	0e 94 b2 2c 	call	0x5964	; 0x5964 <strnlen_P>
    56d4:	4c 01       	movw	r8, r24
    56d6:	68 94       	set
    56d8:	37 f8       	bld	r3, 7
    56da:	82 01       	movw	r16, r4
    56dc:	0a c0       	rjmp	.+20     	; 0x56f2 <vfprintf+0x142>
    56de:	0c 5f       	subi	r16, 0xFC	; 252
    56e0:	1f 4f       	sbci	r17, 0xFF	; 255
    56e2:	ff e3       	ldi	r31, 0x3F	; 63
    56e4:	f9 83       	std	Y+1, r31	; 0x01
    56e6:	88 24       	eor	r8, r8
    56e8:	83 94       	inc	r8
    56ea:	91 2c       	mov	r9, r1
    56ec:	65 01       	movw	r12, r10
    56ee:	e8 94       	clt
    56f0:	37 f8       	bld	r3, 7
    56f2:	33 fe       	sbrs	r3, 3
    56f4:	2d c0       	rjmp	.+90     	; 0x5750 <vfprintf+0x1a0>
    56f6:	52 2c       	mov	r5, r2
    56f8:	81 14       	cp	r8, r1
    56fa:	91 04       	cpc	r9, r1
    56fc:	71 f5       	brne	.+92     	; 0x575a <vfprintf+0x1aa>
    56fe:	55 20       	and	r5, r5
    5700:	09 f4       	brne	.+2      	; 0x5704 <vfprintf+0x154>
    5702:	68 cf       	rjmp	.-304    	; 0x55d4 <vfprintf+0x24>
    5704:	b7 01       	movw	r22, r14
    5706:	80 e2       	ldi	r24, 0x20	; 32
    5708:	90 e0       	ldi	r25, 0x00	; 0
    570a:	0e 94 c8 2c 	call	0x5990	; 0x5990 <fputc>
    570e:	5a 94       	dec	r5
    5710:	f6 cf       	rjmp	.-20     	; 0x56fe <vfprintf+0x14e>
    5712:	f8 01       	movw	r30, r16
    5714:	80 81       	ld	r24, Z
    5716:	89 83       	std	Y+1, r24	; 0x01
    5718:	0e 5f       	subi	r16, 0xFE	; 254
    571a:	1f 4f       	sbci	r17, 0xFF	; 255
    571c:	e4 cf       	rjmp	.-56     	; 0x56e6 <vfprintf+0x136>
    571e:	28 01       	movw	r4, r16
    5720:	f2 e0       	ldi	r31, 0x02	; 2
    5722:	4f 0e       	add	r4, r31
    5724:	51 1c       	adc	r5, r1
    5726:	f8 01       	movw	r30, r16
    5728:	c0 80       	ld	r12, Z
    572a:	d1 80       	ldd	r13, Z+1	; 0x01
    572c:	69 2d       	mov	r22, r9
    572e:	70 e0       	ldi	r23, 0x00	; 0
    5730:	36 fc       	sbrc	r3, 6
    5732:	02 c0       	rjmp	.+4      	; 0x5738 <vfprintf+0x188>
    5734:	6f ef       	ldi	r22, 0xFF	; 255
    5736:	7f ef       	ldi	r23, 0xFF	; 255
    5738:	c6 01       	movw	r24, r12
    573a:	0e 94 bd 2c 	call	0x597a	; 0x597a <strnlen>
    573e:	4c 01       	movw	r8, r24
    5740:	82 01       	movw	r16, r4
    5742:	d5 cf       	rjmp	.-86     	; 0x56ee <vfprintf+0x13e>
    5744:	b7 01       	movw	r22, r14
    5746:	80 e2       	ldi	r24, 0x20	; 32
    5748:	90 e0       	ldi	r25, 0x00	; 0
    574a:	0e 94 c8 2c 	call	0x5990	; 0x5990 <fputc>
    574e:	2a 94       	dec	r2
    5750:	28 14       	cp	r2, r8
    5752:	19 04       	cpc	r1, r9
    5754:	09 f0       	breq	.+2      	; 0x5758 <vfprintf+0x1a8>
    5756:	b0 f7       	brcc	.-20     	; 0x5744 <vfprintf+0x194>
    5758:	ce cf       	rjmp	.-100    	; 0x56f6 <vfprintf+0x146>
    575a:	f6 01       	movw	r30, r12
    575c:	37 fc       	sbrc	r3, 7
    575e:	85 91       	lpm	r24, Z+
    5760:	37 fe       	sbrs	r3, 7
    5762:	81 91       	ld	r24, Z+
    5764:	6f 01       	movw	r12, r30
    5766:	b7 01       	movw	r22, r14
    5768:	90 e0       	ldi	r25, 0x00	; 0
    576a:	0e 94 c8 2c 	call	0x5990	; 0x5990 <fputc>
    576e:	51 10       	cpse	r5, r1
    5770:	5a 94       	dec	r5
    5772:	f1 e0       	ldi	r31, 0x01	; 1
    5774:	8f 1a       	sub	r8, r31
    5776:	91 08       	sbc	r9, r1
    5778:	bf cf       	rjmp	.-130    	; 0x56f8 <vfprintf+0x148>
    577a:	84 36       	cpi	r24, 0x64	; 100
    577c:	19 f0       	breq	.+6      	; 0x5784 <vfprintf+0x1d4>
    577e:	89 36       	cpi	r24, 0x69	; 105
    5780:	09 f0       	breq	.+2      	; 0x5784 <vfprintf+0x1d4>
    5782:	77 c0       	rjmp	.+238    	; 0x5872 <vfprintf+0x2c2>
    5784:	f8 01       	movw	r30, r16
    5786:	37 fe       	sbrs	r3, 7
    5788:	6b c0       	rjmp	.+214    	; 0x5860 <vfprintf+0x2b0>
    578a:	60 81       	ld	r22, Z
    578c:	71 81       	ldd	r23, Z+1	; 0x01
    578e:	82 81       	ldd	r24, Z+2	; 0x02
    5790:	93 81       	ldd	r25, Z+3	; 0x03
    5792:	0c 5f       	subi	r16, 0xFC	; 252
    5794:	1f 4f       	sbci	r17, 0xFF	; 255
    5796:	f3 2d       	mov	r31, r3
    5798:	ff 76       	andi	r31, 0x6F	; 111
    579a:	3f 2e       	mov	r3, r31
    579c:	97 ff       	sbrs	r25, 7
    579e:	09 c0       	rjmp	.+18     	; 0x57b2 <vfprintf+0x202>
    57a0:	90 95       	com	r25
    57a2:	80 95       	com	r24
    57a4:	70 95       	com	r23
    57a6:	61 95       	neg	r22
    57a8:	7f 4f       	sbci	r23, 0xFF	; 255
    57aa:	8f 4f       	sbci	r24, 0xFF	; 255
    57ac:	9f 4f       	sbci	r25, 0xFF	; 255
    57ae:	68 94       	set
    57b0:	37 f8       	bld	r3, 7
    57b2:	2a e0       	ldi	r18, 0x0A	; 10
    57b4:	30 e0       	ldi	r19, 0x00	; 0
    57b6:	a5 01       	movw	r20, r10
    57b8:	0e 94 f8 2c 	call	0x59f0	; 0x59f0 <__ultoa_invert>
    57bc:	c8 2e       	mov	r12, r24
    57be:	ca 18       	sub	r12, r10
    57c0:	8c 2c       	mov	r8, r12
    57c2:	43 2c       	mov	r4, r3
    57c4:	36 fe       	sbrs	r3, 6
    57c6:	0c c0       	rjmp	.+24     	; 0x57e0 <vfprintf+0x230>
    57c8:	e8 94       	clt
    57ca:	40 f8       	bld	r4, 0
    57cc:	c9 14       	cp	r12, r9
    57ce:	40 f4       	brcc	.+16     	; 0x57e0 <vfprintf+0x230>
    57d0:	34 fe       	sbrs	r3, 4
    57d2:	05 c0       	rjmp	.+10     	; 0x57de <vfprintf+0x22e>
    57d4:	32 fc       	sbrc	r3, 2
    57d6:	03 c0       	rjmp	.+6      	; 0x57de <vfprintf+0x22e>
    57d8:	f3 2d       	mov	r31, r3
    57da:	fe 7e       	andi	r31, 0xEE	; 238
    57dc:	4f 2e       	mov	r4, r31
    57de:	89 2c       	mov	r8, r9
    57e0:	44 fe       	sbrs	r4, 4
    57e2:	95 c0       	rjmp	.+298    	; 0x590e <vfprintf+0x35e>
    57e4:	fe 01       	movw	r30, r28
    57e6:	ec 0d       	add	r30, r12
    57e8:	f1 1d       	adc	r31, r1
    57ea:	80 81       	ld	r24, Z
    57ec:	80 33       	cpi	r24, 0x30	; 48
    57ee:	09 f0       	breq	.+2      	; 0x57f2 <vfprintf+0x242>
    57f0:	87 c0       	rjmp	.+270    	; 0x5900 <vfprintf+0x350>
    57f2:	24 2d       	mov	r18, r4
    57f4:	29 7e       	andi	r18, 0xE9	; 233
    57f6:	42 2e       	mov	r4, r18
    57f8:	84 2d       	mov	r24, r4
    57fa:	88 70       	andi	r24, 0x08	; 8
    57fc:	58 2e       	mov	r5, r24
    57fe:	43 fc       	sbrc	r4, 3
    5800:	95 c0       	rjmp	.+298    	; 0x592c <vfprintf+0x37c>
    5802:	40 fe       	sbrs	r4, 0
    5804:	8f c0       	rjmp	.+286    	; 0x5924 <vfprintf+0x374>
    5806:	9c 2c       	mov	r9, r12
    5808:	82 14       	cp	r8, r2
    580a:	18 f4       	brcc	.+6      	; 0x5812 <vfprintf+0x262>
    580c:	2c 0c       	add	r2, r12
    580e:	92 2c       	mov	r9, r2
    5810:	98 18       	sub	r9, r8
    5812:	44 fe       	sbrs	r4, 4
    5814:	91 c0       	rjmp	.+290    	; 0x5938 <vfprintf+0x388>
    5816:	b7 01       	movw	r22, r14
    5818:	80 e3       	ldi	r24, 0x30	; 48
    581a:	90 e0       	ldi	r25, 0x00	; 0
    581c:	0e 94 c8 2c 	call	0x5990	; 0x5990 <fputc>
    5820:	42 fe       	sbrs	r4, 2
    5822:	09 c0       	rjmp	.+18     	; 0x5836 <vfprintf+0x286>
    5824:	88 e7       	ldi	r24, 0x78	; 120
    5826:	90 e0       	ldi	r25, 0x00	; 0
    5828:	41 fe       	sbrs	r4, 1
    582a:	02 c0       	rjmp	.+4      	; 0x5830 <vfprintf+0x280>
    582c:	88 e5       	ldi	r24, 0x58	; 88
    582e:	90 e0       	ldi	r25, 0x00	; 0
    5830:	b7 01       	movw	r22, r14
    5832:	0e 94 c8 2c 	call	0x5990	; 0x5990 <fputc>
    5836:	c9 14       	cp	r12, r9
    5838:	08 f4       	brcc	.+2      	; 0x583c <vfprintf+0x28c>
    583a:	8a c0       	rjmp	.+276    	; 0x5950 <vfprintf+0x3a0>
    583c:	ca 94       	dec	r12
    583e:	d1 2c       	mov	r13, r1
    5840:	9f ef       	ldi	r25, 0xFF	; 255
    5842:	c9 1a       	sub	r12, r25
    5844:	d9 0a       	sbc	r13, r25
    5846:	ca 0c       	add	r12, r10
    5848:	db 1c       	adc	r13, r11
    584a:	f6 01       	movw	r30, r12
    584c:	82 91       	ld	r24, -Z
    584e:	6f 01       	movw	r12, r30
    5850:	b7 01       	movw	r22, r14
    5852:	90 e0       	ldi	r25, 0x00	; 0
    5854:	0e 94 c8 2c 	call	0x5990	; 0x5990 <fputc>
    5858:	ac 14       	cp	r10, r12
    585a:	bd 04       	cpc	r11, r13
    585c:	b1 f7       	brne	.-20     	; 0x584a <vfprintf+0x29a>
    585e:	4f cf       	rjmp	.-354    	; 0x56fe <vfprintf+0x14e>
    5860:	60 81       	ld	r22, Z
    5862:	71 81       	ldd	r23, Z+1	; 0x01
    5864:	07 2e       	mov	r0, r23
    5866:	00 0c       	add	r0, r0
    5868:	88 0b       	sbc	r24, r24
    586a:	99 0b       	sbc	r25, r25
    586c:	0e 5f       	subi	r16, 0xFE	; 254
    586e:	1f 4f       	sbci	r17, 0xFF	; 255
    5870:	92 cf       	rjmp	.-220    	; 0x5796 <vfprintf+0x1e6>
    5872:	d3 2c       	mov	r13, r3
    5874:	e8 94       	clt
    5876:	d4 f8       	bld	r13, 4
    5878:	2a e0       	ldi	r18, 0x0A	; 10
    587a:	30 e0       	ldi	r19, 0x00	; 0
    587c:	85 37       	cpi	r24, 0x75	; 117
    587e:	39 f1       	breq	.+78     	; 0x58ce <vfprintf+0x31e>
    5880:	23 2d       	mov	r18, r3
    5882:	29 7f       	andi	r18, 0xF9	; 249
    5884:	d2 2e       	mov	r13, r18
    5886:	8f 36       	cpi	r24, 0x6F	; 111
    5888:	01 f1       	breq	.+64     	; 0x58ca <vfprintf+0x31a>
    588a:	48 f4       	brcc	.+18     	; 0x589e <vfprintf+0x2ee>
    588c:	88 35       	cpi	r24, 0x58	; 88
    588e:	a9 f0       	breq	.+42     	; 0x58ba <vfprintf+0x30a>
    5890:	f7 01       	movw	r30, r14
    5892:	86 81       	ldd	r24, Z+6	; 0x06
    5894:	97 81       	ldd	r25, Z+7	; 0x07
    5896:	2b 96       	adiw	r28, 0x0b	; 11
    5898:	e2 e1       	ldi	r30, 0x12	; 18
    589a:	0c 94 36 28 	jmp	0x506c	; 0x506c <__epilogue_restores__>
    589e:	80 37       	cpi	r24, 0x70	; 112
    58a0:	49 f0       	breq	.+18     	; 0x58b4 <vfprintf+0x304>
    58a2:	88 37       	cpi	r24, 0x78	; 120
    58a4:	a9 f7       	brne	.-22     	; 0x5890 <vfprintf+0x2e0>
    58a6:	d4 fe       	sbrs	r13, 4
    58a8:	02 c0       	rjmp	.+4      	; 0x58ae <vfprintf+0x2fe>
    58aa:	68 94       	set
    58ac:	d2 f8       	bld	r13, 2
    58ae:	20 e1       	ldi	r18, 0x10	; 16
    58b0:	30 e0       	ldi	r19, 0x00	; 0
    58b2:	0d c0       	rjmp	.+26     	; 0x58ce <vfprintf+0x31e>
    58b4:	68 94       	set
    58b6:	d4 f8       	bld	r13, 4
    58b8:	f6 cf       	rjmp	.-20     	; 0x58a6 <vfprintf+0x2f6>
    58ba:	34 fe       	sbrs	r3, 4
    58bc:	03 c0       	rjmp	.+6      	; 0x58c4 <vfprintf+0x314>
    58be:	82 2f       	mov	r24, r18
    58c0:	86 60       	ori	r24, 0x06	; 6
    58c2:	d8 2e       	mov	r13, r24
    58c4:	20 e1       	ldi	r18, 0x10	; 16
    58c6:	32 e0       	ldi	r19, 0x02	; 2
    58c8:	02 c0       	rjmp	.+4      	; 0x58ce <vfprintf+0x31e>
    58ca:	28 e0       	ldi	r18, 0x08	; 8
    58cc:	30 e0       	ldi	r19, 0x00	; 0
    58ce:	f8 01       	movw	r30, r16
    58d0:	d7 fe       	sbrs	r13, 7
    58d2:	0f c0       	rjmp	.+30     	; 0x58f2 <vfprintf+0x342>
    58d4:	60 81       	ld	r22, Z
    58d6:	71 81       	ldd	r23, Z+1	; 0x01
    58d8:	82 81       	ldd	r24, Z+2	; 0x02
    58da:	93 81       	ldd	r25, Z+3	; 0x03
    58dc:	0c 5f       	subi	r16, 0xFC	; 252
    58de:	1f 4f       	sbci	r17, 0xFF	; 255
    58e0:	a5 01       	movw	r20, r10
    58e2:	0e 94 f8 2c 	call	0x59f0	; 0x59f0 <__ultoa_invert>
    58e6:	c8 2e       	mov	r12, r24
    58e8:	ca 18       	sub	r12, r10
    58ea:	3d 2c       	mov	r3, r13
    58ec:	e8 94       	clt
    58ee:	37 f8       	bld	r3, 7
    58f0:	67 cf       	rjmp	.-306    	; 0x57c0 <vfprintf+0x210>
    58f2:	60 81       	ld	r22, Z
    58f4:	71 81       	ldd	r23, Z+1	; 0x01
    58f6:	90 e0       	ldi	r25, 0x00	; 0
    58f8:	80 e0       	ldi	r24, 0x00	; 0
    58fa:	0e 5f       	subi	r16, 0xFE	; 254
    58fc:	1f 4f       	sbci	r17, 0xFF	; 255
    58fe:	f0 cf       	rjmp	.-32     	; 0x58e0 <vfprintf+0x330>
    5900:	42 fc       	sbrc	r4, 2
    5902:	02 c0       	rjmp	.+4      	; 0x5908 <vfprintf+0x358>
    5904:	83 94       	inc	r8
    5906:	78 cf       	rjmp	.-272    	; 0x57f8 <vfprintf+0x248>
    5908:	83 94       	inc	r8
    590a:	83 94       	inc	r8
    590c:	75 cf       	rjmp	.-278    	; 0x57f8 <vfprintf+0x248>
    590e:	84 2d       	mov	r24, r4
    5910:	86 78       	andi	r24, 0x86	; 134
    5912:	09 f4       	brne	.+2      	; 0x5916 <vfprintf+0x366>
    5914:	71 cf       	rjmp	.-286    	; 0x57f8 <vfprintf+0x248>
    5916:	f6 cf       	rjmp	.-20     	; 0x5904 <vfprintf+0x354>
    5918:	b7 01       	movw	r22, r14
    591a:	80 e2       	ldi	r24, 0x20	; 32
    591c:	90 e0       	ldi	r25, 0x00	; 0
    591e:	0e 94 c8 2c 	call	0x5990	; 0x5990 <fputc>
    5922:	83 94       	inc	r8
    5924:	82 14       	cp	r8, r2
    5926:	c0 f3       	brcs	.-16     	; 0x5918 <vfprintf+0x368>
    5928:	51 2c       	mov	r5, r1
    592a:	73 cf       	rjmp	.-282    	; 0x5812 <vfprintf+0x262>
    592c:	52 2c       	mov	r5, r2
    592e:	58 18       	sub	r5, r8
    5930:	82 14       	cp	r8, r2
    5932:	08 f4       	brcc	.+2      	; 0x5936 <vfprintf+0x386>
    5934:	6e cf       	rjmp	.-292    	; 0x5812 <vfprintf+0x262>
    5936:	f8 cf       	rjmp	.-16     	; 0x5928 <vfprintf+0x378>
    5938:	84 2d       	mov	r24, r4
    593a:	86 78       	andi	r24, 0x86	; 134
    593c:	09 f4       	brne	.+2      	; 0x5940 <vfprintf+0x390>
    593e:	7b cf       	rjmp	.-266    	; 0x5836 <vfprintf+0x286>
    5940:	8b e2       	ldi	r24, 0x2B	; 43
    5942:	41 fe       	sbrs	r4, 1
    5944:	80 e2       	ldi	r24, 0x20	; 32
    5946:	47 fc       	sbrc	r4, 7
    5948:	8d e2       	ldi	r24, 0x2D	; 45
    594a:	b7 01       	movw	r22, r14
    594c:	90 e0       	ldi	r25, 0x00	; 0
    594e:	71 cf       	rjmp	.-286    	; 0x5832 <vfprintf+0x282>
    5950:	b7 01       	movw	r22, r14
    5952:	80 e3       	ldi	r24, 0x30	; 48
    5954:	90 e0       	ldi	r25, 0x00	; 0
    5956:	0e 94 c8 2c 	call	0x5990	; 0x5990 <fputc>
    595a:	9a 94       	dec	r9
    595c:	6c cf       	rjmp	.-296    	; 0x5836 <vfprintf+0x286>
    595e:	8f ef       	ldi	r24, 0xFF	; 255
    5960:	9f ef       	ldi	r25, 0xFF	; 255
    5962:	99 cf       	rjmp	.-206    	; 0x5896 <vfprintf+0x2e6>

00005964 <strnlen_P>:
    5964:	fc 01       	movw	r30, r24
    5966:	05 90       	lpm	r0, Z+
    5968:	61 50       	subi	r22, 0x01	; 1
    596a:	70 40       	sbci	r23, 0x00	; 0
    596c:	01 10       	cpse	r0, r1
    596e:	d8 f7       	brcc	.-10     	; 0x5966 <strnlen_P+0x2>
    5970:	80 95       	com	r24
    5972:	90 95       	com	r25
    5974:	8e 0f       	add	r24, r30
    5976:	9f 1f       	adc	r25, r31
    5978:	08 95       	ret

0000597a <strnlen>:
    597a:	fc 01       	movw	r30, r24
    597c:	61 50       	subi	r22, 0x01	; 1
    597e:	70 40       	sbci	r23, 0x00	; 0
    5980:	01 90       	ld	r0, Z+
    5982:	01 10       	cpse	r0, r1
    5984:	d8 f7       	brcc	.-10     	; 0x597c <strnlen+0x2>
    5986:	80 95       	com	r24
    5988:	90 95       	com	r25
    598a:	8e 0f       	add	r24, r30
    598c:	9f 1f       	adc	r25, r31
    598e:	08 95       	ret

00005990 <fputc>:
    5990:	0f 93       	push	r16
    5992:	1f 93       	push	r17
    5994:	cf 93       	push	r28
    5996:	df 93       	push	r29
    5998:	18 2f       	mov	r17, r24
    599a:	09 2f       	mov	r16, r25
    599c:	eb 01       	movw	r28, r22
    599e:	8b 81       	ldd	r24, Y+3	; 0x03
    59a0:	81 fd       	sbrc	r24, 1
    59a2:	09 c0       	rjmp	.+18     	; 0x59b6 <fputc+0x26>
    59a4:	1f ef       	ldi	r17, 0xFF	; 255
    59a6:	0f ef       	ldi	r16, 0xFF	; 255
    59a8:	81 2f       	mov	r24, r17
    59aa:	90 2f       	mov	r25, r16
    59ac:	df 91       	pop	r29
    59ae:	cf 91       	pop	r28
    59b0:	1f 91       	pop	r17
    59b2:	0f 91       	pop	r16
    59b4:	08 95       	ret
    59b6:	82 ff       	sbrs	r24, 2
    59b8:	14 c0       	rjmp	.+40     	; 0x59e2 <fputc+0x52>
    59ba:	2e 81       	ldd	r18, Y+6	; 0x06
    59bc:	3f 81       	ldd	r19, Y+7	; 0x07
    59be:	8c 81       	ldd	r24, Y+4	; 0x04
    59c0:	9d 81       	ldd	r25, Y+5	; 0x05
    59c2:	28 17       	cp	r18, r24
    59c4:	39 07       	cpc	r19, r25
    59c6:	3c f4       	brge	.+14     	; 0x59d6 <fputc+0x46>
    59c8:	e8 81       	ld	r30, Y
    59ca:	f9 81       	ldd	r31, Y+1	; 0x01
    59cc:	cf 01       	movw	r24, r30
    59ce:	01 96       	adiw	r24, 0x01	; 1
    59d0:	88 83       	st	Y, r24
    59d2:	99 83       	std	Y+1, r25	; 0x01
    59d4:	10 83       	st	Z, r17
    59d6:	8e 81       	ldd	r24, Y+6	; 0x06
    59d8:	9f 81       	ldd	r25, Y+7	; 0x07
    59da:	01 96       	adiw	r24, 0x01	; 1
    59dc:	8e 83       	std	Y+6, r24	; 0x06
    59de:	9f 83       	std	Y+7, r25	; 0x07
    59e0:	e3 cf       	rjmp	.-58     	; 0x59a8 <fputc+0x18>
    59e2:	e8 85       	ldd	r30, Y+8	; 0x08
    59e4:	f9 85       	ldd	r31, Y+9	; 0x09
    59e6:	81 2f       	mov	r24, r17
    59e8:	09 95       	icall
    59ea:	89 2b       	or	r24, r25
    59ec:	a1 f3       	breq	.-24     	; 0x59d6 <fputc+0x46>
    59ee:	da cf       	rjmp	.-76     	; 0x59a4 <fputc+0x14>

000059f0 <__ultoa_invert>:
    59f0:	fa 01       	movw	r30, r20
    59f2:	aa 27       	eor	r26, r26
    59f4:	28 30       	cpi	r18, 0x08	; 8
    59f6:	51 f1       	breq	.+84     	; 0x5a4c <__ultoa_invert+0x5c>
    59f8:	20 31       	cpi	r18, 0x10	; 16
    59fa:	81 f1       	breq	.+96     	; 0x5a5c <__ultoa_invert+0x6c>
    59fc:	e8 94       	clt
    59fe:	6f 93       	push	r22
    5a00:	6e 7f       	andi	r22, 0xFE	; 254
    5a02:	6e 5f       	subi	r22, 0xFE	; 254
    5a04:	7f 4f       	sbci	r23, 0xFF	; 255
    5a06:	8f 4f       	sbci	r24, 0xFF	; 255
    5a08:	9f 4f       	sbci	r25, 0xFF	; 255
    5a0a:	af 4f       	sbci	r26, 0xFF	; 255
    5a0c:	b1 e0       	ldi	r27, 0x01	; 1
    5a0e:	3e d0       	rcall	.+124    	; 0x5a8c <__ultoa_invert+0x9c>
    5a10:	b4 e0       	ldi	r27, 0x04	; 4
    5a12:	3c d0       	rcall	.+120    	; 0x5a8c <__ultoa_invert+0x9c>
    5a14:	67 0f       	add	r22, r23
    5a16:	78 1f       	adc	r23, r24
    5a18:	89 1f       	adc	r24, r25
    5a1a:	9a 1f       	adc	r25, r26
    5a1c:	a1 1d       	adc	r26, r1
    5a1e:	68 0f       	add	r22, r24
    5a20:	79 1f       	adc	r23, r25
    5a22:	8a 1f       	adc	r24, r26
    5a24:	91 1d       	adc	r25, r1
    5a26:	a1 1d       	adc	r26, r1
    5a28:	6a 0f       	add	r22, r26
    5a2a:	71 1d       	adc	r23, r1
    5a2c:	81 1d       	adc	r24, r1
    5a2e:	91 1d       	adc	r25, r1
    5a30:	a1 1d       	adc	r26, r1
    5a32:	20 d0       	rcall	.+64     	; 0x5a74 <__ultoa_invert+0x84>
    5a34:	09 f4       	brne	.+2      	; 0x5a38 <__ultoa_invert+0x48>
    5a36:	68 94       	set
    5a38:	3f 91       	pop	r19
    5a3a:	2a e0       	ldi	r18, 0x0A	; 10
    5a3c:	26 9f       	mul	r18, r22
    5a3e:	11 24       	eor	r1, r1
    5a40:	30 19       	sub	r19, r0
    5a42:	30 5d       	subi	r19, 0xD0	; 208
    5a44:	31 93       	st	Z+, r19
    5a46:	de f6       	brtc	.-74     	; 0x59fe <__ultoa_invert+0xe>
    5a48:	cf 01       	movw	r24, r30
    5a4a:	08 95       	ret
    5a4c:	46 2f       	mov	r20, r22
    5a4e:	47 70       	andi	r20, 0x07	; 7
    5a50:	40 5d       	subi	r20, 0xD0	; 208
    5a52:	41 93       	st	Z+, r20
    5a54:	b3 e0       	ldi	r27, 0x03	; 3
    5a56:	0f d0       	rcall	.+30     	; 0x5a76 <__ultoa_invert+0x86>
    5a58:	c9 f7       	brne	.-14     	; 0x5a4c <__ultoa_invert+0x5c>
    5a5a:	f6 cf       	rjmp	.-20     	; 0x5a48 <__ultoa_invert+0x58>
    5a5c:	46 2f       	mov	r20, r22
    5a5e:	4f 70       	andi	r20, 0x0F	; 15
    5a60:	40 5d       	subi	r20, 0xD0	; 208
    5a62:	4a 33       	cpi	r20, 0x3A	; 58
    5a64:	18 f0       	brcs	.+6      	; 0x5a6c <__ultoa_invert+0x7c>
    5a66:	49 5d       	subi	r20, 0xD9	; 217
    5a68:	31 fd       	sbrc	r19, 1
    5a6a:	40 52       	subi	r20, 0x20	; 32
    5a6c:	41 93       	st	Z+, r20
    5a6e:	02 d0       	rcall	.+4      	; 0x5a74 <__ultoa_invert+0x84>
    5a70:	a9 f7       	brne	.-22     	; 0x5a5c <__ultoa_invert+0x6c>
    5a72:	ea cf       	rjmp	.-44     	; 0x5a48 <__ultoa_invert+0x58>
    5a74:	b4 e0       	ldi	r27, 0x04	; 4
    5a76:	a6 95       	lsr	r26
    5a78:	97 95       	ror	r25
    5a7a:	87 95       	ror	r24
    5a7c:	77 95       	ror	r23
    5a7e:	67 95       	ror	r22
    5a80:	ba 95       	dec	r27
    5a82:	c9 f7       	brne	.-14     	; 0x5a76 <__ultoa_invert+0x86>
    5a84:	00 97       	sbiw	r24, 0x00	; 0
    5a86:	61 05       	cpc	r22, r1
    5a88:	71 05       	cpc	r23, r1
    5a8a:	08 95       	ret
    5a8c:	9b 01       	movw	r18, r22
    5a8e:	ac 01       	movw	r20, r24
    5a90:	0a 2e       	mov	r0, r26
    5a92:	06 94       	lsr	r0
    5a94:	57 95       	ror	r21
    5a96:	47 95       	ror	r20
    5a98:	37 95       	ror	r19
    5a9a:	27 95       	ror	r18
    5a9c:	ba 95       	dec	r27
    5a9e:	c9 f7       	brne	.-14     	; 0x5a92 <__ultoa_invert+0xa2>
    5aa0:	62 0f       	add	r22, r18
    5aa2:	73 1f       	adc	r23, r19
    5aa4:	84 1f       	adc	r24, r20
    5aa6:	95 1f       	adc	r25, r21
    5aa8:	a0 1d       	adc	r26, r0
    5aaa:	08 95       	ret

00005aac <__do_global_dtors>:
    5aac:	11 e0       	ldi	r17, 0x01	; 1
    5aae:	c1 e5       	ldi	r28, 0x51	; 81
    5ab0:	d1 e0       	ldi	r29, 0x01	; 1
    5ab2:	04 c0       	rjmp	.+8      	; 0x5abc <__do_global_dtors+0x10>
    5ab4:	fe 01       	movw	r30, r28
    5ab6:	0e 94 98 28 	call	0x5130	; 0x5130 <__tablejump2__>
    5aba:	21 96       	adiw	r28, 0x01	; 1
    5abc:	c2 35       	cpi	r28, 0x52	; 82
    5abe:	d1 07       	cpc	r29, r17
    5ac0:	c9 f7       	brne	.-14     	; 0x5ab4 <__do_global_dtors+0x8>
    5ac2:	f8 94       	cli

00005ac4 <__stop_program>:
    5ac4:	ff cf       	rjmp	.-2      	; 0x5ac4 <__stop_program>
