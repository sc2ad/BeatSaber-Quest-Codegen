#pragma once
#include "System/Threading/zzzz__WaitHandle_impl.hpp"
#include "System/Threading/zzzz__EventWaitHandle_def.hpp"
#include "System/Threading/zzzz__EventResetMode_def.hpp"
//  Writing Method size for method: System::Threading::EventWaitHandle._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::EventWaitHandle::*)(bool, System::Threading::EventResetMode)>(&System::Threading::EventWaitHandle::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x24a27a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::EventWaitHandle>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::EventResetMode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::EventWaitHandle._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::EventWaitHandle::*)(bool, System::Threading::EventResetMode, ::StringW)>(&System::Threading::EventWaitHandle::_ctor)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x24a9480;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::EventWaitHandle>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::EventResetMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::EventWaitHandle.Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::EventWaitHandle::*)()>(&System::Threading::EventWaitHandle::Reset)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x24a77c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::EventWaitHandle>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::EventWaitHandle.Set
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::EventWaitHandle::*)()>(&System::Threading::EventWaitHandle::Set)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x24a40d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::EventWaitHandle>::get(),
                            "Set",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "initialState", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "mode", ty: "System::Threading::EventResetMode", modifiers: "", def_value: None }]
 System::Threading::EventWaitHandle::EventWaitHandle(bool initialState, System::Threading::EventResetMode mode)  : System::Threading::WaitHandle(THROW_UNLESS(::il2cpp_utils::New<EventWaitHandle>(initialState, mode))) {}
 void System::Threading::EventWaitHandle::_ctor(bool initialState, System::Threading::EventResetMode mode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::EventWaitHandle>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::EventResetMode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, initialState, mode);
}
// Ctor Parameters [CppParam { name: "initialState", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "mode", ty: "System::Threading::EventResetMode", modifiers: "", def_value: None }, CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }]
 System::Threading::EventWaitHandle::EventWaitHandle(bool initialState, System::Threading::EventResetMode mode, ::StringW name)  : System::Threading::WaitHandle(THROW_UNLESS(::il2cpp_utils::New<EventWaitHandle>(initialState, mode, name))) {}
 void System::Threading::EventWaitHandle::_ctor(bool initialState, System::Threading::EventResetMode mode, ::StringW name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::EventWaitHandle>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::EventResetMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, initialState, mode, name);
}
 bool System::Threading::EventWaitHandle::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::EventWaitHandle>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Threading::EventWaitHandle::Set()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::EventWaitHandle>::get(),
                            "Set",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
