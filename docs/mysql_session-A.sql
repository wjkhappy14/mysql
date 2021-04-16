START TRANSACTION;    
 SELECT * FROM ABP.TransactionItem  
 where amount between 1 and 100
 LOCK IN SHARE MODE;
 update ABP.TransactionItem
set userid=4,bankno=rand()*1000
where userid='ANGKOR-DEV'
limit 1;
 -- commit;
 
 
START TRANSACTION;
SELECT * FROM ABP.TransactionItem for update;
update ABP.TransactionItem
set userid=2,bankno=rand()*1000
where userid='ANGKOR-DEV'
limit 1
 

 
 
