# 1 "c:\\documents and settings\\administrator\\\327\300\303\346\\\260\242\300\357\324\306\275\305\261\276\\\326\325\266\313\262\351\277\264\\\\combined_\326\325\266\313\262\351\277\264.c"
# 1 "C:\\Program Files\\HP\\LoadRunner\\include/lrun.h" 1
 
 












 











# 103 "C:\\Program Files\\HP\\LoadRunner\\include/lrun.h"








































































	

 


















 
 
 
 
 


 
 
 
 
 
 














int     lr_start_transaction   (char * transaction_name);
int lr_start_sub_transaction          (char * transaction_name, char * trans_parent);
long lr_start_transaction_instance    (char * transaction_name, long parent_handle);



int     lr_end_transaction     (char * transaction_name, int status);
int lr_end_sub_transaction            (char * transaction_name, int status);
int lr_end_transaction_instance       (long transaction, int status);


 
typedef char* lr_uuid_t;
 



lr_uuid_t lr_generate_uuid();

 


int lr_generate_uuid_free(lr_uuid_t uuid);

 



int lr_generate_uuid_on_buf(lr_uuid_t buf);

   
# 263 "C:\\Program Files\\HP\\LoadRunner\\include/lrun.h"
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
# 502 "C:\\Program Files\\HP\\LoadRunner\\include/lrun.h"
void   lr_new_prefix (int type,
                                 char * filename,
                                 int line);
# 505 "C:\\Program Files\\HP\\LoadRunner\\include/lrun.h"
int   lr_log_message (char * fmt, ...);
int   lr_message (char * fmt, ...);
int   lr_error_message (char * fmt, ...);
int   lr_output_message (char * fmt, ...);
int   lr_vuser_status_message (char * fmt, ...);
int   lr_error_message_without_fileline (char * fmt, ...);
int   lr_fail_trans_with_error (char * fmt, ...);

 
 
 
 
 
# 528 "C:\\Program Files\\HP\\LoadRunner\\include/lrun.h"

 
 
 
 
 





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
# 562 "C:\\Program Files\\HP\\LoadRunner\\include/lrun.h"
void   lr_eval_string_ext_free (char * * pstr);

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
int lr_param_increment (char * dst_name,
                              char * src_name);
# 585 "C:\\Program Files\\HP\\LoadRunner\\include/lrun.h"













											  
											  

											  
											  
											  

int	  lr_save_var (char *              param_val,
							  unsigned long const param_val_len,
							  unsigned long const options,
							  char *			  param_name);
# 609 "C:\\Program Files\\HP\\LoadRunner\\include/lrun.h"
int   lr_save_string (const char * param_val, const char * param_name);
int   lr_free_parameter (const char * param_name);
int   lr_save_int (const int param_val, const char * param_name);


 
 
 
 
 
 
# 676 "C:\\Program Files\\HP\\LoadRunner\\include/lrun.h"
void   lr_save_datetime (const char *format, int offset, const char *name);









 











 
 
 
 
 






 



char * lr_error_context_get_entry (char * key);

 



long   lr_error_context_get_error_id (void);


 
 
 

int lr_table_get_rows_num (char * param_name);

int lr_table_get_cols_num (char * param_name);

char * lr_table_get_cell_by_col_index (char * param_name, int row, int col);

char * lr_table_get_cell_by_col_name (char * param_name, int row, const char* col_name);

int lr_table_get_column_name_by_index (char * param_name, int col, 
											char * * const col_name,
											int * col_name_len);
# 737 "C:\\Program Files\\HP\\LoadRunner\\include/lrun.h"

int lr_table_get_column_name_by_index_free (char * col_name);


 
 
 
 
 
 
 
 

 
 
 
 
 
 
int   lr_param_substit (char * file,
                                   int const line,
                                   char * in_str,
                                   int const in_len,
                                   char * * const out_str,
                                   int * const out_len);
