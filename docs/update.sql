set autocommit=0;
-- read uncommitted read committed;
set session transaction isolation level read committed ;
start transaction;
SELECT * FROM ABP.UserAccount
where Balance<1000 for update;
update ABP.UserAccount
set balance=balance+balance
where Balance<1000;
-- commit;
-- rollback;