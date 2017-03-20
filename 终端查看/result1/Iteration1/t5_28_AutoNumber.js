Ext.define("Jit.biz.AutoNumber", {
    alias: 'widget.jitbizautonumber',
    constructor: function (args) {
        var me = this;
        var instance = null;
        var argsConfig = { isEdit: false, numberType: 1, isDefaultLoad: true, maxLength: 40 };
        args = Ext.applyIf(args, argsConfig);
        args.readOnly = !args.isEdit;
        args.jitSize = 'small';
        if (args.width == null) { args.width = 183; }
        if (args.numberType == null) { args.numberType = 1; }
        //文本框
        var instance = Ext.create('Jit.form.field.Text', args);

        //判断是否存在
        instance.jitIsExistsValue = function (exists) {
            var pValue = instance.jitGetValue();
            if (pValue != null && pValue != "") {
                Ext.Ajax.request({
                    url: '/Framework/Javascript/Biz/Handler/AutoNumberHandler.ashx?method=IsExistsByNumber&NumberType=' + args.numberType + '&AutoNumber=' + instance.jitGetValue(),
                    params: {},
                    method: 'post',
                    success: function (response) {
                        try {
                            var jdata = eval(response.responseText);
                            exists.handler(jdata.success);
                        } catch (e) {

                        }
                    },
                    failure: function () {
                        Ext.Msg.alert("提示", "验证数据失败");
                    }
                });
            }
        }

        //重新获取自动编号
        instance.jitRefreshValue = function () {
            Ext.Ajax.request({
                url: '/Framework/Javascript/Biz/Handler/AutoNumberHandler.ashx?method=GetAutoNumber&NumberType=' + args.numberType,
                params: {},
                method: 'post',
                success: function (response) {
                    try {
                        var jdata = eval(response.responseText);
                        instance.jitSetValue(jdata.msg);
                    } catch (e) {

                    }

                },
                failure: function () {
                    Ext.Msg.alert("提示", "获取自动编号失败！");
                }
            });
        }
        if (args.isDefaultLoad != null && args.isDefaultLoad) {
            instance.jitRefreshValue();
        }
        return instance;
    }
});