# 762 "C:\\Program Files\\HP\\LoadRunner\\include/lrun.h"
void   lr_param_substit_free (char * * pstr);


 
# 774 "C:\\Program Files\\HP\\LoadRunner\\include/lrun.h"





char *   lrfnc_eval_string (char * str,
                                      char * file_name,
                                      long const line_num);
# 782 "C:\\Program Files\\HP\\LoadRunner\\include/lrun.h"


int   lrfnc_save_string ( const char * param_val,
                                     const char * param_name,
                                     const char * file_name,
                                     long const line_num);
# 788 "C:\\Program Files\\HP\\LoadRunner\\include/lrun.h"

int   lrfnc_free_parameter (const char * param_name );

int lr_save_searched_string(char *buffer, long buf_size, unsigned int occurrence,
			    char *search_string, int offset, unsigned int param_val_len, 
			    char *param_name);

 
char *   lr_string (char * str);

 
# 859 "C:\\Program Files\\HP\\LoadRunner\\include/lrun.h"

int   lr_save_value (char * param_val,
                                unsigned long const param_val_len,
                                unsigned long const options,
                                char * param_name,
                                char * file_name,
                                long const line_num);
# 866 "C:\\Program Files\\HP\\LoadRunner\\include/lrun.h"


 
 
 
 
 











int   lr_printf (char * fmt, ...);
 
int   lr_set_debug_message (unsigned int msg_class,
                                       unsigned int swtch);
# 888 "C:\\Program Files\\HP\\LoadRunner\\include/lrun.h"
unsigned int   lr_get_debug_message (void);


 
 
 
 
 

void   lr_double_think_time ( double secs);
void   lr_usleep (long);


 
 
 
 
 
 




int *   lr_localtime (long offset);


int   lr_send_port (long port);


# 964 "C:\\Program Files\\HP\\LoadRunner\\include/lrun.h"



struct _lr_declare_identifier{
	char signature[24];
	char value[128];
};

int   lr_pt_abort (void);

void vuser_declaration (void);






# 993 "C:\\Program Files\\HP\\LoadRunner\\include/lrun.h"


# 1005 "C:\\Program Files\\HP\\LoadRunner\\include/lrun.h"
















 
 
 
 
 







int    _lr_declare_transaction   (char * transaction_name);


 
 
 
 
 







int   _lr_declare_rendezvous  (char * rendezvous_name);

 
 
 
 
 

 
int lr_enable_ip_spoofing();
int lr_disable_ip_spoofing();


 




int lr_convert_string_encoding(char *sourceString, char *fromEncoding, char *toEncoding, char *paramName);





 
 

















# 1 "c:\\documents and settings\\administrator\\\327\300\303\346\\\260\242\300\357\324\306\275\305\261\276\\\326\325\266\313\262\351\277\264\\\\combined_\326\325\266\313\262\351\277\264.c" 2

# 1 "globals.h" 1



 
 

# 1 "C:\\Program Files\\HP\\LoadRunner\\include/web_api.h" 1
 







