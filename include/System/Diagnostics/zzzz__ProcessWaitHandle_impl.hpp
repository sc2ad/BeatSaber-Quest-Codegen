#pragma once
#include "System/Threading/zzzz__WaitHandle_impl.hpp"
#include "System/Diagnostics/zzzz__ProcessWaitHandle_def.hpp"
#include "Microsoft/Win32/SafeHandles/zzzz__SafeProcessHandle_def.hpp"
//  Writing Method size for method: System::Diagnostics::ProcessWaitHandle._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::ProcessWaitHandle::*)(Microsoft::Win32::SafeHandles::SafeProcessHandle)>(&System::Diagnostics::ProcessWaitHandle::_ctor)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x27dd4c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Diagnostics::ProcessWaitHandle>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Microsoft::Win32::SafeHandles::SafeProcessHandle>::get()}
                        )));
    return ___internal_method;
  }
};
 System::Diagnostics::ProcessWaitHandle System::Diagnostics::ProcessWaitHandle::New_ctor(Microsoft::Win32::SafeHandles::SafeProcessHandle processHandle)  {
System::Diagnostics::ProcessWaitHandle o{THROW_UNLESS(::il2cpp_utils::New<System::Diagnostics::ProcessWaitHandle>(processHandle))};
return o;
}
 void System::Diagnostics::ProcessWaitHandle::_ctor(Microsoft::Win32::SafeHandles::SafeProcessHandle processHandle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Diagnostics::ProcessWaitHandle>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Microsoft::Win32::SafeHandles::SafeProcessHandle>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, processHandle);
}
