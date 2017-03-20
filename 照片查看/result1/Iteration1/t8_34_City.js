//市
Ext.define("ContorlCityEntity", {
    extend: "Ext.data.Model",
    fields: [{
        name: "City",
        type: "string"
    }, {
        name: "CityID",
        type: "string"
    }, {
        name: "CityEn",
        type: "string"
    }]
});

//City市业务控件
Ext.define('Jit.biz.City', {
    alias: 'widget.jitbizcity',
    constructor: function (args) {
        //isDefaultLoad 是否默认初始化加载store ,true 代表是,false代表否 //sync: true
        var argsConfig = { emptyText: '--请选择--' };
        args = Ext.applyIf(args, argsConfig);
        store = new Ext.data.Store({
            storeId: args.storeId || "cityStore",
            pageSize: args.pageSize || 15,
            model: "ContorlCityEntity",
            proxy: {
                type: 'ajax',
                reader: {
                    type: 'json'
                }
            },
            actionMethods: { read: 'get' },
            listeners: {
                load: function () {
                    if (args.isDefault != null && args.isDefault) {
                        if (Ext.getStore(args.storeId).data.items.length > 0 && Ext.getStore(args.storeId).data.items[0].CityID != 0) {
                            Ext.getStore(args.storeId).insert(0, {
                                "City": "--请选择--",
                                "CityID": "",
                                "CityEn": "--please select--"
                            });
                        }
                    }
                }
            }
        });
        Ext.getStore(args.storeId).proxy.url = "/Framework/Javascript/Biz/Handler/AreaHandler.ashx?method=GetCityByProvinceID&ProvinceID=0";

        defaultConfig = {
            store: Ext.getStore(args.storeId)
            , valueField: 'CityID'
            , displayField: 'City'
            , listeners: {
                "select": function () {
                    if (args.DistrictID != null && args.DistrictID != "" && Ext.getCmp(args.DistrictID) != null) {
                        Ext.getCmp(args.DistrictID).jitGetDistrictValue(this.jitGetValue());
                    }
                }
            }
        };
        args = Ext.applyIf(args, defaultConfig);
        var instance = Ext.create('Jit.form.field.ComboBox', args);
        /*
        设置市的数据的方法
        无返回值
        */
        instance.jitSetValue = function (value) {
            if (value != null && value.toString() != "") {
                Ext.getStore(args.storeId).proxy.url = "/Framework/Javascript/Biz/Handler/AreaHandler.ashx?method=GetCityByCityID&CityID=" + value;
                Ext.getStore(args.storeId).load({
                    callback: function () {
                        if (value != null && value.toString() != "") {
                            var values = value.toString().toLowerCase().split(',');
                            instance.setValue(values);
                        }
                    }
                });

            } else {
                if (instance.ProvinceID != null && instance.ProvinceID != "") {
                    this.jitGetCityValue(instance.ProvinceID);
                } else {
                    instance.setValue("");
                }
            }
            if (args.DistrictID != null && args.DistrictID != "" && Ext.getCmp(args.DistrictID) != null) {
                Ext.getCmp(args.DistrictID).CityID = value;
            }
        }

        instance.jitGetCityValue = function (value) {
            Ext.getStore(args.storeId).proxy.url = "/Framework/Javascript/Biz/Handler/AreaHandler.ashx?method=GetCityByProvinceID&ProvinceID=" + value;
            Ext.getStore(args.storeId).load({
                callback: function () {
                    instance.setValue("");
                }
            });
            if (args.DistrictID != null && args.DistrictID != "" && Ext.getCmp(args.DistrictID) != null) {
                Ext.getCmp(args.DistrictID).jitGetDistrictValue(null);
            }
        }
        return instance;
    }
});