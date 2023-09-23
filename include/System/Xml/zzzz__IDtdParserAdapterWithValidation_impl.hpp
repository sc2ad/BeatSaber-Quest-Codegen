#pragma once
#include "System/Xml/zzzz__IDtdParserAdapterWithValidation_def.hpp"
#include "System/Xml/zzzz__IDtdParserAdapter_def.hpp"
#include "System/Xml/zzzz__IValidationEventHandling_def.hpp"
//  Writing Method size for method: System::Xml::IDtdParserAdapterWithValidation.get_DtdValidation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::IDtdParserAdapterWithValidation::*)()>(&System::Xml::IDtdParserAdapterWithValidation::get_DtdValidation)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::IDtdParserAdapterWithValidation),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::IDtdParserAdapterWithValidation>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::IDtdParserAdapterWithValidation.get_ValidationEventHandling
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Xml::IValidationEventHandling (System::Xml::IDtdParserAdapterWithValidation::*)()>(&System::Xml::IDtdParserAdapterWithValidation::get_ValidationEventHandling)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::IDtdParserAdapterWithValidation),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::IDtdParserAdapterWithValidation>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Xml::IDtdParserAdapter
constexpr  System::Xml::IDtdParserAdapterWithValidation::operator System::Xml::IDtdParserAdapter() const noexcept {
return System::Xml::IDtdParserAdapter(::bs_hook::Il2CppWrapperType::instance);
}
 bool System::Xml::IDtdParserAdapterWithValidation::get_DtdValidation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::IDtdParserAdapterWithValidation>::get(),
                            "get_DtdValidation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Xml::IValidationEventHandling System::Xml::IDtdParserAdapterWithValidation::get_ValidationEventHandling()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::IDtdParserAdapterWithValidation>::get(),
                            "get_ValidationEventHandling",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Xml::IValidationEventHandling, false>(const_cast<void*>(instance), ___internal_method);
}
