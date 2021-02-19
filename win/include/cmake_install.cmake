# Install script for directory: E:/mysql/mysql-5.7.33/include

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/Program Files/MySQL")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xDevelopmentx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE FILE FILES "E:/mysql/mysql-5.7.33/include/../libbinlogevents/export/binary_log_types.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xDevelopmentx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE FILE FILES
    "E:/mysql/mysql-5.7.33/include/mysql.h"
    "E:/mysql/mysql-5.7.33/include/mysql_com.h"
    "E:/mysql/mysql-5.7.33/include/my_command.h"
    "E:/mysql/mysql-5.7.33/include/mysql_time.h"
    "E:/mysql/mysql-5.7.33/include/my_list.h"
    "E:/mysql/mysql-5.7.33/include/my_alloc.h"
    "E:/mysql/mysql-5.7.33/include/typelib.h"
    "E:/mysql/mysql-5.7.33/include/mysql/plugin.h"
    "E:/mysql/mysql-5.7.33/include/mysql/plugin_audit.h"
    "E:/mysql/mysql-5.7.33/include/mysql/plugin_ftparser.h"
    "E:/mysql/mysql-5.7.33/include/mysql/plugin_validate_password.h"
    "E:/mysql/mysql-5.7.33/include/mysql/plugin_keyring.h"
    "E:/mysql/mysql-5.7.33/include/mysql/plugin_group_replication.h"
    "E:/mysql/mysql-5.7.33/include/my_dbug.h"
    "E:/mysql/mysql-5.7.33/include/m_string.h"
    "E:/mysql/mysql-5.7.33/include/my_sys.h"
    "E:/mysql/mysql-5.7.33/include/my_xml.h"
    "E:/mysql/mysql-5.7.33/include/mysql_embed.h"
    "E:/mysql/mysql-5.7.33/include/my_thread.h"
    "E:/mysql/mysql-5.7.33/include/my_thread_local.h"
    "E:/mysql/mysql-5.7.33/include/decimal.h"
    "E:/mysql/mysql-5.7.33/include/errmsg.h"
    "E:/mysql/mysql-5.7.33/include/my_global.h"
    "E:/mysql/mysql-5.7.33/include/my_getopt.h"
    "E:/mysql/mysql-5.7.33/include/sslopt-longopts.h"
    "E:/mysql/mysql-5.7.33/include/my_dir.h"
    "E:/mysql/mysql-5.7.33/include/sslopt-vars.h"
    "E:/mysql/mysql-5.7.33/include/sslopt-case.h"
    "E:/mysql/mysql-5.7.33/include/sql_common.h"
    "E:/mysql/mysql-5.7.33/include/keycache.h"
    "E:/mysql/mysql-5.7.33/include/m_ctype.h"
    "E:/mysql/mysql-5.7.33/include/my_compiler.h"
    "E:/mysql/mysql-5.7.33/include/mysql_com_server.h"
    "E:/mysql/mysql-5.7.33/include/my_byteorder.h"
    "E:/mysql/mysql-5.7.33/include/byte_order_generic.h"
    "E:/mysql/mysql-5.7.33/include/byte_order_generic_x86.h"
    "E:/mysql/mysql-5.7.33/include/little_endian.h"
    "E:/mysql/mysql-5.7.33/include/big_endian.h"
    "E:/mysql/mysql-5.7.33/include/thr_cond.h"
    "E:/mysql/mysql-5.7.33/include/thr_mutex.h"
    "E:/mysql/mysql-5.7.33/include/thr_rwlock.h"
    "E:/mysql/win/include/mysql_version.h"
    "E:/mysql/win/include/my_config.h"
    "E:/mysql/win/include/mysqld_ername.h"
    "E:/mysql/win/include/mysqld_error.h"
    "E:/mysql/win/include/sql_state.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xDevelopmentx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mysql" TYPE DIRECTORY FILES "E:/mysql/mysql-5.7.33/include/mysql/" REGEX "/[^/]*\\.h$" REGEX "/psi\\_abi[^/]*$" EXCLUDE)
endif()

