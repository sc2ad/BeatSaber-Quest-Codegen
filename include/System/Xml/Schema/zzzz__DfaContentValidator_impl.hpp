#pragma once
#include "System/Xml/Schema/zzzz__ContentValidator_impl.hpp"
namespace {
#include "System/Xml/Schema/zzzz__DfaContentValidator_def.hpp"
#include "System/Xml/Schema/zzzz__SymbolsDictionary_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaContentType_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::DfaContentValidator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::DfaContentValidator::*)(::ArrayW<::ArrayW<int32_t>>, ::System::Xml::Schema::SymbolsDictionary, ::System::Xml::Schema::XmlSchemaContentType, bool, bool)>(&::System::Xml::Schema::DfaContentValidator::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x271d0a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::DfaContentValidator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::ArrayW<int32_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::SymbolsDictionary>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaContentType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::System::Xml::Schema::DfaContentValidator::__set_transitionTable(::ArrayW<::ArrayW<int32_t>> value)  {
::cordl_internals::setInstanceField<::ArrayW<::ArrayW<int32_t>>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::ArrayW<int32_t>>>(value));
}
constexpr ::ArrayW<::ArrayW<int32_t>> ::System::Xml::Schema::DfaContentValidator::__get_transitionTable() const {
return ::cordl_internals::getInstanceField<::ArrayW<::ArrayW<int32_t>>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Xml::Schema::DfaContentValidator::__set_symbols(::System::Xml::Schema::SymbolsDictionary value)  {
::cordl_internals::setInstanceField<::System::Xml::Schema::SymbolsDictionary, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Xml::Schema::SymbolsDictionary>(value));
}
constexpr ::System::Xml::Schema::SymbolsDictionary ::System::Xml::Schema::DfaContentValidator::__get_symbols() const {
return ::cordl_internals::getInstanceField<::System::Xml::Schema::SymbolsDictionary, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "transitionTable", ty: "::ArrayW<::ArrayW<int32_t>>", modifiers: "", def_value: None }, CppParam { name: "symbols", ty: "::System::Xml::Schema::SymbolsDictionary", modifiers: "", def_value: None }, CppParam { name: "contentType", ty: "::System::Xml::Schema::XmlSchemaContentType", modifiers: "", def_value: None }, CppParam { name: "isOpen", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isEmptiable", ty: "bool", modifiers: "", def_value: None }]
 ::System::Xml::Schema::DfaContentValidator::DfaContentValidator(::ArrayW<::ArrayW<int32_t>> transitionTable, ::System::Xml::Schema::SymbolsDictionary symbols, ::System::Xml::Schema::XmlSchemaContentType contentType, bool isOpen, bool isEmptiable)  : ::System::Xml::Schema::ContentValidator(THROW_UNLESS(::il2cpp_utils::New<DfaContentValidator>(transitionTable, symbols, contentType, isOpen, isEmptiable))) {}
 void ::System::Xml::Schema::DfaContentValidator::_ctor(::ArrayW<::ArrayW<int32_t>> transitionTable, ::System::Xml::Schema::SymbolsDictionary symbols, ::System::Xml::Schema::XmlSchemaContentType contentType, bool isOpen, bool isEmptiable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::DfaContentValidator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::ArrayW<int32_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::SymbolsDictionary>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaContentType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, transitionTable, symbols, contentType, isOpen, isEmptiable);
}
} // end anonymous namespace
