#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Reflection/zzzz__AssemblyFileVersionAttribute_def.hpp"
//  Writing Method size for method: System::Reflection::AssemblyFileVersionAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Reflection::AssemblyFileVersionAttribute::*)(::StringW)>(&System::Reflection::AssemblyFileVersionAttribute::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2378d70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::AssemblyFileVersionAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Reflection::AssemblyFileVersionAttribute::__set__Version_k__BackingField(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Reflection::AssemblyFileVersionAttribute::__get__Version_k__BackingField() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "version", ty: "::StringW", modifiers: "", def_value: None }]
 System::Reflection::AssemblyFileVersionAttribute::AssemblyFileVersionAttribute(::StringW version)  : System::Attribute(THROW_UNLESS(::il2cpp_utils::New<AssemblyFileVersionAttribute>(version))) {}
 void System::Reflection::AssemblyFileVersionAttribute::_ctor(::StringW version)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::AssemblyFileVersionAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, version);
}
