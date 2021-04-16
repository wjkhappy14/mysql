SELECT 
    wait_started,	wait_age,	wait_age_secs,	locked_table,	locked_table_schema,	locked_table_name,	locked_table_partition,	locked_table_subpartition,
	locked_index,	locked_type,	waiting_trx_id,	waiting_trx_started,	waiting_trx_age,	waiting_trx_rows_locked,	waiting_trx_rows_modified,	
    waiting_pid	waiting_query,	waiting_lock_id,	waiting_lock_mode,	blocking_trx_id,	blocking_pid,	blocking_query,	blocking_lock_id,	blocking_lock_mode,	
    blocking_trx_started,	blocking_trx_age,	blocking_trx_rows_locked,	blocking_trx_rows_modified,	sql_kill_blocking_query,	sql_kill_blocking_connection
 FROM sys.x$innodb_lock_waits;
