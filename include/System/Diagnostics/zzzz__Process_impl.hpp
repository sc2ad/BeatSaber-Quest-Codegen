#pragma once
#include "System/ComponentModel/zzzz__Component_impl.hpp"
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "System/Diagnostics/zzzz__Process_def.hpp"
#include "System/Diagnostics/zzzz__ProcessInfo_def.hpp"
#include "System/Threading/zzzz__RegisteredWaitHandle_def.hpp"
#include "System/Diagnostics/zzzz__ProcessStartInfo_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "System/Diagnostics/zzzz__ProcessModuleCollection_def.hpp"
#include "System/Diagnostics/zzzz__ProcessThreadCollection_def.hpp"
#include "System/zzzz__EventHandler_def.hpp"
#include "System/ComponentModel/zzzz__ISynchronizeInvoke_def.hpp"
#include "System/IO/zzzz__StreamWriter_def.hpp"
#include "System/Diagnostics/zzzz__AsyncStreamReader_def.hpp"
#include "Microsoft/Win32/SafeHandles/zzzz__SafeProcessHandle_def.hpp"
#include "System/Threading/zzzz__WaitHandle_def.hpp"
#include "System/Diagnostics/zzzz__ProcessThreadTimes_def.hpp"
#include "System/IO/zzzz__StreamReader_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Diagnostics::____System__Diagnostics__Process__StreamReadMode::____System__Diagnostics__Process__StreamReadMode(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::Diagnostics::____System__Diagnostics__Process__StreamReadMode::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Diagnostics::____System__Diagnostics__Process__StreamReadMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::Diagnostics::____System__Diagnostics__Process__StreamReadMode  ::System::Diagnostics::____System__Diagnostics__Process__StreamReadMode::undefined{0};
constexpr ::System::Diagnostics::____System__Diagnostics__Process__StreamReadMode  ::System::Diagnostics::____System__Diagnostics__Process__StreamReadMode::syncMode{1};
constexpr ::System::Diagnostics::____System__Diagnostics__Process__StreamReadMode  ::System::Diagnostics::____System__Diagnostics__Process__StreamReadMode::asyncMode{2};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Diagnostics::____System__Diagnostics__Process__State::____System__Diagnostics__Process__State(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::Diagnostics::____System__Diagnostics__Process__State::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Diagnostics::____System__Diagnostics__Process__State::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::Diagnostics::____System__Diagnostics__Process__State  ::System::Diagnostics::____System__Diagnostics__Process__State::HaveId{1};
constexpr ::System::Diagnostics::____System__Diagnostics__Process__State  ::System::Diagnostics::____System__Diagnostics__Process__State::IsLocal{2};
constexpr ::System::Diagnostics::____System__Diagnostics__Process__State  ::System::Diagnostics::____System__Diagnostics__Process__State::IsNt{4};
constexpr ::System::Diagnostics::____System__Diagnostics__Process__State  ::System::Diagnostics::____System__Diagnostics__Process__State::HaveProcessInfo{8};
constexpr ::System::Diagnostics::____System__Diagnostics__Process__State  ::System::Diagnostics::____System__Diagnostics__Process__State::Exited{16};
constexpr ::System::Diagnostics::____System__Diagnostics__Process__State  ::System::Diagnostics::____System__Diagnostics__Process__State::Associated{32};
constexpr ::System::Diagnostics::____System__Diagnostics__Process__State  ::System::Diagnostics::____System__Diagnostics__Process__State::IsWin2k{64};
constexpr ::System::Diagnostics::____System__Diagnostics__Process__State  ::System::Diagnostics::____System__Diagnostics__Process__State::HaveNtProcessInfo{12};
// Ctor Parameters [CppParam { name: "process_handle", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "pid", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "envVariables", ty: "::ArrayW<::StringW>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "UserName", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "Domain", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "Password", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "LoadUserProfile", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Diagnostics::____System__Diagnostics__Process__ProcInfo::____System__Diagnostics__Process__ProcInfo(::cordl_internals::intptr_t process_handle, int32_t pid, ::ArrayW<::StringW> envVariables, ::StringW UserName, ::StringW Domain, ::cordl_internals::intptr_t Password, bool LoadUserProfile) noexcept : ::bs_hook::ValueTypeWrapper() {this->process_handle = process_handle;
this->pid = pid;
this->envVariables = envVariables;
this->UserName = UserName;
this->Domain = Domain;
this->Password = Password;
this->LoadUserProfile = LoadUserProfile;
}
constexpr void ::System::Diagnostics::____System__Diagnostics__Process__ProcInfo::__set_process_handle(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x0>(this->__instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t ::System::Diagnostics::____System__Diagnostics__Process__ProcInfo::__get_process_handle() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x0>(this->__instance);
}
constexpr void ::System::Diagnostics::____System__Diagnostics__Process__ProcInfo::__set_pid(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Diagnostics::____System__Diagnostics__Process__ProcInfo::__get_pid() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->__instance);
}
constexpr void ::System::Diagnostics::____System__Diagnostics__Process__ProcInfo::__set_envVariables(::ArrayW<::StringW> value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW>, 0x10>(this->__instance, std::forward<::ArrayW<::StringW>>(value));
}
constexpr ::ArrayW<::StringW> ::System::Diagnostics::____System__Diagnostics__Process__ProcInfo::__get_envVariables() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW>, 0x10>(this->__instance);
}
constexpr void ::System::Diagnostics::____System__Diagnostics__Process__ProcInfo::__set_UserName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::System::Diagnostics::____System__Diagnostics__Process__ProcInfo::__get_UserName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->__instance);
}
constexpr void ::System::Diagnostics::____System__Diagnostics__Process__ProcInfo::__set_Domain(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::System::Diagnostics::____System__Diagnostics__Process__ProcInfo::__get_Domain() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->__instance);
}
constexpr void ::System::Diagnostics::____System__Diagnostics__Process__ProcInfo::__set_Password(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x28>(this->__instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t ::System::Diagnostics::____System__Diagnostics__Process__ProcInfo::__get_Password() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x28>(this->__instance);
}
constexpr void ::System::Diagnostics::____System__Diagnostics__Process__ProcInfo::__set_LoadUserProfile(bool value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this->__instance, std::forward<bool>(value));
}
constexpr bool ::System::Diagnostics::____System__Diagnostics__Process__ProcInfo::__get_LoadUserProfile() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this->__instance);
}
//  Writing Method size for method: ::System::Diagnostics::Process._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::Process::*)()>(&::System::Diagnostics::Process::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x27dca14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::Process::*)(::StringW, bool, int32_t, ::System::Diagnostics::ProcessInfo)>(&::System::Diagnostics::Process::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x27dca9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::ProcessInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.get_Associated
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Diagnostics::Process::*)()>(&::System::Diagnostics::Process::get_Associated)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x27dcb38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process>::get(),
                            "get_Associated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.get_HasExited
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Diagnostics::Process::*)()>(&::System::Diagnostics::Process::get_HasExited)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x27dcb58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process>::get(),
                            "get_HasExited",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.GetProcessTimes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Diagnostics::ProcessThreadTimes (::System::Diagnostics::Process::*)()>(&::System::Diagnostics::Process::GetProcessTimes)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x27dd6f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process>::get(),
                            "GetProcessTimes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.get_Handle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::intptr_t (::System::Diagnostics::Process::*)()>(&::System::Diagnostics::Process::get_Handle)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x27dd9c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process>::get(),
                            "get_Handle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.get_Id
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Diagnostics::Process::*)()>(&::System::Diagnostics::Process::get_Id)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x27dab88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process>::get(),
                            "get_Id",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.get_StartInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Diagnostics::ProcessStartInfo (::System::Diagnostics::Process::*)()>(&::System::Diagnostics::Process::get_StartInfo)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x27ddab4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process>::get(),
                            "get_StartInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.get_SynchronizingObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::ISynchronizeInvoke (::System::Diagnostics::Process::*)()>(&::System::Diagnostics::Process::get_SynchronizingObject)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x27ddba4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process>::get(),
                            "get_SynchronizingObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.get_TotalProcessorTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (::System::Diagnostics::Process::*)()>(&::System::Diagnostics::Process::get_TotalProcessorTime)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x27ddd44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process>::get(),
                            "get_TotalProcessorTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.ReleaseProcessHandle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::Process::*)(::Microsoft::Win32::SafeHandles::SafeProcessHandle)>(&::System::Diagnostics::Process::ReleaseProcessHandle)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x27ddd70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process>::get(),
                            "ReleaseProcessHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Microsoft::Win32::SafeHandles::SafeProcessHandle>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.CompletionCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::Process::*)(::bs_hook::Il2CppWrapperType, bool)>(&::System::Diagnostics::Process::CompletionCallback)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x27ddd98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process>::get(),
                            "CompletionCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::Process::*)(bool)>(&::System::Diagnostics::Process::Dispose)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x27ddec4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Diagnostics::Process),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.Close
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::Process::*)()>(&::System::Diagnostics::Process::Close)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x27ddf14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process>::get(),
                            "Close",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.EnsureState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::Process::*)(::System::Diagnostics::____System__Diagnostics__Process__State)>(&::System::Diagnostics::Process::EnsureState)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x27dcec8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process>::get(),
                            "EnsureState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::____System__Diagnostics__Process__State>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.EnsureWatchingForExit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::Process::*)()>(&::System::Diagnostics::Process::EnsureWatchingForExit)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x27de080;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process>::get(),
                            "EnsureWatchingForExit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.GetProcessById
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Diagnostics::Process (*)(int32_t)>(&::System::Diagnostics::Process::GetProcessById)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x27de2b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process>::get(),
                            "GetProcessById",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.GetCurrentProcess
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Diagnostics::Process (*)()>(&::System::Diagnostics::Process::GetCurrentProcess)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x27dab00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process>::get(),
                            "GetCurrentProcess",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.OnExited
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::Process::*)()>(&::System::Diagnostics::Process::OnExited)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x27de4d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process>::get(),
                            "OnExited",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.GetProcessHandle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Microsoft::Win32::SafeHandles::SafeProcessHandle (::System::Diagnostics::Process::*)(int32_t, bool)>(&::System::Diagnostics::Process::GetProcessHandle)> {
  constexpr static std::size_t size = 0x4c4;
  constexpr static std::size_t addrs = 0x27dd000;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process>::get(),
                            "GetProcessHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.GetProcessHandle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Microsoft::Win32::SafeHandles::SafeProcessHandle (::System::Diagnostics::Process::*)(int32_t)>(&::System::Diagnostics::Process::GetProcessHandle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27de714;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process>::get(),
                            "GetProcessHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.OpenProcessHandle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Microsoft::Win32::SafeHandles::SafeProcessHandle (::System::Diagnostics::Process::*)(int32_t)>(&::System::Diagnostics::Process::OpenProcessHandle)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x27dd9f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process>::get(),
                            "OpenProcessHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.Refresh
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::Process::*)()>(&::System::Diagnostics::Process::Refresh)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27de06c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process>::get(),
                            "Refresh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.SetProcessHandle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::Process::*)(::Microsoft::Win32::SafeHandles::SafeProcessHandle)>(&::System::Diagnostics::Process::SetProcessHandle)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x27de71c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process>::get(),
                            "SetProcessHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Microsoft::Win32::SafeHandles::SafeProcessHandle>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.SetProcessId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::Process::*)(int32_t)>(&::System::Diagnostics::Process::SetProcessId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x27de738;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process>::get(),
                            "SetProcessId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Diagnostics::Process::*)()>(&::System::Diagnostics::Process::Start)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x27de748;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.StopWatchingForExit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::Process::*)()>(&::System::Diagnostics::Process::StopWatchingForExit)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x27dddb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process>::get(),
                            "StopWatchingForExit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Diagnostics::Process::*)()>(&::System::Diagnostics::Process::ToString)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x27e0038;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Diagnostics::Process),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::Process::*)(::Microsoft::Win32::SafeHandles::SafeProcessHandle, int32_t)>(&::System::Diagnostics::Process::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x27e01a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Microsoft::Win32::SafeHandles::SafeProcessHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.ProcessName_icall
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::cordl_internals::intptr_t)>(&::System::Diagnostics::Process::ProcessName_icall)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x27e0234;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process>::get(),
                            "ProcessName_icall",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.ProcessName_internal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::Microsoft::Win32::SafeHandles::SafeProcessHandle)>(&::System::Diagnostics::Process::ProcessName_internal)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x27e0238;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process>::get(),
                            "ProcessName_internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Microsoft::Win32::SafeHandles::SafeProcessHandle>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.get_ProcessName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Diagnostics::Process::*)()>(&::System::Diagnostics::Process::get_ProcessName)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x27daba4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process>::get(),
                            "get_ProcessName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.GetProcess_internal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::intptr_t (*)(int32_t)>(&::System::Diagnostics::Process::GetProcess_internal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x27e0318;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process>::get(),
                            "GetProcess_internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.GetProcessById
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Diagnostics::Process (*)(int32_t, ::StringW)>(&::System::Diagnostics::Process::GetProcessById)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x27de2fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process>::get(),
                            "GetProcessById",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.IsLocalMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::System::Diagnostics::Process::IsLocalMachine)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x27e031c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process>::get(),
                            "IsLocalMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.ShellExecuteEx_internal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Diagnostics::ProcessStartInfo, ByRef<::System::Diagnostics::____System__Diagnostics__Process__ProcInfo>)>(&::System::Diagnostics::Process::ShellExecuteEx_internal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x27e03ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process>::get(),
                            "ShellExecuteEx_internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::ProcessStartInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Diagnostics::____System__Diagnostics__Process__ProcInfo>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.CreateProcess_internal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Diagnostics::ProcessStartInfo, ::cordl_internals::intptr_t, ::cordl_internals::intptr_t, ::cordl_internals::intptr_t, ByRef<::System::Diagnostics::____System__Diagnostics__Process__ProcInfo>)>(&::System::Diagnostics::Process::CreateProcess_internal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x27e03b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process>::get(),
                            "CreateProcess_internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::ProcessStartInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Diagnostics::____System__Diagnostics__Process__ProcInfo>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.StartWithShellExecuteEx
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Diagnostics::Process::*)(::System::Diagnostics::ProcessStartInfo)>(&::System::Diagnostics::Process::StartWithShellExecuteEx)> {
  constexpr static std::size_t size = 0x3c8;
  constexpr static std::size_t addrs = 0x27de898;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process>::get(),
                            "StartWithShellExecuteEx",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::ProcessStartInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.CreatePipe
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::cordl_internals::intptr_t>, ByRef<::cordl_internals::intptr_t>, bool)>(&::System::Diagnostics::Process::CreatePipe)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x27e0548;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process>::get(),
                            "CreatePipe",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::cordl_internals::intptr_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::cordl_internals::intptr_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.get_IsWindows
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::System::Diagnostics::Process::get_IsWindows)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x27e06e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process>::get(),
                            "get_IsWindows",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.StartWithCreateProcess
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Diagnostics::Process::*)(::System::Diagnostics::ProcessStartInfo)>(&::System::Diagnostics::Process::StartWithCreateProcess)> {
  constexpr static std::size_t size = 0x13d8;
  constexpr static std::size_t addrs = 0x27dec60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process>::get(),
                            "StartWithCreateProcess",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::ProcessStartInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.FillUserInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Diagnostics::ProcessStartInfo, ByRef<::System::Diagnostics::____System__Diagnostics__Process__ProcInfo>)>(&::System::Diagnostics::Process::FillUserInfo)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x27e0408;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process>::get(),
                            "FillUserInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::ProcessStartInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Diagnostics::____System__Diagnostics__Process__ProcInfo>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.RaiseOnExited
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::Process::*)()>(&::System::Diagnostics::Process::RaiseOnExited)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x27dd618;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process>::get(),
                            "RaiseOnExited",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::System::Diagnostics::Process::__set_haveProcessId(bool value)  {
::cordl_internals::setInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::System::Diagnostics::Process::__get_haveProcessId() const {
return ::cordl_internals::getInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Diagnostics::Process::__set_processId(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Diagnostics::Process::__get_processId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Diagnostics::Process::__set_haveProcessHandle(bool value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::System::Diagnostics::Process::__get_haveProcessHandle() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Diagnostics::Process::__set_m_processHandle(::Microsoft::Win32::SafeHandles::SafeProcessHandle value)  {
::cordl_internals::setInstanceField<::Microsoft::Win32::SafeHandles::SafeProcessHandle, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Microsoft::Win32::SafeHandles::SafeProcessHandle>(value));
}
constexpr ::Microsoft::Win32::SafeHandles::SafeProcessHandle ::System::Diagnostics::Process::__get_m_processHandle() const {
return ::cordl_internals::getInstanceField<::Microsoft::Win32::SafeHandles::SafeProcessHandle, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Diagnostics::Process::__set_isRemoteMachine(bool value)  {
::cordl_internals::setInstanceField<bool, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::System::Diagnostics::Process::__get_isRemoteMachine() const {
return ::cordl_internals::getInstanceField<bool, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Diagnostics::Process::__set_machineName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::System::Diagnostics::Process::__get_machineName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Diagnostics::Process::__set_m_processAccess(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Diagnostics::Process::__get_m_processAccess() const {
return ::cordl_internals::getInstanceField<int32_t, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Diagnostics::Process::__set_threads(::System::Diagnostics::ProcessThreadCollection value)  {
::cordl_internals::setInstanceField<::System::Diagnostics::ProcessThreadCollection, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Diagnostics::ProcessThreadCollection>(value));
}
constexpr ::System::Diagnostics::ProcessThreadCollection ::System::Diagnostics::Process::__get_threads() const {
return ::cordl_internals::getInstanceField<::System::Diagnostics::ProcessThreadCollection, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Diagnostics::Process::__set_modules(::System::Diagnostics::ProcessModuleCollection value)  {
::cordl_internals::setInstanceField<::System::Diagnostics::ProcessModuleCollection, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Diagnostics::ProcessModuleCollection>(value));
}
constexpr ::System::Diagnostics::ProcessModuleCollection ::System::Diagnostics::Process::__get_modules() const {
return ::cordl_internals::getInstanceField<::System::Diagnostics::ProcessModuleCollection, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Diagnostics::Process::__set_haveWorkingSetLimits(bool value)  {
::cordl_internals::setInstanceField<bool, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::System::Diagnostics::Process::__get_haveWorkingSetLimits() const {
return ::cordl_internals::getInstanceField<bool, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Diagnostics::Process::__set_havePriorityClass(bool value)  {
::cordl_internals::setInstanceField<bool, 0x69>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::System::Diagnostics::Process::__get_havePriorityClass() const {
return ::cordl_internals::getInstanceField<bool, 0x69>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Diagnostics::Process::__set_startInfo(::System::Diagnostics::ProcessStartInfo value)  {
::cordl_internals::setInstanceField<::System::Diagnostics::ProcessStartInfo, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Diagnostics::ProcessStartInfo>(value));
}
constexpr ::System::Diagnostics::ProcessStartInfo ::System::Diagnostics::Process::__get_startInfo() const {
return ::cordl_internals::getInstanceField<::System::Diagnostics::ProcessStartInfo, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Diagnostics::Process::__set_watchForExit(bool value)  {
::cordl_internals::setInstanceField<bool, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::System::Diagnostics::Process::__get_watchForExit() const {
return ::cordl_internals::getInstanceField<bool, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Diagnostics::Process::__set_watchingForExit(bool value)  {
::cordl_internals::setInstanceField<bool, 0x79>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::System::Diagnostics::Process::__get_watchingForExit() const {
return ::cordl_internals::getInstanceField<bool, 0x79>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Diagnostics::Process::__set_onExited(::System::EventHandler value)  {
::cordl_internals::setInstanceField<::System::EventHandler, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::EventHandler>(value));
}
constexpr ::System::EventHandler ::System::Diagnostics::Process::__get_onExited() const {
return ::cordl_internals::getInstanceField<::System::EventHandler, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Diagnostics::Process::__set_exited(bool value)  {
::cordl_internals::setInstanceField<bool, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::System::Diagnostics::Process::__get_exited() const {
return ::cordl_internals::getInstanceField<bool, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Diagnostics::Process::__set_exitCode(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Diagnostics::Process::__get_exitCode() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Diagnostics::Process::__set_signaled(bool value)  {
::cordl_internals::setInstanceField<bool, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::System::Diagnostics::Process::__get_signaled() const {
return ::cordl_internals::getInstanceField<bool, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Diagnostics::Process::__set_haveExitTime(bool value)  {
::cordl_internals::setInstanceField<bool, 0x91>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::System::Diagnostics::Process::__get_haveExitTime() const {
return ::cordl_internals::getInstanceField<bool, 0x91>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Diagnostics::Process::__set_raisedOnExited(bool value)  {
::cordl_internals::setInstanceField<bool, 0x92>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::System::Diagnostics::Process::__get_raisedOnExited() const {
return ::cordl_internals::getInstanceField<bool, 0x92>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Diagnostics::Process::__set_registeredWaitHandle(::System::Threading::RegisteredWaitHandle value)  {
::cordl_internals::setInstanceField<::System::Threading::RegisteredWaitHandle, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Threading::RegisteredWaitHandle>(value));
}
constexpr ::System::Threading::RegisteredWaitHandle ::System::Diagnostics::Process::__get_registeredWaitHandle() const {
return ::cordl_internals::getInstanceField<::System::Threading::RegisteredWaitHandle, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Diagnostics::Process::__set_waitHandle(::System::Threading::WaitHandle value)  {
::cordl_internals::setInstanceField<::System::Threading::WaitHandle, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Threading::WaitHandle>(value));
}
constexpr ::System::Threading::WaitHandle ::System::Diagnostics::Process::__get_waitHandle() const {
return ::cordl_internals::getInstanceField<::System::Threading::WaitHandle, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Diagnostics::Process::__set_synchronizingObject(::System::ComponentModel::ISynchronizeInvoke value)  {
::cordl_internals::setInstanceField<::System::ComponentModel::ISynchronizeInvoke, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::ComponentModel::ISynchronizeInvoke>(value));
}
constexpr ::System::ComponentModel::ISynchronizeInvoke ::System::Diagnostics::Process::__get_synchronizingObject() const {
return ::cordl_internals::getInstanceField<::System::ComponentModel::ISynchronizeInvoke, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Diagnostics::Process::__set_standardOutput(::System::IO::StreamReader value)  {
::cordl_internals::setInstanceField<::System::IO::StreamReader, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::IO::StreamReader>(value));
}
constexpr ::System::IO::StreamReader ::System::Diagnostics::Process::__get_standardOutput() const {
return ::cordl_internals::getInstanceField<::System::IO::StreamReader, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Diagnostics::Process::__set_standardInput(::System::IO::StreamWriter value)  {
::cordl_internals::setInstanceField<::System::IO::StreamWriter, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::IO::StreamWriter>(value));
}
constexpr ::System::IO::StreamWriter ::System::Diagnostics::Process::__get_standardInput() const {
return ::cordl_internals::getInstanceField<::System::IO::StreamWriter, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Diagnostics::Process::__set_standardError(::System::IO::StreamReader value)  {
::cordl_internals::setInstanceField<::System::IO::StreamReader, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::IO::StreamReader>(value));
}
constexpr ::System::IO::StreamReader ::System::Diagnostics::Process::__get_standardError() const {
return ::cordl_internals::getInstanceField<::System::IO::StreamReader, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Diagnostics::Process::__set_disposed(bool value)  {
::cordl_internals::setInstanceField<bool, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::System::Diagnostics::Process::__get_disposed() const {
return ::cordl_internals::getInstanceField<bool, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Diagnostics::Process::__set_outputStreamReadMode(::System::Diagnostics::____System__Diagnostics__Process__StreamReadMode value)  {
::cordl_internals::setInstanceField<::System::Diagnostics::____System__Diagnostics__Process__StreamReadMode, 0xcc>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Diagnostics::____System__Diagnostics__Process__StreamReadMode>(value));
}
constexpr ::System::Diagnostics::____System__Diagnostics__Process__StreamReadMode ::System::Diagnostics::Process::__get_outputStreamReadMode() const {
return ::cordl_internals::getInstanceField<::System::Diagnostics::____System__Diagnostics__Process__StreamReadMode, 0xcc>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Diagnostics::Process::__set_errorStreamReadMode(::System::Diagnostics::____System__Diagnostics__Process__StreamReadMode value)  {
::cordl_internals::setInstanceField<::System::Diagnostics::____System__Diagnostics__Process__StreamReadMode, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Diagnostics::____System__Diagnostics__Process__StreamReadMode>(value));
}
constexpr ::System::Diagnostics::____System__Diagnostics__Process__StreamReadMode ::System::Diagnostics::Process::__get_errorStreamReadMode() const {
return ::cordl_internals::getInstanceField<::System::Diagnostics::____System__Diagnostics__Process__StreamReadMode, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Diagnostics::Process::__set_inputStreamReadMode(::System::Diagnostics::____System__Diagnostics__Process__StreamReadMode value)  {
::cordl_internals::setInstanceField<::System::Diagnostics::____System__Diagnostics__Process__StreamReadMode, 0xd4>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Diagnostics::____System__Diagnostics__Process__StreamReadMode>(value));
}
constexpr ::System::Diagnostics::____System__Diagnostics__Process__StreamReadMode ::System::Diagnostics::Process::__get_inputStreamReadMode() const {
return ::cordl_internals::getInstanceField<::System::Diagnostics::____System__Diagnostics__Process__StreamReadMode, 0xd4>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Diagnostics::Process::__set_output(::System::Diagnostics::AsyncStreamReader value)  {
::cordl_internals::setInstanceField<::System::Diagnostics::AsyncStreamReader, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Diagnostics::AsyncStreamReader>(value));
}
constexpr ::System::Diagnostics::AsyncStreamReader ::System::Diagnostics::Process::__get_output() const {
return ::cordl_internals::getInstanceField<::System::Diagnostics::AsyncStreamReader, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Diagnostics::Process::__set_error(::System::Diagnostics::AsyncStreamReader value)  {
::cordl_internals::setInstanceField<::System::Diagnostics::AsyncStreamReader, 0xe0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Diagnostics::AsyncStreamReader>(value));
}
constexpr ::System::Diagnostics::AsyncStreamReader ::System::Diagnostics::Process::__get_error() const {
return ::cordl_internals::getInstanceField<::System::Diagnostics::AsyncStreamReader, 0xe0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Diagnostics::Process::__set_process_name(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0xe8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::System::Diagnostics::Process::__get_process_name() const {
return ::cordl_internals::getInstanceField<::StringW, 0xe8>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::System::Diagnostics::Process::Process()  : ::System::ComponentModel::Component(THROW_UNLESS(::il2cpp_utils::New<Process>())) {}
 void ::System::Diagnostics::Process::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "machineName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "isRemoteMachine", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "processId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "processInfo", ty: "::System::Diagnostics::ProcessInfo", modifiers: "", def_value: None }]
 ::System::Diagnostics::Process::Process(::StringW machineName, bool isRemoteMachine, int32_t processId, ::System::Diagnostics::ProcessInfo processInfo)  : ::System::ComponentModel::Component(THROW_UNLESS(::il2cpp_utils::New<Process>(machineName, isRemoteMachine, processId, processInfo))) {}
 void ::System::Diagnostics::Process::_ctor(::StringW machineName, bool isRemoteMachine, int32_t processId, ::System::Diagnostics::ProcessInfo processInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::ProcessInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, machineName, isRemoteMachine, processId, processInfo);
}
 bool ::System::Diagnostics::Process::get_Associated()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process>::get(),
                            "get_Associated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::System::Diagnostics::Process::get_HasExited()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process>::get(),
                            "get_HasExited",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Diagnostics::ProcessThreadTimes ::System::Diagnostics::Process::GetProcessTimes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process>::get(),
                            "GetProcessTimes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Diagnostics::ProcessThreadTimes, false>(const_cast<void*>(instance), ___internal_method);
}
 ::cordl_internals::intptr_t ::System::Diagnostics::Process::get_Handle()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process>::get(),
                            "get_Handle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::cordl_internals::intptr_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::System::Diagnostics::Process::get_Id()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process>::get(),
                            "get_Id",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Diagnostics::ProcessStartInfo ::System::Diagnostics::Process::get_StartInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process>::get(),
                            "get_StartInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Diagnostics::ProcessStartInfo, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::ComponentModel::ISynchronizeInvoke ::System::Diagnostics::Process::get_SynchronizingObject()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process>::get(),
                            "get_SynchronizingObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::ISynchronizeInvoke, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::TimeSpan ::System::Diagnostics::Process::get_TotalProcessorTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process>::get(),
                            "get_TotalProcessorTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::TimeSpan, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Diagnostics::Process::ReleaseProcessHandle(::Microsoft::Win32::SafeHandles::SafeProcessHandle handle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process>::get(),
                            "ReleaseProcessHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Microsoft::Win32::SafeHandles::SafeProcessHandle>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, handle);
}
 void ::System::Diagnostics::Process::CompletionCallback(::bs_hook::Il2CppWrapperType context, bool wasSignaled)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process>::get(),
                            "CompletionCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, context, wasSignaled);
}
 void ::System::Diagnostics::Process::Dispose(bool disposing)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, disposing);
}
 void ::System::Diagnostics::Process::Close()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process>::get(),
                            "Close",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Diagnostics::Process::EnsureState(::System::Diagnostics::____System__Diagnostics__Process__State state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process>::get(),
                            "EnsureState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::____System__Diagnostics__Process__State>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, state);
}
 void ::System::Diagnostics::Process::EnsureWatchingForExit()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process>::get(),
                            "EnsureWatchingForExit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Diagnostics::Process ::System::Diagnostics::Process::GetProcessById(int32_t processId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process>::get(),
                            "GetProcessById",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Diagnostics::Process, false>(nullptr, ___internal_method, processId);
}
 ::System::Diagnostics::Process ::System::Diagnostics::Process::GetCurrentProcess()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process>::get(),
                            "GetCurrentProcess",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Diagnostics::Process, false>(nullptr, ___internal_method);
}
 void ::System::Diagnostics::Process::OnExited()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process>::get(),
                            "OnExited",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Microsoft::Win32::SafeHandles::SafeProcessHandle ::System::Diagnostics::Process::GetProcessHandle(int32_t access, bool throwIfExited)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process>::get(),
                            "GetProcessHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Microsoft::Win32::SafeHandles::SafeProcessHandle, false>(const_cast<void*>(instance), ___internal_method, access, throwIfExited);
}
 ::Microsoft::Win32::SafeHandles::SafeProcessHandle ::System::Diagnostics::Process::GetProcessHandle(int32_t access)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process>::get(),
                            "GetProcessHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Microsoft::Win32::SafeHandles::SafeProcessHandle, false>(const_cast<void*>(instance), ___internal_method, access);
}
 ::Microsoft::Win32::SafeHandles::SafeProcessHandle ::System::Diagnostics::Process::OpenProcessHandle(int32_t access)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process>::get(),
                            "OpenProcessHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Microsoft::Win32::SafeHandles::SafeProcessHandle, false>(const_cast<void*>(instance), ___internal_method, access);
}
 void ::System::Diagnostics::Process::Refresh()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process>::get(),
                            "Refresh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Diagnostics::Process::SetProcessHandle(::Microsoft::Win32::SafeHandles::SafeProcessHandle processHandle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process>::get(),
                            "SetProcessHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Microsoft::Win32::SafeHandles::SafeProcessHandle>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, processHandle);
}
 void ::System::Diagnostics::Process::SetProcessId(int32_t processId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process>::get(),
                            "SetProcessId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, processId);
}
 bool ::System::Diagnostics::Process::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Diagnostics::Process::StopWatchingForExit()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process>::get(),
                            "StopWatchingForExit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW ::System::Diagnostics::Process::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "handle", ty: "::Microsoft::Win32::SafeHandles::SafeProcessHandle", modifiers: "", def_value: None }, CppParam { name: "id", ty: "int32_t", modifiers: "", def_value: None }]
 ::System::Diagnostics::Process::Process(::Microsoft::Win32::SafeHandles::SafeProcessHandle handle, int32_t id)  : ::System::ComponentModel::Component(THROW_UNLESS(::il2cpp_utils::New<Process>(handle, id))) {}
 void ::System::Diagnostics::Process::_ctor(::Microsoft::Win32::SafeHandles::SafeProcessHandle handle, int32_t id)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Microsoft::Win32::SafeHandles::SafeProcessHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, handle, id);
}
 ::StringW ::System::Diagnostics::Process::ProcessName_icall(::cordl_internals::intptr_t handle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process>::get(),
                            "ProcessName_icall",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, handle);
}
 ::StringW ::System::Diagnostics::Process::ProcessName_internal(::Microsoft::Win32::SafeHandles::SafeProcessHandle handle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process>::get(),
                            "ProcessName_internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Microsoft::Win32::SafeHandles::SafeProcessHandle>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, handle);
}
 ::StringW ::System::Diagnostics::Process::get_ProcessName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process>::get(),
                            "get_ProcessName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::cordl_internals::intptr_t ::System::Diagnostics::Process::GetProcess_internal(int32_t pid)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process>::get(),
                            "GetProcess_internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::cordl_internals::intptr_t, false>(nullptr, ___internal_method, pid);
}
 ::System::Diagnostics::Process ::System::Diagnostics::Process::GetProcessById(int32_t processId, ::StringW machineName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process>::get(),
                            "GetProcessById",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Diagnostics::Process, false>(nullptr, ___internal_method, processId, machineName);
}
 bool ::System::Diagnostics::Process::IsLocalMachine(::StringW machineName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process>::get(),
                            "IsLocalMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, machineName);
}
 bool ::System::Diagnostics::Process::ShellExecuteEx_internal(::System::Diagnostics::ProcessStartInfo startInfo, ByRef<::System::Diagnostics::____System__Diagnostics__Process__ProcInfo> procInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process>::get(),
                            "ShellExecuteEx_internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::ProcessStartInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Diagnostics::____System__Diagnostics__Process__ProcInfo>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, startInfo, procInfo);
}
 bool ::System::Diagnostics::Process::CreateProcess_internal(::System::Diagnostics::ProcessStartInfo startInfo, ::cordl_internals::intptr_t stdin, ::cordl_internals::intptr_t stdout, ::cordl_internals::intptr_t stderr, ByRef<::System::Diagnostics::____System__Diagnostics__Process__ProcInfo> procInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process>::get(),
                            "CreateProcess_internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::ProcessStartInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Diagnostics::____System__Diagnostics__Process__ProcInfo>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, startInfo, stdin, stdout, stderr, procInfo);
}
 bool ::System::Diagnostics::Process::StartWithShellExecuteEx(::System::Diagnostics::ProcessStartInfo startInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process>::get(),
                            "StartWithShellExecuteEx",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::ProcessStartInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, startInfo);
}
 void ::System::Diagnostics::Process::CreatePipe(ByRef<::cordl_internals::intptr_t> read, ByRef<::cordl_internals::intptr_t> write, bool writeDirection)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process>::get(),
                            "CreatePipe",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::cordl_internals::intptr_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::cordl_internals::intptr_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, read, write, writeDirection);
}
 bool ::System::Diagnostics::Process::get_IsWindows()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process>::get(),
                            "get_IsWindows",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
 bool ::System::Diagnostics::Process::StartWithCreateProcess(::System::Diagnostics::ProcessStartInfo startInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process>::get(),
                            "StartWithCreateProcess",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::ProcessStartInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, startInfo);
}
 void ::System::Diagnostics::Process::FillUserInfo(::System::Diagnostics::ProcessStartInfo startInfo, ByRef<::System::Diagnostics::____System__Diagnostics__Process__ProcInfo> procInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process>::get(),
                            "FillUserInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::ProcessStartInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Diagnostics::____System__Diagnostics__Process__ProcInfo>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, startInfo, procInfo);
}
 void ::System::Diagnostics::Process::RaiseOnExited()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process>::get(),
                            "RaiseOnExited",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
