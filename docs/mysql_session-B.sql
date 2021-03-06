show  full processlist;
show DATABASES;
use information_schema;
show TABLES;
show VARIABLES  like'%TRANSACTION%';
set session transaction isolation level read uncommitted ;
show variables like '%tx_isolation%';
show variables like 'tx_iso%';
show variables like 'auto%';
show status like '%lock%' ;
set autocommit = 0;
show variables like '%commit';
select sleep(1);
-- 查看表被锁状态 
show OPEN TABLES where In_use > 0;
show engine innodb status;
-- 查询 正在执行的事务：
SELECT * FROM INFORMATION_SCHEMA.INNODB_TRX LIMIT 0, 1000;
-- 查看正在锁的事务
SELECT * FROM INFORMATION_SCHEMA.INNODB_LOCKS;
-- 查看等待锁的事务
SELECT * FROM INFORMATION_SCHEMA.INNODB_LOCK_WAITS;


