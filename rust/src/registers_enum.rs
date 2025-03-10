/* SPDX-FileCopyrightText: © 2022-2023 Decompollaborate */
/* SPDX-License-Identifier: MIT */

/* Automatically generated. DO NOT MODIFY */

pub mod registers {
    #[repr(u32)]
    #[derive(Debug, Copy, Clone, Hash, PartialEq, Eq)]
    #[allow(non_camel_case_types)]
    #[derive(num_enum::TryFromPrimitive, num_enum::IntoPrimitive)]
    pub enum GprO32 {
        zero,
        at,
        v0,
        v1,
        a0,
        a1,
        a2,
        a3,
        t0,
        t1,
        t2,
        t3,
        t4,
        t5,
        t6,
        t7,
        s0,
        s1,
        s2,
        s3,
        s4,
        s5,
        s6,
        s7,
        t8,
        t9,
        k0,
        k1,
        gp,
        sp,
        fp,
        ra,
    }
    #[repr(u32)]
    #[derive(Debug, Copy, Clone, Hash, PartialEq, Eq)]
    #[allow(non_camel_case_types)]
    #[derive(num_enum::TryFromPrimitive, num_enum::IntoPrimitive)]
    pub enum GprN32 {
        zero,
        at,
        v0,
        v1,
        a0,
        a1,
        a2,
        a3,
        a4,
        a5,
        a6,
        a7,
        t0,
        t1,
        t2,
        t3,
        s0,
        s1,
        s2,
        s3,
        s4,
        s5,
        s6,
        s7,
        t8,
        t9,
        k0,
        k1,
        gp,
        sp,
        fp,
        ra,
    }
    #[repr(u32)]
    #[derive(Debug, Copy, Clone, Hash, PartialEq, Eq)]
    #[allow(non_camel_case_types)]
    #[derive(num_enum::TryFromPrimitive, num_enum::IntoPrimitive)]
    pub enum Cop0 {
        Index,
        Random,
        EntryLo0,
        EntryLo1,
        Context,
        PageMask,
        Wired,
        Reserved07,
        BadVaddr,
        Count,
        EntryHi,
        Compare,
        Status,
        Cause,
        EPC,
        PRevID,
        Config,
        LLAddr,
        WatchLo,
        WatchHi,
        XContext,
        Reserved21,
        Reserved22,
        Reserved23,
        Reserved24,
        Reserved25,
        PErr,
        CacheErr,
        TagLo,
        TagHi,
        ErrorEPC,
        Reserved31,
    }
    #[repr(u32)]
    #[derive(Debug, Copy, Clone, Hash, PartialEq, Eq)]
    #[allow(non_camel_case_types)]
    #[derive(num_enum::TryFromPrimitive, num_enum::IntoPrimitive)]
    pub enum Cop1O32 {
        fv0,
        fv0f,
        fv1,
        fv1f,
        ft0,
        ft0f,
        ft1,
        ft1f,
        ft2,
        ft2f,
        ft3,
        ft3f,
        fa0,
        fa0f,
        fa1,
        fa1f,
        ft4,
        ft4f,
        ft5,
        ft5f,
        fs0,
        fs0f,
        fs1,
        fs1f,
        fs2,
        fs2f,
        fs3,
        fs3f,
        fs4,
        fs4f,
        fs5,
        fs5f,
    }
    #[repr(u32)]
    #[derive(Debug, Copy, Clone, Hash, PartialEq, Eq)]
    #[allow(non_camel_case_types)]
    #[derive(num_enum::TryFromPrimitive, num_enum::IntoPrimitive)]
    pub enum Cop1N32 {
        fv0,
        ft14,
        fv1,
        ft15,
        ft0,
        ft1,
        ft2,
        ft3,
        ft4,
        ft5,
        ft6,
        ft7,
        fa0,
        fa1,
        fa2,
        fa3,
        fa4,
        fa5,
        fa6,
        fa7,
        fs0,
        ft8,
        fs1,
        ft9,
        fs2,
        ft10,
        fs3,
        ft11,
        fs4,
        ft12,
        fs5,
        ft13,
    }
    #[repr(u32)]
    #[derive(Debug, Copy, Clone, Hash, PartialEq, Eq)]
    #[allow(non_camel_case_types)]
    #[derive(num_enum::TryFromPrimitive, num_enum::IntoPrimitive)]
    pub enum Cop1N64 {
        fv0,
        ft12,
        fv1,
        ft13,
        ft0,
        ft1,
        ft2,
        ft3,
        ft4,
        ft5,
        ft6,
        ft7,
        fa0,
        fa1,
        fa2,
        fa3,
        fa4,
        fa5,
        fa6,
        fa7,
        ft8,
        ft9,
        ft10,
        ft11,
        fs0,
        fs1,
        fs2,
        fs3,
        fs4,
        fs5,
        fs6,
        fs7,
    }
    #[repr(u32)]
    #[derive(Debug, Copy, Clone, Hash, PartialEq, Eq)]
    #[allow(non_camel_case_types)]
    #[derive(num_enum::TryFromPrimitive, num_enum::IntoPrimitive)]
    pub enum Cop1Control {
        COP1_CONTROL_0,
        COP1_CONTROL_1,
        COP1_CONTROL_2,
        COP1_CONTROL_3,
        COP1_CONTROL_4,
        COP1_CONTROL_5,
        COP1_CONTROL_6,
        COP1_CONTROL_7,
        COP1_CONTROL_8,
        COP1_CONTROL_9,
        COP1_CONTROL_10,
        COP1_CONTROL_11,
        COP1_CONTROL_12,
        COP1_CONTROL_13,
        COP1_CONTROL_14,
        COP1_CONTROL_15,
        COP1_CONTROL_16,
        COP1_CONTROL_17,
        COP1_CONTROL_18,
        COP1_CONTROL_19,
        COP1_CONTROL_20,
        COP1_CONTROL_21,
        COP1_CONTROL_22,
        COP1_CONTROL_23,
        COP1_CONTROL_24,
        COP1_CONTROL_25,
        COP1_CONTROL_26,
        COP1_CONTROL_27,
        COP1_CONTROL_28,
        COP1_CONTROL_29,
        COP1_CONTROL_30,
        COP1_CONTROL_FpcCsr,
    }
    #[repr(u32)]
    #[derive(Debug, Copy, Clone, Hash, PartialEq, Eq)]
    #[allow(non_camel_case_types)]
    #[derive(num_enum::TryFromPrimitive, num_enum::IntoPrimitive)]
    pub enum Cop2 {
        COP2_0,
        COP2_1,
        COP2_2,
        COP2_3,
        COP2_4,
        COP2_5,
        COP2_6,
        COP2_7,
        COP2_8,
        COP2_9,
        COP2_10,
        COP2_11,
        COP2_12,
        COP2_13,
        COP2_14,
        COP2_15,
        COP2_16,
        COP2_17,
        COP2_18,
        COP2_19,
        COP2_20,
        COP2_21,
        COP2_22,
        COP2_23,
        COP2_24,
        COP2_25,
        COP2_26,
        COP2_27,
        COP2_28,
        COP2_29,
        COP2_30,
        COP2_31,
    }
    #[repr(u32)]
    #[derive(Debug, Copy, Clone, Hash, PartialEq, Eq)]
    #[allow(non_camel_case_types)]
    #[derive(num_enum::TryFromPrimitive, num_enum::IntoPrimitive)]
    pub enum RspGpr {
        RSP_GPR_zero,
        RSP_GPR_1,
        RSP_GPR_2,
        RSP_GPR_3,
        RSP_GPR_4,
        RSP_GPR_5,
        RSP_GPR_6,
        RSP_GPR_7,
        RSP_GPR_8,
        RSP_GPR_9,
        RSP_GPR_10,
        RSP_GPR_11,
        RSP_GPR_12,
        RSP_GPR_13,
        RSP_GPR_14,
        RSP_GPR_15,
        RSP_GPR_16,
        RSP_GPR_17,
        RSP_GPR_18,
        RSP_GPR_19,
        RSP_GPR_20,
        RSP_GPR_21,
        RSP_GPR_22,
        RSP_GPR_23,
        RSP_GPR_24,
        RSP_GPR_25,
        RSP_GPR_26,
        RSP_GPR_27,
        RSP_GPR_28,
        RSP_GPR_29,
        RSP_GPR_30,
        RSP_GPR_ra,
    }
    #[repr(u32)]
    #[derive(Debug, Copy, Clone, Hash, PartialEq, Eq)]
    #[allow(non_camel_case_types)]
    #[derive(num_enum::TryFromPrimitive, num_enum::IntoPrimitive)]
    pub enum RspCop0 {
        SP_MEM_ADDR,
        SP_DRAM_ADDR,
        SP_RD_LEN,
        SP_WR_LEN,
        SP_STATUS,
        SP_DMA_FULL,
        SP_DMA_BUSY,
        SP_SEMAPHORE,
        DPC_START,
        DPC_END,
        DPC_CURRENT,
        DPC_STATUS,
        DPC_CLOCK,
        DPC_BUFBUSY,
        DPC_PIPEBUSY,
        DPC_TMEM,
    }
    #[repr(u32)]
    #[derive(Debug, Copy, Clone, Hash, PartialEq, Eq)]
    #[allow(non_camel_case_types)]
    #[derive(num_enum::TryFromPrimitive, num_enum::IntoPrimitive)]
    pub enum RspCop2 {
        RSP_COP2_0,
        RSP_COP2_1,
        RSP_COP2_2,
        RSP_COP2_3,
        RSP_COP2_4,
        RSP_COP2_5,
        RSP_COP2_6,
        RSP_COP2_7,
        RSP_COP2_8,
        RSP_COP2_9,
        RSP_COP2_10,
        RSP_COP2_11,
        RSP_COP2_12,
        RSP_COP2_13,
        RSP_COP2_14,
        RSP_COP2_15,
        RSP_COP2_16,
        RSP_COP2_17,
        RSP_COP2_18,
        RSP_COP2_19,
        RSP_COP2_20,
        RSP_COP2_21,
        RSP_COP2_22,
        RSP_COP2_23,
        RSP_COP2_24,
        RSP_COP2_25,
        RSP_COP2_26,
        RSP_COP2_27,
        RSP_COP2_28,
        RSP_COP2_29,
        RSP_COP2_30,
        RSP_COP2_31,
    }
    #[repr(u32)]
    #[derive(Debug, Copy, Clone, Hash, PartialEq, Eq)]
    #[allow(non_camel_case_types)]
    #[derive(num_enum::TryFromPrimitive, num_enum::IntoPrimitive)]
    pub enum RspCop2Control {
        RSP_COP2_CONTROL_0,
        RSP_COP2_CONTROL_1,
        RSP_COP2_CONTROL_2,
        RSP_COP2_CONTROL_3,
        RSP_COP2_CONTROL_4,
        RSP_COP2_CONTROL_5,
        RSP_COP2_CONTROL_6,
        RSP_COP2_CONTROL_7,
        RSP_COP2_CONTROL_8,
        RSP_COP2_CONTROL_9,
        RSP_COP2_CONTROL_10,
        RSP_COP2_CONTROL_11,
        RSP_COP2_CONTROL_12,
        RSP_COP2_CONTROL_13,
        RSP_COP2_CONTROL_14,
        RSP_COP2_CONTROL_15,
        RSP_COP2_CONTROL_16,
        RSP_COP2_CONTROL_17,
        RSP_COP2_CONTROL_18,
        RSP_COP2_CONTROL_19,
        RSP_COP2_CONTROL_20,
        RSP_COP2_CONTROL_21,
        RSP_COP2_CONTROL_22,
        RSP_COP2_CONTROL_23,
        RSP_COP2_CONTROL_24,
        RSP_COP2_CONTROL_25,
        RSP_COP2_CONTROL_26,
        RSP_COP2_CONTROL_27,
        RSP_COP2_CONTROL_28,
        RSP_COP2_CONTROL_29,
        RSP_COP2_CONTROL_30,
        RSP_COP2_CONTROL_31,
    }
    #[repr(u32)]
    #[derive(Debug, Copy, Clone, Hash, PartialEq, Eq)]
    #[allow(non_camel_case_types)]
    #[derive(num_enum::TryFromPrimitive, num_enum::IntoPrimitive)]
    pub enum RspVector {
        v0,
        v1,
        v2,
        v3,
        v4,
        v5,
        v6,
        v7,
        v8,
        v9,
        v10,
        v11,
        v12,
        v13,
        v14,
        v15,
        v16,
        v17,
        v18,
        v19,
        v20,
        v21,
        v22,
        v23,
        v24,
        v25,
        v26,
        v27,
        v28,
        v29,
        v30,
        v31,
    }
    #[repr(u32)]
    #[derive(Debug, Copy, Clone, Hash, PartialEq, Eq)]
    #[allow(non_camel_case_types)]
    #[derive(num_enum::TryFromPrimitive, num_enum::IntoPrimitive)]
    pub enum R5900VF {
        vf0,
        vf1,
        vf2,
        vf3,
        vf4,
        vf5,
        vf6,
        vf7,
        vf8,
        vf9,
        vf10,
        vf11,
        vf12,
        vf13,
        vf14,
        vf15,
        vf16,
        vf17,
        vf18,
        vf19,
        vf20,
        vf21,
        vf22,
        vf23,
        vf24,
        vf25,
        vf26,
        vf27,
        vf28,
        vf29,
        vf30,
        vf31,
    }
    #[repr(u32)]
    #[derive(Debug, Copy, Clone, Hash, PartialEq, Eq)]
    #[allow(non_camel_case_types)]
    #[derive(num_enum::TryFromPrimitive, num_enum::IntoPrimitive)]
    pub enum R5900VI {
        vi0,
        vi1,
        vi2,
        vi3,
        vi4,
        vi5,
        vi6,
        vi7,
        vi8,
        vi9,
        vi10,
        vi11,
        vi12,
        vi13,
        vi14,
        vi15,
        vi16,
        vi17,
        vi18,
        vi19,
        vi20,
        vi21,
        vi22,
        vi23,
        vi24,
        vi25,
        vi26,
        vi27,
        vi28,
        vi29,
        vi30,
        vi31,
    }
}
