#pragma once
#include "System/Xml/Schema/zzzz__ContentValidator_impl.hpp"
#include "System/Xml/Schema/zzzz__NfaContentValidator_def.hpp"
#include "System/Xml/Schema/zzzz__SymbolsDictionary_def.hpp"
#include "System/Xml/Schema/zzzz__Positions_def.hpp"
#include "System/Xml/Schema/zzzz__BitSet_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaContentType_def.hpp"
//  Writing Method size for method: System::Xml::Schema::NfaContentValidator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::NfaContentValidator::*)(System::Xml::Schema::BitSet, ::ArrayW<System::Xml::Schema::BitSet>, System::Xml::Schema::SymbolsDictionary, System::Xml::Schema::Positions, int32_t, System::Xml::Schema::XmlSchemaContentType, bool, bool)>(&System::Xml::Schema::NfaContentValidator::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x271d144;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::NfaContentValidator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::Schema::BitSet>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Xml::Schema::BitSet>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::Schema::SymbolsDictionary>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::Schema::Positions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::Schema::XmlSchemaContentType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Xml::Schema::NfaContentValidator::__set_firstpos(System::Xml::Schema::BitSet value)  {
::cordl_internals::setInstanceField<System::Xml::Schema::BitSet, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Xml::Schema::BitSet>(value));
}
constexpr System::Xml::Schema::BitSet System::Xml::Schema::NfaContentValidator::__get_firstpos() const {
return ::cordl_internals::getInstanceField<System::Xml::Schema::BitSet, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::Schema::NfaContentValidator::__set_followpos(::ArrayW<System::Xml::Schema::BitSet> value)  {
::cordl_internals::setInstanceField<::ArrayW<System::Xml::Schema::BitSet>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<System::Xml::Schema::BitSet>>(value));
}
constexpr ::ArrayW<System::Xml::Schema::BitSet> System::Xml::Schema::NfaContentValidator::__get_followpos() const {
return ::cordl_internals::getInstanceField<::ArrayW<System::Xml::Schema::BitSet>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::Schema::NfaContentValidator::__set_symbols(System::Xml::Schema::SymbolsDictionary value)  {
::cordl_internals::setInstanceField<System::Xml::Schema::SymbolsDictionary, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Xml::Schema::SymbolsDictionary>(value));
}
constexpr System::Xml::Schema::SymbolsDictionary System::Xml::Schema::NfaContentValidator::__get_symbols() const {
return ::cordl_internals::getInstanceField<System::Xml::Schema::SymbolsDictionary, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::Schema::NfaContentValidator::__set_positions(System::Xml::Schema::Positions value)  {
::cordl_internals::setInstanceField<System::Xml::Schema::Positions, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Xml::Schema::Positions>(value));
}
constexpr System::Xml::Schema::Positions System::Xml::Schema::NfaContentValidator::__get_positions() const {
return ::cordl_internals::getInstanceField<System::Xml::Schema::Positions, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::Schema::NfaContentValidator::__set_endMarkerPos(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Xml::Schema::NfaContentValidator::__get_endMarkerPos() const {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "firstpos", ty: "System::Xml::Schema::BitSet", modifiers: "", def_value: None }, CppParam { name: "followpos", ty: "::ArrayW<System::Xml::Schema::BitSet>", modifiers: "", def_value: None }, CppParam { name: "symbols", ty: "System::Xml::Schema::SymbolsDictionary", modifiers: "", def_value: None }, CppParam { name: "positions", ty: "System::Xml::Schema::Positions", modifiers: "", def_value: None }, CppParam { name: "endMarkerPos", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "contentType", ty: "System::Xml::Schema::XmlSchemaContentType", modifiers: "", def_value: None }, CppParam { name: "isOpen", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isEmptiable", ty: "bool", modifiers: "", def_value: None }]
 System::Xml::Schema::NfaContentValidator::NfaContentValidator(System::Xml::Schema::BitSet firstpos, ::ArrayW<System::Xml::Schema::BitSet> followpos, System::Xml::Schema::SymbolsDictionary symbols, System::Xml::Schema::Positions positions, int32_t endMarkerPos, System::Xml::Schema::XmlSchemaContentType contentType, bool isOpen, bool isEmptiable)  : System::Xml::Schema::ContentValidator(THROW_UNLESS(::il2cpp_utils::New<NfaContentValidator>(firstpos, followpos, symbols, positions, endMarkerPos, contentType, isOpen, isEmptiable))) {}
 void System::Xml::Schema::NfaContentValidator::_ctor(System::Xml::Schema::BitSet firstpos, ::ArrayW<System::Xml::Schema::BitSet> followpos, System::Xml::Schema::SymbolsDictionary symbols, System::Xml::Schema::Positions positions, int32_t endMarkerPos, System::Xml::Schema::XmlSchemaContentType contentType, bool isOpen, bool isEmptiable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::NfaContentValidator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::Schema::BitSet>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Xml::Schema::BitSet>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::Schema::SymbolsDictionary>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::Schema::Positions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::Schema::XmlSchemaContentType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, firstpos, followpos, symbols, positions, endMarkerPos, contentType, isOpen, isEmptiable);
}
