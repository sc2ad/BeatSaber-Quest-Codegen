#pragma once
#include "System/Reflection/Emit/zzzz__UnmanagedMarshal_def.hpp"
//  Writing Method size for method: System::Reflection::Emit::UnmanagedMarshal._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Reflection::Emit::UnmanagedMarshal::*)()>(&System::Reflection::Emit::UnmanagedMarshal::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x238ebd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::Emit::UnmanagedMarshal>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 System::Reflection::Emit::UnmanagedMarshal System::Reflection::Emit::UnmanagedMarshal::New_ctor()  {
System::Reflection::Emit::UnmanagedMarshal o{THROW_UNLESS(::il2cpp_utils::New<System::Reflection::Emit::UnmanagedMarshal>())};
return o;
}
 void System::Reflection::Emit::UnmanagedMarshal::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::Emit::UnmanagedMarshal>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
