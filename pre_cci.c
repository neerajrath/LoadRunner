# 1 "c:\\loadrunner\\projects\\1\\loadrunner\\\\combined_Web-Git1.c"
# 1 "C:\\LoadRunner\\include/lrun.h" 1
 
 












 











# 103 "C:\\LoadRunner\\include/lrun.h"





















































		


		typedef unsigned size_t;
	
	
        
	

















	

 



















 
 
 
 
 


 
 
 
 
 
 














int     lr_start_transaction   (char * transaction_name);
int lr_start_sub_transaction          (char * transaction_name, char * trans_parent);
long lr_start_transaction_instance    (char * transaction_name, long parent_handle);
int   lr_start_cross_vuser_transaction		(char * transaction_name, char * trans_id_param); 



int     lr_end_transaction     (char * transaction_name, int status);
int lr_end_sub_transaction            (char * transaction_name, int status);
int lr_end_transaction_instance       (long transaction, int status);
int   lr_end_cross_vuser_transaction	(char * transaction_name, char * trans_id_param, int status);


 
typedef char* lr_uuid_t;
 



lr_uuid_t lr_generate_uuid();

 


int lr_generate_uuid_free(lr_uuid_t uuid);

 



int lr_generate_uuid_on_buf(lr_uuid_t buf);

   
# 273 "C:\\LoadRunner\\include/lrun.h"
int lr_start_distributed_transaction  (char * transaction_name, lr_uuid_t correlator, long timeout  );

   







int lr_end_distributed_transaction  (lr_uuid_t correlator, int status);


double lr_stop_transaction            (char * transaction_name);
double lr_stop_transaction_instance   (long parent_handle);


void lr_resume_transaction           (char * trans_name);
void lr_resume_transaction_instance  (long trans_handle);


int lr_update_transaction            (const char *trans_name);


 
void lr_wasted_time(long time);


 
int lr_set_transaction(const char *name, double duration, int status);
 
long lr_set_transaction_instance(const char *name, double duration, int status, long parent_handle);


int   lr_user_data_point                      (char *, double);
long lr_user_data_point_instance                   (char *, double, long);
 



int lr_user_data_point_ex(const char *dp_name, double value, int log_flag);
long lr_user_data_point_instance_ex(const char *dp_name, double value, long parent_handle, int log_flag);


int lr_transaction_add_info      (const char *trans_name, char *info);
int lr_transaction_instance_add_info   (long trans_handle, char *info);
int lr_dpoint_add_info           (const char *dpoint_name, char *info);
int lr_dpoint_instance_add_info        (long dpoint_handle, char *info);


double lr_get_transaction_duration       (char * trans_name);
double lr_get_trans_instance_duration    (long trans_handle);
double lr_get_transaction_think_time     (char * trans_name);
double lr_get_trans_instance_think_time  (long trans_handle);
double lr_get_transaction_wasted_time    (char * trans_name);
double lr_get_trans_instance_wasted_time (long trans_handle);
int    lr_get_transaction_status		 (char * trans_name);
int	   lr_get_trans_instance_status		 (long trans_handle);

 



int lr_set_transaction_status(int status);

 



int lr_set_transaction_status_by_name(int status, const char *trans_name);
int lr_set_transaction_instance_status(int status, long trans_handle);


typedef void* merc_timer_handle_t;
 

merc_timer_handle_t lr_start_timer();
double lr_end_timer(merc_timer_handle_t timer_handle);


 
 
 
 
 
 











 



int   lr_rendezvous  (char * rendezvous_name);
 




int   lr_rendezvous_ex (char * rendezvous_name);



 
 
 
 
 
char *lr_get_vuser_ip (void);
void   lr_whoami (int *vuser_id, char ** sgroup, int *scid);
char *	  lr_get_host_name (void);
char *	  lr_get_master_host_name (void);

 
long     lr_get_attrib_long	(char * attr_name);
char *   lr_get_attrib_string	(char * attr_name);
double   lr_get_attrib_double      (char * attr_name);

char * lr_paramarr_idx(const char * paramArrayName, unsigned int index);
char * lr_paramarr_random(const char * paramArrayName);
int    lr_paramarr_len(const char * paramArrayName);

int	lr_param_unique(const char * paramName);
int lr_param_sprintf(const char * paramName, const char * format, ...);


 
 
static void *ci_this_context = 0;






 








void lr_continue_on_error (int lr_continue);
char *   lr_unmask (const char *EncodedString);
char *   lr_decrypt (const char *EncodedString);


 
 
 
 
 
 



 







 















void   lr_abort (void);
void lr_exit(int exit_option, int exit_status);
void lr_abort_ex (unsigned long flags);

void   lr_peek_events (void);


 
 
 
 
 


void   lr_think_time (double secs);

 


void lr_force_think_time (double secs);


 
 
 
 
 



















int   lr_msg (char * fmt, ...);
int   lr_debug_message (unsigned int msg_class,
									    char * format,
										...);
# 513 "C:\\LoadRunner\\include/lrun.h"
void   lr_new_prefix (int type,
                                 char * filename,
                                 int line);
# 516 "C:\\LoadRunner\\include/lrun.h"
int   lr_log_message (char * fmt, ...);
int   lr_message (char * fmt, ...);
int   lr_error_message (char * fmt, ...);
int   lr_output_message (char * fmt, ...);
int   lr_vuser_status_message (char * fmt, ...);
int   lr_error_message_without_fileline (char * fmt, ...);
int   lr_fail_trans_with_error (char * fmt, ...);

 
 
 
 
 
# 540 "C:\\LoadRunner\\include/lrun.h"

 
 
 
 
 





int   lr_next_row ( char * table);
int lr_advance_param ( char * param);



														  
														  

														  
														  

													      
 


char *   lr_eval_string (char * str);
int   lr_eval_string_ext (const char *in_str,
                                     unsigned long const in_len,
                                     char ** const out_str,
                                     unsigned long * const out_len,
                                     unsigned long const options,
                                     const char *file,
								     long const line);
# 574 "C:\\LoadRunner\\include/lrun.h"
void   lr_eval_string_ext_free (char * * pstr);

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
int lr_param_increment (char * dst_name,
                              char * src_name);
# 597 "C:\\LoadRunner\\include/lrun.h"













											  
											  

											  
											  
											  

int	  lr_save_var (char *              param_val,
							  unsigned long const param_val_len,
							  unsigned long const options,
							  char *			  param_name);
# 621 "C:\\LoadRunner\\include/lrun.h"
int   lr_save_string (const char * param_val, const char * param_name);



int   lr_set_custom_error_message (const char * param_val, ...);

int   lr_remove_custom_error_message ();


int   lr_free_parameter (const char * param_name);
int   lr_save_int (const int param_val, const char * param_name);
int   lr_save_timestamp (const char * tmstampParam, ...);
int   lr_save_param_regexp (const char *bufferToScan, unsigned int bufSize, ...);

int   lr_convert_double_to_integer (const char *source_param_name, const char * target_param_name);
int   lr_convert_double_to_double (const char *source_param_name, const char *format_string, const char * target_param_name);

 
 
 
 
 
 
# 700 "C:\\LoadRunner\\include/lrun.h"
void   lr_save_datetime (const char *format, int offset, const char *name);









 











 
 
 
 
 






 



char * lr_error_context_get_entry (char * key);

 



long   lr_error_context_get_error_id (void);


 
 
 

int lr_table_get_rows_num (char * param_name);

int lr_table_get_cols_num (char * param_name);

char * lr_table_get_cell_by_col_index (char * param_name, int row, int col);

char * lr_table_get_cell_by_col_name (char * param_name, int row, const char* col_name);

int lr_table_get_column_name_by_index (char * param_name, int col, 
											char * * const col_name,
											size_t * col_name_len);
# 761 "C:\\LoadRunner\\include/lrun.h"

int lr_table_get_column_name_by_index_free (char * col_name);

 
 
 
 
# 776 "C:\\LoadRunner\\include/lrun.h"
int   lr_zip (const char* param1, const char* param2);
int   lr_unzip (const char* param1, const char* param2);

 
 
 
 
 
 
 
 

 
 
 
 
 
 
int   lr_param_substit (char * file,
                                   int const line,
                                   char * in_str,
                                   size_t const in_len,
                                   char * * const out_str,
                                   size_t * const out_len);
# 800 "C:\\LoadRunner\\include/lrun.h"
void   lr_param_substit_free (char * * pstr);


 
# 812 "C:\\LoadRunner\\include/lrun.h"





char *   lrfnc_eval_string (char * str,
                                      char * file_name,
                                      long const line_num);
# 820 "C:\\LoadRunner\\include/lrun.h"


int   lrfnc_save_string ( const char * param_val,
                                     const char * param_name,
                                     const char * file_name,
                                     long const line_num);
