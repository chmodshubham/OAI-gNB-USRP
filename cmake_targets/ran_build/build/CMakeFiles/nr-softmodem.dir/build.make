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
include CMakeFiles/nr-softmodem.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/nr-softmodem.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/nr-softmodem.dir/flags.make

../../../common/utils/T/T_IDs.h: ../../../common/utils/T/T_messages.txt
../../../common/utils/T/T_IDs.h: ../../../common/utils/LOG/vcd_signal_dumper.c
../../../common/utils/T/T_IDs.h: ../../../common/utils/LOG/vcd_signal_dumper.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/rcdu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating ../../../common/utils/T/T_IDs.h"
	cd /home/rcdu/openairinterface5g/common/utils/T && make check_vcd

CMakeFiles/nr-softmodem.dir/executables/nr-gnb.c.o: CMakeFiles/nr-softmodem.dir/flags.make
CMakeFiles/nr-softmodem.dir/executables/nr-gnb.c.o: ../../../executables/nr-gnb.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rcdu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/nr-softmodem.dir/executables/nr-gnb.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/nr-softmodem.dir/executables/nr-gnb.c.o   -c /home/rcdu/openairinterface5g/executables/nr-gnb.c

CMakeFiles/nr-softmodem.dir/executables/nr-gnb.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/nr-softmodem.dir/executables/nr-gnb.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/rcdu/openairinterface5g/executables/nr-gnb.c > CMakeFiles/nr-softmodem.dir/executables/nr-gnb.c.i

CMakeFiles/nr-softmodem.dir/executables/nr-gnb.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/nr-softmodem.dir/executables/nr-gnb.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/rcdu/openairinterface5g/executables/nr-gnb.c -o CMakeFiles/nr-softmodem.dir/executables/nr-gnb.c.s

CMakeFiles/nr-softmodem.dir/executables/nr-ru.c.o: CMakeFiles/nr-softmodem.dir/flags.make
CMakeFiles/nr-softmodem.dir/executables/nr-ru.c.o: ../../../executables/nr-ru.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rcdu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/nr-softmodem.dir/executables/nr-ru.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/nr-softmodem.dir/executables/nr-ru.c.o   -c /home/rcdu/openairinterface5g/executables/nr-ru.c

CMakeFiles/nr-softmodem.dir/executables/nr-ru.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/nr-softmodem.dir/executables/nr-ru.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/rcdu/openairinterface5g/executables/nr-ru.c > CMakeFiles/nr-softmodem.dir/executables/nr-ru.c.i

CMakeFiles/nr-softmodem.dir/executables/nr-ru.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/nr-softmodem.dir/executables/nr-ru.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/rcdu/openairinterface5g/executables/nr-ru.c -o CMakeFiles/nr-softmodem.dir/executables/nr-ru.c.s

CMakeFiles/nr-softmodem.dir/executables/nr-softmodem.c.o: CMakeFiles/nr-softmodem.dir/flags.make
CMakeFiles/nr-softmodem.dir/executables/nr-softmodem.c.o: ../../../executables/nr-softmodem.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rcdu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/nr-softmodem.dir/executables/nr-softmodem.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/nr-softmodem.dir/executables/nr-softmodem.c.o   -c /home/rcdu/openairinterface5g/executables/nr-softmodem.c

CMakeFiles/nr-softmodem.dir/executables/nr-softmodem.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/nr-softmodem.dir/executables/nr-softmodem.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/rcdu/openairinterface5g/executables/nr-softmodem.c > CMakeFiles/nr-softmodem.dir/executables/nr-softmodem.c.i

CMakeFiles/nr-softmodem.dir/executables/nr-softmodem.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/nr-softmodem.dir/executables/nr-softmodem.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/rcdu/openairinterface5g/executables/nr-softmodem.c -o CMakeFiles/nr-softmodem.dir/executables/nr-softmodem.c.s

CMakeFiles/nr-softmodem.dir/executables/softmodem-common.c.o: CMakeFiles/nr-softmodem.dir/flags.make
CMakeFiles/nr-softmodem.dir/executables/softmodem-common.c.o: ../../../executables/softmodem-common.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rcdu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/nr-softmodem.dir/executables/softmodem-common.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/nr-softmodem.dir/executables/softmodem-common.c.o   -c /home/rcdu/openairinterface5g/executables/softmodem-common.c

