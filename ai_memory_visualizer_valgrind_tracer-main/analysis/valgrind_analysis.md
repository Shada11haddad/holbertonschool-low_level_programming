# Valgrind & AI Memory Tracer Analysis

## Overview
This document interprets Valgrind diagnostic outputs generated from the test programs by connecting them directly to the concrete memory behaviors and lifetime violations that caused them. It categorizes runtime memory errors—such as leaks, dangling pointers, and null pointer dereferences—and explains the underlying memory misuses.

---

## Issue 1: Memory Leak due to Lost Ownership (`heap_example`)

### Valgrind Output Snippet
```text
==3438== 6 bytes in 1 blocks are definitely lost in loss record 1 of 1
==3438==    at 0x4850858: malloc (vg_replace_malloc.c:447)
==3438==    by 0x4001211: person_new (heap_example.c:21)
==3438==    by 0x40012FA: main (heap_example.c:51)
