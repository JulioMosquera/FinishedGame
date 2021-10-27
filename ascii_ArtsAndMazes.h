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
"# # # # #     # #     #   #             #   #    X#\n",
"###################################################\n"
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
"#       #   # #   #   # #           # #     #   #X#\n",
"###################################################\n",
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
"# # #   #   #         #   # #   #           #   #X#\n",
"###################################################\n",
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
"# #         # # #             # # # # #   #     #X#\n",
"###################################################\n",
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
"# # # # #   #   #   #   # #     #     #         #X#\n",
"###################################################\n",
};



char mazes[5][27][52] =
{
{
"###################################################\n",
"#&#     #       #           # #     #   #   # #   #\n",
"# # ### # ##### ##### # ### # ##### ### ### # ### #\n",
"# # # #   #         # #   #   # # #     # # #   # #\n",
"#+### ### ### # ### ### ### ### # ### # # # ### # #\n",
"#!# #   # #   # #     # #         #   #   # # #   #\n",
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
"# # # # #     # #     #   #             #   #    X#\n",
"###################################################\n"
},
{
"###################################################\n",
"#&      #       # #                       #       #\n",
"# ### ####### # # # ### # # ##### ### ########### #\n",
"# # #       # #     # # # # # # #   # #           #\n",
"# # ####### ######### # # ### # ### ####### # ### #\n",
"#-#   #   # #   # # #   #   #     #   #     #   # #\n",
"#+### ### # ### # # # ##### # # ### # ### # ### # #\n",
"#+      # # # #       # #     # # # #     # #   # #\n",
"# ####### ### ##### ### ##### ### # ##### #########\n",
"#                   # # #         # #     #       #\n",
"### # # ##### # ##### # ### ######### ######### # #\n",
"# # # #   #   #         #   # !    # # #     # # #\n",
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
"#       #   # #   #   # #           # #     #   #X#\n",
"###################################################\n",
},
{
"###################################################\n",
"#&      #       # #                       #       #\n",
"# ### ####### # # # ### # # ##### ### ########### #\n",
"# # #       # #     # # # # # # #   # #           #\n",
"#!# ####### ######### # # ### # ### ####### # ### #\n",
"#-#   #   # #   # # #   #   #     #   #     #   # #\n",
"#+### ### # ### # # # ##### # # ### # ### # ### # #\n",
"#       # # # #       # #     # # # #     # #   # #\n",
"# ####### ### ##### ### ##### ### # ##### #########\n",
"#                   # # #         # #     #       #\n",
"### # # ##### # ##### # ### ######### ######### # #\n",
"# # # #   #   #         #   # !     # # #     # # #\n",
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
"#       #   # #   #   # #           # #     #   #X#\n",
"###################################################\n",
},
{
"###################################################\n",
"#&#   #       #       #                 #         #\n",
"#!### # # # # # # # ### ### # # ### ### ### # # # #\n",
"#-+     # # # # # #   #   # # #   #   #     # # # #\n",
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
"# #         # # #             # # # # #   #     #X#\n",
"###################################################\n",
},
{
"###################################################\n",
"#&#           # # #     #       #     # #       # #\n",
"#!# ##### ### # # ### ##### # ##### # # # ### ### #\n",
"#-+   #     #     #   # #   # # #   # #     #   # #\n",
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
"# # # # #   #   #   #   # #     #     #         #X#\n",
"###################################################\n",
}
};