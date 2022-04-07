#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  // Make buffer for input
  char message[128];

  // Initialize emoji variables
  char *emojis[] = {":smiley:",         ":grin:", ":sleeping:",  ":grimacing:",
                    ":expressionless:", ":star:", ":anger:",     ":tada:",
                    ":mega:",           ":fire:", ":fireworks:", ";"};
  int emojisel;

  // Get Message
  printf("Input Commit Message: ");
  scanf("%s", message);

  // Get Emoji
  printf("Pick an Emoji\n");
  for (int i = 0; strcmp(emojis[i], ";") == 0; i++)
    printf("[%d] %s\n", i, emojis[i]);
  // Get Emoji Selection
  scanf("%d", &emojisel);
  // put emojisel into emoji
  char *emoji = emojis[emojisel];

  // Combine Strings
  strcat(message, emoji);
  char command[] = "git commit -am \"";
  strcat(command, message);
  strcat(command, "\"");
  system(command);

  return 0;
}
