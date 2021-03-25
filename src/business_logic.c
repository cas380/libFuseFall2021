#include <stdbool.h>
#include <stdlib.h>
#include <sys/types.h>

#include "common.h"
#include "business_logic.h"
#include "database.h"

int reserve_space (uid_t user_id, uint64_t reservation_size){
	Record  record;
	int	return_value;

	log_data("Reserving %lu bytes for user %i\n", reservation_size, user_id);
	return_value = get_user_record(user_id, &record);
	log_data("Get user returned value %i\n", return_value);	
	if (return_value == 3) {
		if (add_user_record(user_id, 0, DEFAULT_BYTE_QUOTA, 0, DEFAULT_FILE_QUOTA) != 0)
			return 0;
		if (get_user_record(user_id, &record) != 0)
			return 0;
	}else if (return_value != 0)
		return 0;

	if ((record.byte_total + reservation_size) > record.byte_quota)
		return 0;
	else {
		if(change_user_record(user_id, reservation_size, 0, 0, 0) != 0)
			return 0;
	}
	return 1;
}

int update_user_total(uid_t user_id, int64_t byte_total_changed){
	int return_value;
	
	log_data("Updating user total by %li bytes for user %i\n", byte_total_changed, user_id);
	return_value = change_user_record(user_id, byte_total_changed, 0, 0, 0);
	if (return_value == 3) {
		if (byte_total_changed < 0) {
			if (add_user_record(user_id, 0, DEFAULT_BYTE_QUOTA, 0, DEFAULT_FILE_QUOTA) != 0)
				return 1;
		}else {
			if (add_user_record(user_id, byte_total_changed, DEFAULT_BYTE_QUOTA, 0, DEFAULT_FILE_QUOTA) != 0)
				return 1;
		}
	}else if (return_value != 0)
		return 1;
	return 0;
}

int db_init()
{
	log_data("Initializing database\n");
	return database_init();
	log_data("Finished initializing database\n");
}
