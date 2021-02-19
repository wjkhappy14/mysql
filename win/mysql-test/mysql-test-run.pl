#!/usr/bin/perl
# Call mtr in out-of-source build
$ENV{MTR_BINDIR} = 'E:/mysql/win';
chdir('E:/mysql/mysql-5.7.33/mysql-test');
exit(system($^X, 'E:/mysql/mysql-5.7.33/mysql-test/mysql-test-run.pl', @ARGV) >> 8);