CMakeFiles/nr-softmodem.dir/executables/softmodem-common.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/nr-softmodem.dir/executables/softmodem-common.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/rcdu/openairinterface5g/executables/softmodem-common.c > CMakeFiles/nr-softmodem.dir/executables/softmodem-common.c.i

CMakeFiles/nr-softmodem.dir/executables/softmodem-common.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/nr-softmodem.dir/executables/softmodem-common.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/rcdu/openairinterface5g/executables/softmodem-common.c -o CMakeFiles/nr-softmodem.dir/executables/softmodem-common.c.s

CMakeFiles/nr-softmodem.dir/radio/COMMON/common_lib.c.o: CMakeFiles/nr-softmodem.dir/flags.make
CMakeFiles/nr-softmodem.dir/radio/COMMON/common_lib.c.o: ../../../radio/COMMON/common_lib.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rcdu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/nr-softmodem.dir/radio/COMMON/common_lib.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/nr-softmodem.dir/radio/COMMON/common_lib.c.o   -c /home/rcdu/openairinterface5g/radio/COMMON/common_lib.c

CMakeFiles/nr-softmodem.dir/radio/COMMON/common_lib.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/nr-softmodem.dir/radio/COMMON/common_lib.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/rcdu/openairinterface5g/radio/COMMON/common_lib.c > CMakeFiles/nr-softmodem.dir/radio/COMMON/common_lib.c.i

CMakeFiles/nr-softmodem.dir/radio/COMMON/common_lib.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/nr-softmodem.dir/radio/COMMON/common_lib.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/rcdu/openairinterface5g/radio/COMMON/common_lib.c -o CMakeFiles/nr-softmodem.dir/radio/COMMON/common_lib.c.s

CMakeFiles/nr-softmodem.dir/radio/COMMON/record_player.c.o: CMakeFiles/nr-softmodem.dir/flags.make
CMakeFiles/nr-softmodem.dir/radio/COMMON/record_player.c.o: ../../../radio/COMMON/record_player.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rcdu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object CMakeFiles/nr-softmodem.dir/radio/COMMON/record_player.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/nr-softmodem.dir/radio/COMMON/record_player.c.o   -c /home/rcdu/openairinterface5g/radio/COMMON/record_player.c

CMakeFiles/nr-softmodem.dir/radio/COMMON/record_player.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/nr-softmodem.dir/radio/COMMON/record_player.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/rcdu/openairinterface5g/radio/COMMON/record_player.c > CMakeFiles/nr-softmodem.dir/radio/COMMON/record_player.c.i

CMakeFiles/nr-softmodem.dir/radio/COMMON/record_player.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/nr-softmodem.dir/radio/COMMON/record_player.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/rcdu/openairinterface5g/radio/COMMON/record_player.c -o CMakeFiles/nr-softmodem.dir/radio/COMMON/record_player.c.s

CMakeFiles/nr-softmodem.dir/openair2/RRC/NAS/nas_config.c.o: CMakeFiles/nr-softmodem.dir/flags.make
CMakeFiles/nr-softmodem.dir/openair2/RRC/NAS/nas_config.c.o: ../../../openair2/RRC/NAS/nas_config.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rcdu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building C object CMakeFiles/nr-softmodem.dir/openair2/RRC/NAS/nas_config.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/nr-softmodem.dir/openair2/RRC/NAS/nas_config.c.o   -c /home/rcdu/openairinterface5g/openair2/RRC/NAS/nas_config.c

CMakeFiles/nr-softmodem.dir/openair2/RRC/NAS/nas_config.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/nr-softmodem.dir/openair2/RRC/NAS/nas_config.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/rcdu/openairinterface5g/openair2/RRC/NAS/nas_config.c > CMakeFiles/nr-softmodem.dir/openair2/RRC/NAS/nas_config.c.i

CMakeFiles/nr-softmodem.dir/openair2/RRC/NAS/nas_config.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/nr-softmodem.dir/openair2/RRC/NAS/nas_config.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/rcdu/openairinterface5g/openair2/RRC/NAS/nas_config.c -o CMakeFiles/nr-softmodem.dir/openair2/RRC/NAS/nas_config.c.s

