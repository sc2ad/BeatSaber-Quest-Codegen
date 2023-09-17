#pragma once
#include "HoudiniEngineUnity/zzzz__HEU_Task_impl.hpp"
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "HoudiniEngineUnity/zzzz__HEU_AssetTask_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_CookedEventData_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_HoudiniAsset_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_SessionBase_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_ReloadEventData_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_Task_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_AssetTask__BuildType::____HoudiniEngineUnity__HEU_AssetTask__BuildType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_AssetTask__BuildType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_AssetTask__BuildType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_AssetTask__BuildType  ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_AssetTask__BuildType::NONE{0};
constexpr ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_AssetTask__BuildType  ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_AssetTask__BuildType::LOAD{1};
constexpr ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_AssetTask__BuildType  ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_AssetTask__BuildType::COOK{2};
constexpr ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_AssetTask__BuildType  ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_AssetTask__BuildType::RELOAD{3};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AssetTask.GetTaskSession
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_SessionBase (::HoudiniEngineUnity::HEU_AssetTask::*)()>(&::HoudiniEngineUnity::HEU_AssetTask::GetTaskSession)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2038fc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AssetTask>::get(),
                            "GetTaskSession",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AssetTask.DoTask
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_AssetTask::*)()>(&::HoudiniEngineUnity::HEU_AssetTask::DoTask)> {
  constexpr static std::size_t size = 0x5b0;
  constexpr static std::size_t addrs = 0x2039078;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::HoudiniEngineUnity::HEU_AssetTask),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AssetTask>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AssetTask.KillTask
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_AssetTask::*)()>(&::HoudiniEngineUnity::HEU_AssetTask::KillTask)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x2039650;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::HoudiniEngineUnity::HEU_AssetTask),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AssetTask>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AssetTask.CompleteTask
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_AssetTask::*)(::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Task__TaskResult)>(&::HoudiniEngineUnity::HEU_AssetTask::CompleteTask)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x2039890;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::HoudiniEngineUnity::HEU_AssetTask),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AssetTask>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AssetTask.CookCompletedCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_AssetTask::*)(::HoudiniEngineUnity::HEU_HoudiniAsset, bool, ::System::Collections::Generic::List_1<::UnityEngine::GameObject>)>(&::HoudiniEngineUnity::HEU_AssetTask::CookCompletedCallback)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2039ad0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AssetTask>::get(),
                            "CookCompletedCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::GameObject>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AssetTask.CookCompletedCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_AssetTask::*)(::HoudiniEngineUnity::HEU_CookedEventData)>(&::HoudiniEngineUnity::HEU_AssetTask::CookCompletedCallback)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2039b50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AssetTask>::get(),
                            "CookCompletedCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_CookedEventData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AssetTask.CookCompletedCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_AssetTask::*)(::HoudiniEngineUnity::HEU_ReloadEventData)>(&::HoudiniEngineUnity::HEU_AssetTask::CookCompletedCallback)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2039b60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AssetTask>::get(),
                            "CookCompletedCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_ReloadEventData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AssetTask._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_AssetTask::*)()>(&::HoudiniEngineUnity::HEU_AssetTask::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2039b70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AssetTask>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::HoudiniEngineUnity::HEU_AssetTask::__set__buildType(::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_AssetTask__BuildType value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_AssetTask__BuildType, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_AssetTask__BuildType>(value));
}
constexpr ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_AssetTask__BuildType ::HoudiniEngineUnity::HEU_AssetTask::__get__buildType() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_AssetTask__BuildType, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_AssetTask::__set__asset(::HoudiniEngineUnity::HEU_HoudiniAsset value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::HEU_HoudiniAsset, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::HoudiniEngineUnity::HEU_HoudiniAsset>(value));
}
constexpr ::HoudiniEngineUnity::HEU_HoudiniAsset ::HoudiniEngineUnity::HEU_AssetTask::__get__asset() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HEU_HoudiniAsset, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_AssetTask::__set__assetPath(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::HoudiniEngineUnity::HEU_AssetTask::__get__assetPath() const {
return ::cordl_internals::getInstanceField<::StringW, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_AssetTask::__set__position(::UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3 ::HoudiniEngineUnity::HEU_AssetTask::__get__position() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_AssetTask::__set__buildResult(bool value)  {
::cordl_internals::setInstanceField<bool, 0x54>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::HoudiniEngineUnity::HEU_AssetTask::__get__buildResult() const {
return ::cordl_internals::getInstanceField<bool, 0x54>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_AssetTask::__set__forceSessionID(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int64_t>(value));
}
constexpr int64_t ::HoudiniEngineUnity::HEU_AssetTask::__get__forceSessionID() const {
return ::cordl_internals::getInstanceField<int64_t, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::HoudiniEngineUnity::HEU_SessionBase ::HoudiniEngineUnity::HEU_AssetTask::GetTaskSession()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AssetTask>::get(),
                            "GetTaskSession",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_SessionBase, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HoudiniEngineUnity::HEU_AssetTask::DoTask()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AssetTask>::get(),
                            "DoTask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HoudiniEngineUnity::HEU_AssetTask::KillTask()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AssetTask>::get(),
                            "KillTask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HoudiniEngineUnity::HEU_AssetTask::CompleteTask(::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Task__TaskResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AssetTask>::get(),
                            "CompleteTask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Task__TaskResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, result);
}
 void ::HoudiniEngineUnity::HEU_AssetTask::CookCompletedCallback(::HoudiniEngineUnity::HEU_HoudiniAsset asset, bool bSuccess, ::System::Collections::Generic::List_1<::UnityEngine::GameObject> outputs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AssetTask>::get(),
                            "CookCompletedCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::GameObject>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, asset, bSuccess, outputs);
}
 void ::HoudiniEngineUnity::HEU_AssetTask::CookCompletedCallback(::HoudiniEngineUnity::HEU_CookedEventData cookedEventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AssetTask>::get(),
                            "CookCompletedCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_CookedEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, cookedEventData);
}
 void ::HoudiniEngineUnity::HEU_AssetTask::CookCompletedCallback(::HoudiniEngineUnity::HEU_ReloadEventData reloadEventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AssetTask>::get(),
                            "CookCompletedCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_ReloadEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, reloadEventData);
}
// Ctor Parameters []
 ::HoudiniEngineUnity::HEU_AssetTask::HEU_AssetTask()  : ::HoudiniEngineUnity::HEU_Task(THROW_UNLESS(::il2cpp_utils::New<HEU_AssetTask>())) {}
 void ::HoudiniEngineUnity::HEU_AssetTask::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AssetTask>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
