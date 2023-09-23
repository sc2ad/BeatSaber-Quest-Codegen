#pragma once
#include "System/zzzz__EventArgs_impl.hpp"
#include "System/zzzz__AssemblyLoadEventArgs_def.hpp"
#include "System/Reflection/zzzz__Assembly_def.hpp"
//  Writing Method size for method: System::AssemblyLoadEventArgs._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::AssemblyLoadEventArgs::*)(System::Reflection::Assembly)>(&System::AssemblyLoadEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x23b463c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::AssemblyLoadEventArgs>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::Assembly>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::AssemblyLoadEventArgs::__set__LoadedAssembly_k__BackingField(System::Reflection::Assembly value)  {
::cordl_internals::setInstanceField<System::Reflection::Assembly, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Reflection::Assembly>(value));
}
constexpr System::Reflection::Assembly System::AssemblyLoadEventArgs::__get__LoadedAssembly_k__BackingField() const {
return ::cordl_internals::getInstanceField<System::Reflection::Assembly, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "loadedAssembly", ty: "System::Reflection::Assembly", modifiers: "", def_value: None }]
 System::AssemblyLoadEventArgs::AssemblyLoadEventArgs(System::Reflection::Assembly loadedAssembly)  : System::EventArgs(THROW_UNLESS(::il2cpp_utils::New<AssemblyLoadEventArgs>(loadedAssembly))) {}
 void System::AssemblyLoadEventArgs::_ctor(System::Reflection::Assembly loadedAssembly)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::AssemblyLoadEventArgs>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::Assembly>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, loadedAssembly);
}
