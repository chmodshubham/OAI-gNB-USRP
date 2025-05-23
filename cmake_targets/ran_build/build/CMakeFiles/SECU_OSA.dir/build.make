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
include CMakeFiles/SECU_OSA.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/SECU_OSA.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/SECU_OSA.dir/flags.make

CMakeFiles/SECU_OSA.dir/openair2/UTIL/OSA/osa_key_deriver.c.o: CMakeFiles/SECU_OSA.dir/flags.make
CMakeFiles/SECU_OSA.dir/openair2/UTIL/OSA/osa_key_deriver.c.o: ../../../openair2/UTIL/OSA/osa_key_deriver.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rcdu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/SECU_OSA.dir/openair2/UTIL/OSA/osa_key_deriver.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/SECU_OSA.dir/openair2/UTIL/OSA/osa_key_deriver.c.o   -c /home/rcdu/openairinterface5g/openair2/UTIL/OSA/osa_key_deriver.c

CMakeFiles/SECU_OSA.dir/openair2/UTIL/OSA/osa_key_deriver.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/SECU_OSA.dir/openair2/UTIL/OSA/osa_key_deriver.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/rcdu/openairinterface5g/openair2/UTIL/OSA/osa_key_deriver.c > CMakeFiles/SECU_OSA.dir/openair2/UTIL/OSA/osa_key_deriver.c.i

CMakeFiles/SECU_OSA.dir/openair2/UTIL/OSA/osa_key_deriver.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/SECU_OSA.dir/openair2/UTIL/OSA/osa_key_deriver.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/rcdu/openairinterface5g/openair2/UTIL/OSA/osa_key_deriver.c -o CMakeFiles/SECU_OSA.dir/openair2/UTIL/OSA/osa_key_deriver.c.s

CMakeFiles/SECU_OSA.dir/openair2/UTIL/OSA/osa_rijndael.c.o: CMakeFiles/SECU_OSA.dir/flags.make
CMakeFiles/SECU_OSA.dir/openair2/UTIL/OSA/osa_rijndael.c.o: ../../../openair2/UTIL/OSA/osa_rijndael.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rcdu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/SECU_OSA.dir/openair2/UTIL/OSA/osa_rijndael.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/SECU_OSA.dir/openair2/UTIL/OSA/osa_rijndael.c.o   -c /home/rcdu/openairinterface5g/openair2/UTIL/OSA/osa_rijndael.c

CMakeFiles/SECU_OSA.dir/openair2/UTIL/OSA/osa_rijndael.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/SECU_OSA.dir/openair2/UTIL/OSA/osa_rijndael.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/rcdu/openairinterface5g/openair2/UTIL/OSA/osa_rijndael.c > CMakeFiles/SECU_OSA.dir/openair2/UTIL/OSA/osa_rijndael.c.i

CMakeFiles/SECU_OSA.dir/openair2/UTIL/OSA/osa_rijndael.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/SECU_OSA.dir/openair2/UTIL/OSA/osa_rijndael.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/rcdu/openairinterface5g/openair2/UTIL/OSA/osa_rijndael.c -o CMakeFiles/SECU_OSA.dir/openair2/UTIL/OSA/osa_rijndael.c.s

CMakeFiles/SECU_OSA.dir/openair2/UTIL/OSA/osa_snow3g.c.o: CMakeFiles/SECU_OSA.dir/flags.make
CMakeFiles/SECU_OSA.dir/openair2/UTIL/OSA/osa_snow3g.c.o: ../../../openair2/UTIL/OSA/osa_snow3g.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rcdu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/SECU_OSA.dir/openair2/UTIL/OSA/osa_snow3g.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/SECU_OSA.dir/openair2/UTIL/OSA/osa_snow3g.c.o   -c /home/rcdu/openairinterface5g/openair2/UTIL/OSA/osa_snow3g.c

CMakeFiles/SECU_OSA.dir/openair2/UTIL/OSA/osa_snow3g.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/SECU_OSA.dir/openair2/UTIL/OSA/osa_snow3g.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/rcdu/openairinterface5g/openair2/UTIL/OSA/osa_snow3g.c > CMakeFiles/SECU_OSA.dir/openair2/UTIL/OSA/osa_snow3g.c.i

CMakeFiles/SECU_OSA.dir/openair2/UTIL/OSA/osa_snow3g.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/SECU_OSA.dir/openair2/UTIL/OSA/osa_snow3g.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/rcdu/openairinterface5g/openair2/UTIL/OSA/osa_snow3g.c -o CMakeFiles/SECU_OSA.dir/openair2/UTIL/OSA/osa_snow3g.c.s

CMakeFiles/SECU_OSA.dir/openair2/UTIL/OSA/osa_stream_eea.c.o: CMakeFiles/SECU_OSA.dir/flags.make
CMakeFiles/SECU_OSA.dir/openair2/UTIL/OSA/osa_stream_eea.c.o: ../../../openair2/UTIL/OSA/osa_stream_eea.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rcdu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/SECU_OSA.dir/openair2/UTIL/OSA/osa_stream_eea.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/SECU_OSA.dir/openair2/UTIL/OSA/osa_stream_eea.c.o   -c /home/rcdu/openairinterface5g/openair2/UTIL/OSA/osa_stream_eea.c

