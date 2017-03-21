Action()
{
	/*
		验证用户名是否合法及唯一性接口
    */
	char str[]="0"; //设置对比的关键字
    char *address="C:\\Users\\Administrator\\Desktop\\发短信+校验.log"; //定义log文件输出的地址和名称
    long filename;//定义存储文件指针的变量

    if ((filename=fopen(address,"a+"))==NULL)//打开文件
    {
        lr_error_message("can not open this file,address=%s",address);
        return -1;
    }

	//抓取结果
	web_reg_save_param("fhz01",
		"LB=",
		"RB=",
		"Ord=1",
		"RelFrameId=1",
		"Search=Body",
		"IgnoreRedirections=Yes",
		LAST);

    //haolyy_sms_template表中code存储的是发送类型 3275代表注册验证码

    //发送验证码
	web_url("121.41.24.43", 
		"URL=http://121.41.24.43/?m=General&service=Account.SendSms&mobile=13482030055&type=3275&sendType=1", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

    //验证码校验
    web_url("121.41.24.43", 
        "URL=http://121.41.24.43/?m=General&service=Account.CheckSms&mobile=13482030055&vericode={验证码}&type=3275", 
        "TargetFrame=", 
        "Resource=0", 
        "RecContentType=text/html", 
        "Referer=", 
        "Snapshot=t1.inf", 
        "Mode=HTML", 
        LAST);
    

	//记录结果
// 	fprintf(filename,"传入值:@%s@预期值:@%s@返回值:@%s@\n",lr_eval_string("&mobile=13482030055"),lr_eval_string("预期值"),lr_eval_string("{code}"));
//
// 	fclose(filename);//关闭文件

	return 0;
}