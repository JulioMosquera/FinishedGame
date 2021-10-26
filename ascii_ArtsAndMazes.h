#include <stdio.h>

char maze1[27][52]={
"###################################################\n",
"#&#     #       #           # #     #   #   # #   #\n",
"# # ### # ##### ##### # ### # ##### ### ### # ### #\n",
"# # # #   #         # #   #   # # #     # # #   # #\n",
"# ### ### ### # ### ### ### ### # ### # # # ### # #\n",
"# # #   # #   # #     # #         #   #   # # #   #\n",
"# # # # # ##### ######### ### # ##### ##### # ### #\n",
"#     #       #       #     # #                   #\n",
"# # # # ##### ### # # ##### ### ##### ##### ### # #\n",
"# # # # #   #   # # # # # # #     #   #   # # # # #\n",
"### # # # ##### # # # # # # ### ### # ### # # ### #\n",
"#   # #     # # # # # #     #   # # # #         # #\n",
"########### # ####### ### ##### # ### ######### # #\n",
"# # #         #   #   # # #     #   # #         # #\n",
"# # ####### # # ####### # ###~### ### # ######### #\n",
"# # #       # #       #   #     #     #   # #   # #\n",
"# # ### ### ##### ##### ### ### ####### ### ### ###\n",
"#   #     # #         # # # # #   #     #   #   # #\n",
"# ##### # # # ####### # # ### # ####### # ##### # #\n",
"#       # #   #   #     #   # #     # #   #     # #\n",
"# ### ##### # # ####### # ### ##### # # ### ### # #\n",
"# #   # #   #   # #   # #           # # #   #     #\n",
"# # ### ### ##### # # ######### # ### # ##### ### #\n",
"# # #             # #   #       #   #         # # #\n",
"# # # # ##### # # ### ### ####### ####### ### # ###\n",
"# # # # #     # #     #   #             #   #     \n",
"################################################# \n"
};

char maze2[27][52]={
"& #################################################\n",
"        #       # #                       #       #\n",
"# ### ####### # # # ### # # ##### ### ########### #\n",
"# # #       # #     # # # # # # #   # #           #\n",
"# # ####### ######### # # ### # ### ####### # ### #\n",
"# #   #   # #   # # #   #   #     #   #     #   # #\n",
"# ### ### # ### # # # ##### # # ### # ### # ### # #\n",
"#       # # # #       # #     # # # #     # #   # #\n",
"# ####### ### ##### ### ##### ### # ##### #########\n",
"#                   # # #         # #     #       #\n",
"### # # ##### # ##### # ### ######### ######### # #\n",
"# # # #   #   #         #   # @     # # #     # # #\n",
"# ### ####### # ########### ##### # ### ### ### ###\n",
"#   #   #   # #     #             #   #     # #   #\n",
"# ### ### # ### ##### ### ############# ### # # # #\n",
"#   #     # #   #   #   #         # #     # # # # #\n",
"# ### ####### # ### ##### ### # ### ##### ### # ###\n",
"#       #     # # #       # # #   #         #     #\n",
"# ############# # # # ### # ######### # ##### ### #\n",
"#       #         # # #       #   #   #   #   #   #\n",
"# # # ### ### ### ######### # # # ### ### ####### #\n",
"# # #   #   #   # #       # # # #   #   # #   # # #\n",
"### ### # ##### ####### # ### ### ### # # # # # # #\n",
"#     # #   #     #     #   #         # #   # #   #\n",
"### ####### # ### ### # # ####### ### ##### # # # #\n",
"#       #   # #   #   # #           # #     #   # \n",
"################################################# \n",
};

char maze3[27][52]={
"& #################################################\n",
"  # #         #   #     #   # #     # # # #       #\n",
"# # # ### ##### ####### # # # # ### # # # ##### ###\n",
"#   # #           #       #   # #     # #         #\n",
"# # # ### ### ### ### ### ##### # ##### # ### ### #\n",
"# #     # #   #     # #         # #   #   #     # #\n",
"##### ### # ### ### ### ##### ##### ##### # # #####\n",
"# #   #   #   # #     # #   # #   # #     # #     #\n",
"# ### ####### ##### ##### ### # ### # ### #########\n",
"#   #     # # #       # # # #     #   #     #     #\n",
"### # ##### ########### # # ##### # ##### ##### ###\n",
"#         #     # #           #     #   #   #     #\n",
"# ########### # # # ### # ### # ####### ### # # ###\n",
"#       #   # #     # # # #           # #     # # #\n",
"### ##### ##### ### # ##### ### ### ### ### # # # #\n",
"# #   #     #   #     #   #   # # #     # # # # # #\n",
"# # # ### # # # ### # # ###!### # ##### # # ### # #\n",
"# # # # # # # # #   #   #   # # #       # # #     #\n",
"# # ### # ### ####### # ### # ### ##### # # ### ###\n",
"# #   #   # #       # # #       #   # # #     # # #\n",
"# # ##### # ##### ######### ######### ####### # # #\n",
"# # #           # #   #   # # #       #       #   #\n",
"# # # ######### # ### ### # # ### # ### ##### ### #\n",
"#           #   # #   #       #   # # #     #   # #\n",
"# # # ### ### ### # ##### # # ##### # ### ### ### #\n",
"# # #   #   #         #   # #   #           #   # \n",
"################################################# \n",
};

