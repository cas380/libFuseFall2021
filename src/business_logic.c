#include "common.h"
#include "business_logic.h"
#include "database.h"

int ensure_user_exists(uint64_t user_id){
	if(!contains_user(user_id)){
		return add_user(user_id);
	}
	return 0;
}