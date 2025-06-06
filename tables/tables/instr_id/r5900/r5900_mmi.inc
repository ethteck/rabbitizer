/* SPDX-FileCopyrightText: © 2022-2024 Decompollaborate */
/* SPDX-License-Identifier: MIT */

/*
    31---------26------------------------------------------5--------0
    | = MMI     |                                         | function|
    ------6----------------------------------------------------6-----
    |--000--|--001--|--010--|--011--|--100--|--101--|--110--|--111--| lo
000 | MADD  | MADDU | ---   | ---   | PLZCW | ---   | ---   | ---   |
001 |  *1   |  *2   | ---   | ---   | ---   | ---   | ---   | ---   |
010 | MFHI1 | MTHI1 | MFLO1 | MTLO1 | ---   | ---   | ---   | ---   |
011 | MULT1 | MULTU1| DIV1  | DIVU1 | ---   | ---   | ---   | ---   |
100 | MADD1 | MADDU1| ---   | ---   | ---   | ---   | ---   | ---   |
101 |  *3   |  *4   | ---   | ---   | ---   | ---   | ---   | ---   |
110 |  *5   |  *6   | ---   | ---   | PSLLH | ---   | PSRLH | PSRAH |
111 | ---   | ---   | ---   | ---   | PSLLW | ---   | PSRLW | PSRAW |
 hi |-------|-------|-------|-------|-------|-------|-------|-------|
     *1 = MMI0 list
     *2 = MMI2 list
     *3 = MMI1 list
     *4 = MMI3 list
     *5 = PMFHL list
     *6 = PMTHL list
*/

    RABBITIZER_DEF_INSTR_ID(
        r5900, 0x00, madd,
        .operands={RAB_OPERAND_cpu_rd, RAB_OPERAND_cpu_rs, RAB_OPERAND_cpu_rt},
        .modifiesRd=true,
        .readsRs=true,
        .readsRt=true
    ) // Multiply-ADD word
    RABBITIZER_DEF_INSTR_ID(
        r5900, 0x01, maddu,
        .operands={RAB_OPERAND_cpu_rd, RAB_OPERAND_cpu_rs, RAB_OPERAND_cpu_rt},
        .modifiesRd=true,
        .readsRs=true,
        .readsRt=true
    ) // Multiply-ADD Unsigned word
    RABBITIZER_DEF_INSTR_ID(
        r5900, 0x04, plzcw,
        .operands={RAB_OPERAND_cpu_rd, RAB_OPERAND_cpu_rs},
        .modifiesRd=true,
        .readsRs=true
    ) // Parallel Leading Zero or one Count Word

    RABBITIZER_DEF_INSTR_ID(
        r5900, 0x10, mfhi1,
        .operands={RAB_OPERAND_cpu_rd},
        .modifiesRd=true
    ) // Move From HI1 register
    RABBITIZER_DEF_INSTR_ID(
        r5900, 0x11, mthi1,
        .operands={RAB_OPERAND_cpu_rs},
        .readsRs=true
    ) // Move To HI1 register
    RABBITIZER_DEF_INSTR_ID(
        r5900, 0x12, mflo1,
        .operands={RAB_OPERAND_cpu_rd},
        .readsRd=true
    ) // Move From LO1 register
    RABBITIZER_DEF_INSTR_ID(
        r5900, 0x13, mtlo1,
        .operands={RAB_OPERAND_cpu_rs},
        .readsRs=true
    ) // Move To LO1 register

    RABBITIZER_DEF_INSTR_ID(
        r5900, 0x18, mult1,
        .operands={RAB_OPERAND_cpu_rd, RAB_OPERAND_cpu_rs, RAB_OPERAND_cpu_rt},
        .modifiesRd=true,
        .readsRs=true,
        .readsRt=true
    ) // MULTiply word pipeline 1
    RABBITIZER_DEF_INSTR_ID(
        r5900, 0x19, multu1,
        .operands={RAB_OPERAND_cpu_rd, RAB_OPERAND_cpu_rs, RAB_OPERAND_cpu_rt},
        .modifiesRd=true,
        .readsRs=true,
        .readsRt=true
    ) // MULTiply Unsigned word pipeline 1
    RABBITIZER_DEF_INSTR_ID(
        r5900, 0x1A, div1,
        .operands={RAB_OPERAND_cpu_zero, RAB_OPERAND_cpu_rs, RAB_OPERAND_cpu_rt},
        .readsRs=true,
        .readsRt=true
    ) // DIVide word pipeline 1
    RABBITIZER_DEF_INSTR_ID(
        r5900, 0x1B, divu1,
        .operands={RAB_OPERAND_cpu_zero, RAB_OPERAND_cpu_rs, RAB_OPERAND_cpu_rt},
        .readsRs=true,
        .readsRt=true
    ) // DIVide Unsigned word pipeline 1

    RABBITIZER_DEF_INSTR_ID(
        r5900, 0x20, madd1,
        .operands={RAB_OPERAND_cpu_rd, RAB_OPERAND_cpu_rs, RAB_OPERAND_cpu_rt},
        .modifiesRd=true,
        .readsRs=true,
        .readsRt=true
    ) // Multiply-ADD word pipeline 1
    RABBITIZER_DEF_INSTR_ID(
        r5900, 0x21, maddu1,
        .operands={RAB_OPERAND_cpu_rd, RAB_OPERAND_cpu_rs, RAB_OPERAND_cpu_rt},
        .modifiesRd=true,
        .readsRs=true,
        .readsRt=true
    ) // Multiply-ADD Unsigned word pipeline 1

    RABBITIZER_DEF_INSTR_ID(
        r5900, 0x34, psllh,
        .operands={RAB_OPERAND_cpu_rd, RAB_OPERAND_cpu_rt, RAB_OPERAND_cpu_sa},
        .modifiesRd=true,
        .readsRt=true
    ) // Parallel Shift Left Logical Halfword
    RABBITIZER_DEF_INSTR_ID(
        r5900, 0x36, psrlh,
        .operands={RAB_OPERAND_cpu_rd, RAB_OPERAND_cpu_rt, RAB_OPERAND_cpu_sa},
        .modifiesRd=true,
        .readsRt=true
    ) // Parallel Shift Right Logical Halfword
    RABBITIZER_DEF_INSTR_ID(
        r5900, 0x37, psrah,
        .operands={RAB_OPERAND_cpu_rd, RAB_OPERAND_cpu_rt, RAB_OPERAND_cpu_sa},
        .modifiesRd=true,
        .readsRt=true
    ) // Parallel Shift Right Arithmetic Halfword

    RABBITIZER_DEF_INSTR_ID(
        r5900, 0x3C, psllw,
        .operands={RAB_OPERAND_cpu_rd, RAB_OPERAND_cpu_rt, RAB_OPERAND_cpu_sa},
        .modifiesRd=true,
        .readsRt=true
    ) // Parallel Shift Left Logical Word
    RABBITIZER_DEF_INSTR_ID(
        r5900, 0x3E, psrlw,
        .operands={RAB_OPERAND_cpu_rd, RAB_OPERAND_cpu_rt, RAB_OPERAND_cpu_sa},
        .modifiesRd=true,
        .readsRt=true
    ) // Parallel Shift Right Logical Word
    RABBITIZER_DEF_INSTR_ID(
        r5900, 0x3F, psraw,
        .operands={RAB_OPERAND_cpu_rd, RAB_OPERAND_cpu_rt, RAB_OPERAND_cpu_sa},
        .modifiesRd=true,
        .readsRt=true
    ) // Parallel Shift Right Arithmetic Word
