Action()
{

	lr_rendezvous("点击拜访照片查看");

	lr_start_transaction("拜访照片查看");

	lr_think_time(48);

	web_url("default.aspx_3", 
		"URL=http://180.153.154.42/default.aspx?r=0.7056934368811802", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://180.153.154.42/default.aspx", 
		"Snapshot=t110.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("拜访照片查看", 
		"URL=http://180.153.154.42/Module/VisitingData/File/TaskDataFile.aspx?mid=36470343-d65d-4883-a4b4-3c7cb7f23668", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://180.153.154.42/default.aspx", 
		"Snapshot=t111.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("TaskDataFileCtl.js", 
		"URL=http://180.153.154.42/Module/VisitingData/File/Controller/TaskDataFileCtl.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://180.153.154.42/Module/VisitingData/File/TaskDataFile.aspx?mid=36470343-d65d-4883-a4b4-3c7cb7f23668", 
		"Snapshot=t112.inf", 
		LAST);

	web_url("TaskDataFileVM.js", 
		"URL=http://180.153.154.42/Module/VisitingData/File/Model/TaskDataFileVM.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://180.153.154.42/Module/VisitingData/File/TaskDataFile.aspx?mid=36470343-d65d-4883-a4b4-3c7cb7f23668", 
		"Snapshot=t113.inf", 
		LAST);

	web_url("TaskDataFileView.js", 
		"URL=http://180.153.154.42/Module/VisitingData/File/View/TaskDataFileView.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://180.153.154.42/Module/VisitingData/File/TaskDataFile.aspx?mid=36470343-d65d-4883-a4b4-3c7cb7f23668", 
		"Snapshot=t114.inf", 
		LAST);

	web_url("TaskDataFileVMStore.js", 
		"URL=http://180.153.154.42/Module/VisitingData/File/Store/TaskDataFileVMStore.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://180.153.154.42/Module/VisitingData/File/TaskDataFile.aspx?mid=36470343-d65d-4883-a4b4-3c7cb7f23668", 
		"Snapshot=t115.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_url("loading.gif", 
		"URL=http://180.153.154.42/Lib/Javascript/Ext4.1.0/resources/themes/images/gray/grid/loading.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://180.153.154.42/Module/VisitingData/File/TaskDataFile.aspx?mid=36470343-d65d-4883-a4b4-3c7cb7f23668", 
		"Snapshot=t116.inf", 
		LAST);

	web_custom_request("TaskDataFileHandler.ashx", 
		"URL=http://180.153.154.42/Module/VisitingData/File/Handler/TaskDataFileHandler.ashx?mid=36470343-d65d-4883-a4b4-3c7cb7f23668&btncode=search&method=GetVisitingTaskStepSum", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://180.153.154.42/Module/VisitingData/File/TaskDataFile.aspx?mid=36470343-d65d-4883-a4b4-3c7cb7f23668", 
		"Snapshot=t117.inf", 
		"Mode=HTTP", 
		"EncType=", 
		LAST);

	web_url("file.jpg", 
		"URL=http://180.153.154.42/Framework/Image/file.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=http://180.153.154.42/Module/VisitingData/File/TaskDataFile.aspx?mid=36470343-d65d-4883-a4b4-3c7cb7f23668", 
		"Snapshot=t118.inf", 
		LAST);

	lr_end_transaction("拜访照片查看",LR_AUTO);

	lr_rendezvous("查看进店照片");

	lr_start_transaction("查看进出店照片");

	lr_think_time(35);

	web_url("TaskDataphoto.aspx", 
		"URL=http://180.153.154.42/Module/VisitingData/photo/TaskDataphoto.aspx?mid=36470343-d65d-4883-a4b4-3c7cb7f23668&VisitingTaskID=d9385bdc-532d-4a94-a398-dff9b5f7ee4f&VisitingTaskStepID=null&VisitingTaskName=%u5DE5%u4F5C%u4EFB%u52A1&StepName=%u8FDB%u51FA%u5E97", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://180.153.154.42/Module/VisitingData/File/TaskDataFile.aspx?mid=36470343-d65d-4883-a4b4-3c7cb7f23668", 
		"Snapshot=t119.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("ClientStructure.js", 
		"URL=http://180.153.154.42/Framework/javascript/Biz/ClientStructure.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://180.153.154.42/Module/VisitingData/photo/TaskDataphoto.aspx?mid=36470343-d65d-4883-a4b4-3c7cb7f23668&VisitingTaskID=d9385bdc-532d-4a94-a398-dff9b5f7ee4f&VisitingTaskStepID=null&VisitingTaskName=%u5DE5%u4F5C%u4EFB%u52A1&StepName=%u8FDB%u51FA%u5E97", 
		"Snapshot=t120.inf", 
		LAST);

	web_url("ClientPosition.js", 
		"URL=http://180.153.154.42/Framework/javascript/Biz/ClientPosition.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://180.153.154.42/Module/VisitingData/photo/TaskDataphoto.aspx?mid=36470343-d65d-4883-a4b4-3c7cb7f23668&VisitingTaskID=d9385bdc-532d-4a94-a398-dff9b5f7ee4f&VisitingTaskStepID=null&VisitingTaskName=%u5DE5%u4F5C%u4EFB%u52A1&StepName=%u8FDB%u51FA%u5E97", 
		"Snapshot=t121.inf", 
		LAST);

	web_url("JITStoreGrid.js", 
		"URL=http://180.153.154.42/Framework/Javascript/pub/JITStoreGrid.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://180.153.154.42/Module/VisitingData/photo/TaskDataphoto.aspx?mid=36470343-d65d-4883-a4b4-3c7cb7f23668&VisitingTaskID=d9385bdc-532d-4a94-a398-dff9b5f7ee4f&VisitingTaskStepID=null&VisitingTaskName=%u5DE5%u4F5C%u4EFB%u52A1&StepName=%u8FDB%u51FA%u5E97", 
		"Snapshot=t122.inf", 
		LAST);

	web_url("JITStoreSearchPannel.js", 
		"URL=http://180.153.154.42/Framework/javascript/pub/JITStoreSearchPannel.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://180.153.154.42/Module/VisitingData/photo/TaskDataphoto.aspx?mid=36470343-d65d-4883-a4b4-3c7cb7f23668&VisitingTaskID=d9385bdc-532d-4a94-a398-dff9b5f7ee4f&VisitingTaskStepID=null&VisitingTaskName=%u5DE5%u4F5C%u4EFB%u52A1&StepName=%u8FDB%u51FA%u5E97", 
		"Snapshot=t123.inf", 
		LAST);

	web_url("TaskDataPhotoCtl.js", 
		"URL=http://180.153.154.42/Module/VisitingData/photo/Controller/TaskDataPhotoCtl.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://180.153.154.42/Module/VisitingData/photo/TaskDataphoto.aspx?mid=36470343-d65d-4883-a4b4-3c7cb7f23668&VisitingTaskID=d9385bdc-532d-4a94-a398-dff9b5f7ee4f&VisitingTaskStepID=null&VisitingTaskName=%u5DE5%u4F5C%u4EFB%u52A1&StepName=%u8FDB%u51FA%u5E97", 
		"Snapshot=t124.inf", 
		LAST);

	web_url("jquery.fancybox-1.3.1.css", 
		"URL=http://180.153.154.42/Framework/javascript/other/fancybox/jquery.fancybox-1.3.1.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://180.153.154.42/Module/VisitingData/photo/TaskDataphoto.aspx?mid=36470343-d65d-4883-a4b4-3c7cb7f23668&VisitingTaskID=d9385bdc-532d-4a94-a398-dff9b5f7ee4f&VisitingTaskStepID=null&VisitingTaskName=%u5DE5%u4F5C%u4EFB%u52A1&StepName=%u8FDB%u51FA%u5E97", 
		"Snapshot=t125.inf", 
		LAST);

	web_url("TaskDataPhotoVM.js", 
		"URL=http://180.153.154.42/Module/VisitingData/photo/Model/TaskDataPhotoVM.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://180.153.154.42/Module/VisitingData/photo/TaskDataphoto.aspx?mid=36470343-d65d-4883-a4b4-3c7cb7f23668&VisitingTaskID=d9385bdc-532d-4a94-a398-dff9b5f7ee4f&VisitingTaskStepID=null&VisitingTaskName=%u5DE5%u4F5C%u4EFB%u52A1&StepName=%u8FDB%u51FA%u5E97", 
		"Snapshot=t126.inf", 
		LAST);

	web_url("TaskDataPhotoVMStore.js", 
		"URL=http://180.153.154.42/Module/VisitingData/photo/Store/TaskDataPhotoVMStore.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://180.153.154.42/Module/VisitingData/photo/TaskDataphoto.aspx?mid=36470343-d65d-4883-a4b4-3c7cb7f23668&VisitingTaskID=d9385bdc-532d-4a94-a398-dff9b5f7ee4f&VisitingTaskStepID=null&VisitingTaskName=%u5DE5%u4F5C%u4EFB%u52A1&StepName=%u8FDB%u51FA%u5E97", 
		"Snapshot=t127.inf", 
		LAST);

	web_url("TaskDataPhotoView.js", 
		"URL=http://180.153.154.42/Module/VisitingData/photo/View/TaskDataPhotoView.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://180.153.154.42/Module/VisitingData/photo/TaskDataphoto.aspx?mid=36470343-d65d-4883-a4b4-3c7cb7f23668&VisitingTaskID=d9385bdc-532d-4a94-a398-dff9b5f7ee4f&VisitingTaskStepID=null&VisitingTaskName=%u5DE5%u4F5C%u4EFB%u52A1&StepName=%u8FDB%u51FA%u5E97", 
		"Snapshot=t128.inf", 
		LAST);

	web_url("ImageView.js", 
		"URL=http://180.153.154.42/Framework/Javascript/Other/photoControl/ImageView.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://180.153.154.42/Module/VisitingData/photo/TaskDataphoto.aspx?mid=36470343-d65d-4883-a4b4-3c7cb7f23668&VisitingTaskID=d9385bdc-532d-4a94-a398-dff9b5f7ee4f&VisitingTaskStepID=null&VisitingTaskName=%u5DE5%u4F5C%u4EFB%u52A1&StepName=%u8FDB%u51FA%u5E97", 
		"Snapshot=t129.inf", 
		LAST);

	web_url("window1.js", 
		"URL=http://180.153.154.42/Framework/Javascript/Other/photoControl/window1.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://180.153.154.42/Module/VisitingData/photo/TaskDataphoto.aspx?mid=36470343-d65d-4883-a4b4-3c7cb7f23668&VisitingTaskID=d9385bdc-532d-4a94-a398-dff9b5f7ee4f&VisitingTaskStepID=null&VisitingTaskName=%u5DE5%u4F5C%u4EFB%u52A1&StepName=%u8FDB%u51FA%u5E97", 
		"Snapshot=t130.inf", 
		LAST);

	web_url("options.js", 
		"URL=http://180.153.154.42/Framework/javascript/Biz/options.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://180.153.154.42/Module/VisitingData/photo/TaskDataphoto.aspx?mid=36470343-d65d-4883-a4b4-3c7cb7f23668&VisitingTaskID=d9385bdc-532d-4a94-a398-dff9b5f7ee4f&VisitingTaskStepID=null&VisitingTaskName=%u5DE5%u4F5C%u4EFB%u52A1&StepName=%u8FDB%u51FA%u5E97", 
		"Snapshot=t131.inf", 
		LAST);

	web_url("Province.js", 
		"URL=http://180.153.154.42/Framework/javascript/Biz/Province.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://180.153.154.42/Module/VisitingData/photo/TaskDataphoto.aspx?mid=36470343-d65d-4883-a4b4-3c7cb7f23668&VisitingTaskID=d9385bdc-532d-4a94-a398-dff9b5f7ee4f&VisitingTaskStepID=null&VisitingTaskName=%u5DE5%u4F5C%u4EFB%u52A1&StepName=%u8FDB%u51FA%u5E97", 
		"Snapshot=t132.inf", 
		LAST);

	web_url("District.js", 
		"URL=http://180.153.154.42/Framework/javascript/Biz/District.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://180.153.154.42/Module/VisitingData/photo/TaskDataphoto.aspx?mid=36470343-d65d-4883-a4b4-3c7cb7f23668&VisitingTaskID=d9385bdc-532d-4a94-a398-dff9b5f7ee4f&VisitingTaskStepID=null&VisitingTaskName=%u5DE5%u4F5C%u4EFB%u52A1&StepName=%u8FDB%u51FA%u5E97", 
		"Snapshot=t133.inf", 
		LAST);

	web_url("City.js", 
		"URL=http://180.153.154.42/Framework/javascript/Biz/City.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://180.153.154.42/Module/VisitingData/photo/TaskDataphoto.aspx?mid=36470343-d65d-4883-a4b4-3c7cb7f23668&VisitingTaskID=d9385bdc-532d-4a94-a398-dff9b5f7ee4f&VisitingTaskStepID=null&VisitingTaskName=%u5DE5%u4F5C%u4EFB%u52A1&StepName=%u8FDB%u51FA%u5E97", 
		"Snapshot=t134.inf", 
		LAST);

	web_url("JITStoreSelectPannel.js", 
		"URL=http://180.153.154.42/Framework/javascript/pub/JITStoreSelectPannel.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://180.153.154.42/Module/VisitingData/photo/TaskDataphoto.aspx?mid=36470343-d65d-4883-a4b4-3c7cb7f23668&VisitingTaskID=d9385bdc-532d-4a94-a398-dff9b5f7ee4f&VisitingTaskStepID=null&VisitingTaskName=%u5DE5%u4F5C%u4EFB%u52A1&StepName=%u8FDB%u51FA%u5E97", 
		"Snapshot=t135.inf", 
		LAST);

	web_url("jquery.fancybox-1.3.1.js", 
		"URL=http://180.153.154.42/Framework/javascript/other/fancybox/jquery.fancybox-1.3.1.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://180.153.154.42/Module/VisitingData/photo/TaskDataphoto.aspx?mid=36470343-d65d-4883-a4b4-3c7cb7f23668&VisitingTaskID=d9385bdc-532d-4a94-a398-dff9b5f7ee4f&VisitingTaskStepID=null&VisitingTaskName=%u5DE5%u4F5C%u4EFB%u52A1&StepName=%u8FDB%u51FA%u5E97", 
		"Snapshot=t136.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_url("link.png", 
		"URL=http://180.153.154.42/Framework/Image/icon/gotop/link.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://180.153.154.42/Module/VisitingData/photo/TaskDataphoto.aspx?mid=36470343-d65d-4883-a4b4-3c7cb7f23668&VisitingTaskID=d9385bdc-532d-4a94-a398-dff9b5f7ee4f&VisitingTaskStepID=null&VisitingTaskName=%u5DE5%u4F5C%u4EFB%u52A1&StepName=%u8FDB%u51FA%u5E97", 
		"Snapshot=t137.inf", 
		LAST);

	web_url("TaskDataPhotoHandler.ashx", 
		"URL=http://180.153.154.42/Module/VisitingData/photo/Handler/TaskDataPhotoHandler.ashx?mid=36470343-d65d-4883-a4b4-3c7cb7f23668&btncode=search&method=GetTaskList&_dc=1373360714134&page=1&start=0&limit=25", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://180.153.154.42/Module/VisitingData/photo/TaskDataphoto.aspx?mid=36470343-d65d-4883-a4b4-3c7cb7f23668&VisitingTaskID=d9385bdc-532d-4a94-a398-dff9b5f7ee4f&VisitingTaskStepID=null&VisitingTaskName=%u5DE5%u4F5C%u4EFB%u52A1&StepName=%u8FDB%u51FA%u5E97", 
		"Snapshot=t138.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("exclamation.gif", 
		"URL=http://180.153.154.42/Lib/Javascript/Ext4.1.0/resources/themes/images/gray/form/exclamation.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://180.153.154.42/Module/VisitingData/photo/TaskDataphoto.aspx?mid=36470343-d65d-4883-a4b4-3c7cb7f23668&VisitingTaskID=d9385bdc-532d-4a94-a398-dff9b5f7ee4f&VisitingTaskStepID=null&VisitingTaskName=%u5DE5%u4F5C%u4EFB%u52A1&StepName=%u8FDB%u51FA%u5E97", 
		"Snapshot=t139.inf", 
		LAST);

	web_url("trigger.gif", 
		"URL=http://180.153.154.42/Lib/Javascript/Ext4.1.0/resources/themes/images/gray/form/trigger.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://180.153.154.42/Module/VisitingData/photo/TaskDataphoto.aspx?mid=36470343-d65d-4883-a4b4-3c7cb7f23668&VisitingTaskID=d9385bdc-532d-4a94-a398-dff9b5f7ee4f&VisitingTaskStepID=null&VisitingTaskName=%u5DE5%u4F5C%u4EFB%u52A1&StepName=%u8FDB%u51FA%u5E97", 
		"Snapshot=t140.inf", 
		LAST);

	web_url("date-trigger.gif", 
		"URL=http://180.153.154.42/Lib/Javascript/Ext4.1.0/resources/themes/images/gray/form/date-trigger.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://180.153.154.42/Module/VisitingData/photo/TaskDataphoto.aspx?mid=36470343-d65d-4883-a4b4-3c7cb7f23668&VisitingTaskID=d9385bdc-532d-4a94-a398-dff9b5f7ee4f&VisitingTaskStepID=null&VisitingTaskName=%u5DE5%u4F5C%u4EFB%u52A1&StepName=%u8FDB%u51FA%u5E97", 
		"Snapshot=t141.inf", 
		LAST);

	web_url("text-bg.gif", 
		"URL=http://180.153.154.42/Lib/Javascript/Ext4.1.0/resources/themes/images/gray/form/text-bg.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://180.153.154.42/Module/VisitingData/photo/TaskDataphoto.aspx?mid=36470343-d65d-4883-a4b4-3c7cb7f23668&VisitingTaskID=d9385bdc-532d-4a94-a398-dff9b5f7ee4f&VisitingTaskStepID=null&VisitingTaskName=%u5DE5%u4F5C%u4EFB%u52A1&StepName=%u8FDB%u51FA%u5E97", 
		"Snapshot=t142.inf", 
		LAST);

	web_url("button.png", 
		"URL=http://180.153.154.42/Lib/Image/button/button.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://180.153.154.42/Module/VisitingData/photo/TaskDataphoto.aspx?mid=36470343-d65d-4883-a4b4-3c7cb7f23668&VisitingTaskID=d9385bdc-532d-4a94-a398-dff9b5f7ee4f&VisitingTaskStepID=null&VisitingTaskName=%u5DE5%u4F5C%u4EFB%u52A1&StepName=%u8FDB%u51FA%u5E97", 
		"Snapshot=t143.inf", 
		LAST);

	web_url("fancybox-x.png", 
		"URL=http://180.153.154.42/Framework/javascript/other/fancybox/fancybox-x.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://180.153.154.42/Module/VisitingData/photo/TaskDataphoto.aspx?mid=36470343-d65d-4883-a4b4-3c7cb7f23668&VisitingTaskID=d9385bdc-532d-4a94-a398-dff9b5f7ee4f&VisitingTaskStepID=null&VisitingTaskName=%u5DE5%u4F5C%u4EFB%u52A1&StepName=%u8FDB%u51FA%u5E97", 
		"Snapshot=t144.inf", 
		LAST);

	web_url("buttoncurrent.png", 
		"URL=http://180.153.154.42/Lib/Image/button/buttoncurrent.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://180.153.154.42/Module/VisitingData/photo/TaskDataphoto.aspx?mid=36470343-d65d-4883-a4b4-3c7cb7f23668&VisitingTaskID=d9385bdc-532d-4a94-a398-dff9b5f7ee4f&VisitingTaskStepID=null&VisitingTaskName=%u5DE5%u4F5C%u4EFB%u52A1&StepName=%u8FDB%u51FA%u5E97", 
		"Snapshot=t145.inf", 
		LAST);

	web_url("fancybox-y.png", 
		"URL=http://180.153.154.42/Framework/javascript/other/fancybox/fancybox-y.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://180.153.154.42/Module/VisitingData/photo/TaskDataphoto.aspx?mid=36470343-d65d-4883-a4b4-3c7cb7f23668&VisitingTaskID=d9385bdc-532d-4a94-a398-dff9b5f7ee4f&VisitingTaskStepID=null&VisitingTaskName=%u5DE5%u4F5C%u4EFB%u52A1&StepName=%u8FDB%u51FA%u5E97", 
		"Snapshot=t146.inf", 
		LAST);

	web_url("blank.gif", 
		"URL=http://180.153.154.42/Framework/javascript/other/fancybox/blank.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://180.153.154.42/Module/VisitingData/photo/TaskDataphoto.aspx?mid=36470343-d65d-4883-a4b4-3c7cb7f23668&VisitingTaskID=d9385bdc-532d-4a94-a398-dff9b5f7ee4f&VisitingTaskStepID=null&VisitingTaskName=%u5DE5%u4F5C%u4EFB%u52A1&StepName=%u8FDB%u51FA%u5E97", 
		"Snapshot=t147.inf", 
		LAST);

	web_url("fancybox.png", 
		"URL=http://180.153.154.42/Framework/javascript/other/fancybox/fancybox.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://180.153.154.42/Module/VisitingData/photo/TaskDataphoto.aspx?mid=36470343-d65d-4883-a4b4-3c7cb7f23668&VisitingTaskID=d9385bdc-532d-4a94-a398-dff9b5f7ee4f&VisitingTaskStepID=null&VisitingTaskName=%u5DE5%u4F5C%u4EFB%u52A1&StepName=%u8FDB%u51FA%u5E97", 
		"Snapshot=t148.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_submit_data("TaskDataPhotoHandler.ashx_2", 
		"Action=http://180.153.154.42/Module/VisitingData/photo/Handler/TaskDataPhotoHandler.ashx?mid=36470343-d65d-4883-a4b4-3c7cb7f23668&btncode=search&method=GetVisitingTaskPhoto&r=0.36734992514105136", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://180.153.154.42/Module/VisitingData/photo/TaskDataphoto.aspx?mid=36470343-d65d-4883-a4b4-3c7cb7f23668&VisitingTaskID=d9385bdc-532d-4a94-a398-dff9b5f7ee4f&VisitingTaskStepID=null&VisitingTaskName=%u5DE5%u4F5C%u4EFB%u52A1&StepName=%u8FDB%u51FA%u5E97", 
		"Snapshot=t149.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=page", "Value=1", ENDITEM, 
		"Name=limit", "Value=50", ENDITEM, 
		"Name=ClientStructureID", "Value=", ENDITEM, 
		"Name=ClientPositionID", "Value=", ENDITEM, 
		"Name=VisitingTaskID", "Value=d9385bdc-532d-4a94-a398-dff9b5f7ee4f", ENDITEM, 
		"Name=VisitingTaskStepID", "Value=null", ENDITEM, 
		"Name=IsInOutPic", "Value=", ENDITEM, 
		"Name=DateFrom", "Value=", ENDITEM, 
		"Name=DateTo", "Value=", ENDITEM, 
		"Name=ObjectName", "Value=", ENDITEM, 
		"Name=POPName", "Value=", ENDITEM, 
		"Name=ClientUserName", "Value=", ENDITEM, 
		LAST);

	lr_end_transaction("查看进出店照片",LR_AUTO);

	return 0;
}
