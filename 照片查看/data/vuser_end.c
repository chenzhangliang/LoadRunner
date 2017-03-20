vuser_end()
{

	lr_think_time(7);

	web_url("default.aspx_4", 
		"URL=http://180.153.154.42/default.aspx?method=LogOut", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://180.153.154.42/Module/VisitingData/photo/TaskDataphoto.aspx?mid=36470343-d65d-4883-a4b4-3c7cb7f23668&VisitingTaskID=d9385bdc-532d-4a94-a398-dff9b5f7ee4f&VisitingTaskStepID=null&VisitingTaskName=%u5DE5%u4F5C%u4EFB%u52A1&StepName=%u8FDB%u51FA%u5E97", 
		"Snapshot=t150.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("login.aspx_3", 
		"URL=http://180.153.154.42/login.aspx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://180.153.154.42/default.aspx?method=LogOut", 
		"Snapshot=t151.inf", 
		"Mode=HTTP", 
		LAST);

	return 0;
}