# 1 "C:\\Program Files\\HP\\LoadRunner\\include/as_web.h" 1
 






















































 




 








 
 
 

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
	web_submit_form(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_url(
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
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 










# 596 "C:\\Program Files\\HP\\LoadRunner\\include/as_web.h"


# 609 "C:\\Program Files\\HP\\LoadRunner\\include/as_web.h"



























# 647 "C:\\Program Files\\HP\\LoadRunner\\include/as_web.h"

 
 
 


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
























# 715 "C:\\Program Files\\HP\\LoadRunner\\include/as_web.h"



 
 
 






# 10 "C:\\Program Files\\HP\\LoadRunner\\include/web_api.h" 2












 






 











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
										 
										 
										 





 
 
 


# 7 "globals.h" 2

# 1 "C:\\Program Files\\HP\\LoadRunner\\include/lrw_custom_body.h" 1
 





# 8 "globals.h" 2


 
 


# 2 "c:\\documents and settings\\administrator\\\327\300\303\346\\\260\242\300\357\324\306\275\305\261\276\\\326\325\266\313\262\351\277\264\\\\combined_\326\325\266\313\262\351\277\264.c" 2

# 1 "vuser_init.c" 1
 







vuser_init()
{

	web_add_cookie("CCCJKLFAJUIORW=k1M+L9BW+dyABTNw1zwJzQ==; DOMAIN=112.124.44.147");

	web_add_cookie("CWRWQFAJKLUOIL=/tDXJc/YRytlx7n/GGg6gg==; DOMAIN=112.124.44.147");

	web_url("login.aspx", 
		"URL=http://112.124.44.147/login.aspx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTTP", 
		"LAST");

	web_concurrent_start(0);

	web_url("basic.css", 
		"URL=http://112.124.44.147/Framework/css/basic.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://112.124.44.147/login.aspx", 
		"Snapshot=t2.inf", 
		"LAST");

	web_url("validate.var.cn.js", 
		"URL=http://112.124.44.147/Framework/Javascript/other/validate/validate.var.cn.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://112.124.44.147/login.aspx", 
		"Snapshot=t3.inf", 
		"LAST");

	web_url("ad.png", 
		"URL=http://112.124.44.147/Framework/image/ad.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://112.124.44.147/login.aspx", 
		"Snapshot=t4.inf", 
		"LAST");

	web_url("btn-login.jpg", 
		"URL=http://112.124.44.147/Framework/image/btn-login.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=http://112.124.44.147/login.aspx", 
		"Snapshot=t5.inf", 
		"LAST");

	web_url("validate.js", 
		"URL=http://112.124.44.147/Framework/Javascript/other/validate/validate.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://112.124.44.147/login.aspx", 
		"Snapshot=t6.inf", 
		"LAST");

	web_url("common.css", 
		"URL=http://112.124.44.147/Framework/css/common.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://112.124.44.147/login.aspx", 
		"Snapshot=t7.inf", 
		"LAST");

	web_url("theme.css", 
		"URL=http://112.124.44.147/Framework/css/theme.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://112.124.44.147/login.aspx", 
		"Snapshot=t8.inf", 
		"LAST");

	web_url("validate.css", 
		"URL=http://112.124.44.147/Framework/Javascript/other/validate/css/validate.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://112.124.44.147/login.aspx", 
		"Snapshot=t9.inf", 
		"LAST");

	web_url("jquery-1.4.2.min.js", 
		"URL=http://112.124.44.147/Framework/Javascript/other/jquery-1.4.2.min.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://112.124.44.147/login.aspx", 
		"Snapshot=t10.inf", 
		"LAST");

	web_concurrent_end(0);

	web_concurrent_start(0);

	web_url("index-main-bg.jpg", 
		"URL=http://112.124.44.147/Framework/image/index-main-bg.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=http://112.124.44.147/login.aspx", 
		"Snapshot=t11.inf", 
		"LAST");

	web_url("login-bg.png", 
		"URL=http://112.124.44.147/Framework/image/login-bg.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://112.124.44.147/login.aspx", 
		"Snapshot=t12.inf", 
		"LAST");

	web_url("username-bg1.jpg", 
		"URL=http://112.124.44.147/Framework/image/username-bg1.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=http://112.124.44.147/login.aspx", 
		"Snapshot=t13.inf", 
		"LAST");

	web_url("username-bg.jpg", 
		"URL=http://112.124.44.147/Framework/image/username-bg.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=http://112.124.44.147/login.aspx", 
		"Snapshot=t14.inf", 
		"LAST");

	web_url("password-bg.jpg", 
		"URL=http://112.124.44.147/Framework/image/password-bg.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=http://112.124.44.147/login.aspx", 
		"Snapshot=t15.inf", 
		"LAST");

	web_concurrent_end(0);

	lr_think_time(5);

	web_submit_data("login.aspx_2", 
		"Action=http://112.124.44.147/login.aspx?method=UserLogin&r=0.6883807977455365", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://112.124.44.147/login.aspx", 
		"Snapshot=t16.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"Name=customer", "Value=clienttest", "ENDITEM", 
		"Name=username", "Value=021-580001", "ENDITEM", 
		"Name=userpwd", "Value=8888", "ENDITEM", 
		"LAST");

	web_url("default.aspx", 
		"URL=http://112.124.44.147/default.aspx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://112.124.44.147/login.aspx", 
		"Snapshot=t17.inf", 
		"Mode=HTTP", 
		"LAST");

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
	return 0;
}
# 3 "c:\\documents and settings\\administrator\\\327\300\303\346\\\260\242\300\357\324\306\275\305\261\276\\\326\325\266\313\262\351\277\264\\\\combined_\326\325\266\313\262\351\277\264.c" 2

# 1 "Action.c" 1
Action()
{

	lr_rendezvous("查看终端");

	lr_start_transaction("查看终端");

	lr_think_time(21);

	web_url("Store.aspx", 
		"URL=http://112.124.44.147/Module/BasicData/Store/Store.aspx?mid=ac2b8342-fbf7-42b9-a48b-8f2d7e19f98c", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://112.124.44.147/default.aspx", 
		"Snapshot=t110.inf", 
		"Mode=HTTP", 
		"LAST");

	web_concurrent_start(0);

	web_url("ClientStructure.js", 
		"URL=http://112.124.44.147/Framework/javascript/Biz/ClientStructure.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://112.124.44.147/Module/BasicData/Store/Store.aspx?mid=ac2b8342-fbf7-42b9-a48b-8f2d7e19f98c", 
		"Snapshot=t111.inf", 
		"LAST");

	web_url("Chain.js", 
		"URL=http://112.124.44.147/Framework/javascript/Biz/Chain.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://112.124.44.147/Module/BasicData/Store/Store.aspx?mid=ac2b8342-fbf7-42b9-a48b-8f2d7e19f98c", 
		"Snapshot=t112.inf", 
		"LAST");

	web_url("JITStoreFrmWindow.js", 
		"URL=http://112.124.44.147/Framework/Javascript/pub/JITStoreFrmWindow.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://112.124.44.147/Module/BasicData/Store/Store.aspx?mid=ac2b8342-fbf7-42b9-a48b-8f2d7e19f98c", 
		"Snapshot=t113.inf", 
		"LAST");

	web_url("JITStoreSelectPannel.js", 
		"URL=http://112.124.44.147/Framework/Javascript/pub/JITStoreSelectPannel.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://112.124.44.147/Module/BasicData/Store/Store.aspx?mid=ac2b8342-fbf7-42b9-a48b-8f2d7e19f98c", 
		"Snapshot=t114.inf", 
		"LAST");

	web_url("Channel.js", 
		"URL=http://112.124.44.147/Framework/javascript/Biz/Channel.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://112.124.44.147/Module/BasicData/Store/Store.aspx?mid=ac2b8342-fbf7-42b9-a48b-8f2d7e19f98c", 
		"Snapshot=t115.inf", 
		"LAST");

	web_url("CheckHeader.css", 
		"URL=http://112.124.44.147/Lib/Javascript/Ext4.1.0/ux/css/CheckHeader.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://112.124.44.147/Module/BasicData/Store/Store.aspx?mid=ac2b8342-fbf7-42b9-a48b-8f2d7e19f98c", 
		"Snapshot=t116.inf", 
		"LAST");

	web_url("JITStoreGrid.js", 
		"URL=http://112.124.44.147/Framework/Javascript/pub/JITStoreGrid.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://112.124.44.147/Module/BasicData/Store/Store.aspx?mid=ac2b8342-fbf7-42b9-a48b-8f2d7e19f98c", 
		"Snapshot=t117.inf", 
		"LAST");

	web_url("options.js", 
		"URL=http://112.124.44.147/Framework/javascript/Biz/options.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://112.124.44.147/Module/BasicData/Store/Store.aspx?mid=ac2b8342-fbf7-42b9-a48b-8f2d7e19f98c", 
		"Snapshot=t118.inf", 
		"LAST");

	web_url("JITStoreSearchPannel.js", 
		"URL=http://112.124.44.147/Framework/Javascript/pub/JITStoreSearchPannel.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://112.124.44.147/Module/BasicData/Store/Store.aspx?mid=ac2b8342-fbf7-42b9-a48b-8f2d7e19f98c", 
		"Snapshot=t119.inf", 
		"LAST");

	web_url("Province.js", 
		"URL=http://112.124.44.147/Framework/javascript/Biz/Province.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://112.124.44.147/Module/BasicData/Store/Store.aspx?mid=ac2b8342-fbf7-42b9-a48b-8f2d7e19f98c", 
		"Snapshot=t120.inf", 
		"LAST");

	web_url("City.js", 
		"URL=http://112.124.44.147/Framework/javascript/Biz/City.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://112.124.44.147/Module/BasicData/Store/Store.aspx?mid=ac2b8342-fbf7-42b9-a48b-8f2d7e19f98c", 
		"Snapshot=t121.inf", 
		"LAST");

	web_url("District.js", 
		"URL=http://112.124.44.147/Framework/javascript/Biz/District.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://112.124.44.147/Module/BasicData/Store/Store.aspx?mid=ac2b8342-fbf7-42b9-a48b-8f2d7e19f98c", 
		"Snapshot=t122.inf", 
		"LAST");

	web_url("ClientPosition.js", 
		"URL=http://112.124.44.147/Framework/javascript/Biz/ClientPosition.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://112.124.44.147/Module/BasicData/Store/Store.aspx?mid=ac2b8342-fbf7-42b9-a48b-8f2d7e19f98c", 
		"Snapshot=t123.inf", 
		"LAST");

	web_url("MapSelect.js", 
		"URL=http://112.124.44.147/Framework/javascript/Biz/MapSelect.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://112.124.44.147/Module/BasicData/Store/Store.aspx?mid=ac2b8342-fbf7-42b9-a48b-8f2d7e19f98c", 
		"Snapshot=t124.inf", 
		"LAST");

	web_url("AutoNumber.js", 
		"URL=http://112.124.44.147/Framework/javascript/Biz/AutoNumber.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://112.124.44.147/Module/BasicData/Store/Store.aspx?mid=ac2b8342-fbf7-42b9-a48b-8f2d7e19f98c", 
		"Snapshot=t125.inf", 
		"LAST");

	web_url("StoreDef.js", 
		"URL=http://112.124.44.147/Module/BasicData/Store/View/StoreDef.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://112.124.44.147/Module/BasicData/Store/Store.aspx?mid=ac2b8342-fbf7-42b9-a48b-8f2d7e19f98c", 
		"Snapshot=t126.inf", 
		"LAST");

	web_url("Photo.js", 
		"URL=http://112.124.44.147/Framework/javascript/Biz/Photo.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://112.124.44.147/Module/BasicData/Store/Store.aspx?mid=ac2b8342-fbf7-42b9-a48b-8f2d7e19f98c", 
		"Snapshot=t127.inf", 
		"LAST");

	web_url("StoreCtl.js", 
		"URL=http://112.124.44.147/Module/BasicData/Store/Controller/StoreCtl.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://112.124.44.147/Module/BasicData/Store/Store.aspx?mid=ac2b8342-fbf7-42b9-a48b-8f2d7e19f98c", 
		"Snapshot=t128.inf", 
		"LAST");

	web_url("StoreView.js", 
		"URL=http://112.124.44.147/Module/BasicData/Store/View/StoreView.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://112.124.44.147/Module/BasicData/Store/Store.aspx?mid=ac2b8342-fbf7-42b9-a48b-8f2d7e19f98c", 
		"Snapshot=t129.inf", 
		"LAST");

	web_url("HierarchyItem.js", 
		"URL=http://112.124.44.147/Framework/javascript/Biz/HierarchyItem.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://112.124.44.147/Module/BasicData/Store/Store.aspx?mid=ac2b8342-fbf7-42b9-a48b-8f2d7e19f98c", 
		"Snapshot=t130.inf", 
		"LAST");

	web_concurrent_end(0);

	web_url("CheckColumn.js", 
		"URL=http://112.124.44.147/Lib/Javascript/Ext4.1.0/ux/CheckColumn.js?_dc=1373280162753", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://112.124.44.147/Module/BasicData/Store/Store.aspx?mid=ac2b8342-fbf7-42b9-a48b-8f2d7e19f98c", 
		"Snapshot=t131.inf", 
		"LAST");

	web_submit_data("StoreHandler.ashx", 
		"Action=http://112.124.44.147/Module/BasicData/Store/Handler/StoreHandler.ashx?mid=ac2b8342-fbf7-42b9-a48b-8f2d7e19f98c", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://112.124.44.147/Module/BasicData/Store/Store.aspx?mid=ac2b8342-fbf7-42b9-a48b-8f2d7e19f98c", 
		"Snapshot=t132.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"Name=btncode", "Value=search", "ENDITEM", 
		"Name=method", "Value=QueryView", "ENDITEM", 
		"LAST");

	web_submit_data("StoreHandler.ashx_2", 
		"Action=http://112.124.44.147/Module/BasicData/Store/Handler/StoreHandler.ashx?mid=ac2b8342-fbf7-42b9-a48b-8f2d7e19f98c", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://112.124.44.147/Module/BasicData/Store/Store.aspx?mid=ac2b8342-fbf7-42b9-a48b-8f2d7e19f98c", 
		"Snapshot=t133.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"Name=btncode", "Value=search", "ENDITEM", 
		"Name=method", "Value=InitGridData", "ENDITEM", 
		"Name=pPageIndex", "Value=0", "ENDITEM", 
		"Name=pPageSize", "Value=15", "ENDITEM", 
		"Name=pKeyValue", "Value=", "ENDITEM", 
		"Name=CorrelationValue", "Value=", "ENDITEM", 
		"LAST");

	web_submit_data("StoreHandler.ashx_3", 
		"Action=http://112.124.44.147/Module/BasicData/Store/Handler/StoreHandler.ashx?mid=ac2b8342-fbf7-42b9-a48b-8f2d7e19f98c", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://112.124.44.147/Module/BasicData/Store/Store.aspx?mid=ac2b8342-fbf7-42b9-a48b-8f2d7e19f98c", 
		"Snapshot=t134.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"Name=btncode", "Value=search", "ENDITEM", 
		"Name=method", "Value=PageGridData", "ENDITEM", 
		"Name=pSearch", "Value=", "ENDITEM", 
		"Name=pPageIndex", "Value=0", "ENDITEM", 
		"Name=pPageSize", "Value=15", "ENDITEM", 
		"Name=pKeyValue", "Value=", "ENDITEM", 
		"Name=CorrelationValue", "Value=", "ENDITEM", 
		"LAST");

	web_submit_data("StoreHandler.ashx_4", 
		"Action=http://112.124.44.147/Module/BasicData/Store/Handler/StoreHandler.ashx?mid=ac2b8342-fbf7-42b9-a48b-8f2d7e19f98c", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://112.124.44.147/Module/BasicData/Store/Store.aspx?mid=ac2b8342-fbf7-42b9-a48b-8f2d7e19f98c", 
		"Snapshot=t135.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"Name=btncode", "Value=search", "ENDITEM", 
		"Name=method", "Value=EditView", "ENDITEM", 
		"LAST");

	web_concurrent_start(0);

	web_url("page-first-disabled.gif", 
		"URL=http://112.124.44.147/Lib/Javascript/Ext4.1.0/resources/themes/images/gray/grid/page-first-disabled.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://112.124.44.147/Module/BasicData/Store/Store.aspx?mid=ac2b8342-fbf7-42b9-a48b-8f2d7e19f98c", 
		"Snapshot=t136.inf", 
		"LAST");

	web_url("page-last-disabled.gif", 
		"URL=http://112.124.44.147/Lib/Javascript/Ext4.1.0/resources/themes/images/gray/grid/page-last-disabled.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://112.124.44.147/Module/BasicData/Store/Store.aspx?mid=ac2b8342-fbf7-42b9-a48b-8f2d7e19f98c", 
		"Snapshot=t137.inf", 
		"LAST");

	web_url("button.png", 
		"URL=http://112.124.44.147/Lib/Image/button/button.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://112.124.44.147/Module/BasicData/Store/Store.aspx?mid=ac2b8342-fbf7-42b9-a48b-8f2d7e19f98c", 
		"Snapshot=t138.inf", 
		"LAST");

	web_url("text-bg.gif", 
		"URL=http://112.124.44.147/Lib/Javascript/Ext4.1.0/resources/themes/images/gray/form/text-bg.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://112.124.44.147/Module/BasicData/Store/Store.aspx?mid=ac2b8342-fbf7-42b9-a48b-8f2d7e19f98c", 
		"Snapshot=t139.inf", 
		"LAST");

	web_url("trigger.gif", 
		"URL=http://112.124.44.147/Lib/Javascript/Ext4.1.0/resources/themes/images/gray/form/trigger.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://112.124.44.147/Module/BasicData/Store/Store.aspx?mid=ac2b8342-fbf7-42b9-a48b-8f2d7e19f98c", 
		"Snapshot=t140.inf", 
		"LAST");

	web_url("opensmall.png", 
		"URL=http://112.124.44.147/Lib/Image/button/opensmall.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://112.124.44.147/Module/BasicData/Store/Store.aspx?mid=ac2b8342-fbf7-42b9-a48b-8f2d7e19f98c", 
		"Snapshot=t141.inf", 
		"LAST");

	web_url("exclamation.gif", 
		"URL=http://112.124.44.147/Lib/Javascript/Ext4.1.0/resources/themes/images/gray/form/exclamation.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://112.124.44.147/Module/BasicData/Store/Store.aspx?mid=ac2b8342-fbf7-42b9-a48b-8f2d7e19f98c", 
		"Snapshot=t142.inf", 
		"LAST");

	web_url("toolbar-default-bg.gif", 
		"URL=http://112.124.44.147/Lib/Javascript/Ext4.1.0/resources/themes/images/gray/toolbar/toolbar-default-bg.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://112.124.44.147/Module/BasicData/Store/Store.aspx?mid=ac2b8342-fbf7-42b9-a48b-8f2d7e19f98c", 
		"Snapshot=t143.inf", 
		"LAST");

	web_url("page-prev-disabled.gif", 
		"URL=http://112.124.44.147/Lib/Javascript/Ext4.1.0/resources/themes/images/gray/grid/page-prev-disabled.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://112.124.44.147/Module/BasicData/Store/Store.aspx?mid=ac2b8342-fbf7-42b9-a48b-8f2d7e19f98c", 
		"Snapshot=t144.inf", 
		"LAST");

	web_url("page-next-disabled.gif", 
		"URL=http://112.124.44.147/Lib/Javascript/Ext4.1.0/resources/themes/images/gray/grid/page-next-disabled.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://112.124.44.147/Module/BasicData/Store/Store.aspx?mid=ac2b8342-fbf7-42b9-a48b-8f2d7e19f98c", 
		"Snapshot=t145.inf", 
		"LAST");

	web_url("loading.gif", 
		"URL=http://112.124.44.147/Lib/Javascript/Ext4.1.0/resources/themes/images/gray/grid/loading.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://112.124.44.147/Module/BasicData/Store/Store.aspx?mid=ac2b8342-fbf7-42b9-a48b-8f2d7e19f98c", 
		"Snapshot=t146.inf", 
		"LAST");

	web_url("refresh.gif", 
		"URL=http://112.124.44.147/Lib/Javascript/Ext4.1.0/resources/themes/images/gray/grid/refresh.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://112.124.44.147/Module/BasicData/Store/Store.aspx?mid=ac2b8342-fbf7-42b9-a48b-8f2d7e19f98c", 
		"Snapshot=t147.inf", 
		"LAST");

	web_url("column-header-bg.gif", 
		"URL=http://112.124.44.147/Lib/Javascript/Ext4.1.0/resources/themes/images/gray/grid/column-header-bg.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://112.124.44.147/Module/BasicData/Store/Store.aspx?mid=ac2b8342-fbf7-42b9-a48b-8f2d7e19f98c", 
		"Snapshot=t148.inf", 
		"LAST");

	web_url("buttoncurrent.png", 
		"URL=http://112.124.44.147/Lib/Image/button/buttoncurrent.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://112.124.44.147/Module/BasicData/Store/Store.aspx?mid=ac2b8342-fbf7-42b9-a48b-8f2d7e19f98c", 
		"Snapshot=t149.inf", 
		"LAST");

	web_url("spinner-small.gif", 
		"URL=http://112.124.44.147/Lib/Javascript/Ext4.1.0/resources/themes/images/gray/form/spinner-small.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://112.124.44.147/Module/BasicData/Store/Store.aspx?mid=ac2b8342-fbf7-42b9-a48b-8f2d7e19f98c", 
		"Snapshot=t150.inf", 
		"LAST");

	web_url("icon_noworld.jpg", 
		"URL=http://112.124.44.147/Lib/Image/icon_noworld.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=http://112.124.44.147/Module/BasicData/Store/Store.aspx?mid=ac2b8342-fbf7-42b9-a48b-8f2d7e19f98c", 
		"Snapshot=t151.inf", 
		"LAST");

	web_url("page-last.gif", 
		"URL=http://112.124.44.147/Lib/Javascript/Ext4.1.0/resources/themes/images/gray/grid/page-last.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://112.124.44.147/Module/BasicData/Store/Store.aspx?mid=ac2b8342-fbf7-42b9-a48b-8f2d7e19f98c", 
		"Snapshot=t152.inf", 
		"LAST");

	web_url("page-next.gif", 
		"URL=http://112.124.44.147/Lib/Javascript/Ext4.1.0/resources/themes/images/gray/grid/page-next.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://112.124.44.147/Module/BasicData/Store/Store.aspx?mid=ac2b8342-fbf7-42b9-a48b-8f2d7e19f98c", 
		"Snapshot=t153.inf", 
		"LAST");

	web_url("select.png", 
		"URL=http://112.124.44.147/Lib/Image/button/select.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://112.124.44.147/Module/BasicData/Store/Store.aspx?mid=ac2b8342-fbf7-42b9-a48b-8f2d7e19f98c", 
		"Snapshot=t154.inf", 
		"LAST");

	web_concurrent_end(0);

	lr_end_transaction("查看终端",2);

	return 0;
}
# 4 "c:\\documents and settings\\administrator\\\327\300\303\346\\\260\242\300\357\324\306\275\305\261\276\\\326\325\266\313\262\351\277\264\\\\combined_\326\325\266\313\262\351\277\264.c" 2

# 1 "vuser_end.c" 1
vuser_end()
{

	lr_think_time(5);

	web_url("default.aspx_3", 
		"URL=http://112.124.44.147/default.aspx?method=LogOut", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://112.124.44.147/Module/BasicData/Store/Store.aspx?mid=ac2b8342-fbf7-42b9-a48b-8f2d7e19f98c", 
		"Snapshot=t155.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("login.aspx_3", 
		"URL=http://112.124.44.147/login.aspx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://112.124.44.147/default.aspx?method=LogOut", 
		"Snapshot=t156.inf", 
		"Mode=HTTP", 
		"LAST");

	return 0;
}
# 5 "c:\\documents and settings\\administrator\\\327\300\303\346\\\260\242\300\357\324\306\275\305\261\276\\\326\325\266\313\262\351\277\264\\\\combined_\326\325\266\313\262\351\277\264.c" 2

