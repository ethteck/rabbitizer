/* SPDX-FileCopyrightText: © 2022 Decompollaborate */
/* SPDX-License-Identifier: MIT */

#include "instructions/RabbitizerInstr.h"

#include <assert.h>
#include <string.h>
#include <stdio.h>

#include "common/Utils.h"
#include "common/RabbitizerConfig.h"
#include "instructions/RabbitizerRegister.h"


typedef size_t (*OperandCallback)(const RabbitizerInstr *self, char *dst, const char *immOverride, size_t immOverrideLength);


size_t RabbitizerRegisterType_processRs(const RabbitizerInstr *self, char *dst, const char *immOverride, size_t immOverrideLength) {
    const char *reg;
    size_t regLen;

    (void)immOverride;
    (void)immOverrideLength;

    reg = RabbitizerRegister_getNameGpr(self->rs);
    regLen = strlen(reg);

    memcpy(dst, reg, regLen);
    return regLen;
}

size_t RabbitizerRegisterType_processRt(const RabbitizerInstr *self, char *dst, const char *immOverride, size_t immOverrideLength) {
    const char *reg;
    size_t regLen;

    (void)immOverride;
    (void)immOverrideLength;

    reg = RabbitizerRegister_getNameGpr(self->rt);
    regLen = strlen(reg);

    memcpy(dst, reg, regLen);
    return regLen;
}

size_t RabbitizerRegisterType_processRd(const RabbitizerInstr *self, char *dst, const char *immOverride, size_t immOverrideLength) {
    const char *reg;
    size_t regLen;

    (void)immOverride;
    (void)immOverrideLength;

    reg = RabbitizerRegister_getNameGpr(self->rd);
    regLen = strlen(reg);

    memcpy(dst, reg, regLen);
    return regLen;
}

size_t RabbitizerRegisterType_processCop0d(const RabbitizerInstr *self, char *dst, const char *immOverride, size_t immOverrideLength) {
    const char *reg;
    size_t regLen;

    (void)immOverride;
    (void)immOverrideLength;

    reg = RabbitizerRegister_getNameCop0(self->rd);
    regLen = strlen(reg);

    memcpy(dst, reg, regLen);
    return regLen;
}

size_t RabbitizerRegisterType_processFs(const RabbitizerInstr *self, char *dst, const char *immOverride, size_t immOverrideLength) {
    const char *reg;
    size_t regLen;

    (void)immOverride;
    (void)immOverrideLength;

    reg = RabbitizerRegister_getNameCop1(RabbitizerInstr_getFs(self));
    regLen = strlen(reg);

    memcpy(dst, reg, regLen);
    return regLen;
}

size_t RabbitizerRegisterType_processFt(const RabbitizerInstr *self, char *dst, const char *immOverride, size_t immOverrideLength) {
    const char *reg;
    size_t regLen;

    (void)immOverride;
    (void)immOverrideLength;

    reg = RabbitizerRegister_getNameCop1(RabbitizerInstr_getFt(self));
    regLen = strlen(reg);

    memcpy(dst, reg, regLen);
    return regLen;
}

size_t RabbitizerRegisterType_processFd(const RabbitizerInstr *self, char *dst, const char *immOverride, size_t immOverrideLength) {
    const char *reg;
    size_t regLen;

    (void)immOverride;
    (void)immOverrideLength;

    reg = RabbitizerRegister_getNameCop1(RabbitizerInstr_getFd(self));
    regLen = strlen(reg);

    memcpy(dst, reg, regLen);
    return regLen;
}

size_t RabbitizerRegisterType_processCop1Cs(const RabbitizerInstr *self, char *dst, const char *immOverride, size_t immOverrideLength) {
    const char *reg;
    size_t regLen;

    (void)immOverride;
    (void)immOverrideLength;

    reg = RabbitizerRegister_getNameCop1Control(RabbitizerInstr_getFs(self));
    regLen = strlen(reg);

    memcpy(dst, reg, regLen);
    return regLen;
}

size_t RabbitizerRegisterType_processCop2t(const RabbitizerInstr *self, char *dst, const char *immOverride, size_t immOverrideLength) {
    const char *reg;
    size_t regLen;

    (void)immOverride;
    (void)immOverrideLength;

    reg = RabbitizerRegister_getNameCop2(self->rt);
    regLen = strlen(reg);

    memcpy(dst, reg, regLen);
    return regLen;
}

