 desc
 update ABP.TransactionItem  
 set amount=ROUND(RAND() * 5444 + 234)
 where amount=0 limit 10