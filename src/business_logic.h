#ifndef _BUSINESS_LOGIC_H_
#define _BUSINESS_LOGIC_H_

/*
 * Checks whether the user exists in the database.
 * If they do not exist, add the user to the database.
 * 
 * returns 0 if successful, non-zero if error
 */
int ensure_user_exists(uint64_t user_id);

/*
 * Changes the usage total for given user
 * uint64_t user_id, the inter id representing the user
 * int32_t total_change: total number of bytes to add to usage
 * returns 1 if successful, 0 if unsuccessful
 */
int update_usage_record(uint64_t user_id, int64_t total_change);

/*
 * Changes the usage total for given user
 * uint64_t user_id, the inter id representing the user
 * int32_t total_change: total number of bytes to add to usage
 * returns 1 if successful, 0 if unsuccessful
 */
int update_file_record(uint64_t user_id, int64_t total_change);

/*
 * Prints every value in the database to console.
 */
void print_all();

/*
 * Initializes the global database, pointing to a file.
 * const char *path: The file to create the database as. 
 */
int
db_init(const char* path);


#endif /*_BUSINESS_LOGIC_H_*/