CMakeFiles/SECU_OSA.dir/openair2/UTIL/OSA/osa_stream_eea.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/SECU_OSA.dir/openair2/UTIL/OSA/osa_stream_eea.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/rcdu/openairinterface5g/openair2/UTIL/OSA/osa_stream_eea.c > CMakeFiles/SECU_OSA.dir/openair2/UTIL/OSA/osa_stream_eea.c.i

CMakeFiles/SECU_OSA.dir/openair2/UTIL/OSA/osa_stream_eea.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/SECU_OSA.dir/openair2/UTIL/OSA/osa_stream_eea.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/rcdu/openairinterface5g/openair2/UTIL/OSA/osa_stream_eea.c -o CMakeFiles/SECU_OSA.dir/openair2/UTIL/OSA/osa_stream_eea.c.s

CMakeFiles/SECU_OSA.dir/openair2/UTIL/OSA/osa_stream_eia.c.o: CMakeFiles/SECU_OSA.dir/flags.make
CMakeFiles/SECU_OSA.dir/openair2/UTIL/OSA/osa_stream_eia.c.o: ../../../openair2/UTIL/OSA/osa_stream_eia.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rcdu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/SECU_OSA.dir/openair2/UTIL/OSA/osa_stream_eia.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/SECU_OSA.dir/openair2/UTIL/OSA/osa_stream_eia.c.o   -c /home/rcdu/openairinterface5g/openair2/UTIL/OSA/osa_stream_eia.c

CMakeFiles/SECU_OSA.dir/openair2/UTIL/OSA/osa_stream_eia.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/SECU_OSA.dir/openair2/UTIL/OSA/osa_stream_eia.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/rcdu/openairinterface5g/openair2/UTIL/OSA/osa_stream_eia.c > CMakeFiles/SECU_OSA.dir/openair2/UTIL/OSA/osa_stream_eia.c.i

CMakeFiles/SECU_OSA.dir/openair2/UTIL/OSA/osa_stream_eia.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/SECU_OSA.dir/openair2/UTIL/OSA/osa_stream_eia.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/rcdu/openairinterface5g/openair2/UTIL/OSA/osa_stream_eia.c -o CMakeFiles/SECU_OSA.dir/openair2/UTIL/OSA/osa_stream_eia.c.s

# Object files for target SECU_OSA
SECU_OSA_OBJECTS = \
"CMakeFiles/SECU_OSA.dir/openair2/UTIL/OSA/osa_key_deriver.c.o" \
"CMakeFiles/SECU_OSA.dir/openair2/UTIL/OSA/osa_rijndael.c.o" \
"CMakeFiles/SECU_OSA.dir/openair2/UTIL/OSA/osa_snow3g.c.o" \
"CMakeFiles/SECU_OSA.dir/openair2/UTIL/OSA/osa_stream_eea.c.o" \
"CMakeFiles/SECU_OSA.dir/openair2/UTIL/OSA/osa_stream_eia.c.o"

# External object files for target SECU_OSA
SECU_OSA_EXTERNAL_OBJECTS =

libSECU_OSA.a: CMakeFiles/SECU_OSA.dir/openair2/UTIL/OSA/osa_key_deriver.c.o
libSECU_OSA.a: CMakeFiles/SECU_OSA.dir/openair2/UTIL/OSA/osa_rijndael.c.o
libSECU_OSA.a: CMakeFiles/SECU_OSA.dir/openair2/UTIL/OSA/osa_snow3g.c.o
libSECU_OSA.a: CMakeFiles/SECU_OSA.dir/openair2/UTIL/OSA/osa_stream_eea.c.o
libSECU_OSA.a: CMakeFiles/SECU_OSA.dir/openair2/UTIL/OSA/osa_stream_eia.c.o
libSECU_OSA.a: CMakeFiles/SECU_OSA.dir/build.make
libSECU_OSA.a: CMakeFiles/SECU_OSA.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/rcdu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking C static library libSECU_OSA.a"
	$(CMAKE_COMMAND) -P CMakeFiles/SECU_OSA.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/SECU_OSA.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/SECU_OSA.dir/build: libSECU_OSA.a

.PHONY : CMakeFiles/SECU_OSA.dir/build

CMakeFiles/SECU_OSA.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/SECU_OSA.dir/cmake_clean.cmake
.PHONY : CMakeFiles/SECU_OSA.dir/clean

CMakeFiles/SECU_OSA.dir/depend:
	cd /home/rcdu/openairinterface5g/cmake_targets/ran_build/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/rcdu/openairinterface5g /home/rcdu/openairinterface5g /home/rcdu/openairinterface5g/cmake_targets/ran_build/build /home/rcdu/openairinterface5g/cmake_targets/ran_build/build /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles/SECU_OSA.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/SECU_OSA.dir/depend

