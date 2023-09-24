#pragma once
#include "System/Xml/Schema/zzzz__ContentValidator_impl.hpp"
#include "System/Xml/Schema/zzzz__RangeContentValidator_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaContentType_def.hpp"
#include "System/Xml/Schema/zzzz__Positions_def.hpp"
#include "System/Xml/Schema/zzzz__BitSet_def.hpp"
#include "System/Xml/Schema/zzzz__SymbolsDictionary_def.hpp"
//  Writing Method size for method: System::Xml::Schema::RangeContentValidator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::RangeContentValidator::*)(System::Xml::Schema::BitSet, ::ArrayW<System::Xml::Schema::BitSet>, System::Xml::Schema::SymbolsDictionary, System::Xml::Schema::Positions, int32_t, System::Xml::Schema::XmlSchemaContentType, bool, System::Xml::Schema::BitSet, int32_t)>(&System::Xml::Schema::RangeContentValidator::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x271c9c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::RangeContentValidator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::Schema::BitSet>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Xml::Schema::BitSet>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::Schema::SymbolsDictionary>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::Schema::Positions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::Schema::XmlSchemaContentType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::Schema::BitSet>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Xml::Schema::RangeContentValidator::__set_firstpos(System::Xml::Schema::BitSet value)  {
::cordl_internals::setInstanceField<System::Xml::Schema::BitSet, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Xml::Schema::BitSet>(value));
}
constexpr System::Xml::Schema::BitSet System::Xml::Schema::RangeContentValidator::__get_firstpos() const {
return ::cordl_internals::getInstanceField<System::Xml::Schema::BitSet, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::Schema::RangeContentValidator::__set_followpos(::ArrayW<System::Xml::Schema::BitSet> value)  {
::cordl_internals::setInstanceField<::ArrayW<System::Xml::Schema::BitSet>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<System::Xml::Schema::BitSet>>(value));
}
constexpr ::ArrayW<System::Xml::Schema::BitSet> System::Xml::Schema::RangeContentValidator::__get_followpos() const {
return ::cordl_internals::getInstanceField<::ArrayW<System::Xml::Schema::BitSet>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::Schema::RangeContentValidator::__set_positionsWithRangeTerminals(System::Xml::Schema::BitSet value)  {
::cordl_internals::setInstanceField<System::Xml::Schema::BitSet, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Xml::Schema::BitSet>(value));
}
constexpr System::Xml::Schema::BitSet System::Xml::Schema::RangeContentValidator::__get_positionsWithRangeTerminals() const {
return ::cordl_internals::getInstanceField<System::Xml::Schema::BitSet, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::Schema::RangeContentValidator::__set_symbols(System::Xml::Schema::SymbolsDictionary value)  {
::cordl_internals::setInstanceField<System::Xml::Schema::SymbolsDictionary, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Xml::Schema::SymbolsDictionary>(value));
}
constexpr System::Xml::Schema::SymbolsDictionary System::Xml::Schema::RangeContentValidator::__get_symbols() const {
return ::cordl_internals::getInstanceField<System::Xml::Schema::SymbolsDictionary, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::Schema::RangeContentValidator::__set_positions(System::Xml::Schema::Positions value)  {
::cordl_internals::setInstanceField<System::Xml::Schema::Positions, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Xml::Schema::Positions>(value));
}
constexpr System::Xml::Schema::Positions System::Xml::Schema::RangeContentValidator::__get_positions() const {
return ::cordl_internals::getInstanceField<System::Xml::Schema::Positions, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::Schema::RangeContentValidator::__set_minMaxNodesCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Xml::Schema::RangeContentValidator::__get_minMaxNodesCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::Schema::RangeContentValidator::__set_endMarkerPos(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x44>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Xml::Schema::RangeContentValidator::__get_endMarkerPos() const {
return ::cordl_internals::getInstanceField<int32_t, 0x44>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Xml::Schema::RangeContentValidator System::Xml::Schema::RangeContentValidator::New_ctor(System::Xml::Schema::BitSet firstpos, ::ArrayW<System::Xml::Schema::BitSet> followpos, System::Xml::Schema::SymbolsDictionary symbols, System::Xml::Schema::Positions positions, int32_t endMarkerPos, System::Xml::Schema::XmlSchemaContentType contentType, bool isEmptiable, System::Xml::Schema::BitSet positionsWithRangeTerminals, int32_t minmaxNodesCount)  {
System::Xml::Schema::RangeContentValidator o{THROW_UNLESS(::il2cpp_utils::New<System::Xml::Schema::RangeContentValidator>(firstpos, followpos, symbols, positions, endMarkerPos, contentType, isEmptiable, positionsWithRangeTerminals, minmaxNodesCount))};
return o;
}
 void System::Xml::Schema::RangeContentValidator::_ctor(System::Xml::Schema::BitSet firstpos, ::ArrayW<System::Xml::Schema::BitSet> followpos, System::Xml::Schema::SymbolsDictionary symbols, System::Xml::Schema::Positions positions, int32_t endMarkerPos, System::Xml::Schema::XmlSchemaContentType contentType, bool isEmptiable, System::Xml::Schema::BitSet positionsWithRangeTerminals, int32_t minmaxNodesCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::RangeContentValidator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::Schema::BitSet>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Xml::Schema::BitSet>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::Schema::SymbolsDictionary>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::Schema::Positions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::Schema::XmlSchemaContentType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::Schema::BitSet>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, firstpos, followpos, symbols, positions, endMarkerPos, contentType, isEmptiable, positionsWithRangeTerminals, minmaxNodesCount);
}
