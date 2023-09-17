#pragma once
#include "System/zzzz__Attribute_impl.hpp"
namespace {
#include "System/Diagnostics/zzzz__ConditionalAttribute_def.hpp"
//  Writing Method size for method: ::System::Diagnostics::ConditionalAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::ConditionalAttribute::*)(::StringW)>(&::System::Diagnostics::ConditionalAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x240bf08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::ConditionalAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::System::Diagnostics::ConditionalAttribute::__set__ConditionString_k__BackingField(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::System::Diagnostics::ConditionalAttribute::__get__ConditionString_k__BackingField() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "conditionString", ty: "::StringW", modifiers: "", def_value: None }]
 ::System::Diagnostics::ConditionalAttribute::ConditionalAttribute(::StringW conditionString)  : ::System::Attribute(THROW_UNLESS(::il2cpp_utils::New<ConditionalAttribute>(conditionString))) {}
 void ::System::Diagnostics::ConditionalAttribute::_ctor(::StringW conditionString)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::ConditionalAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, conditionString);
}
} // end anonymous namespace
