#pragma once
#include "System/Threading/zzzz__EventWaitHandle_impl.hpp"
#include "System/Threading/zzzz__ManualResetEvent_def.hpp"
//  Writing Method size for method: System::Threading::ManualResetEvent._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::ManualResetEvent::*)(bool)>(&System::Threading::ManualResetEvent::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x24a2970;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::ManualResetEvent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "initialState", ty: "bool", modifiers: "", def_value: None }]
 System::Threading::ManualResetEvent::ManualResetEvent(bool initialState)  : System::Threading::EventWaitHandle(THROW_UNLESS(::il2cpp_utils::New<ManualResetEvent>(initialState))) {}
 void System::Threading::ManualResetEvent::_ctor(bool initialState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::ManualResetEvent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, initialState);
}
