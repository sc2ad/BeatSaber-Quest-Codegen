#pragma once
#include "Microsoft/Win32/SafeHandles/zzzz__SafeHandleZeroOrMinusOneIsInvalid_impl.hpp"
namespace {
#include "Microsoft/Win32/SafeHandles/zzzz__SafeProcessHandle_def.hpp"
//  Writing Method size for method: ::Microsoft::Win32::SafeHandles::SafeProcessHandle._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Microsoft::Win32::SafeHandles::SafeProcessHandle::*)(::cordl_internals::intptr_t)>(&::Microsoft::Win32::SafeHandles::SafeProcessHandle::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2699484;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Microsoft::Win32::SafeHandles::SafeProcessHandle>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Microsoft::Win32::SafeHandles::SafeProcessHandle._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Microsoft::Win32::SafeHandles::SafeProcessHandle::*)(::cordl_internals::intptr_t, bool)>(&::Microsoft::Win32::SafeHandles::SafeProcessHandle::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2699254;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Microsoft::Win32::SafeHandles::SafeProcessHandle>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Microsoft::Win32::SafeHandles::SafeProcessHandle.ReleaseHandle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Microsoft::Win32::SafeHandles::SafeProcessHandle::*)()>(&::Microsoft::Win32::SafeHandles::SafeProcessHandle::ReleaseHandle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26994b0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Microsoft::Win32::SafeHandles::SafeProcessHandle),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Microsoft::Win32::SafeHandles::SafeProcessHandle>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
 void ::Microsoft::Win32::SafeHandles::SafeProcessHandle::__set_InvalidHandle(::Microsoft::Win32::SafeHandles::SafeProcessHandle value)  {
::cordl_internals::setStaticField<::Microsoft::Win32::SafeHandles::SafeProcessHandle, "InvalidHandle", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Microsoft::Win32::SafeHandles::SafeProcessHandle>::get>(std::forward<::Microsoft::Win32::SafeHandles::SafeProcessHandle>(value));
}
 ::Microsoft::Win32::SafeHandles::SafeProcessHandle ::Microsoft::Win32::SafeHandles::SafeProcessHandle::__get_InvalidHandle()  {
return ::cordl_internals::getStaticField<::Microsoft::Win32::SafeHandles::SafeProcessHandle, "InvalidHandle", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Microsoft::Win32::SafeHandles::SafeProcessHandle>::get>();
}
// Ctor Parameters [CppParam { name: "handle", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::Microsoft::Win32::SafeHandles::SafeProcessHandle::SafeProcessHandle(::cordl_internals::intptr_t handle)  : ::Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid(THROW_UNLESS(::il2cpp_utils::New<SafeProcessHandle>(handle))) {}
 void ::Microsoft::Win32::SafeHandles::SafeProcessHandle::_ctor(::cordl_internals::intptr_t handle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Microsoft::Win32::SafeHandles::SafeProcessHandle>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, handle);
}
// Ctor Parameters [CppParam { name: "existingHandle", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "ownsHandle", ty: "bool", modifiers: "", def_value: None }]
 ::Microsoft::Win32::SafeHandles::SafeProcessHandle::SafeProcessHandle(::cordl_internals::intptr_t existingHandle, bool ownsHandle)  : ::Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid(THROW_UNLESS(::il2cpp_utils::New<SafeProcessHandle>(existingHandle, ownsHandle))) {}
 void ::Microsoft::Win32::SafeHandles::SafeProcessHandle::_ctor(::cordl_internals::intptr_t existingHandle, bool ownsHandle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Microsoft::Win32::SafeHandles::SafeProcessHandle>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, existingHandle, ownsHandle);
}
 bool ::Microsoft::Win32::SafeHandles::SafeProcessHandle::ReleaseHandle()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Microsoft::Win32::SafeHandles::SafeProcessHandle>::get(),
                            "ReleaseHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