size_t RabbitizerRegisterType_processSa(const RabbitizerInstr *self, char *dst, const char *immOverride, size_t immOverrideLength) {
    int len;

    (void)immOverride;
    (void)immOverrideLength;

    len = sprintf(dst, "%i", self->sa);
    assert(len > 0);
    return len;
}

size_t RabbitizerRegisterType_processOp(const RabbitizerInstr *self, char *dst, const char *immOverride, size_t immOverrideLength) {
    int len;

    (void)immOverride;
    (void)immOverrideLength;

    len = sprintf(dst, "0x%02X", self->rt);
    assert(len > 0);
    return len;
}

size_t RabbitizerRegisterType_processCode(const RabbitizerInstr *self, char *dst, const char *immOverride, size_t immOverrideLength) {
    size_t totalSize = 0;
    int len;
    int code = (self->rs << 5) | (self->rt);
    int lower = (self->rd << 5) | (self->sa);

    (void)immOverride;
    (void)immOverrideLength;

    len = sprintf(dst, "%i", code);
    assert(len > 0);
    dst += len;
    totalSize += len;

    if (lower) {
        len = sprintf(dst, ", %i", lower);
        assert(len > 0);
        dst += len;
        totalSize += len;
    }

    return totalSize;
}

size_t RabbitizerRegisterType_processLabel(const RabbitizerInstr *self, char *dst, const char *immOverride, size_t immOverrideLength) {
    size_t totalSize = 0;
    size_t tempSize;
    int len;

    if (immOverride != NULL) {
        memcpy(dst, immOverride, immOverrideLength);
        return immOverrideLength;
    }

    tempSize = strlen("func_");
    memcpy(dst, "func_", tempSize);
    dst += tempSize;
    totalSize += tempSize;

    len = sprintf(dst, "%06X", RabbitizerInstr_getInstrIndexAsVram(self));
    assert(len > 0);
    dst += len;
    totalSize += len;

    return totalSize;
}

size_t RabbitizerRegisterType_processImmediate(const RabbitizerInstr *self, char *dst, const char *immOverride, size_t immOverrideLength) {
    int len;
    uint32_t imm;

    if (immOverride != NULL) {
        memcpy(dst, immOverride, immOverrideLength);
        return immOverrideLength;
    }

    imm = RabbitizerInstr_getImmediate(self);

    if (!self->descriptor->isUnsigned) {
        int32_t number = RabbitizerUtils_From2Complement(imm, 16);
        if (number < 0) {
            len = sprintf(dst, "-0x%X", -number);
            assert(len > 0);
            return len;
        }
    }

    len = sprintf(dst, "0x%X", imm);
    assert(len > 0);
    return len;
}

size_t RabbitizerRegisterType_processImmediateBase(const RabbitizerInstr *self, char *dst, const char *immOverride, size_t immOverrideLength) {
    size_t totalSize = 0;
    size_t tempSize;

    tempSize = RabbitizerRegisterType_processImmediate(self, dst, immOverride, immOverrideLength);
    dst += tempSize;
    totalSize += tempSize;

    *dst = '(';
    dst++;
    totalSize++;

    tempSize = RabbitizerRegisterType_processRs(self, dst, immOverride, immOverrideLength);
    dst += tempSize;
    totalSize += tempSize;

    *dst = ')';
    dst++;
    totalSize++;

    return totalSize;
}

const OperandCallback instrOpercandCallbacks[] = {
    [RABBITIZER_REGISTER_TYPE_rs]       = RabbitizerRegisterType_processRs,
    [RABBITIZER_REGISTER_TYPE_rt]       = RabbitizerRegisterType_processRt,
    [RABBITIZER_REGISTER_TYPE_rd]       = RabbitizerRegisterType_processRd,
    [RABBITIZER_REGISTER_TYPE_cop0d]    = RabbitizerRegisterType_processCop0d,
    [RABBITIZER_REGISTER_TYPE_fs]       = RabbitizerRegisterType_processFs,
    [RABBITIZER_REGISTER_TYPE_ft]       = RabbitizerRegisterType_processFt,
    [RABBITIZER_REGISTER_TYPE_fd]       = RabbitizerRegisterType_processFd,
    [RABBITIZER_REGISTER_TYPE_cop1cs]   = RabbitizerRegisterType_processCop1Cs,
    [RABBITIZER_REGISTER_TYPE_cop2t]    = RabbitizerRegisterType_processCop2t,
    [RABBITIZER_REGISTER_TYPE_sa]       = RabbitizerRegisterType_processSa,
    [RABBITIZER_REGISTER_TYPE_op]       = RabbitizerRegisterType_processOp,
    [RABBITIZER_REGISTER_TYPE_code]     = RabbitizerRegisterType_processCode,
    [RABBITIZER_REGISTER_TYPE_LABEL]    = RabbitizerRegisterType_processLabel,
    [RABBITIZER_REGISTER_TYPE_IMM]      = RabbitizerRegisterType_processImmediate,
    [RABBITIZER_REGISTER_TYPE_IMM_base] = RabbitizerRegisterType_processImmediateBase,
};