CMakeFiles/nr-softmodem.dir/openair2/RRC/NAS/rb_config.c.o: CMakeFiles/nr-softmodem.dir/flags.make
CMakeFiles/nr-softmodem.dir/openair2/RRC/NAS/rb_config.c.o: ../../../openair2/RRC/NAS/rb_config.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rcdu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building C object CMakeFiles/nr-softmodem.dir/openair2/RRC/NAS/rb_config.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/nr-softmodem.dir/openair2/RRC/NAS/rb_config.c.o   -c /home/rcdu/openairinterface5g/openair2/RRC/NAS/rb_config.c

CMakeFiles/nr-softmodem.dir/openair2/RRC/NAS/rb_config.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/nr-softmodem.dir/openair2/RRC/NAS/rb_config.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/rcdu/openairinterface5g/openair2/RRC/NAS/rb_config.c > CMakeFiles/nr-softmodem.dir/openair2/RRC/NAS/rb_config.c.i

CMakeFiles/nr-softmodem.dir/openair2/RRC/NAS/rb_config.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/nr-softmodem.dir/openair2/RRC/NAS/rb_config.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/rcdu/openairinterface5g/openair2/RRC/NAS/rb_config.c -o CMakeFiles/nr-softmodem.dir/openair2/RRC/NAS/rb_config.c.s

CMakeFiles/nr-softmodem.dir/openair1/SIMULATION/ETH_TRANSPORT/netlink_init.c.o: CMakeFiles/nr-softmodem.dir/flags.make
CMakeFiles/nr-softmodem.dir/openair1/SIMULATION/ETH_TRANSPORT/netlink_init.c.o: ../../../openair1/SIMULATION/ETH_TRANSPORT/netlink_init.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rcdu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building C object CMakeFiles/nr-softmodem.dir/openair1/SIMULATION/ETH_TRANSPORT/netlink_init.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/nr-softmodem.dir/openair1/SIMULATION/ETH_TRANSPORT/netlink_init.c.o   -c /home/rcdu/openairinterface5g/openair1/SIMULATION/ETH_TRANSPORT/netlink_init.c

CMakeFiles/nr-softmodem.dir/openair1/SIMULATION/ETH_TRANSPORT/netlink_init.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/nr-softmodem.dir/openair1/SIMULATION/ETH_TRANSPORT/netlink_init.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/rcdu/openairinterface5g/openair1/SIMULATION/ETH_TRANSPORT/netlink_init.c > CMakeFiles/nr-softmodem.dir/openair1/SIMULATION/ETH_TRANSPORT/netlink_init.c.i

CMakeFiles/nr-softmodem.dir/openair1/SIMULATION/ETH_TRANSPORT/netlink_init.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/nr-softmodem.dir/openair1/SIMULATION/ETH_TRANSPORT/netlink_init.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/rcdu/openairinterface5g/openair1/SIMULATION/ETH_TRANSPORT/netlink_init.c -o CMakeFiles/nr-softmodem.dir/openair1/SIMULATION/ETH_TRANSPORT/netlink_init.c.s

CMakeFiles/nr-softmodem.dir/common/utils/lte/ue_power.c.o: CMakeFiles/nr-softmodem.dir/flags.make
CMakeFiles/nr-softmodem.dir/common/utils/lte/ue_power.c.o: ../../../common/utils/lte/ue_power.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rcdu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building C object CMakeFiles/nr-softmodem.dir/common/utils/lte/ue_power.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/nr-softmodem.dir/common/utils/lte/ue_power.c.o   -c /home/rcdu/openairinterface5g/common/utils/lte/ue_power.c

CMakeFiles/nr-softmodem.dir/common/utils/lte/ue_power.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/nr-softmodem.dir/common/utils/lte/ue_power.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/rcdu/openairinterface5g/common/utils/lte/ue_power.c > CMakeFiles/nr-softmodem.dir/common/utils/lte/ue_power.c.i

CMakeFiles/nr-softmodem.dir/common/utils/lte/ue_power.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/nr-softmodem.dir/common/utils/lte/ue_power.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/rcdu/openairinterface5g/common/utils/lte/ue_power.c -o CMakeFiles/nr-softmodem.dir/common/utils/lte/ue_power.c.s

