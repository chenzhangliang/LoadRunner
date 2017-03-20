//省
Ext.define("ContorlProvinceEntity", {
    extend: "Ext.data.Model",
    fields: [{
        name: "Province",
        type: "string"
    }, {
        name: "ProvinceID",
        type: "string"
    }, {
        name: "ProvinceEn",
        type: "string"
    }]
});


//Province省业务控件
Ext.define('Jit.biz.Province', {
    alias: 'widget.jitbizprovince',
    constructor: function (args) {
        //isDefaultLoad 是否默认初始化加载store ,true 代表是,false代表否 //sync: true
        var argsConfig = { emptyText: '--请选择--', isDefaultLoad: false, __isLoad: false };
        args = Ext.applyIf(args, argsConfig);
        var store = new Ext.data.Store({
            storeId: args.storeId || "provinceStore",
            pageSize: args.pageSize || 15,
            model: "ContorlProvinceEntity",
            proxy: {
                type: 'ajax',
                reader: {
                    type: 'json'
                }
            },
            listeners: {
                load: function (store) {
                    if (args.isDefault != null && args.isDefault) {
                        if (Ext.getStore(args.storeId).data.items.length > 0 && Ext.getStore(args.storeId).data.items[0].CityID != 0) {
                            Ext.getStore(args.storeId).insert(0, {
                                "Province": "--请选择--",
                                "ProvinceID": "",
                                "ProvinceEn": "--please select--"
                            });
                        }
                    }
                }
            }
        });
        Ext.getStore(args.storeId).proxy.url = "/Framework/Javascript/Biz/Handler/AreaHandler.ashx?method=GetProvince";
        defaultConfig = {
            store: Ext.getStore(args.storeId)
            , valueField: 'ProvinceID'
            , displayField: 'Province'
            , listeners: {
                "select": function () {
                    if (args.CityID != null && args.CityID != "" && Ext.getCmp(args.CityID) != null) {
                        Ext.getCmp(args.CityID).jitGetCityValue(this.jitGetValue());
                    }
                }
            }
        };
        args = Ext.applyIf(args, defaultConfig);
        var instance = Ext.create('Jit.form.field.ComboBox', args);


        instance.__fnStoreLoad = function (value) {
            //判断当前是否已经加载数据 __isLoad 为true则加载数据,为false则未加载数据
            if (args.__isLoad == null || !args.__isLoad) {
                Ext.getStore(args.storeId).load({
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
            /*添加点击事件*/
            instance.on("focus", function () { instance.__fnStoreLoad(""); });
        }
        /*
        设置省的数据的方法
        无返回值
        */
        instance.jitSetValue = function (value) {
            if (value != null && value.toString() != "") {
               instance.__fnStoreLoad(value);
            } else {
                instance.setValue("");
            }
            if (args.CityID != null && args.CityID != "" && Ext.getCmp(args.CityID) != null) {
                Ext.getCmp(args.CityID).ProvinceID = value;
            }
        };
        return instance;
    }
});