#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
namespace {
#include "HoudiniEngineUnity/zzzz__HEU_Task_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Task__TaskStatus::____HoudiniEngineUnity__HEU_Task__TaskStatus(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Task__TaskStatus::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Task__TaskStatus::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Task__TaskStatus  ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Task__TaskStatus::NONE{0};
constexpr ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Task__TaskStatus  ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Task__TaskStatus::PENDING_START{1};
constexpr ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Task__TaskStatus  ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Task__TaskStatus::STARTED{2};
constexpr ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Task__TaskStatus  ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Task__TaskStatus::REQUIRE_UPDATE{3};
constexpr ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Task__TaskStatus  ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Task__TaskStatus::PENDING_COMPLETE{4};
constexpr ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Task__TaskStatus  ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Task__TaskStatus::COMPLETED{5};
constexpr ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Task__TaskStatus  ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Task__TaskStatus::UNUSED{6};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Task__TaskResult::____HoudiniEngineUnity__HEU_Task__TaskResult(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Task__TaskResult::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Task__TaskResult::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Task__TaskResult  ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Task__TaskResult::NONE{0};
constexpr ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Task__TaskResult  ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Task__TaskResult::SUCCESS{1};
constexpr ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Task__TaskResult  ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Task__TaskResult::FAILED{2};
constexpr ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Task__TaskResult  ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Task__TaskResult::KILLED{3};
//  Writing Method size for method: ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Task__TaskCallback._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Task__TaskCallback::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Task__TaskCallback::_ctor)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x2038e58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Task__TaskCallback>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Task__TaskCallback.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Task__TaskCallback::*)(::HoudiniEngineUnity::HEU_Task)>(&::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Task__TaskCallback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2038f84;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Task__TaskCallback),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Task__TaskCallback>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Task__TaskCallback.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Task__TaskCallback::*)(::HoudiniEngineUnity::HEU_Task, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Task__TaskCallback::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2038f98;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Task__TaskCallback),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Task__TaskCallback>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Task__TaskCallback.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Task__TaskCallback::*)(::System::IAsyncResult)>(&::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Task__TaskCallback::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2038fb8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Task__TaskCallback),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Task__TaskCallback>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Task__TaskCallback::____HoudiniEngineUnity__HEU_Task__TaskCallback(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____HoudiniEngineUnity__HEU_Task__TaskCallback>(object, method))) {}
 void ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Task__TaskCallback::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Task__TaskCallback>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 void ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Task__TaskCallback::Invoke(::HoudiniEngineUnity::HEU_Task task)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Task__TaskCallback>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_Task>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, task);
}
 ::System::IAsyncResult ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Task__TaskCallback::BeginInvoke(::HoudiniEngineUnity::HEU_Task task, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Task__TaskCallback>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_Task>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, task, callback, object);
}
 void ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Task__TaskCallback::EndInvoke(::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Task__TaskCallback>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Task.get_TaskGuid
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Guid (::HoudiniEngineUnity::HEU_Task::*)()>(&::HoudiniEngineUnity::HEU_Task::get_TaskGuid)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2038e24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Task>::get(),
                            "get_TaskGuid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Task._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_Task::*)()>(&::HoudiniEngineUnity::HEU_Task::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2038e30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Task>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Task.DoTask
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_Task::*)()>(&::HoudiniEngineUnity::HEU_Task::DoTask)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::HoudiniEngineUnity::HEU_Task),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Task>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Task.UpdateTask
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_Task::*)()>(&::HoudiniEngineUnity::HEU_Task::UpdateTask)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2038e54;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::HoudiniEngineUnity::HEU_Task),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Task>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Task.KillTask
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_Task::*)()>(&::HoudiniEngineUnity::HEU_Task::KillTask)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::HoudiniEngineUnity::HEU_Task),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Task>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Task.CompleteTask
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_Task::*)(::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Task__TaskResult)>(&::HoudiniEngineUnity::HEU_Task::CompleteTask)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::HoudiniEngineUnity::HEU_Task),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Task>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
constexpr void ::HoudiniEngineUnity::HEU_Task::__set__status(::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Task__TaskStatus value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Task__TaskStatus, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Task__TaskStatus>(value));
}
constexpr ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Task__TaskStatus ::HoudiniEngineUnity::HEU_Task::__get__status() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Task__TaskStatus, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_Task::__set__result(::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Task__TaskResult value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Task__TaskResult, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Task__TaskResult>(value));
}
constexpr ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Task__TaskResult ::HoudiniEngineUnity::HEU_Task::__get__result() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Task__TaskResult, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_Task::__set__guid(::System::Guid value)  {
::cordl_internals::setInstanceField<::System::Guid, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Guid>(value));
}
constexpr ::System::Guid ::HoudiniEngineUnity::HEU_Task::__get__guid() const {
return ::cordl_internals::getInstanceField<::System::Guid, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_Task::__set__taskCompletedDelegate(::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Task__TaskCallback value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Task__TaskCallback, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Task__TaskCallback>(value));
}
constexpr ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Task__TaskCallback ::HoudiniEngineUnity::HEU_Task::__get__taskCompletedDelegate() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Task__TaskCallback, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::System::Guid ::HoudiniEngineUnity::HEU_Task::get_TaskGuid()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Task>::get(),
                            "get_TaskGuid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Guid, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::HoudiniEngineUnity::HEU_Task::HEU_Task()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<HEU_Task>())) {}
 void ::HoudiniEngineUnity::HEU_Task::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Task>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HoudiniEngineUnity::HEU_Task::DoTask()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Task>::get(),
                            "DoTask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HoudiniEngineUnity::HEU_Task::UpdateTask()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Task>::get(),
                            "UpdateTask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HoudiniEngineUnity::HEU_Task::KillTask()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Task>::get(),
                            "KillTask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HoudiniEngineUnity::HEU_Task::CompleteTask(::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Task__TaskResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Task>::get(),
                            "CompleteTask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Task__TaskResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, result);
}
} // end anonymous namespace