char maze4[27][52]={
"& #################################################\n",
"  #   #       #       #                 #         #\n",
"# ### # # # # # # # ### ### # # ### ### ### # # # #\n",
"#       # # # # # #   #   # # #   #   #     # # # #\n",
"##### ####### ### # ### ####### ####### ##### # # #\n",
"#       #   #     # #       # #   #   # #     # # #\n",
"# ####### ### ### ########### # # ### # # ##### ###\n",
"#           # # #   #     # #   #     # # # # #   #\n",
"# ### # ##### # ### # ### # ######### # # # # # ###\n",
"# #   # #     # #   #   # #     # #   # # #   #   #\n",
"# # ####### ### # ##### ##### ### ### ##### ##### #\n",
"# # #     #     # # #       #   # #   # # #       #\n",
"# ### # # ######### #!####### ### ##### # # #######\n",
"#     # #                       # # #     #     # #\n",
"####### # # # # ### ### ### ##### # ### ### ### # #\n",
"# #   # # # # #   #   #   #   #         #     #   #\n",
"# # ######### ### ### ### ##### ##### ##### # ### #\n",
"#     # # #   #   #   # #     #     #   #   # #   #\n",
"# # # # # ##### # # ### # ### # ####### ### #######\n",
"# # # # #       # # #     #       # #   # #       #\n",
"# ##### # ### ### # ########### ### ### # # # #####\n",
"#       #   #   # # # #   # #     #     #   #   # #\n",
"# ##### # ### # # ### # ### # # ### # # # ### # # #\n",
"#   # # # #   # # # # #   #   # #   # #     # #   #\n",
"# ### # # ### # # # # ### ##### # # # # ####### # #\n",
"# #         # # #             # # # # #   #     # \n",
"################################################# \n",
};

char maze5[27][52]={
"& #################################################\n",
"  #           # # #     #       #     # #       # #\n",
"# # ##### ### # # ### ##### # ##### # # # ### ### #\n",
"#     #     #     #   # #   # # #   # #     #   # #\n",
"### ### ##### ##### ### ### # # ##### ##### ##### #\n",
"#     # #   # #   # # # #   #     # #   #         #\n",
"### ##### # # ### # # # # ##### ### ### # #########\n",
"#       # #                   #   #   #     #     #\n",
"### ### ### ### ####### ### ##### # # ### # ##### #\n",
"# #   # #   #   # #   # #     # #   # #   #   #   #\n",
"# # ##### ### ### ### # ####### # ##### ### ##### #\n",
"#   # #   # #   # # #       #       #     #       #\n",
"# # # ### # # # # # # ### ### # # # ####### # ### #\n",
"# # # # # #   #     #   #   # # # #   #   # # #   #\n",
"### # # # ##### ##### # # ### # # ####### # ##### #\n",
"#   # # # #   # #     # # #   # #     #       #   #\n",
"### # # # # # ### # ### # ### ####### # # ##### # #\n",
"# #   # #   # # # # #   # #   #   #     # #     # #\n",
"# ##### ### # # # # ####### ##### ##### # ### # ###\n",
"# # #       # #   # # #   # #   !     # # # # #   #\n",
"# # ### ### ####### # ### # ### ### # # ### ##### #\n",
"#     #   # # #       #   #   # #   #     #     # #\n",
"# # ##### ### # ######### # ##### # ######### # ###\n",
"# #       # #     #   #         # # #     # # #   #\n",
"# # # # # # ### # ### # # # ##### ### ### # # ### #\n",
"# # # # #   #   #   #   # #     #     #         # \n",
"################################################# \n",
};

void PrintScoreboard(int score, int multiplier, int moves, int locX, int locY) {
  printf(" ------------------------------------------------------\n");
  printf("|                    SCOREBOARD                         |\n");
  printf("|-------------------------------------------------------|\n");
  printf("| Score      |  \t%i\t     |  Location X   |   \t%i\t|\n", score, locX);
  printf("|-------------------------------------------------------|\n");
  printf("| Multiplier |  \t%i\t     |  Location Y   |   \t%i\t|\n", multiplier, locY);
  printf("|-------------------------------------------------------|\n");
  printf("| Moves Left |  \t%i\t     |                    \t    |\n", moves);
  printf(" -------------------------------------------------------\n");
}