CMakeFiles/nr-softmodem.dir/common/utils/lte/prach_utils.c.o: CMakeFiles/nr-softmodem.dir/flags.make
CMakeFiles/nr-softmodem.dir/common/utils/lte/prach_utils.c.o: ../../../common/utils/lte/prach_utils.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rcdu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building C object CMakeFiles/nr-softmodem.dir/common/utils/lte/prach_utils.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/nr-softmodem.dir/common/utils/lte/prach_utils.c.o   -c /home/rcdu/openairinterface5g/common/utils/lte/prach_utils.c

CMakeFiles/nr-softmodem.dir/common/utils/lte/prach_utils.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/nr-softmodem.dir/common/utils/lte/prach_utils.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/rcdu/openairinterface5g/common/utils/lte/prach_utils.c > CMakeFiles/nr-softmodem.dir/common/utils/lte/prach_utils.c.i

CMakeFiles/nr-softmodem.dir/common/utils/lte/prach_utils.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/nr-softmodem.dir/common/utils/lte/prach_utils.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/rcdu/openairinterface5g/common/utils/lte/prach_utils.c -o CMakeFiles/nr-softmodem.dir/common/utils/lte/prach_utils.c.s

CMakeFiles/nr-softmodem.dir/common/utils/nr/nr_common.c.o: CMakeFiles/nr-softmodem.dir/flags.make
CMakeFiles/nr-softmodem.dir/common/utils/nr/nr_common.c.o: ../../../common/utils/nr/nr_common.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rcdu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building C object CMakeFiles/nr-softmodem.dir/common/utils/nr/nr_common.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/nr-softmodem.dir/common/utils/nr/nr_common.c.o   -c /home/rcdu/openairinterface5g/common/utils/nr/nr_common.c

CMakeFiles/nr-softmodem.dir/common/utils/nr/nr_common.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/nr-softmodem.dir/common/utils/nr/nr_common.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/rcdu/openairinterface5g/common/utils/nr/nr_common.c > CMakeFiles/nr-softmodem.dir/common/utils/nr/nr_common.c.i

CMakeFiles/nr-softmodem.dir/common/utils/nr/nr_common.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/nr-softmodem.dir/common/utils/nr/nr_common.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/rcdu/openairinterface5g/common/utils/nr/nr_common.c -o CMakeFiles/nr-softmodem.dir/common/utils/nr/nr_common.c.s

CMakeFiles/nr-softmodem.dir/openair2/PHY_INTERFACE/queue_t.c.o: CMakeFiles/nr-softmodem.dir/flags.make
CMakeFiles/nr-softmodem.dir/openair2/PHY_INTERFACE/queue_t.c.o: ../../../openair2/PHY_INTERFACE/queue_t.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rcdu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building C object CMakeFiles/nr-softmodem.dir/openair2/PHY_INTERFACE/queue_t.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/nr-softmodem.dir/openair2/PHY_INTERFACE/queue_t.c.o   -c /home/rcdu/openairinterface5g/openair2/PHY_INTERFACE/queue_t.c

CMakeFiles/nr-softmodem.dir/openair2/PHY_INTERFACE/queue_t.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/nr-softmodem.dir/openair2/PHY_INTERFACE/queue_t.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/rcdu/openairinterface5g/openair2/PHY_INTERFACE/queue_t.c > CMakeFiles/nr-softmodem.dir/openair2/PHY_INTERFACE/queue_t.c.i

CMakeFiles/nr-softmodem.dir/openair2/PHY_INTERFACE/queue_t.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/nr-softmodem.dir/openair2/PHY_INTERFACE/queue_t.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/rcdu/openairinterface5g/openair2/PHY_INTERFACE/queue_t.c -o CMakeFiles/nr-softmodem.dir/openair2/PHY_INTERFACE/queue_t.c.s

CMakeFiles/nr-softmodem.dir/openair1/PHY/TOOLS/phy_scope_interface.c.o: CMakeFiles/nr-softmodem.dir/flags.make
CMakeFiles/nr-softmodem.dir/openair1/PHY/TOOLS/phy_scope_interface.c.o: ../../../openair1/PHY/TOOLS/phy_scope_interface.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rcdu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Building C object CMakeFiles/nr-softmodem.dir/openair1/PHY/TOOLS/phy_scope_interface.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/nr-softmodem.dir/openair1/PHY/TOOLS/phy_scope_interface.c.o   -c /home/rcdu/openairinterface5g/openair1/PHY/TOOLS/phy_scope_interface.c

