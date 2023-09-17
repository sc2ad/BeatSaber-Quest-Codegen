#pragma once
#include "Microsoft/Win32/SafeHandles/zzzz__SafeHandleZeroOrMinusOneIsInvalid_impl.hpp"
namespace {
#include "Microsoft/Win32/SafeHandles/zzzz__SafeWaitHandle_def.hpp"
//  Writing Method size for method: ::Microsoft::Win32::SafeHandles::SafeWaitHandle._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Microsoft::Win32::SafeHandles::SafeWaitHandle::*)(::cordl_internals::intptr_t, bool)>(&::Microsoft::Win32::SafeHandles::SafeWaitHandle::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x22bebfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Microsoft::Win32::SafeHandles::SafeWaitHandle>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Microsoft::Win32::SafeHandles::SafeWaitHandle.ReleaseHandle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Microsoft::Win32::SafeHandles::SafeWaitHandle::*)()>(&::Microsoft::Win32::SafeHandles::SafeWaitHandle::ReleaseHandle)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x22bec24;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Microsoft::Win32::SafeHandles::SafeWaitHandle),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Microsoft::Win32::SafeHandles::SafeWaitHandle>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "existingHandle", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "ownsHandle", ty: "bool", modifiers: "", def_value: None }]
 ::Microsoft::Win32::SafeHandles::SafeWaitHandle::SafeWaitHandle(::cordl_internals::intptr_t existingHandle, bool ownsHandle)  : ::Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid(THROW_UNLESS(::il2cpp_utils::New<SafeWaitHandle>(existingHandle, ownsHandle))) {}
 void ::Microsoft::Win32::SafeHandles::SafeWaitHandle::_ctor(::cordl_internals::intptr_t existingHandle, bool ownsHandle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Microsoft::Win32::SafeHandles::SafeWaitHandle>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, existingHandle, ownsHandle);
}
 bool ::Microsoft::Win32::SafeHandles::SafeWaitHandle::ReleaseHandle()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Microsoft::Win32::SafeHandles::SafeWaitHandle>::get(),
                            "ReleaseHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
