#pragma once
#include "System/zzzz__Exception_impl.hpp"
namespace {
#include "System/Xml/Schema/zzzz__UpaException_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::UpaException._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::UpaException::*)(::bs_hook::Il2CppWrapperType, ::bs_hook::Il2CppWrapperType)>(&::System::Xml::Schema::UpaException::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2719144;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::UpaException>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::System::Xml::Schema::UpaException::__set_particle1(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType ::System::Xml::Schema::UpaException::__get_particle1() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Xml::Schema::UpaException::__set_particle2(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType ::System::Xml::Schema::UpaException::__get_particle2() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "particle1", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "particle2", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }]
 ::System::Xml::Schema::UpaException::UpaException(::bs_hook::Il2CppWrapperType particle1, ::bs_hook::Il2CppWrapperType particle2)  : ::System::Exception(THROW_UNLESS(::il2cpp_utils::New<UpaException>(particle1, particle2))) {}
 void ::System::Xml::Schema::UpaException::_ctor(::bs_hook::Il2CppWrapperType particle1, ::bs_hook::Il2CppWrapperType particle2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::UpaException>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, particle1, particle2);
}
} // end anonymous namespace
