Action()
{
	char *address="C:\\Users\\Administrator\\Desktop\\haolyy.txt"; //定义log文件输出的地址和名称
    long filename;//定义存储文件指针的变量

	char *address1="C:\\Users\\Administrator\\Desktop\\vip.txt"; //定义log文件输出的地址和名称
    long filename1;//定义存储文件指针的变量

	if ((filename=fopen(address,"a+"))==NULL)//打开文件
    {
        lr_error_message("无法打开此文件,address=%s",address);
        return -1;
    }

	if ((filename1=fopen(address1,"a+"))==NULL)//打开文件
    {
        lr_error_message("无法打开此文件,address=%s",address1);
        return -1;
    }

	web_submit_data("haolyy",
	"Action=http://upload.haolyy.com/index.php?user&q=login",
	"Method=POST",
	"TargetFrame=",
	"RecContentType=text/html",
	"Referer=http://upload.haolyy.com/index.php?user&q=login",
	//"Snapshot=t98.inf",
	"Mode=HTML",
	ITEMDATA,
	"Name=ajax", "Value=1", ENDITEM,
	"Name=keywords", "Value={w_name1}", ENDITEM,
	"Name=password", "Value=abcd1234", ENDITEM,
	LAST);

	//已赚收益
	web_reg_save_param("haolyy.yzsy",
	"LB=<ul class=\"shouy_zhuan\">\r\n      <li class=\"zhuan_nub\" >",
	"RB=</li>",
	"Ord=1",
	"RelFrameId=1",
	"Search=Body",
	"IgnoreRedirections=Yes",
	LAST);

	//已获奖励
	web_reg_save_param("haolyy.yhjl",
	"LB=<ul class=\"shouy_zhuan3\">\r\n      <li class=\"zhuan_nub\" >",
	"RB=</li>",
	"Ord=1",
	"RelFrameId=1",
	"Search=Body",
	"IgnoreRedirections=Yes",
	LAST);

	//累积投资
	web_reg_save_param("haolyy.ljtz",
	"LB=<ul class=\"shouy_zhuan2\">\r\n            <li class=\"zhuan_nub\" >",
	"RB=</li>",
	"Ord=1",
	"RelFrameId=1",
	"Search=Body",
	"IgnoreRedirections=Yes",
	LAST);

	//待收本息
	web_reg_save_param("haolyy.dsbx",
	"LB=<ul class=\"shouy_zhuan4\">\r\n      <li class=\"zhuan_nub\" >",
	"RB=</li>",
	"Ord=1",
	"RelFrameId=1",
	"Search=Body",
	"IgnoreRedirections=Yes",
	LAST);

	//可用余额
	web_reg_save_param("haolyy.kyye",
	"LB=<p><span>可用余额</span><span class=\"hc_sp2\">",
	"RB=</span></p>",
	"Ord=1",
	"RelFrameId=1",
	"Search=Body",
	"IgnoreRedirections=Yes",
	LAST);

	//冻结资金
	web_reg_save_param("haolyy.djzj",
	"LB=<p><span>冻结资金</span><span class=\"hc_sp2\">",
	"RB=</span></p>",
	"Ord=1",
	"RelFrameId=1",
	"Search=Body",
	"IgnoreRedirections=Yes",
	LAST);

	//资产总额
	web_reg_save_param("haolyy.zcze",
	"LB=var t_l = \"",
	"RB=\";\r\n",
	"Ord=1",
	"RelFrameId=1",
	"Search=Body",
	"IgnoreRedirections=Yes",
	LAST);

	//红包
	web_reg_save_param("haolyy.hb",
	"LB=<span id=\"hb\">",
	"RB=</span>",
	"Ord=1",
	"RelFrameId=1",
	"Search=Body",
	"IgnoreRedirections=Yes",
	LAST);

	//体验金
	web_reg_save_param("haolyy.tyj",
	"LB=体验金<span> ",
	"RB=</span>",
	"Ord=1",
	"RelFrameId=1",
	"Search=Body",
	"IgnoreRedirections=Yes",
	LAST);

	//活动金
	web_reg_save_param("haolyy.hdj",
	"LB=活动金<span> ",
	"RB=</span>",
	"Ord=1",
	"RelFrameId=1",
	"Search=Body",
	"IgnoreRedirections=Yes",
	LAST);

// 	//最近回款日
// 	web_reg_save_param("haolyy.zjhkr",
// 	"LB=最近回款日 <span>",
// 	"RB=</span>",
// 	"Ord=1",
// 	"RelFrameId=1",
// 	"Search=Body",
// 	"IgnoreRedirections=Yes",
// 	LAST);
//
// 	//还剩
// 	web_reg_save_param("haolyy.hs",
// 	"LB=<dt class=\"rli_gr\">",
// 	"RB=</dt>",
// 	"Ord=1",
// 	"RelFrameId=1",
// 	"Search=Body",
// 	"IgnoreRedirections=Yes",
// 	LAST);
//
// 	//回款金额
// 	web_reg_save_param("haolyy.hkje",
// 	"LB=huikuanxiq_jie\"><span>",
// 	"RB=</span>",
// 	"Ord=1",
// 	"RelFrameId=1",
// 	"Search=Body",
// 	"IgnoreRedirections=Yes",
// 	LAST);
//=======================================================================================================================
	//近半年收益
	web_reg_save_param("haolyy.sy05",
	"LB=\r\n2015年05月 	",
	"RB=%\r\n2015年06",
	"Ord=1",
	"RelFrameId=1",
	"Search=Body",
	"IgnoreRedirections=Yes",
	LAST);
	web_reg_save_param("haolyy.sy06",
	"LB=\r\n2015年06月 	",
	"RB=%\r\n2015年07",
	"Ord=1",
	"RelFrameId=1",
	"Search=Body",
	"IgnoreRedirections=Yes",
	LAST);
	web_reg_save_param("haolyy.sy07",
	"LB=\r\n2015年07月 	",
	"RB=%\r\n2015年08",
	"Ord=1",
	"RelFrameId=1",
	"Search=Body",
	"IgnoreRedirections=Yes",
	LAST);
	web_reg_save_param("haolyy.sy08",
	"LB=\r\n2015年08月 	",
	"RB=%\r\n2015年09",
	"Ord=1",
	"RelFrameId=1",
	"Search=Body",
	"IgnoreRedirections=Yes",
	LAST);
	web_reg_save_param("haolyy.sy09",
	"LB=\r\n2015年09月 	",
	"RB=%\r\n2015年10",
	"Ord=1",
	"RelFrameId=1",
	"Search=Body",
	"IgnoreRedirections=Yes",
	LAST);
    web_reg_save_param("haolyy.sy10",
	"LB=\r\n2015年10月 	",
	"RB=%",
	"Ord=1",
	"RelFrameId=1",
	"Search=Body",
	"IgnoreRedirections=Yes",
	LAST);

	web_custom_request("ListThemes",
	"URL=http://upload.haolyy.com/?user&q=code/account/my",
	"Method=GET",
	"Resource=0",
	"RecContentType=application/json",
	"Referer=",
	"TargetFrame=",
	LAST);

//=============================开始获取VIP环境数据================================================
	web_submit_data("login_2",
	"Action=http://a.haolyy.com/auth/login",
	"Method=POST",
	"TargetFrame=",
	"RecContentType=application/json",
	"Referer=http://a.haolyy.com/login",
	"Snapshot=t47.inf",
	"Mode=HTML",
	ITEMDATA,
	"Name=loginType", "Value=3", ENDITEM,
	"Name=username", "Value={v_user1}", ENDITEM,
	"Name=password", "Value=abcd1234", ENDITEM,
	//"Name=_token", "Value=5kJrYluEBO0QkaiakWvcQHJ4EhhygSL0eRTGMfNU", ENDITEM,
	LAST);

	//已赚收益
	web_reg_save_param("vip.yzsy",
	"LB=<li class=\"z1\"><p class=\"zw\">",
	"RB=</p>",
	"Ord=1",
	"RelFrameId=1",
	"Search=Body",
	"IgnoreRedirections=Yes",
	LAST);

	//已获奖励
	web_reg_save_param("vip.yhjl",
	"LB=<li class=\"z2\"><p class=\"zw\">",
	"RB=</p>",
	"Ord=1",
	"RelFrameId=1",
	"Search=Body",
	"IgnoreRedirections=Yes",
	LAST);

	//累积投资
	web_reg_save_param("vip.ljtz",
	"LB=<li class=\"z3\"><p class=\"zw\">",
	"RB=</p>",
	"Ord=1",
	"RelFrameId=1",
	"Search=Body",
	"IgnoreRedirections=Yes",
	LAST);

	//待收本息
	web_reg_save_param("vip.dsbx",
	"LB=<li class=\"z4 last\"><p class=\"zw\">",
	"RB=</p>",
	"Ord=1",
	"RelFrameId=1",
	"Search=Body",
	"IgnoreRedirections=Yes",
	LAST);

	//可用余额
	web_reg_save_param("vip.kyye",
	"LB=\t<p>鍙敤浣欓<span>",
	"RB=</span></p>",
	"Ord=1",
	"RelFrameId=1",
	"Search=Body",
	"IgnoreRedirections=Yes",
	LAST);

	//冻结资金
	web_reg_save_param("vip.djzj",
	"LB=<p>鍐荤粨閲戦<span>",
	"RB=</span></p>",
	"Ord=1",
	"RelFrameId=1",
	"Search=Body",
	"IgnoreRedirections=Yes",
	LAST);

	//资产总额
	web_reg_save_param("vip.zcze",
	"LB=<p>璧勪骇鎬婚<span>",
	"RB=</span></p>",
	"Ord=1",
	"RelFrameId=1",
	"Search=Body",
	"IgnoreRedirections=Yes",
	LAST);

	//红包
	web_reg_save_param("vip.hb",
	"LB=<p class=\"hb ht\">绾㈠寘<span>",
	"RB=</span>",
	"Ord=1",
	"RelFrameId=1",
	"Search=Body",
	"IgnoreRedirections=Yes",
	LAST);

	//体验金
	web_reg_save_param("vip.tyj",
	"LB=<p class=\"tyj ht\">浣撻獙閲\x91<span>",
	"RB=</span>",
	"Ord=1",
	"RelFrameId=1",
	"Search=Body",
	"IgnoreRedirections=Yes",
	LAST);

	//活动金
	web_reg_save_param("vip.hdj",
	"LB=<p class=\"tyj ht\">娲诲姩閲\x91<span>",
	"RB=</span>",
	"Ord=1",
	"RelFrameId=1",
	"Search=Body",
	"IgnoreRedirections=Yes",
	LAST);

// 	//最近回款日
// 	web_reg_save_param("vip.zjhkr",
// 	"LB=class=\"fr\">",
// 	"RB=</span>",
// 	"Ord=1",
// 	"RelFrameId=1",
// 	"Search=Body",
// 	"IgnoreRedirections=Yes",
// 	LAST);
//
// 	//还剩
// 	web_reg_save_param("vip.hs",
// 	"LB=<div class=\"memb_alarm\">杩樺墿<span>",
// 	"RB=</span>",
// 	"Ord=1",
// 	"RelFrameId=1",
// 	"Search=Body",
// 	"IgnoreRedirections=Yes",
// 	LAST);
//
// 	//回款金额
// 	web_reg_save_param("vip.hkje",
// 	"LB=<p class=\"memb_money\"><span>",
// 	"RB=</span>",
// 	"Ord=1",
// 	"RelFrameId=1",
// 	"Search=Body",
// 	"IgnoreRedirections=Yes",
// 	LAST);
//=======================================================================================================================
	//近半年收益
	web_reg_save_param("vip.sy05",
	"LB=2015骞\xB405鏈\x88\t",
	"RB=%",
	"Ord=1",
	"RelFrameId=1",
	"Search=Body",
	"IgnoreRedirections=Yes",
	LAST);
	web_reg_save_param("vip.sy06",
	"LB=2015骞\xB406鏈\x88\t",
	"RB=%",
	"Ord=1",
	"RelFrameId=1",
	"Search=Body",
	"IgnoreRedirections=Yes",
	LAST);
	web_reg_save_param("vip.sy07",
	"LB=2015骞\xB407鏈\x88\t",
	"RB=%",
	"Ord=1",
	"RelFrameId=1",
	"Search=Body",
	"IgnoreRedirections=Yes",
	LAST);
	web_reg_save_param("vip.sy08",
	"LB=2015骞\xB408鏈\x88\t",
	"RB=%",
	"Ord=1",
	"RelFrameId=1",
	"Search=Body",
	"IgnoreRedirections=Yes",
	LAST);
	web_reg_save_param("vip.sy09",
	"LB=2015骞\xB409鏈\x88\t",
	"RB=%",
	"Ord=1",
	"RelFrameId=1",
	"Search=Body",
	"IgnoreRedirections=Yes",
	LAST);
    web_reg_save_param("vip.sy10",
	"LB=2015骞\xB410鏈\x88\t",
	"RB=%",
	"Ord=1",
	"RelFrameId=1",
	"Search=Body",
	"IgnoreRedirections=Yes",
	LAST);

 	web_custom_request("vipaccount",
	"URL=http://a.haolyy.com/user",
	"Method=GET",
	"Resource=0",
	"RecContentType=application/json",
	"Referer=",
	"TargetFrame=",
	LAST);

	//记录结果===============haolyy====================
// 	fprintf(filename,"%s ",lr_eval_string("{haolyy.username}"));
// 	fprintf(filename,"已赚收益:%s 已获奖励:%s 累积投资:%s 待收本息:%s ",lr_eval_string("{haolyy.yzsy}"),lr_eval_string("{haolyy.yhjl}"),lr_eval_string("{haolyy.ljtz}"),lr_eval_string("{haolyy.dsbx}"));
// 	fprintf(filename,"可用余额:%s 冻结资金:%s 资产总额:%s ",lr_eval_string("{haolyy.kyye}"),lr_eval_string("{haolyy.djzj}"),lr_eval_string("{haolyy.zcze}"));
// 	fprintf(filename,"红包:%s 体验金:%s 活动金:%s ",lr_eval_string("{haolyy.hb}"),lr_eval_string("{haolyy.tyj}"),lr_eval_string("{haolyy.hdj}"));
// 	fprintf(filename,"最近回款日:%s 还剩:%s 回款金额:%s \n",lr_eval_string("{haolyy.zjhkr}"),lr_eval_string("{haolyy.hs}"),lr_eval_string("{haolyy.hkje}"));

	fprintf(filename,"%s ",lr_eval_string("{w_name2}"));
	fprintf(filename,"%s %s %s %s ",lr_eval_string("{haolyy.yzsy}"),lr_eval_string("{haolyy.yhjl}"),lr_eval_string("{haolyy.ljtz}"),lr_eval_string("{haolyy.dsbx}"));
	fprintf(filename,"%s %s %s ",lr_eval_string("{haolyy.kyye}"),lr_eval_string("{haolyy.djzj}"),lr_eval_string("{haolyy.zcze}"));
	fprintf(filename,"%s %s %s ",lr_eval_string("{haolyy.hb}"),lr_eval_string("{haolyy.tyj}"),lr_eval_string("{haolyy.hdj}"));
	//fprintf(filename,"%s %s %s ",lr_eval_string("{haolyy.zjhkr}"),lr_eval_string("{haolyy.hs}"),lr_eval_string("{haolyy.hkje}"));
	fprintf(filename,"%s %s %s %s %s %s \n",lr_eval_string("{haolyy.sy05}"),lr_eval_string("{haolyy.sy06}"),lr_eval_string("{haolyy.sy07}"),lr_eval_string("{haolyy.sy08}"),lr_eval_string("{haolyy.sy09}"),lr_eval_string("{haolyy.sy10}"));

// 	fprintf(filename,"%s\n",lr_eval_string("{w_name2}"));
// 	fprintf(filename,"已挣收益%s\n"
// 					 "已获奖励%s\n"
// 					 "累积投资%s\n"
// 					 "待收本息%s\n",
// 			lr_eval_string("{haolyy.yzsy}"),
// 			lr_eval_string("{haolyy.yhjl}"),
// 			lr_eval_string("{haolyy.ljtz}"),
// 			lr_eval_string("{haolyy.dsbx}"));
//
// 	fprintf(filename,"可用余额%s\n"
// 					 "冻结资金%s\n"
// 					 "资产总额%s\n",
// 			lr_eval_string("{haolyy.kyye}"),
// 			lr_eval_string("{haolyy.djzj}"),
// 			lr_eval_string("{haolyy.zcze}"));
//
// 	fprintf(filename,"红包%s\n"
// 					 "体验金%s\n"
// 					 "活动金%s\n",
// 			lr_eval_string("{haolyy.hb}"),
// 			lr_eval_string("{haolyy.tyj}"),
// 			lr_eval_string("{haolyy.hdj}"));
//
// 	fprintf(filename,"最近回款日%s\n"
// 					 "还剩%s\n"
// 					 "回款金额%s\n",
// 			lr_eval_string("{haolyy.zjhkr}"),
// 			lr_eval_string("{haolyy.hs}"),
// 			lr_eval_string("{haolyy.hkje}"));
//
// 	fprintf(filename,"5月%s\n"
// 					 "6月%s\n"
// 					 "7月%s\n"
// 					 "8月%s\n"
// 					 "9月%s\n"
// 					 "10月%s\n",
// 			lr_eval_string("{haolyy.sy05}"),
// 			lr_eval_string("{haolyy.sy06}"),
// 			lr_eval_string("{haolyy.sy07}"),
// 			lr_eval_string("{haolyy.sy08}"),
// 			lr_eval_string("{haolyy.sy09}"),
// 			lr_eval_string("{haolyy.sy10}"));
//
 	fclose(filename);//关闭文件


	//记录结果===============vip====================
// 	fprintf(filename1,"%s ",lr_eval_string("{vip.username}"));
// 	fprintf(filename1,"已赚收益:%s 已获奖励:%s 累积投资:%s 待收本息:%s ",lr_eval_string("{vip.yzsy}"),lr_eval_string("{vip.yhjl}"),lr_eval_string("{vip.ljtz}"),lr_eval_string("{vip.dsbx}"));
// 	fprintf(filename1,"可用余额:%s 冻结资金:%s 资产总额:%s ",lr_eval_string("{vip.kyye}"),lr_eval_string("{vip.djzj}"),lr_eval_string("{vip.zcze}"));
// 	fprintf(filename1,"红包:%s 体验金:%s 活动金:%s ",lr_eval_string("{vip.hb}"),lr_eval_string("{vip.tyj}"),lr_eval_string("{vip.hdj}"));
// 	fprintf(filename1,"最近回款日:%s 还剩:%s 回款金额:%s \n",lr_eval_string("{vip.zjhkr}"),lr_eval_string("{vip.hs}"),lr_eval_string("{vip.hkje}"));

	fprintf(filename1,"%s ",lr_eval_string("{v_user2}"));
	fprintf(filename1,"%s %s %s %s ",lr_eval_string("{vip.yzsy}"),lr_eval_string("{vip.yhjl}"),lr_eval_string("{vip.ljtz}"),lr_eval_string("{vip.dsbx}"));
	fprintf(filename1,"%s %s %s ",lr_eval_string("{vip.kyye}"),lr_eval_string("{vip.djzj}"),lr_eval_string("{vip.zcze}"));
	fprintf(filename1,"%s %s %s ",lr_eval_string("{vip.hb}"),lr_eval_string("{vip.tyj}"),lr_eval_string("{vip.hdj}"));
	//fprintf(filename1,"%s %s %s ",lr_eval_string("{vip.zjhkr}"),lr_eval_string("{vip.hs}"),lr_eval_string("{vip.hkje}"));
	fprintf(filename1,"%s %s %s %s %s %s \n",lr_eval_string("{vip.sy05}"),lr_eval_string("{vip.sy06}"),lr_eval_string("{vip.sy07}"),lr_eval_string("{vip.sy08}"),lr_eval_string("{vip.sy09}"),lr_eval_string("{vip.sy10}"));

// 	fprintf(filename1,"%s\n",lr_eval_string("{v_user2}"));
// 	fprintf(filename1,"已挣收益%s\n"
// 					 "已获奖励%s\n"
// 					 "累积投资%s\n"
// 					 "待收本息%s\n",
// 			lr_eval_string("{vip.yzsy}"),
// 			lr_eval_string("{vip.yhjl}"),
// 			lr_eval_string("{vip.ljtz}"),
// 			lr_eval_string("{vip.dsbx}"));
//
// 	fprintf(filename1,"可用余额%s\n"
// 					 "冻结资金%s\n"
// 					 "资产总额%s\n",
// 			lr_eval_string("{vip.kyye}"),
// 			lr_eval_string("{vip.djzj}"),
// 			lr_eval_string("{vip.zcze}"));
//
// 	fprintf(filename1,"红包%s\n"
// 					 "体验金%s\n"
// 					 "活动金%s\n",
// 			lr_eval_string("{vip.hb}"),
// 			lr_eval_string("{vip.tyj}"),
// 			lr_eval_string("{vip.hdj}"));
//
// 	fprintf(filename1,"最近回款日%s\n"
// 					 "还剩%s\n"
// 					 "回款金额%s\n",
// 			lr_eval_string("{vip.zjhkr}"),
// 			lr_eval_string("{vip.hs}"),
// 			lr_eval_string("{vip.hkje}"));
//
// 	fprintf(filename1,"5月%s\n"
// 					 "6月%s\n"
// 					 "7月%s\n"
// 					 "8月%s\n"
// 					 "9月%s\n"
// 					 "10月%s\n",
// 			lr_eval_string("{vip.sy05}"),
// 			lr_eval_string("{vip.sy06}"),
// 			lr_eval_string("{vip.sy07}"),
// 			lr_eval_string("{vip.sy08}"),
// 			lr_eval_string("{vip.sy09}"),
// 			lr_eval_string("{vip.sy10}"));

 	fclose(filename1);//关闭文件

	return 0;
}

