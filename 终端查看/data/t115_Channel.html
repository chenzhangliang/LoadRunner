Ext.define("ContorlChannelEntity", {
    extend: "Ext.data.Model",
    fields: [{
        name: "ChannelID",
        type: "string"
    }, {
        name: "ChannelName",
        type: "string"
    }]
});

//Channel 渠道控件
Ext.define('Jit.biz.Channel', {
    alias: 'widget.jitbizchannel',
    constructor: function (args) {
        var instance = '';
        var argsConfig = { parentID: "", isTree: true, emptyText: '--请选择--', isDefaultLoad: false, __isLoad: false };
        args = Ext.applyIf(args, argsConfig);
        if (args.isTree) {
            defaultConfig = {
                url: '/Framework/Javascript/Biz/Handler/ChannelHandler.ashx?method=GetChannelByParentID&IsTree=success&ParentID=' + args.parentID   //树的数据从后台加载
                        , multiSelect: false                 //树是否为多选
                        , rootText: ''                  //树的根节点的文本
                        , rootID: ''                      //树的根节点的值
                        , isSelectLeafOnly: false           //只能选择树的叶子节点
            }
            args = Ext.applyIf(args, defaultConfig);
            instance = Ext.create('Jit.form.field.ComboTree', args);
            instance.jitSetValue = function (value) {
                if (value != null && value.toString() != "") {
                    var values = "'" + value.toString().replace(/,/g, "','") + "'";
                    Ext.Ajax.request({
                        url: "/Framework/Javascript/Biz/Handler/ChannelHandler.ashx?method=GetChannelByID&ChannelID="
					        + values,
                        method: 'get',
                        success: function (response) {
                            if (response.responseText != "") {
                                instance.jitSetValueText(value.toString().toLowerCase(), response.responseText);
                            }
                        }
                    });
                } else {
                    instance.jitSetValueText("", "");
                }
            }
        } else {
            var store = new Ext.data.Store({
                storeId: args.storeId,
                pageSize: args.pageSize || 15,
                model: "ContorlChannelEntity",
                proxy: {
                    type: 'ajax',
                    reader: {
                        type: 'json'
                    }
                },
                listeners: {
                    load: function (store) {
                        if (args.isDefault != null && args.isDefault) {
                            store.insert(0, {
                                "ChannelID": "",
                                "ChannelName": "--请选择--"
                            });
                        }
                    }
                }
            });
            store.proxy.url = "/Framework/Javascript/Biz/Handler/ChannelHandler.ashx?method=GetChannelByParentID&IsTree=false&ParentID=" + args.parentID;
           
            defaultConfig = {
                store: store
                        , valueField: 'ChannelID'
                        , displayField: 'ChannelName'
            };
            args = Ext.applyIf(args, defaultConfig);
            instance = Ext.create('Jit.form.field.ComboBox', args);
            instance.jitSetValue = function (value) {
                if (value != null && value != "") {
                    instance.__fnStoreLoad(value);
                } else {
                    instance.setValue("");
                }
            };
            instance.__fnStoreLoad = function (value) {
                //判断当前是否已经加载数据 __isLoad 为true则加载数据,为false则未加载数据
                if (args.__isLoad == null || !args.__isLoad) {
                    store.load({
                        callback: function () {
                            args.__isLoad = true; //加载数据完成
                            if (args.callback != null && args.callback != "") {
                                args.callback();
                            }
                            if (value != null && value != "") {
                                var values = value.toString().toLowerCase().split(',');
                                instance.setValue(values);
                            }
                        }
                    });
                } else {
                    if (value != null && value != "") {
                        var values = value.toString().toLowerCase().split(',');
                        instance.setValue(values);
                    }
                }
            }
            /*判断是否默认初始化加载Store*/
            if (args.isDefaultLoad != null && args.isDefaultLoad) {
                instance.__fnStoreLoad("");
            } else {
                instance.on("focus", function () { instance.__fnStoreLoad(""); }    /*添加点击事件*/);
            }
        }
        return instance;
    }
})

