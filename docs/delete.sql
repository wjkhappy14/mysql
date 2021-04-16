set autocommit=0;
-- read uncommitted read committed;
set session transaction isolation level read uncommitted ;
start transaction;
delete from ABP.TransactionItem  
where  AccountNo='ANGKOR-DEV'   and  BankNo='ANGKOR-DEV' ;
-- commit;
-- rollback;