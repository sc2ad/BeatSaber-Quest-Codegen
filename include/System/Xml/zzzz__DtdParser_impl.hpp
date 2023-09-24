#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/Xml/zzzz__DtdParser_def.hpp"
#include "System/Xml/zzzz__DtdParser_def.hpp"
#include "System/Xml/zzzz__IDtdParser_def.hpp"
#include "System/Xml/zzzz__XmlCharType_def.hpp"
#include "System/Xml/Schema/zzzz__SchemaEntity_def.hpp"
#include "System/Xml/Schema/zzzz__ParticleContentValidator_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSeverityType_def.hpp"
#include "System/Xml/zzzz__XmlNameTable_def.hpp"
#include "System/Xml/zzzz__LineInfo_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Xml/Schema/zzzz__SchemaElementDecl_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/Xml/zzzz__IDtdParserAdapterWithValidation_def.hpp"
#include "System/Xml/Schema/zzzz__SchemaAttDef_def.hpp"
#include "System/Xml/zzzz__XmlQualifiedName_def.hpp"
#include "System/Xml/Schema/zzzz__SchemaInfo_def.hpp"
#include "System/Xml/zzzz__IDtdParserAdapter_def.hpp"
#include "System/Xml/zzzz__IDtdInfo_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaException_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Xml::System__Xml__DtdParser__Token::System__Xml__DtdParser__Token(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Xml::System__Xml__DtdParser__Token::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Xml::System__Xml__DtdParser__Token::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::Xml::System__Xml__DtdParser__Token  System::Xml::System__Xml__DtdParser__Token::CDATA{0};
constexpr System::Xml::System__Xml__DtdParser__Token  System::Xml::System__Xml__DtdParser__Token::ID{1};
constexpr System::Xml::System__Xml__DtdParser__Token  System::Xml::System__Xml__DtdParser__Token::IDREF{2};
constexpr System::Xml::System__Xml__DtdParser__Token  System::Xml::System__Xml__DtdParser__Token::IDREFS{3};
constexpr System::Xml::System__Xml__DtdParser__Token  System::Xml::System__Xml__DtdParser__Token::ENTITY{4};
constexpr System::Xml::System__Xml__DtdParser__Token  System::Xml::System__Xml__DtdParser__Token::ENTITIES{5};
constexpr System::Xml::System__Xml__DtdParser__Token  System::Xml::System__Xml__DtdParser__Token::NMTOKEN{6};
constexpr System::Xml::System__Xml__DtdParser__Token  System::Xml::System__Xml__DtdParser__Token::NMTOKENS{7};
constexpr System::Xml::System__Xml__DtdParser__Token  System::Xml::System__Xml__DtdParser__Token::NOTATION{8};
constexpr System::Xml::System__Xml__DtdParser__Token  System::Xml::System__Xml__DtdParser__Token::None{9};
constexpr System::Xml::System__Xml__DtdParser__Token  System::Xml::System__Xml__DtdParser__Token::PERef{10};
constexpr System::Xml::System__Xml__DtdParser__Token  System::Xml::System__Xml__DtdParser__Token::AttlistDecl{11};
constexpr System::Xml::System__Xml__DtdParser__Token  System::Xml::System__Xml__DtdParser__Token::ElementDecl{12};
constexpr System::Xml::System__Xml__DtdParser__Token  System::Xml::System__Xml__DtdParser__Token::EntityDecl{13};
constexpr System::Xml::System__Xml__DtdParser__Token  System::Xml::System__Xml__DtdParser__Token::NotationDecl{14};
constexpr System::Xml::System__Xml__DtdParser__Token  System::Xml::System__Xml__DtdParser__Token::Comment{15};
constexpr System::Xml::System__Xml__DtdParser__Token  System::Xml::System__Xml__DtdParser__Token::PI{16};
constexpr System::Xml::System__Xml__DtdParser__Token  System::Xml::System__Xml__DtdParser__Token::CondSectionStart{17};
constexpr System::Xml::System__Xml__DtdParser__Token  System::Xml::System__Xml__DtdParser__Token::CondSectionEnd{18};
constexpr System::Xml::System__Xml__DtdParser__Token  System::Xml::System__Xml__DtdParser__Token::Eof{19};
constexpr System::Xml::System__Xml__DtdParser__Token  System::Xml::System__Xml__DtdParser__Token::REQUIRED{20};
constexpr System::Xml::System__Xml__DtdParser__Token  System::Xml::System__Xml__DtdParser__Token::IMPLIED{21};
constexpr System::Xml::System__Xml__DtdParser__Token  System::Xml::System__Xml__DtdParser__Token::FIXED{22};
constexpr System::Xml::System__Xml__DtdParser__Token  System::Xml::System__Xml__DtdParser__Token::QName{23};
constexpr System::Xml::System__Xml__DtdParser__Token  System::Xml::System__Xml__DtdParser__Token::Name{24};
constexpr System::Xml::System__Xml__DtdParser__Token  System::Xml::System__Xml__DtdParser__Token::Nmtoken{25};
constexpr System::Xml::System__Xml__DtdParser__Token  System::Xml::System__Xml__DtdParser__Token::Quote{26};
constexpr System::Xml::System__Xml__DtdParser__Token  System::Xml::System__Xml__DtdParser__Token::LeftParen{27};
constexpr System::Xml::System__Xml__DtdParser__Token  System::Xml::System__Xml__DtdParser__Token::RightParen{28};
constexpr System::Xml::System__Xml__DtdParser__Token  System::Xml::System__Xml__DtdParser__Token::GreaterThan{29};
constexpr System::Xml::System__Xml__DtdParser__Token  System::Xml::System__Xml__DtdParser__Token::Or{30};
constexpr System::Xml::System__Xml__DtdParser__Token  System::Xml::System__Xml__DtdParser__Token::LeftBracket{31};
constexpr System::Xml::System__Xml__DtdParser__Token  System::Xml::System__Xml__DtdParser__Token::RightBracket{32};
constexpr System::Xml::System__Xml__DtdParser__Token  System::Xml::System__Xml__DtdParser__Token::PUBLIC{33};
constexpr System::Xml::System__Xml__DtdParser__Token  System::Xml::System__Xml__DtdParser__Token::SYSTEM{34};
constexpr System::Xml::System__Xml__DtdParser__Token  System::Xml::System__Xml__DtdParser__Token::Literal{35};
constexpr System::Xml::System__Xml__DtdParser__Token  System::Xml::System__Xml__DtdParser__Token::DOCTYPE{36};
constexpr System::Xml::System__Xml__DtdParser__Token  System::Xml::System__Xml__DtdParser__Token::NData{37};
constexpr System::Xml::System__Xml__DtdParser__Token  System::Xml::System__Xml__DtdParser__Token::Percent{38};
constexpr System::Xml::System__Xml__DtdParser__Token  System::Xml::System__Xml__DtdParser__Token::Star{39};
constexpr System::Xml::System__Xml__DtdParser__Token  System::Xml::System__Xml__DtdParser__Token::QMark{40};
constexpr System::Xml::System__Xml__DtdParser__Token  System::Xml::System__Xml__DtdParser__Token::Plus{41};
constexpr System::Xml::System__Xml__DtdParser__Token  System::Xml::System__Xml__DtdParser__Token::PCDATA{42};
constexpr System::Xml::System__Xml__DtdParser__Token  System::Xml::System__Xml__DtdParser__Token::Comma{43};
constexpr System::Xml::System__Xml__DtdParser__Token  System::Xml::System__Xml__DtdParser__Token::ANY{44};
constexpr System::Xml::System__Xml__DtdParser__Token  System::Xml::System__Xml__DtdParser__Token::EMPTY{45};
constexpr System::Xml::System__Xml__DtdParser__Token  System::Xml::System__Xml__DtdParser__Token::IGNORE{46};
constexpr System::Xml::System__Xml__DtdParser__Token  System::Xml::System__Xml__DtdParser__Token::INCLUDE{47};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Xml::System__Xml__DtdParser__ScanningFunction::System__Xml__DtdParser__ScanningFunction(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Xml::System__Xml__DtdParser__ScanningFunction::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Xml::System__Xml__DtdParser__ScanningFunction::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::Xml::System__Xml__DtdParser__ScanningFunction  System::Xml::System__Xml__DtdParser__ScanningFunction::SubsetContent{0};
constexpr System::Xml::System__Xml__DtdParser__ScanningFunction  System::Xml::System__Xml__DtdParser__ScanningFunction::Name{1};
constexpr System::Xml::System__Xml__DtdParser__ScanningFunction  System::Xml::System__Xml__DtdParser__ScanningFunction::QName{2};
constexpr System::Xml::System__Xml__DtdParser__ScanningFunction  System::Xml::System__Xml__DtdParser__ScanningFunction::Nmtoken{3};
constexpr System::Xml::System__Xml__DtdParser__ScanningFunction  System::Xml::System__Xml__DtdParser__ScanningFunction::Doctype1{4};
constexpr System::Xml::System__Xml__DtdParser__ScanningFunction  System::Xml::System__Xml__DtdParser__ScanningFunction::Doctype2{5};
constexpr System::Xml::System__Xml__DtdParser__ScanningFunction  System::Xml::System__Xml__DtdParser__ScanningFunction::Element1{6};
constexpr System::Xml::System__Xml__DtdParser__ScanningFunction  System::Xml::System__Xml__DtdParser__ScanningFunction::Element2{7};
constexpr System::Xml::System__Xml__DtdParser__ScanningFunction  System::Xml::System__Xml__DtdParser__ScanningFunction::Element3{8};
constexpr System::Xml::System__Xml__DtdParser__ScanningFunction  System::Xml::System__Xml__DtdParser__ScanningFunction::Element4{9};
constexpr System::Xml::System__Xml__DtdParser__ScanningFunction  System::Xml::System__Xml__DtdParser__ScanningFunction::Element5{10};
constexpr System::Xml::System__Xml__DtdParser__ScanningFunction  System::Xml::System__Xml__DtdParser__ScanningFunction::Element6{11};
constexpr System::Xml::System__Xml__DtdParser__ScanningFunction  System::Xml::System__Xml__DtdParser__ScanningFunction::Element7{12};
constexpr System::Xml::System__Xml__DtdParser__ScanningFunction  System::Xml::System__Xml__DtdParser__ScanningFunction::Attlist1{13};
constexpr System::Xml::System__Xml__DtdParser__ScanningFunction  System::Xml::System__Xml__DtdParser__ScanningFunction::Attlist2{14};
constexpr System::Xml::System__Xml__DtdParser__ScanningFunction  System::Xml::System__Xml__DtdParser__ScanningFunction::Attlist3{15};
constexpr System::Xml::System__Xml__DtdParser__ScanningFunction  System::Xml::System__Xml__DtdParser__ScanningFunction::Attlist4{16};
constexpr System::Xml::System__Xml__DtdParser__ScanningFunction  System::Xml::System__Xml__DtdParser__ScanningFunction::Attlist5{17};
constexpr System::Xml::System__Xml__DtdParser__ScanningFunction  System::Xml::System__Xml__DtdParser__ScanningFunction::Attlist6{18};
constexpr System::Xml::System__Xml__DtdParser__ScanningFunction  System::Xml::System__Xml__DtdParser__ScanningFunction::Attlist7{19};
constexpr System::Xml::System__Xml__DtdParser__ScanningFunction  System::Xml::System__Xml__DtdParser__ScanningFunction::Entity1{20};
constexpr System::Xml::System__Xml__DtdParser__ScanningFunction  System::Xml::System__Xml__DtdParser__ScanningFunction::Entity2{21};
constexpr System::Xml::System__Xml__DtdParser__ScanningFunction  System::Xml::System__Xml__DtdParser__ScanningFunction::Entity3{22};
constexpr System::Xml::System__Xml__DtdParser__ScanningFunction  System::Xml::System__Xml__DtdParser__ScanningFunction::Notation1{23};
constexpr System::Xml::System__Xml__DtdParser__ScanningFunction  System::Xml::System__Xml__DtdParser__ScanningFunction::CondSection1{24};
constexpr System::Xml::System__Xml__DtdParser__ScanningFunction  System::Xml::System__Xml__DtdParser__ScanningFunction::CondSection2{25};
constexpr System::Xml::System__Xml__DtdParser__ScanningFunction  System::Xml::System__Xml__DtdParser__ScanningFunction::CondSection3{26};
constexpr System::Xml::System__Xml__DtdParser__ScanningFunction  System::Xml::System__Xml__DtdParser__ScanningFunction::Literal{27};
constexpr System::Xml::System__Xml__DtdParser__ScanningFunction  System::Xml::System__Xml__DtdParser__ScanningFunction::SystemId{28};
constexpr System::Xml::System__Xml__DtdParser__ScanningFunction  System::Xml::System__Xml__DtdParser__ScanningFunction::PublicId1{29};
constexpr System::Xml::System__Xml__DtdParser__ScanningFunction  System::Xml::System__Xml__DtdParser__ScanningFunction::PublicId2{30};
constexpr System::Xml::System__Xml__DtdParser__ScanningFunction  System::Xml::System__Xml__DtdParser__ScanningFunction::ClosingTag{31};
constexpr System::Xml::System__Xml__DtdParser__ScanningFunction  System::Xml::System__Xml__DtdParser__ScanningFunction::ParamEntitySpace{32};
constexpr System::Xml::System__Xml__DtdParser__ScanningFunction  System::Xml::System__Xml__DtdParser__ScanningFunction::None{33};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Xml::System__Xml__DtdParser__LiteralType::System__Xml__DtdParser__LiteralType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Xml::System__Xml__DtdParser__LiteralType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Xml::System__Xml__DtdParser__LiteralType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::Xml::System__Xml__DtdParser__LiteralType  System::Xml::System__Xml__DtdParser__LiteralType::AttributeValue{0};
constexpr System::Xml::System__Xml__DtdParser__LiteralType  System::Xml::System__Xml__DtdParser__LiteralType::EntityReplText{1};
constexpr System::Xml::System__Xml__DtdParser__LiteralType  System::Xml::System__Xml__DtdParser__LiteralType::SystemOrPublicID{2};
//  Writing Method size for method: System::Xml::System__Xml__DtdParser__UndeclaredNotation._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::System__Xml__DtdParser__UndeclaredNotation::*)(::StringW, int32_t, int32_t)>(&System::Xml::System__Xml__DtdParser__UndeclaredNotation::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x27090a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__DtdParser__UndeclaredNotation>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Xml::System__Xml__DtdParser__UndeclaredNotation::__set_name(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Xml::System__Xml__DtdParser__UndeclaredNotation::__get_name() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::System__Xml__DtdParser__UndeclaredNotation::__set_lineNo(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Xml::System__Xml__DtdParser__UndeclaredNotation::__get_lineNo() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::System__Xml__DtdParser__UndeclaredNotation::__set_linePos(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Xml::System__Xml__DtdParser__UndeclaredNotation::__get_linePos() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::System__Xml__DtdParser__UndeclaredNotation::__set_next(System::Xml::System__Xml__DtdParser__UndeclaredNotation value)  {
::cordl_internals::setInstanceField<System::Xml::System__Xml__DtdParser__UndeclaredNotation, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Xml::System__Xml__DtdParser__UndeclaredNotation>(value));
}
constexpr System::Xml::System__Xml__DtdParser__UndeclaredNotation System::Xml::System__Xml__DtdParser__UndeclaredNotation::__get_next() const {
return ::cordl_internals::getInstanceField<System::Xml::System__Xml__DtdParser__UndeclaredNotation, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Xml::System__Xml__DtdParser__UndeclaredNotation System::Xml::System__Xml__DtdParser__UndeclaredNotation::New_ctor(::StringW name, int32_t lineNo, int32_t linePos)  {
System::Xml::System__Xml__DtdParser__UndeclaredNotation o{THROW_UNLESS(::il2cpp_utils::New<System::Xml::System__Xml__DtdParser__UndeclaredNotation>(name, lineNo, linePos))};
return o;
}
 void System::Xml::System__Xml__DtdParser__UndeclaredNotation::_ctor(::StringW name, int32_t lineNo, int32_t linePos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__DtdParser__UndeclaredNotation>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, name, lineNo, linePos);
}
//  Writing Method size for method: System::Xml::System__Xml__DtdParser__ParseElementOnlyContent_LocalFrame._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::System__Xml__DtdParser__ParseElementOnlyContent_LocalFrame::*)(int32_t)>(&System::Xml::System__Xml__DtdParser__ParseElementOnlyContent_LocalFrame::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x27090e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__DtdParser__ParseElementOnlyContent_LocalFrame>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Xml::System__Xml__DtdParser__ParseElementOnlyContent_LocalFrame::__set_startParenEntityId(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Xml::System__Xml__DtdParser__ParseElementOnlyContent_LocalFrame::__get_startParenEntityId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::System__Xml__DtdParser__ParseElementOnlyContent_LocalFrame::__set_parsingSchema(System::Xml::System__Xml__DtdParser__Token value)  {
::cordl_internals::setInstanceField<System::Xml::System__Xml__DtdParser__Token, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Xml::System__Xml__DtdParser__Token>(value));
}
constexpr System::Xml::System__Xml__DtdParser__Token System::Xml::System__Xml__DtdParser__ParseElementOnlyContent_LocalFrame::__get_parsingSchema() const {
return ::cordl_internals::getInstanceField<System::Xml::System__Xml__DtdParser__Token, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Xml::System__Xml__DtdParser__ParseElementOnlyContent_LocalFrame System::Xml::System__Xml__DtdParser__ParseElementOnlyContent_LocalFrame::New_ctor(int32_t startParentEntityIdParam)  {
System::Xml::System__Xml__DtdParser__ParseElementOnlyContent_LocalFrame o{THROW_UNLESS(::il2cpp_utils::New<System::Xml::System__Xml__DtdParser__ParseElementOnlyContent_LocalFrame>(startParentEntityIdParam))};
return o;
}
 void System::Xml::System__Xml__DtdParser__ParseElementOnlyContent_LocalFrame::_ctor(int32_t startParentEntityIdParam)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__DtdParser__ParseElementOnlyContent_LocalFrame>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, startParentEntityIdParam);
}
//  Writing Method size for method: System::Xml::DtdParser._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::DtdParser::*)()>(&System::Xml::DtdParser::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x26ff1e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::DtdParser.Create
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Xml::IDtdParser (*)()>(&System::Xml::DtdParser::Create)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x26f98fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::DtdParser.Initialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::DtdParser::*)(System::Xml::IDtdParserAdapter)>(&System::Xml::DtdParser::Initialize)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x26ff26c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::IDtdParserAdapter>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::DtdParser.InitializeFreeFloatingDtd
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::DtdParser::*)(::StringW, ::StringW, ::StringW, ::StringW, ::StringW, System::Xml::IDtdParserAdapter)>(&System::Xml::DtdParser::InitializeFreeFloatingDtd)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x26ff63c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "InitializeFreeFloatingDtd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::IDtdParserAdapter>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::DtdParser.System_Xml_IDtdParser_ParseInternalDtd
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Xml::IDtdInfo (System::Xml::DtdParser::*)(System::Xml::IDtdParserAdapter, bool)>(&System::Xml::DtdParser::System_Xml_IDtdParser_ParseInternalDtd)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x26ffa88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "System.Xml.IDtdParser.ParseInternalDtd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::IDtdParserAdapter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::DtdParser.System_Xml_IDtdParser_ParseFreeFloatingDtd
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Xml::IDtdInfo (System::Xml::DtdParser::*)(::StringW, ::StringW, ::StringW, ::StringW, ::StringW, System::Xml::IDtdParserAdapter)>(&System::Xml::DtdParser::System_Xml_IDtdParser_ParseFreeFloatingDtd)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x26ffd14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "System.Xml.IDtdParser.ParseFreeFloatingDtd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::IDtdParserAdapter>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::DtdParser.get_ParsingInternalSubset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::DtdParser::*)()>(&System::Xml::DtdParser::get_ParsingInternalSubset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x26ffd38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "get_ParsingInternalSubset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::DtdParser.get_IgnoreEntityReferences
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::DtdParser::*)()>(&System::Xml::DtdParser::get_IgnoreEntityReferences)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x26ffd48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "get_IgnoreEntityReferences",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::DtdParser.get_SaveInternalSubsetValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::DtdParser::*)()>(&System::Xml::DtdParser::get_SaveInternalSubsetValue)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x26ffd58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "get_SaveInternalSubsetValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::DtdParser.get_ParsingTopLevelMarkup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::DtdParser::*)()>(&System::Xml::DtdParser::get_ParsingTopLevelMarkup)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x26ffe18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "get_ParsingTopLevelMarkup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::DtdParser.get_SupportNamespaces
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::DtdParser::*)()>(&System::Xml::DtdParser::get_SupportNamespaces)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26ffe48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "get_SupportNamespaces",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::DtdParser.get_Normalize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::DtdParser::*)()>(&System::Xml::DtdParser::get_Normalize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26ffe50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "get_Normalize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::DtdParser.Parse
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::DtdParser::*)(bool)>(&System::Xml::DtdParser::Parse)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x26ffab8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "Parse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::DtdParser.ParseInDocumentDtd
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::DtdParser::*)(bool)>(&System::Xml::DtdParser::ParseInDocumentDtd)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x26ffeac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ParseInDocumentDtd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::DtdParser.ParseFreeFloatingDtd
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::DtdParser::*)()>(&System::Xml::DtdParser::ParseFreeFloatingDtd)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x26ffe58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ParseFreeFloatingDtd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::DtdParser.ParseInternalSubset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::DtdParser::*)()>(&System::Xml::DtdParser::ParseInternalSubset)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2701360;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ParseInternalSubset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::DtdParser.ParseExternalSubset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::DtdParser::*)()>(&System::Xml::DtdParser::ParseExternalSubset)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x2701364;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ParseExternalSubset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::DtdParser.ParseSubset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::DtdParser::*)()>(&System::Xml::DtdParser::ParseSubset)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0x2701508;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ParseSubset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::DtdParser.ParseAttlistDecl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::DtdParser::*)()>(&System::Xml::DtdParser::ParseAttlistDecl)> {
  constexpr static std::size_t size = 0x5c8;
  constexpr static std::size_t addrs = 0x2701864;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ParseAttlistDecl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::DtdParser.ParseAttlistType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::DtdParser::*)(System::Xml::Schema::SchemaAttDef, System::Xml::Schema::SchemaElementDecl, bool)>(&System::Xml::DtdParser::ParseAttlistType)> {
  constexpr static std::size_t size = 0x55c;
  constexpr static std::size_t addrs = 0x2703298;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ParseAttlistType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::Schema::SchemaAttDef>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::Schema::SchemaElementDecl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::DtdParser.ParseAttlistDefault
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::DtdParser::*)(System::Xml::Schema::SchemaAttDef, bool)>(&System::Xml::DtdParser::ParseAttlistDefault)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x27037f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ParseAttlistDefault",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::Schema::SchemaAttDef>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::DtdParser.ParseElementDecl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::DtdParser::*)()>(&System::Xml::DtdParser::ParseElementDecl)> {
  constexpr static std::size_t size = 0x394;
  constexpr static std::size_t addrs = 0x2701e2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ParseElementDecl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::DtdParser.ParseElementOnlyContent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::DtdParser::*)(System::Xml::Schema::ParticleContentValidator, int32_t)>(&System::Xml::DtdParser::ParseElementOnlyContent)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x2703f74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ParseElementOnlyContent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::Schema::ParticleContentValidator>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::DtdParser.ParseHowMany
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::DtdParser::*)(System::Xml::Schema::ParticleContentValidator)>(&System::Xml::DtdParser::ParseHowMany)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x27042c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ParseHowMany",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::Schema::ParticleContentValidator>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::DtdParser.ParseElementMixedContent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::DtdParser::*)(System::Xml::Schema::ParticleContentValidator, int32_t)>(&System::Xml::DtdParser::ParseElementMixedContent)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x2703cd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ParseElementMixedContent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::Schema::ParticleContentValidator>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::DtdParser.ParseEntityDecl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::DtdParser::*)()>(&System::Xml::DtdParser::ParseEntityDecl)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0x27021c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ParseEntityDecl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::DtdParser.ParseNotationDecl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::DtdParser::*)()>(&System::Xml::DtdParser::ParseNotationDecl)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x270251c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ParseNotationDecl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::DtdParser.AddUndeclaredNotation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::DtdParser::*)(::StringW)>(&System::Xml::DtdParser::AddUndeclaredNotation)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x2703a98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "AddUndeclaredNotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::DtdParser.ParseComment
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::DtdParser::*)()>(&System::Xml::DtdParser::ParseComment)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x2702710;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ParseComment",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::DtdParser.ParsePI
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::DtdParser::*)()>(&System::Xml::DtdParser::ParsePI)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x2702954;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ParsePI",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::DtdParser.ParseCondSection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::DtdParser::*)()>(&System::Xml::DtdParser::ParseCondSection)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x2702b20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ParseCondSection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::DtdParser.ParseExternalId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::DtdParser::*)(System::Xml::System__Xml__DtdParser__Token, System::Xml::System__Xml__DtdParser__Token, ByRef<::StringW>, ByRef<::StringW>)>(&System::Xml::DtdParser::ParseExternalId)> {
  constexpr static std::size_t size = 0x514;
  constexpr static std::size_t addrs = 0x2700e44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ParseExternalId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::System__Xml__DtdParser__Token>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::System__Xml__DtdParser__Token>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::DtdParser.GetToken
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Xml::System__Xml__DtdParser__Token (System::Xml::DtdParser::*)(bool)>(&System::Xml::DtdParser::GetToken)> {
  constexpr static std::size_t size = 0x8ac;
  constexpr static std::size_t addrs = 0x27003dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "GetToken",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::DtdParser.ScanSubsetContent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Xml::System__Xml__DtdParser__Token (System::Xml::DtdParser::*)()>(&System::Xml::DtdParser::ScanSubsetContent)> {
  constexpr static std::size_t size = 0x704;
  constexpr static std::size_t addrs = 0x2704aa4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ScanSubsetContent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::DtdParser.ScanNameExpected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Xml::System__Xml__DtdParser__Token (System::Xml::DtdParser::*)()>(&System::Xml::DtdParser::ScanNameExpected)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2704a3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ScanNameExpected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::DtdParser.ScanQNameExpected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Xml::System__Xml__DtdParser__Token (System::Xml::DtdParser::*)()>(&System::Xml::DtdParser::ScanQNameExpected)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2704a60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ScanQNameExpected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::DtdParser.ScanNmtokenExpected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Xml::System__Xml__DtdParser__Token (System::Xml::DtdParser::*)()>(&System::Xml::DtdParser::ScanNmtokenExpected)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2704a84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ScanNmtokenExpected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::DtdParser.ScanDoctype1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Xml::System__Xml__DtdParser__Token (System::Xml::DtdParser::*)()>(&System::Xml::DtdParser::ScanDoctype1)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x27051a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ScanDoctype1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::DtdParser.ScanDoctype2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Xml::System__Xml__DtdParser__Token (System::Xml::DtdParser::*)()>(&System::Xml::DtdParser::ScanDoctype2)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x27052c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ScanDoctype2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::DtdParser.ScanClosingTag
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Xml::System__Xml__DtdParser__Token (System::Xml::DtdParser::*)()>(&System::Xml::DtdParser::ScanClosingTag)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x27074f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ScanClosingTag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::DtdParser.ScanElement1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Xml::System__Xml__DtdParser__Token (System::Xml::DtdParser::*)()>(&System::Xml::DtdParser::ScanElement1)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x270536c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ScanElement1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::DtdParser.ScanElement2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Xml::System__Xml__DtdParser__Token (System::Xml::DtdParser::*)()>(&System::Xml::DtdParser::ScanElement2)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x270553c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ScanElement2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::DtdParser.ScanElement3
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Xml::System__Xml__DtdParser__Token (System::Xml::DtdParser::*)()>(&System::Xml::DtdParser::ScanElement3)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x27056e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ScanElement3",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::DtdParser.ScanElement4
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Xml::System__Xml__DtdParser__Token (System::Xml::DtdParser::*)()>(&System::Xml::DtdParser::ScanElement4)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2705760;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ScanElement4",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::DtdParser.ScanElement5
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Xml::System__Xml__DtdParser__Token (System::Xml::DtdParser::*)()>(&System::Xml::DtdParser::ScanElement5)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x270582c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ScanElement5",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::DtdParser.ScanElement6
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Xml::System__Xml__DtdParser__Token (System::Xml::DtdParser::*)()>(&System::Xml::DtdParser::ScanElement6)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2705918;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ScanElement6",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::DtdParser.ScanElement7
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Xml::System__Xml__DtdParser__Token (System::Xml::DtdParser::*)()>(&System::Xml::DtdParser::ScanElement7)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x27059e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ScanElement7",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::DtdParser.ScanAttlist1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Xml::System__Xml__DtdParser__Token (System::Xml::DtdParser::*)()>(&System::Xml::DtdParser::ScanAttlist1)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2705a48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ScanAttlist1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::DtdParser.ScanAttlist2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Xml::System__Xml__DtdParser__Token (System::Xml::DtdParser::*)()>(&System::Xml::DtdParser::ScanAttlist2)> {
  constexpr static std::size_t size = 0x680;
  constexpr static std::size_t addrs = 0x2705b0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ScanAttlist2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::DtdParser.ScanAttlist3
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Xml::System__Xml__DtdParser__Token (System::Xml::DtdParser::*)()>(&System::Xml::DtdParser::ScanAttlist3)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x270618c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ScanAttlist3",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::DtdParser.ScanAttlist4
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Xml::System__Xml__DtdParser__Token (System::Xml::DtdParser::*)()>(&System::Xml::DtdParser::ScanAttlist4)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x270622c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ScanAttlist4",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::DtdParser.ScanAttlist5
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Xml::System__Xml__DtdParser__Token (System::Xml::DtdParser::*)()>(&System::Xml::DtdParser::ScanAttlist5)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x27062fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ScanAttlist5",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::DtdParser.ScanAttlist6
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Xml::System__Xml__DtdParser__Token (System::Xml::DtdParser::*)()>(&System::Xml::DtdParser::ScanAttlist6)> {
  constexpr static std::size_t size = 0x374;
  constexpr static std::size_t addrs = 0x27063cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ScanAttlist6",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::DtdParser.ScanAttlist7
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Xml::System__Xml__DtdParser__Token (System::Xml::DtdParser::*)()>(&System::Xml::DtdParser::ScanAttlist7)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2706740;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ScanAttlist7",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::DtdParser.ScanLiteral
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Xml::System__Xml__DtdParser__Token (System::Xml::DtdParser::*)(System::Xml::System__Xml__DtdParser__LiteralType)>(&System::Xml::DtdParser::ScanLiteral)> {
  constexpr static std::size_t size = 0xa88;
  constexpr static std::size_t addrs = 0x2707b3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ScanLiteral",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::System__Xml__DtdParser__LiteralType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::DtdParser.ScanEntityName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Xml::XmlQualifiedName (System::Xml::DtdParser::*)()>(&System::Xml::DtdParser::ScanEntityName)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x27085c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ScanEntityName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::DtdParser.ScanNotation1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Xml::System__Xml__DtdParser__Token (System::Xml::DtdParser::*)()>(&System::Xml::DtdParser::ScanNotation1)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x27067fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ScanNotation1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::DtdParser.ScanSystemId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Xml::System__Xml__DtdParser__Token (System::Xml::DtdParser::*)()>(&System::Xml::DtdParser::ScanSystemId)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x27068f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ScanSystemId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::DtdParser.ScanEntity1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Xml::System__Xml__DtdParser__Token (System::Xml::DtdParser::*)()>(&System::Xml::DtdParser::ScanEntity1)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2706ac4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ScanEntity1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::DtdParser.ScanEntity2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Xml::System__Xml__DtdParser__Token (System::Xml::DtdParser::*)()>(&System::Xml::DtdParser::ScanEntity2)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x2706b38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ScanEntity2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::DtdParser.ScanEntity3
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Xml::System__Xml__DtdParser__Token (System::Xml::DtdParser::*)()>(&System::Xml::DtdParser::ScanEntity3)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x2706c64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ScanEntity3",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::DtdParser.ScanPublicId1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Xml::System__Xml__DtdParser__Token (System::Xml::DtdParser::*)()>(&System::Xml::DtdParser::ScanPublicId1)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x27069a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ScanPublicId1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::DtdParser.ScanPublicId2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Xml::System__Xml__DtdParser__Token (System::Xml::DtdParser::*)()>(&System::Xml::DtdParser::ScanPublicId2)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2706a5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ScanPublicId2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::DtdParser.ScanCondSection1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Xml::System__Xml__DtdParser__Token (System::Xml::DtdParser::*)()>(&System::Xml::DtdParser::ScanCondSection1)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x2706d78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ScanCondSection1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::DtdParser.ScanCondSection2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Xml::System__Xml__DtdParser__Token (System::Xml::DtdParser::*)()>(&System::Xml::DtdParser::ScanCondSection2)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2707014;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ScanCondSection2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::DtdParser.ScanCondSection3
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Xml::System__Xml__DtdParser__Token (System::Xml::DtdParser::*)()>(&System::Xml::DtdParser::ScanCondSection3)> {
  constexpr static std::size_t size = 0x44c;
  constexpr static std::size_t addrs = 0x27070ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ScanCondSection3",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::DtdParser.ScanName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::DtdParser::*)()>(&System::Xml::DtdParser::ScanName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27077f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ScanName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::DtdParser.ScanQName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::DtdParser::*)()>(&System::Xml::DtdParser::ScanQName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2707800;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ScanQName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::DtdParser.ScanQName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::DtdParser::*)(bool)>(&System::Xml::DtdParser::ScanQName)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x2708924;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ScanQName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::DtdParser.ReadDataInName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::DtdParser::*)()>(&System::Xml::DtdParser::ReadDataInName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2708ba4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ReadDataInName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::DtdParser.ScanNmtoken
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::DtdParser::*)()>(&System::Xml::DtdParser::ScanNmtoken)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x2707808;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ScanNmtoken",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::DtdParser.EatPublicKeyword
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::DtdParser::*)()>(&System::Xml::DtdParser::EatPublicKeyword)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x2707974;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "EatPublicKeyword",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::DtdParser.EatSystemKeyword
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::DtdParser::*)()>(&System::Xml::DtdParser::EatSystemKeyword)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x2707a58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "EatSystemKeyword",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::DtdParser.GetNameQualified
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Xml::XmlQualifiedName (System::Xml::DtdParser::*)(bool)>(&System::Xml::DtdParser::GetNameQualified)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x2700cd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "GetNameQualified",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::DtdParser.GetNameString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::DtdParser::*)()>(&System::Xml::DtdParser::GetNameString)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2703a7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "GetNameString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::DtdParser.GetNmtokenString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::DtdParser::*)()>(&System::Xml::DtdParser::GetNmtokenString)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2703bf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "GetNmtokenString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::DtdParser.GetValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::DtdParser::*)()>(&System::Xml::DtdParser::GetValue)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2703c74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "GetValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::DtdParser.GetValueWithStrippedSpaces
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::DtdParser::*)()>(&System::Xml::DtdParser::GetValueWithStrippedSpaces)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2703c14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "GetValueWithStrippedSpaces",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::DtdParser.ReadData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Xml::DtdParser::*)()>(&System::Xml::DtdParser::ReadData)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x270758c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ReadData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::DtdParser.LoadParsingBuffer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::DtdParser::*)()>(&System::Xml::DtdParser::LoadParsingBuffer)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x2700260;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "LoadParsingBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::DtdParser.SaveParsingBuffer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::DtdParser::*)()>(&System::Xml::DtdParser::SaveParsingBuffer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2701358;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "SaveParsingBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::DtdParser.SaveParsingBuffer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::DtdParser::*)(int32_t)>(&System::Xml::DtdParser::SaveParsingBuffer)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x2702e20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "SaveParsingBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::DtdParser.HandleEntityReference
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::DtdParser::*)(bool, bool, bool)>(&System::Xml::DtdParser::HandleEntityReference)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2704930;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "HandleEntityReference",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::DtdParser.HandleEntityReference
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::DtdParser::*)(System::Xml::XmlQualifiedName, bool, bool, bool)>(&System::Xml::DtdParser::HandleEntityReference)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x2708e10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "HandleEntityReference",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::XmlQualifiedName>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::DtdParser.HandleEntityEnd
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::DtdParser::*)(bool)>(&System::Xml::DtdParser::HandleEntityEnd)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x2707650;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "HandleEntityEnd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::DtdParser.VerifyEntityReference
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Xml::Schema::SchemaEntity (System::Xml::DtdParser::*)(System::Xml::XmlQualifiedName, bool, bool, bool)>(&System::Xml::DtdParser::VerifyEntityReference)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x2708724;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "VerifyEntityReference",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::XmlQualifiedName>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::DtdParser.SendValidationEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::DtdParser::*)(int32_t, System::Xml::Schema::XmlSeverityType, ::StringW, ::StringW)>(&System::Xml::DtdParser::SendValidationEvent)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2702d44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "SendValidationEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::Schema::XmlSeverityType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::DtdParser.SendValidationEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::DtdParser::*)(System::Xml::Schema::XmlSeverityType, ::StringW, ::StringW)>(&System::Xml::DtdParser::SendValidationEvent)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x27039b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "SendValidationEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::Schema::XmlSeverityType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::DtdParser.SendValidationEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::DtdParser::*)(System::Xml::Schema::XmlSeverityType, System::Xml::Schema::XmlSchemaException)>(&System::Xml::DtdParser::SendValidationEvent)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x2700120;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "SendValidationEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::Schema::XmlSeverityType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::Schema::XmlSchemaException>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::DtdParser.IsAttributeValueType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::DtdParser::*)(System::Xml::System__Xml__DtdParser__Token)>(&System::Xml::DtdParser::IsAttributeValueType)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x27039a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "IsAttributeValueType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::System__Xml__DtdParser__Token>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::DtdParser.get_LineNo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Xml::DtdParser::*)()>(&System::Xml::DtdParser::get_LineNo)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2702f74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "get_LineNo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::DtdParser.get_LinePos
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Xml::DtdParser::*)()>(&System::Xml::DtdParser::get_LinePos)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2703018;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "get_LinePos",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::DtdParser.get_BaseUriStr
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::DtdParser::*)()>(&System::Xml::DtdParser::get_BaseUriStr)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x26ffffc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "get_BaseUriStr",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::DtdParser.OnUnexpectedError
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::DtdParser::*)()>(&System::Xml::DtdParser::OnUnexpectedError)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2700c88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "OnUnexpectedError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::DtdParser.Throw
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::DtdParser::*)(int32_t, ::StringW)>(&System::Xml::DtdParser::Throw)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2702ab8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "Throw",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::DtdParser.Throw
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::DtdParser::*)(int32_t, ::StringW, ::StringW)>(&System::Xml::DtdParser::Throw)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x2704334;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "Throw",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::DtdParser.Throw
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::DtdParser::*)(int32_t, ::StringW, ::ArrayW<::StringW>)>(&System::Xml::DtdParser::Throw)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x27046c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "Throw",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::DtdParser.Throw
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::DtdParser::*)(::StringW, ::StringW, int32_t, int32_t)>(&System::Xml::DtdParser::Throw)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x27030c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "Throw",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::DtdParser.ThrowInvalidChar
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::DtdParser::*)(int32_t, ::StringW, int32_t)>(&System::Xml::DtdParser::ThrowInvalidChar)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x26ffa0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ThrowInvalidChar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::DtdParser.ThrowInvalidChar
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::DtdParser::*)(::ArrayW<char16_t>, int32_t, int32_t)>(&System::Xml::DtdParser::ThrowInvalidChar)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x27048b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ThrowInvalidChar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::DtdParser.ThrowUnexpectedToken
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::DtdParser::*)(int32_t, ::StringW)>(&System::Xml::DtdParser::ThrowUnexpectedToken)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2702f6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ThrowUnexpectedToken",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::DtdParser.ThrowUnexpectedToken
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::DtdParser::*)(int32_t, ::StringW, ::StringW)>(&System::Xml::DtdParser::ThrowUnexpectedToken)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x270451c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ThrowUnexpectedToken",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::DtdParser.ParseUnexpectedToken
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::DtdParser::*)(int32_t)>(&System::Xml::DtdParser::ParseUnexpectedToken)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2704980;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ParseUnexpectedToken",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::DtdParser.StripSpaces
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&System::Xml::DtdParser::StripSpaces)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x2708be8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "StripSpaces",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Xml::IDtdParser
constexpr  System::Xml::DtdParser::operator System::Xml::IDtdParser() const noexcept {
return System::Xml::IDtdParser(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::DtdParser::__set_readerAdapter(System::Xml::IDtdParserAdapter value)  {
::cordl_internals::setInstanceField<System::Xml::IDtdParserAdapter, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Xml::IDtdParserAdapter>(value));
}
constexpr System::Xml::IDtdParserAdapter System::Xml::DtdParser::__get_readerAdapter() const {
return ::cordl_internals::getInstanceField<System::Xml::IDtdParserAdapter, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::DtdParser::__set_readerAdapterWithValidation(System::Xml::IDtdParserAdapterWithValidation value)  {
::cordl_internals::setInstanceField<System::Xml::IDtdParserAdapterWithValidation, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Xml::IDtdParserAdapterWithValidation>(value));
}
constexpr System::Xml::IDtdParserAdapterWithValidation System::Xml::DtdParser::__get_readerAdapterWithValidation() const {
return ::cordl_internals::getInstanceField<System::Xml::IDtdParserAdapterWithValidation, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::DtdParser::__set_nameTable(System::Xml::XmlNameTable value)  {
::cordl_internals::setInstanceField<System::Xml::XmlNameTable, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Xml::XmlNameTable>(value));
}
constexpr System::Xml::XmlNameTable System::Xml::DtdParser::__get_nameTable() const {
return ::cordl_internals::getInstanceField<System::Xml::XmlNameTable, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::DtdParser::__set_schemaInfo(System::Xml::Schema::SchemaInfo value)  {
::cordl_internals::setInstanceField<System::Xml::Schema::SchemaInfo, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Xml::Schema::SchemaInfo>(value));
}
constexpr System::Xml::Schema::SchemaInfo System::Xml::DtdParser::__get_schemaInfo() const {
return ::cordl_internals::getInstanceField<System::Xml::Schema::SchemaInfo, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::DtdParser::__set_xmlCharType(System::Xml::XmlCharType value)  {
::cordl_internals::setInstanceField<System::Xml::XmlCharType, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Xml::XmlCharType>(value));
}
constexpr System::Xml::XmlCharType System::Xml::DtdParser::__get_xmlCharType() const {
return ::cordl_internals::getInstanceField<System::Xml::XmlCharType, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::DtdParser::__set_systemId(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Xml::DtdParser::__get_systemId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::DtdParser::__set_publicId(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Xml::DtdParser::__get_publicId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::DtdParser::__set_normalize(bool value)  {
::cordl_internals::setInstanceField<bool, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Xml::DtdParser::__get_normalize() const {
return ::cordl_internals::getInstanceField<bool, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::DtdParser::__set_validate(bool value)  {
::cordl_internals::setInstanceField<bool, 0x49>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Xml::DtdParser::__get_validate() const {
return ::cordl_internals::getInstanceField<bool, 0x49>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::DtdParser::__set_supportNamespaces(bool value)  {
::cordl_internals::setInstanceField<bool, 0x4a>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Xml::DtdParser::__get_supportNamespaces() const {
return ::cordl_internals::getInstanceField<bool, 0x4a>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::DtdParser::__set_v1Compat(bool value)  {
::cordl_internals::setInstanceField<bool, 0x4b>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Xml::DtdParser::__get_v1Compat() const {
return ::cordl_internals::getInstanceField<bool, 0x4b>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::DtdParser::__set_chars(::ArrayW<char16_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<char16_t>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<char16_t>>(value));
}
constexpr ::ArrayW<char16_t> System::Xml::DtdParser::__get_chars() const {
return ::cordl_internals::getInstanceField<::ArrayW<char16_t>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::DtdParser::__set_charsUsed(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Xml::DtdParser::__get_charsUsed() const {
return ::cordl_internals::getInstanceField<int32_t, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::DtdParser::__set_curPos(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x5c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Xml::DtdParser::__get_curPos() const {
return ::cordl_internals::getInstanceField<int32_t, 0x5c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::DtdParser::__set_scanningFunction(System::Xml::System__Xml__DtdParser__ScanningFunction value)  {
::cordl_internals::setInstanceField<System::Xml::System__Xml__DtdParser__ScanningFunction, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Xml::System__Xml__DtdParser__ScanningFunction>(value));
}
constexpr System::Xml::System__Xml__DtdParser__ScanningFunction System::Xml::DtdParser::__get_scanningFunction() const {
return ::cordl_internals::getInstanceField<System::Xml::System__Xml__DtdParser__ScanningFunction, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::DtdParser::__set_nextScaningFunction(System::Xml::System__Xml__DtdParser__ScanningFunction value)  {
::cordl_internals::setInstanceField<System::Xml::System__Xml__DtdParser__ScanningFunction, 0x64>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Xml::System__Xml__DtdParser__ScanningFunction>(value));
}
constexpr System::Xml::System__Xml__DtdParser__ScanningFunction System::Xml::DtdParser::__get_nextScaningFunction() const {
return ::cordl_internals::getInstanceField<System::Xml::System__Xml__DtdParser__ScanningFunction, 0x64>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::DtdParser::__set_savedScanningFunction(System::Xml::System__Xml__DtdParser__ScanningFunction value)  {
::cordl_internals::setInstanceField<System::Xml::System__Xml__DtdParser__ScanningFunction, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Xml::System__Xml__DtdParser__ScanningFunction>(value));
}
constexpr System::Xml::System__Xml__DtdParser__ScanningFunction System::Xml::DtdParser::__get_savedScanningFunction() const {
return ::cordl_internals::getInstanceField<System::Xml::System__Xml__DtdParser__ScanningFunction, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::DtdParser::__set_whitespaceSeen(bool value)  {
::cordl_internals::setInstanceField<bool, 0x6c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Xml::DtdParser::__get_whitespaceSeen() const {
return ::cordl_internals::getInstanceField<bool, 0x6c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::DtdParser::__set_tokenStartPos(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Xml::DtdParser::__get_tokenStartPos() const {
return ::cordl_internals::getInstanceField<int32_t, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::DtdParser::__set_colonPos(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x74>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Xml::DtdParser::__get_colonPos() const {
return ::cordl_internals::getInstanceField<int32_t, 0x74>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::DtdParser::__set_internalSubsetValueSb(System::Text::StringBuilder value)  {
::cordl_internals::setInstanceField<System::Text::StringBuilder, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Text::StringBuilder>(value));
}
constexpr System::Text::StringBuilder System::Xml::DtdParser::__get_internalSubsetValueSb() const {
return ::cordl_internals::getInstanceField<System::Text::StringBuilder, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::DtdParser::__set_externalEntitiesDepth(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Xml::DtdParser::__get_externalEntitiesDepth() const {
return ::cordl_internals::getInstanceField<int32_t, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::DtdParser::__set_currentEntityId(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x84>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Xml::DtdParser::__get_currentEntityId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x84>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::DtdParser::__set_freeFloatingDtd(bool value)  {
::cordl_internals::setInstanceField<bool, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Xml::DtdParser::__get_freeFloatingDtd() const {
return ::cordl_internals::getInstanceField<bool, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::DtdParser::__set_hasFreeFloatingInternalSubset(bool value)  {
::cordl_internals::setInstanceField<bool, 0x89>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Xml::DtdParser::__get_hasFreeFloatingInternalSubset() const {
return ::cordl_internals::getInstanceField<bool, 0x89>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::DtdParser::__set_stringBuilder(System::Text::StringBuilder value)  {
::cordl_internals::setInstanceField<System::Text::StringBuilder, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Text::StringBuilder>(value));
}
constexpr System::Text::StringBuilder System::Xml::DtdParser::__get_stringBuilder() const {
return ::cordl_internals::getInstanceField<System::Text::StringBuilder, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::DtdParser::__set_condSectionDepth(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Xml::DtdParser::__get_condSectionDepth() const {
return ::cordl_internals::getInstanceField<int32_t, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::DtdParser::__set_literalLineInfo(System::Xml::LineInfo value)  {
::cordl_internals::setInstanceField<System::Xml::LineInfo, 0x9c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Xml::LineInfo>(value));
}
constexpr System::Xml::LineInfo System::Xml::DtdParser::__get_literalLineInfo() const {
return ::cordl_internals::getInstanceField<System::Xml::LineInfo, 0x9c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::DtdParser::__set_literalQuoteChar(char16_t value)  {
::cordl_internals::setInstanceField<char16_t, 0xa4>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<char16_t>(value));
}
constexpr char16_t System::Xml::DtdParser::__get_literalQuoteChar() const {
return ::cordl_internals::getInstanceField<char16_t, 0xa4>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::DtdParser::__set_documentBaseUri(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Xml::DtdParser::__get_documentBaseUri() const {
return ::cordl_internals::getInstanceField<::StringW, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::DtdParser::__set_externalDtdBaseUri(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Xml::DtdParser::__get_externalDtdBaseUri() const {
return ::cordl_internals::getInstanceField<::StringW, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::DtdParser::__set_undeclaredNotations(System::Collections::Generic::Dictionary_2<::StringW,System::Xml::System__Xml__DtdParser__UndeclaredNotation> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Dictionary_2<::StringW,System::Xml::System__Xml__DtdParser__UndeclaredNotation>, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::Dictionary_2<::StringW,System::Xml::System__Xml__DtdParser__UndeclaredNotation>>(value));
}
constexpr System::Collections::Generic::Dictionary_2<::StringW,System::Xml::System__Xml__DtdParser__UndeclaredNotation> System::Xml::DtdParser::__get_undeclaredNotations() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Dictionary_2<::StringW,System::Xml::System__Xml__DtdParser__UndeclaredNotation>, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::DtdParser::__set_condSectionEntityIds(::ArrayW<int32_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t>, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<int32_t>>(value));
}
constexpr ::ArrayW<int32_t> System::Xml::DtdParser::__get_condSectionEntityIds() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t>, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Xml::DtdParser System::Xml::DtdParser::New_ctor()  {
System::Xml::DtdParser o{THROW_UNLESS(::il2cpp_utils::New<System::Xml::DtdParser>())};
return o;
}
 void System::Xml::DtdParser::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Xml::IDtdParser System::Xml::DtdParser::Create()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Xml::IDtdParser, false>(nullptr, ___internal_method);
}
 void System::Xml::DtdParser::Initialize(System::Xml::IDtdParserAdapter readerAdapter)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::IDtdParserAdapter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, readerAdapter);
}
 void System::Xml::DtdParser::InitializeFreeFloatingDtd(::StringW baseUri, ::StringW docTypeName, ::StringW publicId, ::StringW systemId, ::StringW internalSubset, System::Xml::IDtdParserAdapter adapter)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "InitializeFreeFloatingDtd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::IDtdParserAdapter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, baseUri, docTypeName, publicId, systemId, internalSubset, adapter);
}
 System::Xml::IDtdInfo System::Xml::DtdParser::System_Xml_IDtdParser_ParseInternalDtd(System::Xml::IDtdParserAdapter adapter, bool saveInternalSubset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "System.Xml.IDtdParser.ParseInternalDtd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::IDtdParserAdapter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Xml::IDtdInfo, false>(const_cast<void*>(instance), ___internal_method, adapter, saveInternalSubset);
}
 System::Xml::IDtdInfo System::Xml::DtdParser::System_Xml_IDtdParser_ParseFreeFloatingDtd(::StringW baseUri, ::StringW docTypeName, ::StringW publicId, ::StringW systemId, ::StringW internalSubset, System::Xml::IDtdParserAdapter adapter)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "System.Xml.IDtdParser.ParseFreeFloatingDtd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::IDtdParserAdapter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Xml::IDtdInfo, false>(const_cast<void*>(instance), ___internal_method, baseUri, docTypeName, publicId, systemId, internalSubset, adapter);
}
 bool System::Xml::DtdParser::get_ParsingInternalSubset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "get_ParsingInternalSubset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Xml::DtdParser::get_IgnoreEntityReferences()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "get_IgnoreEntityReferences",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Xml::DtdParser::get_SaveInternalSubsetValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "get_SaveInternalSubsetValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Xml::DtdParser::get_ParsingTopLevelMarkup()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "get_ParsingTopLevelMarkup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Xml::DtdParser::get_SupportNamespaces()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "get_SupportNamespaces",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Xml::DtdParser::get_Normalize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "get_Normalize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Xml::DtdParser::Parse(bool saveInternalSubset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "Parse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, saveInternalSubset);
}
 void System::Xml::DtdParser::ParseInDocumentDtd(bool saveInternalSubset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ParseInDocumentDtd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, saveInternalSubset);
}
 void System::Xml::DtdParser::ParseFreeFloatingDtd()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ParseFreeFloatingDtd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Xml::DtdParser::ParseInternalSubset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ParseInternalSubset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Xml::DtdParser::ParseExternalSubset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ParseExternalSubset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Xml::DtdParser::ParseSubset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ParseSubset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Xml::DtdParser::ParseAttlistDecl()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ParseAttlistDecl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Xml::DtdParser::ParseAttlistType(System::Xml::Schema::SchemaAttDef attrDef, System::Xml::Schema::SchemaElementDecl elementDecl, bool ignoreErrors)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ParseAttlistType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::Schema::SchemaAttDef>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::Schema::SchemaElementDecl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, attrDef, elementDecl, ignoreErrors);
}
 void System::Xml::DtdParser::ParseAttlistDefault(System::Xml::Schema::SchemaAttDef attrDef, bool ignoreErrors)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ParseAttlistDefault",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::Schema::SchemaAttDef>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, attrDef, ignoreErrors);
}
 void System::Xml::DtdParser::ParseElementDecl()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ParseElementDecl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Xml::DtdParser::ParseElementOnlyContent(System::Xml::Schema::ParticleContentValidator pcv, int32_t startParenEntityId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ParseElementOnlyContent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::Schema::ParticleContentValidator>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, pcv, startParenEntityId);
}
 void System::Xml::DtdParser::ParseHowMany(System::Xml::Schema::ParticleContentValidator pcv)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ParseHowMany",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::Schema::ParticleContentValidator>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, pcv);
}
 void System::Xml::DtdParser::ParseElementMixedContent(System::Xml::Schema::ParticleContentValidator pcv, int32_t startParenEntityId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ParseElementMixedContent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::Schema::ParticleContentValidator>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, pcv, startParenEntityId);
}
 void System::Xml::DtdParser::ParseEntityDecl()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ParseEntityDecl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Xml::DtdParser::ParseNotationDecl()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ParseNotationDecl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Xml::DtdParser::AddUndeclaredNotation(::StringW notationName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "AddUndeclaredNotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, notationName);
}
 void System::Xml::DtdParser::ParseComment()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ParseComment",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Xml::DtdParser::ParsePI()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ParsePI",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Xml::DtdParser::ParseCondSection()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ParseCondSection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Xml::DtdParser::ParseExternalId(System::Xml::System__Xml__DtdParser__Token idTokenType, System::Xml::System__Xml__DtdParser__Token declType, ByRef<::StringW> publicId, ByRef<::StringW> systemId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ParseExternalId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::System__Xml__DtdParser__Token>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::System__Xml__DtdParser__Token>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, idTokenType, declType, publicId, systemId);
}
 System::Xml::System__Xml__DtdParser__Token System::Xml::DtdParser::GetToken(bool needWhiteSpace)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "GetToken",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Xml::System__Xml__DtdParser__Token, false>(const_cast<void*>(instance), ___internal_method, needWhiteSpace);
}
 System::Xml::System__Xml__DtdParser__Token System::Xml::DtdParser::ScanSubsetContent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ScanSubsetContent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Xml::System__Xml__DtdParser__Token, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Xml::System__Xml__DtdParser__Token System::Xml::DtdParser::ScanNameExpected()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ScanNameExpected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Xml::System__Xml__DtdParser__Token, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Xml::System__Xml__DtdParser__Token System::Xml::DtdParser::ScanQNameExpected()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ScanQNameExpected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Xml::System__Xml__DtdParser__Token, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Xml::System__Xml__DtdParser__Token System::Xml::DtdParser::ScanNmtokenExpected()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ScanNmtokenExpected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Xml::System__Xml__DtdParser__Token, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Xml::System__Xml__DtdParser__Token System::Xml::DtdParser::ScanDoctype1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ScanDoctype1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Xml::System__Xml__DtdParser__Token, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Xml::System__Xml__DtdParser__Token System::Xml::DtdParser::ScanDoctype2()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ScanDoctype2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Xml::System__Xml__DtdParser__Token, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Xml::System__Xml__DtdParser__Token System::Xml::DtdParser::ScanClosingTag()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ScanClosingTag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Xml::System__Xml__DtdParser__Token, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Xml::System__Xml__DtdParser__Token System::Xml::DtdParser::ScanElement1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ScanElement1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Xml::System__Xml__DtdParser__Token, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Xml::System__Xml__DtdParser__Token System::Xml::DtdParser::ScanElement2()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ScanElement2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Xml::System__Xml__DtdParser__Token, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Xml::System__Xml__DtdParser__Token System::Xml::DtdParser::ScanElement3()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ScanElement3",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Xml::System__Xml__DtdParser__Token, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Xml::System__Xml__DtdParser__Token System::Xml::DtdParser::ScanElement4()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ScanElement4",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Xml::System__Xml__DtdParser__Token, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Xml::System__Xml__DtdParser__Token System::Xml::DtdParser::ScanElement5()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ScanElement5",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Xml::System__Xml__DtdParser__Token, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Xml::System__Xml__DtdParser__Token System::Xml::DtdParser::ScanElement6()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ScanElement6",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Xml::System__Xml__DtdParser__Token, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Xml::System__Xml__DtdParser__Token System::Xml::DtdParser::ScanElement7()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ScanElement7",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Xml::System__Xml__DtdParser__Token, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Xml::System__Xml__DtdParser__Token System::Xml::DtdParser::ScanAttlist1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ScanAttlist1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Xml::System__Xml__DtdParser__Token, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Xml::System__Xml__DtdParser__Token System::Xml::DtdParser::ScanAttlist2()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ScanAttlist2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Xml::System__Xml__DtdParser__Token, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Xml::System__Xml__DtdParser__Token System::Xml::DtdParser::ScanAttlist3()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ScanAttlist3",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Xml::System__Xml__DtdParser__Token, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Xml::System__Xml__DtdParser__Token System::Xml::DtdParser::ScanAttlist4()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ScanAttlist4",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Xml::System__Xml__DtdParser__Token, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Xml::System__Xml__DtdParser__Token System::Xml::DtdParser::ScanAttlist5()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ScanAttlist5",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Xml::System__Xml__DtdParser__Token, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Xml::System__Xml__DtdParser__Token System::Xml::DtdParser::ScanAttlist6()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ScanAttlist6",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Xml::System__Xml__DtdParser__Token, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Xml::System__Xml__DtdParser__Token System::Xml::DtdParser::ScanAttlist7()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ScanAttlist7",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Xml::System__Xml__DtdParser__Token, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Xml::System__Xml__DtdParser__Token System::Xml::DtdParser::ScanLiteral(System::Xml::System__Xml__DtdParser__LiteralType literalType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ScanLiteral",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::System__Xml__DtdParser__LiteralType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Xml::System__Xml__DtdParser__Token, false>(const_cast<void*>(instance), ___internal_method, literalType);
}
 System::Xml::XmlQualifiedName System::Xml::DtdParser::ScanEntityName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ScanEntityName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Xml::XmlQualifiedName, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Xml::System__Xml__DtdParser__Token System::Xml::DtdParser::ScanNotation1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ScanNotation1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Xml::System__Xml__DtdParser__Token, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Xml::System__Xml__DtdParser__Token System::Xml::DtdParser::ScanSystemId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ScanSystemId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Xml::System__Xml__DtdParser__Token, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Xml::System__Xml__DtdParser__Token System::Xml::DtdParser::ScanEntity1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ScanEntity1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Xml::System__Xml__DtdParser__Token, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Xml::System__Xml__DtdParser__Token System::Xml::DtdParser::ScanEntity2()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ScanEntity2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Xml::System__Xml__DtdParser__Token, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Xml::System__Xml__DtdParser__Token System::Xml::DtdParser::ScanEntity3()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ScanEntity3",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Xml::System__Xml__DtdParser__Token, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Xml::System__Xml__DtdParser__Token System::Xml::DtdParser::ScanPublicId1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ScanPublicId1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Xml::System__Xml__DtdParser__Token, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Xml::System__Xml__DtdParser__Token System::Xml::DtdParser::ScanPublicId2()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ScanPublicId2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Xml::System__Xml__DtdParser__Token, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Xml::System__Xml__DtdParser__Token System::Xml::DtdParser::ScanCondSection1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ScanCondSection1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Xml::System__Xml__DtdParser__Token, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Xml::System__Xml__DtdParser__Token System::Xml::DtdParser::ScanCondSection2()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ScanCondSection2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Xml::System__Xml__DtdParser__Token, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Xml::System__Xml__DtdParser__Token System::Xml::DtdParser::ScanCondSection3()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ScanCondSection3",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Xml::System__Xml__DtdParser__Token, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Xml::DtdParser::ScanName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ScanName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Xml::DtdParser::ScanQName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ScanQName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Xml::DtdParser::ScanQName(bool isQName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ScanQName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, isQName);
}
 bool System::Xml::DtdParser::ReadDataInName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ReadDataInName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Xml::DtdParser::ScanNmtoken()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ScanNmtoken",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Xml::DtdParser::EatPublicKeyword()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "EatPublicKeyword",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Xml::DtdParser::EatSystemKeyword()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "EatSystemKeyword",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Xml::XmlQualifiedName System::Xml::DtdParser::GetNameQualified(bool canHavePrefix)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "GetNameQualified",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Xml::XmlQualifiedName, false>(const_cast<void*>(instance), ___internal_method, canHavePrefix);
}
 ::StringW System::Xml::DtdParser::GetNameString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "GetNameString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Xml::DtdParser::GetNmtokenString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "GetNmtokenString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Xml::DtdParser::GetValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "GetValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Xml::DtdParser::GetValueWithStrippedSpaces()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "GetValueWithStrippedSpaces",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::Xml::DtdParser::ReadData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ReadData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Xml::DtdParser::LoadParsingBuffer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "LoadParsingBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Xml::DtdParser::SaveParsingBuffer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "SaveParsingBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Xml::DtdParser::SaveParsingBuffer(int32_t internalSubsetValueEndPos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "SaveParsingBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, internalSubsetValueEndPos);
}
 bool System::Xml::DtdParser::HandleEntityReference(bool paramEntity, bool inLiteral, bool inAttribute)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "HandleEntityReference",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, paramEntity, inLiteral, inAttribute);
}
 bool System::Xml::DtdParser::HandleEntityReference(System::Xml::XmlQualifiedName entityName, bool paramEntity, bool inLiteral, bool inAttribute)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "HandleEntityReference",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::XmlQualifiedName>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, entityName, paramEntity, inLiteral, inAttribute);
}
 bool System::Xml::DtdParser::HandleEntityEnd(bool inLiteral)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "HandleEntityEnd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, inLiteral);
}
 System::Xml::Schema::SchemaEntity System::Xml::DtdParser::VerifyEntityReference(System::Xml::XmlQualifiedName entityName, bool paramEntity, bool mustBeDeclared, bool inAttribute)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "VerifyEntityReference",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::XmlQualifiedName>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Xml::Schema::SchemaEntity, false>(const_cast<void*>(instance), ___internal_method, entityName, paramEntity, mustBeDeclared, inAttribute);
}
 void System::Xml::DtdParser::SendValidationEvent(int32_t pos, System::Xml::Schema::XmlSeverityType severity, ::StringW code, ::StringW arg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "SendValidationEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::Schema::XmlSeverityType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, pos, severity, code, arg);
}
 void System::Xml::DtdParser::SendValidationEvent(System::Xml::Schema::XmlSeverityType severity, ::StringW code, ::StringW arg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "SendValidationEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::Schema::XmlSeverityType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, severity, code, arg);
}
 void System::Xml::DtdParser::SendValidationEvent(System::Xml::Schema::XmlSeverityType severity, System::Xml::Schema::XmlSchemaException e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "SendValidationEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::Schema::XmlSeverityType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::Schema::XmlSchemaException>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, severity, e);
}
 bool System::Xml::DtdParser::IsAttributeValueType(System::Xml::System__Xml__DtdParser__Token token)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "IsAttributeValueType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::System__Xml__DtdParser__Token>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, token);
}
 int32_t System::Xml::DtdParser::get_LineNo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "get_LineNo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::Xml::DtdParser::get_LinePos()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "get_LinePos",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Xml::DtdParser::get_BaseUriStr()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "get_BaseUriStr",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Xml::DtdParser::OnUnexpectedError()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "OnUnexpectedError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Xml::DtdParser::Throw(int32_t curPos, ::StringW res)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "Throw",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, curPos, res);
}
 void System::Xml::DtdParser::Throw(int32_t curPos, ::StringW res, ::StringW arg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "Throw",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, curPos, res, arg);
}
 void System::Xml::DtdParser::Throw(int32_t curPos, ::StringW res, ::ArrayW<::StringW> args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "Throw",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, curPos, res, args);
}
 void System::Xml::DtdParser::Throw(::StringW res, ::StringW arg, int32_t lineNo, int32_t linePos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "Throw",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, res, arg, lineNo, linePos);
}
 void System::Xml::DtdParser::ThrowInvalidChar(int32_t pos, ::StringW data, int32_t invCharPos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ThrowInvalidChar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, pos, data, invCharPos);
}
 void System::Xml::DtdParser::ThrowInvalidChar(::ArrayW<char16_t> data, int32_t length, int32_t invCharPos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ThrowInvalidChar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, data, length, invCharPos);
}
 void System::Xml::DtdParser::ThrowUnexpectedToken(int32_t pos, ::StringW expectedToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ThrowUnexpectedToken",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, pos, expectedToken);
}
 void System::Xml::DtdParser::ThrowUnexpectedToken(int32_t pos, ::StringW expectedToken1, ::StringW expectedToken2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ThrowUnexpectedToken",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, pos, expectedToken1, expectedToken2);
}
 ::StringW System::Xml::DtdParser::ParseUnexpectedToken(int32_t startPos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "ParseUnexpectedToken",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, startPos);
}
 ::StringW System::Xml::DtdParser::StripSpaces(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::DtdParser>::get(),
                            "StripSpaces",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, value);
}
