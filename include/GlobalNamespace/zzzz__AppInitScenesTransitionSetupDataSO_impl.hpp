#pragma once
#include "GlobalNamespace/zzzz__SceneSetupData_impl.hpp"
#include "GlobalNamespace/zzzz__SingleFixedSceneScenesTransitionSetupDataSO_impl.hpp"
#include "System/zzzz__Enum_impl.hpp"
#include "GlobalNamespace/zzzz__AppInitScenesTransitionSetupDataSO_def.hpp"
#include "GlobalNamespace/zzzz__MockPlayersModel_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType::GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType  GlobalNamespace::GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType::DoNotOverride{0};
constexpr GlobalNamespace::GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType  GlobalNamespace::GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType::AppStart{1};
constexpr GlobalNamespace::GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType  GlobalNamespace::GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType::AppRestart{2};
constexpr GlobalNamespace::GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType  GlobalNamespace::GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType::MultiSceneEditor{3};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData.get_appInitOverrideStartType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType (GlobalNamespace::GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData::*)()>(&GlobalNamespace::GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData::get_appInitOverrideStartType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21cfc9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData>::get(),
                            "get_appInitOverrideStartType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData.set_appInitOverrideStartType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData::*)(GlobalNamespace::GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType)>(&GlobalNamespace::GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData::set_appInitOverrideStartType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21cfca4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData>::get(),
                            "set_appInitOverrideStartType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData.get_overrideMockPlayersModel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::MockPlayersModel (GlobalNamespace::GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData::*)()>(&GlobalNamespace::GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData::get_overrideMockPlayersModel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21cfcac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData>::get(),
                            "get_overrideMockPlayersModel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData.set_overrideMockPlayersModel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData::*)(GlobalNamespace::MockPlayersModel)>(&GlobalNamespace::GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData::set_overrideMockPlayersModel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21cfcb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData>::get(),
                            "set_overrideMockPlayersModel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::MockPlayersModel>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData::*)(GlobalNamespace::GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType, GlobalNamespace::MockPlayersModel)>(&GlobalNamespace::GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x21cfb70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::MockPlayersModel>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData::__set__appInitOverrideStartType_k__BackingField(GlobalNamespace::GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType>(value));
}
constexpr GlobalNamespace::GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType GlobalNamespace::GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData::__get__appInitOverrideStartType_k__BackingField() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData::__set__overrideMockPlayersModel_k__BackingField(GlobalNamespace::MockPlayersModel value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MockPlayersModel, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MockPlayersModel>(value));
}
constexpr GlobalNamespace::MockPlayersModel GlobalNamespace::GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData::__get__overrideMockPlayersModel_k__BackingField() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MockPlayersModel, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType GlobalNamespace::GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData::get_appInitOverrideStartType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData>::get(),
                            "get_appInitOverrideStartType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData::set_appInitOverrideStartType(GlobalNamespace::GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData>::get(),
                            "set_appInitOverrideStartType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 GlobalNamespace::MockPlayersModel GlobalNamespace::GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData::get_overrideMockPlayersModel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData>::get(),
                            "get_overrideMockPlayersModel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::MockPlayersModel, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData::set_overrideMockPlayersModel(GlobalNamespace::MockPlayersModel value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData>::get(),
                            "set_overrideMockPlayersModel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::MockPlayersModel>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "appInitOverrideStartType", ty: "GlobalNamespace::GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType", modifiers: "", def_value: None }, CppParam { name: "overrideMockPlayersModel", ty: "GlobalNamespace::MockPlayersModel", modifiers: "", def_value: None }]
 GlobalNamespace::GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData::GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData(GlobalNamespace::GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType appInitOverrideStartType, GlobalNamespace::MockPlayersModel overrideMockPlayersModel)  : GlobalNamespace::SceneSetupData(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData>(appInitOverrideStartType, overrideMockPlayersModel))) {}
 void GlobalNamespace::GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData::_ctor(GlobalNamespace::GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType appInitOverrideStartType, GlobalNamespace::MockPlayersModel overrideMockPlayersModel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::MockPlayersModel>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, appInitOverrideStartType, overrideMockPlayersModel);
}
//  Writing Method size for method: GlobalNamespace::AppInitScenesTransitionSetupDataSO.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AppInitScenesTransitionSetupDataSO::*)()>(&GlobalNamespace::AppInitScenesTransitionSetupDataSO::Init)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x21cfafc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AppInitScenesTransitionSetupDataSO>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::AppInitScenesTransitionSetupDataSO.InitAsAppStart
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AppInitScenesTransitionSetupDataSO::*)()>(&GlobalNamespace::AppInitScenesTransitionSetupDataSO::InitAsAppStart)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x21cfba0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AppInitScenesTransitionSetupDataSO>::get(),
                            "InitAsAppStart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::AppInitScenesTransitionSetupDataSO.__Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AppInitScenesTransitionSetupDataSO::*)(GlobalNamespace::GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType, GlobalNamespace::MockPlayersModel)>(&GlobalNamespace::AppInitScenesTransitionSetupDataSO::__Init)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x21cfc14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AppInitScenesTransitionSetupDataSO>::get(),
                            "__Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::MockPlayersModel>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::AppInitScenesTransitionSetupDataSO._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AppInitScenesTransitionSetupDataSO::*)()>(&GlobalNamespace::AppInitScenesTransitionSetupDataSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21cfc94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AppInitScenesTransitionSetupDataSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void GlobalNamespace::AppInitScenesTransitionSetupDataSO::Init()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AppInitScenesTransitionSetupDataSO>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::AppInitScenesTransitionSetupDataSO::InitAsAppStart()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AppInitScenesTransitionSetupDataSO>::get(),
                            "InitAsAppStart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::AppInitScenesTransitionSetupDataSO::__Init(GlobalNamespace::GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType appInitOverrideStartType, GlobalNamespace::MockPlayersModel mockPlayersModel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AppInitScenesTransitionSetupDataSO>::get(),
                            "__Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::MockPlayersModel>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, appInitOverrideStartType, mockPlayersModel);
}
// Ctor Parameters []
 GlobalNamespace::AppInitScenesTransitionSetupDataSO::AppInitScenesTransitionSetupDataSO()  : GlobalNamespace::SingleFixedSceneScenesTransitionSetupDataSO(THROW_UNLESS(::il2cpp_utils::New<AppInitScenesTransitionSetupDataSO>())) {}
 void GlobalNamespace::AppInitScenesTransitionSetupDataSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AppInitScenesTransitionSetupDataSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
