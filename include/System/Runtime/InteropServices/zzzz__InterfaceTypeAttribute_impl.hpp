#pragma once
#include "System/zzzz__Attribute_impl.hpp"
namespace {
#include "System/Runtime/InteropServices/zzzz__InterfaceTypeAttribute_def.hpp"
#include "System/Runtime/InteropServices/zzzz__ComInterfaceType_def.hpp"
//  Writing Method size for method: ::System::Runtime::InteropServices::InterfaceTypeAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::InteropServices::InterfaceTypeAttribute::*)(::System::Runtime::InteropServices::ComInterfaceType)>(&::System::Runtime::InteropServices::InterfaceTypeAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x236abc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::InteropServices::InterfaceTypeAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::InteropServices::ComInterfaceType>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::System::Runtime::InteropServices::InterfaceTypeAttribute::__set__val(::System::Runtime::InteropServices::ComInterfaceType value)  {
::cordl_internals::setInstanceField<::System::Runtime::InteropServices::ComInterfaceType, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Runtime::InteropServices::ComInterfaceType>(value));
}
constexpr ::System::Runtime::InteropServices::ComInterfaceType ::System::Runtime::InteropServices::InterfaceTypeAttribute::__get__val() const {
return ::cordl_internals::getInstanceField<::System::Runtime::InteropServices::ComInterfaceType, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "interfaceType", ty: "::System::Runtime::InteropServices::ComInterfaceType", modifiers: "", def_value: None }]
 ::System::Runtime::InteropServices::InterfaceTypeAttribute::InterfaceTypeAttribute(::System::Runtime::InteropServices::ComInterfaceType interfaceType)  : ::System::Attribute(THROW_UNLESS(::il2cpp_utils::New<InterfaceTypeAttribute>(interfaceType))) {}
 void ::System::Runtime::InteropServices::InterfaceTypeAttribute::_ctor(::System::Runtime::InteropServices::ComInterfaceType interfaceType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::InteropServices::InterfaceTypeAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::InteropServices::ComInterfaceType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, interfaceType);
}
} // end anonymous namespace
