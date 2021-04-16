start transaction;
select * from  UserAccount  WHERE UserId=10  for update;
select * from  UserAccount  WHERE UserId=1  for update;

						 UPDATE UserAccount
                         SET
                         Balance =Balance-1,
                         LastUpdateTime= NOW()
                         WHERE UserId>1 and Balance-1>0;
delete  from  UserAccount  WHERE UserId=3 ;
delete  from  UserAccount  WHERE UserId=1 ;

rollback;
commit;



                          
                          


                          
                          