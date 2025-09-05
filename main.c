/* large_test.c - file generato automaticamente per test SonarCloud */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* NOTE: file creato per test static analysis. Contiene duplicazioni,
 funzioni inutilizzate, magic numbers, potenziali leak usati SOLO per test. */

/* ===== COMMENT BLOCK 1 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 1.0 - Sonar test */
/* ripetizione 1.1 - Sonar test */
/* ripetizione 1.2 - Sonar test */

int test_func_1(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

void dup_block_1_0(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 2;
 int y = 3;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_1_1(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 3;
 int y = 4;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_1_2(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 4;
 int y = 5;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

int switchy(int v) {
 switch(v) {
 case 0: return 0;
 case 1: return 7;
 case 2: return 14;
 case 3: return 21;
 case 4: return 28;
 case 5: return 35;
 case 6: return 42;
 case 7: return 49;
 case 8: return 56;
 case 9: return 63;
 case 10: return 70;
 case 11: return 77;
 case 12: return 84;
 case 13: return 91;
 case 14: return 98;
 case 15: return 105;
 case 16: return 112;
 case 17: return 119;
 case 18: return 126;
 case 19: return 133;
 default: return -1;
 }
}

/* ===== COMMENT BLOCK 2 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 2.0 - Sonar test */
/* ripetizione 2.1 - Sonar test */
/* ripetizione 2.2 - Sonar test */

int test_func_2(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 3 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 3.0 - Sonar test */
/* ripetizione 3.1 - Sonar test */
/* ripetizione 3.2 - Sonar test */

int test_func_3(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 4 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 4.0 - Sonar test */
/* ripetizione 4.1 - Sonar test */
/* ripetizione 4.2 - Sonar test */

int test_func_4(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 5 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 5.0 - Sonar test */
/* ripetizione 5.1 - Sonar test */
/* ripetizione 5.2 - Sonar test */

int test_func_5(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 6 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 6.0 - Sonar test */
/* ripetizione 6.1 - Sonar test */
/* ripetizione 6.2 - Sonar test */

int test_func_6(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

void dup_block_2_0(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 3;
 int y = 4;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_2_1(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 4;
 int y = 5;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_2_2(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 5;
 int y = 6;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

/* ===== COMMENT BLOCK 7 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 7.0 - Sonar test */
/* ripetizione 7.1 - Sonar test */
/* ripetizione 7.2 - Sonar test */

int test_func_7(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 8 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 8.0 - Sonar test */
/* ripetizione 8.1 - Sonar test */
/* ripetizione 8.2 - Sonar test */

int test_func_8(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 9 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 9.0 - Sonar test */
/* ripetizione 9.1 - Sonar test */
/* ripetizione 9.2 - Sonar test */

int test_func_9(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 10 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 10.0 - Sonar test */
/* ripetizione 10.1 - Sonar test */
/* ripetizione 10.2 - Sonar test */

int test_func_10(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 11 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 11.0 - Sonar test */
/* ripetizione 11.1 - Sonar test */
/* ripetizione 11.2 - Sonar test */

int test_func_11(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

void dup_block_3_0(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 4;
 int y = 5;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_3_1(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 5;
 int y = 6;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_3_2(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 6;
 int y = 7;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

/* ===== COMMENT BLOCK 12 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 12.0 - Sonar test */
/* ripetizione 12.1 - Sonar test */
/* ripetizione 12.2 - Sonar test */

int test_func_12(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

int switchy2(int v) {
 switch(v) {
 case 0: return 0;
 case 1: return 7;
 case 2: return 14;
 case 3: return 21;
 case 4: return 28;
 case 5: return 35;
 case 6: return 42;
 case 7: return 49;
 case 8: return 56;
 case 9: return 63;
 case 10: return 70;
 case 11: return 77;
 case 12: return 84;
 case 13: return 91;
 case 14: return 98;
 case 15: return 105;
 case 16: return 112;
 case 17: return 119;
 case 18: return 126;
 case 19: return 133;
 default: return -1;
 }
}

/* ===== COMMENT BLOCK 13 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 13.0 - Sonar test */
/* ripetizione 13.1 - Sonar test */
/* ripetizione 13.2 - Sonar test */

int test_func_13(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 14 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 14.0 - Sonar test */
/* ripetizione 14.1 - Sonar test */
/* ripetizione 14.2 - Sonar test */

int test_func_14(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 15 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 15.0 - Sonar test */
/* ripetizione 15.1 - Sonar test */
/* ripetizione 15.2 - Sonar test */

int test_func_15(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 16 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 16.0 - Sonar test */
/* ripetizione 16.1 - Sonar test */
/* ripetizione 16.2 - Sonar test */

int test_func_16(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

void dup_block_4_0(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 5;
 int y = 6;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_4_1(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 6;
 int y = 7;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_4_2(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 7;
 int y = 8;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

/* ===== COMMENT BLOCK 17 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 17.0 - Sonar test */
/* ripetizione 17.1 - Sonar test */
/* ripetizione 17.2 - Sonar test */

int test_func_17(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 18 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 18.0 - Sonar test */
/* ripetizione 18.1 - Sonar test */
/* ripetizione 18.2 - Sonar test */

int test_func_18(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 19 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 19.0 - Sonar test */
/* ripetizione 19.1 - Sonar test */
/* ripetizione 19.2 - Sonar test */

int test_func_19(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 20 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 20.0 - Sonar test */
/* ripetizione 20.1 - Sonar test */
/* ripetizione 20.2 - Sonar test */

int test_func_20(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 21 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 21.0 - Sonar test */
/* ripetizione 21.1 - Sonar test */
/* ripetizione 21.2 - Sonar test */

int test_func_21(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

void dup_block_5_0(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 6;
 int y = 7;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_5_1(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 7;
 int y = 8;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_5_2(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 8;
 int y = 9;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

/* ===== COMMENT BLOCK 22 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 22.0 - Sonar test */
/* ripetizione 22.1 - Sonar test */
/* ripetizione 22.2 - Sonar test */

int test_func_22(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 23 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 23.0 - Sonar test */
/* ripetizione 23.1 - Sonar test */
/* ripetizione 23.2 - Sonar test */

int test_func_23(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

int switchy3(int v) {
 switch(v) {
 case 0: return 0;
 case 1: return 7;
 case 2: return 14;
 case 3: return 21;
 case 4: return 28;
 case 5: return 35;
 case 6: return 42;
 case 7: return 49;
 case 8: return 56;
 case 9: return 63;
 case 10: return 70;
 case 11: return 77;
 case 12: return 84;
 case 13: return 91;
 case 14: return 98;
 case 15: return 105;
 case 16: return 112;
 case 17: return 119;
 case 18: return 126;
 case 19: return 133;
 default: return -1;
 }
}

/* ===== COMMENT BLOCK 24 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 24.0 - Sonar test */
/* ripetizione 24.1 - Sonar test */
/* ripetizione 24.2 - Sonar test */

int test_func_24(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 25 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 25.0 - Sonar test */
/* ripetizione 25.1 - Sonar test */
/* ripetizione 25.2 - Sonar test */

int test_func_25(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 26 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 26.0 - Sonar test */
/* ripetizione 26.1 - Sonar test */
/* ripetizione 26.2 - Sonar test */

int test_func_26(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

void dup_block_6_0(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 7;
 int y = 8;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_6_1(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 8;
 int y = 9;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_6_2(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 9;
 int y = 10;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

/* ===== COMMENT BLOCK 27 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 27.0 - Sonar test */
/* ripetizione 27.1 - Sonar test */
/* ripetizione 27.2 - Sonar test */

int test_func_27(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 28 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 28.0 - Sonar test */
/* ripetizione 28.1 - Sonar test */
/* ripetizione 28.2 - Sonar test */

int test_func_28(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 29 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 29.0 - Sonar test */
/* ripetizione 29.1 - Sonar test */
/* ripetizione 29.2 - Sonar test */

int test_func_29(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 30 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 30.0 - Sonar test */
/* ripetizione 30.1 - Sonar test */
/* ripetizione 30.2 - Sonar test */

int test_func_30(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 31 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 31.0 - Sonar test */
/* ripetizione 31.1 - Sonar test */
/* ripetizione 31.2 - Sonar test */

int test_func_31(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

void dup_block_7_0(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 8;
 int y = 9;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_7_1(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 9;
 int y = 10;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_7_2(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 10;
 int y = 11;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

/* ===== COMMENT BLOCK 32 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 32.0 - Sonar test */
/* ripetizione 32.1 - Sonar test */
/* ripetizione 32.2 - Sonar test */

int test_func_32(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 33 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 33.0 - Sonar test */
/* ripetizione 33.1 - Sonar test */
/* ripetizione 33.2 - Sonar test */

int test_func_33(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 34 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 34.0 - Sonar test */
/* ripetizione 34.1 - Sonar test */
/* ripetizione 34.2 - Sonar test */

int test_func_34(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

int switchy4(int v) {
 switch(v) {
 case 0: return 0;
 case 1: return 7;
 case 2: return 14;
 case 3: return 21;
 case 4: return 28;
 case 5: return 35;
 case 6: return 42;
 case 7: return 49;
 case 8: return 56;
 case 9: return 63;
 case 10: return 70;
 case 11: return 77;
 case 12: return 84;
 case 13: return 91;
 case 14: return 98;
 case 15: return 105;
 case 16: return 112;
 case 17: return 119;
 case 18: return 126;
 case 19: return 133;
 default: return -1;
 }
}

/* ===== COMMENT BLOCK 35 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 35.0 - Sonar test */
/* ripetizione 35.1 - Sonar test */
/* ripetizione 35.2 - Sonar test */

int test_func_35(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 36 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 36.0 - Sonar test */
/* ripetizione 36.1 - Sonar test */
/* ripetizione 36.2 - Sonar test */

int test_func_36(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

void dup_block_8_0(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 9;
 int y = 10;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_8_1(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 10;
 int y = 11;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_8_2(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 11;
 int y = 12;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

/* ===== COMMENT BLOCK 37 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 37.0 - Sonar test */
/* ripetizione 37.1 - Sonar test */
/* ripetizione 37.2 - Sonar test */

int test_func_37(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 38 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 38.0 - Sonar test */
/* ripetizione 38.1 - Sonar test */
/* ripetizione 38.2 - Sonar test */

int test_func_38(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 39 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 39.0 - Sonar test */
/* ripetizione 39.1 - Sonar test */
/* ripetizione 39.2 - Sonar test */

int test_func_39(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 40 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 40.0 - Sonar test */
/* ripetizione 40.1 - Sonar test */
/* ripetizione 40.2 - Sonar test */

int test_func_40(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 41 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 41.0 - Sonar test */
/* ripetizione 41.1 - Sonar test */
/* ripetizione 41.2 - Sonar test */

int test_func_41(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

void dup_block_9_0(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 10;
 int y = 11;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_9_1(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 11;
 int y = 12;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_9_2(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 12;
 int y = 13;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

/* ===== COMMENT BLOCK 42 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 42.0 - Sonar test */
/* ripetizione 42.1 - Sonar test */
/* ripetizione 42.2 - Sonar test */

int test_func_42(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 43 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 43.0 - Sonar test */
/* ripetizione 43.1 - Sonar test */
/* ripetizione 43.2 - Sonar test */

int test_func_43(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 44 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 44.0 - Sonar test */
/* ripetizione 44.1 - Sonar test */
/* ripetizione 44.2 - Sonar test */

int test_func_44(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 45 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 45.0 - Sonar test */
/* ripetizione 45.1 - Sonar test */
/* ripetizione 45.2 - Sonar test */

int test_func_45(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

int switchy5(int v) {
 switch(v) {
 case 0: return 0;
 case 1: return 7;
 case 2: return 14;
 case 3: return 21;
 case 4: return 28;
 case 5: return 35;
 case 6: return 42;
 case 7: return 49;
 case 8: return 56;
 case 9: return 63;
 case 10: return 70;
 case 11: return 77;
 case 12: return 84;
 case 13: return 91;
 case 14: return 98;
 case 15: return 105;
 case 16: return 112;
 case 17: return 119;
 case 18: return 126;
 case 19: return 133;
 default: return -1;
 }
}

/* ===== COMMENT BLOCK 46 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 46.0 - Sonar test */
/* ripetizione 46.1 - Sonar test */
/* ripetizione 46.2 - Sonar test */

int test_func_46(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

void dup_block_10_0(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 11;
 int y = 12;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_10_1(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 12;
 int y = 13;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_10_2(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 13;
 int y = 14;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

/* ===== COMMENT BLOCK 47 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 47.0 - Sonar test */
/* ripetizione 47.1 - Sonar test */
/* ripetizione 47.2 - Sonar test */

int test_func_47(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 48 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 48.0 - Sonar test */
/* ripetizione 48.1 - Sonar test */
/* ripetizione 48.2 - Sonar test */

int test_func_48(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 49 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 49.0 - Sonar test */
/* ripetizione 49.1 - Sonar test */
/* ripetizione 49.2 - Sonar test */

int test_func_49(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 50 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 50.0 - Sonar test */
/* ripetizione 50.1 - Sonar test */
/* ripetizione 50.2 - Sonar test */

int test_func_50(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 51 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 51.0 - Sonar test */
/* ripetizione 51.1 - Sonar test */
/* ripetizione 51.2 - Sonar test */

int test_func_51(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

void dup_block_11_0(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 12;
 int y = 13;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_11_1(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 13;
 int y = 14;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_11_2(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 14;
 int y = 15;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

/* ===== COMMENT BLOCK 52 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 52.0 - Sonar test */
/* ripetizione 52.1 - Sonar test */
/* ripetizione 52.2 - Sonar test */

int test_func_52(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 53 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 53.0 - Sonar test */
/* ripetizione 53.1 - Sonar test */
/* ripetizione 53.2 - Sonar test */

int test_func_53(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 54 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 54.0 - Sonar test */
/* ripetizione 54.1 - Sonar test */
/* ripetizione 54.2 - Sonar test */

int test_func_54(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 55 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 55.0 - Sonar test */
/* ripetizione 55.1 - Sonar test */
/* ripetizione 55.2 - Sonar test */

int test_func_55(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 56 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 56.0 - Sonar test */
/* ripetizione 56.1 - Sonar test */
/* ripetizione 56.2 - Sonar test */

int test_func_56(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

void dup_block_12_0(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 13;
 int y = 14;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_12_1(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 14;
 int y = 15;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_12_2(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 15;
 int y = 16;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

int switchy6(int v) {
 switch(v) {
 case 0: return 0;
 case 1: return 7;
 case 2: return 14;
 case 3: return 21;
 case 4: return 28;
 case 5: return 35;
 case 6: return 42;
 case 7: return 49;
 case 8: return 56;
 case 9: return 63;
 case 10: return 70;
 case 11: return 77;
 case 12: return 84;
 case 13: return 91;
 case 14: return 98;
 case 15: return 105;
 case 16: return 112;
 case 17: return 119;
 case 18: return 126;
 case 19: return 133;
 default: return -1;
 }
}

/* ===== COMMENT BLOCK 57 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 57.0 - Sonar test */
/* ripetizione 57.1 - Sonar test */
/* ripetizione 57.2 - Sonar test */

int test_func_57(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 58 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 58.0 - Sonar test */
/* ripetizione 58.1 - Sonar test */
/* ripetizione 58.2 - Sonar test */

int test_func_58(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 59 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 59.0 - Sonar test */
/* ripetizione 59.1 - Sonar test */
/* ripetizione 59.2 - Sonar test */

int test_func_59(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 60 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 60.0 - Sonar test */
/* ripetizione 60.1 - Sonar test */
/* ripetizione 60.2 - Sonar test */

int test_func_60(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 61 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 61.0 - Sonar test */
/* ripetizione 61.1 - Sonar test */
/* ripetizione 61.2 - Sonar test */

int test_func_61(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

void dup_block_13_0(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 14;
 int y = 15;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_13_1(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 15;
 int y = 16;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_13_2(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 16;
 int y = 17;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

/* ===== COMMENT BLOCK 62 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 62.0 - Sonar test */
/* ripetizione 62.1 - Sonar test */
/* ripetizione 62.2 - Sonar test */

int test_func_62(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 63 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 63.0 - Sonar test */
/* ripetizione 63.1 - Sonar test */
/* ripetizione 63.2 - Sonar test */

int test_func_63(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 64 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 64.0 - Sonar test */
/* ripetizione 64.1 - Sonar test */
/* ripetizione 64.2 - Sonar test */

int test_func_64(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 65 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 65.0 - Sonar test */
/* ripetizione 65.1 - Sonar test */
/* ripetizione 65.2 - Sonar test */

int test_func_65(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 66 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 66.0 - Sonar test */
/* ripetizione 66.1 - Sonar test */
/* ripetizione 66.2 - Sonar test */

int test_func_66(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

void dup_block_14_0(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 15;
 int y = 16;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_14_1(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 16;
 int y = 17;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_14_2(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 17;
 int y = 18;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

/* ===== COMMENT BLOCK 67 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 67.0 - Sonar test */
/* ripetizione 67.1 - Sonar test */
/* ripetizione 67.2 - Sonar test */

int test_func_67(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

int switchy7(int v) {
 switch(v) {
 case 0: return 0;
 case 1: return 7;
 case 2: return 14;
 case 3: return 21;
 case 4: return 28;
 case 5: return 35;
 case 6: return 42;
 case 7: return 49;
 case 8: return 56;
 case 9: return 63;
 case 10: return 70;
 case 11: return 77;
 case 12: return 84;
 case 13: return 91;
 case 14: return 98;
 case 15: return 105;
 case 16: return 112;
 case 17: return 119;
 case 18: return 126;
 case 19: return 133;
 default: return -1;
 }
}

/* ===== COMMENT BLOCK 68 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 68.0 - Sonar test */
/* ripetizione 68.1 - Sonar test */
/* ripetizione 68.2 - Sonar test */

int test_func_68(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 69 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 69.0 - Sonar test */
/* ripetizione 69.1 - Sonar test */
/* ripetizione 69.2 - Sonar test */

int test_func_69(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 70 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 70.0 - Sonar test */
/* ripetizione 70.1 - Sonar test */
/* ripetizione 70.2 - Sonar test */

int test_func_70(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 71 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 71.0 - Sonar test */
/* ripetizione 71.1 - Sonar test */
/* ripetizione 71.2 - Sonar test */

int test_func_71(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

void dup_block_15_0(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 16;
 int y = 17;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_15_1(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 17;
 int y = 18;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_15_2(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 18;
 int y = 19;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

/* ===== COMMENT BLOCK 72 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 72.0 - Sonar test */
/* ripetizione 72.1 - Sonar test */
/* ripetizione 72.2 - Sonar test */

int test_func_72(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 73 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 73.0 - Sonar test */
/* ripetizione 73.1 - Sonar test */
/* ripetizione 73.2 - Sonar test */

int test_func_73(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 74 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 74.0 - Sonar test */
/* ripetizione 74.1 - Sonar test */
/* ripetizione 74.2 - Sonar test */

int test_func_74(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 75 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 75.0 - Sonar test */
/* ripetizione 75.1 - Sonar test */
/* ripetizione 75.2 - Sonar test */

int test_func_75(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 76 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 76.0 - Sonar test */
/* ripetizione 76.1 - Sonar test */
/* ripetizione 76.2 - Sonar test */

int test_func_76(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

void dup_block_16_0(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 17;
 int y = 18;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_16_1(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 18;
 int y = 19;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_16_2(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 19;
 int y = 20;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

/* ===== COMMENT BLOCK 77 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 77.0 - Sonar test */
/* ripetizione 77.1 - Sonar test */
/* ripetizione 77.2 - Sonar test */

int test_func_77(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 78 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 78.0 - Sonar test */
/* ripetizione 78.1 - Sonar test */
/* ripetizione 78.2 - Sonar test */

int test_func_78(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

int switchy8(int v) {
 switch(v) {
 case 0: return 0;
 case 1: return 7;
 case 2: return 14;
 case 3: return 21;
 case 4: return 28;
 case 5: return 35;
 case 6: return 42;
 case 7: return 49;
 case 8: return 56;
 case 9: return 63;
 case 10: return 70;
 case 11: return 77;
 case 12: return 84;
 case 13: return 91;
 case 14: return 98;
 case 15: return 105;
 case 16: return 112;
 case 17: return 119;
 case 18: return 126;
 case 19: return 133;
 default: return -1;
 }
}

/* ===== COMMENT BLOCK 79 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 79.0 - Sonar test */
/* ripetizione 79.1 - Sonar test */
/* ripetizione 79.2 - Sonar test */

int test_func_79(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 80 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 80.0 - Sonar test */
/* ripetizione 80.1 - Sonar test */
/* ripetizione 80.2 - Sonar test */

int test_func_80(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 81 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 81.0 - Sonar test */
/* ripetizione 81.1 - Sonar test */
/* ripetizione 81.2 - Sonar test */

int test_func_81(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

void dup_block_17_0(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 18;
 int y = 19;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_17_1(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 19;
 int y = 20;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_17_2(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 20;
 int y = 21;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

/* ===== COMMENT BLOCK 82 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 82.0 - Sonar test */
/* ripetizione 82.1 - Sonar test */
/* ripetizione 82.2 - Sonar test */

int test_func_82(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 83 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 83.0 - Sonar test */
/* ripetizione 83.1 - Sonar test */
/* ripetizione 83.2 - Sonar test */

int test_func_83(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 84 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 84.0 - Sonar test */
/* ripetizione 84.1 - Sonar test */
/* ripetizione 84.2 - Sonar test */

int test_func_84(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 85 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 85.0 - Sonar test */
/* ripetizione 85.1 - Sonar test */
/* ripetizione 85.2 - Sonar test */

int test_func_85(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 86 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 86.0 - Sonar test */
/* ripetizione 86.1 - Sonar test */
/* ripetizione 86.2 - Sonar test */

int test_func_86(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

void dup_block_18_0(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 19;
 int y = 20;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_18_1(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 20;
 int y = 21;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_18_2(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 21;
 int y = 22;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

/* ===== COMMENT BLOCK 87 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 87.0 - Sonar test */
/* ripetizione 87.1 - Sonar test */
/* ripetizione 87.2 - Sonar test */

int test_func_87(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 88 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 88.0 - Sonar test */
/* ripetizione 88.1 - Sonar test */
/* ripetizione 88.2 - Sonar test */

int test_func_88(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 89 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 89.0 - Sonar test */
/* ripetizione 89.1 - Sonar test */
/* ripetizione 89.2 - Sonar test */

int test_func_89(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

int switchy9(int v) {
 switch(v) {
 case 0: return 0;
 case 1: return 7;
 case 2: return 14;
 case 3: return 21;
 case 4: return 28;
 case 5: return 35;
 case 6: return 42;
 case 7: return 49;
 case 8: return 56;
 case 9: return 63;
 case 10: return 70;
 case 11: return 77;
 case 12: return 84;
 case 13: return 91;
 case 14: return 98;
 case 15: return 105;
 case 16: return 112;
 case 17: return 119;
 case 18: return 126;
 case 19: return 133;
 default: return -1;
 }
}

/* ===== COMMENT BLOCK 90 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 90.0 - Sonar test */
/* ripetizione 90.1 - Sonar test */
/* ripetizione 90.2 - Sonar test */

int test_func_90(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 91 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 91.0 - Sonar test */
/* ripetizione 91.1 - Sonar test */
/* ripetizione 91.2 - Sonar test */

int test_func_91(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

void dup_block_19_0(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 20;
 int y = 21;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_19_1(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 21;
 int y = 22;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_19_2(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 22;
 int y = 23;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

/* ===== COMMENT BLOCK 92 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 92.0 - Sonar test */
/* ripetizione 92.1 - Sonar test */
/* ripetizione 92.2 - Sonar test */

int test_func_92(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 93 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 93.0 - Sonar test */
/* ripetizione 93.1 - Sonar test */
/* ripetizione 93.2 - Sonar test */

int test_func_93(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 94 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 94.0 - Sonar test */
/* ripetizione 94.1 - Sonar test */
/* ripetizione 94.2 - Sonar test */

int test_func_94(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 95 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 95.0 - Sonar test */
/* ripetizione 95.1 - Sonar test */
/* ripetizione 95.2 - Sonar test */

int test_func_95(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 96 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 96.0 - Sonar test */
/* ripetizione 96.1 - Sonar test */
/* ripetizione 96.2 - Sonar test */

int test_func_96(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

void dup_block_20_0(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 21;
 int y = 22;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_20_1(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 22;
 int y = 23;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_20_2(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 23;
 int y = 24;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

/* ===== COMMENT BLOCK 97 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 97.0 - Sonar test */
/* ripetizione 97.1 - Sonar test */
/* ripetizione 97.2 - Sonar test */

int test_func_97(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 98 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 98.0 - Sonar test */
/* ripetizione 98.1 - Sonar test */
/* ripetizione 98.2 - Sonar test */

int test_func_98(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 99 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 99.0 - Sonar test */
/* ripetizione 99.1 - Sonar test */
/* ripetizione 99.2 - Sonar test */

int test_func_99(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 100 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 100.0 - Sonar test */
/* ripetizione 100.1 - Sonar test */
/* ripetizione 100.2 - Sonar test */

int test_func_100(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

int switchy10(int v) {
 switch(v) {
 case 0: return 0;
 case 1: return 7;
 case 2: return 14;
 case 3: return 21;
 case 4: return 28;
 case 5: return 35;
 case 6: return 42;
 case 7: return 49;
 case 8: return 56;
 case 9: return 63;
 case 10: return 70;
 case 11: return 77;
 case 12: return 84;
 case 13: return 91;
 case 14: return 98;
 case 15: return 105;
 case 16: return 112;
 case 17: return 119;
 case 18: return 126;
 case 19: return 133;
 default: return -1;
 }
}

/* ===== COMMENT BLOCK 101 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 101.0 - Sonar test */
/* ripetizione 101.1 - Sonar test */
/* ripetizione 101.2 - Sonar test */

int test_func_101(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

void dup_block_21_0(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 22;
 int y = 23;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_21_1(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 23;
 int y = 24;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_21_2(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 24;
 int y = 25;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

/* ===== COMMENT BLOCK 102 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 102.0 - Sonar test */
/* ripetizione 102.1 - Sonar test */
/* ripetizione 102.2 - Sonar test */

int test_func_102(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 103 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 103.0 - Sonar test */
/* ripetizione 103.1 - Sonar test */
/* ripetizione 103.2 - Sonar test */

int test_func_103(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 104 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 104.0 - Sonar test */
/* ripetizione 104.1 - Sonar test */
/* ripetizione 104.2 - Sonar test */

int test_func_104(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 105 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 105.0 - Sonar test */
/* ripetizione 105.1 - Sonar test */
/* ripetizione 105.2 - Sonar test */

int test_func_105(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 106 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 106.0 - Sonar test */
/* ripetizione 106.1 - Sonar test */
/* ripetizione 106.2 - Sonar test */

int test_func_106(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

void dup_block_22_0(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 23;
 int y = 24;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_22_1(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 24;
 int y = 25;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_22_2(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 25;
 int y = 26;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

/* ===== COMMENT BLOCK 107 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 107.0 - Sonar test */
/* ripetizione 107.1 - Sonar test */
/* ripetizione 107.2 - Sonar test */

int test_func_107(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 108 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 108.0 - Sonar test */
/* ripetizione 108.1 - Sonar test */
/* ripetizione 108.2 - Sonar test */

int test_func_108(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 109 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 109.0 - Sonar test */
/* ripetizione 109.1 - Sonar test */
/* ripetizione 109.2 - Sonar test */

int test_func_109(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 110 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 110.0 - Sonar test */
/* ripetizione 110.1 - Sonar test */
/* ripetizione 110.2 - Sonar test */

int test_func_110(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 111 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 111.0 - Sonar test */
/* ripetizione 111.1 - Sonar test */
/* ripetizione 111.2 - Sonar test */

int test_func_111(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

void dup_block_23_0(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 24;
 int y = 25;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_23_1(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 25;
 int y = 26;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_23_2(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 26;
 int y = 27;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

int switchy11(int v) {
 switch(v) {
 case 0: return 0;
 case 1: return 7;
 case 2: return 14;
 case 3: return 21;
 case 4: return 28;
 case 5: return 35;
 case 6: return 42;
 case 7: return 49;
 case 8: return 56;
 case 9: return 63;
 case 10: return 70;
 case 11: return 77;
 case 12: return 84;
 case 13: return 91;
 case 14: return 98;
 case 15: return 105;
 case 16: return 112;
 case 17: return 119;
 case 18: return 126;
 case 19: return 133;
 default: return -1;
 }
}

/* ===== COMMENT BLOCK 112 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 112.0 - Sonar test */
/* ripetizione 112.1 - Sonar test */
/* ripetizione 112.2 - Sonar test */

int test_func_112(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 113 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 113.0 - Sonar test */
/* ripetizione 113.1 - Sonar test */
/* ripetizione 113.2 - Sonar test */

int test_func_113(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 114 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 114.0 - Sonar test */
/* ripetizione 114.1 - Sonar test */
/* ripetizione 114.2 - Sonar test */

int test_func_114(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 115 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 115.0 - Sonar test */
/* ripetizione 115.1 - Sonar test */
/* ripetizione 115.2 - Sonar test */

int test_func_115(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 116 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 116.0 - Sonar test */
/* ripetizione 116.1 - Sonar test */
/* ripetizione 116.2 - Sonar test */

int test_func_116(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

void dup_block_24_0(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 25;
 int y = 26;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_24_1(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 26;
 int y = 27;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_24_2(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 27;
 int y = 28;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

/* ===== COMMENT BLOCK 117 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 117.0 - Sonar test */
/* ripetizione 117.1 - Sonar test */
/* ripetizione 117.2 - Sonar test */

int test_func_117(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 118 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 118.0 - Sonar test */
/* ripetizione 118.1 - Sonar test */
/* ripetizione 118.2 - Sonar test */

int test_func_118(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 119 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 119.0 - Sonar test */
/* ripetizione 119.1 - Sonar test */
/* ripetizione 119.2 - Sonar test */

int test_func_119(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 120 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 120.0 - Sonar test */
/* ripetizione 120.1 - Sonar test */
/* ripetizione 120.2 - Sonar test */

int test_func_120(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 121 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 121.0 - Sonar test */
/* ripetizione 121.1 - Sonar test */
/* ripetizione 121.2 - Sonar test */

int test_func_121(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

void dup_block_25_0(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 26;
 int y = 27;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_25_1(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 27;
 int y = 28;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_25_2(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 28;
 int y = 29;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

/* ===== COMMENT BLOCK 122 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 122.0 - Sonar test */
/* ripetizione 122.1 - Sonar test */
/* ripetizione 122.2 - Sonar test */

int test_func_122(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

int switchy12(int v) {
 switch(v) {
 case 0: return 0;
 case 1: return 7;
 case 2: return 14;
 case 3: return 21;
 case 4: return 28;
 case 5: return 35;
 case 6: return 42;
 case 7: return 49;
 case 8: return 56;
 case 9: return 63;
 case 10: return 70;
 case 11: return 77;
 case 12: return 84;
 case 13: return 91;
 case 14: return 98;
 case 15: return 105;
 case 16: return 112;
 case 17: return 119;
 case 18: return 126;
 case 19: return 133;
 default: return -1;
 }
}

/* ===== COMMENT BLOCK 123 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 123.0 - Sonar test */
/* ripetizione 123.1 - Sonar test */
/* ripetizione 123.2 - Sonar test */

int test_func_123(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 124 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 124.0 - Sonar test */
/* ripetizione 124.1 - Sonar test */
/* ripetizione 124.2 - Sonar test */

int test_func_124(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 125 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 125.0 - Sonar test */
/* ripetizione 125.1 - Sonar test */
/* ripetizione 125.2 - Sonar test */

int test_func_125(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 126 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 126.0 - Sonar test */
/* ripetizione 126.1 - Sonar test */
/* ripetizione 126.2 - Sonar test */

int test_func_126(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

void dup_block_26_0(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 27;
 int y = 28;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_26_1(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 28;
 int y = 29;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_26_2(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 29;
 int y = 30;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

/* ===== COMMENT BLOCK 127 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 127.0 - Sonar test */
/* ripetizione 127.1 - Sonar test */
/* ripetizione 127.2 - Sonar test */

int test_func_127(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 128 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 128.0 - Sonar test */
/* ripetizione 128.1 - Sonar test */
/* ripetizione 128.2 - Sonar test */

int test_func_128(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 129 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 129.0 - Sonar test */
/* ripetizione 129.1 - Sonar test */
/* ripetizione 129.2 - Sonar test */

int test_func_129(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 130 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 130.0 - Sonar test */
/* ripetizione 130.1 - Sonar test */
/* ripetizione 130.2 - Sonar test */

int test_func_130(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 131 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 131.0 - Sonar test */
/* ripetizione 131.1 - Sonar test */
/* ripetizione 131.2 - Sonar test */

int test_func_131(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

void dup_block_27_0(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 28;
 int y = 29;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_27_1(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 29;
 int y = 30;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_27_2(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 30;
 int y = 31;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

/* ===== COMMENT BLOCK 132 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 132.0 - Sonar test */
/* ripetizione 132.1 - Sonar test */
/* ripetizione 132.2 - Sonar test */

int test_func_132(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 133 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 133.0 - Sonar test */
/* ripetizione 133.1 - Sonar test */
/* ripetizione 133.2 - Sonar test */

int test_func_133(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

int switchy13(int v) {
 switch(v) {
 case 0: return 0;
 case 1: return 7;
 case 2: return 14;
 case 3: return 21;
 case 4: return 28;
 case 5: return 35;
 case 6: return 42;
 case 7: return 49;
 case 8: return 56;
 case 9: return 63;
 case 10: return 70;
 case 11: return 77;
 case 12: return 84;
 case 13: return 91;
 case 14: return 98;
 case 15: return 105;
 case 16: return 112;
 case 17: return 119;
 case 18: return 126;
 case 19: return 133;
 default: return -1;
 }
}

/* ===== COMMENT BLOCK 134 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 134.0 - Sonar test */
/* ripetizione 134.1 - Sonar test */
/* ripetizione 134.2 - Sonar test */

int test_func_134(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 135 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 135.0 - Sonar test */
/* ripetizione 135.1 - Sonar test */
/* ripetizione 135.2 - Sonar test */

int test_func_135(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 136 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 136.0 - Sonar test */
/* ripetizione 136.1 - Sonar test */
/* ripetizione 136.2 - Sonar test */

int test_func_136(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

void dup_block_28_0(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 29;
 int y = 30;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_28_1(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 30;
 int y = 31;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_28_2(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 31;
 int y = 32;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

/* ===== COMMENT BLOCK 137 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 137.0 - Sonar test */
/* ripetizione 137.1 - Sonar test */
/* ripetizione 137.2 - Sonar test */

int test_func_137(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 138 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 138.0 - Sonar test */
/* ripetizione 138.1 - Sonar test */
/* ripetizione 138.2 - Sonar test */

int test_func_138(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 139 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 139.0 - Sonar test */
/* ripetizione 139.1 - Sonar test */
/* ripetizione 139.2 - Sonar test */

int test_func_139(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 140 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 140.0 - Sonar test */
/* ripetizione 140.1 - Sonar test */
/* ripetizione 140.2 - Sonar test */

int test_func_140(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 141 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 141.0 - Sonar test */
/* ripetizione 141.1 - Sonar test */
/* ripetizione 141.2 - Sonar test */

int test_func_141(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

void dup_block_29_0(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 30;
 int y = 31;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_29_1(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 31;
 int y = 32;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_29_2(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 32;
 int y = 33;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

/* ===== COMMENT BLOCK 142 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 142.0 - Sonar test */
/* ripetizione 142.1 - Sonar test */
/* ripetizione 142.2 - Sonar test */

int test_func_142(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 143 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 143.0 - Sonar test */
/* ripetizione 143.1 - Sonar test */
/* ripetizione 143.2 - Sonar test */

int test_func_143(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 144 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 144.0 - Sonar test */
/* ripetizione 144.1 - Sonar test */
/* ripetizione 144.2 - Sonar test */

int test_func_144(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

int switchy14(int v) {
 switch(v) {
 case 0: return 0;
 case 1: return 7;
 case 2: return 14;
 case 3: return 21;
 case 4: return 28;
 case 5: return 35;
 case 6: return 42;
 case 7: return 49;
 case 8: return 56;
 case 9: return 63;
 case 10: return 70;
 case 11: return 77;
 case 12: return 84;
 case 13: return 91;
 case 14: return 98;
 case 15: return 105;
 case 16: return 112;
 case 17: return 119;
 case 18: return 126;
 case 19: return 133;
 default: return -1;
 }
}

/* ===== COMMENT BLOCK 145 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 145.0 - Sonar test */
/* ripetizione 145.1 - Sonar test */
/* ripetizione 145.2 - Sonar test */

int test_func_145(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 146 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 146.0 - Sonar test */
/* ripetizione 146.1 - Sonar test */
/* ripetizione 146.2 - Sonar test */

int test_func_146(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

void dup_block_30_0(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 31;
 int y = 32;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_30_1(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 32;
 int y = 33;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_30_2(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 33;
 int y = 34;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

/* ===== COMMENT BLOCK 147 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 147.0 - Sonar test */
/* ripetizione 147.1 - Sonar test */
/* ripetizione 147.2 - Sonar test */

int test_func_147(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 148 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 148.0 - Sonar test */
/* ripetizione 148.1 - Sonar test */
/* ripetizione 148.2 - Sonar test */

int test_func_148(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 149 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 149.0 - Sonar test */
/* ripetizione 149.1 - Sonar test */
/* ripetizione 149.2 - Sonar test */

int test_func_149(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 150 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 150.0 - Sonar test */
/* ripetizione 150.1 - Sonar test */
/* ripetizione 150.2 - Sonar test */

int test_func_150(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 151 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 151.0 - Sonar test */
/* ripetizione 151.1 - Sonar test */
/* ripetizione 151.2 - Sonar test */

int test_func_151(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

void dup_block_31_0(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 32;
 int y = 33;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_31_1(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 33;
 int y = 34;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_31_2(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 34;
 int y = 35;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

/* ===== COMMENT BLOCK 152 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 152.0 - Sonar test */
/* ripetizione 152.1 - Sonar test */
/* ripetizione 152.2 - Sonar test */

int test_func_152(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 153 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 153.0 - Sonar test */
/* ripetizione 153.1 - Sonar test */
/* ripetizione 153.2 - Sonar test */

int test_func_153(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 154 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 154.0 - Sonar test */
/* ripetizione 154.1 - Sonar test */
/* ripetizione 154.2 - Sonar test */

int test_func_154(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 155 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 155.0 - Sonar test */
/* ripetizione 155.1 - Sonar test */
/* ripetizione 155.2 - Sonar test */

int test_func_155(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

int switchy15(int v) {
 switch(v) {
 case 0: return 0;
 case 1: return 7;
 case 2: return 14;
 case 3: return 21;
 case 4: return 28;
 case 5: return 35;
 case 6: return 42;
 case 7: return 49;
 case 8: return 56;
 case 9: return 63;
 case 10: return 70;
 case 11: return 77;
 case 12: return 84;
 case 13: return 91;
 case 14: return 98;
 case 15: return 105;
 case 16: return 112;
 case 17: return 119;
 case 18: return 126;
 case 19: return 133;
 default: return -1;
 }
}

/* ===== COMMENT BLOCK 156 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 156.0 - Sonar test */
/* ripetizione 156.1 - Sonar test */
/* ripetizione 156.2 - Sonar test */

int test_func_156(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

void dup_block_32_0(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 33;
 int y = 34;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_32_1(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 34;
 int y = 35;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_32_2(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 35;
 int y = 36;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

/* ===== COMMENT BLOCK 157 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 157.0 - Sonar test */
/* ripetizione 157.1 - Sonar test */
/* ripetizione 157.2 - Sonar test */

int test_func_157(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 158 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 158.0 - Sonar test */
/* ripetizione 158.1 - Sonar test */
/* ripetizione 158.2 - Sonar test */

int test_func_158(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 159 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 159.0 - Sonar test */
/* ripetizione 159.1 - Sonar test */
/* ripetizione 159.2 - Sonar test */

int test_func_159(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 160 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 160.0 - Sonar test */
/* ripetizione 160.1 - Sonar test */
/* ripetizione 160.2 - Sonar test */

int test_func_160(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 161 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 161.0 - Sonar test */
/* ripetizione 161.1 - Sonar test */
/* ripetizione 161.2 - Sonar test */

int test_func_161(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

void dup_block_33_0(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 34;
 int y = 35;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_33_1(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 35;
 int y = 36;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_33_2(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 36;
 int y = 37;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

/* ===== COMMENT BLOCK 162 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 162.0 - Sonar test */
/* ripetizione 162.1 - Sonar test */
/* ripetizione 162.2 - Sonar test */

int test_func_162(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 163 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 163.0 - Sonar test */
/* ripetizione 163.1 - Sonar test */
/* ripetizione 163.2 - Sonar test */

int test_func_163(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 164 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 164.0 - Sonar test */
/* ripetizione 164.1 - Sonar test */
/* ripetizione 164.2 - Sonar test */

int test_func_164(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 165 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 165.0 - Sonar test */
/* ripetizione 165.1 - Sonar test */
/* ripetizione 165.2 - Sonar test */

int test_func_165(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 166 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 166.0 - Sonar test */
/* ripetizione 166.1 - Sonar test */
/* ripetizione 166.2 - Sonar test */

int test_func_166(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

void dup_block_34_0(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 35;
 int y = 36;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_34_1(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 36;
 int y = 37;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_34_2(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 37;
 int y = 38;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

int switchy16(int v) {
 switch(v) {
 case 0: return 0;
 case 1: return 7;
 case 2: return 14;
 case 3: return 21;
 case 4: return 28;
 case 5: return 35;
 case 6: return 42;
 case 7: return 49;
 case 8: return 56;
 case 9: return 63;
 case 10: return 70;
 case 11: return 77;
 case 12: return 84;
 case 13: return 91;
 case 14: return 98;
 case 15: return 105;
 case 16: return 112;
 case 17: return 119;
 case 18: return 126;
 case 19: return 133;
 default: return -1;
 }
}

/* ===== COMMENT BLOCK 167 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 167.0 - Sonar test */
/* ripetizione 167.1 - Sonar test */
/* ripetizione 167.2 - Sonar test */

int test_func_167(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 168 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 168.0 - Sonar test */
/* ripetizione 168.1 - Sonar test */
/* ripetizione 168.2 - Sonar test */

int test_func_168(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 169 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 169.0 - Sonar test */
/* ripetizione 169.1 - Sonar test */
/* ripetizione 169.2 - Sonar test */

int test_func_169(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 170 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 170.0 - Sonar test */
/* ripetizione 170.1 - Sonar test */
/* ripetizione 170.2 - Sonar test */

int test_func_170(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 171 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 171.0 - Sonar test */
/* ripetizione 171.1 - Sonar test */
/* ripetizione 171.2 - Sonar test */

int test_func_171(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

void dup_block_35_0(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 36;
 int y = 37;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_35_1(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 37;
 int y = 38;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_35_2(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 38;
 int y = 39;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

/* ===== COMMENT BLOCK 172 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 172.0 - Sonar test */
/* ripetizione 172.1 - Sonar test */
/* ripetizione 172.2 - Sonar test */

int test_func_172(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 173 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 173.0 - Sonar test */
/* ripetizione 173.1 - Sonar test */
/* ripetizione 173.2 - Sonar test */

int test_func_173(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 174 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 174.0 - Sonar test */
/* ripetizione 174.1 - Sonar test */
/* ripetizione 174.2 - Sonar test */

int test_func_174(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 175 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 175.0 - Sonar test */
/* ripetizione 175.1 - Sonar test */
/* ripetizione 175.2 - Sonar test */

int test_func_175(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 176 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 176.0 - Sonar test */
/* ripetizione 176.1 - Sonar test */
/* ripetizione 176.2 - Sonar test */

int test_func_176(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

void dup_block_36_0(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 37;
 int y = 38;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_36_1(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 38;
 int y = 39;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_36_2(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 39;
 int y = 40;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

/* ===== COMMENT BLOCK 177 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 177.0 - Sonar test */
/* ripetizione 177.1 - Sonar test */
/* ripetizione 177.2 - Sonar test */

int test_func_177(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

int switchy17(int v) {
 switch(v) {
 case 0: return 0;
 case 1: return 7;
 case 2: return 14;
 case 3: return 21;
 case 4: return 28;
 case 5: return 35;
 case 6: return 42;
 case 7: return 49;
 case 8: return 56;
 case 9: return 63;
 case 10: return 70;
 case 11: return 77;
 case 12: return 84;
 case 13: return 91;
 case 14: return 98;
 case 15: return 105;
 case 16: return 112;
 case 17: return 119;
 case 18: return 126;
 case 19: return 133;
 default: return -1;
 }
}

/* ===== COMMENT BLOCK 178 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 178.0 - Sonar test */
/* ripetizione 178.1 - Sonar test */
/* ripetizione 178.2 - Sonar test */

int test_func_178(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 179 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 179.0 - Sonar test */
/* ripetizione 179.1 - Sonar test */
/* ripetizione 179.2 - Sonar test */

int test_func_179(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 180 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 180.0 - Sonar test */
/* ripetizione 180.1 - Sonar test */
/* ripetizione 180.2 - Sonar test */

int test_func_180(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 181 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 181.0 - Sonar test */
/* ripetizione 181.1 - Sonar test */
/* ripetizione 181.2 - Sonar test */

int test_func_181(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

void dup_block_37_0(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 38;
 int y = 39;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_37_1(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 39;
 int y = 40;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_37_2(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 40;
 int y = 41;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

/* ===== COMMENT BLOCK 182 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 182.0 - Sonar test */
/* ripetizione 182.1 - Sonar test */
/* ripetizione 182.2 - Sonar test */

int test_func_182(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 183 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 183.0 - Sonar test */
/* ripetizione 183.1 - Sonar test */
/* ripetizione 183.2 - Sonar test */

int test_func_183(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 184 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 184.0 - Sonar test */
/* ripetizione 184.1 - Sonar test */
/* ripetizione 184.2 - Sonar test */

int test_func_184(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 185 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 185.0 - Sonar test */
/* ripetizione 185.1 - Sonar test */
/* ripetizione 185.2 - Sonar test */

int test_func_185(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 186 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 186.0 - Sonar test */
/* ripetizione 186.1 - Sonar test */
/* ripetizione 186.2 - Sonar test */

int test_func_186(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

void dup_block_38_0(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 39;
 int y = 40;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_38_1(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 40;
 int y = 41;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_38_2(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 41;
 int y = 42;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

/* ===== COMMENT BLOCK 187 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 187.0 - Sonar test */
/* ripetizione 187.1 - Sonar test */
/* ripetizione 187.2 - Sonar test */

int test_func_187(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 188 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 188.0 - Sonar test */
/* ripetizione 188.1 - Sonar test */
/* ripetizione 188.2 - Sonar test */

int test_func_188(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

int switchy18(int v) {
 switch(v) {
 case 0: return 0;
 case 1: return 7;
 case 2: return 14;
 case 3: return 21;
 case 4: return 28;
 case 5: return 35;
 case 6: return 42;
 case 7: return 49;
 case 8: return 56;
 case 9: return 63;
 case 10: return 70;
 case 11: return 77;
 case 12: return 84;
 case 13: return 91;
 case 14: return 98;
 case 15: return 105;
 case 16: return 112;
 case 17: return 119;
 case 18: return 126;
 case 19: return 133;
 default: return -1;
 }
}

/* ===== COMMENT BLOCK 189 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 189.0 - Sonar test */
/* ripetizione 189.1 - Sonar test */
/* ripetizione 189.2 - Sonar test */

int test_func_189(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 190 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 190.0 - Sonar test */
/* ripetizione 190.1 - Sonar test */
/* ripetizione 190.2 - Sonar test */

int test_func_190(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 191 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 191.0 - Sonar test */
/* ripetizione 191.1 - Sonar test */
/* ripetizione 191.2 - Sonar test */

int test_func_191(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

void dup_block_39_0(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 40;
 int y = 41;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_39_1(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 41;
 int y = 42;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_39_2(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 42;
 int y = 43;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

/* ===== COMMENT BLOCK 192 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 192.0 - Sonar test */
/* ripetizione 192.1 - Sonar test */
/* ripetizione 192.2 - Sonar test */

int test_func_192(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 193 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 193.0 - Sonar test */
/* ripetizione 193.1 - Sonar test */
/* ripetizione 193.2 - Sonar test */

int test_func_193(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 194 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 194.0 - Sonar test */
/* ripetizione 194.1 - Sonar test */
/* ripetizione 194.2 - Sonar test */

int test_func_194(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 195 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 195.0 - Sonar test */
/* ripetizione 195.1 - Sonar test */
/* ripetizione 195.2 - Sonar test */

int test_func_195(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 196 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 196.0 - Sonar test */
/* ripetizione 196.1 - Sonar test */
/* ripetizione 196.2 - Sonar test */

int test_func_196(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

void dup_block_40_0(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 41;
 int y = 42;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_40_1(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 42;
 int y = 43;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_40_2(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 43;
 int y = 44;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

/* ===== COMMENT BLOCK 197 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 197.0 - Sonar test */
/* ripetizione 197.1 - Sonar test */
/* ripetizione 197.2 - Sonar test */

int test_func_197(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 198 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 198.0 - Sonar test */
/* ripetizione 198.1 - Sonar test */
/* ripetizione 198.2 - Sonar test */

int test_func_198(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 199 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 199.0 - Sonar test */
/* ripetizione 199.1 - Sonar test */
/* ripetizione 199.2 - Sonar test */

int test_func_199(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

int switchy19(int v) {
 switch(v) {
 case 0: return 0;
 case 1: return 7;
 case 2: return 14;
 case 3: return 21;
 case 4: return 28;
 case 5: return 35;
 case 6: return 42;
 case 7: return 49;
 case 8: return 56;
 case 9: return 63;
 case 10: return 70;
 case 11: return 77;
 case 12: return 84;
 case 13: return 91;
 case 14: return 98;
 case 15: return 105;
 case 16: return 112;
 case 17: return 119;
 case 18: return 126;
 case 19: return 133;
 default: return -1;
 }
}

/* ===== COMMENT BLOCK 200 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 200.0 - Sonar test */
/* ripetizione 200.1 - Sonar test */
/* ripetizione 200.2 - Sonar test */

int test_func_200(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 201 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 201.0 - Sonar test */
/* ripetizione 201.1 - Sonar test */
/* ripetizione 201.2 - Sonar test */

int test_func_201(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

void dup_block_41_0(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 42;
 int y = 43;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_41_1(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 43;
 int y = 44;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_41_2(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 44;
 int y = 45;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

/* ===== COMMENT BLOCK 202 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 202.0 - Sonar test */
/* ripetizione 202.1 - Sonar test */
/* ripetizione 202.2 - Sonar test */

int test_func_202(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 203 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 203.0 - Sonar test */
/* ripetizione 203.1 - Sonar test */
/* ripetizione 203.2 - Sonar test */

int test_func_203(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 204 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 204.0 - Sonar test */
/* ripetizione 204.1 - Sonar test */
/* ripetizione 204.2 - Sonar test */

int test_func_204(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 205 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 205.0 - Sonar test */
/* ripetizione 205.1 - Sonar test */
/* ripetizione 205.2 - Sonar test */

int test_func_205(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 206 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 206.0 - Sonar test */
/* ripetizione 206.1 - Sonar test */
/* ripetizione 206.2 - Sonar test */

int test_func_206(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

void dup_block_42_0(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 43;
 int y = 44;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_42_1(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 44;
 int y = 45;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_42_2(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 45;
 int y = 46;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

/* ===== COMMENT BLOCK 207 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 207.0 - Sonar test */
/* ripetizione 207.1 - Sonar test */
/* ripetizione 207.2 - Sonar test */

int test_func_207(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 208 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 208.0 - Sonar test */
/* ripetizione 208.1 - Sonar test */
/* ripetizione 208.2 - Sonar test */

int test_func_208(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 209 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 209.0 - Sonar test */
/* ripetizione 209.1 - Sonar test */
/* ripetizione 209.2 - Sonar test */

int test_func_209(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 210 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 210.0 - Sonar test */
/* ripetizione 210.1 - Sonar test */
/* ripetizione 210.2 - Sonar test */

int test_func_210(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

int switchy20(int v) {
 switch(v) {
 case 0: return 0;
 case 1: return 7;
 case 2: return 14;
 case 3: return 21;
 case 4: return 28;
 case 5: return 35;
 case 6: return 42;
 case 7: return 49;
 case 8: return 56;
 case 9: return 63;
 case 10: return 70;
 case 11: return 77;
 case 12: return 84;
 case 13: return 91;
 case 14: return 98;
 case 15: return 105;
 case 16: return 112;
 case 17: return 119;
 case 18: return 126;
 case 19: return 133;
 default: return -1;
 }
}

/* ===== COMMENT BLOCK 211 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 211.0 - Sonar test */
/* ripetizione 211.1 - Sonar test */
/* ripetizione 211.2 - Sonar test */

int test_func_211(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

void dup_block_43_0(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 44;
 int y = 45;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_43_1(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 45;
 int y = 46;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_43_2(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 46;
 int y = 47;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

/* ===== COMMENT BLOCK 212 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 212.0 - Sonar test */
/* ripetizione 212.1 - Sonar test */
/* ripetizione 212.2 - Sonar test */

int test_func_212(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 213 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 213.0 - Sonar test */
/* ripetizione 213.1 - Sonar test */
/* ripetizione 213.2 - Sonar test */

int test_func_213(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 214 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 214.0 - Sonar test */
/* ripetizione 214.1 - Sonar test */
/* ripetizione 214.2 - Sonar test */

int test_func_214(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 215 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 215.0 - Sonar test */
/* ripetizione 215.1 - Sonar test */
/* ripetizione 215.2 - Sonar test */

int test_func_215(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 216 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 216.0 - Sonar test */
/* ripetizione 216.1 - Sonar test */
/* ripetizione 216.2 - Sonar test */

int test_func_216(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

void dup_block_44_0(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 45;
 int y = 46;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_44_1(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 46;
 int y = 47;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_44_2(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 47;
 int y = 48;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

/* ===== COMMENT BLOCK 217 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 217.0 - Sonar test */
/* ripetizione 217.1 - Sonar test */
/* ripetizione 217.2 - Sonar test */

int test_func_217(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 218 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 218.0 - Sonar test */
/* ripetizione 218.1 - Sonar test */
/* ripetizione 218.2 - Sonar test */

int test_func_218(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 219 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 219.0 - Sonar test */
/* ripetizione 219.1 - Sonar test */
/* ripetizione 219.2 - Sonar test */

int test_func_219(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 220 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 220.0 - Sonar test */
/* ripetizione 220.1 - Sonar test */
/* ripetizione 220.2 - Sonar test */

int test_func_220(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 221 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 221.0 - Sonar test */
/* ripetizione 221.1 - Sonar test */
/* ripetizione 221.2 - Sonar test */

int test_func_221(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

void dup_block_45_0(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 46;
 int y = 47;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_45_1(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 47;
 int y = 48;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_45_2(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 48;
 int y = 49;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

int switchy21(int v) {
 switch(v) {
 case 0: return 0;
 case 1: return 7;
 case 2: return 14;
 case 3: return 21;
 case 4: return 28;
 case 5: return 35;
 case 6: return 42;
 case 7: return 49;
 case 8: return 56;
 case 9: return 63;
 case 10: return 70;
 case 11: return 77;
 case 12: return 84;
 case 13: return 91;
 case 14: return 98;
 case 15: return 105;
 case 16: return 112;
 case 17: return 119;
 case 18: return 126;
 case 19: return 133;
 default: return -1;
 }
}

/* ===== COMMENT BLOCK 222 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 222.0 - Sonar test */
/* ripetizione 222.1 - Sonar test */
/* ripetizione 222.2 - Sonar test */

int test_func_222(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 223 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 223.0 - Sonar test */
/* ripetizione 223.1 - Sonar test */
/* ripetizione 223.2 - Sonar test */

int test_func_223(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 224 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 224.0 - Sonar test */
/* ripetizione 224.1 - Sonar test */
/* ripetizione 224.2 - Sonar test */

int test_func_224(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 225 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 225.0 - Sonar test */
/* ripetizione 225.1 - Sonar test */
/* ripetizione 225.2 - Sonar test */

int test_func_225(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 226 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 226.0 - Sonar test */
/* ripetizione 226.1 - Sonar test */
/* ripetizione 226.2 - Sonar test */

int test_func_226(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

void dup_block_46_0(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 47;
 int y = 48;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_46_1(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 48;
 int y = 49;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_46_2(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 49;
 int y = 50;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

/* ===== COMMENT BLOCK 227 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 227.0 - Sonar test */
/* ripetizione 227.1 - Sonar test */
/* ripetizione 227.2 - Sonar test */

int test_func_227(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 228 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 228.0 - Sonar test */
/* ripetizione 228.1 - Sonar test */
/* ripetizione 228.2 - Sonar test */

int test_func_228(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 229 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 229.0 - Sonar test */
/* ripetizione 229.1 - Sonar test */
/* ripetizione 229.2 - Sonar test */

int test_func_229(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 230 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 230.0 - Sonar test */
/* ripetizione 230.1 - Sonar test */
/* ripetizione 230.2 - Sonar test */

int test_func_230(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 231 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 231.0 - Sonar test */
/* ripetizione 231.1 - Sonar test */
/* ripetizione 231.2 - Sonar test */

int test_func_231(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

void dup_block_47_0(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 48;
 int y = 49;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_47_1(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 49;
 int y = 50;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_47_2(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 50;
 int y = 51;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

/* ===== COMMENT BLOCK 232 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 232.0 - Sonar test */
/* ripetizione 232.1 - Sonar test */
/* ripetizione 232.2 - Sonar test */

int test_func_232(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

int switchy22(int v) {
 switch(v) {
 case 0: return 0;
 case 1: return 7;
 case 2: return 14;
 case 3: return 21;
 case 4: return 28;
 case 5: return 35;
 case 6: return 42;
 case 7: return 49;
 case 8: return 56;
 case 9: return 63;
 case 10: return 70;
 case 11: return 77;
 case 12: return 84;
 case 13: return 91;
 case 14: return 98;
 case 15: return 105;
 case 16: return 112;
 case 17: return 119;
 case 18: return 126;
 case 19: return 133;
 default: return -1;
 }
}

/* ===== COMMENT BLOCK 233 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 233.0 - Sonar test */
/* ripetizione 233.1 - Sonar test */
/* ripetizione 233.2 - Sonar test */

int test_func_233(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 234 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 234.0 - Sonar test */
/* ripetizione 234.1 - Sonar test */
/* ripetizione 234.2 - Sonar test */

int test_func_234(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 235 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 235.0 - Sonar test */
/* ripetizione 235.1 - Sonar test */
/* ripetizione 235.2 - Sonar test */

int test_func_235(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 236 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 236.0 - Sonar test */
/* ripetizione 236.1 - Sonar test */
/* ripetizione 236.2 - Sonar test */

int test_func_236(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

void dup_block_48_0(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 49;
 int y = 50;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_48_1(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 50;
 int y = 51;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_48_2(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 51;
 int y = 52;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

/* ===== COMMENT BLOCK 237 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 237.0 - Sonar test */
/* ripetizione 237.1 - Sonar test */
/* ripetizione 237.2 - Sonar test */

int test_func_237(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 238 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 238.0 - Sonar test */
/* ripetizione 238.1 - Sonar test */
/* ripetizione 238.2 - Sonar test */

int test_func_238(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 239 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 239.0 - Sonar test */
/* ripetizione 239.1 - Sonar test */
/* ripetizione 239.2 - Sonar test */

int test_func_239(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 240 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 240.0 - Sonar test */
/* ripetizione 240.1 - Sonar test */
/* ripetizione 240.2 - Sonar test */

int test_func_240(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 241 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 241.0 - Sonar test */
/* ripetizione 241.1 - Sonar test */
/* ripetizione 241.2 - Sonar test */

int test_func_241(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

void dup_block_49_0(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 50;
 int y = 51;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_49_1(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 51;
 int y = 52;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_49_2(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 52;
 int y = 53;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

/* ===== COMMENT BLOCK 242 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 242.0 - Sonar test */
/* ripetizione 242.1 - Sonar test */
/* ripetizione 242.2 - Sonar test */

int test_func_242(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 243 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 243.0 - Sonar test */
/* ripetizione 243.1 - Sonar test */
/* ripetizione 243.2 - Sonar test */

int test_func_243(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

int switchy23(int v) {
 switch(v) {
 case 0: return 0;
 case 1: return 7;
 case 2: return 14;
 case 3: return 21;
 case 4: return 28;
 case 5: return 35;
 case 6: return 42;
 case 7: return 49;
 case 8: return 56;
 case 9: return 63;
 case 10: return 70;
 case 11: return 77;
 case 12: return 84;
 case 13: return 91;
 case 14: return 98;
 case 15: return 105;
 case 16: return 112;
 case 17: return 119;
 case 18: return 126;
 case 19: return 133;
 default: return -1;
 }
}

/* ===== COMMENT BLOCK 244 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 244.0 - Sonar test */
/* ripetizione 244.1 - Sonar test */
/* ripetizione 244.2 - Sonar test */

int test_func_244(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 245 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 245.0 - Sonar test */
/* ripetizione 245.1 - Sonar test */
/* ripetizione 245.2 - Sonar test */

int test_func_245(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 246 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 246.0 - Sonar test */
/* ripetizione 246.1 - Sonar test */
/* ripetizione 246.2 - Sonar test */

int test_func_246(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

void dup_block_50_0(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 51;
 int y = 52;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_50_1(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 52;
 int y = 53;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_50_2(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 53;
 int y = 54;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

/* ===== COMMENT BLOCK 247 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 247.0 - Sonar test */
/* ripetizione 247.1 - Sonar test */
/* ripetizione 247.2 - Sonar test */

int test_func_247(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 248 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 248.0 - Sonar test */
/* ripetizione 248.1 - Sonar test */
/* ripetizione 248.2 - Sonar test */

int test_func_248(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 249 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 249.0 - Sonar test */
/* ripetizione 249.1 - Sonar test */
/* ripetizione 249.2 - Sonar test */

int test_func_249(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 250 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 250.0 - Sonar test */
/* ripetizione 250.1 - Sonar test */
/* ripetizione 250.2 - Sonar test */

int test_func_250(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 251 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 251.0 - Sonar test */
/* ripetizione 251.1 - Sonar test */
/* ripetizione 251.2 - Sonar test */

int test_func_251(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

void dup_block_51_0(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 52;
 int y = 53;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_51_1(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 53;
 int y = 54;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_51_2(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 54;
 int y = 55;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

/* ===== COMMENT BLOCK 252 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 252.0 - Sonar test */
/* ripetizione 252.1 - Sonar test */
/* ripetizione 252.2 - Sonar test */

int test_func_252(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 253 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 253.0 - Sonar test */
/* ripetizione 253.1 - Sonar test */
/* ripetizione 253.2 - Sonar test */

int test_func_253(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 254 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 254.0 - Sonar test */
/* ripetizione 254.1 - Sonar test */
/* ripetizione 254.2 - Sonar test */

int test_func_254(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

int switchy24(int v) {
 switch(v) {
 case 0: return 0;
 case 1: return 7;
 case 2: return 14;
 case 3: return 21;
 case 4: return 28;
 case 5: return 35;
 case 6: return 42;
 case 7: return 49;
 case 8: return 56;
 case 9: return 63;
 case 10: return 70;
 case 11: return 77;
 case 12: return 84;
 case 13: return 91;
 case 14: return 98;
 case 15: return 105;
 case 16: return 112;
 case 17: return 119;
 case 18: return 126;
 case 19: return 133;
 default: return -1;
 }
}

/* ===== COMMENT BLOCK 255 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 255.0 - Sonar test */
/* ripetizione 255.1 - Sonar test */
/* ripetizione 255.2 - Sonar test */

int test_func_255(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 256 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 256.0 - Sonar test */
/* ripetizione 256.1 - Sonar test */
/* ripetizione 256.2 - Sonar test */

int test_func_256(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

void dup_block_52_0(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 53;
 int y = 54;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_52_1(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 54;
 int y = 55;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_52_2(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 55;
 int y = 56;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

/* ===== COMMENT BLOCK 257 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 257.0 - Sonar test */
/* ripetizione 257.1 - Sonar test */
/* ripetizione 257.2 - Sonar test */

int test_func_257(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 258 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 258.0 - Sonar test */
/* ripetizione 258.1 - Sonar test */
/* ripetizione 258.2 - Sonar test */

int test_func_258(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 259 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 259.0 - Sonar test */
/* ripetizione 259.1 - Sonar test */
/* ripetizione 259.2 - Sonar test */

int test_func_259(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 260 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 260.0 - Sonar test */
/* ripetizione 260.1 - Sonar test */
/* ripetizione 260.2 - Sonar test */

int test_func_260(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 261 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 261.0 - Sonar test */
/* ripetizione 261.1 - Sonar test */
/* ripetizione 261.2 - Sonar test */

int test_func_261(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

void dup_block_53_0(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 54;
 int y = 55;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_53_1(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 55;
 int y = 56;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_53_2(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 56;
 int y = 57;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

/* ===== COMMENT BLOCK 262 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 262.0 - Sonar test */
/* ripetizione 262.1 - Sonar test */
/* ripetizione 262.2 - Sonar test */

int test_func_262(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 263 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 263.0 - Sonar test */
/* ripetizione 263.1 - Sonar test */
/* ripetizione 263.2 - Sonar test */

int test_func_263(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 264 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 264.0 - Sonar test */
/* ripetizione 264.1 - Sonar test */
/* ripetizione 264.2 - Sonar test */

int test_func_264(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 265 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 265.0 - Sonar test */
/* ripetizione 265.1 - Sonar test */
/* ripetizione 265.2 - Sonar test */

int test_func_265(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

int switchy25(int v) {
 switch(v) {
 case 0: return 0;
 case 1: return 7;
 case 2: return 14;
 case 3: return 21;
 case 4: return 28;
 case 5: return 35;
 case 6: return 42;
 case 7: return 49;
 case 8: return 56;
 case 9: return 63;
 case 10: return 70;
 case 11: return 77;
 case 12: return 84;
 case 13: return 91;
 case 14: return 98;
 case 15: return 105;
 case 16: return 112;
 case 17: return 119;
 case 18: return 126;
 case 19: return 133;
 default: return -1;
 }
}

/* ===== COMMENT BLOCK 266 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 266.0 - Sonar test */
/* ripetizione 266.1 - Sonar test */
/* ripetizione 266.2 - Sonar test */

int test_func_266(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

void dup_block_54_0(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 55;
 int y = 56;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_54_1(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 56;
 int y = 57;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_54_2(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 57;
 int y = 58;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

/* ===== COMMENT BLOCK 267 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 267.0 - Sonar test */
/* ripetizione 267.1 - Sonar test */
/* ripetizione 267.2 - Sonar test */

int test_func_267(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 268 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 268.0 - Sonar test */
/* ripetizione 268.1 - Sonar test */
/* ripetizione 268.2 - Sonar test */

int test_func_268(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 269 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 269.0 - Sonar test */
/* ripetizione 269.1 - Sonar test */
/* ripetizione 269.2 - Sonar test */

int test_func_269(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 270 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 270.0 - Sonar test */
/* ripetizione 270.1 - Sonar test */
/* ripetizione 270.2 - Sonar test */

int test_func_270(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 271 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 271.0 - Sonar test */
/* ripetizione 271.1 - Sonar test */
/* ripetizione 271.2 - Sonar test */

int test_func_271(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

void dup_block_55_0(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 56;
 int y = 57;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_55_1(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 57;
 int y = 58;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_55_2(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 58;
 int y = 59;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

/* ===== COMMENT BLOCK 272 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 272.0 - Sonar test */
/* ripetizione 272.1 - Sonar test */
/* ripetizione 272.2 - Sonar test */

int test_func_272(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 273 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 273.0 - Sonar test */
/* ripetizione 273.1 - Sonar test */
/* ripetizione 273.2 - Sonar test */

int test_func_273(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 274 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 274.0 - Sonar test */
/* ripetizione 274.1 - Sonar test */
/* ripetizione 274.2 - Sonar test */

int test_func_274(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 275 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 275.0 - Sonar test */
/* ripetizione 275.1 - Sonar test */
/* ripetizione 275.2 - Sonar test */

int test_func_275(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 276 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 276.0 - Sonar test */
/* ripetizione 276.1 - Sonar test */
/* ripetizione 276.2 - Sonar test */

int test_func_276(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

void dup_block_56_0(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 57;
 int y = 58;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_56_1(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 58;
 int y = 59;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_56_2(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 59;
 int y = 60;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

int switchy26(int v) {
 switch(v) {
 case 0: return 0;
 case 1: return 7;
 case 2: return 14;
 case 3: return 21;
 case 4: return 28;
 case 5: return 35;
 case 6: return 42;
 case 7: return 49;
 case 8: return 56;
 case 9: return 63;
 case 10: return 70;
 case 11: return 77;
 case 12: return 84;
 case 13: return 91;
 case 14: return 98;
 case 15: return 105;
 case 16: return 112;
 case 17: return 119;
 case 18: return 126;
 case 19: return 133;
 default: return -1;
 }
}

/* ===== COMMENT BLOCK 277 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 277.0 - Sonar test */
/* ripetizione 277.1 - Sonar test */
/* ripetizione 277.2 - Sonar test */

int test_func_277(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 278 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 278.0 - Sonar test */
/* ripetizione 278.1 - Sonar test */
/* ripetizione 278.2 - Sonar test */

int test_func_278(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 279 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 279.0 - Sonar test */
/* ripetizione 279.1 - Sonar test */
/* ripetizione 279.2 - Sonar test */

int test_func_279(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 280 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 280.0 - Sonar test */
/* ripetizione 280.1 - Sonar test */
/* ripetizione 280.2 - Sonar test */

int test_func_280(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 281 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 281.0 - Sonar test */
/* ripetizione 281.1 - Sonar test */
/* ripetizione 281.2 - Sonar test */

int test_func_281(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

void dup_block_57_0(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 58;
 int y = 59;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_57_1(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 59;
 int y = 60;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_57_2(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 60;
 int y = 61;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

/* ===== COMMENT BLOCK 282 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 282.0 - Sonar test */
/* ripetizione 282.1 - Sonar test */
/* ripetizione 282.2 - Sonar test */

int test_func_282(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 283 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 283.0 - Sonar test */
/* ripetizione 283.1 - Sonar test */
/* ripetizione 283.2 - Sonar test */

int test_func_283(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 284 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 284.0 - Sonar test */
/* ripetizione 284.1 - Sonar test */
/* ripetizione 284.2 - Sonar test */

int test_func_284(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 285 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 285.0 - Sonar test */
/* ripetizione 285.1 - Sonar test */
/* ripetizione 285.2 - Sonar test */

int test_func_285(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 286 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 286.0 - Sonar test */
/* ripetizione 286.1 - Sonar test */
/* ripetizione 286.2 - Sonar test */

int test_func_286(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

void dup_block_58_0(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 59;
 int y = 60;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_58_1(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 60;
 int y = 61;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_58_2(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 61;
 int y = 62;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

/* ===== COMMENT BLOCK 287 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 287.0 - Sonar test */
/* ripetizione 287.1 - Sonar test */
/* ripetizione 287.2 - Sonar test */

int test_func_287(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

int switchy27(int v) {
 switch(v) {
 case 0: return 0;
 case 1: return 7;
 case 2: return 14;
 case 3: return 21;
 case 4: return 28;
 case 5: return 35;
 case 6: return 42;
 case 7: return 49;
 case 8: return 56;
 case 9: return 63;
 case 10: return 70;
 case 11: return 77;
 case 12: return 84;
 case 13: return 91;
 case 14: return 98;
 case 15: return 105;
 case 16: return 112;
 case 17: return 119;
 case 18: return 126;
 case 19: return 133;
 default: return -1;
 }
}

/* ===== COMMENT BLOCK 288 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 288.0 - Sonar test */
/* ripetizione 288.1 - Sonar test */
/* ripetizione 288.2 - Sonar test */

int test_func_288(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 289 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 289.0 - Sonar test */
/* ripetizione 289.1 - Sonar test */
/* ripetizione 289.2 - Sonar test */

int test_func_289(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 290 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 290.0 - Sonar test */
/* ripetizione 290.1 - Sonar test */
/* ripetizione 290.2 - Sonar test */

int test_func_290(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 291 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 291.0 - Sonar test */
/* ripetizione 291.1 - Sonar test */
/* ripetizione 291.2 - Sonar test */

int test_func_291(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

void dup_block_59_0(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 60;
 int y = 61;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_59_1(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 61;
 int y = 62;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_59_2(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 62;
 int y = 63;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

/* ===== COMMENT BLOCK 292 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 292.0 - Sonar test */
/* ripetizione 292.1 - Sonar test */
/* ripetizione 292.2 - Sonar test */

int test_func_292(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 293 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 293.0 - Sonar test */
/* ripetizione 293.1 - Sonar test */
/* ripetizione 293.2 - Sonar test */

int test_func_293(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 294 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 294.0 - Sonar test */
/* ripetizione 294.1 - Sonar test */
/* ripetizione 294.2 - Sonar test */

int test_func_294(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 295 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 295.0 - Sonar test */
/* ripetizione 295.1 - Sonar test */
/* ripetizione 295.2 - Sonar test */

int test_func_295(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 296 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 296.0 - Sonar test */
/* ripetizione 296.1 - Sonar test */
/* ripetizione 296.2 - Sonar test */

int test_func_296(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

void dup_block_60_0(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 61;
 int y = 62;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_60_1(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 62;
 int y = 63;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_60_2(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 63;
 int y = 64;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

/* ===== COMMENT BLOCK 297 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 297.0 - Sonar test */
/* ripetizione 297.1 - Sonar test */
/* ripetizione 297.2 - Sonar test */

int test_func_297(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 298 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 298.0 - Sonar test */
/* ripetizione 298.1 - Sonar test */
/* ripetizione 298.2 - Sonar test */

int test_func_298(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

int switchy28(int v) {
 switch(v) {
 case 0: return 0;
 case 1: return 7;
 case 2: return 14;
 case 3: return 21;
 case 4: return 28;
 case 5: return 35;
 case 6: return 42;
 case 7: return 49;
 case 8: return 56;
 case 9: return 63;
 case 10: return 70;
 case 11: return 77;
 case 12: return 84;
 case 13: return 91;
 case 14: return 98;
 case 15: return 105;
 case 16: return 112;
 case 17: return 119;
 case 18: return 126;
 case 19: return 133;
 default: return -1;
 }
}

/* ===== COMMENT BLOCK 299 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 299.0 - Sonar test */
/* ripetizione 299.1 - Sonar test */
/* ripetizione 299.2 - Sonar test */

int test_func_299(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 300 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 300.0 - Sonar test */
/* ripetizione 300.1 - Sonar test */
/* ripetizione 300.2 - Sonar test */

int test_func_300(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 301 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 301.0 - Sonar test */
/* ripetizione 301.1 - Sonar test */
/* ripetizione 301.2 - Sonar test */

int test_func_301(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

void dup_block_61_0(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 62;
 int y = 63;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_61_1(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 63;
 int y = 64;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_61_2(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 64;
 int y = 65;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

/* ===== COMMENT BLOCK 302 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 302.0 - Sonar test */
/* ripetizione 302.1 - Sonar test */
/* ripetizione 302.2 - Sonar test */

int test_func_302(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 303 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 303.0 - Sonar test */
/* ripetizione 303.1 - Sonar test */
/* ripetizione 303.2 - Sonar test */

int test_func_303(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 304 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 304.0 - Sonar test */
/* ripetizione 304.1 - Sonar test */
/* ripetizione 304.2 - Sonar test */

int test_func_304(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 305 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 305.0 - Sonar test */
/* ripetizione 305.1 - Sonar test */
/* ripetizione 305.2 - Sonar test */

int test_func_305(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 306 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 306.0 - Sonar test */
/* ripetizione 306.1 - Sonar test */
/* ripetizione 306.2 - Sonar test */

int test_func_306(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

void dup_block_62_0(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 63;
 int y = 64;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_62_1(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 64;
 int y = 65;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_62_2(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 65;
 int y = 66;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

/* ===== COMMENT BLOCK 307 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 307.0 - Sonar test */
/* ripetizione 307.1 - Sonar test */
/* ripetizione 307.2 - Sonar test */

int test_func_307(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 308 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 308.0 - Sonar test */
/* ripetizione 308.1 - Sonar test */
/* ripetizione 308.2 - Sonar test */

int test_func_308(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 309 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 309.0 - Sonar test */
/* ripetizione 309.1 - Sonar test */
/* ripetizione 309.2 - Sonar test */

int test_func_309(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

int switchy29(int v) {
 switch(v) {
 case 0: return 0;
 case 1: return 7;
 case 2: return 14;
 case 3: return 21;
 case 4: return 28;
 case 5: return 35;
 case 6: return 42;
 case 7: return 49;
 case 8: return 56;
 case 9: return 63;
 case 10: return 70;
 case 11: return 77;
 case 12: return 84;
 case 13: return 91;
 case 14: return 98;
 case 15: return 105;
 case 16: return 112;
 case 17: return 119;
 case 18: return 126;
 case 19: return 133;
 default: return -1;
 }
}

/* ===== COMMENT BLOCK 310 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 310.0 - Sonar test */
/* ripetizione 310.1 - Sonar test */
/* ripetizione 310.2 - Sonar test */

int test_func_310(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 311 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 311.0 - Sonar test */
/* ripetizione 311.1 - Sonar test */
/* ripetizione 311.2 - Sonar test */

int test_func_311(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

void dup_block_63_0(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 64;
 int y = 65;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_63_1(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 65;
 int y = 66;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_63_2(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 66;
 int y = 67;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

/* ===== COMMENT BLOCK 312 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 312.0 - Sonar test */
/* ripetizione 312.1 - Sonar test */
/* ripetizione 312.2 - Sonar test */

int test_func_312(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 313 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 313.0 - Sonar test */
/* ripetizione 313.1 - Sonar test */
/* ripetizione 313.2 - Sonar test */

int test_func_313(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 314 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 314.0 - Sonar test */
/* ripetizione 314.1 - Sonar test */
/* ripetizione 314.2 - Sonar test */

int test_func_314(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 315 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 315.0 - Sonar test */
/* ripetizione 315.1 - Sonar test */
/* ripetizione 315.2 - Sonar test */

int test_func_315(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 316 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 316.0 - Sonar test */
/* ripetizione 316.1 - Sonar test */
/* ripetizione 316.2 - Sonar test */

int test_func_316(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

void dup_block_64_0(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 65;
 int y = 66;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_64_1(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 66;
 int y = 67;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_64_2(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 67;
 int y = 68;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

/* ===== COMMENT BLOCK 317 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 317.0 - Sonar test */
/* ripetizione 317.1 - Sonar test */
/* ripetizione 317.2 - Sonar test */

int test_func_317(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 318 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 318.0 - Sonar test */
/* ripetizione 318.1 - Sonar test */
/* ripetizione 318.2 - Sonar test */

int test_func_318(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 319 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 319.0 - Sonar test */
/* ripetizione 319.1 - Sonar test */
/* ripetizione 319.2 - Sonar test */

int test_func_319(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 320 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 320.0 - Sonar test */
/* ripetizione 320.1 - Sonar test */
/* ripetizione 320.2 - Sonar test */

int test_func_320(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

int switchy30(int v) {
 switch(v) {
 case 0: return 0;
 case 1: return 7;
 case 2: return 14;
 case 3: return 21;
 case 4: return 28;
 case 5: return 35;
 case 6: return 42;
 case 7: return 49;
 case 8: return 56;
 case 9: return 63;
 case 10: return 70;
 case 11: return 77;
 case 12: return 84;
 case 13: return 91;
 case 14: return 98;
 case 15: return 105;
 case 16: return 112;
 case 17: return 119;
 case 18: return 126;
 case 19: return 133;
 default: return -1;
 }
}

/* ===== COMMENT BLOCK 321 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 321.0 - Sonar test */
/* ripetizione 321.1 - Sonar test */
/* ripetizione 321.2 - Sonar test */

int test_func_321(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

void dup_block_65_0(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 66;
 int y = 67;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_65_1(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 67;
 int y = 68;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_65_2(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 68;
 int y = 69;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

/* ===== COMMENT BLOCK 322 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 322.0 - Sonar test */
/* ripetizione 322.1 - Sonar test */
/* ripetizione 322.2 - Sonar test */

int test_func_322(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 323 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 323.0 - Sonar test */
/* ripetizione 323.1 - Sonar test */
/* ripetizione 323.2 - Sonar test */

int test_func_323(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 324 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 324.0 - Sonar test */
/* ripetizione 324.1 - Sonar test */
/* ripetizione 324.2 - Sonar test */

int test_func_324(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 325 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 325.0 - Sonar test */
/* ripetizione 325.1 - Sonar test */
/* ripetizione 325.2 - Sonar test */

int test_func_325(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 326 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 326.0 - Sonar test */
/* ripetizione 326.1 - Sonar test */
/* ripetizione 326.2 - Sonar test */

int test_func_326(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

void dup_block_66_0(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 67;
 int y = 68;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_66_1(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 68;
 int y = 69;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_66_2(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 69;
 int y = 70;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

/* ===== COMMENT BLOCK 327 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 327.0 - Sonar test */
/* ripetizione 327.1 - Sonar test */
/* ripetizione 327.2 - Sonar test */

int test_func_327(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 328 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 328.0 - Sonar test */
/* ripetizione 328.1 - Sonar test */
/* ripetizione 328.2 - Sonar test */

int test_func_328(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 329 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 329.0 - Sonar test */
/* ripetizione 329.1 - Sonar test */
/* ripetizione 329.2 - Sonar test */

int test_func_329(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 330 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 330.0 - Sonar test */
/* ripetizione 330.1 - Sonar test */
/* ripetizione 330.2 - Sonar test */

int test_func_330(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 331 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 331.0 - Sonar test */
/* ripetizione 331.1 - Sonar test */
/* ripetizione 331.2 - Sonar test */

int test_func_331(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

void dup_block_67_0(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 68;
 int y = 69;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_67_1(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 69;
 int y = 70;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_67_2(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 70;
 int y = 71;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

int switchy31(int v) {
 switch(v) {
 case 0: return 0;
 case 1: return 7;
 case 2: return 14;
 case 3: return 21;
 case 4: return 28;
 case 5: return 35;
 case 6: return 42;
 case 7: return 49;
 case 8: return 56;
 case 9: return 63;
 case 10: return 70;
 case 11: return 77;
 case 12: return 84;
 case 13: return 91;
 case 14: return 98;
 case 15: return 105;
 case 16: return 112;
 case 17: return 119;
 case 18: return 126;
 case 19: return 133;
 default: return -1;
 }
}

/* ===== COMMENT BLOCK 332 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 332.0 - Sonar test */
/* ripetizione 332.1 - Sonar test */
/* ripetizione 332.2 - Sonar test */

int test_func_332(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 333 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 333.0 - Sonar test */
/* ripetizione 333.1 - Sonar test */
/* ripetizione 333.2 - Sonar test */

int test_func_333(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 334 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 334.0 - Sonar test */
/* ripetizione 334.1 - Sonar test */
/* ripetizione 334.2 - Sonar test */

int test_func_334(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 335 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 335.0 - Sonar test */
/* ripetizione 335.1 - Sonar test */
/* ripetizione 335.2 - Sonar test */

int test_func_335(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 336 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 336.0 - Sonar test */
/* ripetizione 336.1 - Sonar test */
/* ripetizione 336.2 - Sonar test */

int test_func_336(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

void dup_block_68_0(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 69;
 int y = 70;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_68_1(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 70;
 int y = 71;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_68_2(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 71;
 int y = 72;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

/* ===== COMMENT BLOCK 337 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 337.0 - Sonar test */
/* ripetizione 337.1 - Sonar test */
/* ripetizione 337.2 - Sonar test */

int test_func_337(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 338 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 338.0 - Sonar test */
/* ripetizione 338.1 - Sonar test */
/* ripetizione 338.2 - Sonar test */

int test_func_338(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 339 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 339.0 - Sonar test */
/* ripetizione 339.1 - Sonar test */
/* ripetizione 339.2 - Sonar test */

int test_func_339(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 340 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 340.0 - Sonar test */
/* ripetizione 340.1 - Sonar test */
/* ripetizione 340.2 - Sonar test */

int test_func_340(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 341 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 341.0 - Sonar test */
/* ripetizione 341.1 - Sonar test */
/* ripetizione 341.2 - Sonar test */

int test_func_341(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

void dup_block_69_0(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 70;
 int y = 71;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_69_1(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 71;
 int y = 72;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_69_2(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 72;
 int y = 73;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

/* ===== COMMENT BLOCK 342 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 342.0 - Sonar test */
/* ripetizione 342.1 - Sonar test */
/* ripetizione 342.2 - Sonar test */

int test_func_342(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

int switchy32(int v) {
 switch(v) {
 case 0: return 0;
 case 1: return 7;
 case 2: return 14;
 case 3: return 21;
 case 4: return 28;
 case 5: return 35;
 case 6: return 42;
 case 7: return 49;
 case 8: return 56;
 case 9: return 63;
 case 10: return 70;
 case 11: return 77;
 case 12: return 84;
 case 13: return 91;
 case 14: return 98;
 case 15: return 105;
 case 16: return 112;
 case 17: return 119;
 case 18: return 126;
 case 19: return 133;
 default: return -1;
 }
}

/* ===== COMMENT BLOCK 343 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 343.0 - Sonar test */
/* ripetizione 343.1 - Sonar test */
/* ripetizione 343.2 - Sonar test */

int test_func_343(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 344 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 344.0 - Sonar test */
/* ripetizione 344.1 - Sonar test */
/* ripetizione 344.2 - Sonar test */

int test_func_344(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 345 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 345.0 - Sonar test */
/* ripetizione 345.1 - Sonar test */
/* ripetizione 345.2 - Sonar test */

int test_func_345(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 346 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 346.0 - Sonar test */
/* ripetizione 346.1 - Sonar test */
/* ripetizione 346.2 - Sonar test */

int test_func_346(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

void dup_block_70_0(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 71;
 int y = 72;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_70_1(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 72;
 int y = 73;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_70_2(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 73;
 int y = 74;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

/* ===== COMMENT BLOCK 347 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 347.0 - Sonar test */
/* ripetizione 347.1 - Sonar test */
/* ripetizione 347.2 - Sonar test */

int test_func_347(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 348 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 348.0 - Sonar test */
/* ripetizione 348.1 - Sonar test */
/* ripetizione 348.2 - Sonar test */

int test_func_348(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 349 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 349.0 - Sonar test */
/* ripetizione 349.1 - Sonar test */
/* ripetizione 349.2 - Sonar test */

int test_func_349(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 350 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 350.0 - Sonar test */
/* ripetizione 350.1 - Sonar test */
/* ripetizione 350.2 - Sonar test */

int test_func_350(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 351 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 351.0 - Sonar test */
/* ripetizione 351.1 - Sonar test */
/* ripetizione 351.2 - Sonar test */

int test_func_351(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

void dup_block_71_0(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 72;
 int y = 73;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_71_1(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 73;
 int y = 74;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_71_2(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 74;
 int y = 75;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

/* ===== COMMENT BLOCK 352 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 352.0 - Sonar test */
/* ripetizione 352.1 - Sonar test */
/* ripetizione 352.2 - Sonar test */

int test_func_352(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 353 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 353.0 - Sonar test */
/* ripetizione 353.1 - Sonar test */
/* ripetizione 353.2 - Sonar test */

int test_func_353(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

int switchy33(int v) {
 switch(v) {
 case 0: return 0;
 case 1: return 7;
 case 2: return 14;
 case 3: return 21;
 case 4: return 28;
 case 5: return 35;
 case 6: return 42;
 case 7: return 49;
 case 8: return 56;
 case 9: return 63;
 case 10: return 70;
 case 11: return 77;
 case 12: return 84;
 case 13: return 91;
 case 14: return 98;
 case 15: return 105;
 case 16: return 112;
 case 17: return 119;
 case 18: return 126;
 case 19: return 133;
 default: return -1;
 }
}

/* ===== COMMENT BLOCK 354 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 354.0 - Sonar test */
/* ripetizione 354.1 - Sonar test */
/* ripetizione 354.2 - Sonar test */

int test_func_354(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 355 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 355.0 - Sonar test */
/* ripetizione 355.1 - Sonar test */
/* ripetizione 355.2 - Sonar test */

int test_func_355(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 356 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 356.0 - Sonar test */
/* ripetizione 356.1 - Sonar test */
/* ripetizione 356.2 - Sonar test */

int test_func_356(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

void dup_block_72_0(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 73;
 int y = 74;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_72_1(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 74;
 int y = 75;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_72_2(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 75;
 int y = 76;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

/* ===== COMMENT BLOCK 357 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 357.0 - Sonar test */
/* ripetizione 357.1 - Sonar test */
/* ripetizione 357.2 - Sonar test */

int test_func_357(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 358 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 358.0 - Sonar test */
/* ripetizione 358.1 - Sonar test */
/* ripetizione 358.2 - Sonar test */

int test_func_358(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 359 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 359.0 - Sonar test */
/* ripetizione 359.1 - Sonar test */
/* ripetizione 359.2 - Sonar test */

int test_func_359(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 360 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 360.0 - Sonar test */
/* ripetizione 360.1 - Sonar test */
/* ripetizione 360.2 - Sonar test */

int test_func_360(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 361 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 361.0 - Sonar test */
/* ripetizione 361.1 - Sonar test */
/* ripetizione 361.2 - Sonar test */

int test_func_361(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

void dup_block_73_0(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 74;
 int y = 75;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_73_1(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 75;
 int y = 76;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_73_2(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 76;
 int y = 77;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

/* ===== COMMENT BLOCK 362 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 362.0 - Sonar test */
/* ripetizione 362.1 - Sonar test */
/* ripetizione 362.2 - Sonar test */

int test_func_362(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 363 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 363.0 - Sonar test */
/* ripetizione 363.1 - Sonar test */
/* ripetizione 363.2 - Sonar test */

int test_func_363(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 364 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 364.0 - Sonar test */
/* ripetizione 364.1 - Sonar test */
/* ripetizione 364.2 - Sonar test */

int test_func_364(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

int switchy34(int v) {
 switch(v) {
 case 0: return 0;
 case 1: return 7;
 case 2: return 14;
 case 3: return 21;
 case 4: return 28;
 case 5: return 35;
 case 6: return 42;
 case 7: return 49;
 case 8: return 56;
 case 9: return 63;
 case 10: return 70;
 case 11: return 77;
 case 12: return 84;
 case 13: return 91;
 case 14: return 98;
 case 15: return 105;
 case 16: return 112;
 case 17: return 119;
 case 18: return 126;
 case 19: return 133;
 default: return -1;
 }
}

/* ===== COMMENT BLOCK 365 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 365.0 - Sonar test */
/* ripetizione 365.1 - Sonar test */
/* ripetizione 365.2 - Sonar test */

int test_func_365(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 366 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 366.0 - Sonar test */
/* ripetizione 366.1 - Sonar test */
/* ripetizione 366.2 - Sonar test */

int test_func_366(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

void dup_block_74_0(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 75;
 int y = 76;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_74_1(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 76;
 int y = 77;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_74_2(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 77;
 int y = 78;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

/* ===== COMMENT BLOCK 367 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 367.0 - Sonar test */
/* ripetizione 367.1 - Sonar test */
/* ripetizione 367.2 - Sonar test */

int test_func_367(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 368 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 368.0 - Sonar test */
/* ripetizione 368.1 - Sonar test */
/* ripetizione 368.2 - Sonar test */

int test_func_368(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 369 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 369.0 - Sonar test */
/* ripetizione 369.1 - Sonar test */
/* ripetizione 369.2 - Sonar test */

int test_func_369(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 370 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 370.0 - Sonar test */
/* ripetizione 370.1 - Sonar test */
/* ripetizione 370.2 - Sonar test */

int test_func_370(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 371 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 371.0 - Sonar test */
/* ripetizione 371.1 - Sonar test */
/* ripetizione 371.2 - Sonar test */

int test_func_371(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

void dup_block_75_0(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 76;
 int y = 77;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_75_1(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 77;
 int y = 78;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_75_2(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 78;
 int y = 79;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

/* ===== COMMENT BLOCK 372 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 372.0 - Sonar test */
/* ripetizione 372.1 - Sonar test */
/* ripetizione 372.2 - Sonar test */

int test_func_372(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 373 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 373.0 - Sonar test */
/* ripetizione 373.1 - Sonar test */
/* ripetizione 373.2 - Sonar test */

int test_func_373(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 374 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 374.0 - Sonar test */
/* ripetizione 374.1 - Sonar test */
/* ripetizione 374.2 - Sonar test */

int test_func_374(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 375 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 375.0 - Sonar test */
/* ripetizione 375.1 - Sonar test */
/* ripetizione 375.2 - Sonar test */

int test_func_375(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

int switchy35(int v) {
 switch(v) {
 case 0: return 0;
 case 1: return 7;
 case 2: return 14;
 case 3: return 21;
 case 4: return 28;
 case 5: return 35;
 case 6: return 42;
 case 7: return 49;
 case 8: return 56;
 case 9: return 63;
 case 10: return 70;
 case 11: return 77;
 case 12: return 84;
 case 13: return 91;
 case 14: return 98;
 case 15: return 105;
 case 16: return 112;
 case 17: return 119;
 case 18: return 126;
 case 19: return 133;
 default: return -1;
 }
}

/* ===== COMMENT BLOCK 376 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 376.0 - Sonar test */
/* ripetizione 376.1 - Sonar test */
/* ripetizione 376.2 - Sonar test */

int test_func_376(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

void dup_block_76_0(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 77;
 int y = 78;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_76_1(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 78;
 int y = 79;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_76_2(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 79;
 int y = 80;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

/* ===== COMMENT BLOCK 377 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 377.0 - Sonar test */
/* ripetizione 377.1 - Sonar test */
/* ripetizione 377.2 - Sonar test */

int test_func_377(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 378 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 378.0 - Sonar test */
/* ripetizione 378.1 - Sonar test */
/* ripetizione 378.2 - Sonar test */

int test_func_378(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 379 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 379.0 - Sonar test */
/* ripetizione 379.1 - Sonar test */
/* ripetizione 379.2 - Sonar test */

int test_func_379(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 380 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 380.0 - Sonar test */
/* ripetizione 380.1 - Sonar test */
/* ripetizione 380.2 - Sonar test */

int test_func_380(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 381 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 381.0 - Sonar test */
/* ripetizione 381.1 - Sonar test */
/* ripetizione 381.2 - Sonar test */

int test_func_381(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

void dup_block_77_0(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 78;
 int y = 79;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_77_1(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 79;
 int y = 80;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_77_2(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 80;
 int y = 81;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

/* ===== COMMENT BLOCK 382 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 382.0 - Sonar test */
/* ripetizione 382.1 - Sonar test */
/* ripetizione 382.2 - Sonar test */

int test_func_382(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 383 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 383.0 - Sonar test */
/* ripetizione 383.1 - Sonar test */
/* ripetizione 383.2 - Sonar test */

int test_func_383(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 384 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 384.0 - Sonar test */
/* ripetizione 384.1 - Sonar test */
/* ripetizione 384.2 - Sonar test */

int test_func_384(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 385 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 385.0 - Sonar test */
/* ripetizione 385.1 - Sonar test */
/* ripetizione 385.2 - Sonar test */

int test_func_385(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 386 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 386.0 - Sonar test */
/* ripetizione 386.1 - Sonar test */
/* ripetizione 386.2 - Sonar test */

int test_func_386(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

void dup_block_78_0(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 79;
 int y = 80;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_78_1(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 80;
 int y = 81;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_78_2(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 81;
 int y = 82;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

int switchy36(int v) {
 switch(v) {
 case 0: return 0;
 case 1: return 7;
 case 2: return 14;
 case 3: return 21;
 case 4: return 28;
 case 5: return 35;
 case 6: return 42;
 case 7: return 49;
 case 8: return 56;
 case 9: return 63;
 case 10: return 70;
 case 11: return 77;
 case 12: return 84;
 case 13: return 91;
 case 14: return 98;
 case 15: return 105;
 case 16: return 112;
 case 17: return 119;
 case 18: return 126;
 case 19: return 133;
 default: return -1;
 }
}

/* ===== COMMENT BLOCK 387 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 387.0 - Sonar test */
/* ripetizione 387.1 - Sonar test */
/* ripetizione 387.2 - Sonar test */

int test_func_387(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 388 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 388.0 - Sonar test */
/* ripetizione 388.1 - Sonar test */
/* ripetizione 388.2 - Sonar test */

int test_func_388(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 389 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 389.0 - Sonar test */
/* ripetizione 389.1 - Sonar test */
/* ripetizione 389.2 - Sonar test */

int test_func_389(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 390 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 390.0 - Sonar test */
/* ripetizione 390.1 - Sonar test */
/* ripetizione 390.2 - Sonar test */

int test_func_390(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 391 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 391.0 - Sonar test */
/* ripetizione 391.1 - Sonar test */
/* ripetizione 391.2 - Sonar test */

int test_func_391(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

void dup_block_79_0(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 80;
 int y = 81;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_79_1(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 81;
 int y = 82;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_79_2(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 82;
 int y = 83;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

/* ===== COMMENT BLOCK 392 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 392.0 - Sonar test */
/* ripetizione 392.1 - Sonar test */
/* ripetizione 392.2 - Sonar test */

int test_func_392(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 393 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 393.0 - Sonar test */
/* ripetizione 393.1 - Sonar test */
/* ripetizione 393.2 - Sonar test */

int test_func_393(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 394 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 394.0 - Sonar test */
/* ripetizione 394.1 - Sonar test */
/* ripetizione 394.2 - Sonar test */

int test_func_394(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 395 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 395.0 - Sonar test */
/* ripetizione 395.1 - Sonar test */
/* ripetizione 395.2 - Sonar test */

int test_func_395(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 396 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 396.0 - Sonar test */
/* ripetizione 396.1 - Sonar test */
/* ripetizione 396.2 - Sonar test */

int test_func_396(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

void dup_block_80_0(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 81;
 int y = 82;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_80_1(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 82;
 int y = 83;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_80_2(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 83;
 int y = 84;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

/* ===== COMMENT BLOCK 397 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 397.0 - Sonar test */
/* ripetizione 397.1 - Sonar test */
/* ripetizione 397.2 - Sonar test */

int test_func_397(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

int switchy37(int v) {
 switch(v) {
 case 0: return 0;
 case 1: return 7;
 case 2: return 14;
 case 3: return 21;
 case 4: return 28;
 case 5: return 35;
 case 6: return 42;
 case 7: return 49;
 case 8: return 56;
 case 9: return 63;
 case 10: return 70;
 case 11: return 77;
 case 12: return 84;
 case 13: return 91;
 case 14: return 98;
 case 15: return 105;
 case 16: return 112;
 case 17: return 119;
 case 18: return 126;
 case 19: return 133;
 default: return -1;
 }
}

/* ===== COMMENT BLOCK 398 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 398.0 - Sonar test */
/* ripetizione 398.1 - Sonar test */
/* ripetizione 398.2 - Sonar test */

int test_func_398(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 399 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 399.0 - Sonar test */
/* ripetizione 399.1 - Sonar test */
/* ripetizione 399.2 - Sonar test */

int test_func_399(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 400 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 400.0 - Sonar test */
/* ripetizione 400.1 - Sonar test */
/* ripetizione 400.2 - Sonar test */

int test_func_400(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 401 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 401.0 - Sonar test */
/* ripetizione 401.1 - Sonar test */
/* ripetizione 401.2 - Sonar test */

int test_func_401(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

void dup_block_81_0(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 82;
 int y = 83;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_81_1(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 83;
 int y = 84;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_81_2(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 84;
 int y = 85;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

/* ===== COMMENT BLOCK 402 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 402.0 - Sonar test */
/* ripetizione 402.1 - Sonar test */
/* ripetizione 402.2 - Sonar test */

int test_func_402(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 403 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 403.0 - Sonar test */
/* ripetizione 403.1 - Sonar test */
/* ripetizione 403.2 - Sonar test */

int test_func_403(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 404 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 404.0 - Sonar test */
/* ripetizione 404.1 - Sonar test */
/* ripetizione 404.2 - Sonar test */

int test_func_404(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 405 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 405.0 - Sonar test */
/* ripetizione 405.1 - Sonar test */
/* ripetizione 405.2 - Sonar test */

int test_func_405(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 406 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 406.0 - Sonar test */
/* ripetizione 406.1 - Sonar test */
/* ripetizione 406.2 - Sonar test */

int test_func_406(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

void dup_block_82_0(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 83;
 int y = 84;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_82_1(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 84;
 int y = 85;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_82_2(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 85;
 int y = 86;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

/* ===== COMMENT BLOCK 407 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 407.0 - Sonar test */
/* ripetizione 407.1 - Sonar test */
/* ripetizione 407.2 - Sonar test */

int test_func_407(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 408 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 408.0 - Sonar test */
/* ripetizione 408.1 - Sonar test */
/* ripetizione 408.2 - Sonar test */

int test_func_408(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

int switchy38(int v) {
 switch(v) {
 case 0: return 0;
 case 1: return 7;
 case 2: return 14;
 case 3: return 21;
 case 4: return 28;
 case 5: return 35;
 case 6: return 42;
 case 7: return 49;
 case 8: return 56;
 case 9: return 63;
 case 10: return 70;
 case 11: return 77;
 case 12: return 84;
 case 13: return 91;
 case 14: return 98;
 case 15: return 105;
 case 16: return 112;
 case 17: return 119;
 case 18: return 126;
 case 19: return 133;
 default: return -1;
 }
}

/* ===== COMMENT BLOCK 409 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 409.0 - Sonar test */
/* ripetizione 409.1 - Sonar test */
/* ripetizione 409.2 - Sonar test */

int test_func_409(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 410 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 410.0 - Sonar test */
/* ripetizione 410.1 - Sonar test */
/* ripetizione 410.2 - Sonar test */

int test_func_410(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 411 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 411.0 - Sonar test */
/* ripetizione 411.1 - Sonar test */
/* ripetizione 411.2 - Sonar test */

int test_func_411(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

void dup_block_83_0(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 84;
 int y = 85;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_83_1(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 85;
 int y = 86;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_83_2(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 86;
 int y = 87;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

/* ===== COMMENT BLOCK 412 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 412.0 - Sonar test */
/* ripetizione 412.1 - Sonar test */
/* ripetizione 412.2 - Sonar test */

int test_func_412(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 413 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 413.0 - Sonar test */
/* ripetizione 413.1 - Sonar test */
/* ripetizione 413.2 - Sonar test */

int test_func_413(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 414 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 414.0 - Sonar test */
/* ripetizione 414.1 - Sonar test */
/* ripetizione 414.2 - Sonar test */

int test_func_414(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 415 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 415.0 - Sonar test */
/* ripetizione 415.1 - Sonar test */
/* ripetizione 415.2 - Sonar test */

int test_func_415(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 416 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 416.0 - Sonar test */
/* ripetizione 416.1 - Sonar test */
/* ripetizione 416.2 - Sonar test */

int test_func_416(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

void dup_block_84_0(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 85;
 int y = 86;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_84_1(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 86;
 int y = 87;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_84_2(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 87;
 int y = 88;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

/* ===== COMMENT BLOCK 417 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 417.0 - Sonar test */
/* ripetizione 417.1 - Sonar test */
/* ripetizione 417.2 - Sonar test */

int test_func_417(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 418 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 418.0 - Sonar test */
/* ripetizione 418.1 - Sonar test */
/* ripetizione 418.2 - Sonar test */

int test_func_418(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 419 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 419.0 - Sonar test */
/* ripetizione 419.1 - Sonar test */
/* ripetizione 419.2 - Sonar test */

int test_func_419(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

int switchy39(int v) {
 switch(v) {
 case 0: return 0;
 case 1: return 7;
 case 2: return 14;
 case 3: return 21;
 case 4: return 28;
 case 5: return 35;
 case 6: return 42;
 case 7: return 49;
 case 8: return 56;
 case 9: return 63;
 case 10: return 70;
 case 11: return 77;
 case 12: return 84;
 case 13: return 91;
 case 14: return 98;
 case 15: return 105;
 case 16: return 112;
 case 17: return 119;
 case 18: return 126;
 case 19: return 133;
 default: return -1;
 }
}

/* ===== COMMENT BLOCK 420 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 420.0 - Sonar test */
/* ripetizione 420.1 - Sonar test */
/* ripetizione 420.2 - Sonar test */

int test_func_420(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 421 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 421.0 - Sonar test */
/* ripetizione 421.1 - Sonar test */
/* ripetizione 421.2 - Sonar test */

int test_func_421(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

void dup_block_85_0(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 86;
 int y = 87;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_85_1(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 87;
 int y = 88;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_85_2(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 88;
 int y = 89;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

/* ===== COMMENT BLOCK 422 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 422.0 - Sonar test */
/* ripetizione 422.1 - Sonar test */
/* ripetizione 422.2 - Sonar test */

int test_func_422(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 423 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 423.0 - Sonar test */
/* ripetizione 423.1 - Sonar test */
/* ripetizione 423.2 - Sonar test */

int test_func_423(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 424 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 424.0 - Sonar test */
/* ripetizione 424.1 - Sonar test */
/* ripetizione 424.2 - Sonar test */

int test_func_424(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 425 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 425.0 - Sonar test */
/* ripetizione 425.1 - Sonar test */
/* ripetizione 425.2 - Sonar test */

int test_func_425(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 426 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 426.0 - Sonar test */
/* ripetizione 426.1 - Sonar test */
/* ripetizione 426.2 - Sonar test */

int test_func_426(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

void dup_block_86_0(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 87;
 int y = 88;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_86_1(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 88;
 int y = 89;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_86_2(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 89;
 int y = 90;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

/* ===== COMMENT BLOCK 427 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 427.0 - Sonar test */
/* ripetizione 427.1 - Sonar test */
/* ripetizione 427.2 - Sonar test */

int test_func_427(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 428 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 428.0 - Sonar test */
/* ripetizione 428.1 - Sonar test */
/* ripetizione 428.2 - Sonar test */

int test_func_428(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 429 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 429.0 - Sonar test */
/* ripetizione 429.1 - Sonar test */
/* ripetizione 429.2 - Sonar test */

int test_func_429(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 430 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 430.0 - Sonar test */
/* ripetizione 430.1 - Sonar test */
/* ripetizione 430.2 - Sonar test */

int test_func_430(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

int switchy40(int v) {
 switch(v) {
 case 0: return 0;
 case 1: return 7;
 case 2: return 14;
 case 3: return 21;
 case 4: return 28;
 case 5: return 35;
 case 6: return 42;
 case 7: return 49;
 case 8: return 56;
 case 9: return 63;
 case 10: return 70;
 case 11: return 77;
 case 12: return 84;
 case 13: return 91;
 case 14: return 98;
 case 15: return 105;
 case 16: return 112;
 case 17: return 119;
 case 18: return 126;
 case 19: return 133;
 default: return -1;
 }
}

/* ===== COMMENT BLOCK 431 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 431.0 - Sonar test */
/* ripetizione 431.1 - Sonar test */
/* ripetizione 431.2 - Sonar test */

int test_func_431(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

void dup_block_87_0(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 88;
 int y = 89;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_87_1(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 89;
 int y = 90;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_87_2(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 90;
 int y = 91;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

/* ===== COMMENT BLOCK 432 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 432.0 - Sonar test */
/* ripetizione 432.1 - Sonar test */
/* ripetizione 432.2 - Sonar test */

int test_func_432(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 433 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 433.0 - Sonar test */
/* ripetizione 433.1 - Sonar test */
/* ripetizione 433.2 - Sonar test */

int test_func_433(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 434 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 434.0 - Sonar test */
/* ripetizione 434.1 - Sonar test */
/* ripetizione 434.2 - Sonar test */

int test_func_434(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 435 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 435.0 - Sonar test */
/* ripetizione 435.1 - Sonar test */
/* ripetizione 435.2 - Sonar test */

int test_func_435(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 436 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 436.0 - Sonar test */
/* ripetizione 436.1 - Sonar test */
/* ripetizione 436.2 - Sonar test */

int test_func_436(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

void dup_block_88_0(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 89;
 int y = 90;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_88_1(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 90;
 int y = 91;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_88_2(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 91;
 int y = 92;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

/* ===== COMMENT BLOCK 437 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 437.0 - Sonar test */
/* ripetizione 437.1 - Sonar test */
/* ripetizione 437.2 - Sonar test */

int test_func_437(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 438 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 438.0 - Sonar test */
/* ripetizione 438.1 - Sonar test */
/* ripetizione 438.2 - Sonar test */

int test_func_438(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 439 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 439.0 - Sonar test */
/* ripetizione 439.1 - Sonar test */
/* ripetizione 439.2 - Sonar test */

int test_func_439(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 440 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 440.0 - Sonar test */
/* ripetizione 440.1 - Sonar test */
/* ripetizione 440.2 - Sonar test */

int test_func_440(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 441 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 441.0 - Sonar test */
/* ripetizione 441.1 - Sonar test */
/* ripetizione 441.2 - Sonar test */

int test_func_441(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

void dup_block_89_0(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 90;
 int y = 91;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_89_1(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 91;
 int y = 92;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

void dup_block_89_2(void) {
 /* Blocchi duplicati: serve a far rilevare duplications */
 int x = 92;
 int y = 93;
 int z = x * y;
 if (z > 1000) {
 printf("dup 3 1032528544 => 0\n", x, y, z);
 }
}

int switchy41(int v) {
 switch(v) {
 case 0: return 0;
 case 1: return 7;
 case 2: return 14;
 case 3: return 21;
 case 4: return 28;
 case 5: return 35;
 case 6: return 42;
 case 7: return 49;
 case 8: return 56;
 case 9: return 63;
 case 10: return 70;
 case 11: return 77;
 case 12: return 84;
 case 13: return 91;
 case 14: return 98;
 case 15: return 105;
 case 16: return 112;
 case 17: return 119;
 case 18: return 126;
 case 19: return 133;
 default: return -1;
 }
}

/* ===== COMMENT BLOCK 442 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 442.0 - Sonar test */
/* ripetizione 442.1 - Sonar test */
/* ripetizione 442.2 - Sonar test */

int test_func_442(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 443 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 443.0 - Sonar test */
/* ripetizione 443.1 - Sonar test */
/* ripetizione 443.2 - Sonar test */

int test_func_443(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 444 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 444.0 - Sonar test */
/* ripetizione 444.1 - Sonar test */
/* ripetizione 444.2 - Sonar test */

int test_func_444(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 445 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 445.0 - Sonar test */
/* ripetizione 445.1 - Sonar test */
/* ripetizione 445.2 - Sonar test */

int test_func_445(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning di compilazione ma mantiene l'uso */
 if (a == 0) {
 /* dead code style: condizione improbabile */
 return b * 42; /* altro magic number */
 }
 /* memoria allocata non liberata in scenari particolari (leak) */
 if (b < 0) {
 char *p = (char*)malloc(32);
 if (p) {
 strcpy(p, "leak candidate");
 /* intentionally not freed */
 }
 }
 /* ritorno semplice */
 return result;
}

/* ===== COMMENT BLOCK 446 ===== */
/* Questo blocco serve a generare righe di commento */
/* ripetizione 446.0 - Sonar test */
/* ripetizione 446.1 - Sonar test */
/* ripetizione 446.2 - Sonar test */

int test_func_446(int a, int b) {
 /* funzione generata automaticamente */
 int i;
 int result = 0; /* unused maybe flagged */
 char buf[64];
 /* Magic number usato intenzionalmente */
 for (i = 0; i < 10; ++i) {
 result += (a * b) + i; /* semplice operazione */
 }
 /* copia stringa senza controllo intenzionale (per rilevare vulnerability) */
 strcpy(buf, "This is a test string used for static analysis");
 (void)buf; /* evita warning */
 return 0;
}