size_t RabbitizerInstr_getSizeForBufferInstrDisasm(const RabbitizerInstr *self, size_t immOverrideLength, int extraLJust) {
    size_t totalSize = 0;
    size_t opcodeNameLength;

    opcodeNameLength = strlen(RabbitizerInstrId_getOpcodeName(self->uniqueId));

    totalSize += opcodeNameLength;

    if (self->descriptor->operands[0] == RABBITIZER_REGISTER_TYPE_INVALID) {
        // There are no operands
        return totalSize;
    }

    totalSize += extraLJust;
    totalSize++;

    for (size_t i = 0; i < ARRAY_COUNT(self->descriptor->operands) && self->descriptor->operands[i] != RABBITIZER_REGISTER_TYPE_INVALID; i++) {
        if (i != 0) {
            totalSize += 2;
        }

        // A bit arbitrary, but no operand should be longer than 25 characters
        totalSize += 25;
        totalSize += immOverrideLength;
    }

    return totalSize;
}


size_t RabbitizerInstr_disassembleInstruction(const RabbitizerInstr *self, char *dst, const char *immOverride, size_t immOverrideLength, int extraLJust) {
    size_t totalSize = 0;
    const char *opcodeName;
    size_t opcodeNameLength;
    size_t len;

    opcodeName = RabbitizerInstrId_getOpcodeName(self->uniqueId);
    opcodeNameLength = strlen(opcodeName);

    memcpy(dst, opcodeName, opcodeNameLength);
    dst += opcodeNameLength;
    totalSize += opcodeNameLength;

    if (self->descriptor->operands[0] == RABBITIZER_REGISTER_TYPE_INVALID) {
        // There are no operands
        *dst = '\0';
        return totalSize;
    }

    len = RabbitizerUtils_CharFill(dst, RabbitizerConfig_Cfg.misc.opcodeLJust + extraLJust - totalSize, ' ');
    dst += len;
    totalSize += len;

    *dst = ' ';
    dst++;
    totalSize++;

    for (size_t i = 0; i < ARRAY_COUNT(self->descriptor->operands) && self->descriptor->operands[i] != RABBITIZER_REGISTER_TYPE_INVALID; i++) {
        RabbitizerRegisterType operand;
        OperandCallback callback;
        size_t writtenBytes;

        if (i != 0) {
            *dst = ',';
            dst++;
            totalSize++;
            *dst = ' ';
            dst++;
            totalSize++;
        }

        operand = self->descriptor->operands[i];
        assert(operand > RABBITIZER_REGISTER_TYPE_INVALID);
        assert(operand < RABBITIZER_REGISTER_TYPE_MAX);

        callback = instrOpercandCallbacks[operand];
        assert(callback != NULL);

        writtenBytes = callback(self, dst, immOverride, immOverrideLength);
        dst += writtenBytes;
        totalSize += writtenBytes;
    }

    *dst = '\0';
    return totalSize;
}


size_t RabbitizerInstr_getSizeForBufferDataDisasm(const RabbitizerInstr *self, int extraLJust) {
    size_t totalSize = 0;

    (void)self;

    totalSize += strlen(".word");
    totalSize += RabbitizerConfig_Cfg.misc.opcodeLJust + extraLJust;
    totalSize += 11;

    return totalSize;
}


