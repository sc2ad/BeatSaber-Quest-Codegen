#pragma once
#include "System/Runtime/CompilerServices/zzzz__StateMachineAttribute_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__IteratorStateMachineAttribute_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: System::Runtime::CompilerServices::IteratorStateMachineAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::CompilerServices::IteratorStateMachineAttribute::*)(System::Type)>(&System::Runtime::CompilerServices::IteratorStateMachineAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x236e0e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::IteratorStateMachineAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "stateMachineType", ty: "System::Type", modifiers: "", def_value: None }]
 System::Runtime::CompilerServices::IteratorStateMachineAttribute::IteratorStateMachineAttribute(System::Type stateMachineType)  : System::Runtime::CompilerServices::StateMachineAttribute(THROW_UNLESS(::il2cpp_utils::New<IteratorStateMachineAttribute>(stateMachineType))) {}
 void System::Runtime::CompilerServices::IteratorStateMachineAttribute::_ctor(System::Type stateMachineType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::IteratorStateMachineAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, stateMachineType);
}
