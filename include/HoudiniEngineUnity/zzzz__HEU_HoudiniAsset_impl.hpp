#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
namespace {
#include "HoudiniEngineUnity/zzzz__HEU_HoudiniAsset_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_SessionBase_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_RecookPreset_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_ReloadDataEvent_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_ObjectInstanceInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_ToolsInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_AssetSerializedMetaData_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_InstanceInputUIState_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_GeneratedOutput_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_VolumeCachePreset_def.hpp"
#include "HoudiniEngineUnity/zzzz__IEquivable_1_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_ObjectInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_InputNode_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_VolumeCache_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_InputPreset_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_PreAssetEvent_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_MaterialData_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_Transform_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_NodeInfo_def.hpp"
#include "UnityEngine/Events/zzzz__UnityAction_3_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_Handle_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_Curve_def.hpp"
#include "HoudiniEngineUnity/zzzz__CookedEvent_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_Curve_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_CookedDataEvent_def.hpp"
#include "HoudiniEngineUnity/zzzz__ReloadEvent_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_ObjectNode_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_AssetInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_AssetPreset_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_AttributesStore_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_GeoNode_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_BakedDataEvent_def.hpp"
#include "HoudiniEngineUnity/zzzz__BakedEvent_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_PartData_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_Parameters_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "HoudiniEngineUnity/zzzz__TransformData_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__HEU_AssetType::____HoudiniEngineUnity__HEU_HoudiniAsset__HEU_AssetType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__HEU_AssetType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__HEU_AssetType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__HEU_AssetType  ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__HEU_AssetType::TYPE_INVALID{0};
constexpr ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__HEU_AssetType  ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__HEU_AssetType::TYPE_HDA{1};
constexpr ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__HEU_AssetType  ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__HEU_AssetType::TYPE_CURVE{2};
constexpr ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__HEU_AssetType  ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__HEU_AssetType::TYPE_INPUT{3};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__AssetBuildAction::____HoudiniEngineUnity__HEU_HoudiniAsset__AssetBuildAction(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__AssetBuildAction::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__AssetBuildAction::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__AssetBuildAction  ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__AssetBuildAction::NONE{0};
constexpr ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__AssetBuildAction  ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__AssetBuildAction::RELOAD{1};
constexpr ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__AssetBuildAction  ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__AssetBuildAction::COOK{2};
constexpr ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__AssetBuildAction  ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__AssetBuildAction::INVALID{3};
constexpr ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__AssetBuildAction  ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__AssetBuildAction::STRIP_HEDATA{4};
constexpr ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__AssetBuildAction  ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__AssetBuildAction::DUPLICATE{5};
constexpr ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__AssetBuildAction  ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__AssetBuildAction::RESET_PARAMS{6};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__AssetCookStatus::____HoudiniEngineUnity__HEU_HoudiniAsset__AssetCookStatus(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__AssetCookStatus::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__AssetCookStatus::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__AssetCookStatus  ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__AssetCookStatus::NONE{0};
constexpr ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__AssetCookStatus  ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__AssetCookStatus::COOKING{1};
constexpr ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__AssetCookStatus  ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__AssetCookStatus::POSTCOOK{2};
constexpr ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__AssetCookStatus  ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__AssetCookStatus::LOADING{3};
constexpr ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__AssetCookStatus  ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__AssetCookStatus::POSTLOAD{4};
constexpr ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__AssetCookStatus  ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__AssetCookStatus::PRELOAD{5};
constexpr ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__AssetCookStatus  ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__AssetCookStatus::SELECT_SUBASSET{6};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__AssetCookResult::____HoudiniEngineUnity__HEU_HoudiniAsset__AssetCookResult(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__AssetCookResult::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__AssetCookResult::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__AssetCookResult  ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__AssetCookResult::NONE{0};
constexpr ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__AssetCookResult  ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__AssetCookResult::SUCCESS{1};
constexpr ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__AssetCookResult  ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__AssetCookResult::ERRORED{2};
//  Writing Method size for method: ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__UpdateUIDelegate._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__UpdateUIDelegate::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__UpdateUIDelegate::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x1ff9794;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__UpdateUIDelegate>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__UpdateUIDelegate.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__UpdateUIDelegate::*)()>(&::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__UpdateUIDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x1ff9850;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__UpdateUIDelegate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__UpdateUIDelegate>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__UpdateUIDelegate.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__UpdateUIDelegate::*)(::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__UpdateUIDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1ff9864;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__UpdateUIDelegate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__UpdateUIDelegate>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__UpdateUIDelegate.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__UpdateUIDelegate::*)(::System::IAsyncResult)>(&::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__UpdateUIDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1ff9884;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__UpdateUIDelegate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__UpdateUIDelegate>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__UpdateUIDelegate::____HoudiniEngineUnity__HEU_HoudiniAsset__UpdateUIDelegate(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____HoudiniEngineUnity__HEU_HoudiniAsset__UpdateUIDelegate>(object, method))) {}
 void ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__UpdateUIDelegate::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__UpdateUIDelegate>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 void ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__UpdateUIDelegate::Invoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__UpdateUIDelegate>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::IAsyncResult ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__UpdateUIDelegate::BeginInvoke(::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__UpdateUIDelegate>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, callback, object);
}
 void ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__UpdateUIDelegate::EndInvoke(::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__UpdateUIDelegate>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, result);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__AssetInstantiationMethod::____HoudiniEngineUnity__HEU_HoudiniAsset__AssetInstantiationMethod(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__AssetInstantiationMethod::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__AssetInstantiationMethod::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__AssetInstantiationMethod  ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__AssetInstantiationMethod::DEFAULT{0};
constexpr ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__AssetInstantiationMethod  ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__AssetInstantiationMethod::DUPLICATED{1};
constexpr ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__AssetInstantiationMethod  ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__AssetInstantiationMethod::UNDO{2};
//  Writing Method size for method: ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset____c__DisplayClass281_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset____c__DisplayClass281_0::*)()>(&::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset____c__DisplayClass281_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1ff9890;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset____c__DisplayClass281_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset____c__DisplayClass281_0._BakeToExistingPrefab_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset____c__DisplayClass281_0::*)(::UnityEngine::Transform)>(&::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset____c__DisplayClass281_0::_BakeToExistingPrefab_b__0)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x1ff9898;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset____c__DisplayClass281_0>::get(),
                            "<BakeToExistingPrefab>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset____c__DisplayClass281_0::__set_previousTransformValues(::System::Collections::Generic::List_1<::HoudiniEngineUnity::TransformData> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::TransformData>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::List_1<::HoudiniEngineUnity::TransformData>>(value));
}
constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::TransformData> ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset____c__DisplayClass281_0::__get_previousTransformValues() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::TransformData>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset____c__DisplayClass281_0::____HoudiniEngineUnity__HEU_HoudiniAsset____c__DisplayClass281_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____HoudiniEngineUnity__HEU_HoudiniAsset____c__DisplayClass281_0>())) {}
 void ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset____c__DisplayClass281_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset____c__DisplayClass281_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset____c__DisplayClass281_0::_BakeToExistingPrefab_b__0(::UnityEngine::Transform trans)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset____c__DisplayClass281_0>::get(),
                            "<BakeToExistingPrefab>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, trans);
}
//  Writing Method size for method: ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset____c::*)()>(&::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1ff9a08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset____c._ClearInvalidCurves_b__309_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset____c::*)(::HoudiniEngineUnity::HEU_Curve)>(&::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset____c::_ClearInvalidCurves_b__309_0)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x1ff9a10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset____c>::get(),
                            "<ClearInvalidCurves>b__309_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_Curve>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset____c._ClearInvalidLists_b__364_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset____c::*)(::HoudiniEngineUnity::HEU_ObjectNode)>(&::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset____c::_ClearInvalidLists_b__364_0)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x1ff9a6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset____c>::get(),
                            "<ClearInvalidLists>b__364_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_ObjectNode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset____c._ClearInvalidLists_b__364_1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset____c::*)(::HoudiniEngineUnity::HEU_Curve)>(&::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset____c::_ClearInvalidLists_b__364_1)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x1ff9ac8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset____c>::get(),
                            "<ClearInvalidLists>b__364_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_Curve>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset____c._ClearInvalidLists_b__364_2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset____c::*)(::HoudiniEngineUnity::HEU_MaterialData)>(&::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset____c::_ClearInvalidLists_b__364_2)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x1ff9b24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset____c>::get(),
                            "<ClearInvalidLists>b__364_2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_MaterialData>::get()}
                        )));
    return ___internal_method;
  }
};
 void ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset____c::__set___9(::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset____c value)  {
::cordl_internals::setStaticField<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset____c>::get>(std::forward<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset____c>(value));
}
 ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset____c ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset____c::__get___9()  {
return ::cordl_internals::getStaticField<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset____c>::get>();
}
 void ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset____c::__set___9__309_0(::System::Func_2<::HoudiniEngineUnity::HEU_Curve,bool> value)  {
::cordl_internals::setStaticField<::System::Func_2<::HoudiniEngineUnity::HEU_Curve,bool>, "<>9__309_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset____c>::get>(std::forward<::System::Func_2<::HoudiniEngineUnity::HEU_Curve,bool>>(value));
}
 ::System::Func_2<::HoudiniEngineUnity::HEU_Curve,bool> ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset____c::__get___9__309_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::HoudiniEngineUnity::HEU_Curve,bool>, "<>9__309_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset____c>::get>();
}
 void ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset____c::__set___9__364_0(::System::Func_2<::HoudiniEngineUnity::HEU_ObjectNode,bool> value)  {
::cordl_internals::setStaticField<::System::Func_2<::HoudiniEngineUnity::HEU_ObjectNode,bool>, "<>9__364_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset____c>::get>(std::forward<::System::Func_2<::HoudiniEngineUnity::HEU_ObjectNode,bool>>(value));
}
 ::System::Func_2<::HoudiniEngineUnity::HEU_ObjectNode,bool> ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset____c::__get___9__364_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::HoudiniEngineUnity::HEU_ObjectNode,bool>, "<>9__364_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset____c>::get>();
}
 void ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset____c::__set___9__364_1(::System::Func_2<::HoudiniEngineUnity::HEU_Curve,bool> value)  {
::cordl_internals::setStaticField<::System::Func_2<::HoudiniEngineUnity::HEU_Curve,bool>, "<>9__364_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset____c>::get>(std::forward<::System::Func_2<::HoudiniEngineUnity::HEU_Curve,bool>>(value));
}
 ::System::Func_2<::HoudiniEngineUnity::HEU_Curve,bool> ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset____c::__get___9__364_1()  {
return ::cordl_internals::getStaticField<::System::Func_2<::HoudiniEngineUnity::HEU_Curve,bool>, "<>9__364_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset____c>::get>();
}
 void ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset____c::__set___9__364_2(::System::Func_2<::HoudiniEngineUnity::HEU_MaterialData,bool> value)  {
::cordl_internals::setStaticField<::System::Func_2<::HoudiniEngineUnity::HEU_MaterialData,bool>, "<>9__364_2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset____c>::get>(std::forward<::System::Func_2<::HoudiniEngineUnity::HEU_MaterialData,bool>>(value));
}
 ::System::Func_2<::HoudiniEngineUnity::HEU_MaterialData,bool> ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset____c::__get___9__364_2()  {
return ::cordl_internals::getStaticField<::System::Func_2<::HoudiniEngineUnity::HEU_MaterialData,bool>, "<>9__364_2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset____c>::get>();
}
// Ctor Parameters []
 ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset____c::____HoudiniEngineUnity__HEU_HoudiniAsset____c()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____HoudiniEngineUnity__HEU_HoudiniAsset____c>())) {}
 void ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset____c::_ClearInvalidCurves_b__309_0(::HoudiniEngineUnity::HEU_Curve curve)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset____c>::get(),
                            "<ClearInvalidCurves>b__309_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_Curve>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, curve);
}
 bool ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset____c::_ClearInvalidLists_b__364_0(::HoudiniEngineUnity::HEU_ObjectNode node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset____c>::get(),
                            "<ClearInvalidLists>b__364_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_ObjectNode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, node);
}
 bool ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset____c::_ClearInvalidLists_b__364_1(::HoudiniEngineUnity::HEU_Curve curve)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset____c>::get(),
                            "<ClearInvalidLists>b__364_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_Curve>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, curve);
}
 bool ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset____c::_ClearInvalidLists_b__364_2(::HoudiniEngineUnity::HEU_MaterialData data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset____c>::get(),
                            "<ClearInvalidLists>b__364_2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_MaterialData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, data);
}
//  Writing Method size for method: ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset____c__DisplayClass365_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset____c__DisplayClass365_0::*)()>(&::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset____c__DisplayClass365_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1ff9b80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset____c__DisplayClass365_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset____c__DisplayClass365_0._CopyPropertiesTo_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset____c__DisplayClass365_0::*)(::HoudiniEngineUnity::HEU_Curve)>(&::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset____c__DisplayClass365_0::_CopyPropertiesTo_b__0)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x1ff9b88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset____c__DisplayClass365_0>::get(),
                            "<CopyPropertiesTo>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_Curve>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset____c__DisplayClass365_0::__set_newAsset(::HoudiniEngineUnity::HEU_HoudiniAsset value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::HEU_HoudiniAsset, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::HoudiniEngineUnity::HEU_HoudiniAsset>(value));
}
constexpr ::HoudiniEngineUnity::HEU_HoudiniAsset ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset____c__DisplayClass365_0::__get_newAsset() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HEU_HoudiniAsset, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset____c__DisplayClass365_0::__set_i(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset____c__DisplayClass365_0::__get_i() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset____c__DisplayClass365_0::__set___9__0(::System::Predicate_1<::HoudiniEngineUnity::HEU_Curve> value)  {
::cordl_internals::setInstanceField<::System::Predicate_1<::HoudiniEngineUnity::HEU_Curve>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Predicate_1<::HoudiniEngineUnity::HEU_Curve>>(value));
}
constexpr ::System::Predicate_1<::HoudiniEngineUnity::HEU_Curve> ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset____c__DisplayClass365_0::__get___9__0() const {
return ::cordl_internals::getInstanceField<::System::Predicate_1<::HoudiniEngineUnity::HEU_Curve>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset____c__DisplayClass365_0::____HoudiniEngineUnity__HEU_HoudiniAsset____c__DisplayClass365_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____HoudiniEngineUnity__HEU_HoudiniAsset____c__DisplayClass365_0>())) {}
 void ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset____c__DisplayClass365_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset____c__DisplayClass365_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset____c__DisplayClass365_0::_CopyPropertiesTo_b__0(::HoudiniEngineUnity::HEU_Curve curve)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset____c__DisplayClass365_0>::get(),
                            "<CopyPropertiesTo>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_Curve>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, curve);
}
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_AssetType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__HEU_AssetType (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_AssetType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fe8474;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "get_AssetType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_AssetInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HAPI_AssetInfo (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_AssetInfo)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1fe847c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "get_AssetInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_NodeInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HAPI_NodeInfo (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_NodeInfo)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1fe8498;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "get_NodeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_AssetName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_AssetName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fe84a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "get_AssetName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_AssetOpName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_AssetOpName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fe84b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "get_AssetOpName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_AssetHelp
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_AssetHelp)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fe84b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "get_AssetHelp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_TransformInputCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_TransformInputCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fe84c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "get_TransformInputCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_GeoInputCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_GeoInputCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fe84c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "get_GeoInputCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_AssetID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_AssetID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fe84d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "get_AssetID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_AssetPath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_AssetPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fe84d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "get_AssetPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_LoadAssetFromMemory
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_LoadAssetFromMemory)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fe84e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "get_LoadAssetFromMemory",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.set_LoadAssetFromMemory
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::set_LoadAssetFromMemory)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1fe84e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "set_LoadAssetFromMemory",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_AlwaysOverwriteOnLoad
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_AlwaysOverwriteOnLoad)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fe84f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "get_AlwaysOverwriteOnLoad",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.set_AlwaysOverwriteOnLoad
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::set_AlwaysOverwriteOnLoad)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1fe84fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "set_AlwaysOverwriteOnLoad",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_HandleCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_HandleCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fe8508;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "get_HandleCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_OwnerGameObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_OwnerGameObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fe5b7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "get_OwnerGameObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_RootGameObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_RootGameObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fe8510;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "get_RootGameObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_Parameters
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_Parameters (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_Parameters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fe8518;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "get_Parameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_SubassetNames
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_SubassetNames)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fe8520;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "get_SubassetNames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_SessionID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_SessionID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fe8528;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "get_SessionID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_WarnedPrefabNotSupported
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_WarnedPrefabNotSupported)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fe8530;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "get_WarnedPrefabNotSupported",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.set_WarnedPrefabNotSupported
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::set_WarnedPrefabNotSupported)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1fe8538;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "set_WarnedPrefabNotSupported",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_InstanceInputUIState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_InstanceInputUIState (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_InstanceInputUIState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fe8544;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "get_InstanceInputUIState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.set_InstanceInputUIState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_InstanceInputUIState)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::set_InstanceInputUIState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fe854c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "set_InstanceInputUIState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_InstanceInputUIState>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_GenerateUVs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_GenerateUVs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fe8554;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "get_GenerateUVs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.set_GenerateUVs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::set_GenerateUVs)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1fe855c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "set_GenerateUVs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_GenerateTangents
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_GenerateTangents)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fe8568;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "get_GenerateTangents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.set_GenerateTangents
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::set_GenerateTangents)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1fe8570;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "set_GenerateTangents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_GenerateNormals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_GenerateNormals)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fe857c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "get_GenerateNormals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.set_GenerateNormals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::set_GenerateNormals)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1fe8584;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "set_GenerateNormals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_PushTransformToHoudini
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_PushTransformToHoudini)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fe8590;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "get_PushTransformToHoudini",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.set_PushTransformToHoudini
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::set_PushTransformToHoudini)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1fe8598;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "set_PushTransformToHoudini",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_TransformChangeTriggersCooks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_TransformChangeTriggersCooks)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fe85a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "get_TransformChangeTriggersCooks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.set_TransformChangeTriggersCooks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::set_TransformChangeTriggersCooks)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1fe85ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "set_TransformChangeTriggersCooks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_CookingTriggersDownCooks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_CookingTriggersDownCooks)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fe85b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "get_CookingTriggersDownCooks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.set_CookingTriggersDownCooks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::set_CookingTriggersDownCooks)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1fe85c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "set_CookingTriggersDownCooks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_AutoCookOnParameterChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_AutoCookOnParameterChange)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fe85cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "get_AutoCookOnParameterChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.set_AutoCookOnParameterChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::set_AutoCookOnParameterChange)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1fe85d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "set_AutoCookOnParameterChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_IgnoreNonDisplayNodes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_IgnoreNonDisplayNodes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fe85e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "get_IgnoreNonDisplayNodes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.set_IgnoreNonDisplayNodes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::set_IgnoreNonDisplayNodes)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1fe85e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "set_IgnoreNonDisplayNodes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_GenerateMeshUsingPoints
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_GenerateMeshUsingPoints)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fe85f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "get_GenerateMeshUsingPoints",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.set_GenerateMeshUsingPoints
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::set_GenerateMeshUsingPoints)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1fe85fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "set_GenerateMeshUsingPoints",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_UseLODGroups
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_UseLODGroups)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fe8608;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "get_UseLODGroups",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.set_UseLODGroups
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::set_UseLODGroups)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1fe8610;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "set_UseLODGroups",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_SplitGeosByGroup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_SplitGeosByGroup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fe861c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "get_SplitGeosByGroup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.set_SplitGeosByGroup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::set_SplitGeosByGroup)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1fe8624;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "set_SplitGeosByGroup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_SessionSyncAutoCook
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_SessionSyncAutoCook)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fe8630;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "get_SessionSyncAutoCook",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.set_SessionSyncAutoCook
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::set_SessionSyncAutoCook)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1fe8638;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "set_SessionSyncAutoCook",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_BakeUpdateKeepPreviousTransformValues
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_BakeUpdateKeepPreviousTransformValues)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fe8644;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "get_BakeUpdateKeepPreviousTransformValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.set_BakeUpdateKeepPreviousTransformValues
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::set_BakeUpdateKeepPreviousTransformValues)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1fe864c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "set_BakeUpdateKeepPreviousTransformValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_PauseCooking
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_PauseCooking)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fe8658;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "get_PauseCooking",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.set_PauseCooking
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::set_PauseCooking)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1fe8660;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "set_PauseCooking",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_CurveEditorEnabled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_CurveEditorEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fe866c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "get_CurveEditorEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.set_CurveEditorEnabled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::set_CurveEditorEnabled)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1fe8674;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "set_CurveEditorEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_CurveDrawCollision
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Curve__CurveDrawCollision (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_CurveDrawCollision)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fe8680;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "get_CurveDrawCollision",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.set_CurveDrawCollision
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Curve__CurveDrawCollision)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::set_CurveDrawCollision)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fe8688;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "set_CurveDrawCollision",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Curve__CurveDrawCollision>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetCurveDrawColliders
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::Collider> (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::GetCurveDrawColliders)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fe8690;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "GetCurveDrawColliders",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetCurveDrawLayerMask
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::LayerMask (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::GetCurveDrawLayerMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fe8698;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "GetCurveDrawLayerMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.SetCurveDrawLayerMask
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::UnityEngine::LayerMask)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::SetCurveDrawLayerMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fe86a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "SetCurveDrawLayerMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LayerMask>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_CurveDisableScaleRotation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_CurveDisableScaleRotation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fe86a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "get_CurveDisableScaleRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.set_CurveDisableScaleRotation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::set_CurveDisableScaleRotation)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1fe86b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "set_CurveDisableScaleRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_CurveCookOnDrag
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_CurveCookOnDrag)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fe86bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "get_CurveCookOnDrag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.set_CurveCookOnDrag
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::set_CurveCookOnDrag)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1fe86c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "set_CurveCookOnDrag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_CurveFrameSelectedNodes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_CurveFrameSelectedNodes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fe86d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "get_CurveFrameSelectedNodes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.set_CurveFrameSelectedNodes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::set_CurveFrameSelectedNodes)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1fe86d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "set_CurveFrameSelectedNodes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_CurveFrameSelectedNodeDistance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_CurveFrameSelectedNodeDistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fe86e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "get_CurveFrameSelectedNodeDistance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.set_CurveFrameSelectedNodeDistance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(float_t)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::set_CurveFrameSelectedNodeDistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fe86ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "set_CurveFrameSelectedNodeDistance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_HandlesEnabled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_HandlesEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fe86f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "get_HandlesEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.set_HandlesEnabled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::set_HandlesEnabled)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1fe86fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "set_HandlesEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_EditableNodesToolsEnabled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_EditableNodesToolsEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fe8708;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "get_EditableNodesToolsEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.set_EditableNodesToolsEnabled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::set_EditableNodesToolsEnabled)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1fe8710;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "set_EditableNodesToolsEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_ToolsInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_ToolsInfo (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_ToolsInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fe871c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "get_ToolsInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_SerializedMetaData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_AssetSerializedMetaData (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_SerializedMetaData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fe8724;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "get_SerializedMetaData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.get_PendingAutoCookOnMouseRelease
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::get_PendingAutoCookOnMouseRelease)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fe872c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "get_PendingAutoCookOnMouseRelease",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.set_PendingAutoCookOnMouseRelease
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::set_PendingAutoCookOnMouseRelease)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1fe8734;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "set_PendingAutoCookOnMouseRelease",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.SetupAsset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__HEU_AssetType, ::StringW, ::UnityEngine::GameObject, ::HoudiniEngineUnity::HEU_SessionBase)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::SetupAsset)> {
  constexpr static std::size_t size = 0x37c;
  constexpr static std::size_t addrs = 0x1fe8740;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "SetupAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__HEU_AssetType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.CleanUpAndDisable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::CleanUpAndDisable)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x1fe8abc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "CleanUpAndDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.IsAssetSavedInScene
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::IsAssetSavedInScene)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x1fe8dbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "IsAssetSavedInScene",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1fe8dd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.InvalidateAsset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::InvalidateAsset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1fe8b18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "InvalidateAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.OnEnable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::OnEnable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1fe8dd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::OnDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1fe8ddc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.AssetUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::AssetUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1fe8de0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "AssetUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.PostAssetUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::PostAssetUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1fe8de4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "PostAssetUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.RequestResetParameters
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::RequestResetParameters)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1fe8de8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "RequestResetParameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.RequestReload
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::RequestReload)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1fe8dec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "RequestReload",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.RequestCook
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool, bool, bool, bool)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::RequestCook)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1fd85e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "RequestCook",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.RequestBakeInPlace
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::RequestBakeInPlace)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x1fe8df0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "RequestBakeInPlace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.ClearBuildRequest
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::ClearBuildRequest)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1fe8e08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "ClearBuildRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.HasValidAssetPath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::HasValidAssetPath)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1fe8e18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "HasValidAssetPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.ProcessRebuild
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool, int32_t)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::ProcessRebuild)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x1fe8e38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "ProcessRebuild",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.InvokeReloadEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool, ::System::Collections::Generic::List_1<::UnityEngine::GameObject>)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::InvokeReloadEvent)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x1fe9bb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "InvokeReloadEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::GameObject>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.StartRebuild
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool, int32_t)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::StartRebuild)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x1fe9338;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "StartRebuild",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.FinishRebuild
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::FinishRebuild)> {
  constexpr static std::size_t size = 0x588;
  constexpr static std::size_t addrs = 0x1fe94d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "FinishRebuild",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.RecookAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool, bool, bool, bool, bool, bool)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::RecookAsync)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x1febb4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "RecookAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.RecookBlocking
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool, bool, bool, bool, bool, bool)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::RecookBlocking)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1fec318;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "RecookBlocking",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.DoPostCookWork
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_SessionBase)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::DoPostCookWork)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x1fec6c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "DoPostCookWork",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.IsValidForInteraction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(ByRef<::StringW>)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::IsValidForInteraction)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1fec844;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "IsValidForInteraction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.OnValidate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::OnValidate)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1fec8b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "OnValidate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.ExecutePostCookCallbacks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::ExecutePostCookCallbacks)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x1fec26c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "ExecutePostCookCallbacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.InvokePostCookEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool, ::System::Collections::Generic::List_1<::UnityEngine::GameObject>)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::InvokePostCookEvent)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x1fec8e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "InvokePostCookEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::GameObject>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.InternalStartRecook
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool, bool, bool, bool, bool, bool)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::InternalStartRecook)> {
  constexpr static std::size_t size = 0x61c;
  constexpr static std::size_t addrs = 0x1febc50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "InternalStartRecook",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.InternalSetAssetID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(int32_t)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::InternalSetAssetID)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x1fe9d68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "InternalSetAssetID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.SetCookStatus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__AssetCookStatus, ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__AssetCookResult)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::SetCookStatus)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1fe9a58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "SetCookStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__AssetCookStatus>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__AssetCookResult>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetCookStatus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__AssetCookStatus (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::GetCookStatus)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fed654;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "GetCookStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.ProcessPoskCook
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::ProcessPoskCook)> {
  constexpr static std::size_t size = 0x38c;
  constexpr static std::size_t addrs = 0x1fed65c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "ProcessPoskCook",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.StartHoudiniCookNode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_SessionBase)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::StartHoudiniCookNode)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x1fed5e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "StartHoudiniCookNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.ProcessHoudiniCookStatus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::ProcessHoudiniCookStatus)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x1fec428;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "ProcessHoudiniCookStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.DoesAssetRequireRecook
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::DoesAssetRequireRecook)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0x1fee958;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "DoesAssetRequireRecook",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.DeleteSessionDataOnly
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::DeleteSessionDataOnly)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x1feed48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "DeleteSessionDataOnly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.DeleteAllGeneratedData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::DeleteAllGeneratedData)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x1fe8b24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "DeleteAllGeneratedData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.CleanUpInputNodes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::CleanUpInputNodes)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x1fef094;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "CleanUpInputNodes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.DeleteAssetCacheData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::DeleteAssetCacheData)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x1fef454;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "DeleteAssetCacheData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GenerateParameters
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_SessionBase)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::GenerateParameters)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x1feacdc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "GenerateParameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.DownloadParameterPresetFromHoudini
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_SessionBase)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::DownloadParameterPresetFromHoudini)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x1fed9e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "DownloadParameterPresetFromHoudini",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.UploadParameterPresetToHoudini
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_SessionBase)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::UploadParameterPresetToHoudini)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x1fecb8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "UploadParameterPresetToHoudini",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.UpdateParameterInputsToHoudini
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_SessionBase, bool)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::UpdateParameterInputsToHoudini)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x1fecd68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "UpdateParameterInputsToHoudini",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.LoadAssetFileWithSubasset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_SessionBase, bool, int32_t)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::LoadAssetFileWithSubasset)> {
  constexpr static std::size_t size = 0x5f4;
  constexpr static std::size_t addrs = 0x1fe9ef0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "LoadAssetFileWithSubasset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.CreateAndCookAsset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_SessionBase, int32_t, ByRef<int32_t>, bool)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::CreateAndCookAsset)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x1fea4e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "CreateAndCookAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.CreateAssetInputs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_SessionBase)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::CreateAssetInputs)> {
  constexpr static std::size_t size = 0x500;
  constexpr static std::size_t addrs = 0x1fea7dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "CreateAssetInputs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.UploadCurvesParameters
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_SessionBase, bool)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::UploadCurvesParameters)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x1fece0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "UploadCurvesParameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.UploadAttributeValues
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_SessionBase)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::UploadAttributeValues)> {
  constexpr static std::size_t size = 0x430;
  constexpr static std::size_t addrs = 0x1fecff4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "UploadAttributeValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.SyncDirtyAttributesToHoudini
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_SessionBase)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::SyncDirtyAttributesToHoudini)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x1fee308;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "SyncDirtyAttributesToHoudini",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.UploadInputNodes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_SessionBase, bool, bool)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::UploadInputNodes)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x1fed424;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "UploadInputNodes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.HasInputNodeTransformChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::HasInputNodeTransformChanged)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x1fef774;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "HasInputNodeTransformChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.NotifyInputNodesCookFinished
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::NotifyInputNodesCookFinished)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x1feba00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "NotifyInputNodesCookFinished",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.CreateObjects
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_SessionBase)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::CreateObjects)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x1feaef0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "CreateObjects",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.UpdateAllObjectNodes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_SessionBase)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::UpdateAllObjectNodes)> {
  constexpr static std::size_t size = 0x630;
  constexpr static std::size_t addrs = 0x1fedcd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "UpdateAllObjectNodes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.CreateObjectNode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_ObjectNode (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_SessionBase, ByRef<::HoudiniEngineUnity::HAPI_ObjectInfo>, ByRef<::HoudiniEngineUnity::HAPI_Transform>)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::CreateObjectNode)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x1fef8e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "CreateObjectNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::HoudiniEngineUnity::HAPI_ObjectInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::HoudiniEngineUnity::HAPI_Transform>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GenerateObjectsGeometry
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_SessionBase, bool)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::GenerateObjectsGeometry)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x1feb064;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "GenerateObjectsGeometry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GenerateAttributesStore
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_SessionBase)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::GenerateAttributesStore)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x1feb4c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "GenerateAttributesStore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GenerateInstances
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_SessionBase)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::GenerateInstances)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0x1feb1bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "GenerateInstances",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GenerateHandles
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_SessionBase)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::GenerateHandles)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x1feb618;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "GenerateHandles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.CleanUpHandles
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::CleanUpHandles)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1fef334;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "CleanUpHandles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetHandleByName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_Handle (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::StringW)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::GetHandleByName)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x1fef9c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "GetHandleByName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetHandles
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Handle> (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::GetHandles)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fefb50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "GetHandles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.NumHandles
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::NumHandles)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x1fefb58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "NumHandles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetObjectTransform
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HAPI_Transform (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_SessionBase, int32_t)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::GetObjectTransform)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x1fefba4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "GetObjectTransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetObjectWithID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_ObjectNode (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(int32_t)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::GetObjectWithID)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1fefde0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "GetObjectWithID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.InvokeBakedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool, ::System::Collections::Generic::List_1<::UnityEngine::GameObject>, bool)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::InvokeBakedEvent)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x1fefeb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "InvokeBakedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::GameObject>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.CloneAssetWithoutHDA
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(ByRef<::StringW>, bool, bool)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::CloneAssetWithoutHDA)> {
  constexpr static std::size_t size = 0x5d0;
  constexpr static std::size_t addrs = 0x1fefffc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "CloneAssetWithoutHDA",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.BakeToNewPrefab
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::StringW)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::BakeToNewPrefab)> {
  constexpr static std::size_t size = 0x3f8;
  constexpr static std::size_t addrs = 0x1ff0744;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "BakeToNewPrefab",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.BakeToNewStandalone
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::BakeToNewStandalone)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x1ff0b3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "BakeToNewStandalone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.BakeToExistingPrefab
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::UnityEngine::GameObject)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::BakeToExistingPrefab)> {
  constexpr static std::size_t size = 0x640;
  constexpr static std::size_t addrs = 0x1ff0d04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "BakeToExistingPrefab",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.BakeToExistingStandalone
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::UnityEngine::GameObject)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::BakeToExistingStandalone)> {
  constexpr static std::size_t size = 0xc14;
  constexpr static std::size_t addrs = 0x1ff1344;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "BakeToExistingStandalone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.NotifyUpstreamCooked
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_HoudiniAsset, bool, ::System::Collections::Generic::List_1<::UnityEngine::GameObject>)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::NotifyUpstreamCooked)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x1ff1f58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "NotifyUpstreamCooked",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::GameObject>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.ConnectToUpstream
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_HoudiniAsset)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::ConnectToUpstream)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1ff1f84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "ConnectToUpstream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.DisconnectFromUpstream
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_HoudiniAsset)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::DisconnectFromUpstream)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1ff2094;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "DisconnectFromUpstream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.AddDownstreamConnection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::UnityEngine::Events::UnityAction_3<::HoudiniEngineUnity::HEU_HoudiniAsset,bool,::System::Collections::Generic::List_1<::UnityEngine::GameObject>>)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::AddDownstreamConnection)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1ff2014;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "AddDownstreamConnection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction_3<::HoudiniEngineUnity::HEU_HoudiniAsset,bool,::System::Collections::Generic::List_1<::UnityEngine::GameObject>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.RemoveDownstreamConnection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::UnityEngine::Events::UnityAction_3<::HoudiniEngineUnity::HEU_HoudiniAsset,bool,::System::Collections::Generic::List_1<::UnityEngine::GameObject>>)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::RemoveDownstreamConnection)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1ff2124;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "RemoveDownstreamConnection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction_3<::HoudiniEngineUnity::HEU_HoudiniAsset,bool,::System::Collections::Generic::List_1<::UnityEngine::GameObject>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.ClearAllUpstreamConnections
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::ClearAllUpstreamConnections)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x1feee1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "ClearAllUpstreamConnections",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.UpdateInputsOnAssetRecreation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_SessionBase)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::UpdateInputsOnAssetRecreation)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x1feca38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "UpdateInputsOnAssetRecreation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.ReconnectInputsUpstreamNotifications
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::ReconnectInputsUpstreamNotifications)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x1ff217c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "ReconnectInputsUpstreamNotifications",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetHoudiniTransformAndApply
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_SessionBase)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::GetHoudiniTransformAndApply)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x1ff2310;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "GetHoudiniTransformAndApply",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.UploadUnityTransform
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_SessionBase, bool)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::UploadUnityTransform)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x1feb7a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "UploadUnityTransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetMaterialData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_MaterialData (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::UnityEngine::Material)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::GetMaterialData)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x1ff25d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "GetMaterialData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetMaterialCache
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData> (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::GetMaterialCache)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1ff2780;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "GetMaterialCache",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.ClearMaterialCache
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::ClearMaterialCache)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1feedac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "ClearMaterialCache",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.UpdateHoudiniMaterials
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_SessionBase)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::UpdateHoudiniMaterials)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x1feda80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "UpdateHoudiniMaterials",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.RemoveUnusedMaterials
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::RemoveUnusedMaterials)> {
  constexpr static std::size_t size = 0x470;
  constexpr static std::size_t addrs = 0x1fee4e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "RemoveUnusedMaterials",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.RemoveMaterial
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::UnityEngine::Material)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::RemoveMaterial)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x1ff2818;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "RemoveMaterial",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.IsAssetValidInHoudini
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_SessionBase)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::IsAssetValidInHoudini)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x1fe9d0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "IsAssetValidInHoudini",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.IsAssetValid
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::IsAssetValid)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x1ff295c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "IsAssetValid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.HasTransformChangedSinceLastUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::HasTransformChangedSinceLastUpdate)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x1ff2998;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "HasTransformChangedSinceLastUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetClonableParts
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_PartData>)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::GetClonableParts)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x1ff05cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "GetClonableParts",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_PartData>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetOutputGameObjects
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::System::Collections::Generic::List_1<::UnityEngine::GameObject>)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::GetOutputGameObjects)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x1fe9a64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "GetOutputGameObjects",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::GameObject>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetOutput
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeneratedOutput>)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::GetOutput)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x1ff2a2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "GetOutput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeneratedOutput>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetOutputGeoNodes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeoNode>)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::GetOutputGeoNodes)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x1ff2b80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "GetOutputGeoNodes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeoNode>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetInternalHDAPartWithGameObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_PartData (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::UnityEngine::GameObject)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::GetInternalHDAPartWithGameObject)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x1ff2cd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "GetInternalHDAPartWithGameObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetCurves
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Curve> (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::GetCurves)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1ff2e80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "GetCurves",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetCurve
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_Curve (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::StringW)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::GetCurve)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x1ff2e88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "GetCurve",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.ClearInvalidCurves
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::ClearInvalidCurves)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x1fef488;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "ClearInvalidCurves",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetEditableCurveCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::GetEditableCurveCount)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x1ff3054;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "GetEditableCurveCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.AddCurve
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_Curve)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::AddCurve)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x1fddac8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "AddCurve",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_Curve>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.RemoveCurve
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_Curve)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::RemoveCurve)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1fe4018;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "RemoveCurve",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_Curve>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.AddCurveDrawCollider
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::UnityEngine::Collider)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::AddCurveDrawCollider)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x1ff31ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "AddCurveDrawCollider",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Collider>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.RemoveCurveDrawCollider
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::UnityEngine::Collider)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::RemoveCurveDrawCollider)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1ff3280;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "RemoveCurveDrawCollider",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Collider>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.ClearCurveDrawColliders
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::ClearCurveDrawColliders)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x1ff32e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "ClearCurveDrawColliders",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetInputNodes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputNode> (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::GetInputNodes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1ff334c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "GetInputNodes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetInputNode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_InputNode (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::StringW)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::GetInputNode)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x1ff3354;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "GetInputNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetAssetInputNode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_InputNode (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::StringW)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::GetAssetInputNode)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x1fef58c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "GetAssetInputNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetInputNodeByIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_InputNode (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(int32_t)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::GetInputNodeByIndex)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x1ff34e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "GetInputNodeByIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetNonParameterInputNodes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputNode> (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::GetNonParameterInputNodes)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x1ff3568;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "GetNonParameterInputNodes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.AddInputNode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_InputNode)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::AddInputNode)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x1fe56bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "AddInputNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_InputNode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.RemoveInputNode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_InputNode)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::RemoveInputNode)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1fe3fc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "RemoveInputNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_InputNode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.InputNodeNotifyRemoved
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_InputNode)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::InputNodeNotifyRemoved)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1ff3778;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "InputNodeNotifyRemoved",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_InputNode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetVolumeCacheCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::GetVolumeCacheCount)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x1ff377c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "GetVolumeCacheCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetVolumeCaches
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCache> (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::GetVolumeCaches)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1ff37c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "GetVolumeCaches",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.AddVolumeCache
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_VolumeCache)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::AddVolumeCache)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x1ff37cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "AddVolumeCache",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_VolumeCache>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.RemoveVolumeCache
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_VolumeCache)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::RemoveVolumeCache)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x1fe80bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "RemoveVolumeCache",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_VolumeCache>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetAttributesStores
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_AttributesStore> (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::GetAttributesStores)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1ff38a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "GetAttributesStores",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.NumAttributeStores
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::NumAttributeStores)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x1ff38a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "NumAttributeStores",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetAttributeStore
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_AttributesStore (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::StringW, int32_t)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::GetAttributeStore)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x1ff38f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "GetAttributeStore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.AddAttributeStore
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_AttributesStore)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::AddAttributeStore)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x1ff3a84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "AddAttributeStore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AttributesStore>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.RemoveAttributeStore
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_AttributesStore)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::RemoveAttributeStore)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1fef71c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "RemoveAttributeStore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AttributesStore>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.ReorderAttributeStore
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(int32_t, int32_t)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::ReorderAttributeStore)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1ff3c20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "ReorderAttributeStore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetSceneHDAPartWithGameObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_PartData (*)(::UnityEngine::GameObject)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::GetSceneHDAPartWithGameObject)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x1ff3d30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "GetSceneHDAPartWithGameObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetSceneHDAAssetFromGameObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_HoudiniAsset (*)(::UnityEngine::GameObject)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::GetSceneHDAAssetFromGameObject)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x1ff3e74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "GetSceneHDAAssetFromGameObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.IsHoudiniAssetOutput
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::GameObject)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::IsHoudiniAssetOutput)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1ff3fb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "IsHoudiniAssetOutput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.IsHoudiniAssetRoot
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::GameObject)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::IsHoudiniAssetRoot)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x1ff4108;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "IsHoudiniAssetRoot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.PopulateObjectInstanceInfos
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ObjectInstanceInfo>)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::PopulateObjectInstanceInfos)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x1ff4194;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "PopulateObjectInstanceInfos",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ObjectInstanceInfo>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.AddToAssetDBCache
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::StringW, ::UnityEngine::Object, ::StringW, ByRef<::UnityEngine::Object>)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::AddToAssetDBCache)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1ff4324;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "AddToAssetDBCache",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Object>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.SetCurvesVisibilityInScene
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::SetCurvesVisibilityInScene)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x1ff4384;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "SetCurvesVisibilityInScene",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetAssetSession
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_SessionBase (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(bool)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::GetAssetSession)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x1fd85e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "GetAssetSession",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetValidAssetCacheFolderPath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::GetValidAssetCacheFolderPath)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1ff2788;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "GetValidAssetCacheFolderPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.HideAllGeometry
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::HideAllGeometry)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x1ff4568;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "HideAllGeometry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.CalculateVisibility
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::CalculateVisibility)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x1ff46b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "CalculateVisibility",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.DisableAllColliders
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::DisableAllColliders)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x1ff4800;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "DisableAllColliders",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.CalculateColliderState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::CalculateColliderState)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x1ff494c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "CalculateColliderState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.DuplicateAsset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::UnityEngine::GameObject)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::DuplicateAsset)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x1ff4a98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "DuplicateAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetObjectNodeByName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_ObjectNode (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::StringW)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::GetObjectNodeByName)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x1fd8fc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "GetObjectNodeByName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.ResetMaterialOverrides
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::ResetMaterialOverrides)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x1ff5988;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "ResetMaterialOverrides",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.ResetParametersToDefault
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::ResetParametersToDefault)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0x1ff5b04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "ResetParametersToDefault",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetAssetPreset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_AssetPreset (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::GetAssetPreset)> {
  constexpr static std::size_t size = 0x7dc;
  constexpr static std::size_t addrs = 0x1fdb768;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "GetAssetPreset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.LoadAssetPresetAndCook
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_AssetPreset)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::LoadAssetPresetAndCook)> {
  constexpr static std::size_t size = 0x508;
  constexpr static std::size_t addrs = 0x1fdc5bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "LoadAssetPresetAndCook",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AssetPreset>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.ApplyRecookPreset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::ApplyRecookPreset)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x1fee46c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "ApplyRecookPreset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.ApplyInputPresets
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_SessionBase, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputPreset>, bool)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::ApplyInputPresets)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x1ff5ef4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "ApplyInputPresets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputPreset>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetVolumeCachePreset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_VolumeCachePreset (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::StringW, ::StringW, int32_t)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::GetVolumeCachePreset)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x1ff6748;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "GetVolumeCachePreset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.RemoveVolumeCachePreset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_VolumeCachePreset)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::RemoveVolumeCachePreset)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x1ff6924;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "RemoveVolumeCachePreset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_VolumeCachePreset>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.ApplyVolumeCachePresets
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCachePreset>)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::ApplyVolumeCachePresets)> {
  constexpr static std::size_t size = 0x4c4;
  constexpr static std::size_t addrs = 0x1ff6284;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "ApplyVolumeCachePresets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCachePreset>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.SyncInternalParametersForUndoCompare
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::SyncInternalParametersForUndoCompare)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x1ff698c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "SyncInternalParametersForUndoCompare",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.UpdateSessionSync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::UpdateSessionSync)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x1ff6b90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "UpdateSessionSync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.UpdateTotalCookCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::UpdateTotalCookCount)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x1fea770;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "UpdateTotalCookCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.ResetAndCopyInstantiatedProperties
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_HoudiniAsset)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::ResetAndCopyInstantiatedProperties)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x1ff6c78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "ResetAndCopyInstantiatedProperties",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetInstantiationMethod
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__AssetInstantiationMethod (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::GetInstantiationMethod)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x1ff6f9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "GetInstantiationMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.GetInstantiatedObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_HoudiniAsset (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::GetInstantiatedObject)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x1ff7194;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "GetInstantiatedObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.ClearInvalidLists
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::ClearInvalidLists)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x1fe90c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "ClearInvalidLists",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.CopyPropertiesTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_HoudiniAsset)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::CopyPropertiesTo)> {
  constexpr static std::size_t size = 0xbec;
  constexpr static std::size_t addrs = 0x1ff4d9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "CopyPropertiesTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.SetSoftDeleted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::SetSoftDeleted)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x1ff7228;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "SetSoftDeleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset.IsEquivalentTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HoudiniAsset::*)(::HoudiniEngineUnity::HEU_HoudiniAsset)>(&::HoudiniEngineUnity::HEU_HoudiniAsset::IsEquivalentTo)> {
  constexpr static std::size_t size = 0x10c4;
  constexpr static std::size_t addrs = 0x1ff742c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "IsEquivalentTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniAsset._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniAsset::*)()>(&::HoudiniEngineUnity::HEU_HoudiniAsset::_ctor)> {
  constexpr static std::size_t size = 0x12a4;
  constexpr static std::size_t addrs = 0x1ff84f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_HoudiniAsset>
constexpr  ::HoudiniEngineUnity::HEU_HoudiniAsset::operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_HoudiniAsset>() const noexcept {
return ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_HoudiniAsset>(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_HoudiniAsset::__set__assetType(::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__HEU_AssetType value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__HEU_AssetType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__HEU_AssetType>(value));
}
constexpr ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__HEU_AssetType ::HoudiniEngineUnity::HEU_HoudiniAsset::__get__assetType() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__HEU_AssetType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_HoudiniAsset::__set__assetInfo(::HoudiniEngineUnity::HAPI_AssetInfo value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::HAPI_AssetInfo, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::HoudiniEngineUnity::HAPI_AssetInfo>(value));
}
constexpr ::HoudiniEngineUnity::HAPI_AssetInfo ::HoudiniEngineUnity::HEU_HoudiniAsset::__get__assetInfo() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HAPI_AssetInfo, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_HoudiniAsset::__set__nodeInfo(::HoudiniEngineUnity::HAPI_NodeInfo value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::HAPI_NodeInfo, 0x5c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::HoudiniEngineUnity::HAPI_NodeInfo>(value));
}
constexpr ::HoudiniEngineUnity::HAPI_NodeInfo ::HoudiniEngineUnity::HEU_HoudiniAsset::__get__nodeInfo() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HAPI_NodeInfo, 0x5c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_HoudiniAsset::__set__assetName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::HoudiniEngineUnity::HEU_HoudiniAsset::__get__assetName() const {
return ::cordl_internals::getInstanceField<::StringW, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_HoudiniAsset::__set__assetOpName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::HoudiniEngineUnity::HEU_HoudiniAsset::__get__assetOpName() const {
return ::cordl_internals::getInstanceField<::StringW, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_HoudiniAsset::__set__assetHelp(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::HoudiniEngineUnity::HEU_HoudiniAsset::__get__assetHelp() const {
return ::cordl_internals::getInstanceField<::StringW, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_HoudiniAsset::__set__assetID(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::HoudiniEngineUnity::HEU_HoudiniAsset::__get__assetID() const {
return ::cordl_internals::getInstanceField<int32_t, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_HoudiniAsset::__set__assetPath(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::HoudiniEngineUnity::HEU_HoudiniAsset::__get__assetPath() const {
return ::cordl_internals::getInstanceField<::StringW, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_HoudiniAsset::__set__loadAssetFromMemory(bool value)  {
::cordl_internals::setInstanceField<bool, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::HoudiniEngineUnity::HEU_HoudiniAsset::__get__loadAssetFromMemory() const {
return ::cordl_internals::getInstanceField<bool, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_HoudiniAsset::__set__alwaysOverwriteOnLoad(bool value)  {
::cordl_internals::setInstanceField<bool, 0xc9>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::HoudiniEngineUnity::HEU_HoudiniAsset::__get__alwaysOverwriteOnLoad() const {
return ::cordl_internals::getInstanceField<bool, 0xc9>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_HoudiniAsset::__set__assetFileObject(::UnityEngine::Object value)  {
::cordl_internals::setInstanceField<::UnityEngine::Object, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Object>(value));
}
constexpr ::UnityEngine::Object ::HoudiniEngineUnity::HEU_HoudiniAsset::__get__assetFileObject() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Object, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_HoudiniAsset::__set__objectNodes(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ObjectNode> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ObjectNode>, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ObjectNode>>(value));
}
constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ObjectNode> ::HoudiniEngineUnity::HEU_HoudiniAsset::__get__objectNodes() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ObjectNode>, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_HoudiniAsset::__set__rootGameObject(::UnityEngine::GameObject value)  {
::cordl_internals::setInstanceField<::UnityEngine::GameObject, 0xe0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::GameObject>(value));
}
constexpr ::UnityEngine::GameObject ::HoudiniEngineUnity::HEU_HoudiniAsset::__get__rootGameObject() const {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject, 0xe0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_HoudiniAsset::__set__materialCache(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData>, 0xe8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData>>(value));
}
constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData> ::HoudiniEngineUnity::HEU_HoudiniAsset::__get__materialCache() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData>, 0xe8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_HoudiniAsset::__set__parameters(::HoudiniEngineUnity::HEU_Parameters value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::HEU_Parameters, 0xf0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::HoudiniEngineUnity::HEU_Parameters>(value));
}
constexpr ::HoudiniEngineUnity::HEU_Parameters ::HoudiniEngineUnity::HEU_HoudiniAsset::__get__parameters() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HEU_Parameters, 0xf0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_HoudiniAsset::__set__lastSyncedTransformMatrix(::UnityEngine::Matrix4x4 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Matrix4x4, 0xf8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Matrix4x4>(value));
}
constexpr ::UnityEngine::Matrix4x4 ::HoudiniEngineUnity::HEU_HoudiniAsset::__get__lastSyncedTransformMatrix() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Matrix4x4, 0xf8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_HoudiniAsset::__set__assetCacheFolderPath(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x138>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::HoudiniEngineUnity::HEU_HoudiniAsset::__get__assetCacheFolderPath() const {
return ::cordl_internals::getInstanceField<::StringW, 0x138>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_HoudiniAsset::__set__subassetNames(::ArrayW<::StringW> value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW>, 0x140>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::StringW>>(value));
}
constexpr ::ArrayW<::StringW> ::HoudiniEngineUnity::HEU_HoudiniAsset::__get__subassetNames() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW>, 0x140>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_HoudiniAsset::__set__selectedSubassetIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x148>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::HoudiniEngineUnity::HEU_HoudiniAsset::__get__selectedSubassetIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x148>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_HoudiniAsset::__set__savedAssetPreset(::HoudiniEngineUnity::HEU_AssetPreset value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::HEU_AssetPreset, 0x150>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::HoudiniEngineUnity::HEU_AssetPreset>(value));
}
constexpr ::HoudiniEngineUnity::HEU_AssetPreset ::HoudiniEngineUnity::HEU_HoudiniAsset::__get__savedAssetPreset() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HEU_AssetPreset, 0x150>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_HoudiniAsset::__set__recookPreset(::HoudiniEngineUnity::HEU_RecookPreset value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::HEU_RecookPreset, 0x158>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::HoudiniEngineUnity::HEU_RecookPreset>(value));
}
constexpr ::HoudiniEngineUnity::HEU_RecookPreset ::HoudiniEngineUnity::HEU_HoudiniAsset::__get__recookPreset() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HEU_RecookPreset, 0x158>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_HoudiniAsset::__set__totalCookCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x160>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::HoudiniEngineUnity::HEU_HoudiniAsset::__get__totalCookCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x160>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_HoudiniAsset::__set__requestBuildAction(::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__AssetBuildAction value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__AssetBuildAction, 0x164>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__AssetBuildAction>(value));
}
constexpr ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__AssetBuildAction ::HoudiniEngineUnity::HEU_HoudiniAsset::__get__requestBuildAction() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__AssetBuildAction, 0x164>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_HoudiniAsset::__set__checkParameterChangeForCook(bool value)  {
::cordl_internals::setInstanceField<bool, 0x168>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::HoudiniEngineUnity::HEU_HoudiniAsset::__get__checkParameterChangeForCook() const {
return ::cordl_internals::getInstanceField<bool, 0x168>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_HoudiniAsset::__set__skipCookCheck(bool value)  {
::cordl_internals::setInstanceField<bool, 0x169>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::HoudiniEngineUnity::HEU_HoudiniAsset::__get__skipCookCheck() const {
return ::cordl_internals::getInstanceField<bool, 0x169>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_HoudiniAsset::__set__uploadParameters(bool value)  {
::cordl_internals::setInstanceField<bool, 0x16a>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::HoudiniEngineUnity::HEU_HoudiniAsset::__get__uploadParameters() const {
return ::cordl_internals::getInstanceField<bool, 0x16a>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_HoudiniAsset::__set__forceUploadInputs(bool value)  {
::cordl_internals::setInstanceField<bool, 0x16b>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::HoudiniEngineUnity::HEU_HoudiniAsset::__get__forceUploadInputs() const {
return ::cordl_internals::getInstanceField<bool, 0x16b>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_HoudiniAsset::__set__upstreamCookChanged(bool value)  {
::cordl_internals::setInstanceField<bool, 0x16c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::HoudiniEngineUnity::HEU_HoudiniAsset::__get__upstreamCookChanged() const {
return ::cordl_internals::getInstanceField<bool, 0x16c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_HoudiniAsset::__set__cookStatus(::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__AssetCookStatus value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__AssetCookStatus, 0x170>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__AssetCookStatus>(value));
}
constexpr ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__AssetCookStatus ::HoudiniEngineUnity::HEU_HoudiniAsset::__get__cookStatus() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__AssetCookStatus, 0x170>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_HoudiniAsset::__set__lastCookResult(::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__AssetCookResult value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__AssetCookResult, 0x174>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__AssetCookResult>(value));
}
constexpr ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__AssetCookResult ::HoudiniEngineUnity::HEU_HoudiniAsset::__get__lastCookResult() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__AssetCookResult, 0x174>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_HoudiniAsset::__set__isCookingAssetReloaded(bool value)  {
::cordl_internals::setInstanceField<bool, 0x178>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::HoudiniEngineUnity::HEU_HoudiniAsset::__get__isCookingAssetReloaded() const {
return ::cordl_internals::getInstanceField<bool, 0x178>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_HoudiniAsset::__set__bForceUpdate(bool value)  {
::cordl_internals::setInstanceField<bool, 0x179>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::HoudiniEngineUnity::HEU_HoudiniAsset::__get__bForceUpdate() const {
return ::cordl_internals::getInstanceField<bool, 0x179>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_HoudiniAsset::__set__sessionID(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x180>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int64_t>(value));
}
constexpr int64_t ::HoudiniEngineUnity::HEU_HoudiniAsset::__get__sessionID() const {
return ::cordl_internals::getInstanceField<int64_t, 0x180>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_HoudiniAsset::__set__WarnedPrefabNotSupported_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0x188>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::HoudiniEngineUnity::HEU_HoudiniAsset::__get__WarnedPrefabNotSupported_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x188>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_HoudiniAsset::__set__uiLocked(bool value)  {
::cordl_internals::setInstanceField<bool, 0x189>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::HoudiniEngineUnity::HEU_HoudiniAsset::__get__uiLocked() const {
return ::cordl_internals::getInstanceField<bool, 0x189>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_HoudiniAsset::__set__showHDAOptions(bool value)  {
::cordl_internals::setInstanceField<bool, 0x18a>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::HoudiniEngineUnity::HEU_HoudiniAsset::__get__showHDAOptions() const {
return ::cordl_internals::getInstanceField<bool, 0x18a>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_HoudiniAsset::__set__showGenerateSection(bool value)  {
::cordl_internals::setInstanceField<bool, 0x18b>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::HoudiniEngineUnity::HEU_HoudiniAsset::__get__showGenerateSection() const {
return ::cordl_internals::getInstanceField<bool, 0x18b>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_HoudiniAsset::__set__showBakeSection(bool value)  {
::cordl_internals::setInstanceField<bool, 0x18c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::HoudiniEngineUnity::HEU_HoudiniAsset::__get__showBakeSection() const {
return ::cordl_internals::getInstanceField<bool, 0x18c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_HoudiniAsset::__set__showEventsSection(bool value)  {
::cordl_internals::setInstanceField<bool, 0x18d>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::HoudiniEngineUnity::HEU_HoudiniAsset::__get__showEventsSection() const {
return ::cordl_internals::getInstanceField<bool, 0x18d>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_HoudiniAsset::__set__showCurvesSection(bool value)  {
::cordl_internals::setInstanceField<bool, 0x18e>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::HoudiniEngineUnity::HEU_HoudiniAsset::__get__showCurvesSection() const {
return ::cordl_internals::getInstanceField<bool, 0x18e>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_HoudiniAsset::__set__showInputNodesSection(bool value)  {
::cordl_internals::setInstanceField<bool, 0x18f>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::HoudiniEngineUnity::HEU_HoudiniAsset::__get__showInputNodesSection() const {
return ::cordl_internals::getInstanceField<bool, 0x18f>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_HoudiniAsset::__set__showToolsSection(bool value)  {
::cordl_internals::setInstanceField<bool, 0x190>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::HoudiniEngineUnity::HEU_HoudiniAsset::__get__showToolsSection() const {
return ::cordl_internals::getInstanceField<bool, 0x190>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_HoudiniAsset::__set__showTerrainSection(bool value)  {
::cordl_internals::setInstanceField<bool, 0x191>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::HoudiniEngineUnity::HEU_HoudiniAsset::__get__showTerrainSection() const {
return ::cordl_internals::getInstanceField<bool, 0x191>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_HoudiniAsset::__set__instanceInputUIState(::HoudiniEngineUnity::HEU_InstanceInputUIState value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::HEU_InstanceInputUIState, 0x198>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::HoudiniEngineUnity::HEU_InstanceInputUIState>(value));
}
constexpr ::HoudiniEngineUnity::HEU_InstanceInputUIState ::HoudiniEngineUnity::HEU_HoudiniAsset::__get__instanceInputUIState() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HEU_InstanceInputUIState, 0x198>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_HoudiniAsset::__set__reloadEvent(::HoudiniEngineUnity::ReloadEvent value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::ReloadEvent, 0x1a0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::HoudiniEngineUnity::ReloadEvent>(value));
}
constexpr ::HoudiniEngineUnity::ReloadEvent ::HoudiniEngineUnity::HEU_HoudiniAsset::__get__reloadEvent() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::ReloadEvent, 0x1a0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_HoudiniAsset::__set__cookedEvent(::HoudiniEngineUnity::CookedEvent value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::CookedEvent, 0x1a8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::HoudiniEngineUnity::CookedEvent>(value));
}
constexpr ::HoudiniEngineUnity::CookedEvent ::HoudiniEngineUnity::HEU_HoudiniAsset::__get__cookedEvent() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::CookedEvent, 0x1a8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_HoudiniAsset::__set__bakedEvent(::HoudiniEngineUnity::BakedEvent value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::BakedEvent, 0x1b0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::HoudiniEngineUnity::BakedEvent>(value));
}
constexpr ::HoudiniEngineUnity::BakedEvent ::HoudiniEngineUnity::HEU_HoudiniAsset::__get__bakedEvent() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::BakedEvent, 0x1b0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_HoudiniAsset::__set__reloadDataEvent(::HoudiniEngineUnity::HEU_ReloadDataEvent value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::HEU_ReloadDataEvent, 0x1b8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::HoudiniEngineUnity::HEU_ReloadDataEvent>(value));
}
constexpr ::HoudiniEngineUnity::HEU_ReloadDataEvent ::HoudiniEngineUnity::HEU_HoudiniAsset::__get__reloadDataEvent() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HEU_ReloadDataEvent, 0x1b8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_HoudiniAsset::__set__cookedDataEvent(::HoudiniEngineUnity::HEU_CookedDataEvent value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::HEU_CookedDataEvent, 0x1c0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::HoudiniEngineUnity::HEU_CookedDataEvent>(value));
}
constexpr ::HoudiniEngineUnity::HEU_CookedDataEvent ::HoudiniEngineUnity::HEU_HoudiniAsset::__get__cookedDataEvent() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HEU_CookedDataEvent, 0x1c0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_HoudiniAsset::__set__bakedDataEvent(::HoudiniEngineUnity::HEU_BakedDataEvent value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::HEU_BakedDataEvent, 0x1c8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::HoudiniEngineUnity::HEU_BakedDataEvent>(value));
}
constexpr ::HoudiniEngineUnity::HEU_BakedDataEvent ::HoudiniEngineUnity::HEU_HoudiniAsset::__get__bakedDataEvent() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HEU_BakedDataEvent, 0x1c8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_HoudiniAsset::__set__preAssetEvent(::HoudiniEngineUnity::HEU_PreAssetEvent value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::HEU_PreAssetEvent, 0x1d0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::HoudiniEngineUnity::HEU_PreAssetEvent>(value));
}
constexpr ::HoudiniEngineUnity::HEU_PreAssetEvent ::HoudiniEngineUnity::HEU_HoudiniAsset::__get__preAssetEvent() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HEU_PreAssetEvent, 0x1d0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_HoudiniAsset::__set__refreshUIDelegate(::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__UpdateUIDelegate value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__UpdateUIDelegate, 0x1d8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__UpdateUIDelegate>(value));
}
constexpr ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__UpdateUIDelegate ::HoudiniEngineUnity::HEU_HoudiniAsset::__get__refreshUIDelegate() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__UpdateUIDelegate, 0x1d8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_HoudiniAsset::__set__downstreamConnectionCookedEvent(::HoudiniEngineUnity::CookedEvent value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::CookedEvent, 0x1e0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::HoudiniEngineUnity::CookedEvent>(value));
}
constexpr ::HoudiniEngineUnity::CookedEvent ::HoudiniEngineUnity::HEU_HoudiniAsset::__get__downstreamConnectionCookedEvent() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::CookedEvent, 0x1e0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_HoudiniAsset::__set__generateUVs(bool value)  {
::cordl_internals::setInstanceField<bool, 0x1e8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::HoudiniEngineUnity::HEU_HoudiniAsset::__get__generateUVs() const {
return ::cordl_internals::getInstanceField<bool, 0x1e8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_HoudiniAsset::__set__generateTangents(bool value)  {
::cordl_internals::setInstanceField<bool, 0x1e9>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::HoudiniEngineUnity::HEU_HoudiniAsset::__get__generateTangents() const {
return ::cordl_internals::getInstanceField<bool, 0x1e9>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_HoudiniAsset::__set__generateNormals(bool value)  {
::cordl_internals::setInstanceField<bool, 0x1ea>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::HoudiniEngineUnity::HEU_HoudiniAsset::__get__generateNormals() const {
return ::cordl_internals::getInstanceField<bool, 0x1ea>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_HoudiniAsset::__set__pushTransformToHoudini(bool value)  {
::cordl_internals::setInstanceField<bool, 0x1eb>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::HoudiniEngineUnity::HEU_HoudiniAsset::__get__pushTransformToHoudini() const {
return ::cordl_internals::getInstanceField<bool, 0x1eb>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_HoudiniAsset::__set__transformChangeTriggersCooks(bool value)  {
::cordl_internals::setInstanceField<bool, 0x1ec>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::HoudiniEngineUnity::HEU_HoudiniAsset::__get__transformChangeTriggersCooks() const {
return ::cordl_internals::getInstanceField<bool, 0x1ec>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_HoudiniAsset::__set__cookingTriggersDownCooks(bool value)  {
::cordl_internals::setInstanceField<bool, 0x1ed>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::HoudiniEngineUnity::HEU_HoudiniAsset::__get__cookingTriggersDownCooks() const {
return ::cordl_internals::getInstanceField<bool, 0x1ed>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_HoudiniAsset::__set__autoCookOnParameterChange(bool value)  {
::cordl_internals::setInstanceField<bool, 0x1ee>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::HoudiniEngineUnity::HEU_HoudiniAsset::__get__autoCookOnParameterChange() const {
return ::cordl_internals::getInstanceField<bool, 0x1ee>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_HoudiniAsset::__set__ignoreNonDisplayNodes(bool value)  {
::cordl_internals::setInstanceField<bool, 0x1ef>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::HoudiniEngineUnity::HEU_HoudiniAsset::__get__ignoreNonDisplayNodes() const {
return ::cordl_internals::getInstanceField<bool, 0x1ef>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_HoudiniAsset::__set__generateMeshUsingPoints(bool value)  {
::cordl_internals::setInstanceField<bool, 0x1f0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::HoudiniEngineUnity::HEU_HoudiniAsset::__get__generateMeshUsingPoints() const {
return ::cordl_internals::getInstanceField<bool, 0x1f0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_HoudiniAsset::__set__useLODGroups(bool value)  {
::cordl_internals::setInstanceField<bool, 0x1f1>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::HoudiniEngineUnity::HEU_HoudiniAsset::__get__useLODGroups() const {
return ::cordl_internals::getInstanceField<bool, 0x1f1>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_HoudiniAsset::__set__splitGeosByGroup(bool value)  {
::cordl_internals::setInstanceField<bool, 0x1f2>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::HoudiniEngineUnity::HEU_HoudiniAsset::__get__splitGeosByGroup() const {
return ::cordl_internals::getInstanceField<bool, 0x1f2>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_HoudiniAsset::__set__sessionSyncAutoCook(bool value)  {
::cordl_internals::setInstanceField<bool, 0x1f3>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::HoudiniEngineUnity::HEU_HoudiniAsset::__get__sessionSyncAutoCook() const {
return ::cordl_internals::getInstanceField<bool, 0x1f3>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_HoudiniAsset::__set__bakeUpdateKeepPreviousTransformValues(bool value)  {
::cordl_internals::setInstanceField<bool, 0x1f4>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::HoudiniEngineUnity::HEU_HoudiniAsset::__get__bakeUpdateKeepPreviousTransformValues() const {
return ::cordl_internals::getInstanceField<bool, 0x1f4>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_HoudiniAsset::__set__pauseCooking(bool value)  {
::cordl_internals::setInstanceField<bool, 0x1f5>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::HoudiniEngineUnity::HEU_HoudiniAsset::__get__pauseCooking() const {
return ::cordl_internals::getInstanceField<bool, 0x1f5>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_HoudiniAsset::__set__curveEditorEnabled(bool value)  {
::cordl_internals::setInstanceField<bool, 0x1f6>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::HoudiniEngineUnity::HEU_HoudiniAsset::__get__curveEditorEnabled() const {
return ::cordl_internals::getInstanceField<bool, 0x1f6>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_HoudiniAsset::__set__curves(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Curve> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Curve>, 0x1f8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Curve>>(value));
}
constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Curve> ::HoudiniEngineUnity::HEU_HoudiniAsset::__get__curves() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Curve>, 0x1f8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_HoudiniAsset::__set__curveDrawCollision(::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Curve__CurveDrawCollision value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Curve__CurveDrawCollision, 0x200>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Curve__CurveDrawCollision>(value));
}
constexpr ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Curve__CurveDrawCollision ::HoudiniEngineUnity::HEU_HoudiniAsset::__get__curveDrawCollision() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Curve__CurveDrawCollision, 0x200>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_HoudiniAsset::__set__curveDrawColliders(::System::Collections::Generic::List_1<::UnityEngine::Collider> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::UnityEngine::Collider>, 0x208>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::List_1<::UnityEngine::Collider>>(value));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Collider> ::HoudiniEngineUnity::HEU_HoudiniAsset::__get__curveDrawColliders() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::Collider>, 0x208>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_HoudiniAsset::__set__curveDrawLayerMask(::UnityEngine::LayerMask value)  {
::cordl_internals::setInstanceField<::UnityEngine::LayerMask, 0x210>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::LayerMask>(value));
}
constexpr ::UnityEngine::LayerMask ::HoudiniEngineUnity::HEU_HoudiniAsset::__get__curveDrawLayerMask() const {
return ::cordl_internals::getInstanceField<::UnityEngine::LayerMask, 0x210>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_HoudiniAsset::__set__curveProjectMaxDistance(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x214>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::HoudiniEngineUnity::HEU_HoudiniAsset::__get__curveProjectMaxDistance() const {
return ::cordl_internals::getInstanceField<float_t, 0x214>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_HoudiniAsset::__set__curveProjectDirection(::UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x218>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3 ::HoudiniEngineUnity::HEU_HoudiniAsset::__get__curveProjectDirection() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x218>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_HoudiniAsset::__set__curveDisableScaleRotation(bool value)  {
::cordl_internals::setInstanceField<bool, 0x224>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::HoudiniEngineUnity::HEU_HoudiniAsset::__get__curveDisableScaleRotation() const {
return ::cordl_internals::getInstanceField<bool, 0x224>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_HoudiniAsset::__set__curveCookOnDrag(bool value)  {
::cordl_internals::setInstanceField<bool, 0x225>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::HoudiniEngineUnity::HEU_HoudiniAsset::__get__curveCookOnDrag() const {
return ::cordl_internals::getInstanceField<bool, 0x225>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_HoudiniAsset::__set__curveFrameSelectedNodes(bool value)  {
::cordl_internals::setInstanceField<bool, 0x226>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::HoudiniEngineUnity::HEU_HoudiniAsset::__get__curveFrameSelectedNodes() const {
return ::cordl_internals::getInstanceField<bool, 0x226>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_HoudiniAsset::__set__curveFrameSelectedNodeDistance(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x228>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::HoudiniEngineUnity::HEU_HoudiniAsset::__get__curveFrameSelectedNodeDistance() const {
return ::cordl_internals::getInstanceField<float_t, 0x228>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_HoudiniAsset::__set__inputNodes(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputNode> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputNode>, 0x230>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputNode>>(value));
}
constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputNode> ::HoudiniEngineUnity::HEU_HoudiniAsset::__get__inputNodes() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputNode>, 0x230>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_HoudiniAsset::__set__handles(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Handle> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Handle>, 0x238>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Handle>>(value));
}
constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Handle> ::HoudiniEngineUnity::HEU_HoudiniAsset::__get__handles() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Handle>, 0x238>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_HoudiniAsset::__set__handlesEnabled(bool value)  {
::cordl_internals::setInstanceField<bool, 0x240>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::HoudiniEngineUnity::HEU_HoudiniAsset::__get__handlesEnabled() const {
return ::cordl_internals::getInstanceField<bool, 0x240>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_HoudiniAsset::__set__volumeCaches(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCache> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCache>, 0x248>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCache>>(value));
}
constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCache> ::HoudiniEngineUnity::HEU_HoudiniAsset::__get__volumeCaches() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCache>, 0x248>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_HoudiniAsset::__set__attributeStores(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_AttributesStore> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_AttributesStore>, 0x250>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_AttributesStore>>(value));
}
constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_AttributesStore> ::HoudiniEngineUnity::HEU_HoudiniAsset::__get__attributeStores() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_AttributesStore>, 0x250>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_HoudiniAsset::__set__editableNodesToolsEnabled(bool value)  {
::cordl_internals::setInstanceField<bool, 0x258>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::HoudiniEngineUnity::HEU_HoudiniAsset::__get__editableNodesToolsEnabled() const {
return ::cordl_internals::getInstanceField<bool, 0x258>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_HoudiniAsset::__set__toolsInfo(::HoudiniEngineUnity::HEU_ToolsInfo value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::HEU_ToolsInfo, 0x260>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::HoudiniEngineUnity::HEU_ToolsInfo>(value));
}
constexpr ::HoudiniEngineUnity::HEU_ToolsInfo ::HoudiniEngineUnity::HEU_HoudiniAsset::__get__toolsInfo() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HEU_ToolsInfo, 0x260>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_HoudiniAsset::__set__serializedMetaData(::HoudiniEngineUnity::HEU_AssetSerializedMetaData value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::HEU_AssetSerializedMetaData, 0x268>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::HoudiniEngineUnity::HEU_AssetSerializedMetaData>(value));
}
constexpr ::HoudiniEngineUnity::HEU_AssetSerializedMetaData ::HoudiniEngineUnity::HEU_HoudiniAsset::__get__serializedMetaData() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HEU_AssetSerializedMetaData, 0x268>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_HoudiniAsset::__set__pendingAutoCookOnMouseRelease(bool value)  {
::cordl_internals::setInstanceField<bool, 0x270>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::HoudiniEngineUnity::HEU_HoudiniAsset::__get__pendingAutoCookOnMouseRelease() const {
return ::cordl_internals::getInstanceField<bool, 0x270>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__HEU_AssetType ::HoudiniEngineUnity::HEU_HoudiniAsset::get_AssetType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "get_AssetType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__HEU_AssetType, false>(const_cast<void*>(instance), ___internal_method);
}
 ::HoudiniEngineUnity::HAPI_AssetInfo ::HoudiniEngineUnity::HEU_HoudiniAsset::get_AssetInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "get_AssetInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HAPI_AssetInfo, false>(const_cast<void*>(instance), ___internal_method);
}
 ::HoudiniEngineUnity::HAPI_NodeInfo ::HoudiniEngineUnity::HEU_HoudiniAsset::get_NodeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "get_NodeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HAPI_NodeInfo, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW ::HoudiniEngineUnity::HEU_HoudiniAsset::get_AssetName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "get_AssetName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW ::HoudiniEngineUnity::HEU_HoudiniAsset::get_AssetOpName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "get_AssetOpName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW ::HoudiniEngineUnity::HEU_HoudiniAsset::get_AssetHelp()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "get_AssetHelp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::HoudiniEngineUnity::HEU_HoudiniAsset::get_TransformInputCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "get_TransformInputCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::HoudiniEngineUnity::HEU_HoudiniAsset::get_GeoInputCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "get_GeoInputCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::HoudiniEngineUnity::HEU_HoudiniAsset::get_AssetID()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "get_AssetID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW ::HoudiniEngineUnity::HEU_HoudiniAsset::get_AssetPath()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "get_AssetPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::HoudiniEngineUnity::HEU_HoudiniAsset::get_LoadAssetFromMemory()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "get_LoadAssetFromMemory",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::set_LoadAssetFromMemory(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "set_LoadAssetFromMemory",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::HoudiniEngineUnity::HEU_HoudiniAsset::get_AlwaysOverwriteOnLoad()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "get_AlwaysOverwriteOnLoad",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::set_AlwaysOverwriteOnLoad(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "set_AlwaysOverwriteOnLoad",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t ::HoudiniEngineUnity::HEU_HoudiniAsset::get_HandleCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "get_HandleCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::GameObject ::HoudiniEngineUnity::HEU_HoudiniAsset::get_OwnerGameObject()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "get_OwnerGameObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::GameObject, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::GameObject ::HoudiniEngineUnity::HEU_HoudiniAsset::get_RootGameObject()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "get_RootGameObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::GameObject, false>(const_cast<void*>(instance), ___internal_method);
}
 ::HoudiniEngineUnity::HEU_Parameters ::HoudiniEngineUnity::HEU_HoudiniAsset::get_Parameters()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "get_Parameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_Parameters, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<::StringW> ::HoudiniEngineUnity::HEU_HoudiniAsset::get_SubassetNames()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "get_SubassetNames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>, false>(const_cast<void*>(instance), ___internal_method);
}
 int64_t ::HoudiniEngineUnity::HEU_HoudiniAsset::get_SessionID()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "get_SessionID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::HoudiniEngineUnity::HEU_HoudiniAsset::get_WarnedPrefabNotSupported()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "get_WarnedPrefabNotSupported",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::set_WarnedPrefabNotSupported(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "set_WarnedPrefabNotSupported",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::HoudiniEngineUnity::HEU_InstanceInputUIState ::HoudiniEngineUnity::HEU_HoudiniAsset::get_InstanceInputUIState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "get_InstanceInputUIState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_InstanceInputUIState, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::set_InstanceInputUIState(::HoudiniEngineUnity::HEU_InstanceInputUIState value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "set_InstanceInputUIState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_InstanceInputUIState>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::HoudiniEngineUnity::HEU_HoudiniAsset::get_GenerateUVs()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "get_GenerateUVs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::set_GenerateUVs(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "set_GenerateUVs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::HoudiniEngineUnity::HEU_HoudiniAsset::get_GenerateTangents()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "get_GenerateTangents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::set_GenerateTangents(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "set_GenerateTangents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::HoudiniEngineUnity::HEU_HoudiniAsset::get_GenerateNormals()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "get_GenerateNormals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::set_GenerateNormals(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "set_GenerateNormals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::HoudiniEngineUnity::HEU_HoudiniAsset::get_PushTransformToHoudini()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "get_PushTransformToHoudini",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::set_PushTransformToHoudini(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "set_PushTransformToHoudini",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::HoudiniEngineUnity::HEU_HoudiniAsset::get_TransformChangeTriggersCooks()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "get_TransformChangeTriggersCooks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::set_TransformChangeTriggersCooks(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "set_TransformChangeTriggersCooks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::HoudiniEngineUnity::HEU_HoudiniAsset::get_CookingTriggersDownCooks()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "get_CookingTriggersDownCooks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::set_CookingTriggersDownCooks(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "set_CookingTriggersDownCooks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::HoudiniEngineUnity::HEU_HoudiniAsset::get_AutoCookOnParameterChange()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "get_AutoCookOnParameterChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::set_AutoCookOnParameterChange(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "set_AutoCookOnParameterChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::HoudiniEngineUnity::HEU_HoudiniAsset::get_IgnoreNonDisplayNodes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "get_IgnoreNonDisplayNodes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::set_IgnoreNonDisplayNodes(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "set_IgnoreNonDisplayNodes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::HoudiniEngineUnity::HEU_HoudiniAsset::get_GenerateMeshUsingPoints()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "get_GenerateMeshUsingPoints",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::set_GenerateMeshUsingPoints(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "set_GenerateMeshUsingPoints",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::HoudiniEngineUnity::HEU_HoudiniAsset::get_UseLODGroups()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "get_UseLODGroups",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::set_UseLODGroups(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "set_UseLODGroups",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::HoudiniEngineUnity::HEU_HoudiniAsset::get_SplitGeosByGroup()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "get_SplitGeosByGroup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::set_SplitGeosByGroup(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "set_SplitGeosByGroup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::HoudiniEngineUnity::HEU_HoudiniAsset::get_SessionSyncAutoCook()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "get_SessionSyncAutoCook",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::set_SessionSyncAutoCook(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "set_SessionSyncAutoCook",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::HoudiniEngineUnity::HEU_HoudiniAsset::get_BakeUpdateKeepPreviousTransformValues()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "get_BakeUpdateKeepPreviousTransformValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::set_BakeUpdateKeepPreviousTransformValues(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "set_BakeUpdateKeepPreviousTransformValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::HoudiniEngineUnity::HEU_HoudiniAsset::get_PauseCooking()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "get_PauseCooking",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::set_PauseCooking(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "set_PauseCooking",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::HoudiniEngineUnity::HEU_HoudiniAsset::get_CurveEditorEnabled()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "get_CurveEditorEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::set_CurveEditorEnabled(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "set_CurveEditorEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Curve__CurveDrawCollision ::HoudiniEngineUnity::HEU_HoudiniAsset::get_CurveDrawCollision()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "get_CurveDrawCollision",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Curve__CurveDrawCollision, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::set_CurveDrawCollision(::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Curve__CurveDrawCollision value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "set_CurveDrawCollision",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Curve__CurveDrawCollision>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::System::Collections::Generic::List_1<::UnityEngine::Collider> ::HoudiniEngineUnity::HEU_HoudiniAsset::GetCurveDrawColliders()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "GetCurveDrawColliders",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::Collider>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::LayerMask ::HoudiniEngineUnity::HEU_HoudiniAsset::GetCurveDrawLayerMask()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "GetCurveDrawLayerMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::LayerMask, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::SetCurveDrawLayerMask(::UnityEngine::LayerMask mask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "SetCurveDrawLayerMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LayerMask>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, mask);
}
 bool ::HoudiniEngineUnity::HEU_HoudiniAsset::get_CurveDisableScaleRotation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "get_CurveDisableScaleRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::set_CurveDisableScaleRotation(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "set_CurveDisableScaleRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::HoudiniEngineUnity::HEU_HoudiniAsset::get_CurveCookOnDrag()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "get_CurveCookOnDrag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::set_CurveCookOnDrag(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "set_CurveCookOnDrag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::HoudiniEngineUnity::HEU_HoudiniAsset::get_CurveFrameSelectedNodes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "get_CurveFrameSelectedNodes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::set_CurveFrameSelectedNodes(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "set_CurveFrameSelectedNodes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 float_t ::HoudiniEngineUnity::HEU_HoudiniAsset::get_CurveFrameSelectedNodeDistance()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "get_CurveFrameSelectedNodeDistance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::set_CurveFrameSelectedNodeDistance(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "set_CurveFrameSelectedNodeDistance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::HoudiniEngineUnity::HEU_HoudiniAsset::get_HandlesEnabled()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "get_HandlesEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::set_HandlesEnabled(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "set_HandlesEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::HoudiniEngineUnity::HEU_HoudiniAsset::get_EditableNodesToolsEnabled()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "get_EditableNodesToolsEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::set_EditableNodesToolsEnabled(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "set_EditableNodesToolsEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::HoudiniEngineUnity::HEU_ToolsInfo ::HoudiniEngineUnity::HEU_HoudiniAsset::get_ToolsInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "get_ToolsInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_ToolsInfo, false>(const_cast<void*>(instance), ___internal_method);
}
 ::HoudiniEngineUnity::HEU_AssetSerializedMetaData ::HoudiniEngineUnity::HEU_HoudiniAsset::get_SerializedMetaData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "get_SerializedMetaData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_AssetSerializedMetaData, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::HoudiniEngineUnity::HEU_HoudiniAsset::get_PendingAutoCookOnMouseRelease()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "get_PendingAutoCookOnMouseRelease",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::set_PendingAutoCookOnMouseRelease(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "set_PendingAutoCookOnMouseRelease",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::SetupAsset(::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__HEU_AssetType assetType, ::StringW filePath, ::UnityEngine::GameObject rootGameObject, ::HoudiniEngineUnity::HEU_SessionBase session)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "SetupAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__HEU_AssetType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, assetType, filePath, rootGameObject, session);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::CleanUpAndDisable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "CleanUpAndDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::HoudiniEngineUnity::HEU_HoudiniAsset::IsAssetSavedInScene()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "IsAssetSavedInScene",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::InvalidateAsset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "InvalidateAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::AssetUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "AssetUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::PostAssetUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "PostAssetUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::RequestResetParameters(bool bAsync)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "RequestResetParameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, bAsync);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::RequestReload(bool bAsync)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "RequestReload",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, bAsync);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::RequestCook(bool bCheckParametersChanged, bool bAsync, bool bSkipCookCheck, bool bUploadParameters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "RequestCook",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, bCheckParametersChanged, bAsync, bSkipCookCheck, bUploadParameters);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::RequestBakeInPlace()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "RequestBakeInPlace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::ClearBuildRequest()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "ClearBuildRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::HoudiniEngineUnity::HEU_HoudiniAsset::HasValidAssetPath()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "HasValidAssetPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::ProcessRebuild(bool bPromptForSubasset, int32_t desiredSubassetIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "ProcessRebuild",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, bPromptForSubasset, desiredSubassetIndex);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::InvokeReloadEvent(bool bCookSuccess, ::System::Collections::Generic::List_1<::UnityEngine::GameObject> outputObjects)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "InvokeReloadEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::GameObject>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, bCookSuccess, outputObjects);
}
 bool ::HoudiniEngineUnity::HEU_HoudiniAsset::StartRebuild(bool bPromptForSubasset, int32_t desiredSubassetIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "StartRebuild",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, bPromptForSubasset, desiredSubassetIndex);
}
 bool ::HoudiniEngineUnity::HEU_HoudiniAsset::FinishRebuild()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "FinishRebuild",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::HoudiniEngineUnity::HEU_HoudiniAsset::RecookAsync(bool bCheckParamsChanged, bool bSkipCookCheck, bool bUploadParameters, bool bUploadParameterPreset, bool bForceUploadInputs, bool bCookingSessionSync)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "RecookAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, bCheckParamsChanged, bSkipCookCheck, bUploadParameters, bUploadParameterPreset, bForceUploadInputs, bCookingSessionSync);
}
 bool ::HoudiniEngineUnity::HEU_HoudiniAsset::RecookBlocking(bool bCheckParamsChanged, bool bSkipCookCheck, bool bUploadParameters, bool bUploadParameterPreset, bool bForceUploadInputs, bool bCookingSessionSync)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "RecookBlocking",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, bCheckParamsChanged, bSkipCookCheck, bUploadParameters, bUploadParameterPreset, bForceUploadInputs, bCookingSessionSync);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::DoPostCookWork(::HoudiniEngineUnity::HEU_SessionBase session)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "DoPostCookWork",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, session);
}
 bool ::HoudiniEngineUnity::HEU_HoudiniAsset::IsValidForInteraction(ByRef<::StringW> errorMessage)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "IsValidForInteraction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, errorMessage);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "OnValidate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::ExecutePostCookCallbacks()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "ExecutePostCookCallbacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::InvokePostCookEvent(bool bCookSuccess, ::System::Collections::Generic::List_1<::UnityEngine::GameObject> outputObjects)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "InvokePostCookEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::GameObject>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, bCookSuccess, outputObjects);
}
 bool ::HoudiniEngineUnity::HEU_HoudiniAsset::InternalStartRecook(bool bCheckParamsChanged, bool bSkipCookCheck, bool bUploadParameters, bool bUploadParameterPreset, bool bForceUploadInputs, bool bCookingSessionSync)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "InternalStartRecook",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, bCheckParamsChanged, bSkipCookCheck, bUploadParameters, bUploadParameterPreset, bForceUploadInputs, bCookingSessionSync);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::InternalSetAssetID(int32_t assetID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "InternalSetAssetID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, assetID);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::SetCookStatus(::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__AssetCookStatus status, ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__AssetCookResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "SetCookStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__AssetCookStatus>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__AssetCookResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, status, result);
}
 ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__AssetCookStatus ::HoudiniEngineUnity::HEU_HoudiniAsset::GetCookStatus()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "GetCookStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__AssetCookStatus, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::ProcessPoskCook()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "ProcessPoskCook",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::HoudiniEngineUnity::HEU_HoudiniAsset::StartHoudiniCookNode(::HoudiniEngineUnity::HEU_SessionBase session)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "StartHoudiniCookNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, session);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::ProcessHoudiniCookStatus(bool bAsync)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "ProcessHoudiniCookStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, bAsync);
}
 bool ::HoudiniEngineUnity::HEU_HoudiniAsset::DoesAssetRequireRecook()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "DoesAssetRequireRecook",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::DeleteSessionDataOnly()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "DeleteSessionDataOnly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
/// @param bIsRebuild: bool (default: false)
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::DeleteAllGeneratedData(bool bIsRebuild)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "DeleteAllGeneratedData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, bIsRebuild);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::CleanUpInputNodes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "CleanUpInputNodes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::DeleteAssetCacheData(bool bRegisterUndo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "DeleteAssetCacheData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, bRegisterUndo);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::GenerateParameters(::HoudiniEngineUnity::HEU_SessionBase session)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "GenerateParameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, session);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::DownloadParameterPresetFromHoudini(::HoudiniEngineUnity::HEU_SessionBase session)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "DownloadParameterPresetFromHoudini",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, session);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::UploadParameterPresetToHoudini(::HoudiniEngineUnity::HEU_SessionBase session)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "UploadParameterPresetToHoudini",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, session);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::UpdateParameterInputsToHoudini(::HoudiniEngineUnity::HEU_SessionBase session, bool bForceUpdate)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "UpdateParameterInputsToHoudini",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, session, bForceUpdate);
}
 bool ::HoudiniEngineUnity::HEU_HoudiniAsset::LoadAssetFileWithSubasset(::HoudiniEngineUnity::HEU_SessionBase session, bool bPromptForSubasset, int32_t desiredSubassetIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "LoadAssetFileWithSubasset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, session, bPromptForSubasset, desiredSubassetIndex);
}
 bool ::HoudiniEngineUnity::HEU_HoudiniAsset::CreateAndCookAsset(::HoudiniEngineUnity::HEU_SessionBase session, int32_t subassetIndex, ByRef<int32_t> newAssetID, bool bCookTemplatedGeos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "CreateAndCookAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, session, subassetIndex, newAssetID, bCookTemplatedGeos);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::CreateAssetInputs(::HoudiniEngineUnity::HEU_SessionBase session)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "CreateAssetInputs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, session);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::UploadCurvesParameters(::HoudiniEngineUnity::HEU_SessionBase session, bool bCheckParamsChanged)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "UploadCurvesParameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, session, bCheckParamsChanged);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::UploadAttributeValues(::HoudiniEngineUnity::HEU_SessionBase session)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "UploadAttributeValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, session);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::SyncDirtyAttributesToHoudini(::HoudiniEngineUnity::HEU_SessionBase session)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "SyncDirtyAttributesToHoudini",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, session);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::UploadInputNodes(::HoudiniEngineUnity::HEU_SessionBase session, bool bForceUpdate, bool bUpdateAll)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "UploadInputNodes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, session, bForceUpdate, bUpdateAll);
}
 bool ::HoudiniEngineUnity::HEU_HoudiniAsset::HasInputNodeTransformChanged()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "HasInputNodeTransformChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::NotifyInputNodesCookFinished()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "NotifyInputNodesCookFinished",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::HoudiniEngineUnity::HEU_HoudiniAsset::CreateObjects(::HoudiniEngineUnity::HEU_SessionBase session)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "CreateObjects",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, session);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::UpdateAllObjectNodes(::HoudiniEngineUnity::HEU_SessionBase session)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "UpdateAllObjectNodes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, session);
}
 ::HoudiniEngineUnity::HEU_ObjectNode ::HoudiniEngineUnity::HEU_HoudiniAsset::CreateObjectNode(::HoudiniEngineUnity::HEU_SessionBase session, ByRef<::HoudiniEngineUnity::HAPI_ObjectInfo> objectInfo, ByRef<::HoudiniEngineUnity::HAPI_Transform> objectTranform)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "CreateObjectNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::HoudiniEngineUnity::HAPI_ObjectInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::HoudiniEngineUnity::HAPI_Transform>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_ObjectNode, false>(const_cast<void*>(instance), ___internal_method, session, objectInfo, objectTranform);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::GenerateObjectsGeometry(::HoudiniEngineUnity::HEU_SessionBase session, bool bRebuild)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "GenerateObjectsGeometry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, session, bRebuild);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::GenerateAttributesStore(::HoudiniEngineUnity::HEU_SessionBase session)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "GenerateAttributesStore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, session);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::GenerateInstances(::HoudiniEngineUnity::HEU_SessionBase session)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "GenerateInstances",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, session);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::GenerateHandles(::HoudiniEngineUnity::HEU_SessionBase session)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "GenerateHandles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, session);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::CleanUpHandles()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "CleanUpHandles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::HoudiniEngineUnity::HEU_Handle ::HoudiniEngineUnity::HEU_HoudiniAsset::GetHandleByName(::StringW handleName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "GetHandleByName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_Handle, false>(const_cast<void*>(instance), ___internal_method, handleName);
}
 ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Handle> ::HoudiniEngineUnity::HEU_HoudiniAsset::GetHandles()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "GetHandles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Handle>, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::HoudiniEngineUnity::HEU_HoudiniAsset::NumHandles()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "NumHandles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::HoudiniEngineUnity::HAPI_Transform ::HoudiniEngineUnity::HEU_HoudiniAsset::GetObjectTransform(::HoudiniEngineUnity::HEU_SessionBase session, int32_t objectID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "GetObjectTransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HAPI_Transform, false>(const_cast<void*>(instance), ___internal_method, session, objectID);
}
 ::HoudiniEngineUnity::HEU_ObjectNode ::HoudiniEngineUnity::HEU_HoudiniAsset::GetObjectWithID(int32_t objId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "GetObjectWithID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_ObjectNode, false>(const_cast<void*>(instance), ___internal_method, objId);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::InvokeBakedEvent(bool bSuccess, ::System::Collections::Generic::List_1<::UnityEngine::GameObject> outputObjects, bool isNewBake)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "InvokeBakedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::GameObject>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, bSuccess, outputObjects, isNewBake);
}
 ::UnityEngine::GameObject ::HoudiniEngineUnity::HEU_HoudiniAsset::CloneAssetWithoutHDA(ByRef<::StringW> bakedAssetPath, bool bWriteMeshesToAssetDatabase, bool bReconnectPrefabInstances)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "CloneAssetWithoutHDA",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::GameObject, false>(const_cast<void*>(instance), ___internal_method, bakedAssetPath, bWriteMeshesToAssetDatabase, bReconnectPrefabInstances);
}
/// @param destinationPrefabPath: ::StringW (default: csnull)
 ::UnityEngine::GameObject ::HoudiniEngineUnity::HEU_HoudiniAsset::BakeToNewPrefab(::StringW destinationPrefabPath)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "BakeToNewPrefab",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::GameObject, false>(const_cast<void*>(instance), ___internal_method, destinationPrefabPath);
}
 ::UnityEngine::GameObject ::HoudiniEngineUnity::HEU_HoudiniAsset::BakeToNewStandalone()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "BakeToNewStandalone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::GameObject, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::BakeToExistingPrefab(::UnityEngine::GameObject bakeTargetGO)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "BakeToExistingPrefab",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, bakeTargetGO);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::BakeToExistingStandalone(::UnityEngine::GameObject bakeTargetGO)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "BakeToExistingStandalone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, bakeTargetGO);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::NotifyUpstreamCooked(::HoudiniEngineUnity::HEU_HoudiniAsset upstreamAsset, bool bSuccess, ::System::Collections::Generic::List_1<::UnityEngine::GameObject> outputs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "NotifyUpstreamCooked",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::GameObject>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, upstreamAsset, bSuccess, outputs);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::ConnectToUpstream(::HoudiniEngineUnity::HEU_HoudiniAsset upstreamAsset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "ConnectToUpstream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, upstreamAsset);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::DisconnectFromUpstream(::HoudiniEngineUnity::HEU_HoudiniAsset upstreamAsset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "DisconnectFromUpstream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, upstreamAsset);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::AddDownstreamConnection(::UnityEngine::Events::UnityAction_3<::HoudiniEngineUnity::HEU_HoudiniAsset,bool,::System::Collections::Generic::List_1<::UnityEngine::GameObject>> receiver)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "AddDownstreamConnection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction_3<::HoudiniEngineUnity::HEU_HoudiniAsset,bool,::System::Collections::Generic::List_1<::UnityEngine::GameObject>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, receiver);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::RemoveDownstreamConnection(::UnityEngine::Events::UnityAction_3<::HoudiniEngineUnity::HEU_HoudiniAsset,bool,::System::Collections::Generic::List_1<::UnityEngine::GameObject>> receiver)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "RemoveDownstreamConnection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction_3<::HoudiniEngineUnity::HEU_HoudiniAsset,bool,::System::Collections::Generic::List_1<::UnityEngine::GameObject>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, receiver);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::ClearAllUpstreamConnections()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "ClearAllUpstreamConnections",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::UpdateInputsOnAssetRecreation(::HoudiniEngineUnity::HEU_SessionBase session)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "UpdateInputsOnAssetRecreation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, session);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::ReconnectInputsUpstreamNotifications()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "ReconnectInputsUpstreamNotifications",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::GetHoudiniTransformAndApply(::HoudiniEngineUnity::HEU_SessionBase session)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "GetHoudiniTransformAndApply",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, session);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::UploadUnityTransform(::HoudiniEngineUnity::HEU_SessionBase session, bool bOnlySendIfChangedFromLastSync)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "UploadUnityTransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, session, bOnlySendIfChangedFromLastSync);
}
 ::HoudiniEngineUnity::HEU_MaterialData ::HoudiniEngineUnity::HEU_HoudiniAsset::GetMaterialData(::UnityEngine::Material material)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "GetMaterialData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_MaterialData, false>(const_cast<void*>(instance), ___internal_method, material);
}
 ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData> ::HoudiniEngineUnity::HEU_HoudiniAsset::GetMaterialCache()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "GetMaterialCache",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData>, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::ClearMaterialCache()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "ClearMaterialCache",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::UpdateHoudiniMaterials(::HoudiniEngineUnity::HEU_SessionBase session)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "UpdateHoudiniMaterials",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, session);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::RemoveUnusedMaterials()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "RemoveUnusedMaterials",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::RemoveMaterial(::UnityEngine::Material material)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "RemoveMaterial",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, material);
}
 bool ::HoudiniEngineUnity::HEU_HoudiniAsset::IsAssetValidInHoudini(::HoudiniEngineUnity::HEU_SessionBase session)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "IsAssetValidInHoudini",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, session);
}
 bool ::HoudiniEngineUnity::HEU_HoudiniAsset::IsAssetValid()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "IsAssetValid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::HoudiniEngineUnity::HEU_HoudiniAsset::HasTransformChangedSinceLastUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "HasTransformChangedSinceLastUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::GetClonableParts(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_PartData> clonableParts)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "GetClonableParts",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_PartData>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, clonableParts);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::GetOutputGameObjects(::System::Collections::Generic::List_1<::UnityEngine::GameObject> outputObjects)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "GetOutputGameObjects",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::GameObject>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, outputObjects);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::GetOutput(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeneratedOutput> outputs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "GetOutput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeneratedOutput>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, outputs);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::GetOutputGeoNodes(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeoNode> outputGeoNodes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "GetOutputGeoNodes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeoNode>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, outputGeoNodes);
}
 ::HoudiniEngineUnity::HEU_PartData ::HoudiniEngineUnity::HEU_HoudiniAsset::GetInternalHDAPartWithGameObject(::UnityEngine::GameObject outputGameObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "GetInternalHDAPartWithGameObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_PartData, false>(const_cast<void*>(instance), ___internal_method, outputGameObject);
}
 ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Curve> ::HoudiniEngineUnity::HEU_HoudiniAsset::GetCurves()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "GetCurves",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Curve>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::HoudiniEngineUnity::HEU_Curve ::HoudiniEngineUnity::HEU_HoudiniAsset::GetCurve(::StringW curveName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "GetCurve",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_Curve, false>(const_cast<void*>(instance), ___internal_method, curveName);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::ClearInvalidCurves()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "ClearInvalidCurves",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::HoudiniEngineUnity::HEU_HoudiniAsset::GetEditableCurveCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "GetEditableCurveCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::AddCurve(::HoudiniEngineUnity::HEU_Curve curve)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "AddCurve",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_Curve>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, curve);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::RemoveCurve(::HoudiniEngineUnity::HEU_Curve curve)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "RemoveCurve",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_Curve>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, curve);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::AddCurveDrawCollider(::UnityEngine::Collider newCollider)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "AddCurveDrawCollider",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Collider>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, newCollider);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::RemoveCurveDrawCollider(::UnityEngine::Collider collider)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "RemoveCurveDrawCollider",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Collider>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, collider);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::ClearCurveDrawColliders()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "ClearCurveDrawColliders",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputNode> ::HoudiniEngineUnity::HEU_HoudiniAsset::GetInputNodes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "GetInputNodes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputNode>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::HoudiniEngineUnity::HEU_InputNode ::HoudiniEngineUnity::HEU_HoudiniAsset::GetInputNode(::StringW inputName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "GetInputNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_InputNode, false>(const_cast<void*>(instance), ___internal_method, inputName);
}
 ::HoudiniEngineUnity::HEU_InputNode ::HoudiniEngineUnity::HEU_HoudiniAsset::GetAssetInputNode(::StringW inputName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "GetAssetInputNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_InputNode, false>(const_cast<void*>(instance), ___internal_method, inputName);
}
 ::HoudiniEngineUnity::HEU_InputNode ::HoudiniEngineUnity::HEU_HoudiniAsset::GetInputNodeByIndex(int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "GetInputNodeByIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_InputNode, false>(const_cast<void*>(instance), ___internal_method, index);
}
 ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputNode> ::HoudiniEngineUnity::HEU_HoudiniAsset::GetNonParameterInputNodes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "GetNonParameterInputNodes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputNode>, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::AddInputNode(::HoudiniEngineUnity::HEU_InputNode node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "AddInputNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_InputNode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, node);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::RemoveInputNode(::HoudiniEngineUnity::HEU_InputNode node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "RemoveInputNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_InputNode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, node);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::InputNodeNotifyRemoved(::HoudiniEngineUnity::HEU_InputNode node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "InputNodeNotifyRemoved",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_InputNode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, node);
}
 int32_t ::HoudiniEngineUnity::HEU_HoudiniAsset::GetVolumeCacheCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "GetVolumeCacheCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCache> ::HoudiniEngineUnity::HEU_HoudiniAsset::GetVolumeCaches()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "GetVolumeCaches",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCache>, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::AddVolumeCache(::HoudiniEngineUnity::HEU_VolumeCache cache)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "AddVolumeCache",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_VolumeCache>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, cache);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::RemoveVolumeCache(::HoudiniEngineUnity::HEU_VolumeCache cache)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "RemoveVolumeCache",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_VolumeCache>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, cache);
}
 ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_AttributesStore> ::HoudiniEngineUnity::HEU_HoudiniAsset::GetAttributesStores()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "GetAttributesStores",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_AttributesStore>, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::HoudiniEngineUnity::HEU_HoudiniAsset::NumAttributeStores()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "NumAttributeStores",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::HoudiniEngineUnity::HEU_AttributesStore ::HoudiniEngineUnity::HEU_HoudiniAsset::GetAttributeStore(::StringW geoName, int32_t partID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "GetAttributeStore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_AttributesStore, false>(const_cast<void*>(instance), ___internal_method, geoName, partID);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::AddAttributeStore(::HoudiniEngineUnity::HEU_AttributesStore attributeStore)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "AddAttributeStore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AttributesStore>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, attributeStore);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::RemoveAttributeStore(::HoudiniEngineUnity::HEU_AttributesStore attributeStore)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "RemoveAttributeStore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AttributesStore>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, attributeStore);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::ReorderAttributeStore(int32_t oldIndex, int32_t newIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "ReorderAttributeStore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, oldIndex, newIndex);
}
 ::HoudiniEngineUnity::HEU_PartData ::HoudiniEngineUnity::HEU_HoudiniAsset::GetSceneHDAPartWithGameObject(::UnityEngine::GameObject outputGameObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "GetSceneHDAPartWithGameObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_PartData, false>(nullptr, ___internal_method, outputGameObject);
}
 ::HoudiniEngineUnity::HEU_HoudiniAsset ::HoudiniEngineUnity::HEU_HoudiniAsset::GetSceneHDAAssetFromGameObject(::UnityEngine::GameObject outputGameObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "GetSceneHDAAssetFromGameObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_HoudiniAsset, false>(nullptr, ___internal_method, outputGameObject);
}
 bool ::HoudiniEngineUnity::HEU_HoudiniAsset::IsHoudiniAssetOutput(::UnityEngine::GameObject go)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "IsHoudiniAssetOutput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, go);
}
 bool ::HoudiniEngineUnity::HEU_HoudiniAsset::IsHoudiniAssetRoot(::UnityEngine::GameObject go)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "IsHoudiniAssetRoot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, go);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::PopulateObjectInstanceInfos(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ObjectInstanceInfo> objInstanceInfos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "PopulateObjectInstanceInfos",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ObjectInstanceInfo>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, objInstanceInfos);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::AddToAssetDBCache(::StringW assetObjectFileName, ::UnityEngine::Object objectToAdd, ::StringW relativeFolderPath, ByRef<::UnityEngine::Object> targetAssetDBObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "AddToAssetDBCache",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Object>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, assetObjectFileName, objectToAdd, relativeFolderPath, targetAssetDBObject);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::SetCurvesVisibilityInScene(bool bShow)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "SetCurvesVisibilityInScene",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, bShow);
}
 ::HoudiniEngineUnity::HEU_SessionBase ::HoudiniEngineUnity::HEU_HoudiniAsset::GetAssetSession(bool bCreateIfInvalid)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "GetAssetSession",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_SessionBase, false>(const_cast<void*>(instance), ___internal_method, bCreateIfInvalid);
}
 ::StringW ::HoudiniEngineUnity::HEU_HoudiniAsset::GetValidAssetCacheFolderPath()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "GetValidAssetCacheFolderPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::HideAllGeometry()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "HideAllGeometry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::CalculateVisibility()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "CalculateVisibility",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::DisableAllColliders()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "DisableAllColliders",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::CalculateColliderState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "CalculateColliderState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
/// @param newRootGameObject: ::UnityEngine::GameObject (default: csnull)
 ::UnityEngine::GameObject ::HoudiniEngineUnity::HEU_HoudiniAsset::DuplicateAsset(::UnityEngine::GameObject newRootGameObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "DuplicateAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::GameObject, false>(const_cast<void*>(instance), ___internal_method, newRootGameObject);
}
 ::HoudiniEngineUnity::HEU_ObjectNode ::HoudiniEngineUnity::HEU_HoudiniAsset::GetObjectNodeByName(::StringW objName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "GetObjectNodeByName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_ObjectNode, false>(const_cast<void*>(instance), ___internal_method, objName);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::ResetMaterialOverrides()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "ResetMaterialOverrides",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::ResetParametersToDefault()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "ResetParametersToDefault",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::HoudiniEngineUnity::HEU_AssetPreset ::HoudiniEngineUnity::HEU_HoudiniAsset::GetAssetPreset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "GetAssetPreset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_AssetPreset, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::LoadAssetPresetAndCook(::HoudiniEngineUnity::HEU_AssetPreset assetPreset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "LoadAssetPresetAndCook",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AssetPreset>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, assetPreset);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::ApplyRecookPreset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "ApplyRecookPreset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::HoudiniEngineUnity::HEU_HoudiniAsset::ApplyInputPresets(::HoudiniEngineUnity::HEU_SessionBase session, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputPreset> inputPresets, bool bAddMissingInputsToRecookPreset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "ApplyInputPresets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputPreset>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, session, inputPresets, bAddMissingInputsToRecookPreset);
}
 ::HoudiniEngineUnity::HEU_VolumeCachePreset ::HoudiniEngineUnity::HEU_HoudiniAsset::GetVolumeCachePreset(::StringW objName, ::StringW geoName, int32_t tile)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "GetVolumeCachePreset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_VolumeCachePreset, false>(const_cast<void*>(instance), ___internal_method, objName, geoName, tile);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::RemoveVolumeCachePreset(::HoudiniEngineUnity::HEU_VolumeCachePreset preset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "RemoveVolumeCachePreset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_VolumeCachePreset>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, preset);
}
 bool ::HoudiniEngineUnity::HEU_HoudiniAsset::ApplyVolumeCachePresets(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCachePreset> volumeCachePresets)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "ApplyVolumeCachePresets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCachePreset>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, volumeCachePresets);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::SyncInternalParametersForUndoCompare()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "SyncInternalParametersForUndoCompare",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::HoudiniEngineUnity::HEU_HoudiniAsset::UpdateSessionSync()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "UpdateSessionSync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::UpdateTotalCookCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "UpdateTotalCookCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::ResetAndCopyInstantiatedProperties(::HoudiniEngineUnity::HEU_HoudiniAsset newAsset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "ResetAndCopyInstantiatedProperties",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, newAsset);
}
 ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__AssetInstantiationMethod ::HoudiniEngineUnity::HEU_HoudiniAsset::GetInstantiationMethod()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "GetInstantiationMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HoudiniAsset__AssetInstantiationMethod, false>(const_cast<void*>(instance), ___internal_method);
}
 ::HoudiniEngineUnity::HEU_HoudiniAsset ::HoudiniEngineUnity::HEU_HoudiniAsset::GetInstantiatedObject()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "GetInstantiatedObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_HoudiniAsset, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::ClearInvalidLists()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "ClearInvalidLists",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::CopyPropertiesTo(::HoudiniEngineUnity::HEU_HoudiniAsset newAsset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "CopyPropertiesTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, newAsset);
}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::SetSoftDeleted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "SetSoftDeleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::HoudiniEngineUnity::HEU_HoudiniAsset::IsEquivalentTo(::HoudiniEngineUnity::HEU_HoudiniAsset asset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            "IsEquivalentTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, asset);
}
// Ctor Parameters []
 ::HoudiniEngineUnity::HEU_HoudiniAsset::HEU_HoudiniAsset()  : ::UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<HEU_HoudiniAsset>())) {}
 void ::HoudiniEngineUnity::HEU_HoudiniAsset::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
