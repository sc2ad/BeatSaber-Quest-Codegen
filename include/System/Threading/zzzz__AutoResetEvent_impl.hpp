#pragma once
#include "System/Threading/zzzz__EventWaitHandle_impl.hpp"
#include "System/Threading/zzzz__AutoResetEvent_def.hpp"
//  Writing Method size for method: System::Threading::AutoResetEvent._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::AutoResetEvent::*)(bool)>(&System::Threading::AutoResetEvent::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x24a2794;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::AutoResetEvent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "initialState", ty: "bool", modifiers: "", def_value: None }]
 System::Threading::AutoResetEvent::AutoResetEvent(bool initialState)  : System::Threading::EventWaitHandle(THROW_UNLESS(::il2cpp_utils::New<AutoResetEvent>(initialState))) {}
 void System::Threading::AutoResetEvent::_ctor(bool initialState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::AutoResetEvent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, initialState);
}
