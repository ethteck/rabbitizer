/* SPDX-FileCopyrightText: © 2022-2023 Decompollaborate */
/* SPDX-License-Identifier: MIT */

/* Automatically generated. DO NOT MODIFY */

#ifndef InstrId_enum_h_automatic
#define InstrId_enum_h_automatic

typedef enum RabbitizerInstrId {
    RABBITIZER_INSTR_ID_cpu_INVALID,
    RABBITIZER_INSTR_ID_cpu_j,
    RABBITIZER_INSTR_ID_cpu_jal,
    RABBITIZER_INSTR_ID_cpu_beq,
    RABBITIZER_INSTR_ID_cpu_bne,
    RABBITIZER_INSTR_ID_cpu_beql,
    RABBITIZER_INSTR_ID_cpu_bnel,
    RABBITIZER_INSTR_ID_cpu_blez,
    RABBITIZER_INSTR_ID_cpu_blezl,
    RABBITIZER_INSTR_ID_cpu_bgtz,
    RABBITIZER_INSTR_ID_cpu_bgtzl,
    RABBITIZER_INSTR_ID_cpu_addi,
    RABBITIZER_INSTR_ID_cpu_addiu,
    RABBITIZER_INSTR_ID_cpu_slti,
    RABBITIZER_INSTR_ID_cpu_sltiu,
    RABBITIZER_INSTR_ID_cpu_andi,
    RABBITIZER_INSTR_ID_cpu_ori,
    RABBITIZER_INSTR_ID_cpu_xori,
    RABBITIZER_INSTR_ID_cpu_daddi,
    RABBITIZER_INSTR_ID_cpu_daddiu,
    RABBITIZER_INSTR_ID_cpu_lui,
    RABBITIZER_INSTR_ID_cpu_ldl,
    RABBITIZER_INSTR_ID_cpu_ldr,
    RABBITIZER_INSTR_ID_cpu_lb,
    RABBITIZER_INSTR_ID_cpu_lh,
    RABBITIZER_INSTR_ID_cpu_lwl,
    RABBITIZER_INSTR_ID_cpu_lw,
    RABBITIZER_INSTR_ID_cpu_lbu,
    RABBITIZER_INSTR_ID_cpu_lhu,
    RABBITIZER_INSTR_ID_cpu_lwr,
    RABBITIZER_INSTR_ID_cpu_lwu,
    RABBITIZER_INSTR_ID_cpu_sb,
    RABBITIZER_INSTR_ID_cpu_sh,
    RABBITIZER_INSTR_ID_cpu_swl,
    RABBITIZER_INSTR_ID_cpu_sw,
    RABBITIZER_INSTR_ID_cpu_sdl,
    RABBITIZER_INSTR_ID_cpu_sdr,
    RABBITIZER_INSTR_ID_cpu_swr,
    RABBITIZER_INSTR_ID_cpu_ll,
    RABBITIZER_INSTR_ID_cpu_pref,
    RABBITIZER_INSTR_ID_cpu_lld,
    RABBITIZER_INSTR_ID_cpu_ld,
    RABBITIZER_INSTR_ID_cpu_sc,
    RABBITIZER_INSTR_ID_cpu_scd,
    RABBITIZER_INSTR_ID_cpu_sd,
    RABBITIZER_INSTR_ID_cpu_cache,
    RABBITIZER_INSTR_ID_cpu_lwc1,
    RABBITIZER_INSTR_ID_cpu_ldc1,
    RABBITIZER_INSTR_ID_cpu_swc1,
    RABBITIZER_INSTR_ID_cpu_sdc1,
    RABBITIZER_INSTR_ID_cpu_lwc2,
    RABBITIZER_INSTR_ID_cpu_ldc2,
    RABBITIZER_INSTR_ID_cpu_swc2,
    RABBITIZER_INSTR_ID_cpu_sdc2,
    RABBITIZER_INSTR_ID_cpu_b,
    RABBITIZER_INSTR_ID_cpu_beqz,
    RABBITIZER_INSTR_ID_cpu_bnez,
    RABBITIZER_INSTR_ID_cpu_sll,
    RABBITIZER_INSTR_ID_cpu_srl,
    RABBITIZER_INSTR_ID_cpu_sra,
    RABBITIZER_INSTR_ID_cpu_dsll,
    RABBITIZER_INSTR_ID_cpu_dsrl,
    RABBITIZER_INSTR_ID_cpu_dsra,
    RABBITIZER_INSTR_ID_cpu_dsll32,
    RABBITIZER_INSTR_ID_cpu_dsrl32,
    RABBITIZER_INSTR_ID_cpu_dsra32,
    RABBITIZER_INSTR_ID_cpu_dsllv,
    RABBITIZER_INSTR_ID_cpu_dsrlv,
    RABBITIZER_INSTR_ID_cpu_dsrav,
    RABBITIZER_INSTR_ID_cpu_sllv,
    RABBITIZER_INSTR_ID_cpu_srlv,
    RABBITIZER_INSTR_ID_cpu_srav,
    RABBITIZER_INSTR_ID_cpu_mthi,
    RABBITIZER_INSTR_ID_cpu_mtlo,
    RABBITIZER_INSTR_ID_cpu_jr,
    RABBITIZER_INSTR_ID_cpu_jalr,
    RABBITIZER_INSTR_ID_cpu_mfhi,
    RABBITIZER_INSTR_ID_cpu_mflo,
    RABBITIZER_INSTR_ID_cpu_movz,
    RABBITIZER_INSTR_ID_cpu_movn,
    RABBITIZER_INSTR_ID_cpu_div,
    RABBITIZER_INSTR_ID_cpu_divu,
    RABBITIZER_INSTR_ID_cpu_sn64_div,
    RABBITIZER_INSTR_ID_cpu_sn64_divu,
    RABBITIZER_INSTR_ID_cpu_ddiv,
    RABBITIZER_INSTR_ID_cpu_ddivu,
    RABBITIZER_INSTR_ID_cpu_add,
    RABBITIZER_INSTR_ID_cpu_addu,
    RABBITIZER_INSTR_ID_cpu_sub,
    RABBITIZER_INSTR_ID_cpu_subu,
    RABBITIZER_INSTR_ID_cpu_and,
    RABBITIZER_INSTR_ID_cpu_or,
    RABBITIZER_INSTR_ID_cpu_xor,
    RABBITIZER_INSTR_ID_cpu_nor,
    RABBITIZER_INSTR_ID_cpu_slt,
    RABBITIZER_INSTR_ID_cpu_sltu,
    RABBITIZER_INSTR_ID_cpu_dadd,
    RABBITIZER_INSTR_ID_cpu_daddu,
    RABBITIZER_INSTR_ID_cpu_dsub,
    RABBITIZER_INSTR_ID_cpu_dsubu,
    RABBITIZER_INSTR_ID_cpu_syscall,
    RABBITIZER_INSTR_ID_cpu_break,
    RABBITIZER_INSTR_ID_cpu_sync,
    RABBITIZER_INSTR_ID_cpu_mult,
    RABBITIZER_INSTR_ID_cpu_multu,
    RABBITIZER_INSTR_ID_cpu_dmult,
    RABBITIZER_INSTR_ID_cpu_dmultu,
    RABBITIZER_INSTR_ID_cpu_tge,
    RABBITIZER_INSTR_ID_cpu_tgeu,
    RABBITIZER_INSTR_ID_cpu_tlt,
    RABBITIZER_INSTR_ID_cpu_tltu,
    RABBITIZER_INSTR_ID_cpu_teq,
    RABBITIZER_INSTR_ID_cpu_tne,
    RABBITIZER_INSTR_ID_cpu_nop,
    RABBITIZER_INSTR_ID_cpu_move,
    RABBITIZER_INSTR_ID_cpu_not,
    RABBITIZER_INSTR_ID_cpu_negu,
    RABBITIZER_INSTR_ID_cpu_bltz,
    RABBITIZER_INSTR_ID_cpu_bgez,
    RABBITIZER_INSTR_ID_cpu_bltzl,
    RABBITIZER_INSTR_ID_cpu_bgezl,
    RABBITIZER_INSTR_ID_cpu_tgei,
    RABBITIZER_INSTR_ID_cpu_tgeiu,
    RABBITIZER_INSTR_ID_cpu_tlti,
    RABBITIZER_INSTR_ID_cpu_tltiu,
    RABBITIZER_INSTR_ID_cpu_teqi,
    RABBITIZER_INSTR_ID_cpu_tnei,
    RABBITIZER_INSTR_ID_cpu_bltzal,
    RABBITIZER_INSTR_ID_cpu_bgezal,
    RABBITIZER_INSTR_ID_cpu_bltzall,
    RABBITIZER_INSTR_ID_cpu_bgezall,
    RABBITIZER_INSTR_ID_cpu_bal,
    RABBITIZER_INSTR_ID_cpu_mfc0,
    RABBITIZER_INSTR_ID_cpu_dmfc0,
    RABBITIZER_INSTR_ID_cpu_cfc0,
    RABBITIZER_INSTR_ID_cpu_mtc0,
    RABBITIZER_INSTR_ID_cpu_dmtc0,
    RABBITIZER_INSTR_ID_cpu_ctc0,
    RABBITIZER_INSTR_ID_cpu_bc0f,
    RABBITIZER_INSTR_ID_cpu_bc0t,
    RABBITIZER_INSTR_ID_cpu_bc0fl,
    RABBITIZER_INSTR_ID_cpu_bc0tl,
    RABBITIZER_INSTR_ID_cpu_tlbr,
    RABBITIZER_INSTR_ID_cpu_tlbwi,
    RABBITIZER_INSTR_ID_cpu_tlbwr,
    RABBITIZER_INSTR_ID_cpu_tlbp,
    RABBITIZER_INSTR_ID_cpu_eret,
    RABBITIZER_INSTR_ID_cpu_mfc1,
    RABBITIZER_INSTR_ID_cpu_dmfc1,
    RABBITIZER_INSTR_ID_cpu_mtc1,
    RABBITIZER_INSTR_ID_cpu_dmtc1,
    RABBITIZER_INSTR_ID_cpu_cfc1,
    RABBITIZER_INSTR_ID_cpu_ctc1,
    RABBITIZER_INSTR_ID_cpu_bc1f,
    RABBITIZER_INSTR_ID_cpu_bc1t,
    RABBITIZER_INSTR_ID_cpu_bc1fl,
    RABBITIZER_INSTR_ID_cpu_bc1tl,
    RABBITIZER_INSTR_ID_cpu_add_s,
    RABBITIZER_INSTR_ID_cpu_sub_s,
    RABBITIZER_INSTR_ID_cpu_mul_s,
    RABBITIZER_INSTR_ID_cpu_div_s,
    RABBITIZER_INSTR_ID_cpu_sqrt_s,
    RABBITIZER_INSTR_ID_cpu_abs_s,
    RABBITIZER_INSTR_ID_cpu_mov_s,
    RABBITIZER_INSTR_ID_cpu_neg_s,
    RABBITIZER_INSTR_ID_cpu_round_l_s,
    RABBITIZER_INSTR_ID_cpu_trunc_l_s,
    RABBITIZER_INSTR_ID_cpu_ceil_l_s,
    RABBITIZER_INSTR_ID_cpu_floor_l_s,
    RABBITIZER_INSTR_ID_cpu_round_w_s,
    RABBITIZER_INSTR_ID_cpu_trunc_w_s,
    RABBITIZER_INSTR_ID_cpu_ceil_w_s,
    RABBITIZER_INSTR_ID_cpu_floor_w_s,
    RABBITIZER_INSTR_ID_cpu_cvt_d_s,
    RABBITIZER_INSTR_ID_cpu_cvt_w_s,
    RABBITIZER_INSTR_ID_cpu_cvt_l_s,
    RABBITIZER_INSTR_ID_cpu_c_f_s,
    RABBITIZER_INSTR_ID_cpu_c_un_s,
    RABBITIZER_INSTR_ID_cpu_c_eq_s,
    RABBITIZER_INSTR_ID_cpu_c_ueq_s,
    RABBITIZER_INSTR_ID_cpu_c_olt_s,
    RABBITIZER_INSTR_ID_cpu_c_ult_s,
    RABBITIZER_INSTR_ID_cpu_c_ole_s,
    RABBITIZER_INSTR_ID_cpu_c_ule_s,
    RABBITIZER_INSTR_ID_cpu_c_sf_s,
    RABBITIZER_INSTR_ID_cpu_c_ngle_s,
    RABBITIZER_INSTR_ID_cpu_c_seq_s,
    RABBITIZER_INSTR_ID_cpu_c_ngl_s,
    RABBITIZER_INSTR_ID_cpu_c_lt_s,
    RABBITIZER_INSTR_ID_cpu_c_nge_s,
    RABBITIZER_INSTR_ID_cpu_c_le_s,
    RABBITIZER_INSTR_ID_cpu_c_ngt_s,
    RABBITIZER_INSTR_ID_cpu_add_d,
    RABBITIZER_INSTR_ID_cpu_sub_d,
    RABBITIZER_INSTR_ID_cpu_mul_d,
    RABBITIZER_INSTR_ID_cpu_div_d,
    RABBITIZER_INSTR_ID_cpu_sqrt_d,
    RABBITIZER_INSTR_ID_cpu_abs_d,
    RABBITIZER_INSTR_ID_cpu_mov_d,
    RABBITIZER_INSTR_ID_cpu_neg_d,
    RABBITIZER_INSTR_ID_cpu_round_l_d,
    RABBITIZER_INSTR_ID_cpu_trunc_l_d,
    RABBITIZER_INSTR_ID_cpu_ceil_l_d,
    RABBITIZER_INSTR_ID_cpu_floor_l_d,
    RABBITIZER_INSTR_ID_cpu_round_w_d,
    RABBITIZER_INSTR_ID_cpu_trunc_w_d,
    RABBITIZER_INSTR_ID_cpu_ceil_w_d,
    RABBITIZER_INSTR_ID_cpu_floor_w_d,
    RABBITIZER_INSTR_ID_cpu_cvt_s_d,
    RABBITIZER_INSTR_ID_cpu_cvt_w_d,
    RABBITIZER_INSTR_ID_cpu_cvt_l_d,
    RABBITIZER_INSTR_ID_cpu_c_f_d,
    RABBITIZER_INSTR_ID_cpu_c_un_d,
    RABBITIZER_INSTR_ID_cpu_c_eq_d,
    RABBITIZER_INSTR_ID_cpu_c_ueq_d,
    RABBITIZER_INSTR_ID_cpu_c_olt_d,
    RABBITIZER_INSTR_ID_cpu_c_ult_d,
    RABBITIZER_INSTR_ID_cpu_c_ole_d,
    RABBITIZER_INSTR_ID_cpu_c_ule_d,
    RABBITIZER_INSTR_ID_cpu_c_df_d,
    RABBITIZER_INSTR_ID_cpu_c_ngle_d,
    RABBITIZER_INSTR_ID_cpu_c_deq_d,
    RABBITIZER_INSTR_ID_cpu_c_ngl_d,
    RABBITIZER_INSTR_ID_cpu_c_lt_d,
    RABBITIZER_INSTR_ID_cpu_c_nge_d,
    RABBITIZER_INSTR_ID_cpu_c_le_d,
    RABBITIZER_INSTR_ID_cpu_c_ngt_d,
    RABBITIZER_INSTR_ID_cpu_cvt_s_w,
    RABBITIZER_INSTR_ID_cpu_cvt_d_w,
    RABBITIZER_INSTR_ID_cpu_cvt_s_l,
    RABBITIZER_INSTR_ID_cpu_cvt_d_l,
    RABBITIZER_INSTR_ID_cpu_mfc2,
    RABBITIZER_INSTR_ID_cpu_mtc2,
    RABBITIZER_INSTR_ID_cpu_cfc2,
    RABBITIZER_INSTR_ID_cpu_ctc2,
    RABBITIZER_INSTR_ID_cpu_USERDEF_00,
    RABBITIZER_INSTR_ID_cpu_USERDEF_01,
    RABBITIZER_INSTR_ID_cpu_USERDEF_02,
    RABBITIZER_INSTR_ID_cpu_USERDEF_03,
    RABBITIZER_INSTR_ID_cpu_USERDEF_04,
    RABBITIZER_INSTR_ID_cpu_USERDEF_05,
    RABBITIZER_INSTR_ID_cpu_USERDEF_06,
    RABBITIZER_INSTR_ID_cpu_USERDEF_07,
    RABBITIZER_INSTR_ID_cpu_USERDEF_08,
    RABBITIZER_INSTR_ID_cpu_USERDEF_09,
    RABBITIZER_INSTR_ID_cpu_USERDEF_10,
    RABBITIZER_INSTR_ID_cpu_USERDEF_11,
    RABBITIZER_INSTR_ID_cpu_USERDEF_12,
    RABBITIZER_INSTR_ID_cpu_USERDEF_13,
    RABBITIZER_INSTR_ID_cpu_USERDEF_14,
    RABBITIZER_INSTR_ID_cpu_USERDEF_15,
    RABBITIZER_INSTR_ID_cpu_USERDEF_16,
    RABBITIZER_INSTR_ID_cpu_USERDEF_17,
    RABBITIZER_INSTR_ID_cpu_USERDEF_18,
    RABBITIZER_INSTR_ID_cpu_USERDEF_19,
    RABBITIZER_INSTR_ID_cpu_MAX,
    RABBITIZER_INSTR_ID_rsp_INVALID,
    RABBITIZER_INSTR_ID_rsp_mfc2,
    RABBITIZER_INSTR_ID_rsp_mtc2,
    RABBITIZER_INSTR_ID_rsp_cfc2,
    RABBITIZER_INSTR_ID_rsp_ctc2,
    RABBITIZER_INSTR_ID_rsp_vmulf,
    RABBITIZER_INSTR_ID_rsp_vmulu,
    RABBITIZER_INSTR_ID_rsp_vrndp,
    RABBITIZER_INSTR_ID_rsp_vmulq,
    RABBITIZER_INSTR_ID_rsp_vmudl,
    RABBITIZER_INSTR_ID_rsp_vmudm,
    RABBITIZER_INSTR_ID_rsp_vmudn,
    RABBITIZER_INSTR_ID_rsp_vmudh,
    RABBITIZER_INSTR_ID_rsp_vmacf,
    RABBITIZER_INSTR_ID_rsp_vmacu,
    RABBITIZER_INSTR_ID_rsp_vrndn,
    RABBITIZER_INSTR_ID_rsp_vmacq,
    RABBITIZER_INSTR_ID_rsp_vmadl,
    RABBITIZER_INSTR_ID_rsp_vmadm,
    RABBITIZER_INSTR_ID_rsp_vmadn,
    RABBITIZER_INSTR_ID_rsp_vmadh,
    RABBITIZER_INSTR_ID_rsp_vadd,
    RABBITIZER_INSTR_ID_rsp_vsub,
    RABBITIZER_INSTR_ID_rsp_vabs,
    RABBITIZER_INSTR_ID_rsp_vaddc,
    RABBITIZER_INSTR_ID_rsp_vsubc,
    RABBITIZER_INSTR_ID_rsp_vsar,
    RABBITIZER_INSTR_ID_rsp_vand,
    RABBITIZER_INSTR_ID_rsp_vnand,
    RABBITIZER_INSTR_ID_rsp_vor,
    RABBITIZER_INSTR_ID_rsp_vnor,
    RABBITIZER_INSTR_ID_rsp_vxor,
    RABBITIZER_INSTR_ID_rsp_vnxor,
    RABBITIZER_INSTR_ID_rsp_vlt,
    RABBITIZER_INSTR_ID_rsp_veq,
    RABBITIZER_INSTR_ID_rsp_vne,
    RABBITIZER_INSTR_ID_rsp_vge,
    RABBITIZER_INSTR_ID_rsp_vcl,
    RABBITIZER_INSTR_ID_rsp_vch,
    RABBITIZER_INSTR_ID_rsp_vcr,
    RABBITIZER_INSTR_ID_rsp_vmrg,
    RABBITIZER_INSTR_ID_rsp_vrcp,
    RABBITIZER_INSTR_ID_rsp_vrcpl,
    RABBITIZER_INSTR_ID_rsp_vrcph,
    RABBITIZER_INSTR_ID_rsp_vmov,
    RABBITIZER_INSTR_ID_rsp_vrsq,
    RABBITIZER_INSTR_ID_rsp_vrsql,
    RABBITIZER_INSTR_ID_rsp_vrsqh,
    RABBITIZER_INSTR_ID_rsp_vnop,
    RABBITIZER_INSTR_ID_rsp_lbv,
    RABBITIZER_INSTR_ID_rsp_lsv,
    RABBITIZER_INSTR_ID_rsp_llv,
    RABBITIZER_INSTR_ID_rsp_ldv,
    RABBITIZER_INSTR_ID_rsp_lqv,
    RABBITIZER_INSTR_ID_rsp_lrv,
    RABBITIZER_INSTR_ID_rsp_lpv,
    RABBITIZER_INSTR_ID_rsp_luv,
    RABBITIZER_INSTR_ID_rsp_lhv,
    RABBITIZER_INSTR_ID_rsp_lfv,
    RABBITIZER_INSTR_ID_rsp_ltv,
    RABBITIZER_INSTR_ID_rsp_sbv,
    RABBITIZER_INSTR_ID_rsp_ssv,
    RABBITIZER_INSTR_ID_rsp_slv,
    RABBITIZER_INSTR_ID_rsp_sdv,
    RABBITIZER_INSTR_ID_rsp_sqv,
    RABBITIZER_INSTR_ID_rsp_srv,
    RABBITIZER_INSTR_ID_rsp_spv,
    RABBITIZER_INSTR_ID_rsp_suv,
    RABBITIZER_INSTR_ID_rsp_shv,
    RABBITIZER_INSTR_ID_rsp_sfv,
    RABBITIZER_INSTR_ID_rsp_stv,
    RABBITIZER_INSTR_ID_rsp_swv,
    RABBITIZER_INSTR_ID_rsp_j,
    RABBITIZER_INSTR_ID_rsp_jal,
    RABBITIZER_INSTR_ID_rsp_beq,
    RABBITIZER_INSTR_ID_rsp_bne,
    RABBITIZER_INSTR_ID_rsp_blez,
    RABBITIZER_INSTR_ID_rsp_bgtz,
    RABBITIZER_INSTR_ID_rsp_addi,
    RABBITIZER_INSTR_ID_rsp_addiu,
    RABBITIZER_INSTR_ID_rsp_slti,
    RABBITIZER_INSTR_ID_rsp_sltiu,
    RABBITIZER_INSTR_ID_rsp_andi,
    RABBITIZER_INSTR_ID_rsp_ori,
    RABBITIZER_INSTR_ID_rsp_xori,
    RABBITIZER_INSTR_ID_rsp_lui,
    RABBITIZER_INSTR_ID_rsp_lb,
    RABBITIZER_INSTR_ID_rsp_lh,
    RABBITIZER_INSTR_ID_rsp_lw,
    RABBITIZER_INSTR_ID_rsp_lbu,
    RABBITIZER_INSTR_ID_rsp_lhu,
    RABBITIZER_INSTR_ID_rsp_sb,
    RABBITIZER_INSTR_ID_rsp_sh,
    RABBITIZER_INSTR_ID_rsp_sw,
    RABBITIZER_INSTR_ID_rsp_pref,
    RABBITIZER_INSTR_ID_rsp_b,
    RABBITIZER_INSTR_ID_rsp_beqz,
    RABBITIZER_INSTR_ID_rsp_bnez,
    RABBITIZER_INSTR_ID_rsp_sll,
    RABBITIZER_INSTR_ID_rsp_srl,
    RABBITIZER_INSTR_ID_rsp_sra,
    RABBITIZER_INSTR_ID_rsp_sllv,
    RABBITIZER_INSTR_ID_rsp_srlv,
    RABBITIZER_INSTR_ID_rsp_srav,
    RABBITIZER_INSTR_ID_rsp_jr,
    RABBITIZER_INSTR_ID_rsp_jalr,
    RABBITIZER_INSTR_ID_rsp_movz,
    RABBITIZER_INSTR_ID_rsp_movn,
    RABBITIZER_INSTR_ID_rsp_add,
    RABBITIZER_INSTR_ID_rsp_addu,
    RABBITIZER_INSTR_ID_rsp_sub,
    RABBITIZER_INSTR_ID_rsp_subu,
    RABBITIZER_INSTR_ID_rsp_and,
    RABBITIZER_INSTR_ID_rsp_or,
    RABBITIZER_INSTR_ID_rsp_xor,
    RABBITIZER_INSTR_ID_rsp_nor,
    RABBITIZER_INSTR_ID_rsp_slt,
    RABBITIZER_INSTR_ID_rsp_sltu,
    RABBITIZER_INSTR_ID_rsp_break,
    RABBITIZER_INSTR_ID_rsp_nop,
    RABBITIZER_INSTR_ID_rsp_move,
    RABBITIZER_INSTR_ID_rsp_not,
    RABBITIZER_INSTR_ID_rsp_negu,
    RABBITIZER_INSTR_ID_rsp_bltz,
    RABBITIZER_INSTR_ID_rsp_bgez,
    RABBITIZER_INSTR_ID_rsp_bltzal,
    RABBITIZER_INSTR_ID_rsp_bgezal,
    RABBITIZER_INSTR_ID_rsp_bal,
    RABBITIZER_INSTR_ID_rsp_mfc0,
    RABBITIZER_INSTR_ID_rsp_mtc0,
    RABBITIZER_INSTR_ID_rsp_USERDEF_00,
    RABBITIZER_INSTR_ID_rsp_USERDEF_01,
    RABBITIZER_INSTR_ID_rsp_USERDEF_02,
    RABBITIZER_INSTR_ID_rsp_USERDEF_03,
    RABBITIZER_INSTR_ID_rsp_USERDEF_04,
    RABBITIZER_INSTR_ID_rsp_USERDEF_05,
    RABBITIZER_INSTR_ID_rsp_USERDEF_06,
    RABBITIZER_INSTR_ID_rsp_USERDEF_07,
    RABBITIZER_INSTR_ID_rsp_USERDEF_08,
    RABBITIZER_INSTR_ID_rsp_USERDEF_09,
    RABBITIZER_INSTR_ID_rsp_USERDEF_10,
    RABBITIZER_INSTR_ID_rsp_USERDEF_11,
    RABBITIZER_INSTR_ID_rsp_USERDEF_12,
    RABBITIZER_INSTR_ID_rsp_USERDEF_13,
    RABBITIZER_INSTR_ID_rsp_USERDEF_14,
    RABBITIZER_INSTR_ID_rsp_USERDEF_15,
    RABBITIZER_INSTR_ID_rsp_USERDEF_16,
    RABBITIZER_INSTR_ID_rsp_USERDEF_17,
    RABBITIZER_INSTR_ID_rsp_USERDEF_18,
    RABBITIZER_INSTR_ID_rsp_USERDEF_19,
    RABBITIZER_INSTR_ID_rsp_MAX,
    RABBITIZER_INSTR_ID_r3000gte_INVALID,
    RABBITIZER_INSTR_ID_r3000gte_RTPS,
    RABBITIZER_INSTR_ID_r3000gte_RTPT,
    RABBITIZER_INSTR_ID_r3000gte_DPCL,
    RABBITIZER_INSTR_ID_r3000gte_DPCS,
    RABBITIZER_INSTR_ID_r3000gte_DPCT,
    RABBITIZER_INSTR_ID_r3000gte_INTPL,
    RABBITIZER_INSTR_ID_r3000gte_NCS,
    RABBITIZER_INSTR_ID_r3000gte_NCT,
    RABBITIZER_INSTR_ID_r3000gte_NCDS,
    RABBITIZER_INSTR_ID_r3000gte_NCDT,
    RABBITIZER_INSTR_ID_r3000gte_NCCS,
    RABBITIZER_INSTR_ID_r3000gte_NCCT,
    RABBITIZER_INSTR_ID_r3000gte_CDP,
    RABBITIZER_INSTR_ID_r3000gte_CC,
    RABBITIZER_INSTR_ID_r3000gte_NCLIP,
    RABBITIZER_INSTR_ID_r3000gte_AVSZ3,
    RABBITIZER_INSTR_ID_r3000gte_AVSZ4,
    RABBITIZER_INSTR_ID_r3000gte_MVMVA,
    RABBITIZER_INSTR_ID_r3000gte_SQR,
    RABBITIZER_INSTR_ID_r3000gte_OP,
    RABBITIZER_INSTR_ID_r3000gte_GPF,
    RABBITIZER_INSTR_ID_r3000gte_GPL,
    RABBITIZER_INSTR_ID_r3000gte_USERDEF_00,
    RABBITIZER_INSTR_ID_r3000gte_USERDEF_01,
    RABBITIZER_INSTR_ID_r3000gte_USERDEF_02,
    RABBITIZER_INSTR_ID_r3000gte_USERDEF_03,
    RABBITIZER_INSTR_ID_r3000gte_USERDEF_04,
    RABBITIZER_INSTR_ID_r3000gte_USERDEF_05,
    RABBITIZER_INSTR_ID_r3000gte_USERDEF_06,
    RABBITIZER_INSTR_ID_r3000gte_USERDEF_07,
    RABBITIZER_INSTR_ID_r3000gte_USERDEF_08,
    RABBITIZER_INSTR_ID_r3000gte_USERDEF_09,
    RABBITIZER_INSTR_ID_r3000gte_USERDEF_10,
    RABBITIZER_INSTR_ID_r3000gte_USERDEF_11,
    RABBITIZER_INSTR_ID_r3000gte_USERDEF_12,
    RABBITIZER_INSTR_ID_r3000gte_USERDEF_13,
    RABBITIZER_INSTR_ID_r3000gte_USERDEF_14,
    RABBITIZER_INSTR_ID_r3000gte_USERDEF_15,
    RABBITIZER_INSTR_ID_r3000gte_USERDEF_16,
    RABBITIZER_INSTR_ID_r3000gte_USERDEF_17,
    RABBITIZER_INSTR_ID_r3000gte_USERDEF_18,
    RABBITIZER_INSTR_ID_r3000gte_USERDEF_19,
    RABBITIZER_INSTR_ID_r3000gte_MAX,
    RABBITIZER_INSTR_ID_r5900_INVALID,
    RABBITIZER_INSTR_ID_r5900_lq,
    RABBITIZER_INSTR_ID_r5900_sq,
    RABBITIZER_INSTR_ID_r5900_lqc2,
    RABBITIZER_INSTR_ID_r5900_sqc2,
    RABBITIZER_INSTR_ID_r5900_sync_p,
    RABBITIZER_INSTR_ID_r5900_mult,
    RABBITIZER_INSTR_ID_r5900_mfsa,
    RABBITIZER_INSTR_ID_r5900_mtsa,
    RABBITIZER_INSTR_ID_r5900_mtsab,
    RABBITIZER_INSTR_ID_r5900_mtsah,
    RABBITIZER_INSTR_ID_r5900_madd,
    RABBITIZER_INSTR_ID_r5900_maddu,
    RABBITIZER_INSTR_ID_r5900_plzcw,
    RABBITIZER_INSTR_ID_r5900_mfhi1,
    RABBITIZER_INSTR_ID_r5900_mthi1,
    RABBITIZER_INSTR_ID_r5900_mflo1,
    RABBITIZER_INSTR_ID_r5900_mtlo1,
    RABBITIZER_INSTR_ID_r5900_mult1,
    RABBITIZER_INSTR_ID_r5900_multu1,
    RABBITIZER_INSTR_ID_r5900_div1,
    RABBITIZER_INSTR_ID_r5900_divu1,
    RABBITIZER_INSTR_ID_r5900_madd1,
    RABBITIZER_INSTR_ID_r5900_maddu1,
    RABBITIZER_INSTR_ID_r5900_pmfhl,
    RABBITIZER_INSTR_ID_r5900_pmthl,
    RABBITIZER_INSTR_ID_r5900_psllh,
    RABBITIZER_INSTR_ID_r5900_psrlh,
    RABBITIZER_INSTR_ID_r5900_psrah,
    RABBITIZER_INSTR_ID_r5900_psllw,
    RABBITIZER_INSTR_ID_r5900_psrlw,
    RABBITIZER_INSTR_ID_r5900_psraw,
    RABBITIZER_INSTR_ID_r5900_paddw,
    RABBITIZER_INSTR_ID_r5900_psubw,
    RABBITIZER_INSTR_ID_r5900_pcgtw,
    RABBITIZER_INSTR_ID_r5900_pmaxw,
    RABBITIZER_INSTR_ID_r5900_paddh,
    RABBITIZER_INSTR_ID_r5900_psubh,
    RABBITIZER_INSTR_ID_r5900_pcgth,
    RABBITIZER_INSTR_ID_r5900_pmaxh,
    RABBITIZER_INSTR_ID_r5900_paddb,
    RABBITIZER_INSTR_ID_r5900_psubb,
    RABBITIZER_INSTR_ID_r5900_pcgtb,
    RABBITIZER_INSTR_ID_r5900_paddsw,
    RABBITIZER_INSTR_ID_r5900_psubsw,
    RABBITIZER_INSTR_ID_r5900_pextlw,
    RABBITIZER_INSTR_ID_r5900_ppacw,
    RABBITIZER_INSTR_ID_r5900_paddsh,
    RABBITIZER_INSTR_ID_r5900_psubsh,
    RABBITIZER_INSTR_ID_r5900_pextlh,
    RABBITIZER_INSTR_ID_r5900_ppach,
    RABBITIZER_INSTR_ID_r5900_paddsb,
    RABBITIZER_INSTR_ID_r5900_psubsb,
    RABBITIZER_INSTR_ID_r5900_pextlb,
    RABBITIZER_INSTR_ID_r5900_ppacb,
    RABBITIZER_INSTR_ID_r5900_pext5,
    RABBITIZER_INSTR_ID_r5900_ppac5,
    RABBITIZER_INSTR_ID_r5900_pabsw,
    RABBITIZER_INSTR_ID_r5900_pceqw,
    RABBITIZER_INSTR_ID_r5900_pminw,
    RABBITIZER_INSTR_ID_r5900_padsbh,
    RABBITIZER_INSTR_ID_r5900_pabsh,
    RABBITIZER_INSTR_ID_r5900_pceqh,
    RABBITIZER_INSTR_ID_r5900_pminh,
    RABBITIZER_INSTR_ID_r5900_pceqb,
    RABBITIZER_INSTR_ID_r5900_padduw,
    RABBITIZER_INSTR_ID_r5900_psubuw,
    RABBITIZER_INSTR_ID_r5900_pextuw,
    RABBITIZER_INSTR_ID_r5900_padduh,
    RABBITIZER_INSTR_ID_r5900_psubuh,
    RABBITIZER_INSTR_ID_r5900_pextuh,
    RABBITIZER_INSTR_ID_r5900_paddub,
    RABBITIZER_INSTR_ID_r5900_psubub,
    RABBITIZER_INSTR_ID_r5900_pextub,
    RABBITIZER_INSTR_ID_r5900_qfsrv,
    RABBITIZER_INSTR_ID_r5900_pmaddw,
    RABBITIZER_INSTR_ID_r5900_psllvw,
    RABBITIZER_INSTR_ID_r5900_psrlvw,
    RABBITIZER_INSTR_ID_r5900_pmsubw,
    RABBITIZER_INSTR_ID_r5900_pmfhi,
    RABBITIZER_INSTR_ID_r5900_pmflo,
    RABBITIZER_INSTR_ID_r5900_pinth,
    RABBITIZER_INSTR_ID_r5900_pmultw,
    RABBITIZER_INSTR_ID_r5900_pdivw,
    RABBITIZER_INSTR_ID_r5900_pcpyld,
    RABBITIZER_INSTR_ID_r5900_pmaddh,
    RABBITIZER_INSTR_ID_r5900_phmadh,
    RABBITIZER_INSTR_ID_r5900_pand,
    RABBITIZER_INSTR_ID_r5900_pxor,
    RABBITIZER_INSTR_ID_r5900_pmsubh,
    RABBITIZER_INSTR_ID_r5900_phmsbh,
    RABBITIZER_INSTR_ID_r5900_pexeh,
    RABBITIZER_INSTR_ID_r5900_prevh,
    RABBITIZER_INSTR_ID_r5900_pmulth,
    RABBITIZER_INSTR_ID_r5900_pdivbw,
    RABBITIZER_INSTR_ID_r5900_pexew,
    RABBITIZER_INSTR_ID_r5900_prot3w,
    RABBITIZER_INSTR_ID_r5900_pmadduw,
    RABBITIZER_INSTR_ID_r5900_psravw,
    RABBITIZER_INSTR_ID_r5900_pmthi,
    RABBITIZER_INSTR_ID_r5900_pmtlo,
    RABBITIZER_INSTR_ID_r5900_pinteh,
    RABBITIZER_INSTR_ID_r5900_pmultuw,
    RABBITIZER_INSTR_ID_r5900_pdivuw,
    RABBITIZER_INSTR_ID_r5900_pcpyud,
    RABBITIZER_INSTR_ID_r5900_por,
    RABBITIZER_INSTR_ID_r5900_pnor,
    RABBITIZER_INSTR_ID_r5900_pexch,
    RABBITIZER_INSTR_ID_r5900_pcpyh,
    RABBITIZER_INSTR_ID_r5900_pexcw,
    RABBITIZER_INSTR_ID_r5900_ei,
    RABBITIZER_INSTR_ID_r5900_di,
    RABBITIZER_INSTR_ID_r5900_c1__sqrt_s,
    RABBITIZER_INSTR_ID_r5900_rsqrt_s,
    RABBITIZER_INSTR_ID_r5900_adda_s,
    RABBITIZER_INSTR_ID_r5900_suba_s,
    RABBITIZER_INSTR_ID_r5900_mula_s,
    RABBITIZER_INSTR_ID_r5900_madd_s,
    RABBITIZER_INSTR_ID_r5900_msub_s,
    RABBITIZER_INSTR_ID_r5900_madda_s,
    RABBITIZER_INSTR_ID_r5900_msuba_s,
    RABBITIZER_INSTR_ID_r5900_max_s,
    RABBITIZER_INSTR_ID_r5900_min_s,
    RABBITIZER_INSTR_ID_r5900_c_lt_s,
    RABBITIZER_INSTR_ID_r5900_c_le_s,
    RABBITIZER_INSTR_ID_r5900_qmfc2,
    RABBITIZER_INSTR_ID_r5900_cfc2,
    RABBITIZER_INSTR_ID_r5900_qmtc2,
    RABBITIZER_INSTR_ID_r5900_ctc2,
    RABBITIZER_INSTR_ID_r5900_bc2f,
    RABBITIZER_INSTR_ID_r5900_bc2t,
    RABBITIZER_INSTR_ID_r5900_bc2fl,
    RABBITIZER_INSTR_ID_r5900_bc2tl,
    RABBITIZER_INSTR_ID_r5900_vaddx,
    RABBITIZER_INSTR_ID_r5900_vaddy,
    RABBITIZER_INSTR_ID_r5900_vaddz,
    RABBITIZER_INSTR_ID_r5900_vaddw,
    RABBITIZER_INSTR_ID_r5900_vsubx,
    RABBITIZER_INSTR_ID_r5900_vsuby,
    RABBITIZER_INSTR_ID_r5900_vsubz,
    RABBITIZER_INSTR_ID_r5900_vsubw,
    RABBITIZER_INSTR_ID_r5900_vmaddx,
    RABBITIZER_INSTR_ID_r5900_vmaddy,
    RABBITIZER_INSTR_ID_r5900_vmaddz,
    RABBITIZER_INSTR_ID_r5900_vmaddw,
    RABBITIZER_INSTR_ID_r5900_vmsubx,
    RABBITIZER_INSTR_ID_r5900_vmsuby,
    RABBITIZER_INSTR_ID_r5900_vmsubz,
    RABBITIZER_INSTR_ID_r5900_vmsubw,
    RABBITIZER_INSTR_ID_r5900_vmaxx,
    RABBITIZER_INSTR_ID_r5900_vmaxy,
    RABBITIZER_INSTR_ID_r5900_vmaxz,
    RABBITIZER_INSTR_ID_r5900_vmaxw,
    RABBITIZER_INSTR_ID_r5900_vminix,
    RABBITIZER_INSTR_ID_r5900_vminiy,
    RABBITIZER_INSTR_ID_r5900_vminiz,
    RABBITIZER_INSTR_ID_r5900_vminiw,
    RABBITIZER_INSTR_ID_r5900_vmulx,
    RABBITIZER_INSTR_ID_r5900_vmuly,
    RABBITIZER_INSTR_ID_r5900_vmulz,
    RABBITIZER_INSTR_ID_r5900_vmulw,
    RABBITIZER_INSTR_ID_r5900_vmulq,
    RABBITIZER_INSTR_ID_r5900_vmaxi,
    RABBITIZER_INSTR_ID_r5900_vmuli,
    RABBITIZER_INSTR_ID_r5900_vminii,
    RABBITIZER_INSTR_ID_r5900_vaddq,
    RABBITIZER_INSTR_ID_r5900_vmaddq,
    RABBITIZER_INSTR_ID_r5900_vaddi,
    RABBITIZER_INSTR_ID_r5900_vmaddi,
    RABBITIZER_INSTR_ID_r5900_vsubq,
    RABBITIZER_INSTR_ID_r5900_vmsubq,
    RABBITIZER_INSTR_ID_r5900_vsubi,
    RABBITIZER_INSTR_ID_r5900_vmsubi,
    RABBITIZER_INSTR_ID_r5900_vadd,
    RABBITIZER_INSTR_ID_r5900_vmadd,
    RABBITIZER_INSTR_ID_r5900_vmul,
    RABBITIZER_INSTR_ID_r5900_vmax,
    RABBITIZER_INSTR_ID_r5900_vsub,
    RABBITIZER_INSTR_ID_r5900_vmsub,
    RABBITIZER_INSTR_ID_r5900_vopmsub,
    RABBITIZER_INSTR_ID_r5900_vmini,
    RABBITIZER_INSTR_ID_r5900_viadd,
    RABBITIZER_INSTR_ID_r5900_visub,
    RABBITIZER_INSTR_ID_r5900_viaddi,
    RABBITIZER_INSTR_ID_r5900_viand,
    RABBITIZER_INSTR_ID_r5900_vior,
    RABBITIZER_INSTR_ID_r5900_vcallms,
    RABBITIZER_INSTR_ID_r5900_vcallmsr,
    RABBITIZER_INSTR_ID_r5900_vaddax,
    RABBITIZER_INSTR_ID_r5900_vadday,
    RABBITIZER_INSTR_ID_r5900_vaddaz,
    RABBITIZER_INSTR_ID_r5900_vaddaw,
    RABBITIZER_INSTR_ID_r5900_vsubax,
    RABBITIZER_INSTR_ID_r5900_vsubay,
    RABBITIZER_INSTR_ID_r5900_vsubaz,
    RABBITIZER_INSTR_ID_r5900_vsubaw,
    RABBITIZER_INSTR_ID_r5900_vmaddax,
    RABBITIZER_INSTR_ID_r5900_vmadday,
    RABBITIZER_INSTR_ID_r5900_vmaddaz,
    RABBITIZER_INSTR_ID_r5900_vmaddaw,
    RABBITIZER_INSTR_ID_r5900_vmsubax,
    RABBITIZER_INSTR_ID_r5900_vmsubay,
    RABBITIZER_INSTR_ID_r5900_vmsubaz,
    RABBITIZER_INSTR_ID_r5900_vmsubaw,
    RABBITIZER_INSTR_ID_r5900_vitof0,
    RABBITIZER_INSTR_ID_r5900_vitof4,
    RABBITIZER_INSTR_ID_r5900_vitof12,
    RABBITIZER_INSTR_ID_r5900_vitof15,
    RABBITIZER_INSTR_ID_r5900_vftoi0,
    RABBITIZER_INSTR_ID_r5900_vftoi4,
    RABBITIZER_INSTR_ID_r5900_vftoi12,
    RABBITIZER_INSTR_ID_r5900_vftoi15,
    RABBITIZER_INSTR_ID_r5900_vmulax,
    RABBITIZER_INSTR_ID_r5900_vmulay,
    RABBITIZER_INSTR_ID_r5900_vmulaz,
    RABBITIZER_INSTR_ID_r5900_vmulaw,
    RABBITIZER_INSTR_ID_r5900_vmulaq,
    RABBITIZER_INSTR_ID_r5900_vabs,
    RABBITIZER_INSTR_ID_r5900_vmulai,
    RABBITIZER_INSTR_ID_r5900_vclipw,
    RABBITIZER_INSTR_ID_r5900_vaddaq,
    RABBITIZER_INSTR_ID_r5900_vmaddaq,
    RABBITIZER_INSTR_ID_r5900_vaddai,
    RABBITIZER_INSTR_ID_r5900_vmaddai,
    RABBITIZER_INSTR_ID_r5900_vsubaq,
    RABBITIZER_INSTR_ID_r5900_vmsubaq,
    RABBITIZER_INSTR_ID_r5900_vsubai,
    RABBITIZER_INSTR_ID_r5900_vmsubai,
    RABBITIZER_INSTR_ID_r5900_vadda,
    RABBITIZER_INSTR_ID_r5900_vmadda,
    RABBITIZER_INSTR_ID_r5900_vmula,
    RABBITIZER_INSTR_ID_r5900_vsuba,
    RABBITIZER_INSTR_ID_r5900_vmsuba,
    RABBITIZER_INSTR_ID_r5900_vopmula,
    RABBITIZER_INSTR_ID_r5900_vnop,
    RABBITIZER_INSTR_ID_r5900_vmove,
    RABBITIZER_INSTR_ID_r5900_vmr32,
    RABBITIZER_INSTR_ID_r5900_vlqi,
    RABBITIZER_INSTR_ID_r5900_vsqi,
    RABBITIZER_INSTR_ID_r5900_vlqd,
    RABBITIZER_INSTR_ID_r5900_vsqd,
    RABBITIZER_INSTR_ID_r5900_vdiv,
    RABBITIZER_INSTR_ID_r5900_vsqrt,
    RABBITIZER_INSTR_ID_r5900_vrsqrt,
    RABBITIZER_INSTR_ID_r5900_vwaitq,
    RABBITIZER_INSTR_ID_r5900_vmtir,
    RABBITIZER_INSTR_ID_r5900_vmfir,
    RABBITIZER_INSTR_ID_r5900_vilwr,
    RABBITIZER_INSTR_ID_r5900_viswr,
    RABBITIZER_INSTR_ID_r5900_vrnext,
    RABBITIZER_INSTR_ID_r5900_vrget,
    RABBITIZER_INSTR_ID_r5900_vrinit,
    RABBITIZER_INSTR_ID_r5900_vrxor,
    RABBITIZER_INSTR_ID_r5900_USERDEF_00,
    RABBITIZER_INSTR_ID_r5900_USERDEF_01,
    RABBITIZER_INSTR_ID_r5900_USERDEF_02,
    RABBITIZER_INSTR_ID_r5900_USERDEF_03,
    RABBITIZER_INSTR_ID_r5900_USERDEF_04,
    RABBITIZER_INSTR_ID_r5900_USERDEF_05,
    RABBITIZER_INSTR_ID_r5900_USERDEF_06,
    RABBITIZER_INSTR_ID_r5900_USERDEF_07,
    RABBITIZER_INSTR_ID_r5900_USERDEF_08,
    RABBITIZER_INSTR_ID_r5900_USERDEF_09,
    RABBITIZER_INSTR_ID_r5900_USERDEF_10,
    RABBITIZER_INSTR_ID_r5900_USERDEF_11,
    RABBITIZER_INSTR_ID_r5900_USERDEF_12,
    RABBITIZER_INSTR_ID_r5900_USERDEF_13,
    RABBITIZER_INSTR_ID_r5900_USERDEF_14,
    RABBITIZER_INSTR_ID_r5900_USERDEF_15,
    RABBITIZER_INSTR_ID_r5900_USERDEF_16,
    RABBITIZER_INSTR_ID_r5900_USERDEF_17,
    RABBITIZER_INSTR_ID_r5900_USERDEF_18,
    RABBITIZER_INSTR_ID_r5900_USERDEF_19,
    RABBITIZER_INSTR_ID_r5900_MAX,
    RABBITIZER_INSTR_ID_ALL_MAX = RABBITIZER_INSTR_ID_r5900_MAX,
} RabbitizerInstrId;

#endif