CMakeFiles/nr-softmodem.dir/openair1/PHY/TOOLS/phy_scope_interface.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/nr-softmodem.dir/openair1/PHY/TOOLS/phy_scope_interface.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/rcdu/openairinterface5g/openair1/PHY/TOOLS/phy_scope_interface.c > CMakeFiles/nr-softmodem.dir/openair1/PHY/TOOLS/phy_scope_interface.c.i

CMakeFiles/nr-softmodem.dir/openair1/PHY/TOOLS/phy_scope_interface.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/nr-softmodem.dir/openair1/PHY/TOOLS/phy_scope_interface.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/rcdu/openairinterface5g/openair1/PHY/TOOLS/phy_scope_interface.c -o CMakeFiles/nr-softmodem.dir/openair1/PHY/TOOLS/phy_scope_interface.c.s

CMakeFiles/nr-softmodem.dir/common/utils/T/T.c.o: CMakeFiles/nr-softmodem.dir/flags.make
CMakeFiles/nr-softmodem.dir/common/utils/T/T.c.o: ../../../common/utils/T/T.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rcdu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_16) "Building C object CMakeFiles/nr-softmodem.dir/common/utils/T/T.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/nr-softmodem.dir/common/utils/T/T.c.o   -c /home/rcdu/openairinterface5g/common/utils/T/T.c

CMakeFiles/nr-softmodem.dir/common/utils/T/T.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/nr-softmodem.dir/common/utils/T/T.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/rcdu/openairinterface5g/common/utils/T/T.c > CMakeFiles/nr-softmodem.dir/common/utils/T/T.c.i

CMakeFiles/nr-softmodem.dir/common/utils/T/T.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/nr-softmodem.dir/common/utils/T/T.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/rcdu/openairinterface5g/common/utils/T/T.c -o CMakeFiles/nr-softmodem.dir/common/utils/T/T.c.s

CMakeFiles/nr-softmodem.dir/common/utils/T/local_tracer.c.o: CMakeFiles/nr-softmodem.dir/flags.make
CMakeFiles/nr-softmodem.dir/common/utils/T/local_tracer.c.o: ../../../common/utils/T/local_tracer.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rcdu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_17) "Building C object CMakeFiles/nr-softmodem.dir/common/utils/T/local_tracer.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/nr-softmodem.dir/common/utils/T/local_tracer.c.o   -c /home/rcdu/openairinterface5g/common/utils/T/local_tracer.c

CMakeFiles/nr-softmodem.dir/common/utils/T/local_tracer.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/nr-softmodem.dir/common/utils/T/local_tracer.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/rcdu/openairinterface5g/common/utils/T/local_tracer.c > CMakeFiles/nr-softmodem.dir/common/utils/T/local_tracer.c.i

CMakeFiles/nr-softmodem.dir/common/utils/T/local_tracer.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/nr-softmodem.dir/common/utils/T/local_tracer.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/rcdu/openairinterface5g/common/utils/T/local_tracer.c -o CMakeFiles/nr-softmodem.dir/common/utils/T/local_tracer.c.s

CMakeFiles/nr-softmodem.dir/common/utils/load_module_shlib.c.o: CMakeFiles/nr-softmodem.dir/flags.make
CMakeFiles/nr-softmodem.dir/common/utils/load_module_shlib.c.o: ../../../common/utils/load_module_shlib.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rcdu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_18) "Building C object CMakeFiles/nr-softmodem.dir/common/utils/load_module_shlib.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/nr-softmodem.dir/common/utils/load_module_shlib.c.o   -c /home/rcdu/openairinterface5g/common/utils/load_module_shlib.c

CMakeFiles/nr-softmodem.dir/common/utils/load_module_shlib.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/nr-softmodem.dir/common/utils/load_module_shlib.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/rcdu/openairinterface5g/common/utils/load_module_shlib.c > CMakeFiles/nr-softmodem.dir/common/utils/load_module_shlib.c.i