size_t RabbitizerInstr_disassembleAsData(const RabbitizerInstr *self, char *dst, int extraLJust) {
    size_t totalSize = 0;
    size_t tempSize;
    size_t len;

    tempSize = strlen(".word");
    memcpy(dst, ".word", tempSize);
    dst += tempSize;
    totalSize += tempSize;

    len = RabbitizerUtils_CharFill(dst, RabbitizerConfig_Cfg.misc.opcodeLJust + extraLJust - totalSize, ' ');
    dst += len;
    totalSize += len;

    len = sprintf(dst, " 0x%08X", RabbitizerInstr_getRaw(self));
    assert(len > 0);
    dst += len;
    totalSize += len;

    return totalSize;
}


bool RabbitizerInstr_mustDisasmAsData(const RabbitizerInstr *self) {
    if (RabbitizerConfig_Cfg.toolchainTweaks.sn64DivFix) {
        if (self->uniqueId == RABBITIZER_INSTR_ID_cpu_break) {
            return true;
        }
    }

    if (self->descriptor->instrType == RABBITIZER_INSTR_TYPE_R) {
        bool hasCode = false;
        bool hasRs = false;
        bool hasRt = false;
        bool hasRd = false;
        bool hasSa = false;

        for (size_t i = 0; i < ARRAY_COUNT(self->descriptor->operands) && self->descriptor->operands[i] != RABBITIZER_REGISTER_TYPE_INVALID; i++) {
            RabbitizerRegisterType operand = self->descriptor->operands[i];

            if (operand == RABBITIZER_REGISTER_TYPE_code) {
                hasCode = true;
            }
            if (operand == RABBITIZER_REGISTER_TYPE_rs) {
                hasRs = true;
            }
            if (operand == RABBITIZER_REGISTER_TYPE_rt) {
                hasRt = true;
            }
            if (operand == RABBITIZER_REGISTER_TYPE_rd) {
                hasRd = true;
            }
            if (operand == RABBITIZER_REGISTER_TYPE_sa) {
                hasSa = true;
            }
        }

        if (!hasCode) {
            if (!hasRs) {
                if (self->rs != 0) {
                    return true;
                }
            }
            if (!hasRt) {
                if (self->rt != 0) {
                    return true;
                }
            }
            if (!hasRd) {
                if (self->rd != 0 && self->uniqueId != RABBITIZER_INSTR_ID_cpu_jalr) {
                    return true;
                }
            }
            if (!hasSa) {
                if (self->sa != 0) {
                    return true;
                }
            }
        }
    }
    return false;
}



size_t RabbitizerInstr_getSizeForBuffer(const RabbitizerInstr *self, size_t immOverrideLength, int extraLJust) {
    if (!RabbitizerInstr_isImplemented(self) || RabbitizerInstr_mustDisasmAsData(self)) {
        size_t totalSize = 0;

        totalSize += RabbitizerInstr_getSizeForBufferDataDisasm(self, extraLJust);

        if (RabbitizerConfig_Cfg.misc.unknownInstrComment) {
            totalSize += 40;
            totalSize += 3;
            totalSize += RabbitizerInstr_getSizeForBufferInstrDisasm(self, immOverrideLength, extraLJust);
        }

        return totalSize;
    }

    return RabbitizerInstr_getSizeForBufferInstrDisasm(self,immOverrideLength, extraLJust);
}


size_t RabbitizerInstr_disassemble(const RabbitizerInstr *self, char *dst, const char *immOverride, size_t immOverrideLength, int extraLJust) {
    assert(dst != NULL);

    if (!RabbitizerInstr_isImplemented(self) || RabbitizerInstr_mustDisasmAsData(self)) {
        size_t totalSize = 0;
        size_t tempSize;

        tempSize = RabbitizerInstr_disassembleAsData(self, dst, extraLJust);
        dst += tempSize;
        totalSize += tempSize;

        if (RabbitizerConfig_Cfg.misc.unknownInstrComment) {
            tempSize = RabbitizerUtils_CharFill(dst, 40-totalSize, ' ');
            dst += tempSize;
            totalSize += tempSize;

            *dst = ' ';
            dst++;
            totalSize++;
            *dst = '#';
            dst++;
            totalSize++;
            *dst = ' ';
            dst++;
            totalSize++;

            tempSize = RabbitizerInstr_disassembleInstruction(self, dst, immOverride, immOverrideLength, extraLJust);
            dst += tempSize;
            totalSize += tempSize;
        }

        return totalSize;
    }

    return RabbitizerInstr_disassembleInstruction(self, dst, immOverride, immOverrideLength, extraLJust);
}