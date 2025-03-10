#!/usr/bin/env python3

# SPDX-FileCopyrightText: © 2022-2023 Decompollaborate
# SPDX-License-Identifier: MIT

from __future__ import annotations

from .Enum import Enum
from .InstrCategory import InstrCategory


class Instruction:
    rs: Enum
    """The value of the `rs` register for this instruction.
    The type of this attribute will be either a `RegGprO32` or a `RegGprN32` depending on the current `config.regNames_gprAbiNames` value.
    If the current instruction does not use the `rs` register, then a Runtime exception will be raised.
    Read-only."""
    rt: Enum
    """The value of the `rt` register for this instruction.
    The type of this attribute will be either a `RegGprO32` or a `RegGprN32` depending on the current `config.regNames_gprAbiNames` value.
    If the current instruction does not use the `rt` register, then a Runtime exception will be raised.
    Read-only."""
    rd: Enum
    """The value of the `rd` register for this instruction.
    The type of this attribute will be either a `RegGprO32` or a `RegGprN32` depending on the current `config.regNames_gprAbiNames` value.
    If the current instruction does not use the `rd` register, then a Runtime exception will be raised.
    Read-only."""
    sa: int
    """The value of the `sa` field for this instruction.
    If the current instruction does not have a `sa` field, then a Runtime exception will be raised.
    Read-only."""
    fs: Enum
    """The value of the `fs` register for this instruction.
    The type of this attribute will be either a `RegGprO32`, `RegGprN32` or a `RegGprN64` depending on the current `config.regNames_gprAbiNames` value.
    If the current instruction does not use the `fs` register, then a Runtime exception will be raised.
    Read-only."""
    ft: Enum
    """The value of the `ft` register for this instruction.
    The type of this attribute will be either a `RegGprO32`, `RegGprN32` or a `RegGprN64` depending on the current `config.regNames_gprAbiNames` value.
    If the current instruction does not use the `ft` register, then a Runtime exception will be raised.
    Read-only."""
    fd: Enum
    """The value of the `fd` register for this instruction.
    The type of this attribute will be either a `RegGprO32`, `RegGprN32` or a `RegGprN64` depending on the current `config.regNames_gprAbiNames` value.
    If the current instruction does not use the `fd` register, then a Runtime exception will be raised.
    Read-only."""

    uniqueId: Enum
    """An unique identificator for the opcode of this instruction.
    The type is an `InstrId` enum.
    Read-only."""

    instrIdType: Enum
    """An identificator for the general type for the opcode of this instruction.
    The type is an `InstrIdType` enum.
    Read-only."""

    vram: int = 0
    """The vram (virtual ram) address for this instruction"""
    inHandwrittenFunction: bool = False
    """Boolean value indicating if the current instruction is used on a handwritten function. This is intended to be determined by the user."""


    def __init__(self, word: int, vram: int=0, category: Enum=InstrCategory.CPU) -> None: ...

    def getRaw(self) -> int: ...
    def getImmediate(self) -> int: ... #! deprecated
    def getProcessedImmediate(self) -> int: ...
    def getInstrIndexAsVram(self) -> int: ...
    def getBranchOffset(self) -> int: ...
    def getGenericBranchOffset(self, currentVram: int) -> int: ... #! deprecated
    def getBranchOffsetGeneric(self) -> int: ...
    def getBranchVramGeneric(self) -> int: ...
    def getDestinationGpr(self) -> Enum|None: ...
    def outputsToGprZero(self) -> bool: ...
    def getOpcodeName(self) -> str: ...

    def blankOut(self) -> None: ...

    def isImplemented(self) -> bool: ...
    def isLikelyHandwritten(self) -> bool: ...
    def isNop(self) -> bool: ...
    def isUnconditionalBranch(self) -> bool: ...

    def isReturn(self) -> bool: ...
    def isJumptableJump(self) -> bool: ...

    def isJrRa(self) -> bool: ... #! deprecated
    def isJrNotRa(self) -> bool: ... #! deprecated

    def hasDelaySlot(self) -> bool: ...
    def mapInstrToType(self) -> str|None: ... #! deprecated

    def sameOpcode(self, other: Instruction) -> bool: ...
    def sameOpcodeButDifferentArguments(self, other: Instruction) -> bool: ...

    def hasOperand(self, operand: Enum) -> bool: ...
    def hasOperandAlias(self, operand: Enum) -> bool: ...

    def isValid(self) -> bool: ...

    #! deprecated
    def isUnknownType(self) -> bool: ...
    #! deprecated
    def isJType(self) -> bool: ...
    #! deprecated
    def isIType(self) -> bool: ...
    #! deprecated
    def isRType(self) -> bool: ...
    #! deprecated
    def isRegimmType(self) -> bool: ...

    def isBranch(self) -> bool: ...
    def isBranchLikely(self) -> bool: ...
    def isJump(self) -> bool: ...
    def isJumpWithAddress(self) -> bool: ...
    def isTrap(self) -> bool: ...
    def isFloat(self) -> bool: ...
    def isDouble(self) -> bool: ...
    def isUnsigned(self) -> bool: ...
    def modifiesRs(self) -> bool: ...
    def modifiesRt(self) -> bool: ...
    def modifiesRd(self) -> bool: ...
    def readsRs(self) -> bool: ...
    def readsRt(self) -> bool: ...
    def readsRd(self) -> bool: ...
    def readsHI(self) -> bool: ...
    def readsLO(self) -> bool: ...
    def modifiesHI(self) -> bool: ...
    def modifiesLO(self) -> bool: ...
    def modifiesFs(self) -> bool: ...
    def modifiesFt(self) -> bool: ...
    def modifiesFd(self) -> bool: ...
    def readsFs(self) -> bool: ...
    def readsFt(self) -> bool: ...
    def readsFd(self) -> bool: ...
    def notEmitedByCompilers(self) -> bool: ... #! deprecated
    def notEmittedByCompilers(self) -> bool: ...
    def canBeHi(self) -> bool: ...
    def canBeLo(self) -> bool: ...
    def doesLink(self) -> bool: ...
    def doesDereference(self) -> bool: ...
    def doesLoad(self) -> bool: ...
    def doesStore(self) -> bool: ...
    def maybeIsMove(self) -> bool: ...
    def isPseudo(self) -> bool: ...
    def getAccessType(self) -> Enum: ...
    def doesUnsignedMemoryAccess(self) -> bool: ...

    def disassemble(self, immOverride: str|None=None, extraLJust: int=0) -> str: ...

    def __reduce__(self) -> tuple: ...

    def __repr__(self) -> str: ...
    def __str__(self) -> str: ...
