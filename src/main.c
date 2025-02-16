#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
  char *filePath = NULL;
  char *outputPath = NULL;

  // Order breakdown
  for (int i = 1; i < argc; i++) {

    // Getting filePath
    if (strcmp(argv[i], "-i") == 0 && i + 1 < argc) {
      filePath = argv[i + 1];
      i++;
    } else if (strcmp(argv[i], "-o") == 0 && i + 1 < argc) {
      outputPath = argv[i + 1];
      i++;
    } else {
      printf("Error");
      return 1;
    }
  }

  printf("input : %s \n output : %s", filePath, outputPath);
}