# 826 "C:\\LoadRunner\\include/lrun.h"

int   lrfnc_free_parameter (const char * param_name );







typedef struct _lr_timestamp_param
{
	int iDigits;
}lr_timestamp_param;

extern const lr_timestamp_param default_timestamp_param;

int   lrfnc_save_timestamp (const char * param_name, const lr_timestamp_param* time_param);

int lr_save_searched_string(char * buffer, long buf_size, unsigned int occurrence,
			    char * search_string, int offset, unsigned int param_val_len, 
			    char * param_name);

 
char *   lr_string (char * str);

 
# 929 "C:\\LoadRunner\\include/lrun.h"

int   lr_save_value (char * param_val,
                                unsigned long const param_val_len,
                                unsigned long const options,
                                char * param_name,
                                char * file_name,
                                long const line_num);
# 936 "C:\\LoadRunner\\include/lrun.h"


 
 
 
 
 











int   lr_printf (char * fmt, ...);
 
int   lr_set_debug_message (unsigned int msg_class,
                                       unsigned int swtch);
# 958 "C:\\LoadRunner\\include/lrun.h"
unsigned int   lr_get_debug_message (void);


 
 
 
 
 

void   lr_double_think_time ( double secs);
void   lr_usleep (long);


 
 
 
 
 
 




int *   lr_localtime (long offset);


int   lr_send_port (long port);


# 1034 "C:\\LoadRunner\\include/lrun.h"



struct _lr_declare_identifier{
	char signature[24];
	char value[128];
};

int   lr_pt_abort (void);

void vuser_declaration (void);






# 1063 "C:\\LoadRunner\\include/lrun.h"


# 1075 "C:\\LoadRunner\\include/lrun.h"
















 
 
 
 
 







int    _lr_declare_transaction   (char * transaction_name);


 
 
 
 
 







int   _lr_declare_rendezvous  (char * rendezvous_name);

 
 
 
 
 


typedef int PVCI;






typedef int VTCERR;









