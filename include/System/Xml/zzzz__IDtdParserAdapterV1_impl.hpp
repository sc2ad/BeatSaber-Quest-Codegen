#pragma once
namespace {
#include "System/Xml/zzzz__IDtdParserAdapterV1_def.hpp"
#include "System/Xml/zzzz__IDtdParserAdapter_def.hpp"
#include "System/Xml/zzzz__IDtdParserAdapterWithValidation_def.hpp"
//  Writing Method size for method: ::System::Xml::IDtdParserAdapterV1.get_V1CompatibilityMode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::IDtdParserAdapterV1::*)()>(&::System::Xml::IDtdParserAdapterV1::get_V1CompatibilityMode)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Xml::IDtdParserAdapterV1),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::IDtdParserAdapterV1>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::IDtdParserAdapterV1.get_Normalization
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::IDtdParserAdapterV1::*)()>(&::System::Xml::IDtdParserAdapterV1::get_Normalization)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Xml::IDtdParserAdapterV1),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::IDtdParserAdapterV1>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::IDtdParserAdapterV1.get_Namespaces
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::IDtdParserAdapterV1::*)()>(&::System::Xml::IDtdParserAdapterV1::get_Namespaces)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Xml::IDtdParserAdapterV1),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::IDtdParserAdapterV1>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Xml::IDtdParserAdapterWithValidation
constexpr  ::System::Xml::IDtdParserAdapterV1::operator ::System::Xml::IDtdParserAdapterWithValidation() const noexcept {
return ::System::Xml::IDtdParserAdapterWithValidation(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::Xml::IDtdParserAdapter
constexpr  ::System::Xml::IDtdParserAdapterV1::operator ::System::Xml::IDtdParserAdapter() const noexcept {
return ::System::Xml::IDtdParserAdapter(::bs_hook::Il2CppWrapperType::instance);
}
 bool ::System::Xml::IDtdParserAdapterV1::get_V1CompatibilityMode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::IDtdParserAdapterV1>::get(),
                            "get_V1CompatibilityMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::System::Xml::IDtdParserAdapterV1::get_Normalization()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::IDtdParserAdapterV1>::get(),
                            "get_Normalization",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::System::Xml::IDtdParserAdapterV1::get_Namespaces()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::IDtdParserAdapterV1>::get(),
                            "get_Namespaces",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
