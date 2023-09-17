#pragma once
#include "System/zzzz__Attribute_impl.hpp"
namespace {
#include "System/Reflection/zzzz__AssemblyConfigurationAttribute_def.hpp"
//  Writing Method size for method: ::System::Reflection::AssemblyConfigurationAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Reflection::AssemblyConfigurationAttribute::*)(::StringW)>(&::System::Reflection::AssemblyConfigurationAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2378ca8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::AssemblyConfigurationAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::System::Reflection::AssemblyConfigurationAttribute::__set__Configuration_k__BackingField(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::System::Reflection::AssemblyConfigurationAttribute::__get__Configuration_k__BackingField() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "configuration", ty: "::StringW", modifiers: "", def_value: None }]
 ::System::Reflection::AssemblyConfigurationAttribute::AssemblyConfigurationAttribute(::StringW configuration)  : ::System::Attribute(THROW_UNLESS(::il2cpp_utils::New<AssemblyConfigurationAttribute>(configuration))) {}
 void ::System::Reflection::AssemblyConfigurationAttribute::_ctor(::StringW configuration)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::AssemblyConfigurationAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, configuration);
}
} // end anonymous namespace