CMakeFiles/nr-softmodem.dir/common/utils/load_module_shlib.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/nr-softmodem.dir/common/utils/load_module_shlib.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/rcdu/openairinterface5g/common/utils/load_module_shlib.c -o CMakeFiles/nr-softmodem.dir/common/utils/load_module_shlib.c.s

# Object files for target nr-softmodem
nr__softmodem_OBJECTS = \
"CMakeFiles/nr-softmodem.dir/executables/nr-gnb.c.o" \
"CMakeFiles/nr-softmodem.dir/executables/nr-ru.c.o" \
"CMakeFiles/nr-softmodem.dir/executables/nr-softmodem.c.o" \
"CMakeFiles/nr-softmodem.dir/executables/softmodem-common.c.o" \
"CMakeFiles/nr-softmodem.dir/radio/COMMON/common_lib.c.o" \
"CMakeFiles/nr-softmodem.dir/radio/COMMON/record_player.c.o" \
"CMakeFiles/nr-softmodem.dir/openair2/RRC/NAS/nas_config.c.o" \
"CMakeFiles/nr-softmodem.dir/openair2/RRC/NAS/rb_config.c.o" \
"CMakeFiles/nr-softmodem.dir/openair1/SIMULATION/ETH_TRANSPORT/netlink_init.c.o" \
"CMakeFiles/nr-softmodem.dir/common/utils/lte/ue_power.c.o" \
"CMakeFiles/nr-softmodem.dir/common/utils/lte/prach_utils.c.o" \
"CMakeFiles/nr-softmodem.dir/common/utils/nr/nr_common.c.o" \
"CMakeFiles/nr-softmodem.dir/openair2/PHY_INTERFACE/queue_t.c.o" \
"CMakeFiles/nr-softmodem.dir/openair1/PHY/TOOLS/phy_scope_interface.c.o" \
"CMakeFiles/nr-softmodem.dir/common/utils/T/T.c.o" \
"CMakeFiles/nr-softmodem.dir/common/utils/T/local_tracer.c.o" \
"CMakeFiles/nr-softmodem.dir/common/utils/load_module_shlib.c.o"

# External object files for target nr-softmodem
nr__softmodem_EXTERNAL_OBJECTS =

