# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/rcdu/openairinterface5g

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/rcdu/openairinterface5g/cmake_targets/ran_build/build

# Include any dependencies generated for this target.
include CMakeFiles/lte_rrc.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/lte_rrc.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/lte_rrc.dir/flags.make

CMakeFiles/lte_rrc.dir/openair2/RRC/LTE/MESSAGES/asn1_msg.c.o: CMakeFiles/lte_rrc.dir/flags.make
CMakeFiles/lte_rrc.dir/openair2/RRC/LTE/MESSAGES/asn1_msg.c.o: ../../../openair2/RRC/LTE/MESSAGES/asn1_msg.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rcdu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/lte_rrc.dir/openair2/RRC/LTE/MESSAGES/asn1_msg.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/lte_rrc.dir/openair2/RRC/LTE/MESSAGES/asn1_msg.c.o   -c /home/rcdu/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1_msg.c

CMakeFiles/lte_rrc.dir/openair2/RRC/LTE/MESSAGES/asn1_msg.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/lte_rrc.dir/openair2/RRC/LTE/MESSAGES/asn1_msg.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/rcdu/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1_msg.c > CMakeFiles/lte_rrc.dir/openair2/RRC/LTE/MESSAGES/asn1_msg.c.i

CMakeFiles/lte_rrc.dir/openair2/RRC/LTE/MESSAGES/asn1_msg.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/lte_rrc.dir/openair2/RRC/LTE/MESSAGES/asn1_msg.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/rcdu/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1_msg.c -o CMakeFiles/lte_rrc.dir/openair2/RRC/LTE/MESSAGES/asn1_msg.c.s

CMakeFiles/lte_rrc.dir/openair2/RRC/LTE/MESSAGES/asn1_msg_NB_IoT.c.o: CMakeFiles/lte_rrc.dir/flags.make
CMakeFiles/lte_rrc.dir/openair2/RRC/LTE/MESSAGES/asn1_msg_NB_IoT.c.o: ../../../openair2/RRC/LTE/MESSAGES/asn1_msg_NB_IoT.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rcdu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/lte_rrc.dir/openair2/RRC/LTE/MESSAGES/asn1_msg_NB_IoT.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/lte_rrc.dir/openair2/RRC/LTE/MESSAGES/asn1_msg_NB_IoT.c.o   -c /home/rcdu/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1_msg_NB_IoT.c

CMakeFiles/lte_rrc.dir/openair2/RRC/LTE/MESSAGES/asn1_msg_NB_IoT.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/lte_rrc.dir/openair2/RRC/LTE/MESSAGES/asn1_msg_NB_IoT.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/rcdu/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1_msg_NB_IoT.c > CMakeFiles/lte_rrc.dir/openair2/RRC/LTE/MESSAGES/asn1_msg_NB_IoT.c.i

CMakeFiles/lte_rrc.dir/openair2/RRC/LTE/MESSAGES/asn1_msg_NB_IoT.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/lte_rrc.dir/openair2/RRC/LTE/MESSAGES/asn1_msg_NB_IoT.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/rcdu/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1_msg_NB_IoT.c -o CMakeFiles/lte_rrc.dir/openair2/RRC/LTE/MESSAGES/asn1_msg_NB_IoT.c.s

# Object files for target lte_rrc
lte_rrc_OBJECTS = \
"CMakeFiles/lte_rrc.dir/openair2/RRC/LTE/MESSAGES/asn1_msg.c.o" \
"CMakeFiles/lte_rrc.dir/openair2/RRC/LTE/MESSAGES/asn1_msg_NB_IoT.c.o"

# External object files for target lte_rrc
lte_rrc_EXTERNAL_OBJECTS =

liblte_rrc.a: CMakeFiles/lte_rrc.dir/openair2/RRC/LTE/MESSAGES/asn1_msg.c.o
liblte_rrc.a: CMakeFiles/lte_rrc.dir/openair2/RRC/LTE/MESSAGES/asn1_msg_NB_IoT.c.o
liblte_rrc.a: CMakeFiles/lte_rrc.dir/build.make
liblte_rrc.a: CMakeFiles/lte_rrc.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/rcdu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C static library liblte_rrc.a"
	$(CMAKE_COMMAND) -P CMakeFiles/lte_rrc.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/lte_rrc.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/lte_rrc.dir/build: liblte_rrc.a

.PHONY : CMakeFiles/lte_rrc.dir/build

CMakeFiles/lte_rrc.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/lte_rrc.dir/cmake_clean.cmake
.PHONY : CMakeFiles/lte_rrc.dir/clean

CMakeFiles/lte_rrc.dir/depend:
	cd /home/rcdu/openairinterface5g/cmake_targets/ran_build/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/rcdu/openairinterface5g /home/rcdu/openairinterface5g /home/rcdu/openairinterface5g/cmake_targets/ran_build/build /home/rcdu/openairinterface5g/cmake_targets/ran_build/build /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles/lte_rrc.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/lte_rrc.dir/depend

