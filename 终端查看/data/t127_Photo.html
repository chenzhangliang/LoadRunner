
Ext.define('Jit.biz.Photo', {
    alias: 'widget.jitbizphoto',
    defaultValue: null,
    uploadValue: null,
    pPhotoType: null,
    constructor: function (args) {
        if (args.width == null) { args.width = 183; }
        var me = this;

        var defaultConfig = {
            id: 'PhotoID'   //panel 的id 默认为mapSelect
            , fieldLabel: '照片'  //textField 的fieldLabel
            , text: '...'  //button的显示文本
            , renderTo: null //panel的renderTo
            , width: args.width
            , photoTitle: '照片上传'
            , pClientID: 0
            , pClientUserID: 0           
        }
        args = Ext.applyIf(args, defaultConfig);
        if (__clientid != null) {
            args.pClientID = __clientid;
        }
        if (__clientuserid != null) {
            args.pClientUserID = __clientuserid;
        }
        //文本框
        me.textField = Ext.create('Jit.form.field.Text', {
            fieldLabel: args.fieldLabel
            , jitSize: 'small'
            , margin: '0 0 0 0'
            , readOnly: true
            , width: (args.width - 17)
        });

        me.textField.addListener('focus', function () {
            if (args.readOnly == false || args.readOnly == null) {
            }
        });
        //按钮
        me.button = Ext.create('Jit.button.Button', {
            text: ''
            , margin: '0 0 0 0'
            , height: 22
            , width: 17
            , border: 0
            , imgName: 'select'
            , handler: function () {
                if (args.readOnly == false || args.readOnly == null) {
                    me.photoWindow.show();
                    if (me.textField.jitGetValue() != null && me.textField.jitGetValue() != "") {
                        document.getElementById("__img" + args.id).src = '/File/MobileDevices/Photo/' + args.pClientID + '/' + args.pClientUserID + '/' + me.textField.jitGetValue();
                    }
                }
            }
        });
        //照片窗体控件
        //照片panel
        me.photoPanelImg = Ext.create('Ext.panel.Panel', {
            width: 490,
            height: 290,
            columnWidth: 1,
            html: '<div style="width:488px;height:290px; text-align:center;padding-top:5px"><img id="__img' + args.id + '" style="max-width:480px;max-height:280px" src="/Framework/Image/graphics/no_picture.jpg"></div>',
            layout: 'column',
            border: 0

        });
        //上传图片文本框
        me.textFieldUpdate = Ext.create('Jit.form.field.Text', {
            fieldLabel: '图片上传'
            , jitSize: 'small'
            , name: 'file-path'
            , margin: '5 0 5 0'
            , inputType: 'file'
            , width: 250
        });
        //上传按钮,上传图片并且返回图片名称
        me.buttonFieldUpdate = Ext.create('Jit.button.Button', {
            text: '上&nbsp;&nbsp;传'
            , margin: '5 10 5 10'
            , height: 25
            , width: 80
            , border: 0
            , jitIsDefaultCSS: true
            , jitIsHighlight: true
            , handler: function () {
                if (me.textFieldUpdate.jitGetValue() == null || me.textFieldUpdate.jitGetValue() == "") {
                    Ext.Msg.show({
                        title: "提示",
                        msg: "请选择上传图片",
                        minWidth: 200,
                        modal: true,
                        icon: Ext.Msg.INFO,
                        buttons: Ext.Msg.OK,
                        fn: function () {
                            return;
                        }
                    });
                }
                else {
                    Ext.MessageBox.buttonText.yes = "是";
                    Ext.MessageBox.buttonText.no = "否";
                    if ((me.defaultValue != null && me.defaultValue != "") || (me.uploadValue != null && me.uploadValue != "")) {
                        Ext.MessageBox.confirm('提示信息', '是否替换以前的照片信息?',
                         function deldbconfig(btn) {
                             if (btn == 'yes') {
                                 me.fnFileUpdate();
                             }
                         });
                    } else {
                        me.fnFileUpdate();
                    }
                }
            }
        });

        //上传的方法
        me.fnFileUpdate = function () {
            var myMask_info = "上传中...";
            var myMask = new Ext.LoadMask(Ext.getBody(), { msg: myMask_info });
            myMask.show();
            me.photoPanelFile.getForm().submit({
                url: '/Framework/Javascript/Biz/Handler/PhotoHandler.ashx?method=ToUpload', // 后台处理的页面
                //waitMsg: '上传中...',
                success: function (fp, o) {
                    if (o.result.o) {
                        myMask.hide();
                        Ext.Msg.show({
                            title: "提示",
                            msg: "上传图片成功,保存数据后生效",
                            minWidth: 200,
                            modal: true,
                            icon: Ext.Msg.INFO,
                            buttons: Ext.Msg.OK,
                            fn: function () {
                                me.photoWindow.hide();
                            }
                        });
                        me.textField.jitSetValue(o.result.msg);
                        document.getElementById("__img" + args.id).src = '/File/MobileDevices/Photo/' + args.pClientID + '/' + args.pClientUserID + '/'  + o.result.msg;
                        me.uploadValue = o.result.msg;
                        me.textFieldUpdate.jitSetValue("");
                    }
                    else {
                        myMask.hide();
                        Ext.Msg.show({
                            title: "提示",
                            msg: o.result.msg,
                            minWidth: 200,
                            modal: true,
                            icon: Ext.Msg.INFO,
                            buttons: Ext.Msg.OK
                        });
                        me.textFieldUpdate.jitSetValue("");
                    }
                },
                failure: function (fp, o) {
                    myMask.hide();
                    Ext.Msg.show({
                        title: "提示",
                        msg: "上传失败",
                        minWidth: 200,
                        modal: true,
                        icon: Ext.Msg.INFO,
                        buttons: Ext.Msg.OK
                    });
                    me.textFieldUpdate.jitSetValue("");
                }
            });
        }
        //撤销按钮，返回原本数据
        me.buttonFieldBack = Ext.create('Jit.button.Button', {
            text: '撤&nbsp;&nbsp;销'
            , margin: '5 10 5 10'
            , height: 25
            , width: 80
            , border: 0
            , jitIsDefaultCSS: true
            , jitIsHighlight: false
            , handler: function () {
                if (me.defaultValue != null) {
                    var value = eval(me.defaultValue);
                    if (value != null && value.length > 0) {
                        me.textField.jitSetValue(value[0].FileName);
                        me.uploadValue = null,
                        document.getElementById("__img" + args.id).src = '/File/MobileDevices/Photo/' + args.pClientID + '/' + value[0].ClientUserID + '/' + value[0].FileName;
                    }
                }
            }
        });
        //上传图片的panel
        me.photoPanelFile = Ext.create('Ext.form.Panel', {
            width: 490,
            height: 32,
            margin: '5 0 0 0',
            columnWidth: 1,
            items: [me.textFieldUpdate, me.buttonFieldUpdate, me.buttonFieldBack],
            layout: 'column',
            border: 0
        });
        //上传图片的window
        me.photoWindow = Ext.create('Jit.window.Window', {
            id: '__photoWinID' + args.id,
            title: args.photoTitle,
            items: [me.photoPanelImg, me.photoPanelFile],
            width: 500,
            height: 360,
            jitSize: "custom",
            constrain: true,
            modal: true
        });


        //panel的默认属性
        var panelConfig = {
            items: [me.textField, me.button],
            margin: '0 10 10 10',
            width: 300,
            height: 22,
            layout: 'column',
            border: 0
        }
        args = Ext.applyIf(args, panelConfig);

        //创建panel对象
        var instance = Ext.create('Ext.panel.Panel', args);

        /*
        查询数据  数据格式[{"Date":"2013-04-26 14:18:36","Direction":1,"FileName":"1366957116254.jpg"}]
        */
        instance.jitGetValue = function () {
            var pValue = me.textField.jitGetValue();
            if (me.uploadValue != null && me.uploadValue != "") {
                var updateValue = [{
                    "Date": Ext.Date.format(new Date(), 'Y-m-d H:i:s'),
                    "Direction": 1,
                    "ClientUserID":args.pClientUserID,
                    "FileName": me.uploadValue
                }];
                return Ext.JSON.encode(updateValue);
            } else {
                if (me.defaultValue != null && me.defaultValue != "") {
                    return me.defaultValue;
                } else {
                    return "";
                }
            }
        }

        /*
        设置数据  老数据格式[{"Date":"2013-04-26 14:18:36","Direction":1,"FileName":"1366957116254.jpg"}]
        */
        instance.jitSetValue = function (pValue) {
            me.defaultValue = pValue;
            me.uploadValue = null;
            if (pValue != null && pValue != "") {
                if (me.defaultValue != null) {
                    var value = eval(me.defaultValue);
                    if (value != null && value.length > 0) {
                        me.textField.jitSetValue(value[0].FileName);
                    }
                } else {
                    me.textField.jitSetValue("");
                }
            } else {
                me.textField.jitSetValue("");
            }
        }
        return instance;
    }
});