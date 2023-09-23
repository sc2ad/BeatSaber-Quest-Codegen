#pragma once
#include "System/zzzz__IConsoleDriver_def.hpp"
#include "System/zzzz__ConsoleKeyInfo_def.hpp"
//  Writing Method size for method: System::IConsoleDriver.ReadKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::ConsoleKeyInfo (System::IConsoleDriver::*)(bool)>(&System::IConsoleDriver::ReadKey)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IConsoleDriver),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IConsoleDriver>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 System::ConsoleKeyInfo System::IConsoleDriver::ReadKey(bool intercept)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IConsoleDriver>::get(),
                            "ReadKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::ConsoleKeyInfo, false>(const_cast<void*>(instance), ___internal_method, intercept);
}