nr-softmodem: CMakeFiles/nr-softmodem.dir/executables/nr-gnb.c.o
nr-softmodem: CMakeFiles/nr-softmodem.dir/executables/nr-ru.c.o
nr-softmodem: CMakeFiles/nr-softmodem.dir/executables/nr-softmodem.c.o
nr-softmodem: CMakeFiles/nr-softmodem.dir/executables/softmodem-common.c.o
nr-softmodem: CMakeFiles/nr-softmodem.dir/radio/COMMON/common_lib.c.o
nr-softmodem: CMakeFiles/nr-softmodem.dir/radio/COMMON/record_player.c.o
nr-softmodem: CMakeFiles/nr-softmodem.dir/openair2/RRC/NAS/nas_config.c.o
nr-softmodem: CMakeFiles/nr-softmodem.dir/openair2/RRC/NAS/rb_config.c.o
nr-softmodem: CMakeFiles/nr-softmodem.dir/openair1/SIMULATION/ETH_TRANSPORT/netlink_init.c.o
nr-softmodem: CMakeFiles/nr-softmodem.dir/common/utils/lte/ue_power.c.o
nr-softmodem: CMakeFiles/nr-softmodem.dir/common/utils/lte/prach_utils.c.o
nr-softmodem: CMakeFiles/nr-softmodem.dir/common/utils/nr/nr_common.c.o
nr-softmodem: CMakeFiles/nr-softmodem.dir/openair2/PHY_INTERFACE/queue_t.c.o
nr-softmodem: CMakeFiles/nr-softmodem.dir/openair1/PHY/TOOLS/phy_scope_interface.c.o
nr-softmodem: CMakeFiles/nr-softmodem.dir/common/utils/T/T.c.o
nr-softmodem: CMakeFiles/nr-softmodem.dir/common/utils/T/local_tracer.c.o
nr-softmodem: CMakeFiles/nr-softmodem.dir/common/utils/load_module_shlib.c.o
nr-softmodem: CMakeFiles/nr-softmodem.dir/build.make
nr-softmodem: libUTIL.a
nr-softmodem: libHASHTABLE.a
nr-softmodem: libSCTP_CLIENT.a
nr-softmodem: libSCHED_LIB.a
nr-softmodem: libSCHED_RU_LIB.a
nr-softmodem: libSCHED_NR_LIB.a
nr-softmodem: libPHY_NR.a
nr-softmodem: libPHY.a
nr-softmodem: libPHY_COMMON.a
nr-softmodem: libPHY_NR_COMMON.a
nr-softmodem: libPHY_RU.a
nr-softmodem: libGTPV1U.a
nr-softmodem: libSECU_CN.a
nr-softmodem: libSECU_OSA.a
nr-softmodem: libITTI.a
nr-softmodem: libLIB_NAS_UE.a
nr-softmodem: liblte_rrc.a
nr-softmodem: libnr_rrc.a
nr-softmodem: libngap.a
nr-softmodem: libs1ap.a
nr-softmodem: libL2_LTE_NR.a
nr-softmodem: libL2_NR.a
nr-softmodem: libMAC_NR_COMMON.a
nr-softmodem: libNFAPI_COMMON_LIB.a
nr-softmodem: libNFAPI_LIB.a
nr-softmodem: libNFAPI_VNF_LIB.a
nr-softmodem: libNFAPI_PNF_LIB.a
nr-softmodem: libNFAPI_USER_LIB.a
nr-softmodem: libSIMU.a
nr-softmodem: libx2ap.a
nr-softmodem: libf1ap.a
nr-softmodem: libm2ap.a
nr-softmodem: libm3ap.a
nr-softmodem: libCONFIG_LIB.a
nr-softmodem: openair2/RRC/NR/MESSAGES/libasn1_nr_rrc.a
nr-softmodem: openair2/RRC/LTE/MESSAGES/libasn1_lte_rrc.a
nr-softmodem: openair2/RRC/LTE/MESSAGES/libasn1_lte_rrc.a
nr-softmodem: openair2/RRC/NR/MESSAGES/libasn1_nr_rrc.a
nr-softmodem: openair3/S1AP/MESSAGES/libasn1_s1ap.a
nr-softmodem: openair3/NGAP/MESSAGES/libasn1_ngap.a
nr-softmodem: openair2/M2AP/MESSAGES/libasn1_m2ap.a
nr-softmodem: openair3/M3AP/MESSAGES/libasn1_m3ap.a
nr-softmodem: openair2/X2AP/MESSAGES/libasn1_x2ap.a
nr-softmodem: openair2/F1AP/MESSAGES/libasn1_f1ap.a
nr-softmodem: openair3/LPP/MESSAGES/libasn1_lpp.a
nr-softmodem: libs1ap.a
nr-softmodem: openair3/S1AP/MESSAGES/libasn1_s1ap.a
nr-softmodem: libngap.a
nr-softmodem: openair3/NGAP/MESSAGES/libasn1_ngap.a
nr-softmodem: libm2ap.a
nr-softmodem: liblte_rrc.a
nr-softmodem: libnr_rrc.a
nr-softmodem: openair2/M2AP/MESSAGES/libasn1_m2ap.a
nr-softmodem: openair2/RRC/NR/MESSAGES/libasn1_nr_rrc.a
nr-softmodem: openair2/RRC/LTE/MESSAGES/libasn1_lte_rrc.a
nr-softmodem: CMakeFiles/nr-softmodem.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/rcdu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_19) "Linking CXX executable nr-softmodem"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/nr-softmodem.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/nr-softmodem.dir/build: nr-softmodem

.PHONY : CMakeFiles/nr-softmodem.dir/build

CMakeFiles/nr-softmodem.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/nr-softmodem.dir/cmake_clean.cmake
.PHONY : CMakeFiles/nr-softmodem.dir/clean

CMakeFiles/nr-softmodem.dir/depend: ../../../common/utils/T/T_IDs.h
	cd /home/rcdu/openairinterface5g/cmake_targets/ran_build/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/rcdu/openairinterface5g /home/rcdu/openairinterface5g /home/rcdu/openairinterface5g/cmake_targets/ran_build/build /home/rcdu/openairinterface5g/cmake_targets/ran_build/build /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles/nr-softmodem.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/nr-softmodem.dir/depend

