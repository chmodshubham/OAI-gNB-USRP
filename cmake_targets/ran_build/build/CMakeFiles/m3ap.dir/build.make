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
include CMakeFiles/m3ap.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/m3ap.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/m3ap.dir/flags.make

CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_common.c.o: CMakeFiles/m3ap.dir/flags.make
CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_common.c.o: ../../../openair3/M3AP/m3ap_common.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rcdu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_common.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_common.c.o   -c /home/rcdu/openairinterface5g/openair3/M3AP/m3ap_common.c

CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_common.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_common.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/rcdu/openairinterface5g/openair3/M3AP/m3ap_common.c > CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_common.c.i

CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_common.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_common.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/rcdu/openairinterface5g/openair3/M3AP/m3ap_common.c -o CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_common.c.s

CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_decoder.c.o: CMakeFiles/m3ap.dir/flags.make
CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_decoder.c.o: ../../../openair3/M3AP/m3ap_decoder.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rcdu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_decoder.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_decoder.c.o   -c /home/rcdu/openairinterface5g/openair3/M3AP/m3ap_decoder.c

CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_decoder.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_decoder.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/rcdu/openairinterface5g/openair3/M3AP/m3ap_decoder.c > CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_decoder.c.i

CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_decoder.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_decoder.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/rcdu/openairinterface5g/openair3/M3AP/m3ap_decoder.c -o CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_decoder.c.s

CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_encoder.c.o: CMakeFiles/m3ap.dir/flags.make
CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_encoder.c.o: ../../../openair3/M3AP/m3ap_encoder.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rcdu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_encoder.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_encoder.c.o   -c /home/rcdu/openairinterface5g/openair3/M3AP/m3ap_encoder.c

CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_encoder.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_encoder.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/rcdu/openairinterface5g/openair3/M3AP/m3ap_encoder.c > CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_encoder.c.i

CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_encoder.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_encoder.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/rcdu/openairinterface5g/openair3/M3AP/m3ap_encoder.c -o CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_encoder.c.s

CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_MCE_handler.c.o: CMakeFiles/m3ap.dir/flags.make
CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_MCE_handler.c.o: ../../../openair3/M3AP/m3ap_MCE_handler.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rcdu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_MCE_handler.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_MCE_handler.c.o   -c /home/rcdu/openairinterface5g/openair3/M3AP/m3ap_MCE_handler.c

CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_MCE_handler.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_MCE_handler.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/rcdu/openairinterface5g/openair3/M3AP/m3ap_MCE_handler.c > CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_MCE_handler.c.i

CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_MCE_handler.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_MCE_handler.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/rcdu/openairinterface5g/openair3/M3AP/m3ap_MCE_handler.c -o CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_MCE_handler.c.s

CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_MME_handler.c.o: CMakeFiles/m3ap.dir/flags.make
CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_MME_handler.c.o: ../../../openair3/M3AP/m3ap_MME_handler.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rcdu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_MME_handler.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_MME_handler.c.o   -c /home/rcdu/openairinterface5g/openair3/M3AP/m3ap_MME_handler.c

CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_MME_handler.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_MME_handler.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/rcdu/openairinterface5g/openair3/M3AP/m3ap_MME_handler.c > CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_MME_handler.c.i

CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_MME_handler.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_MME_handler.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/rcdu/openairinterface5g/openair3/M3AP/m3ap_MME_handler.c -o CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_MME_handler.c.s

CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_MME.c.o: CMakeFiles/m3ap.dir/flags.make
CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_MME.c.o: ../../../openair3/M3AP/m3ap_MME.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rcdu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_MME.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_MME.c.o   -c /home/rcdu/openairinterface5g/openair3/M3AP/m3ap_MME.c

CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_MME.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_MME.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/rcdu/openairinterface5g/openair3/M3AP/m3ap_MME.c > CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_MME.c.i

CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_MME.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_MME.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/rcdu/openairinterface5g/openair3/M3AP/m3ap_MME.c -o CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_MME.c.s

CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_MME_management_procedures.c.o: CMakeFiles/m3ap.dir/flags.make
CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_MME_management_procedures.c.o: ../../../openair3/M3AP/m3ap_MME_management_procedures.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rcdu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_MME_management_procedures.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_MME_management_procedures.c.o   -c /home/rcdu/openairinterface5g/openair3/M3AP/m3ap_MME_management_procedures.c

CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_MME_management_procedures.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_MME_management_procedures.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/rcdu/openairinterface5g/openair3/M3AP/m3ap_MME_management_procedures.c > CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_MME_management_procedures.c.i

CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_MME_management_procedures.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_MME_management_procedures.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/rcdu/openairinterface5g/openair3/M3AP/m3ap_MME_management_procedures.c -o CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_MME_management_procedures.c.s

CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_MME_interface_management.c.o: CMakeFiles/m3ap.dir/flags.make
CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_MME_interface_management.c.o: ../../../openair3/M3AP/m3ap_MME_interface_management.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rcdu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building C object CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_MME_interface_management.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_MME_interface_management.c.o   -c /home/rcdu/openairinterface5g/openair3/M3AP/m3ap_MME_interface_management.c

CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_MME_interface_management.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_MME_interface_management.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/rcdu/openairinterface5g/openair3/M3AP/m3ap_MME_interface_management.c > CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_MME_interface_management.c.i

CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_MME_interface_management.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_MME_interface_management.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/rcdu/openairinterface5g/openair3/M3AP/m3ap_MME_interface_management.c -o CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_MME_interface_management.c.s

CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_MCE.c.o: CMakeFiles/m3ap.dir/flags.make
CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_MCE.c.o: ../../../openair3/M3AP/m3ap_MCE.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rcdu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building C object CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_MCE.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_MCE.c.o   -c /home/rcdu/openairinterface5g/openair3/M3AP/m3ap_MCE.c

CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_MCE.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_MCE.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/rcdu/openairinterface5g/openair3/M3AP/m3ap_MCE.c > CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_MCE.c.i

CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_MCE.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_MCE.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/rcdu/openairinterface5g/openair3/M3AP/m3ap_MCE.c -o CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_MCE.c.s

CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_MCE_management_procedures.c.o: CMakeFiles/m3ap.dir/flags.make
CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_MCE_management_procedures.c.o: ../../../openair3/M3AP/m3ap_MCE_management_procedures.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rcdu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building C object CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_MCE_management_procedures.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_MCE_management_procedures.c.o   -c /home/rcdu/openairinterface5g/openair3/M3AP/m3ap_MCE_management_procedures.c

CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_MCE_management_procedures.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_MCE_management_procedures.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/rcdu/openairinterface5g/openair3/M3AP/m3ap_MCE_management_procedures.c > CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_MCE_management_procedures.c.i

CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_MCE_management_procedures.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_MCE_management_procedures.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/rcdu/openairinterface5g/openair3/M3AP/m3ap_MCE_management_procedures.c -o CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_MCE_management_procedures.c.s

CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_MCE_interface_management.c.o: CMakeFiles/m3ap.dir/flags.make
CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_MCE_interface_management.c.o: ../../../openair3/M3AP/m3ap_MCE_interface_management.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rcdu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building C object CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_MCE_interface_management.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_MCE_interface_management.c.o   -c /home/rcdu/openairinterface5g/openair3/M3AP/m3ap_MCE_interface_management.c

CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_MCE_interface_management.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_MCE_interface_management.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/rcdu/openairinterface5g/openair3/M3AP/m3ap_MCE_interface_management.c > CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_MCE_interface_management.c.i

CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_MCE_interface_management.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_MCE_interface_management.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/rcdu/openairinterface5g/openair3/M3AP/m3ap_MCE_interface_management.c -o CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_MCE_interface_management.c.s

CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_itti_messaging.c.o: CMakeFiles/m3ap.dir/flags.make
CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_itti_messaging.c.o: ../../../openair3/M3AP/m3ap_itti_messaging.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rcdu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building C object CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_itti_messaging.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_itti_messaging.c.o   -c /home/rcdu/openairinterface5g/openair3/M3AP/m3ap_itti_messaging.c

CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_itti_messaging.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_itti_messaging.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/rcdu/openairinterface5g/openair3/M3AP/m3ap_itti_messaging.c > CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_itti_messaging.c.i

CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_itti_messaging.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_itti_messaging.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/rcdu/openairinterface5g/openair3/M3AP/m3ap_itti_messaging.c -o CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_itti_messaging.c.s

CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_ids.c.o: CMakeFiles/m3ap.dir/flags.make
CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_ids.c.o: ../../../openair3/M3AP/m3ap_ids.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rcdu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building C object CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_ids.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_ids.c.o   -c /home/rcdu/openairinterface5g/openair3/M3AP/m3ap_ids.c

CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_ids.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_ids.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/rcdu/openairinterface5g/openair3/M3AP/m3ap_ids.c > CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_ids.c.i

CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_ids.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_ids.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/rcdu/openairinterface5g/openair3/M3AP/m3ap_ids.c -o CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_ids.c.s

CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_timers.c.o: CMakeFiles/m3ap.dir/flags.make
CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_timers.c.o: ../../../openair3/M3AP/m3ap_timers.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rcdu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building C object CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_timers.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_timers.c.o   -c /home/rcdu/openairinterface5g/openair3/M3AP/m3ap_timers.c

CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_timers.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_timers.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/rcdu/openairinterface5g/openair3/M3AP/m3ap_timers.c > CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_timers.c.i

CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_timers.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_timers.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/rcdu/openairinterface5g/openair3/M3AP/m3ap_timers.c -o CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_timers.c.s

# Object files for target m3ap
m3ap_OBJECTS = \
"CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_common.c.o" \
"CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_decoder.c.o" \
"CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_encoder.c.o" \
"CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_MCE_handler.c.o" \
"CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_MME_handler.c.o" \
"CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_MME.c.o" \
"CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_MME_management_procedures.c.o" \
"CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_MME_interface_management.c.o" \
"CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_MCE.c.o" \
"CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_MCE_management_procedures.c.o" \
"CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_MCE_interface_management.c.o" \
"CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_itti_messaging.c.o" \
"CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_ids.c.o" \
"CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_timers.c.o"

# External object files for target m3ap
m3ap_EXTERNAL_OBJECTS =

libm3ap.a: CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_common.c.o
libm3ap.a: CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_decoder.c.o
libm3ap.a: CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_encoder.c.o
libm3ap.a: CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_MCE_handler.c.o
libm3ap.a: CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_MME_handler.c.o
libm3ap.a: CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_MME.c.o
libm3ap.a: CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_MME_management_procedures.c.o
libm3ap.a: CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_MME_interface_management.c.o
libm3ap.a: CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_MCE.c.o
libm3ap.a: CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_MCE_management_procedures.c.o
libm3ap.a: CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_MCE_interface_management.c.o
libm3ap.a: CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_itti_messaging.c.o
libm3ap.a: CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_ids.c.o
libm3ap.a: CMakeFiles/m3ap.dir/openair3/M3AP/m3ap_timers.c.o
libm3ap.a: CMakeFiles/m3ap.dir/build.make
libm3ap.a: CMakeFiles/m3ap.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/rcdu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Linking C static library libm3ap.a"
	$(CMAKE_COMMAND) -P CMakeFiles/m3ap.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/m3ap.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/m3ap.dir/build: libm3ap.a

.PHONY : CMakeFiles/m3ap.dir/build

CMakeFiles/m3ap.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/m3ap.dir/cmake_clean.cmake
.PHONY : CMakeFiles/m3ap.dir/clean

CMakeFiles/m3ap.dir/depend:
	cd /home/rcdu/openairinterface5g/cmake_targets/ran_build/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/rcdu/openairinterface5g /home/rcdu/openairinterface5g /home/rcdu/openairinterface5g/cmake_targets/ran_build/build /home/rcdu/openairinterface5g/cmake_targets/ran_build/build /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles/m3ap.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/m3ap.dir/depend

