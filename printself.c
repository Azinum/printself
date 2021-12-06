#include <stdio.h>
#include <string.h>

int main() {
  const char* text = "#include <stdio.h>\n#include <string.h>\n\nint main() {\n  const char* text = $;\n  for (int i = 0; i < strlen(text); ++i) {\n    if (text[i] != 36) putchar(text[i]);\n    else {\n      putchar(34);\n      for (int i = 0; i < strlen(text); ++i) {\n        if (text[i] == 10) {\n          putchar(92); putchar('n');\n          continue;\n        }\n        if (text[i] == 36) { putchar(36); continue; }\n        putchar(text[i]);\n      }\n      putchar(34);\n    }\n  }\n  return 0;\n}\n";
  for (int i = 0; i < strlen(text); ++i) {
    if (text[i] != 36) putchar(text[i]);
    else {
      putchar(34);
      for (int i = 0; i < strlen(text); ++i) {
        if (text[i] == 10) {
          putchar(92); putchar('n');
          continue;
        }
        if (text[i] == 36) { putchar(36); continue; }
        putchar(text[i]);
      }
      putchar(34);
    }
  }
  return 0;
}
