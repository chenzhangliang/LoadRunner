var btncode = "search";

Ext.onReady(function () {
    //加载需要的文件
    InitVE();
    InitStore();
    InitView();
    //页面加载
    //JITPage.PageSize.setValue(15);
    JITPage.HandlerUrl.setValue("Handler/TaskDataFileHandler.ashx?mid=" + __mid);
    fnSearch();
});

/*查询照片*/
function fnSearch() {
    var myMask_info = JITPage.Msg.GetData;
    var myMask = new Ext.LoadMask(Ext.getBody(), { msg: myMask_info });
    myMask.show();
    Ext.Ajax.request({
        url: "Handler/TaskDataFileHandler.ashx?mid=" + __mid + "&btncode=search&method=GetVisitingTaskStepSum",
        params: {},
        method: 'post',
        success: function (response) {
            try {
                var jdata = eval(response.responseText);
                var nextPageHtml = "";
                if (jdata[0].topics.length > 0) {
                    for (var i = 0; i < jdata[0].topics.length; i++) {
                        var p = jdata[0].topics[i];
                        var StepName = p.StepName;
                        if (StepName==null||StepName == "null") {
                            StepName = "进出店";
                        }
                        nextPageHtml += ' <div class="cell"><a  href="/Module/VisitingData/photo/TaskDataphoto.aspx?mid='
                                        + __mid + '&VisitingTaskID='
                                        + p.VisitingTaskID + '&VisitingTaskStepID='
                                        + p.VisitingTaskStepID + '&VisitingTaskName='
                                        + escape(p.VisitingTaskName) + '&StepName='
                                        + escape(StepName) + '"  title="拜访任务：'
                                        + p.VisitingTaskName + '; 拜访步骤：'
                                         + StepName + '; 照片数量：'
                                          + p.PicSum
                                        + '张"><div class="celldiv"><img src="/Framework/Image/file.jpg" /></div><p>拜访任务：'
                                        + p.VisitingTaskName + ''
                                        + '<br/>拜访步骤：' + StepName
                                        + '<br/>照片数量：' + p.PicSum + '张</p></a></div>';
                    }
                } else {
                    nextPageHtml = ' <div class="cell"><a  href="javascript:void(0)"  title=""><div class="celldiv"><img src="/Framework/Image/file.jpg" /></div><p>拜访任务：'
                                        + '暂无数据'
                                        + '<br/>拜访步骤：暂无数据'
                                        + '<br/>照片数量：暂无数据</p></a></div>';
                }
                document.getElementById("container").innerHTML = nextPageHtml;
                myMask.hide();
            } catch (e) {
                myMask.hide();
            }
        },
        failure: function () {
            myMask.hide();
            //Ext.Msg.alert("提示", "验证数据失败");
        }
    });
}
