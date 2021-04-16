START TRANSACTION  with consistent snapshot;
SELECT *
FROM TransactionItem
order by LastUpdateTime desc
FOR UPDATE;
SELECT * FROM ABP.UserAccount
lock in share mode 
;
UPDATE UserAccount
SET
Balance =Balance- 10,
LastUpdateTime= NOW()
WHERE  Balance-100>0
limit 1;

start TRANSACTION;
SELECT * FROM ABP.UserAccount for update;
update ABP.UserAccount
set balance=rand()
where balance=0
limit 1;
select sleep(1);
-- commit