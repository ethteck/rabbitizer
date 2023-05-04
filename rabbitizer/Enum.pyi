#!/usr/bin/env python3

# SPDX-FileCopyrightText: © 2022-2023 Decompollaborate
# SPDX-License-Identifier: MIT

from __future__ import annotations


class Enum:
    name: str
    value: int

    def __init__(self, enumType: str, name: str, value: int) -> None: ...

    def __reduce__(self) -> tuple: ...

    def __lt__(self, __o: object) -> bool: ...
    def __le__(self, __o: object) -> bool: ...
    def __eq__(self, __o: object) -> bool: ...
    def __gt__(self, __o: object) -> bool: ...
    def __ge__(self, __o: object) -> bool: ...

    def __repr__(self) -> str: ...
    def __str__(self) -> str: ...