PVCI   vtc_connect(char * servername, int portnum, int options);
VTCERR   vtc_disconnect(PVCI pvci);
VTCERR   vtc_get_last_error(PVCI pvci);
VTCERR   vtc_query_column(PVCI pvci, char * columnName, int columnIndex, char * *outvalue);
VTCERR   vtc_query_row(PVCI pvci, int rowIndex, char * **outcolumns, char * **outvalues);
VTCERR   vtc_send_message(PVCI pvci, char * column, char * message, unsigned short *outRc);
VTCERR   vtc_send_if_unique(PVCI pvci, char * column, char * message, unsigned short *outRc);
VTCERR   vtc_send_row1(PVCI pvci, char * columnNames, char * messages, char * delimiter, unsigned char sendflag, unsigned short *outUpdates);
VTCERR   vtc_update_message(PVCI pvci, char * column, int index , char * message, unsigned short *outRc);
VTCERR   vtc_update_message_ifequals(PVCI pvci, char * columnName, int index,	char * message, char * ifmessage, unsigned short 	*outRc);
VTCERR   vtc_update_row1(PVCI pvci, char * columnNames, int index , char * messages, char * delimiter, unsigned short *outUpdates);
VTCERR   vtc_retrieve_message(PVCI pvci, char * column, char * *outvalue);
VTCERR   vtc_retrieve_messages1(PVCI pvci, char * columnNames, char * delimiter, char * **outvalues);
VTCERR   vtc_retrieve_row(PVCI pvci, char * **outcolumns, char * **outvalues);
VTCERR   vtc_rotate_message(PVCI pvci, char * column, char * *outvalue, unsigned char sendflag);
VTCERR   vtc_rotate_messages1(PVCI pvci, char * columnNames, char * delimiter, char * **outvalues, unsigned char sendflag);
VTCERR   vtc_rotate_row(PVCI pvci, char * **outcolumns, char * **outvalues, unsigned char sendflag);
VTCERR   vtc_increment(PVCI pvci, char * column, int index , int incrValue, int *outValue);
VTCERR   vtc_clear_message(PVCI pvci, char * column, int index , unsigned short *outRc);
VTCERR   vtc_clear_column(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_ensure_index(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_drop_index(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_clear_row(PVCI pvci, int rowIndex, unsigned short *outRc);
VTCERR   vtc_create_column(PVCI pvci, char * column,unsigned short *outRc);
VTCERR   vtc_column_size(PVCI pvci, char * column, int *size);
void   vtc_free(char * msg);
void   vtc_free_list(char * *msglist);

VTCERR   lrvtc_connect(char * servername, int portnum, int options);
VTCERR   lrvtc_connect_ex(char * vtc_first_param, ...);
VTCERR   lrvtc_connect_ex_no_ellipsis(const char *vtc_first_param, char ** arguments, int argCount);
VTCERR   lrvtc_disconnect();
VTCERR   lrvtc_query_column(char * columnName, int columnIndex);
VTCERR   lrvtc_query_row(int columnIndex);
VTCERR   lrvtc_send_message(char * columnName, char * message);
VTCERR   lrvtc_send_if_unique(char * columnName, char * message);
VTCERR   lrvtc_send_row1(char * columnNames, char * messages, char * delimiter, unsigned char sendflag);
VTCERR   lrvtc_update_message(char * columnName, int index , char * message);
VTCERR   lrvtc_update_message_ifequals(char * columnName, int index, char * message, char * ifmessage);
VTCERR   lrvtc_update_row1(char * columnNames, int index , char * messages, char * delimiter);
VTCERR   lrvtc_retrieve_message(char * columnName);
VTCERR   lrvtc_retrieve_messages1(char * columnNames, char * delimiter);
VTCERR   lrvtc_retrieve_row();
VTCERR   lrvtc_rotate_message(char * columnName, unsigned char sendflag);
VTCERR   lrvtc_rotate_messages1(char * columnNames, char * delimiter, unsigned char sendflag);
VTCERR   lrvtc_rotate_row(unsigned char sendflag);
VTCERR   lrvtc_increment(char * columnName, int index , int incrValue);
VTCERR   lrvtc_noop();
VTCERR   lrvtc_clear_message(char * columnName, int index);
VTCERR   lrvtc_clear_column(char * columnName); 
VTCERR   lrvtc_ensure_index(char * columnName); 
VTCERR   lrvtc_drop_index(char * columnName); 
VTCERR   lrvtc_clear_row(int rowIndex);
VTCERR   lrvtc_create_column(char * columnName);
VTCERR   lrvtc_column_size(char * columnName);



 
 
 
 
 

 
int lr_enable_ip_spoofing();
int lr_disable_ip_spoofing();


 




int lr_convert_string_encoding(char * sourceString, char * fromEncoding, char * toEncoding, char * paramName);
int lr_read_file(const char *filename, const char *outputParam, int continueOnError);

int lr_get_char_count(const char * string);


 
int lr_db_connect (char * pFirstArg, ...);
int lr_db_disconnect (char * pFirstArg,	...);
int lr_db_executeSQLStatement (char * pFirstArg, ...);
int lr_db_dataset_action(char * pFirstArg, ...);
int lr_checkpoint(char * pFirstArg,	...);
int lr_db_getvalue(char * pFirstArg, ...);







 
 



















# 1 "c:\\loadrunner\\projects\\1\\loadrunner\\\\combined_Web-Git1.c" 2

# 1 "C:\\LoadRunner\\include/SharedParameter.h" 1



 
 
 
 
# 100 "C:\\LoadRunner\\include/SharedParameter.h"






typedef int PVCI2;






typedef int VTCERR2;


 
 
 

 
extern PVCI2    vtc_connect(char *servername, int portnum, int options);
extern VTCERR2  vtc_disconnect(PVCI2 pvci);
extern VTCERR2  vtc_get_last_error(PVCI2 pvci);

 
extern VTCERR2  vtc_query_column(PVCI2 pvci, char *columnName, int columnIndex, char **outvalue);
extern VTCERR2  vtc_query_row(PVCI2 pvci, int columnIndex, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_send_message(PVCI2 pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_if_unique(PVCI2 pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_row1(PVCI2 pvci, char *columnNames, char *messages, char *delimiter,  unsigned char sendflag, unsigned short *outUpdates);
extern VTCERR2  vtc_update_message(PVCI2 pvci, char *column, int index , char *message, unsigned short *outRc);
extern VTCERR2  vtc_update_message_ifequals(PVCI2 pvci, char	*columnName, int index,	char *message, char	*ifmessage,	unsigned short 	*outRc);
extern VTCERR2  vtc_update_row1(PVCI2 pvci, char *columnNames, int index , char *messages, char *delimiter, unsigned short *outUpdates);
extern VTCERR2  vtc_retrieve_message(PVCI2 pvci, char *column, char **outvalue);
extern VTCERR2  vtc_retrieve_messages1(PVCI2 pvci, char *columnNames, char *delimiter, char ***outvalues);
extern VTCERR2  vtc_retrieve_row(PVCI2 pvci, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_rotate_message(PVCI2 pvci, char *column, char **outvalue, unsigned char sendflag);
extern VTCERR2  vtc_rotate_messages1(PVCI2 pvci, char *columnNames, char *delimiter, char ***outvalues, unsigned char sendflag);
extern VTCERR2  vtc_rotate_row(PVCI2 pvci, char ***outcolumns, char ***outvalues, unsigned char sendflag);
extern VTCERR2	vtc_increment(PVCI2 pvci, char *column, int index , int incrValue, int *outValue);
extern VTCERR2  vtc_clear_message(PVCI2 pvci, char *column, int index , unsigned short *outRc);
extern VTCERR2  vtc_clear_column(PVCI2 pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_clear_row(PVCI2 pvci, int rowIndex, unsigned short *outRc);

extern VTCERR2  vtc_create_column(PVCI2 pvci, char *column,unsigned short *outRc);
extern VTCERR2  vtc_column_size(PVCI2 pvci, char *column, int *size);
extern VTCERR2  vtc_ensure_index(PVCI2 pvci, char *column, unsigned short *outRc);
extern VTCERR2  vtc_drop_index(PVCI2 pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_noop(PVCI2 pvci);

 
extern void vtc_free(char *msg);
extern void vtc_free_list(char **msglist);

 


 




 




















 




 
 
 

extern VTCERR2  lrvtc_connect(char *servername, int portnum, int options);
 
 
extern VTCERR2  lrvtc_disconnect();
extern VTCERR2  lrvtc_query_column(char *columnName, int columnIndex);
extern VTCERR2  lrvtc_query_row(int columnIndex);
extern VTCERR2  lrvtc_send_message(char *columnName, char *message);
extern VTCERR2  lrvtc_send_if_unique(char *columnName, char *message);
extern VTCERR2  lrvtc_send_row1(char *columnNames, char *messages, char *delimiter,  unsigned char sendflag);
extern VTCERR2  lrvtc_update_message(char *columnName, int index , char *message);
extern VTCERR2  lrvtc_update_message_ifequals(char *columnName, int index, char 	*message, char *ifmessage);
extern VTCERR2  lrvtc_update_row1(char *columnNames, int index , char *messages, char *delimiter);
extern VTCERR2  lrvtc_retrieve_message(char *columnName);
extern VTCERR2  lrvtc_retrieve_messages1(char *columnNames, char *delimiter);
extern VTCERR2  lrvtc_retrieve_row();
extern VTCERR2  lrvtc_rotate_message(char *columnName, unsigned char sendflag);
extern VTCERR2  lrvtc_rotate_messages1(char *columnNames, char *delimiter, unsigned char sendflag);
extern VTCERR2  lrvtc_rotate_row(unsigned char sendflag);
extern VTCERR2  lrvtc_increment(char *columnName, int index , int incrValue);
extern VTCERR2  lrvtc_clear_message(char *columnName, int index);
extern VTCERR2  lrvtc_clear_column(char *columnName);
extern VTCERR2  lrvtc_clear_row(int rowIndex);
extern VTCERR2  lrvtc_create_column(char *columnName);
extern VTCERR2  lrvtc_column_size(char *columnName);
extern VTCERR2  lrvtc_ensure_index(char *columnName);
extern VTCERR2  lrvtc_drop_index(char *columnName);

extern VTCERR2  lrvtc_noop();

 
 
 

                               


 
 
 





















# 2 "c:\\loadrunner\\projects\\1\\loadrunner\\\\combined_Web-Git1.c" 2

# 1 "globals.h" 1



 
 

# 1 "C:\\LoadRunner\\include/web_api.h" 1







# 1 "C:\\LoadRunner\\include/as_web.h" 1



























































 




 



 











 





















 
 
 

  int
	web_add_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_add_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
	
  int
	web_add_auto_header(
		const char *		mpszHeader,
		const char *		mpszValue);

  int
	web_add_header(
		const char *		mpszHeader,
		const char *		mpszValue);
  int
	web_add_cookie(
		const char *		mpszCookie);
  int
	web_cleanup_auto_headers(void);
  int
	web_cleanup_cookies(void);
  int
	web_concurrent_end(
		const char * const	mpszReserved,
										 
		...								 
	);
  int
	web_concurrent_start(
		const char * const	mpszConcurrentGroupName,
										 
										 
		...								 
										 
	);
  int
	web_create_html_param(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim);
  int
	web_create_html_param_ex(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim,
		const char *		mpszNum);
  int
	web_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	spdy_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_disable_keep_alive(void);
  int
	web_enable_keep_alive(void);
  int
	web_find(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_get_int_property(
		const int			miHttpInfoType);
  int
	web_image(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_image_check(
		const char *		mpszName,
		...);
  int
	web_java_check(
		const char *		mpszName,
		...);
  int
	web_link(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

	
  int
	web_global_verification(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
  int
	web_reg_find(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
				
  int
	web_reg_save_param(
		const char *		mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 

  int
	web_convert_param(
		const char * 		mpszParamName, 
										 
		...);							 
										 
										 


										 

										 
  int
	web_remove_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
				
  int
	web_remove_auto_header(
		const char *		mpszHeaderName,
		...);							 
										 



  int
	web_remove_cookie(
		const char *		mpszCookie);

  int
	web_save_header(
		const char *		mpszType,	 
		const char *		mpszName);	 
  int
	web_set_certificate(
		const char *		mpszIndex);
  int
	web_set_certificate_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_set_connections_limit(
		const char *		mpszLimit);
  int
	web_set_max_html_param_len(
		const char *		mpszLen);
  int
	web_set_max_retries(
		const char *		mpszMaxRetries);
  int
	web_set_proxy(
		const char *		mpszProxyHost);
  int
	web_set_pac(
		const char *		mpszPacUrl);
  int
	web_set_proxy_bypass(
		const char *		mpszBypass);
  int
	web_set_secure_proxy(
		const char *		mpszProxyHost);
  int
	web_set_sockets_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue
	);
  int
	web_set_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue,
		...								 
	);
  int
	web_set_timeout(
		const char *		mpszWhat,
		const char *		mpszTimeout);
  int
	web_set_user(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);

  int
	web_sjis_to_euc_param(
		const char *		mpszParamName,
										 
		const char *		mpszParamValSjis);
										 

  int
	web_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	spdy_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_submit_form(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	spdy_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_set_proxy_bypass_local(
		const char * mpszNoLocal
		);

  int 
	web_cache_cleanup(void);

  int
	web_create_html_query(
		const char* mpszStartQuery,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_create_radio_button_param(
		const char *NameFiled,
		const char *NameAndVal,
		const char *ParamName
		);

  int
	web_convert_from_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										
  int
	web_convert_to_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_ex(
		const char * mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_xpath(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_json(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_regexp(
		 const char * mpszParamName,
		 ...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_attrib(
		const char * mpszParamName,
		...);
										 
										 
										 
										 
										 
										 
										 		
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_run(
		const char * mpszCode,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_reset(void);

  int
	web_convert_date_param(
		const char * 		mpszParamName,
		...);










# 789 "C:\\LoadRunner\\include/as_web.h"


# 802 "C:\\LoadRunner\\include/as_web.h"



























# 840 "C:\\LoadRunner\\include/as_web.h"

 
 
 


  int
	FormSubmit(
		const char *		mpszFormName,
		...);
  int
	InitWebVuser(void);
  int
	SetUser(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);
  int
	TerminateWebVuser(void);
  int
	URL(
		const char *		mpszUrlName);
























# 908 "C:\\LoadRunner\\include/as_web.h"


  int
	web_rest(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 

  int
web_stream_open(
	const char *		mpszArg1,
	...
);
  int
	web_stream_wait(
		const char *		mpszArg1,
		...
	);

  int
	web_stream_close(
		const char *		mpszArg1,
		...
	);

  int
web_stream_play(
	const char *		mpszArg1,
	...
	);

  int
web_stream_pause(
	const char *		mpszArg1,
	...
	);

  int
web_stream_seek(
	const char *		mpszArg1,
	...
	);

  int
web_stream_get_param_int(
	const char*			mpszStreamID,
	const int			miStateType
	);

  double
web_stream_get_param_double(
	const char*			mpszStreamID,
	const int			miStateType
	);

  int
web_stream_get_param_string(
	const char*			mpszStreamID,
	const int			miStateType,
	const char*			mpszParameterName
	);

  int
web_stream_set_param_int(
	const char*			mpszStreamID,
	const int			miStateType,
	const int			miStateValue
	);

  int
web_stream_set_param_double(
	const char*			mpszStreamID,
	const int			miStateType,
	const double		mdfStateValue
	);

  int
web_stream_set_custom_mpd(
	const char*			mpszStreamID,
	const char*			aMpdBuf
	);

 
 
 






# 9 "C:\\LoadRunner\\include/web_api.h" 2

















 







 















  int
	web_reg_add_cookie(
		const char *		mpszCookie,
		...);							 
										 

  int
	web_report_data_point(
		const char *		mpszEventType,
		const char *		mpszEventName,
		const char *		mpszDataPointName,
		const char *		mpszLAST);	 
										 
										 
										 

  int
	web_text_link(
		const char *		mpszStepName,
		...);

  int
	web_element(
		const char *		mpszStepName,
		...);

  int
	web_image_link(
		const char *		mpszStepName,
		...);

  int
	web_static_image(
		const char *		mpszStepName,
		...);

  int
	web_image_submit(
		const char *		mpszStepName,
		...);

  int
	web_button(
		const char *		mpszStepName,
		...);

  int
	web_edit_field(
		const char *		mpszStepName,
		...);

  int
	web_radio_group(
		const char *		mpszStepName,
		...);

  int
	web_check_box(
		const char *		mpszStepName,
		...);

  int
	web_list(
		const char *		mpszStepName,
		...);

  int
	web_text_area(
		const char *		mpszStepName,
		...);

  int
	web_map_area(
		const char *		mpszStepName,
		...);

  int
	web_eval_java_script(
		const char *		mpszStepName,
		...);

  int
	web_reg_dialog(
		const char *		mpszArg1,
		...);

  int
	web_reg_cross_step_download(
		const char *		mpszArg1,
		...);

  int
	web_browser(
		const char *		mpszStepName,
		...);

  int
	web_control(
		const char *		mpszStepName,
		...);

  int
	web_set_rts_key(
		const char *		mpszArg1,
		...);

  int
	web_save_param_length(
		const char * 		mpszParamName,
		...);

  int
	web_save_timestamp_param(
		const char * 		mpszParamName,
		...);

  int
	web_load_cache(
		const char *		mpszStepName,
		...);							 
										 

  int
	web_dump_cache(
		const char *		mpszStepName,
		...);							 
										 
										 

  int
	web_reg_find_in_log(
		const char *		mpszArg1,
		...);							 
										 
										 

  int
	web_get_sockets_info(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 

  int
	web_add_cookie_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

  int
	web_hook_java_script(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

 
 
 
 
 
 
 
 
 
 
 
 
  int
	web_reg_async_attributes(
		const char *		mpszArg,
		...
	);

 
 
 
 
 
 
  int
	web_sync(
		 const char *		mpszArg1,
		 ...
	);

 
 
 
 
  int
	web_stop_async(
		const char *		mpszArg1,
		...
	);

 
 
 
 
 

 
 
 

typedef enum WEB_ASYNC_CB_RC_ENUM_T
{
	WEB_ASYNC_CB_RC_OK,				 

	WEB_ASYNC_CB_RC_ABORT_ASYNC_NOT_ERROR,
	WEB_ASYNC_CB_RC_ABORT_ASYNC_ERROR,
										 
										 
										 
										 
	WEB_ASYNC_CB_RC_ENUM_COUNT
} WEB_ASYNC_CB_RC_ENUM;

 
 
 

typedef enum WEB_CONVERS_CB_CALL_REASON_ENUM_T
{
	WEB_CONVERS_CB_CALL_REASON_BUFFER_RECEIVED,
	WEB_CONVERS_CB_CALL_REASON_END_OF_TASK,

	WEB_CONVERS_CB_CALL_REASON_ENUM_COUNT
} WEB_CONVERS_CB_CALL_REASON_ENUM;

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

typedef
int														 
	(*RequestCB_t)();

typedef
int														 
	(*ResponseBodyBufferCB_t)(
		  const char *		aLastBufferStr,
		  int				aLastBufferLen,
		  const char *		aAccumulatedStr,
		  int				aAccumulatedLen,
		  int				aHttpStatusCode);

typedef
int														 
	(*ResponseCB_t)(
		  const char *		aResponseHeadersStr,
		  int				aResponseHeadersLen,
		  const char *		aResponseBodyStr,
		  int				aResponseBodyLen,
		  int				aHttpStatusCode);

typedef
int														 
	(*ResponseHeadersCB_t)(
		  int				aHttpStatusCode,
		  const char *		aAccumulatedHeadersStr,
		  int				aAccumulatedHeadersLen);



 
 
 

typedef enum WEB_CONVERS_UTIL_RC_ENUM_T
{
	WEB_CONVERS_UTIL_RC_OK,
	WEB_CONVERS_UTIL_RC_CONVERS_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_TASK_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_INFO_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_INFO_UNAVIALABLE,
	WEB_CONVERS_UTIL_RC_INVALID_ARGUMENT,

	WEB_CONVERS_UTIL_RC_ENUM_COUNT
} WEB_CONVERS_UTIL_RC_ENUM;

 
 
 

  int					 
	web_util_set_request_url(
		  const char *		aUrlStr);

  int					 
	web_util_set_request_body(
		  const char *		aRequestBodyStr);

  int					 
	web_util_set_formatted_request_body(
		  const char *		aRequestBodyStr);


 
 
 
 
 

 
 
 
 
 

 
 
 
 
 
 
 
 

 
 
  int
web_websocket_connect(
		 const char *	mpszArg1,
		 ...
		 );


 
 
 
 
 																						
  int
web_websocket_send(
	   const char *		mpszArg1,
		...
	   );

 
 
 
 
 
 
  int
web_websocket_close(
		const char *	mpszArg1,
		...
		);

 
typedef
void														
(*OnOpen_t)(
			  const char* connectionID,  
			  const char * responseHeader,  
			  int length  
);

typedef
void														
(*OnMessage_t)(
	  const char* connectionID,  
	  int isbinary,  
	  const char * data,  
	  int length  
	);

typedef
void														
(*OnError_t)(
	  const char* connectionID,  
	  const char * message,  
	  int length  
	);

typedef
void														
(*OnClose_t)(
	  const char* connectionID,  
	  int isClosedByClient,  
	  int code,  
	  const char* reason,  
	  int length  
	 );
 
 
 
 
 





# 7 "globals.h" 2

# 1 "lrw_custom_body.h" 1
 




# 8 "globals.h" 2


 
 


# 3 "c:\\loadrunner\\projects\\1\\loadrunner\\\\combined_Web-Git1.c" 2

# 1 "vuser_init.c" 1
vuser_init()
{
	return 0;
}
# 4 "c:\\loadrunner\\projects\\1\\loadrunner\\\\combined_Web-Git1.c" 2

# 1 "Action.c" 1
Action()
{

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_url("bins.json", 
		"URL=https://www.gstatic.com/autofill/hourly/bins.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("merchants.json", 
		"URL=https://www.gstatic.com/autofill/weekly/merchants.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_header("A-IM", 
		"x-bm,gzip");

	lr_think_time(4);

	web_url("seed", 
		"URL=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=78", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("www.flipkart.com", 
		"URL=https://www.flipkart.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=/sw.js", "Referer=https://www.flipkart.com/sw.js", "ENDITEM", 
		"Url=https://img1a.flixcart.com/www/linchpin/fk-cp-zion/css/MultiWidgetPage.chunk.67221b.css", "ENDITEM", 
		"Url=https://rukminim1.flixcart.com/flap/278/278/image/beac999f33db064a.jpg?q=90", "ENDITEM", 
		"Url=https://rukminim1.flixcart.com/flap/278/278/image/3d05d2f19dbdbfc4.jpg?q=90", "ENDITEM", 
		"Url=https://img1a.flixcart.com/www/linchpin/fk-cp-zion/js/MultiWidgetPage.chunk.9c1ece3e.js", "ENDITEM", 
		"Url=https://img1a.flixcart.com/www/linchpin/fk-cp-zion/img/login_img_dec4bf.png", "Referer=https://img1a.flixcart.com/www/linchpin/fk-cp-zion/css/app.chunk.82a2ce.css", "ENDITEM", 
		"Url=https://rukminim1.flixcart.com/flap/480/480/image/75eaa875424c5b69.jpg?q=50", "ENDITEM", 
		"Url=https://rukminim1.flixcart.com/image/200/200/k2jbyq80pkrrdj/mobile-refurbished/t/z/g/z1pro-128-u-1951-pd1911f-ex-vivo-6-original-imafhmyayxdjghhm.jpeg?q=70", "ENDITEM", 
		"Url=https://rukminim1.flixcart.com/image/200/200/jzhb24w0/mobile/z/j/k/realme-5-pro-rmx1971-original-imafjhk3dyggb2bg.jpeg?q=70", "ENDITEM", 
		"Url=https://rukminim1.flixcart.com/flap/480/480/image/9479c2b130f51ef2.jpg?q=50", "ENDITEM", 
		"Url=https://rukminim1.flixcart.com/flap/480/480/image/26bc0fedfd5b4cf4.jpg?q=50", "ENDITEM", 
		"Url=https://rukminim1.flixcart.com/flap/1688/280/image/e2f0e4d97806dfce.jpg?q=50", "ENDITEM", 
		"Url=https://rukminim1.flixcart.com/image/200/200/jskofww0/mobile/3/u/t/mi-redmi-note-7-pro-na-original-imafe4bddnr7n5vb.jpeg?q=70", "ENDITEM", 
		"Url=https://rukminim1.flixcart.com/image/200/200/jua4djk0/computer/k/z/x/asus-na-gaming-laptop-original-imafffw6vzw6hjwm.jpeg?q=70", "ENDITEM", 
		"Url=https://rukminim1.flixcart.com/flap/1688/280/image/f64d11d43b0ab3e7.jpg?q=50", "ENDITEM", 
		"Url=https://rukminim1.flixcart.com/flap/1688/280/image/33ba3db1a5479f46.jpg?q=50", "ENDITEM", 
		"Url=https://img1a.flixcart.com/www/linchpin/fk-cp-zion/fonts/roboto-regular-webfont.woff2", "Referer=https://img1a.flixcart.com/www/linchpin/fk-cp-zion/css/app.chunk.82a2ce.css", "ENDITEM", 
		"Url=https://img1a.flixcart.com/www/linchpin/fk-cp-zion/fonts/roboto-medium-webfont.woff2", "Referer=https://img1a.flixcart.com/www/linchpin/fk-cp-zion/css/app.chunk.82a2ce.css", "ENDITEM", 
		"LAST");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_header("Origin", 
		"https://www.flipkart.com");

	web_add_auto_header("X-user-agent", 
		"Mozilla/5.0 (Windows NT 6.3; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/78.0.3904.108 Safari/537.36 FKUA/website/41/website/Desktop");

	web_add_header("apiKey", 
		"KrWcJnCSZFBLFR39DtHYySjcDCHg2LeC3sxdx7646n7iy7oy");

	web_custom_request("callback", 
		"URL=https://www.flipkart.com/api/1/connekt/push/callback", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"type\":\"PN\",\"eventType\":\"TICKLE\",\"cargo\":\"{\\\"permissionStatus\\\":\\\"default\\\"}\"}", 
		"LAST");

	web_add_cookie("AMCV_17EB401053DAF4840A490D4C%40AdobeOrg=-227196251%7CMCIDTS%7C18232%7CMCMID%7C81780763095549659609212179226902644462; DOMAIN=www.flipkart.com");

	web_custom_request("getData", 
		"URL=https://www.flipkart.com/lc/getData?dataSourceId=websiteNavigationMenuDS_1.0&t=26253697", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"LAST");

	web_add_cookie("gpv_pn=HomePage; DOMAIN=www.flipkart.com");

	web_add_cookie("gpv_pn_t=FLIPKART%3AHomePage; DOMAIN=www.flipkart.com");

	web_add_cookie("AMCV_17EB401053DAF4840A490D4C%40AdobeOrg=-227196251%7CMCIDTS%7C18232%7CMCMID%7C81780763095549659609212179226902644462%7CMCAID%7CNONE; DOMAIN=www.flipkart.com");

	web_add_auto_header("Origin", 
		"https://www.flipkart.com");

	web_custom_request("fdp", 
		"URL=https://www.flipkart.com/api/1/fdp", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=[{\"nc\":{\"ssid\":\"jca30xauds0000001575221817801\",\"mpid\":\"FLIPKART\",\"pn\":\"hp\",\"pt\":\"hp\",\"iid\":\"sl5gzsys9c0000001575221819762\",\"fm\":\"organic\"},\"e\":[{\"en\":\"PV\",\"ib\":false,\"id\":false,\"t\":1575221818042}]}]", 
		"LAST");

	web_add_cookie("s_cc=true; DOMAIN=www.flipkart.com");

	web_add_cookie("AMCVS_17EB401053DAF4840A490D4C%40AdobeOrg=1; DOMAIN=www.flipkart.com");

	web_add_cookie("AMCV_17EB401053DAF4840A490D4C%40AdobeOrg=-227196251%7CMCIDTS%7C18232%7CMCMID%7C81780763095549659609212179226902644462%7CMCAID%7CNONE%7CMCOPTOUT-1575229029s%7CNONE%7CMCAAMLH-1575826625%7C12%7CMCAAMB-1575826629%7Cj8Odv6LonN4r3an7LhD3WZrU1bUpAkFkkiY1ncBR96t2PTI; DOMAIN=www.flipkart.com");

	web_add_cookie("s_sq=flipkart-prd%3D%2526pid%253DHomePage%2526pidt%253D1%2526oid%253Dhttps%25253A%25252F%25252Fwww.flipkart.com%25252Fmobiles%25252Fpr%25253Fsid%25253Dtyy%2525252C4io%252526p%2525255B%2525255D%25253Dfacets.brand%252525255B%252525255D%2525253DRealme%252526otracker%25253Dn%2526ot%253DA; DOMAIN=www.flipkart.com");

	web_custom_request("fetch", 
		"URL=https://www.flipkart.com/api/4/page/fetch", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.flipkart.com/mobiles/pr?sid=tyy%2C4io&p%5B%5D=facets.brand%255B%255D%3DRealme&otracker=nmenu_sub_Electronics_0_Realme", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"pageUri\":\"/mobiles/pr?sid=tyy%2C4io&p%5B%5D=facets.brand%255B%255D%3DRealme&otracker=nmenu_sub_Electronics_0_Realme\",\"pageContext\":{\"paginatedFetch\":false,\"pageNumber\":1,\"fetchSeoData\":true},\"requestContext\":{\"type\":\"BROWSE_PAGE\",\"ssid\":\"p4xf83ehzk0000001575221835710\",\"sqid\":\"e0orfvaif40000001575221835710\"}}", 
		"LAST");

	web_custom_request("fdp_2", 
		"URL=https://www.flipkart.com/api/1/fdp", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.flipkart.com/mobiles/pr?sid=tyy%2C4io&p%5B%5D=facets.brand%255B%255D%3DRealme&otracker=nmenu_sub_Electronics_0_Realme", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=[{\"nc\":{\"ssid\":\"p4xf83ehzk0000001575221835710\",\"mpid\":\"FLIPKART\",\"pn\":\"hp\",\"pt\":\"hp\",\"iid\":\"sl5gzsys9c0000001575221819762\",\"fm\":\"organic\"},\"e\":[{\"en\":\"DCI\",\"iid\":\"M_7ed149c1-0bad-4f3d-b154-bbf83c4c6681_2.G3H2N8WEGWZI\",\"ct\":\"bannerAdCard\",\"p\":\"2\",\"t\":1575221837773,\"st\":1575221831580,\"f\":true,\"pv\":79},{\"en\":\"DWI\",\"iid\":\"M_7ed149c1-0bad-4f3d-b154-bbf83c4c6681_2\",\"wk\":\"2.bannerAdCard.BANNERADS_2\",\"p\":2,\"t\":1575221837774,\"st\""
		":1575221819302,\"f\":true,\"pv\":100},{\"en\":\"DCI\",\"iid\":\"M_7ed149c1-0bad-4f3d-b154-bbf83c4c6681_2.E389W9MFSDJS\",\"ct\":\"bannerAdCard\",\"p\":\"3\",\"t\":1575221837774,\"st\":1575221834159,\"f\":true,\"pv\":79}]}]", 
		"EXTRARES", 
		"Url=https://img1a.flixcart.com/www/linchpin/fk-cp-zion/img/fa_8b4b59.png", "Referer=https://www.flipkart.com/mobiles/pr?sid=tyy%2C4io&p%5B%5D=facets.brand%255B%255D%3DRealme&otracker=nmenu_sub_Electronics_0_Realme", "ENDITEM", 
		"Url=https://img1a.flixcart.com/www/linchpin/fk-cp-zion/img/buying-guide-illustration_48642c.png", "Referer=https://www.flipkart.com/mobiles/pr?sid=tyy%2C4io&p%5B%5D=facets.brand%255B%255D%3DRealme&otracker=nmenu_sub_Electronics_0_Realme", "ENDITEM", 
		"LAST");

	web_add_cookie("S=d1t14VAwJPxk/Xz8/Sz8/P0g/PyzN367+YW3R3Gfokpb4B5iD6bDr+M1IPchrsPoc6+S+vrDpD/bjigzaiFPmzQ85Nw==; DOMAIN=www.flipkart.com");

	web_custom_request("fdp_3", 
		"URL=https://www.flipkart.com/api/1/fdp", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.flipkart.com/mobiles/pr?sid=tyy%2C4io&p%5B%5D=facets.brand%255B%255D%3DRealme&otracker=nmenu_sub_Electronics_0_Realme", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=[{\"nc\":{\"ssid\":\"p4xf83ehzk0000001575221835710\",\"mpid\":\"FLIPKART\",\"pn\":\"hp\",\"pt\":\"hp\",\"iid\":\"sl5gzsys9c0000001575221819762\",\"fm\":\"organic\"},\"e\":[{\"en\":\"LSE\",\"starttime\":0,\"type\":\"loader\",\"rid\":\"7ed149c1-0bad-4f3d-b154-bbf83c4c6681\",\"prid\":\"7ed149c1-0bad-4f3d-b154-bbf83c4c6681\",\"t\":1575221835716}]}]", 
		"EXTRARES", 
		"Url=https://rukminim1.flixcart.com/image/312/312/k34rki80/mobile/p/z/q/realme-5s-rmx1925-original-imafmbm6hp9eutam.jpeg?q=70", "Referer=https://www.flipkart.com/mobiles/pr?sid=tyy%2C4io&p%5B%5D=facets.brand%255B%255D%3DRealme&otracker=nmenu_sub_Electronics_0_Realme", "ENDITEM", 
		"Url=https://rukminim1.flixcart.com/image/312/312/k34rki80/mobile/t/t/z/realme-5s-rmx1925-original-imafmbm6hatkkzys.jpeg?q=70", "Referer=https://www.flipkart.com/mobiles/pr?sid=tyy%2C4io&p%5B%5D=facets.brand%255B%255D%3DRealme&otracker=nmenu_sub_Electronics_0_Realme", "ENDITEM", 
		"LAST");

	web_add_cookie("gpv_pn=Store%20%3AMobiles%20%26%20Accessories%7CMobiles; DOMAIN=www.flipkart.com");

	web_add_cookie("gpv_pn_t=Store%20Browse; DOMAIN=www.flipkart.com");

	web_add_cookie("s_sq=%5B%5BB%5D%5D; DOMAIN=www.flipkart.com");

	web_custom_request("fdp_4", 
		"URL=https://www.flipkart.com/api/1/fdp", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.flipkart.com/mobiles/pr?sid=tyy%2C4io&p%5B%5D=facets.brand%255B%255D%3DRealme&otracker=nmenu_sub_Electronics_0_Realme", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=[{\"nc\":{\"ssid\":\"p4xf83ehzk0000001575221835710\",\"ppt\":\"hp\",\"ppn\":\"hp\",\"mpid\":\"FLIPKART\",\"pn\":\"browse\",\"pt\":\"browse\",\"iid\":\"sl5gzsys9c0000001575221819762\",\"fm\":\"organic\"},\"e\":[{\"en\":\"PV\",\"ib\":false,\"id\":false,\"t\":1575221841884}]}]", 
		"LAST");

	web_add_cookie("s_sq=flipkart-prd%3D%2526pid%253DStore%252520%25253AMobiles%252520%252526%252520Accessories%25257CMobiles%2526pidt%253D1%2526oid%253Dhttps%25253A%25252F%25252Fwww.flipkart.com%25252Frealme-5s-crystal-blue-64-gb%25252Fp%25252Fitm592977b0ba210%25253Fpid%25253DMOBFM2WZ9AZUPTTZ%252526srno%25253Db%2526ot%253DA; DOMAIN=www.flipkart.com");

	(web_remove_auto_header("Origin", "ImplicitGen=Yes", "LAST"));

	(web_remove_auto_header("X-user-agent", "ImplicitGen=Yes", "LAST"));

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("itm592977b0ba210", 
		"URL=https://www.flipkart.com/realme-5s-crystal-blue-64-gb/p/itm592977b0ba210?pid=MOBFM2WZ9AZUPTTZ&srno=b_1_1&otracker=nmenu_sub_Electronics_0_Realme&lid=LSTMOBFM2WZ9AZUPTTZXXEDBC&fm=organic&iid=35b9166c-3d92-4fd0-960e-c703e7e3a5d4.MOBFM2WZ9AZUPTTZ.SEARCH&ppt=browse&ppn=browse&ssid=p4xf83ehzk0000001575221835710", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=https://img1a.flixcart.com/www/linchpin/fk-cp-zion/img/shield_435391.svg", "Referer=https://img1a.flixcart.com/www/linchpin/fk-cp-zion/css/MultiWidgetPage.chunk.67221b.css", "ENDITEM", 
		"LAST");

	web_add_cookie("SN=2.VI13CA5E823F974EA0BA8C3D1FCF94E3D0.SI7F3CD46CF7474CBA9834D85958F75F2F.VSA1A5E65DF81347308472B89D3C7B1C61.1575221807; DOMAIN=www.flipkart.com");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Origin", 
		"https://www.flipkart.com");

	web_add_header("X-user-agent", 
		"Mozilla/5.0 (Windows NT 6.3; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/78.0.3904.108 Safari/537.36 FKUA/website/41/website/Desktop");

	web_custom_request("fdp_5", 
		"URL=https://www.flipkart.com/api/1/fdp", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.flipkart.com/mobiles/pr?sid=tyy%2C4io&p%5B%5D=facets.brand%255B%255D%3DRealme&otracker=nmenu_sub_Electronics_0_Realme", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=[{\"nc\":{\"ssid\":\"p4xf83ehzk0000001575221835710\",\"ppt\":\"hp\",\"ppn\":\"hp\",\"mpid\":\"FLIPKART\",\"pn\":\"browse\",\"pt\":\"browse\",\"iid\":\"sl5gzsys9c0000001575221819762\",\"fm\":\"organic\"},\"e\":[{\"en\":\"DCC\",\"iid\":\"35b9166c-3d92-4fd0-960e-c703e7e3a5d4.MOBFM2WZ9AZUPTTZ.SEARCH\",\"ct\":\"productCard\",\"p\":\"1\",\"t\":1575221849165}]}]", 
		"EXTRARES", 
		"Url=https://rukminim1.flixcart.com/image/128/128/k34rki80/mobile/t/t/z/realme-5s-rmx1925-original-imafmbm65dwgffqg.jpeg?q=70", "Referer=https://www.flipkart.com/realme-5s-crystal-blue-64-gb/p/itm592977b0ba210?pid=MOBFM2WZ9AZUPTTZ&srno=b_1_1&otracker=nmenu_sub_Electronics_0_Realme&lid=LSTMOBFM2WZ9AZUPTTZXXEDBC&fm=organic&iid=35b9166c-3d92-4fd0-960e-c703e7e3a5d4.MOBFM2WZ9AZUPTTZ.SEARCH&ppt=browse&ppn=browse&ssid=p4xf83ehzk0000001575221835710", "ENDITEM", 
		"Url=https://rukminim1.flixcart.com/image/128/128/k34rki80/mobile/t/t/z/realme-5s-rmx1925-original-imafmbm6d6sjyhae.jpeg?q=70", "Referer=https://www.flipkart.com/realme-5s-crystal-blue-64-gb/p/itm592977b0ba210?pid=MOBFM2WZ9AZUPTTZ&srno=b_1_1&otracker=nmenu_sub_Electronics_0_Realme&lid=LSTMOBFM2WZ9AZUPTTZXXEDBC&fm=organic&iid=35b9166c-3d92-4fd0-960e-c703e7e3a5d4.MOBFM2WZ9AZUPTTZ.SEARCH&ppt=browse&ppn=browse&ssid=p4xf83ehzk0000001575221835710", "ENDITEM", 
		"Url=https://rukminim1.flixcart.com/image/128/128/k34rki80/mobile/t/t/z/realme-5s-rmx1925-original-imafmbm67vvxya5c.jpeg?q=70", "Referer=https://www.flipkart.com/realme-5s-crystal-blue-64-gb/p/itm592977b0ba210?pid=MOBFM2WZ9AZUPTTZ&srno=b_1_1&otracker=nmenu_sub_Electronics_0_Realme&lid=LSTMOBFM2WZ9AZUPTTZXXEDBC&fm=organic&iid=35b9166c-3d92-4fd0-960e-c703e7e3a5d4.MOBFM2WZ9AZUPTTZ.SEARCH&ppt=browse&ppn=browse&ssid=p4xf83ehzk0000001575221835710", "ENDITEM", 
		"Url=https://rukminim1.flixcart.com/image/128/128/k34rki80/mobile/t/t/z/realme-5s-rmx1925-original-imafmbm6e3szwd72.jpeg?q=70", "Referer=https://www.flipkart.com/realme-5s-crystal-blue-64-gb/p/itm592977b0ba210?pid=MOBFM2WZ9AZUPTTZ&srno=b_1_1&otracker=nmenu_sub_Electronics_0_Realme&lid=LSTMOBFM2WZ9AZUPTTZXXEDBC&fm=organic&iid=35b9166c-3d92-4fd0-960e-c703e7e3a5d4.MOBFM2WZ9AZUPTTZ.SEARCH&ppt=browse&ppn=browse&ssid=p4xf83ehzk0000001575221835710", "ENDITEM", 
		"Url=https://rukminim1.flixcart.com/image/128/128/k34rki80/mobile/t/t/z/realme-5s-rmx1925-original-imafmbm6hatkkzys.jpeg?q=70", "Referer=https://www.flipkart.com/realme-5s-crystal-blue-64-gb/p/itm592977b0ba210?pid=MOBFM2WZ9AZUPTTZ&srno=b_1_1&otracker=nmenu_sub_Electronics_0_Realme&lid=LSTMOBFM2WZ9AZUPTTZXXEDBC&fm=organic&iid=35b9166c-3d92-4fd0-960e-c703e7e3a5d4.MOBFM2WZ9AZUPTTZ.SEARCH&ppt=browse&ppn=browse&ssid=p4xf83ehzk0000001575221835710", "ENDITEM", 
		"Url=https://rukminim1.flixcart.com/image/128/128/k34rki80/mobile/t/t/z/realme-5s-rmx1925-original-imafmbm6tpkregsq.jpeg?q=70", "Referer=https://www.flipkart.com/realme-5s-crystal-blue-64-gb/p/itm592977b0ba210?pid=MOBFM2WZ9AZUPTTZ&srno=b_1_1&otracker=nmenu_sub_Electronics_0_Realme&lid=LSTMOBFM2WZ9AZUPTTZXXEDBC&fm=organic&iid=35b9166c-3d92-4fd0-960e-c703e7e3a5d4.MOBFM2WZ9AZUPTTZ.SEARCH&ppt=browse&ppn=browse&ssid=p4xf83ehzk0000001575221835710", "ENDITEM", 
		"Url=https://rukminim1.flixcart.com/image/128/128/k34rki80/mobile/t/t/z/realme-5s-rmx1925-original-imafmbm6wcagxhhy.jpeg?q=70", "Referer=https://www.flipkart.com/realme-5s-crystal-blue-64-gb/p/itm592977b0ba210?pid=MOBFM2WZ9AZUPTTZ&srno=b_1_1&otracker=nmenu_sub_Electronics_0_Realme&lid=LSTMOBFM2WZ9AZUPTTZXXEDBC&fm=organic&iid=35b9166c-3d92-4fd0-960e-c703e7e3a5d4.MOBFM2WZ9AZUPTTZ.SEARCH&ppt=browse&ppn=browse&ssid=p4xf83ehzk0000001575221835710", "ENDITEM", 
		"LAST");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_custom_request("security", 
		"URL=https://sentry.flipkart.com/api/2/security/?sentry_key=b2fe488e344a47eda53b8d306edec9b7&sentry_release=3.52.0", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/javascript", 
		"Referer=https://www.flipkart.com/mobiles/pr?sid=tyy%2C4io&p%5B%5D=facets.brand%255B%255D%3DRealme&otracker=nmenu_sub_Electronics_0_Realme", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		"EncType=application/csp-report", 
		"Body={\"csp-report\":{\"document-uri\":\"https://www.flipkart.com/mobiles/pr?sid=tyy%2C4io&p%5B%5D=facets.brand%255B%255D%3DRealme&otracker=nmenu_sub_Electronics_0_Realme\",\"referrer\":\"\",\"violated-directive\":\"img-src\",\"effective-directive\":\"img-src\",\"original-policy\":\"script-src 'self' 'unsafe-eval' https://*.flixcart.com https://*.flixcart.net https://flipkart.d1.sc.omtrdc.net https://dpm.demdex.net https://sslwidget.criteo.com https://widget.as.criteo.com https://tnc.phonepe.com "
		"'nonce-13387000479650510493'; style-src 'self' 'unsafe-inline' https://*.flixcart.com https://tnc.phonepe.com https://*.flixcart.net; img-src 'self' data: blob: https://*.flixcart.com https://*.flixcart.net https://flipkart.d1.sc.omtrdc.net https://www.facebook.com https://*.fkapi.net https://googleads.g.doubleclick.net https://www.google.com https://www.google.co.in https://www.googleadservices.com https://sp.analytics.yahoo.com https://bat.bing.com https://bat.r.msn.com https://www.payzippy.com "
		"https://tnc.phonepe.com; font-src 'self' data: https://*.flixcart.com https://tnc.phonepe.com https://*.flixcart.net; frame-src 'self' https://*.flipkart.com http://*.flipkart.com https://*.youtube.com https://youtube.com https://*.vimeo.com https://dis.as.criteo.com https://gum.criteo.com https://www.payzippy.com https://tnc.phonepe.com https://cdemux.appspot.com 'nonce-13387000479650510493'; worker-src 'self' https://*.flipkart.com blob:; child-src 'self' https://*.flipkart.com "
		"'nonce-13387000479650510493'; connect-src 'self' *; object-src 'none'; base-uri 'self'; report-uri https://sentry.flipkart.com/api/2/security/?sentry_key=b2fe488e344a47eda53b8d306edec9b7&sentry_release=3.52.0\",\"disposition\":\"enforce\",\"blocked-uri\":\"https://cx.atdmt.com\",\"status-code\":0,\"script-sample\":\"\"}}", 
		"EXTRARES", 
		"Url=https://rukminim1.flixcart.com/blobio/178/178/imr-201911/blobio-imr-201911_11c4a1c04e604d878d34219a04a9664b.jpg?q=90", "Referer=https://www.flipkart.com/realme-5s-crystal-blue-64-gb/p/itm592977b0ba210?pid=MOBFM2WZ9AZUPTTZ&srno=b_1_1&otracker=nmenu_sub_Electronics_0_Realme&lid=LSTMOBFM2WZ9AZUPTTZXXEDBC&fm=organic&iid=35b9166c-3d92-4fd0-960e-c703e7e3a5d4.MOBFM2WZ9AZUPTTZ.SEARCH&ppt=browse&ppn=browse&ssid=p4xf83ehzk0000001575221835710", "ENDITEM", 
		"Url=https://rukminim1.flixcart.com/image/128/128/k34rki80/mobile/t/t/z/realme-5s-rmx1925-original-imafmbm6shwwzh9d.jpeg?q=70", "Referer=https://www.flipkart.com/realme-5s-crystal-blue-64-gb/p/itm592977b0ba210?pid=MOBFM2WZ9AZUPTTZ&srno=b_1_1&otracker=nmenu_sub_Electronics_0_Realme&lid=LSTMOBFM2WZ9AZUPTTZXXEDBC&fm=organic&iid=35b9166c-3d92-4fd0-960e-c703e7e3a5d4.MOBFM2WZ9AZUPTTZ.SEARCH&ppt=browse&ppn=browse&ssid=p4xf83ehzk0000001575221835710", "ENDITEM", 
		"Url=https://rukminim1.flixcart.com/blobio/178/178/imr-201912/blobio-imr-201912_c6cf5e8fb32a44d78d12916ea8859f63.jpeg?q=90", "Referer=https://www.flipkart.com/realme-5s-crystal-blue-64-gb/p/itm592977b0ba210?pid=MOBFM2WZ9AZUPTTZ&srno=b_1_1&otracker=nmenu_sub_Electronics_0_Realme&lid=LSTMOBFM2WZ9AZUPTTZXXEDBC&fm=organic&iid=35b9166c-3d92-4fd0-960e-c703e7e3a5d4.MOBFM2WZ9AZUPTTZ.SEARCH&ppt=browse&ppn=browse&ssid=p4xf83ehzk0000001575221835710", "ENDITEM", 
		"Url=https://rukminim1.flixcart.com/blobio/178/178/imr-201911/blobio-imr-201911_47d5a7068a0f491aaa21bb49c1eef7ad.jpg?q=90", "Referer=https://www.flipkart.com/realme-5s-crystal-blue-64-gb/p/itm592977b0ba210?pid=MOBFM2WZ9AZUPTTZ&srno=b_1_1&otracker=nmenu_sub_Electronics_0_Realme&lid=LSTMOBFM2WZ9AZUPTTZXXEDBC&fm=organic&iid=35b9166c-3d92-4fd0-960e-c703e7e3a5d4.MOBFM2WZ9AZUPTTZ.SEARCH&ppt=browse&ppn=browse&ssid=p4xf83ehzk0000001575221835710", "ENDITEM", 
		"Url=https://rukminim1.flixcart.com/blobio/178/178/imr-201911/blobio-imr-201911_590f6b6a6ef746ceba762ade065fe903.jpg?q=90", "Referer=https://www.flipkart.com/realme-5s-crystal-blue-64-gb/p/itm592977b0ba210?pid=MOBFM2WZ9AZUPTTZ&srno=b_1_1&otracker=nmenu_sub_Electronics_0_Realme&lid=LSTMOBFM2WZ9AZUPTTZXXEDBC&fm=organic&iid=35b9166c-3d92-4fd0-960e-c703e7e3a5d4.MOBFM2WZ9AZUPTTZ.SEARCH&ppt=browse&ppn=browse&ssid=p4xf83ehzk0000001575221835710", "ENDITEM", 
		"Url=https://rukminim1.flixcart.com/blobio/178/178/imr-201912/blobio-imr-201912_cc74a4c5f9674ebf96ecf08e2f6915a3.jpg?q=90", "Referer=https://www.flipkart.com/realme-5s-crystal-blue-64-gb/p/itm592977b0ba210?pid=MOBFM2WZ9AZUPTTZ&srno=b_1_1&otracker=nmenu_sub_Electronics_0_Realme&lid=LSTMOBFM2WZ9AZUPTTZXXEDBC&fm=organic&iid=35b9166c-3d92-4fd0-960e-c703e7e3a5d4.MOBFM2WZ9AZUPTTZ.SEARCH&ppt=browse&ppn=browse&ssid=p4xf83ehzk0000001575221835710", "ENDITEM", 
		"Url=https://rukminim1.flixcart.com/blobio/178/178/imr-201911/blobio-imr-201911_109dcaa6ef704a9e80f363652216c8f8.jpg?q=90", "Referer=https://www.flipkart.com/realme-5s-crystal-blue-64-gb/p/itm592977b0ba210?pid=MOBFM2WZ9AZUPTTZ&srno=b_1_1&otracker=nmenu_sub_Electronics_0_Realme&lid=LSTMOBFM2WZ9AZUPTTZXXEDBC&fm=organic&iid=35b9166c-3d92-4fd0-960e-c703e7e3a5d4.MOBFM2WZ9AZUPTTZ.SEARCH&ppt=browse&ppn=browse&ssid=p4xf83ehzk0000001575221835710", "ENDITEM", 
		"Url=https://rukminim1.flixcart.com/blobio/178/178/imr-201911/blobio-imr-201911_607af4cafb954ba4a968d24464d3b426.jpg?q=90", "Referer=https://www.flipkart.com/realme-5s-crystal-blue-64-gb/p/itm592977b0ba210?pid=MOBFM2WZ9AZUPTTZ&srno=b_1_1&otracker=nmenu_sub_Electronics_0_Realme&lid=LSTMOBFM2WZ9AZUPTTZXXEDBC&fm=organic&iid=35b9166c-3d92-4fd0-960e-c703e7e3a5d4.MOBFM2WZ9AZUPTTZ.SEARCH&ppt=browse&ppn=browse&ssid=p4xf83ehzk0000001575221835710", "ENDITEM", 
		"Url=https://rukminim1.flixcart.com/blobio/124/124/imr-201911/blobio-imr-201911_11c4a1c04e604d878d34219a04a9664b.jpg?q=90", "Referer=https://www.flipkart.com/realme-5s-crystal-blue-64-gb/p/itm592977b0ba210?pid=MOBFM2WZ9AZUPTTZ&srno=b_1_1&otracker=nmenu_sub_Electronics_0_Realme&lid=LSTMOBFM2WZ9AZUPTTZXXEDBC&fm=organic&iid=35b9166c-3d92-4fd0-960e-c703e7e3a5d4.MOBFM2WZ9AZUPTTZ.SEARCH&ppt=browse&ppn=browse&ssid=p4xf83ehzk0000001575221835710", "ENDITEM", 
		"Url=https://rukminim1.flixcart.com/blobio/178/178/imr-201911/blobio-imr-201911_0282332f406745bd8cd41d98e2e6358d.jpg?q=90", "Referer=https://www.flipkart.com/realme-5s-crystal-blue-64-gb/p/itm592977b0ba210?pid=MOBFM2WZ9AZUPTTZ&srno=b_1_1&otracker=nmenu_sub_Electronics_0_Realme&lid=LSTMOBFM2WZ9AZUPTTZXXEDBC&fm=organic&iid=35b9166c-3d92-4fd0-960e-c703e7e3a5d4.MOBFM2WZ9AZUPTTZ.SEARCH&ppt=browse&ppn=browse&ssid=p4xf83ehzk0000001575221835710", "ENDITEM", 
		"Url=https://rukminim1.flixcart.com/blobio/124/124/imr-201911/blobio-imr-201911_47d5a7068a0f491aaa21bb49c1eef7ad.jpg?q=90", "Referer=https://www.flipkart.com/realme-5s-crystal-blue-64-gb/p/itm592977b0ba210?pid=MOBFM2WZ9AZUPTTZ&srno=b_1_1&otracker=nmenu_sub_Electronics_0_Realme&lid=LSTMOBFM2WZ9AZUPTTZXXEDBC&fm=organic&iid=35b9166c-3d92-4fd0-960e-c703e7e3a5d4.MOBFM2WZ9AZUPTTZ.SEARCH&ppt=browse&ppn=browse&ssid=p4xf83ehzk0000001575221835710", "ENDITEM", 
		"Url=https://rukminim1.flixcart.com/blobio/124/124/imr-201912/blobio-imr-201912_cc74a4c5f9674ebf96ecf08e2f6915a3.jpg?q=90", "Referer=https://www.flipkart.com/realme-5s-crystal-blue-64-gb/p/itm592977b0ba210?pid=MOBFM2WZ9AZUPTTZ&srno=b_1_1&otracker=nmenu_sub_Electronics_0_Realme&lid=LSTMOBFM2WZ9AZUPTTZXXEDBC&fm=organic&iid=35b9166c-3d92-4fd0-960e-c703e7e3a5d4.MOBFM2WZ9AZUPTTZ.SEARCH&ppt=browse&ppn=browse&ssid=p4xf83ehzk0000001575221835710", "ENDITEM", 
		"LAST");

	(web_remove_auto_header("Origin", "ImplicitGen=Yes", "LAST"));

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("X-user-agent", 
		"Mozilla/5.0 (Windows NT 6.3; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/78.0.3904.108 Safari/537.36 FKUA/website/41/website/Desktop");

	web_custom_request("getData_2", 
		"URL=https://www.flipkart.com/lc/getData?dataSourceId=websiteNavigationMenuDS_1.0&t=26253698", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.flipkart.com/realme-5s-crystal-blue-64-gb/p/itm592977b0ba210?pid=MOBFM2WZ9AZUPTTZ&srno=b_1_1&otracker=nmenu_sub_Electronics_0_Realme&lid=LSTMOBFM2WZ9AZUPTTZXXEDBC&fm=organic&iid=35b9166c-3d92-4fd0-960e-c703e7e3a5d4.MOBFM2WZ9AZUPTTZ.SEARCH&ppt=browse&ppn=browse&ssid=p4xf83ehzk0000001575221835710", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"EXTRARES", 
		"Url=https://rukminim1.flixcart.com/image/416/416/k34rki80/mobile/t/t/z/realme-5s-rmx1925-original-imafmbm6hatkkzys.jpeg?q=70", "Referer=https://www.flipkart.com/realme-5s-crystal-blue-64-gb/p/itm592977b0ba210?pid=MOBFM2WZ9AZUPTTZ&srno=b_1_1&otracker=nmenu_sub_Electronics_0_Realme&lid=LSTMOBFM2WZ9AZUPTTZXXEDBC&fm=organic&iid=35b9166c-3d92-4fd0-960e-c703e7e3a5d4.MOBFM2WZ9AZUPTTZ.SEARCH&ppt=browse&ppn=browse&ssid=p4xf83ehzk0000001575221835710", "ENDITEM", 
		"Url=https://rukminim1.flixcart.com/lockin/763/182/images/CCO__PP_2019-07-14.png?q=50", "Referer=https://www.flipkart.com/realme-5s-crystal-blue-64-gb/p/itm592977b0ba210?pid=MOBFM2WZ9AZUPTTZ&srno=b_1_1&otracker=nmenu_sub_Electronics_0_Realme&lid=LSTMOBFM2WZ9AZUPTTZXXEDBC&fm=organic&iid=35b9166c-3d92-4fd0-960e-c703e7e3a5d4.MOBFM2WZ9AZUPTTZ.SEARCH&ppt=browse&ppn=browse&ssid=p4xf83ehzk0000001575221835710", "ENDITEM", 
		"LAST");

	return 0;
}
# 5 "c:\\loadrunner\\projects\\1\\loadrunner\\\\combined_Web-Git1.c" 2

# 1 "vuser_end.c" 1
vuser_end()
{
	return 0;
}
# 6 "c:\\loadrunner\\projects\\1\\loadrunner\\\\combined_Web-Git1.c" 2

