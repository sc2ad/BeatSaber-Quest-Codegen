#pragma once
#include "System/Threading/Tasks/zzzz__TaskExceptionHolder_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/Collections/Generic/zzzz__LowLevelListWithIList_1_def.hpp"
#include "System/zzzz__AggregateException_def.hpp"
#include "System/Runtime/ExceptionServices/zzzz__ExceptionDispatchInfo_def.hpp"
#include "System/Collections/ObjectModel/zzzz__ReadOnlyCollection_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
//  Writing Method size for method: System::Threading::Tasks::TaskExceptionHolder._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::TaskExceptionHolder::*)(System::Threading::Tasks::Task)>(&System::Threading::Tasks::TaskExceptionHolder::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x24b7510;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskExceptionHolder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::TaskExceptionHolder.ShouldFailFastOnUnobservedException
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&System::Threading::Tasks::TaskExceptionHolder::ShouldFailFastOnUnobservedException)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24be218;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskExceptionHolder>::get(),
                            "ShouldFailFastOnUnobservedException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::TaskExceptionHolder.Finalize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::TaskExceptionHolder::*)()>(&System::Threading::Tasks::TaskExceptionHolder::Finalize)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x24be220;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Threading::Tasks::TaskExceptionHolder),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskExceptionHolder>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::TaskExceptionHolder.get_ContainsFaultList
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::Tasks::TaskExceptionHolder::*)()>(&System::Threading::Tasks::TaskExceptionHolder::get_ContainsFaultList)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x24b7124;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskExceptionHolder>::get(),
                            "get_ContainsFaultList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::TaskExceptionHolder.Add
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::TaskExceptionHolder::*)(::bs_hook::Il2CppWrapperType, bool)>(&System::Threading::Tasks::TaskExceptionHolder::Add)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x24b7538;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskExceptionHolder>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::TaskExceptionHolder.SetCancellationException
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::TaskExceptionHolder::*)(::bs_hook::Il2CppWrapperType)>(&System::Threading::Tasks::TaskExceptionHolder::SetCancellationException)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x24be5c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskExceptionHolder>::get(),
                            "SetCancellationException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::TaskExceptionHolder.AddFaultException
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::TaskExceptionHolder::*)(::bs_hook::Il2CppWrapperType)>(&System::Threading::Tasks::TaskExceptionHolder::AddFaultException)> {
  constexpr static std::size_t size = 0x50c;
  constexpr static std::size_t addrs = 0x24be680;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskExceptionHolder>::get(),
                            "AddFaultException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::TaskExceptionHolder.MarkAsUnhandled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::TaskExceptionHolder::*)()>(&System::Threading::Tasks::TaskExceptionHolder::MarkAsUnhandled)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x24beb8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskExceptionHolder>::get(),
                            "MarkAsUnhandled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::TaskExceptionHolder.MarkAsHandled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::TaskExceptionHolder::*)(bool)>(&System::Threading::Tasks::TaskExceptionHolder::MarkAsHandled)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x24b72fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskExceptionHolder>::get(),
                            "MarkAsHandled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::TaskExceptionHolder.CreateExceptionObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::AggregateException (System::Threading::Tasks::TaskExceptionHolder::*)(bool, System::Exception)>(&System::Threading::Tasks::TaskExceptionHolder::CreateExceptionObject)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x24b7544;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskExceptionHolder>::get(),
                            "CreateExceptionObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::TaskExceptionHolder.GetExceptionDispatchInfos
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::ObjectModel::ReadOnlyCollection_1<System::Runtime::ExceptionServices::ExceptionDispatchInfo> (System::Threading::Tasks::TaskExceptionHolder::*)()>(&System::Threading::Tasks::TaskExceptionHolder::GetExceptionDispatchInfos)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x24b7804;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskExceptionHolder>::get(),
                            "GetExceptionDispatchInfos",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::TaskExceptionHolder.GetCancellationExceptionDispatchInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::ExceptionServices::ExceptionDispatchInfo (System::Threading::Tasks::TaskExceptionHolder::*)()>(&System::Threading::Tasks::TaskExceptionHolder::GetCancellationExceptionDispatchInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24bebfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskExceptionHolder>::get(),
                            "GetCancellationExceptionDispatchInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void System::Threading::Tasks::TaskExceptionHolder::__set_s_failFastOnUnobservedException(bool value)  {
::cordl_internals::setStaticField<bool, "s_failFastOnUnobservedException", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskExceptionHolder>::get>(std::forward<bool>(value));
}
 bool System::Threading::Tasks::TaskExceptionHolder::__get_s_failFastOnUnobservedException()  {
return ::cordl_internals::getStaticField<bool, "s_failFastOnUnobservedException", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskExceptionHolder>::get>();
}
constexpr void System::Threading::Tasks::TaskExceptionHolder::__set_m_task(System::Threading::Tasks::Task value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::Task, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::Task>(value));
}
constexpr System::Threading::Tasks::Task System::Threading::Tasks::TaskExceptionHolder::__get_m_task() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::Task, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::TaskExceptionHolder::__set_m_faultExceptions(System::Collections::Generic::LowLevelListWithIList_1<System::Runtime::ExceptionServices::ExceptionDispatchInfo> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::LowLevelListWithIList_1<System::Runtime::ExceptionServices::ExceptionDispatchInfo>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::LowLevelListWithIList_1<System::Runtime::ExceptionServices::ExceptionDispatchInfo>>(value));
}
constexpr System::Collections::Generic::LowLevelListWithIList_1<System::Runtime::ExceptionServices::ExceptionDispatchInfo> System::Threading::Tasks::TaskExceptionHolder::__get_m_faultExceptions() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::LowLevelListWithIList_1<System::Runtime::ExceptionServices::ExceptionDispatchInfo>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::TaskExceptionHolder::__set_m_cancellationException(System::Runtime::ExceptionServices::ExceptionDispatchInfo value)  {
::cordl_internals::setInstanceField<System::Runtime::ExceptionServices::ExceptionDispatchInfo, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Runtime::ExceptionServices::ExceptionDispatchInfo>(value));
}
constexpr System::Runtime::ExceptionServices::ExceptionDispatchInfo System::Threading::Tasks::TaskExceptionHolder::__get_m_cancellationException() const {
return ::cordl_internals::getInstanceField<System::Runtime::ExceptionServices::ExceptionDispatchInfo, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::TaskExceptionHolder::__set_m_isHandled(bool value)  {
::cordl_internals::setInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Threading::Tasks::TaskExceptionHolder::__get_m_isHandled() const {
return ::cordl_internals::getInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Threading::Tasks::TaskExceptionHolder System::Threading::Tasks::TaskExceptionHolder::New_ctor(System::Threading::Tasks::Task task)  {
System::Threading::Tasks::TaskExceptionHolder o{THROW_UNLESS(::il2cpp_utils::New<System::Threading::Tasks::TaskExceptionHolder>(task))};
return o;
}
 void System::Threading::Tasks::TaskExceptionHolder::_ctor(System::Threading::Tasks::Task task)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskExceptionHolder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, task);
}
 bool System::Threading::Tasks::TaskExceptionHolder::ShouldFailFastOnUnobservedException()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskExceptionHolder>::get(),
                            "ShouldFailFastOnUnobservedException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
 void System::Threading::Tasks::TaskExceptionHolder::Finalize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskExceptionHolder>::get(),
                            "Finalize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Threading::Tasks::TaskExceptionHolder::get_ContainsFaultList()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskExceptionHolder>::get(),
                            "get_ContainsFaultList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Threading::Tasks::TaskExceptionHolder::Add(::bs_hook::Il2CppWrapperType exceptionObject, bool representsCancellation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskExceptionHolder>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, exceptionObject, representsCancellation);
}
 void System::Threading::Tasks::TaskExceptionHolder::SetCancellationException(::bs_hook::Il2CppWrapperType exceptionObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskExceptionHolder>::get(),
                            "SetCancellationException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, exceptionObject);
}
 void System::Threading::Tasks::TaskExceptionHolder::AddFaultException(::bs_hook::Il2CppWrapperType exceptionObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskExceptionHolder>::get(),
                            "AddFaultException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, exceptionObject);
}
 void System::Threading::Tasks::TaskExceptionHolder::MarkAsUnhandled()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskExceptionHolder>::get(),
                            "MarkAsUnhandled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Threading::Tasks::TaskExceptionHolder::MarkAsHandled(bool calledFromFinalizer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskExceptionHolder>::get(),
                            "MarkAsHandled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, calledFromFinalizer);
}
 System::AggregateException System::Threading::Tasks::TaskExceptionHolder::CreateExceptionObject(bool calledFromFinalizer, System::Exception includeThisException)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskExceptionHolder>::get(),
                            "CreateExceptionObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::AggregateException, false>(const_cast<void*>(instance), ___internal_method, calledFromFinalizer, includeThisException);
}
 System::Collections::ObjectModel::ReadOnlyCollection_1<System::Runtime::ExceptionServices::ExceptionDispatchInfo> System::Threading::Tasks::TaskExceptionHolder::GetExceptionDispatchInfos()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskExceptionHolder>::get(),
                            "GetExceptionDispatchInfos",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::ObjectModel::ReadOnlyCollection_1<System::Runtime::ExceptionServices::ExceptionDispatchInfo>, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Runtime::ExceptionServices::ExceptionDispatchInfo System::Threading::Tasks::TaskExceptionHolder::GetCancellationExceptionDispatchInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskExceptionHolder>::get(),
                            "GetCancellationExceptionDispatchInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Runtime::ExceptionServices::ExceptionDispatchInfo, false>(const_cast<void*>(instance), ___internal_method);
}
