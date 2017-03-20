Action()
 {
	 unsigned long *ftp_session=NULL;
	 char *address="D:\\FTP\\01.txt"; //定义log文件输出的地址和名称
     long filename;//定义存储文件指针的变量


	 web_reg_save_param("WcfResponse",
        "LB=\"ResultCode\":",
        "RB=}",
        "Ord=1",
        "RelFrameId=1",
        "Search=Body",
        "IgnoreRedirections=Yes",
    LAST);
     
	lr_rendezvous("上传集中");

		
	lr_start_transaction("文件上传");

     ftp_logon_ex(&ftp_session,"ftp_logon",
					//"URL=ftp://dmstest:dms.test=8021@180.153.154.44:8021",
				      "URL=ftp://dmstest:dms.test=8021@112.124.9.72:8021",
				LAST);

     ftp_put_ex(&ftp_session, "Ftp_Put",
					"SOURCE_PATH=D:\\FTP\\Package\\{FileName}",
					"TARGET_PATH=\\DataSyncTesting\\{FileName}",
					"PASSIVE=TRUE",
					"MODE=BINARY",
					ENDITEM,
				LAST);

	 //释放FTP连接
 	 ftp_logout_ex(&ftp_session);



	lr_end_transaction("文件上传", LR_AUTO);

	
	// lr_think_time(30);

   web_add_auto_header("Content-Type","application/json");

   lr_rendezvous("WCF集合点");

   lr_start_transaction("WCF调用");

   web_custom_request("ListThemes",

                      // "URL=http://180.153.154.44:3005/Impls/TableModeDataSync.svc/ProcessRequest",
					// "URL=http://192.168.0.48:3003/Impls/TableModeDataSync.svc/ProcessRequest",
					  "URL=http://112.124.9.72:3005/Impls/TableModeDataSync.svc/ProcessRequest", 

                       "Method=POST",

                       "Resource=0",

                       "RecContentType=application/json",

						"Referer=",

						"Body={\"pRequest\":{\"UploadFile\":[\"DataSyncTesting\/{FileName}\"],\"UserID\":\"{User}\",\"Token\":\"\",\"LastUpdateTime\":\"2013-07-16 11:40:11 290\",\"Version\":\"1\",\"OperationCode\":3,\"Platform\":\"SCH-I779\",\"ClientID\":\"58\"}}",
						"TargetFrame=",

                       LAST);



   lr_output_message("参数值为%s",lr_eval_string("{WcfResponse}"));

//    if (atoi(lr_eval_string("{WcfResponse}"))<=99){
// 	   lr_output_message("成功");
//    }else{
// 	   lr_output_message("失败");
//    }

   lr_end_transaction("WCF调用", LR_AUTO);


    if ((filename=fopen(address,"a+"))==NULL)//打开文件
    {
        lr_error_message("无法打开文件,地址是=%s",address);
        return -1;
    }

   if (atoi(lr_eval_string("{WcfResponse}"))<=99){
	   lr_output_message("成功");
	   fprintf(filename,"处理成功,返回值是%s\n",lr_eval_string("{WcfResponse}"));
   }else{
	   lr_output_message("失败");
	   fprintf(filename,"处理失败,返回值是%s\n",lr_eval_string("{WcfResponse}"));
   }

   fclose(filename);//关闭文件
 
     return 0;
 }
