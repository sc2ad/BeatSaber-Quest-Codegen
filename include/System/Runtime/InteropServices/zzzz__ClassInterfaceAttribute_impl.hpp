#pragma once
#include "System/zzzz__Attribute_impl.hpp"
namespace {
#include "System/Runtime/InteropServices/zzzz__ClassInterfaceAttribute_def.hpp"
#include "System/Runtime/InteropServices/zzzz__ClassInterfaceType_def.hpp"
//  Writing Method size for method: ::System::Runtime::InteropServices::ClassInterfaceAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::InteropServices::ClassInterfaceAttribute::*)(::System::Runtime::InteropServices::ClassInterfaceType)>(&::System::Runtime::InteropServices::ClassInterfaceAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x236ac18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::InteropServices::ClassInterfaceAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::InteropServices::ClassInterfaceType>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::System::Runtime::InteropServices::ClassInterfaceAttribute::__set__val(::System::Runtime::InteropServices::ClassInterfaceType value)  {
::cordl_internals::setInstanceField<::System::Runtime::InteropServices::ClassInterfaceType, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Runtime::InteropServices::ClassInterfaceType>(value));
}
constexpr ::System::Runtime::InteropServices::ClassInterfaceType ::System::Runtime::InteropServices::ClassInterfaceAttribute::__get__val() const {
return ::cordl_internals::getInstanceField<::System::Runtime::InteropServices::ClassInterfaceType, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "classInterfaceType", ty: "::System::Runtime::InteropServices::ClassInterfaceType", modifiers: "", def_value: None }]
 ::System::Runtime::InteropServices::ClassInterfaceAttribute::ClassInterfaceAttribute(::System::Runtime::InteropServices::ClassInterfaceType classInterfaceType)  : ::System::Attribute(THROW_UNLESS(::il2cpp_utils::New<ClassInterfaceAttribute>(classInterfaceType))) {}
 void ::System::Runtime::InteropServices::ClassInterfaceAttribute::_ctor(::System::Runtime::InteropServices::ClassInterfaceType classInterfaceType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::InteropServices::ClassInterfaceAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::InteropServices::ClassInterfaceType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, classInterfaceType);
}
} // end anonymous namespace
