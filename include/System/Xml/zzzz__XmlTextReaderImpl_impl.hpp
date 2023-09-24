#pragma once
#include "System/Xml/zzzz__XmlNamespaceManager_impl.hpp"
#include "System/Xml/zzzz__XmlReader_impl.hpp"
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
#include "System/Xml/zzzz__XmlTextReaderImpl_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "System/Xml/zzzz__XmlNameTable_def.hpp"
#include "System/Xml/zzzz__IXmlNamespaceResolver_def.hpp"
#include "System/Xml/zzzz__IDtdEntityInfo_def.hpp"
#include "System/Xml/zzzz__IDtdParserAdapter_def.hpp"
#include "System/Xml/zzzz__IDtdParserAdapterWithValidation_def.hpp"
#include "System/zzzz__Uri_def.hpp"
#include "System/Xml/zzzz__IValidationEventHandling_def.hpp"
#include "System/Xml/zzzz__IDtdParserAdapterV1_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/Xml/zzzz__LineInfo_def.hpp"
#include "System/Xml/zzzz__XmlParserContext_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/IO/zzzz__TextReader_def.hpp"
#include "System/Xml/zzzz__XmlResolver_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IComparable_def.hpp"
#include "System/Xml/zzzz__XmlNodeType_def.hpp"
#include "System/Xml/zzzz__IDtdDefaultAttributeInfo_def.hpp"
#include "System/Xml/zzzz__XmlSpace_def.hpp"
#include "System/Xml/zzzz__XmlTextReaderImpl_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Xml/zzzz__XmlReader_def.hpp"
#include "System/zzzz__Tuple_4_def.hpp"
#include "System/Xml/zzzz__WhitespaceHandling_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Xml/zzzz__DtdProcessing_def.hpp"
#include "System/Xml/zzzz__ReadState_def.hpp"
#include "System/Xml/zzzz__XmlNamespaceManager_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSeverityType_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaException_def.hpp"
#include "System/Xml/zzzz__XmlReaderSettings_def.hpp"
#include "System/Xml/zzzz__XmlCharType_def.hpp"
#include "System/Xml/zzzz__EntityHandling_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "System/Xml/zzzz__IDtdInfo_def.hpp"
#include "System/Xml/zzzz__IncrementalReadDecoder_def.hpp"
#include "System/Text/zzzz__Decoder_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Xml::System__Xml__XmlTextReaderImpl__ParsingFunction::System__Xml__XmlTextReaderImpl__ParsingFunction(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Xml::System__Xml__XmlTextReaderImpl__ParsingFunction::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Xml::System__Xml__XmlTextReaderImpl__ParsingFunction::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::Xml::System__Xml__XmlTextReaderImpl__ParsingFunction  System::Xml::System__Xml__XmlTextReaderImpl__ParsingFunction::ElementContent{0};
constexpr System::Xml::System__Xml__XmlTextReaderImpl__ParsingFunction  System::Xml::System__Xml__XmlTextReaderImpl__ParsingFunction::NoData{1};
constexpr System::Xml::System__Xml__XmlTextReaderImpl__ParsingFunction  System::Xml::System__Xml__XmlTextReaderImpl__ParsingFunction::OpenUrl{2};
constexpr System::Xml::System__Xml__XmlTextReaderImpl__ParsingFunction  System::Xml::System__Xml__XmlTextReaderImpl__ParsingFunction::SwitchToInteractive{3};
constexpr System::Xml::System__Xml__XmlTextReaderImpl__ParsingFunction  System::Xml::System__Xml__XmlTextReaderImpl__ParsingFunction::SwitchToInteractiveXmlDecl{4};
constexpr System::Xml::System__Xml__XmlTextReaderImpl__ParsingFunction  System::Xml::System__Xml__XmlTextReaderImpl__ParsingFunction::DocumentContent{5};
constexpr System::Xml::System__Xml__XmlTextReaderImpl__ParsingFunction  System::Xml::System__Xml__XmlTextReaderImpl__ParsingFunction::MoveToElementContent{6};
constexpr System::Xml::System__Xml__XmlTextReaderImpl__ParsingFunction  System::Xml::System__Xml__XmlTextReaderImpl__ParsingFunction::PopElementContext{7};
constexpr System::Xml::System__Xml__XmlTextReaderImpl__ParsingFunction  System::Xml::System__Xml__XmlTextReaderImpl__ParsingFunction::PopEmptyElementContext{8};
constexpr System::Xml::System__Xml__XmlTextReaderImpl__ParsingFunction  System::Xml::System__Xml__XmlTextReaderImpl__ParsingFunction::ResetAttributesRootLevel{9};
constexpr System::Xml::System__Xml__XmlTextReaderImpl__ParsingFunction  System::Xml::System__Xml__XmlTextReaderImpl__ParsingFunction::Error{10};
constexpr System::Xml::System__Xml__XmlTextReaderImpl__ParsingFunction  System::Xml::System__Xml__XmlTextReaderImpl__ParsingFunction::Eof{11};
constexpr System::Xml::System__Xml__XmlTextReaderImpl__ParsingFunction  System::Xml::System__Xml__XmlTextReaderImpl__ParsingFunction::ReaderClosed{12};
constexpr System::Xml::System__Xml__XmlTextReaderImpl__ParsingFunction  System::Xml::System__Xml__XmlTextReaderImpl__ParsingFunction::EntityReference{13};
constexpr System::Xml::System__Xml__XmlTextReaderImpl__ParsingFunction  System::Xml::System__Xml__XmlTextReaderImpl__ParsingFunction::InIncrementalRead{14};
constexpr System::Xml::System__Xml__XmlTextReaderImpl__ParsingFunction  System::Xml::System__Xml__XmlTextReaderImpl__ParsingFunction::FragmentAttribute{15};
constexpr System::Xml::System__Xml__XmlTextReaderImpl__ParsingFunction  System::Xml::System__Xml__XmlTextReaderImpl__ParsingFunction::ReportEndEntity{16};
constexpr System::Xml::System__Xml__XmlTextReaderImpl__ParsingFunction  System::Xml::System__Xml__XmlTextReaderImpl__ParsingFunction::AfterResolveEntityInContent{17};
constexpr System::Xml::System__Xml__XmlTextReaderImpl__ParsingFunction  System::Xml::System__Xml__XmlTextReaderImpl__ParsingFunction::AfterResolveEmptyEntityInContent{18};
constexpr System::Xml::System__Xml__XmlTextReaderImpl__ParsingFunction  System::Xml::System__Xml__XmlTextReaderImpl__ParsingFunction::XmlDeclarationFragment{19};
constexpr System::Xml::System__Xml__XmlTextReaderImpl__ParsingFunction  System::Xml::System__Xml__XmlTextReaderImpl__ParsingFunction::GoToEof{20};
constexpr System::Xml::System__Xml__XmlTextReaderImpl__ParsingFunction  System::Xml::System__Xml__XmlTextReaderImpl__ParsingFunction::PartialTextValue{21};
constexpr System::Xml::System__Xml__XmlTextReaderImpl__ParsingFunction  System::Xml::System__Xml__XmlTextReaderImpl__ParsingFunction::InReadAttributeValue{22};
constexpr System::Xml::System__Xml__XmlTextReaderImpl__ParsingFunction  System::Xml::System__Xml__XmlTextReaderImpl__ParsingFunction::InReadValueChunk{23};
constexpr System::Xml::System__Xml__XmlTextReaderImpl__ParsingFunction  System::Xml::System__Xml__XmlTextReaderImpl__ParsingFunction::InReadContentAsBinary{24};
constexpr System::Xml::System__Xml__XmlTextReaderImpl__ParsingFunction  System::Xml::System__Xml__XmlTextReaderImpl__ParsingFunction::InReadElementContentAsBinary{25};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Xml::System__Xml__XmlTextReaderImpl__ParsingMode::System__Xml__XmlTextReaderImpl__ParsingMode(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Xml::System__Xml__XmlTextReaderImpl__ParsingMode::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Xml::System__Xml__XmlTextReaderImpl__ParsingMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::Xml::System__Xml__XmlTextReaderImpl__ParsingMode  System::Xml::System__Xml__XmlTextReaderImpl__ParsingMode::Full{0};
constexpr System::Xml::System__Xml__XmlTextReaderImpl__ParsingMode  System::Xml::System__Xml__XmlTextReaderImpl__ParsingMode::SkipNode{1};
constexpr System::Xml::System__Xml__XmlTextReaderImpl__ParsingMode  System::Xml::System__Xml__XmlTextReaderImpl__ParsingMode::SkipContent{2};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Xml::System__Xml__XmlTextReaderImpl__EntityType::System__Xml__XmlTextReaderImpl__EntityType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Xml::System__Xml__XmlTextReaderImpl__EntityType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Xml::System__Xml__XmlTextReaderImpl__EntityType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::Xml::System__Xml__XmlTextReaderImpl__EntityType  System::Xml::System__Xml__XmlTextReaderImpl__EntityType::CharacterDec{0};
constexpr System::Xml::System__Xml__XmlTextReaderImpl__EntityType  System::Xml::System__Xml__XmlTextReaderImpl__EntityType::CharacterHex{1};
constexpr System::Xml::System__Xml__XmlTextReaderImpl__EntityType  System::Xml::System__Xml__XmlTextReaderImpl__EntityType::CharacterNamed{2};
constexpr System::Xml::System__Xml__XmlTextReaderImpl__EntityType  System::Xml::System__Xml__XmlTextReaderImpl__EntityType::Expanded{3};
constexpr System::Xml::System__Xml__XmlTextReaderImpl__EntityType  System::Xml::System__Xml__XmlTextReaderImpl__EntityType::Skipped{4};
constexpr System::Xml::System__Xml__XmlTextReaderImpl__EntityType  System::Xml::System__Xml__XmlTextReaderImpl__EntityType::FakeExpanded{5};
constexpr System::Xml::System__Xml__XmlTextReaderImpl__EntityType  System::Xml::System__Xml__XmlTextReaderImpl__EntityType::Unexpanded{6};
constexpr System::Xml::System__Xml__XmlTextReaderImpl__EntityType  System::Xml::System__Xml__XmlTextReaderImpl__EntityType::ExpandedInAttribute{7};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Xml::System__Xml__XmlTextReaderImpl__EntityExpandType::System__Xml__XmlTextReaderImpl__EntityExpandType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Xml::System__Xml__XmlTextReaderImpl__EntityExpandType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Xml::System__Xml__XmlTextReaderImpl__EntityExpandType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::Xml::System__Xml__XmlTextReaderImpl__EntityExpandType  System::Xml::System__Xml__XmlTextReaderImpl__EntityExpandType::All{0};
constexpr System::Xml::System__Xml__XmlTextReaderImpl__EntityExpandType  System::Xml::System__Xml__XmlTextReaderImpl__EntityExpandType::OnlyGeneral{1};
constexpr System::Xml::System__Xml__XmlTextReaderImpl__EntityExpandType  System::Xml::System__Xml__XmlTextReaderImpl__EntityExpandType::OnlyCharacter{2};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Xml::System__Xml__XmlTextReaderImpl__IncrementalReadState::System__Xml__XmlTextReaderImpl__IncrementalReadState(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Xml::System__Xml__XmlTextReaderImpl__IncrementalReadState::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Xml::System__Xml__XmlTextReaderImpl__IncrementalReadState::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::Xml::System__Xml__XmlTextReaderImpl__IncrementalReadState  System::Xml::System__Xml__XmlTextReaderImpl__IncrementalReadState::Text{0};
constexpr System::Xml::System__Xml__XmlTextReaderImpl__IncrementalReadState  System::Xml::System__Xml__XmlTextReaderImpl__IncrementalReadState::StartTag{1};
constexpr System::Xml::System__Xml__XmlTextReaderImpl__IncrementalReadState  System::Xml::System__Xml__XmlTextReaderImpl__IncrementalReadState::PI{2};
constexpr System::Xml::System__Xml__XmlTextReaderImpl__IncrementalReadState  System::Xml::System__Xml__XmlTextReaderImpl__IncrementalReadState::CDATA{3};
constexpr System::Xml::System__Xml__XmlTextReaderImpl__IncrementalReadState  System::Xml::System__Xml__XmlTextReaderImpl__IncrementalReadState::Comment{4};
constexpr System::Xml::System__Xml__XmlTextReaderImpl__IncrementalReadState  System::Xml::System__Xml__XmlTextReaderImpl__IncrementalReadState::Attributes{5};
constexpr System::Xml::System__Xml__XmlTextReaderImpl__IncrementalReadState  System::Xml::System__Xml__XmlTextReaderImpl__IncrementalReadState::AttributeValue{6};
constexpr System::Xml::System__Xml__XmlTextReaderImpl__IncrementalReadState  System::Xml::System__Xml__XmlTextReaderImpl__IncrementalReadState::ReadData{7};
constexpr System::Xml::System__Xml__XmlTextReaderImpl__IncrementalReadState  System::Xml::System__Xml__XmlTextReaderImpl__IncrementalReadState::EndElement{8};
constexpr System::Xml::System__Xml__XmlTextReaderImpl__IncrementalReadState  System::Xml::System__Xml__XmlTextReaderImpl__IncrementalReadState::End{9};
constexpr System::Xml::System__Xml__XmlTextReaderImpl__IncrementalReadState  System::Xml::System__Xml__XmlTextReaderImpl__IncrementalReadState::ReadValueChunk_OnCachedValue{10};
constexpr System::Xml::System__Xml__XmlTextReaderImpl__IncrementalReadState  System::Xml::System__Xml__XmlTextReaderImpl__IncrementalReadState::ReadValueChunk_OnPartialValue{11};
constexpr System::Xml::System__Xml__XmlTextReaderImpl__IncrementalReadState  System::Xml::System__Xml__XmlTextReaderImpl__IncrementalReadState::ReadContentAsBinary_OnCachedValue{12};
constexpr System::Xml::System__Xml__XmlTextReaderImpl__IncrementalReadState  System::Xml::System__Xml__XmlTextReaderImpl__IncrementalReadState::ReadContentAsBinary_OnPartialValue{13};
constexpr System::Xml::System__Xml__XmlTextReaderImpl__IncrementalReadState  System::Xml::System__Xml__XmlTextReaderImpl__IncrementalReadState::ReadContentAsBinary_End{14};
constexpr void System::Xml::System__Xml__XmlTextReaderImpl__LaterInitParam::__set_useAsync(bool value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Xml::System__Xml__XmlTextReaderImpl__LaterInitParam::__get_useAsync() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::System__Xml__XmlTextReaderImpl__LaterInitParam::__set_inputStream(System::IO::Stream value)  {
::cordl_internals::setInstanceField<System::IO::Stream, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::IO::Stream>(value));
}
constexpr System::IO::Stream System::Xml::System__Xml__XmlTextReaderImpl__LaterInitParam::__get_inputStream() const {
return ::cordl_internals::getInstanceField<System::IO::Stream, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::System__Xml__XmlTextReaderImpl__LaterInitParam::__set_inputBytes(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> System::Xml::System__Xml__XmlTextReaderImpl__LaterInitParam::__get_inputBytes() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::System__Xml__XmlTextReaderImpl__LaterInitParam::__set_inputByteCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Xml::System__Xml__XmlTextReaderImpl__LaterInitParam::__get_inputByteCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::System__Xml__XmlTextReaderImpl__LaterInitParam::__set_inputbaseUri(System::Uri value)  {
::cordl_internals::setInstanceField<System::Uri, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Uri>(value));
}
constexpr System::Uri System::Xml::System__Xml__XmlTextReaderImpl__LaterInitParam::__get_inputbaseUri() const {
return ::cordl_internals::getInstanceField<System::Uri, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::System__Xml__XmlTextReaderImpl__LaterInitParam::__set_inputUriStr(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Xml::System__Xml__XmlTextReaderImpl__LaterInitParam::__get_inputUriStr() const {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::System__Xml__XmlTextReaderImpl__LaterInitParam::__set_inputUriResolver(System::Xml::XmlResolver value)  {
::cordl_internals::setInstanceField<System::Xml::XmlResolver, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Xml::XmlResolver>(value));
}
constexpr System::Xml::XmlResolver System::Xml::System__Xml__XmlTextReaderImpl__LaterInitParam::__get_inputUriResolver() const {
return ::cordl_internals::getInstanceField<System::Xml::XmlResolver, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::System__Xml__XmlTextReaderImpl__LaterInitParam::__set_inputContext(System::Xml::XmlParserContext value)  {
::cordl_internals::setInstanceField<System::Xml::XmlParserContext, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Xml::XmlParserContext>(value));
}
constexpr System::Xml::XmlParserContext System::Xml::System__Xml__XmlTextReaderImpl__LaterInitParam::__get_inputContext() const {
return ::cordl_internals::getInstanceField<System::Xml::XmlParserContext, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::System__Xml__XmlTextReaderImpl__LaterInitParam::__set_inputTextReader(System::IO::TextReader value)  {
::cordl_internals::setInstanceField<System::IO::TextReader, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::IO::TextReader>(value));
}
constexpr System::IO::TextReader System::Xml::System__Xml__XmlTextReaderImpl__LaterInitParam::__get_inputTextReader() const {
return ::cordl_internals::getInstanceField<System::IO::TextReader, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::System__Xml__XmlTextReaderImpl__LaterInitParam::__set_initType(System::Xml::System__Xml__XmlTextReaderImpl__InitInputType value)  {
::cordl_internals::setInstanceField<System::Xml::System__Xml__XmlTextReaderImpl__InitInputType, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Xml::System__Xml__XmlTextReaderImpl__InitInputType>(value));
}
constexpr System::Xml::System__Xml__XmlTextReaderImpl__InitInputType System::Xml::System__Xml__XmlTextReaderImpl__LaterInitParam::__get_initType() const {
return ::cordl_internals::getInstanceField<System::Xml::System__Xml__XmlTextReaderImpl__InitInputType, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Xml::System__Xml__XmlTextReaderImpl__InitInputType::System__Xml__XmlTextReaderImpl__InitInputType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Xml::System__Xml__XmlTextReaderImpl__InitInputType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Xml::System__Xml__XmlTextReaderImpl__InitInputType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::Xml::System__Xml__XmlTextReaderImpl__InitInputType  System::Xml::System__Xml__XmlTextReaderImpl__InitInputType::UriString{0};
constexpr System::Xml::System__Xml__XmlTextReaderImpl__InitInputType  System::Xml::System__Xml__XmlTextReaderImpl__InitInputType::Stream{1};
constexpr System::Xml::System__Xml__XmlTextReaderImpl__InitInputType  System::Xml::System__Xml__XmlTextReaderImpl__InitInputType::TextReader{2};
constexpr System::Xml::System__Xml__XmlTextReaderImpl__InitInputType  System::Xml::System__Xml__XmlTextReaderImpl__InitInputType::Invalid{3};
//  Writing Method size for method: System::Xml::System__Xml__XmlTextReaderImpl__ParsingState.Clear
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::System__Xml__XmlTextReaderImpl__ParsingState::*)()>(&System::Xml::System__Xml__XmlTextReaderImpl__ParsingState::Clear)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x26e0884;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__ParsingState>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::System__Xml__XmlTextReaderImpl__ParsingState.Close
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::System__Xml__XmlTextReaderImpl__ParsingState::*)(bool)>(&System::Xml::System__Xml__XmlTextReaderImpl__ParsingState::Close)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x26e0900;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__ParsingState>::get(),
                            "Close",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::System__Xml__XmlTextReaderImpl__ParsingState.get_LineNo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Xml::System__Xml__XmlTextReaderImpl__ParsingState::*)()>(&System::Xml::System__Xml__XmlTextReaderImpl__ParsingState::get_LineNo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26e0938;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__ParsingState>::get(),
                            "get_LineNo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::System__Xml__XmlTextReaderImpl__ParsingState.get_LinePos
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Xml::System__Xml__XmlTextReaderImpl__ParsingState::*)()>(&System::Xml::System__Xml__XmlTextReaderImpl__ParsingState::get_LinePos)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x26e0940;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__ParsingState>::get(),
                            "get_LinePos",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "chars", ty: "::ArrayW<char16_t>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "charPos", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "charsUsed", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "encoding", ty: "System::Text::Encoding", modifiers: "", def_value: Some("csnull") }, CppParam { name: "appendMode", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "stream", ty: "System::IO::Stream", modifiers: "", def_value: Some("csnull") }, CppParam { name: "decoder", ty: "System::Text::Decoder", modifiers: "", def_value: Some("csnull") }, CppParam { name: "bytes", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "bytePos", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "bytesUsed", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "textReader", ty: "System::IO::TextReader", modifiers: "", def_value: Some("csnull") }, CppParam { name: "lineNo", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "lineStartPos", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "baseUriStr", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "baseUri", ty: "System::Uri", modifiers: "", def_value: Some("csnull") }, CppParam { name: "isEof", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "isStreamEof", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "entity", ty: "System::Xml::IDtdEntityInfo", modifiers: "", def_value: Some("csnull") }, CppParam { name: "entityId", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "eolNormalized", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "entityResolvedManually", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr System::Xml::System__Xml__XmlTextReaderImpl__ParsingState::System__Xml__XmlTextReaderImpl__ParsingState(::ArrayW<char16_t> chars, int32_t charPos, int32_t charsUsed, System::Text::Encoding encoding, bool appendMode, System::IO::Stream stream, System::Text::Decoder decoder, ::ArrayW<uint8_t> bytes, int32_t bytePos, int32_t bytesUsed, System::IO::TextReader textReader, int32_t lineNo, int32_t lineStartPos, ::StringW baseUriStr, System::Uri baseUri, bool isEof, bool isStreamEof, System::Xml::IDtdEntityInfo entity, int32_t entityId, bool eolNormalized, bool entityResolvedManually) noexcept : ::bs_hook::ValueTypeWrapper() {this->chars = chars;
this->charPos = charPos;
this->charsUsed = charsUsed;
this->encoding = encoding;
this->appendMode = appendMode;
this->stream = stream;
this->decoder = decoder;
this->bytes = bytes;
this->bytePos = bytePos;
this->bytesUsed = bytesUsed;
this->textReader = textReader;
this->lineNo = lineNo;
this->lineStartPos = lineStartPos;
this->baseUriStr = baseUriStr;
this->baseUri = baseUri;
this->isEof = isEof;
this->isStreamEof = isStreamEof;
this->entity = entity;
this->entityId = entityId;
this->eolNormalized = eolNormalized;
this->entityResolvedManually = entityResolvedManually;
}
constexpr void System::Xml::System__Xml__XmlTextReaderImpl__ParsingState::__set_chars(::ArrayW<char16_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<char16_t>, 0x0>(this->__instance, std::forward<::ArrayW<char16_t>>(value));
}
constexpr ::ArrayW<char16_t> System::Xml::System__Xml__XmlTextReaderImpl__ParsingState::__get_chars() const {
return ::cordl_internals::getInstanceField<::ArrayW<char16_t>, 0x0>(this->__instance);
}
constexpr void System::Xml::System__Xml__XmlTextReaderImpl__ParsingState::__set_charPos(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Xml::System__Xml__XmlTextReaderImpl__ParsingState::__get_charPos() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->__instance);
}
constexpr void System::Xml::System__Xml__XmlTextReaderImpl__ParsingState::__set_charsUsed(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0xc>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Xml::System__Xml__XmlTextReaderImpl__ParsingState::__get_charsUsed() const {
return ::cordl_internals::getInstanceField<int32_t, 0xc>(this->__instance);
}
constexpr void System::Xml::System__Xml__XmlTextReaderImpl__ParsingState::__set_encoding(System::Text::Encoding value)  {
::cordl_internals::setInstanceField<System::Text::Encoding, 0x10>(this->__instance, std::forward<System::Text::Encoding>(value));
}
constexpr System::Text::Encoding System::Xml::System__Xml__XmlTextReaderImpl__ParsingState::__get_encoding() const {
return ::cordl_internals::getInstanceField<System::Text::Encoding, 0x10>(this->__instance);
}
constexpr void System::Xml::System__Xml__XmlTextReaderImpl__ParsingState::__set_appendMode(bool value)  {
::cordl_internals::setInstanceField<bool, 0x18>(this->__instance, std::forward<bool>(value));
}
constexpr bool System::Xml::System__Xml__XmlTextReaderImpl__ParsingState::__get_appendMode() const {
return ::cordl_internals::getInstanceField<bool, 0x18>(this->__instance);
}
constexpr void System::Xml::System__Xml__XmlTextReaderImpl__ParsingState::__set_stream(System::IO::Stream value)  {
::cordl_internals::setInstanceField<System::IO::Stream, 0x20>(this->__instance, std::forward<System::IO::Stream>(value));
}
constexpr System::IO::Stream System::Xml::System__Xml__XmlTextReaderImpl__ParsingState::__get_stream() const {
return ::cordl_internals::getInstanceField<System::IO::Stream, 0x20>(this->__instance);
}
constexpr void System::Xml::System__Xml__XmlTextReaderImpl__ParsingState::__set_decoder(System::Text::Decoder value)  {
::cordl_internals::setInstanceField<System::Text::Decoder, 0x28>(this->__instance, std::forward<System::Text::Decoder>(value));
}
constexpr System::Text::Decoder System::Xml::System__Xml__XmlTextReaderImpl__ParsingState::__get_decoder() const {
return ::cordl_internals::getInstanceField<System::Text::Decoder, 0x28>(this->__instance);
}
constexpr void System::Xml::System__Xml__XmlTextReaderImpl__ParsingState::__set_bytes(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x30>(this->__instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> System::Xml::System__Xml__XmlTextReaderImpl__ParsingState::__get_bytes() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x30>(this->__instance);
}
constexpr void System::Xml::System__Xml__XmlTextReaderImpl__ParsingState::__set_bytePos(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x38>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Xml::System__Xml__XmlTextReaderImpl__ParsingState::__get_bytePos() const {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this->__instance);
}
constexpr void System::Xml::System__Xml__XmlTextReaderImpl__ParsingState::__set_bytesUsed(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x3c>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Xml::System__Xml__XmlTextReaderImpl__ParsingState::__get_bytesUsed() const {
return ::cordl_internals::getInstanceField<int32_t, 0x3c>(this->__instance);
}
constexpr void System::Xml::System__Xml__XmlTextReaderImpl__ParsingState::__set_textReader(System::IO::TextReader value)  {
::cordl_internals::setInstanceField<System::IO::TextReader, 0x40>(this->__instance, std::forward<System::IO::TextReader>(value));
}
constexpr System::IO::TextReader System::Xml::System__Xml__XmlTextReaderImpl__ParsingState::__get_textReader() const {
return ::cordl_internals::getInstanceField<System::IO::TextReader, 0x40>(this->__instance);
}
constexpr void System::Xml::System__Xml__XmlTextReaderImpl__ParsingState::__set_lineNo(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x48>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Xml::System__Xml__XmlTextReaderImpl__ParsingState::__get_lineNo() const {
return ::cordl_internals::getInstanceField<int32_t, 0x48>(this->__instance);
}
constexpr void System::Xml::System__Xml__XmlTextReaderImpl__ParsingState::__set_lineStartPos(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x4c>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Xml::System__Xml__XmlTextReaderImpl__ParsingState::__get_lineStartPos() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4c>(this->__instance);
}
constexpr void System::Xml::System__Xml__XmlTextReaderImpl__ParsingState::__set_baseUriStr(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x50>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Xml::System__Xml__XmlTextReaderImpl__ParsingState::__get_baseUriStr() const {
return ::cordl_internals::getInstanceField<::StringW, 0x50>(this->__instance);
}
constexpr void System::Xml::System__Xml__XmlTextReaderImpl__ParsingState::__set_baseUri(System::Uri value)  {
::cordl_internals::setInstanceField<System::Uri, 0x58>(this->__instance, std::forward<System::Uri>(value));
}
constexpr System::Uri System::Xml::System__Xml__XmlTextReaderImpl__ParsingState::__get_baseUri() const {
return ::cordl_internals::getInstanceField<System::Uri, 0x58>(this->__instance);
}
constexpr void System::Xml::System__Xml__XmlTextReaderImpl__ParsingState::__set_isEof(bool value)  {
::cordl_internals::setInstanceField<bool, 0x60>(this->__instance, std::forward<bool>(value));
}
constexpr bool System::Xml::System__Xml__XmlTextReaderImpl__ParsingState::__get_isEof() const {
return ::cordl_internals::getInstanceField<bool, 0x60>(this->__instance);
}
constexpr void System::Xml::System__Xml__XmlTextReaderImpl__ParsingState::__set_isStreamEof(bool value)  {
::cordl_internals::setInstanceField<bool, 0x61>(this->__instance, std::forward<bool>(value));
}
constexpr bool System::Xml::System__Xml__XmlTextReaderImpl__ParsingState::__get_isStreamEof() const {
return ::cordl_internals::getInstanceField<bool, 0x61>(this->__instance);
}
constexpr void System::Xml::System__Xml__XmlTextReaderImpl__ParsingState::__set_entity(System::Xml::IDtdEntityInfo value)  {
::cordl_internals::setInstanceField<System::Xml::IDtdEntityInfo, 0x68>(this->__instance, std::forward<System::Xml::IDtdEntityInfo>(value));
}
constexpr System::Xml::IDtdEntityInfo System::Xml::System__Xml__XmlTextReaderImpl__ParsingState::__get_entity() const {
return ::cordl_internals::getInstanceField<System::Xml::IDtdEntityInfo, 0x68>(this->__instance);
}
constexpr void System::Xml::System__Xml__XmlTextReaderImpl__ParsingState::__set_entityId(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x70>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Xml::System__Xml__XmlTextReaderImpl__ParsingState::__get_entityId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x70>(this->__instance);
}
constexpr void System::Xml::System__Xml__XmlTextReaderImpl__ParsingState::__set_eolNormalized(bool value)  {
::cordl_internals::setInstanceField<bool, 0x74>(this->__instance, std::forward<bool>(value));
}
constexpr bool System::Xml::System__Xml__XmlTextReaderImpl__ParsingState::__get_eolNormalized() const {
return ::cordl_internals::getInstanceField<bool, 0x74>(this->__instance);
}
constexpr void System::Xml::System__Xml__XmlTextReaderImpl__ParsingState::__set_entityResolvedManually(bool value)  {
::cordl_internals::setInstanceField<bool, 0x75>(this->__instance, std::forward<bool>(value));
}
constexpr bool System::Xml::System__Xml__XmlTextReaderImpl__ParsingState::__get_entityResolvedManually() const {
return ::cordl_internals::getInstanceField<bool, 0x75>(this->__instance);
}
 void System::Xml::System__Xml__XmlTextReaderImpl__ParsingState::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__ParsingState>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void System::Xml::System__Xml__XmlTextReaderImpl__ParsingState::Close(bool closeInput)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__ParsingState>::get(),
                            "Close",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, closeInput);
}
 int32_t System::Xml::System__Xml__XmlTextReaderImpl__ParsingState::get_LineNo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__ParsingState>::get(),
                            "get_LineNo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 int32_t System::Xml::System__Xml__XmlTextReaderImpl__ParsingState::get_LinePos()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__ParsingState>::get(),
                            "get_LinePos",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
//  Writing Method size for method: System::Xml::System__Xml__XmlTextReaderImpl__XmlContext._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::System__Xml__XmlTextReaderImpl__XmlContext::*)()>(&System::Xml::System__Xml__XmlTextReaderImpl__XmlContext::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x26e0950;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__XmlContext>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::System__Xml__XmlTextReaderImpl__XmlContext._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::System__Xml__XmlTextReaderImpl__XmlContext::*)(System::Xml::System__Xml__XmlTextReaderImpl__XmlContext)>(&System::Xml::System__Xml__XmlTextReaderImpl__XmlContext::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x26e09b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__XmlContext>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::System__Xml__XmlTextReaderImpl__XmlContext>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Xml::System__Xml__XmlTextReaderImpl__XmlContext::__set_xmlSpace(System::Xml::XmlSpace value)  {
::cordl_internals::setInstanceField<System::Xml::XmlSpace, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Xml::XmlSpace>(value));
}
constexpr System::Xml::XmlSpace System::Xml::System__Xml__XmlTextReaderImpl__XmlContext::__get_xmlSpace() const {
return ::cordl_internals::getInstanceField<System::Xml::XmlSpace, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::System__Xml__XmlTextReaderImpl__XmlContext::__set_xmlLang(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Xml::System__Xml__XmlTextReaderImpl__XmlContext::__get_xmlLang() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::System__Xml__XmlTextReaderImpl__XmlContext::__set_defaultNamespace(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Xml::System__Xml__XmlTextReaderImpl__XmlContext::__get_defaultNamespace() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::System__Xml__XmlTextReaderImpl__XmlContext::__set_previousContext(System::Xml::System__Xml__XmlTextReaderImpl__XmlContext value)  {
::cordl_internals::setInstanceField<System::Xml::System__Xml__XmlTextReaderImpl__XmlContext, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Xml::System__Xml__XmlTextReaderImpl__XmlContext>(value));
}
constexpr System::Xml::System__Xml__XmlTextReaderImpl__XmlContext System::Xml::System__Xml__XmlTextReaderImpl__XmlContext::__get_previousContext() const {
return ::cordl_internals::getInstanceField<System::Xml::System__Xml__XmlTextReaderImpl__XmlContext, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Xml::System__Xml__XmlTextReaderImpl__XmlContext System::Xml::System__Xml__XmlTextReaderImpl__XmlContext::New_ctor()  {
System::Xml::System__Xml__XmlTextReaderImpl__XmlContext o{THROW_UNLESS(::il2cpp_utils::New<System::Xml::System__Xml__XmlTextReaderImpl__XmlContext>())};
return o;
}
 void System::Xml::System__Xml__XmlTextReaderImpl__XmlContext::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__XmlContext>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Xml::System__Xml__XmlTextReaderImpl__XmlContext System::Xml::System__Xml__XmlTextReaderImpl__XmlContext::New_ctor(System::Xml::System__Xml__XmlTextReaderImpl__XmlContext previousContext)  {
System::Xml::System__Xml__XmlTextReaderImpl__XmlContext o{THROW_UNLESS(::il2cpp_utils::New<System::Xml::System__Xml__XmlTextReaderImpl__XmlContext>(previousContext))};
return o;
}
 void System::Xml::System__Xml__XmlTextReaderImpl__XmlContext::_ctor(System::Xml::System__Xml__XmlTextReaderImpl__XmlContext previousContext)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__XmlContext>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::System__Xml__XmlTextReaderImpl__XmlContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, previousContext);
}
//  Writing Method size for method: System::Xml::System__Xml__XmlTextReaderImpl__NoNamespaceManager._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::System__Xml__XmlTextReaderImpl__NoNamespaceManager::*)()>(&System::Xml::System__Xml__XmlTextReaderImpl__NoNamespaceManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26e09f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__NoNamespaceManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::System__Xml__XmlTextReaderImpl__NoNamespaceManager.get_DefaultNamespace
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::System__Xml__XmlTextReaderImpl__NoNamespaceManager::*)()>(&System::Xml::System__Xml__XmlTextReaderImpl__NoNamespaceManager::get_DefaultNamespace)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x26e09fc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::System__Xml__XmlTextReaderImpl__NoNamespaceManager),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__NoNamespaceManager>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::System__Xml__XmlTextReaderImpl__NoNamespaceManager.PushScope
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::System__Xml__XmlTextReaderImpl__NoNamespaceManager::*)()>(&System::Xml::System__Xml__XmlTextReaderImpl__NoNamespaceManager::PushScope)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x26e0a44;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::System__Xml__XmlTextReaderImpl__NoNamespaceManager),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__NoNamespaceManager>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::System__Xml__XmlTextReaderImpl__NoNamespaceManager.PopScope
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::System__Xml__XmlTextReaderImpl__NoNamespaceManager::*)()>(&System::Xml::System__Xml__XmlTextReaderImpl__NoNamespaceManager::PopScope)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26e0a48;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::System__Xml__XmlTextReaderImpl__NoNamespaceManager),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__NoNamespaceManager>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::System__Xml__XmlTextReaderImpl__NoNamespaceManager.AddNamespace
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::System__Xml__XmlTextReaderImpl__NoNamespaceManager::*)(::StringW, ::StringW)>(&System::Xml::System__Xml__XmlTextReaderImpl__NoNamespaceManager::AddNamespace)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x26e0a50;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::System__Xml__XmlTextReaderImpl__NoNamespaceManager),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__NoNamespaceManager>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::System__Xml__XmlTextReaderImpl__NoNamespaceManager.RemoveNamespace
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::System__Xml__XmlTextReaderImpl__NoNamespaceManager::*)(::StringW, ::StringW)>(&System::Xml::System__Xml__XmlTextReaderImpl__NoNamespaceManager::RemoveNamespace)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x26e0a54;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::System__Xml__XmlTextReaderImpl__NoNamespaceManager),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__NoNamespaceManager>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::System__Xml__XmlTextReaderImpl__NoNamespaceManager.GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator (System::Xml::System__Xml__XmlTextReaderImpl__NoNamespaceManager::*)()>(&System::Xml::System__Xml__XmlTextReaderImpl__NoNamespaceManager::GetEnumerator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26e0a58;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::System__Xml__XmlTextReaderImpl__NoNamespaceManager),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__NoNamespaceManager>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::System__Xml__XmlTextReaderImpl__NoNamespaceManager.LookupNamespace
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::System__Xml__XmlTextReaderImpl__NoNamespaceManager::*)(::StringW)>(&System::Xml::System__Xml__XmlTextReaderImpl__NoNamespaceManager::LookupNamespace)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x26e0a60;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::System__Xml__XmlTextReaderImpl__NoNamespaceManager),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__NoNamespaceManager>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::System__Xml__XmlTextReaderImpl__NoNamespaceManager.LookupPrefix
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::System__Xml__XmlTextReaderImpl__NoNamespaceManager::*)(::StringW)>(&System::Xml::System__Xml__XmlTextReaderImpl__NoNamespaceManager::LookupPrefix)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26e0aa8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::System__Xml__XmlTextReaderImpl__NoNamespaceManager),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__NoNamespaceManager>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
 System::Xml::System__Xml__XmlTextReaderImpl__NoNamespaceManager System::Xml::System__Xml__XmlTextReaderImpl__NoNamespaceManager::New_ctor()  {
System::Xml::System__Xml__XmlTextReaderImpl__NoNamespaceManager o{THROW_UNLESS(::il2cpp_utils::New<System::Xml::System__Xml__XmlTextReaderImpl__NoNamespaceManager>())};
return o;
}
 void System::Xml::System__Xml__XmlTextReaderImpl__NoNamespaceManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__NoNamespaceManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Xml::System__Xml__XmlTextReaderImpl__NoNamespaceManager::get_DefaultNamespace()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__NoNamespaceManager>::get(),
                            "get_DefaultNamespace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Xml::System__Xml__XmlTextReaderImpl__NoNamespaceManager::PushScope()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__NoNamespaceManager>::get(),
                            "PushScope",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Xml::System__Xml__XmlTextReaderImpl__NoNamespaceManager::PopScope()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__NoNamespaceManager>::get(),
                            "PopScope",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Xml::System__Xml__XmlTextReaderImpl__NoNamespaceManager::AddNamespace(::StringW prefix, ::StringW uri)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__NoNamespaceManager>::get(),
                            "AddNamespace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, prefix, uri);
}
 void System::Xml::System__Xml__XmlTextReaderImpl__NoNamespaceManager::RemoveNamespace(::StringW prefix, ::StringW uri)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__NoNamespaceManager>::get(),
                            "RemoveNamespace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, prefix, uri);
}
 System::Collections::IEnumerator System::Xml::System__Xml__XmlTextReaderImpl__NoNamespaceManager::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__NoNamespaceManager>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Xml::System__Xml__XmlTextReaderImpl__NoNamespaceManager::LookupNamespace(::StringW prefix)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__NoNamespaceManager>::get(),
                            "LookupNamespace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, prefix);
}
 ::StringW System::Xml::System__Xml__XmlTextReaderImpl__NoNamespaceManager::LookupPrefix(::StringW uri)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__NoNamespaceManager>::get(),
                            "LookupPrefix",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, uri);
}
//  Writing Method size for method: System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy::*)(System::Xml::XmlTextReaderImpl)>(&System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x26e0ab0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::XmlTextReaderImpl>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy.System_Xml_IDtdParserAdapter_get_NameTable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Xml::XmlNameTable (System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy::*)()>(&System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapter_get_NameTable)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x26e0ad8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy>::get(),
                            "System.Xml.IDtdParserAdapter.get_NameTable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy.System_Xml_IDtdParserAdapter_get_NamespaceResolver
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Xml::IXmlNamespaceResolver (System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy::*)()>(&System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapter_get_NamespaceResolver)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x26e0af4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy>::get(),
                            "System.Xml.IDtdParserAdapter.get_NamespaceResolver",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy.System_Xml_IDtdParserAdapter_get_BaseUri
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Uri (System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy::*)()>(&System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapter_get_BaseUri)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x26e0b10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy>::get(),
                            "System.Xml.IDtdParserAdapter.get_BaseUri",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy.System_Xml_IDtdParserAdapter_get_IsEof
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy::*)()>(&System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapter_get_IsEof)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x26e0b2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy>::get(),
                            "System.Xml.IDtdParserAdapter.get_IsEof",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy.System_Xml_IDtdParserAdapter_get_ParsingBuffer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<char16_t> (System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy::*)()>(&System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapter_get_ParsingBuffer)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x26e0b48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy>::get(),
                            "System.Xml.IDtdParserAdapter.get_ParsingBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy.System_Xml_IDtdParserAdapter_get_ParsingBufferLength
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy::*)()>(&System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapter_get_ParsingBufferLength)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x26e0b64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy>::get(),
                            "System.Xml.IDtdParserAdapter.get_ParsingBufferLength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy.System_Xml_IDtdParserAdapter_get_CurrentPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy::*)()>(&System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapter_get_CurrentPosition)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x26e0b80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy>::get(),
                            "System.Xml.IDtdParserAdapter.get_CurrentPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy.System_Xml_IDtdParserAdapter_set_CurrentPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy::*)(int32_t)>(&System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapter_set_CurrentPosition)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x26e0b9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy>::get(),
                            "System.Xml.IDtdParserAdapter.set_CurrentPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy.System_Xml_IDtdParserAdapter_get_EntityStackLength
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy::*)()>(&System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapter_get_EntityStackLength)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x26e0bb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy>::get(),
                            "System.Xml.IDtdParserAdapter.get_EntityStackLength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy.System_Xml_IDtdParserAdapter_get_IsEntityEolNormalized
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy::*)()>(&System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapter_get_IsEntityEolNormalized)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x26e0bd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy>::get(),
                            "System.Xml.IDtdParserAdapter.get_IsEntityEolNormalized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy.System_Xml_IDtdParserAdapter_OnNewLine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy::*)(int32_t)>(&System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapter_OnNewLine)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x26e0bf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy>::get(),
                            "System.Xml.IDtdParserAdapter.OnNewLine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy.System_Xml_IDtdParserAdapter_get_LineNo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy::*)()>(&System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapter_get_LineNo)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x26e0c0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy>::get(),
                            "System.Xml.IDtdParserAdapter.get_LineNo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy.System_Xml_IDtdParserAdapter_get_LineStartPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy::*)()>(&System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapter_get_LineStartPosition)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x26e0c28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy>::get(),
                            "System.Xml.IDtdParserAdapter.get_LineStartPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy.System_Xml_IDtdParserAdapter_ReadData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy::*)()>(&System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapter_ReadData)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x26e0c44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy>::get(),
                            "System.Xml.IDtdParserAdapter.ReadData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy.System_Xml_IDtdParserAdapter_ParseNumericCharRef
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy::*)(System::Text::StringBuilder)>(&System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapter_ParseNumericCharRef)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x26e0c60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy>::get(),
                            "System.Xml.IDtdParserAdapter.ParseNumericCharRef",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::StringBuilder>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy.System_Xml_IDtdParserAdapter_ParseNamedCharRef
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy::*)(bool, System::Text::StringBuilder)>(&System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapter_ParseNamedCharRef)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x26e0c7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy>::get(),
                            "System.Xml.IDtdParserAdapter.ParseNamedCharRef",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::StringBuilder>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy.System_Xml_IDtdParserAdapter_ParsePI
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy::*)(System::Text::StringBuilder)>(&System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapter_ParsePI)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x26e0c9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy>::get(),
                            "System.Xml.IDtdParserAdapter.ParsePI",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::StringBuilder>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy.System_Xml_IDtdParserAdapter_ParseComment
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy::*)(System::Text::StringBuilder)>(&System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapter_ParseComment)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x26e0cb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy>::get(),
                            "System.Xml.IDtdParserAdapter.ParseComment",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::StringBuilder>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy.System_Xml_IDtdParserAdapter_PushEntity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy::*)(System::Xml::IDtdEntityInfo, ByRef<int32_t>)>(&System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapter_PushEntity)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x26e0cd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy>::get(),
                            "System.Xml.IDtdParserAdapter.PushEntity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::IDtdEntityInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy.System_Xml_IDtdParserAdapter_PopEntity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy::*)(ByRef<System::Xml::IDtdEntityInfo>, ByRef<int32_t>)>(&System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapter_PopEntity)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x26e0cf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy>::get(),
                            "System.Xml.IDtdParserAdapter.PopEntity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Xml::IDtdEntityInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy.System_Xml_IDtdParserAdapter_PushExternalSubset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy::*)(::StringW, ::StringW)>(&System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapter_PushExternalSubset)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x26e0d0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy>::get(),
                            "System.Xml.IDtdParserAdapter.PushExternalSubset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy.System_Xml_IDtdParserAdapter_PushInternalDtd
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy::*)(::StringW, ::StringW)>(&System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapter_PushInternalDtd)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x26e0d28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy>::get(),
                            "System.Xml.IDtdParserAdapter.PushInternalDtd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy.System_Xml_IDtdParserAdapter_Throw
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy::*)(System::Exception)>(&System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapter_Throw)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x26e0d44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy>::get(),
                            "System.Xml.IDtdParserAdapter.Throw",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy.System_Xml_IDtdParserAdapter_OnSystemId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy::*)(::StringW, System::Xml::LineInfo, System::Xml::LineInfo)>(&System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapter_OnSystemId)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x26e0d60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy>::get(),
                            "System.Xml.IDtdParserAdapter.OnSystemId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::LineInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::LineInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy.System_Xml_IDtdParserAdapter_OnPublicId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy::*)(::StringW, System::Xml::LineInfo, System::Xml::LineInfo)>(&System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapter_OnPublicId)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x26e0d7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy>::get(),
                            "System.Xml.IDtdParserAdapter.OnPublicId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::LineInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::LineInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy.System_Xml_IDtdParserAdapterWithValidation_get_DtdValidation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy::*)()>(&System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapterWithValidation_get_DtdValidation)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x26e0d98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy>::get(),
                            "System.Xml.IDtdParserAdapterWithValidation.get_DtdValidation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy.System_Xml_IDtdParserAdapterWithValidation_get_ValidationEventHandling
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Xml::IValidationEventHandling (System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy::*)()>(&System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapterWithValidation_get_ValidationEventHandling)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x26e0db4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy>::get(),
                            "System.Xml.IDtdParserAdapterWithValidation.get_ValidationEventHandling",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy.System_Xml_IDtdParserAdapterV1_get_Normalization
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy::*)()>(&System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapterV1_get_Normalization)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x26e0dd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy>::get(),
                            "System.Xml.IDtdParserAdapterV1.get_Normalization",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy.System_Xml_IDtdParserAdapterV1_get_Namespaces
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy::*)()>(&System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapterV1_get_Namespaces)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x26e0dec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy>::get(),
                            "System.Xml.IDtdParserAdapterV1.get_Namespaces",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy.System_Xml_IDtdParserAdapterV1_get_V1CompatibilityMode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy::*)()>(&System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapterV1_get_V1CompatibilityMode)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x26e0e08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy>::get(),
                            "System.Xml.IDtdParserAdapterV1.get_V1CompatibilityMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Xml::IDtdParserAdapterV1
constexpr  System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy::operator System::Xml::IDtdParserAdapterV1() const noexcept {
return System::Xml::IDtdParserAdapterV1(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Xml::IDtdParserAdapterWithValidation
constexpr  System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy::operator System::Xml::IDtdParserAdapterWithValidation() const noexcept {
return System::Xml::IDtdParserAdapterWithValidation(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Xml::IDtdParserAdapter
constexpr  System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy::operator System::Xml::IDtdParserAdapter() const noexcept {
return System::Xml::IDtdParserAdapter(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy::__set_reader(System::Xml::XmlTextReaderImpl value)  {
::cordl_internals::setInstanceField<System::Xml::XmlTextReaderImpl, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Xml::XmlTextReaderImpl>(value));
}
constexpr System::Xml::XmlTextReaderImpl System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy::__get_reader() const {
return ::cordl_internals::getInstanceField<System::Xml::XmlTextReaderImpl, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy::New_ctor(System::Xml::XmlTextReaderImpl reader)  {
System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy o{THROW_UNLESS(::il2cpp_utils::New<System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy>(reader))};
return o;
}
 void System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy::_ctor(System::Xml::XmlTextReaderImpl reader)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::XmlTextReaderImpl>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, reader);
}
 System::Xml::XmlNameTable System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapter_get_NameTable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy>::get(),
                            "System.Xml.IDtdParserAdapter.get_NameTable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Xml::XmlNameTable, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Xml::IXmlNamespaceResolver System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapter_get_NamespaceResolver()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy>::get(),
                            "System.Xml.IDtdParserAdapter.get_NamespaceResolver",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Xml::IXmlNamespaceResolver, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Uri System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapter_get_BaseUri()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy>::get(),
                            "System.Xml.IDtdParserAdapter.get_BaseUri",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Uri, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapter_get_IsEof()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy>::get(),
                            "System.Xml.IDtdParserAdapter.get_IsEof",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<char16_t> System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapter_get_ParsingBuffer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy>::get(),
                            "System.Xml.IDtdParserAdapter.get_ParsingBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<char16_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapter_get_ParsingBufferLength()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy>::get(),
                            "System.Xml.IDtdParserAdapter.get_ParsingBufferLength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapter_get_CurrentPosition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy>::get(),
                            "System.Xml.IDtdParserAdapter.get_CurrentPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapter_set_CurrentPosition(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy>::get(),
                            "System.Xml.IDtdParserAdapter.set_CurrentPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapter_get_EntityStackLength()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy>::get(),
                            "System.Xml.IDtdParserAdapter.get_EntityStackLength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapter_get_IsEntityEolNormalized()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy>::get(),
                            "System.Xml.IDtdParserAdapter.get_IsEntityEolNormalized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapter_OnNewLine(int32_t pos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy>::get(),
                            "System.Xml.IDtdParserAdapter.OnNewLine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, pos);
}
 int32_t System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapter_get_LineNo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy>::get(),
                            "System.Xml.IDtdParserAdapter.get_LineNo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapter_get_LineStartPosition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy>::get(),
                            "System.Xml.IDtdParserAdapter.get_LineStartPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapter_ReadData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy>::get(),
                            "System.Xml.IDtdParserAdapter.ReadData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapter_ParseNumericCharRef(System::Text::StringBuilder internalSubsetBuilder)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy>::get(),
                            "System.Xml.IDtdParserAdapter.ParseNumericCharRef",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::StringBuilder>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, internalSubsetBuilder);
}
 int32_t System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapter_ParseNamedCharRef(bool expand, System::Text::StringBuilder internalSubsetBuilder)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy>::get(),
                            "System.Xml.IDtdParserAdapter.ParseNamedCharRef",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::StringBuilder>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, expand, internalSubsetBuilder);
}
 void System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapter_ParsePI(System::Text::StringBuilder sb)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy>::get(),
                            "System.Xml.IDtdParserAdapter.ParsePI",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::StringBuilder>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, sb);
}
 void System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapter_ParseComment(System::Text::StringBuilder sb)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy>::get(),
                            "System.Xml.IDtdParserAdapter.ParseComment",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::StringBuilder>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, sb);
}
 bool System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapter_PushEntity(System::Xml::IDtdEntityInfo entity, ByRef<int32_t> entityId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy>::get(),
                            "System.Xml.IDtdParserAdapter.PushEntity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::IDtdEntityInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, entity, entityId);
}
 bool System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapter_PopEntity(ByRef<System::Xml::IDtdEntityInfo> oldEntity, ByRef<int32_t> newEntityId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy>::get(),
                            "System.Xml.IDtdParserAdapter.PopEntity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Xml::IDtdEntityInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, oldEntity, newEntityId);
}
 bool System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapter_PushExternalSubset(::StringW systemId, ::StringW publicId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy>::get(),
                            "System.Xml.IDtdParserAdapter.PushExternalSubset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, systemId, publicId);
}
 void System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapter_PushInternalDtd(::StringW baseUri, ::StringW internalDtd)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy>::get(),
                            "System.Xml.IDtdParserAdapter.PushInternalDtd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, baseUri, internalDtd);
}
 void System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapter_Throw(System::Exception e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy>::get(),
                            "System.Xml.IDtdParserAdapter.Throw",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, e);
}
 void System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapter_OnSystemId(::StringW systemId, System::Xml::LineInfo keywordLineInfo, System::Xml::LineInfo systemLiteralLineInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy>::get(),
                            "System.Xml.IDtdParserAdapter.OnSystemId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::LineInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::LineInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, systemId, keywordLineInfo, systemLiteralLineInfo);
}
 void System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapter_OnPublicId(::StringW publicId, System::Xml::LineInfo keywordLineInfo, System::Xml::LineInfo publicLiteralLineInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy>::get(),
                            "System.Xml.IDtdParserAdapter.OnPublicId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::LineInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::LineInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, publicId, keywordLineInfo, publicLiteralLineInfo);
}
 bool System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapterWithValidation_get_DtdValidation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy>::get(),
                            "System.Xml.IDtdParserAdapterWithValidation.get_DtdValidation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Xml::IValidationEventHandling System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapterWithValidation_get_ValidationEventHandling()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy>::get(),
                            "System.Xml.IDtdParserAdapterWithValidation.get_ValidationEventHandling",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Xml::IValidationEventHandling, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapterV1_get_Normalization()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy>::get(),
                            "System.Xml.IDtdParserAdapterV1.get_Normalization",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapterV1_get_Namespaces()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy>::get(),
                            "System.Xml.IDtdParserAdapterV1.get_Namespaces",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy::System_Xml_IDtdParserAdapterV1_get_V1CompatibilityMode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__DtdParserProxy>::get(),
                            "System.Xml.IDtdParserAdapterV1.get_V1CompatibilityMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: System::Xml::System__Xml__XmlTextReaderImpl__NodeData.get_None
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Xml::System__Xml__XmlTextReaderImpl__NodeData (*)()>(&System::Xml::System__Xml__XmlTextReaderImpl__NodeData::get_None)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x26e0e24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__NodeData>::get(),
                            "get_None",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::System__Xml__XmlTextReaderImpl__NodeData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::System__Xml__XmlTextReaderImpl__NodeData::*)()>(&System::Xml::System__Xml__XmlTextReaderImpl__NodeData::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x26e0ec4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__NodeData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::System__Xml__XmlTextReaderImpl__NodeData.get_LineNo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Xml::System__Xml__XmlTextReaderImpl__NodeData::*)()>(&System::Xml::System__Xml__XmlTextReaderImpl__NodeData::get_LineNo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26e0f78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__NodeData>::get(),
                            "get_LineNo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::System__Xml__XmlTextReaderImpl__NodeData.get_LinePos
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Xml::System__Xml__XmlTextReaderImpl__NodeData::*)()>(&System::Xml::System__Xml__XmlTextReaderImpl__NodeData::get_LinePos)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26e0f80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__NodeData>::get(),
                            "get_LinePos",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::System__Xml__XmlTextReaderImpl__NodeData.get_IsEmptyElement
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::System__Xml__XmlTextReaderImpl__NodeData::*)()>(&System::Xml::System__Xml__XmlTextReaderImpl__NodeData::get_IsEmptyElement)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x26e0f88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__NodeData>::get(),
                            "get_IsEmptyElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::System__Xml__XmlTextReaderImpl__NodeData.set_IsEmptyElement
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::System__Xml__XmlTextReaderImpl__NodeData::*)(bool)>(&System::Xml::System__Xml__XmlTextReaderImpl__NodeData::set_IsEmptyElement)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x26e0fac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__NodeData>::get(),
                            "set_IsEmptyElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::System__Xml__XmlTextReaderImpl__NodeData.get_IsDefaultAttribute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::System__Xml__XmlTextReaderImpl__NodeData::*)()>(&System::Xml::System__Xml__XmlTextReaderImpl__NodeData::get_IsDefaultAttribute)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x26e0fb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__NodeData>::get(),
                            "get_IsDefaultAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::System__Xml__XmlTextReaderImpl__NodeData.set_IsDefaultAttribute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::System__Xml__XmlTextReaderImpl__NodeData::*)(bool)>(&System::Xml::System__Xml__XmlTextReaderImpl__NodeData::set_IsDefaultAttribute)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x26e0fdc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__NodeData>::get(),
                            "set_IsDefaultAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::System__Xml__XmlTextReaderImpl__NodeData.get_ValueBuffered
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::System__Xml__XmlTextReaderImpl__NodeData::*)()>(&System::Xml::System__Xml__XmlTextReaderImpl__NodeData::get_ValueBuffered)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x26e0fe8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__NodeData>::get(),
                            "get_ValueBuffered",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::System__Xml__XmlTextReaderImpl__NodeData.get_StringValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::System__Xml__XmlTextReaderImpl__NodeData::*)()>(&System::Xml::System__Xml__XmlTextReaderImpl__NodeData::get_StringValue)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x26e0ff8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__NodeData>::get(),
                            "get_StringValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::System__Xml__XmlTextReaderImpl__NodeData.TrimSpacesInValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::System__Xml__XmlTextReaderImpl__NodeData::*)()>(&System::Xml::System__Xml__XmlTextReaderImpl__NodeData::TrimSpacesInValue)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x26e1024;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__NodeData>::get(),
                            "TrimSpacesInValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::System__Xml__XmlTextReaderImpl__NodeData.Clear
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::System__Xml__XmlTextReaderImpl__NodeData::*)(System::Xml::XmlNodeType)>(&System::Xml::System__Xml__XmlTextReaderImpl__NodeData::Clear)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x26e0eec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__NodeData>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::XmlNodeType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::System__Xml__XmlTextReaderImpl__NodeData.ClearName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::System__Xml__XmlTextReaderImpl__NodeData::*)()>(&System::Xml::System__Xml__XmlTextReaderImpl__NodeData::ClearName)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x26e1060;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__NodeData>::get(),
                            "ClearName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::System__Xml__XmlTextReaderImpl__NodeData.SetLineInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::System__Xml__XmlTextReaderImpl__NodeData::*)(int32_t, int32_t)>(&System::Xml::System__Xml__XmlTextReaderImpl__NodeData::SetLineInfo)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x26e10b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__NodeData>::get(),
                            "SetLineInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::System__Xml__XmlTextReaderImpl__NodeData.SetLineInfo2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::System__Xml__XmlTextReaderImpl__NodeData::*)(int32_t, int32_t)>(&System::Xml::System__Xml__XmlTextReaderImpl__NodeData::SetLineInfo2)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x26e10c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__NodeData>::get(),
                            "SetLineInfo2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::System__Xml__XmlTextReaderImpl__NodeData.SetValueNode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::System__Xml__XmlTextReaderImpl__NodeData::*)(System::Xml::XmlNodeType, ::StringW)>(&System::Xml::System__Xml__XmlTextReaderImpl__NodeData::SetValueNode)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x26e10cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__NodeData>::get(),
                            "SetValueNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::XmlNodeType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::System__Xml__XmlTextReaderImpl__NodeData.SetValueNode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::System__Xml__XmlTextReaderImpl__NodeData::*)(System::Xml::XmlNodeType, ::ArrayW<char16_t>, int32_t, int32_t)>(&System::Xml::System__Xml__XmlTextReaderImpl__NodeData::SetValueNode)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x26e113c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__NodeData>::get(),
                            "SetValueNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::XmlNodeType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::System__Xml__XmlTextReaderImpl__NodeData.SetNamedNode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::System__Xml__XmlTextReaderImpl__NodeData::*)(System::Xml::XmlNodeType, ::StringW)>(&System::Xml::System__Xml__XmlTextReaderImpl__NodeData::SetNamedNode)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x26e11b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__NodeData>::get(),
                            "SetNamedNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::XmlNodeType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::System__Xml__XmlTextReaderImpl__NodeData.SetNamedNode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::System__Xml__XmlTextReaderImpl__NodeData::*)(System::Xml::XmlNodeType, ::StringW, ::StringW, ::StringW)>(&System::Xml::System__Xml__XmlTextReaderImpl__NodeData::SetNamedNode)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x26e1260;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__NodeData>::get(),
                            "SetNamedNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::XmlNodeType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::System__Xml__XmlTextReaderImpl__NodeData.SetValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::System__Xml__XmlTextReaderImpl__NodeData::*)(::StringW)>(&System::Xml::System__Xml__XmlTextReaderImpl__NodeData::SetValue)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x26e12e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__NodeData>::get(),
                            "SetValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::System__Xml__XmlTextReaderImpl__NodeData.SetValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::System__Xml__XmlTextReaderImpl__NodeData::*)(::ArrayW<char16_t>, int32_t, int32_t)>(&System::Xml::System__Xml__XmlTextReaderImpl__NodeData::SetValue)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x26e12f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__NodeData>::get(),
                            "SetValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::System__Xml__XmlTextReaderImpl__NodeData.OnBufferInvalidated
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::System__Xml__XmlTextReaderImpl__NodeData::*)()>(&System::Xml::System__Xml__XmlTextReaderImpl__NodeData::OnBufferInvalidated)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x26e1304;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__NodeData>::get(),
                            "OnBufferInvalidated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::System__Xml__XmlTextReaderImpl__NodeData.CopyTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::System__Xml__XmlTextReaderImpl__NodeData::*)(int32_t, System::Text::StringBuilder)>(&System::Xml::System__Xml__XmlTextReaderImpl__NodeData::CopyTo)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x26e133c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__NodeData>::get(),
                            "CopyTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::StringBuilder>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::System__Xml__XmlTextReaderImpl__NodeData.GetNameWPrefix
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::System__Xml__XmlTextReaderImpl__NodeData::*)(System::Xml::XmlNameTable)>(&System::Xml::System__Xml__XmlTextReaderImpl__NodeData::GetNameWPrefix)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x26e13bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__NodeData>::get(),
                            "GetNameWPrefix",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::XmlNameTable>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::System__Xml__XmlTextReaderImpl__NodeData.CreateNameWPrefix
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::System__Xml__XmlTextReaderImpl__NodeData::*)(System::Xml::XmlNameTable)>(&System::Xml::System__Xml__XmlTextReaderImpl__NodeData::CreateNameWPrefix)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x26e13d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__NodeData>::get(),
                            "CreateNameWPrefix",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::XmlNameTable>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::System__Xml__XmlTextReaderImpl__NodeData.System_IComparable_CompareTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Xml::System__Xml__XmlTextReaderImpl__NodeData::*)(::bs_hook::Il2CppWrapperType)>(&System::Xml::System__Xml__XmlTextReaderImpl__NodeData::System_IComparable_CompareTo)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x26e145c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__NodeData>::get(),
                            "System.IComparable.CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::IComparable
constexpr  System::Xml::System__Xml__XmlTextReaderImpl__NodeData::operator System::IComparable() const noexcept {
return System::IComparable(::bs_hook::Il2CppWrapperType::instance);
}
 void System::Xml::System__Xml__XmlTextReaderImpl__NodeData::__set_s_None(System::Xml::System__Xml__XmlTextReaderImpl__NodeData value)  {
::cordl_internals::setStaticField<System::Xml::System__Xml__XmlTextReaderImpl__NodeData, "s_None", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__NodeData>::get>(std::forward<System::Xml::System__Xml__XmlTextReaderImpl__NodeData>(value));
}
 System::Xml::System__Xml__XmlTextReaderImpl__NodeData System::Xml::System__Xml__XmlTextReaderImpl__NodeData::__get_s_None()  {
return ::cordl_internals::getStaticField<System::Xml::System__Xml__XmlTextReaderImpl__NodeData, "s_None", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__NodeData>::get>();
}
constexpr void System::Xml::System__Xml__XmlTextReaderImpl__NodeData::__set_type(System::Xml::XmlNodeType value)  {
::cordl_internals::setInstanceField<System::Xml::XmlNodeType, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Xml::XmlNodeType>(value));
}
constexpr System::Xml::XmlNodeType System::Xml::System__Xml__XmlTextReaderImpl__NodeData::__get_type() const {
return ::cordl_internals::getInstanceField<System::Xml::XmlNodeType, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::System__Xml__XmlTextReaderImpl__NodeData::__set_localName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Xml::System__Xml__XmlTextReaderImpl__NodeData::__get_localName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::System__Xml__XmlTextReaderImpl__NodeData::__set_prefix(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Xml::System__Xml__XmlTextReaderImpl__NodeData::__get_prefix() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::System__Xml__XmlTextReaderImpl__NodeData::__set_ns(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Xml::System__Xml__XmlTextReaderImpl__NodeData::__get_ns() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::System__Xml__XmlTextReaderImpl__NodeData::__set_nameWPrefix(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Xml::System__Xml__XmlTextReaderImpl__NodeData::__get_nameWPrefix() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::System__Xml__XmlTextReaderImpl__NodeData::__set_value(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Xml::System__Xml__XmlTextReaderImpl__NodeData::__get_value() const {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::System__Xml__XmlTextReaderImpl__NodeData::__set_chars(::ArrayW<char16_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<char16_t>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<char16_t>>(value));
}
constexpr ::ArrayW<char16_t> System::Xml::System__Xml__XmlTextReaderImpl__NodeData::__get_chars() const {
return ::cordl_internals::getInstanceField<::ArrayW<char16_t>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::System__Xml__XmlTextReaderImpl__NodeData::__set_valueStartPos(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Xml::System__Xml__XmlTextReaderImpl__NodeData::__get_valueStartPos() const {
return ::cordl_internals::getInstanceField<int32_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::System__Xml__XmlTextReaderImpl__NodeData::__set_valueLength(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x4c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Xml::System__Xml__XmlTextReaderImpl__NodeData::__get_valueLength() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::System__Xml__XmlTextReaderImpl__NodeData::__set_lineInfo(System::Xml::LineInfo value)  {
::cordl_internals::setInstanceField<System::Xml::LineInfo, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Xml::LineInfo>(value));
}
constexpr System::Xml::LineInfo System::Xml::System__Xml__XmlTextReaderImpl__NodeData::__get_lineInfo() const {
return ::cordl_internals::getInstanceField<System::Xml::LineInfo, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::System__Xml__XmlTextReaderImpl__NodeData::__set_lineInfo2(System::Xml::LineInfo value)  {
::cordl_internals::setInstanceField<System::Xml::LineInfo, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Xml::LineInfo>(value));
}
constexpr System::Xml::LineInfo System::Xml::System__Xml__XmlTextReaderImpl__NodeData::__get_lineInfo2() const {
return ::cordl_internals::getInstanceField<System::Xml::LineInfo, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::System__Xml__XmlTextReaderImpl__NodeData::__set_quoteChar(char16_t value)  {
::cordl_internals::setInstanceField<char16_t, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<char16_t>(value));
}
constexpr char16_t System::Xml::System__Xml__XmlTextReaderImpl__NodeData::__get_quoteChar() const {
return ::cordl_internals::getInstanceField<char16_t, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::System__Xml__XmlTextReaderImpl__NodeData::__set_depth(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x64>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Xml::System__Xml__XmlTextReaderImpl__NodeData::__get_depth() const {
return ::cordl_internals::getInstanceField<int32_t, 0x64>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::System__Xml__XmlTextReaderImpl__NodeData::__set_isEmptyOrDefault(bool value)  {
::cordl_internals::setInstanceField<bool, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Xml::System__Xml__XmlTextReaderImpl__NodeData::__get_isEmptyOrDefault() const {
return ::cordl_internals::getInstanceField<bool, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::System__Xml__XmlTextReaderImpl__NodeData::__set_entityId(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x6c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Xml::System__Xml__XmlTextReaderImpl__NodeData::__get_entityId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x6c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::System__Xml__XmlTextReaderImpl__NodeData::__set_xmlContextPushed(bool value)  {
::cordl_internals::setInstanceField<bool, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Xml::System__Xml__XmlTextReaderImpl__NodeData::__get_xmlContextPushed() const {
return ::cordl_internals::getInstanceField<bool, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::System__Xml__XmlTextReaderImpl__NodeData::__set_nextAttrValueChunk(System::Xml::System__Xml__XmlTextReaderImpl__NodeData value)  {
::cordl_internals::setInstanceField<System::Xml::System__Xml__XmlTextReaderImpl__NodeData, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Xml::System__Xml__XmlTextReaderImpl__NodeData>(value));
}
constexpr System::Xml::System__Xml__XmlTextReaderImpl__NodeData System::Xml::System__Xml__XmlTextReaderImpl__NodeData::__get_nextAttrValueChunk() const {
return ::cordl_internals::getInstanceField<System::Xml::System__Xml__XmlTextReaderImpl__NodeData, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::System__Xml__XmlTextReaderImpl__NodeData::__set_schemaType(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType System::Xml::System__Xml__XmlTextReaderImpl__NodeData::__get_schemaType() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::System__Xml__XmlTextReaderImpl__NodeData::__set_typedValue(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType System::Xml::System__Xml__XmlTextReaderImpl__NodeData::__get_typedValue() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Xml::System__Xml__XmlTextReaderImpl__NodeData System::Xml::System__Xml__XmlTextReaderImpl__NodeData::get_None()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__NodeData>::get(),
                            "get_None",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Xml::System__Xml__XmlTextReaderImpl__NodeData, false>(nullptr, ___internal_method);
}
 System::Xml::System__Xml__XmlTextReaderImpl__NodeData System::Xml::System__Xml__XmlTextReaderImpl__NodeData::New_ctor()  {
System::Xml::System__Xml__XmlTextReaderImpl__NodeData o{THROW_UNLESS(::il2cpp_utils::New<System::Xml::System__Xml__XmlTextReaderImpl__NodeData>())};
return o;
}
 void System::Xml::System__Xml__XmlTextReaderImpl__NodeData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__NodeData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::Xml::System__Xml__XmlTextReaderImpl__NodeData::get_LineNo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__NodeData>::get(),
                            "get_LineNo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::Xml::System__Xml__XmlTextReaderImpl__NodeData::get_LinePos()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__NodeData>::get(),
                            "get_LinePos",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Xml::System__Xml__XmlTextReaderImpl__NodeData::get_IsEmptyElement()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__NodeData>::get(),
                            "get_IsEmptyElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Xml::System__Xml__XmlTextReaderImpl__NodeData::set_IsEmptyElement(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__NodeData>::get(),
                            "set_IsEmptyElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool System::Xml::System__Xml__XmlTextReaderImpl__NodeData::get_IsDefaultAttribute()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__NodeData>::get(),
                            "get_IsDefaultAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Xml::System__Xml__XmlTextReaderImpl__NodeData::set_IsDefaultAttribute(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__NodeData>::get(),
                            "set_IsDefaultAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool System::Xml::System__Xml__XmlTextReaderImpl__NodeData::get_ValueBuffered()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__NodeData>::get(),
                            "get_ValueBuffered",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Xml::System__Xml__XmlTextReaderImpl__NodeData::get_StringValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__NodeData>::get(),
                            "get_StringValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Xml::System__Xml__XmlTextReaderImpl__NodeData::TrimSpacesInValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__NodeData>::get(),
                            "TrimSpacesInValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Xml::System__Xml__XmlTextReaderImpl__NodeData::Clear(System::Xml::XmlNodeType type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__NodeData>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::XmlNodeType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, type);
}
 void System::Xml::System__Xml__XmlTextReaderImpl__NodeData::ClearName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__NodeData>::get(),
                            "ClearName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Xml::System__Xml__XmlTextReaderImpl__NodeData::SetLineInfo(int32_t lineNo, int32_t linePos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__NodeData>::get(),
                            "SetLineInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, lineNo, linePos);
}
 void System::Xml::System__Xml__XmlTextReaderImpl__NodeData::SetLineInfo2(int32_t lineNo, int32_t linePos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__NodeData>::get(),
                            "SetLineInfo2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, lineNo, linePos);
}
 void System::Xml::System__Xml__XmlTextReaderImpl__NodeData::SetValueNode(System::Xml::XmlNodeType type, ::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__NodeData>::get(),
                            "SetValueNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::XmlNodeType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, type, value);
}
 void System::Xml::System__Xml__XmlTextReaderImpl__NodeData::SetValueNode(System::Xml::XmlNodeType type, ::ArrayW<char16_t> chars, int32_t startPos, int32_t len)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__NodeData>::get(),
                            "SetValueNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::XmlNodeType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, type, chars, startPos, len);
}
 void System::Xml::System__Xml__XmlTextReaderImpl__NodeData::SetNamedNode(System::Xml::XmlNodeType type, ::StringW localName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__NodeData>::get(),
                            "SetNamedNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::XmlNodeType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, type, localName);
}
 void System::Xml::System__Xml__XmlTextReaderImpl__NodeData::SetNamedNode(System::Xml::XmlNodeType type, ::StringW localName, ::StringW prefix, ::StringW nameWPrefix)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__NodeData>::get(),
                            "SetNamedNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::XmlNodeType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, type, localName, prefix, nameWPrefix);
}
 void System::Xml::System__Xml__XmlTextReaderImpl__NodeData::SetValue(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__NodeData>::get(),
                            "SetValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void System::Xml::System__Xml__XmlTextReaderImpl__NodeData::SetValue(::ArrayW<char16_t> chars, int32_t startPos, int32_t len)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__NodeData>::get(),
                            "SetValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, chars, startPos, len);
}
 void System::Xml::System__Xml__XmlTextReaderImpl__NodeData::OnBufferInvalidated()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__NodeData>::get(),
                            "OnBufferInvalidated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Xml::System__Xml__XmlTextReaderImpl__NodeData::CopyTo(int32_t valueOffset, System::Text::StringBuilder sb)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__NodeData>::get(),
                            "CopyTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::StringBuilder>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, valueOffset, sb);
}
 ::StringW System::Xml::System__Xml__XmlTextReaderImpl__NodeData::GetNameWPrefix(System::Xml::XmlNameTable nt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__NodeData>::get(),
                            "GetNameWPrefix",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::XmlNameTable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, nt);
}
 ::StringW System::Xml::System__Xml__XmlTextReaderImpl__NodeData::CreateNameWPrefix(System::Xml::XmlNameTable nt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__NodeData>::get(),
                            "CreateNameWPrefix",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::XmlNameTable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, nt);
}
 int32_t System::Xml::System__Xml__XmlTextReaderImpl__NodeData::System_IComparable_CompareTo(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__NodeData>::get(),
                            "System.IComparable.CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, obj);
}
//  Writing Method size for method: System::Xml::System__Xml__XmlTextReaderImpl__DtdDefaultAttributeInfoToNodeDataComparer.get_Instance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IComparer_1<::bs_hook::Il2CppWrapperType> (*)()>(&System::Xml::System__Xml__XmlTextReaderImpl__DtdDefaultAttributeInfoToNodeDataComparer::get_Instance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x26e1534;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__DtdDefaultAttributeInfoToNodeDataComparer>::get(),
                            "get_Instance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::System__Xml__XmlTextReaderImpl__DtdDefaultAttributeInfoToNodeDataComparer.Compare
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Xml::System__Xml__XmlTextReaderImpl__DtdDefaultAttributeInfoToNodeDataComparer::*)(::bs_hook::Il2CppWrapperType, ::bs_hook::Il2CppWrapperType)>(&System::Xml::System__Xml__XmlTextReaderImpl__DtdDefaultAttributeInfoToNodeDataComparer::Compare)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0x26e158c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__DtdDefaultAttributeInfoToNodeDataComparer>::get(),
                            "Compare",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::System__Xml__XmlTextReaderImpl__DtdDefaultAttributeInfoToNodeDataComparer._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::System__Xml__XmlTextReaderImpl__DtdDefaultAttributeInfoToNodeDataComparer::*)()>(&System::Xml::System__Xml__XmlTextReaderImpl__DtdDefaultAttributeInfoToNodeDataComparer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26e18d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__DtdDefaultAttributeInfoToNodeDataComparer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Collections::Generic::IComparer_1<::bs_hook::Il2CppWrapperType>
constexpr  System::Xml::System__Xml__XmlTextReaderImpl__DtdDefaultAttributeInfoToNodeDataComparer::operator System::Collections::Generic::IComparer_1<::bs_hook::Il2CppWrapperType>() const noexcept {
return System::Collections::Generic::IComparer_1<::bs_hook::Il2CppWrapperType>(::bs_hook::Il2CppWrapperType::instance);
}
 void System::Xml::System__Xml__XmlTextReaderImpl__DtdDefaultAttributeInfoToNodeDataComparer::__set_s_instance(System::Collections::Generic::IComparer_1<::bs_hook::Il2CppWrapperType> value)  {
::cordl_internals::setStaticField<System::Collections::Generic::IComparer_1<::bs_hook::Il2CppWrapperType>, "s_instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__DtdDefaultAttributeInfoToNodeDataComparer>::get>(std::forward<System::Collections::Generic::IComparer_1<::bs_hook::Il2CppWrapperType>>(value));
}
 System::Collections::Generic::IComparer_1<::bs_hook::Il2CppWrapperType> System::Xml::System__Xml__XmlTextReaderImpl__DtdDefaultAttributeInfoToNodeDataComparer::__get_s_instance()  {
return ::cordl_internals::getStaticField<System::Collections::Generic::IComparer_1<::bs_hook::Il2CppWrapperType>, "s_instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__DtdDefaultAttributeInfoToNodeDataComparer>::get>();
}
 System::Collections::Generic::IComparer_1<::bs_hook::Il2CppWrapperType> System::Xml::System__Xml__XmlTextReaderImpl__DtdDefaultAttributeInfoToNodeDataComparer::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__DtdDefaultAttributeInfoToNodeDataComparer>::get(),
                            "get_Instance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IComparer_1<::bs_hook::Il2CppWrapperType>, false>(nullptr, ___internal_method);
}
 int32_t System::Xml::System__Xml__XmlTextReaderImpl__DtdDefaultAttributeInfoToNodeDataComparer::Compare(::bs_hook::Il2CppWrapperType x, ::bs_hook::Il2CppWrapperType y)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__DtdDefaultAttributeInfoToNodeDataComparer>::get(),
                            "Compare",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, x, y);
}
 System::Xml::System__Xml__XmlTextReaderImpl__DtdDefaultAttributeInfoToNodeDataComparer System::Xml::System__Xml__XmlTextReaderImpl__DtdDefaultAttributeInfoToNodeDataComparer::New_ctor()  {
System::Xml::System__Xml__XmlTextReaderImpl__DtdDefaultAttributeInfoToNodeDataComparer o{THROW_UNLESS(::il2cpp_utils::New<System::Xml::System__Xml__XmlTextReaderImpl__DtdDefaultAttributeInfoToNodeDataComparer>())};
return o;
}
 void System::Xml::System__Xml__XmlTextReaderImpl__DtdDefaultAttributeInfoToNodeDataComparer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__DtdDefaultAttributeInfoToNodeDataComparer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: System::Xml::System__Xml__XmlTextReaderImpl__OnDefaultAttributeUseDelegate._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::System__Xml__XmlTextReaderImpl__OnDefaultAttributeUseDelegate::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&System::Xml::System__Xml__XmlTextReaderImpl__OnDefaultAttributeUseDelegate::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x26e1940;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__OnDefaultAttributeUseDelegate>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::System__Xml__XmlTextReaderImpl__OnDefaultAttributeUseDelegate.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::System__Xml__XmlTextReaderImpl__OnDefaultAttributeUseDelegate::*)(System::Xml::IDtdDefaultAttributeInfo, System::Xml::XmlTextReaderImpl)>(&System::Xml::System__Xml__XmlTextReaderImpl__OnDefaultAttributeUseDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x26e1a70;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::System__Xml__XmlTextReaderImpl__OnDefaultAttributeUseDelegate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__OnDefaultAttributeUseDelegate>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
 System::Xml::System__Xml__XmlTextReaderImpl__OnDefaultAttributeUseDelegate System::Xml::System__Xml__XmlTextReaderImpl__OnDefaultAttributeUseDelegate::New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
System::Xml::System__Xml__XmlTextReaderImpl__OnDefaultAttributeUseDelegate o{THROW_UNLESS(::il2cpp_utils::New<System::Xml::System__Xml__XmlTextReaderImpl__OnDefaultAttributeUseDelegate>(object, method))};
return o;
}
 void System::Xml::System__Xml__XmlTextReaderImpl__OnDefaultAttributeUseDelegate::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__OnDefaultAttributeUseDelegate>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 void System::Xml::System__Xml__XmlTextReaderImpl__OnDefaultAttributeUseDelegate::Invoke(System::Xml::IDtdDefaultAttributeInfo defaultAttribute, System::Xml::XmlTextReaderImpl coreReader)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlTextReaderImpl__OnDefaultAttributeUseDelegate>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::IDtdDefaultAttributeInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::XmlTextReaderImpl>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, defaultAttribute, coreReader);
}
//  Writing Method size for method: System::Xml::XmlTextReaderImpl._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)(System::Xml::XmlNameTable)>(&System::Xml::XmlTextReaderImpl::_ctor)> {
  constexpr static std::size_t size = 0x374;
  constexpr static std::size_t addrs = 0x26cf144;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::XmlNameTable>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)(System::IO::TextReader, System::Xml::XmlNameTable)>(&System::Xml::XmlTextReaderImpl::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x26cf4b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::TextReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::XmlNameTable>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)(::StringW, System::IO::TextReader, System::Xml::XmlNameTable)>(&System::Xml::XmlTextReaderImpl::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x26cf520;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::TextReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::XmlNameTable>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)(::StringW, System::Xml::XmlNodeType, System::Xml::XmlParserContext)>(&System::Xml::XmlTextReaderImpl::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x26cf5fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::XmlNodeType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::XmlParserContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)(::StringW, System::Xml::XmlParserContext)>(&System::Xml::XmlTextReaderImpl::_ctor)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x26cf9c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::XmlParserContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.FinishInitUriString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)()>(&System::Xml::XmlTextReaderImpl::FinishInitUriString)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0x26cfaf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "FinishInitUriString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.FinishInitStream
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)()>(&System::Xml::XmlTextReaderImpl::FinishInitStream)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x26d00bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "FinishInitStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.FinishInitTextReader
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)()>(&System::Xml::XmlTextReaderImpl::FinishInitTextReader)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x26d013c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "FinishInitTextReader",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.get_Settings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Xml::XmlReaderSettings (System::Xml::XmlTextReaderImpl::*)()>(&System::Xml::XmlTextReaderImpl::get_Settings)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x26d01a0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::XmlTextReaderImpl),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.get_NodeType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Xml::XmlNodeType (System::Xml::XmlTextReaderImpl::*)()>(&System::Xml::XmlTextReaderImpl::get_NodeType)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x26d02f8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::XmlTextReaderImpl),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.get_Name
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XmlTextReaderImpl::*)()>(&System::Xml::XmlTextReaderImpl::get_Name)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x26d0314;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::XmlTextReaderImpl),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.get_LocalName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XmlTextReaderImpl::*)()>(&System::Xml::XmlTextReaderImpl::get_LocalName)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x26d0338;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::XmlTextReaderImpl),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.get_NamespaceURI
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XmlTextReaderImpl::*)()>(&System::Xml::XmlTextReaderImpl::get_NamespaceURI)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x26d0354;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::XmlTextReaderImpl),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.get_Prefix
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XmlTextReaderImpl::*)()>(&System::Xml::XmlTextReaderImpl::get_Prefix)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x26d0370;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::XmlTextReaderImpl),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.get_Value
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XmlTextReaderImpl::*)()>(&System::Xml::XmlTextReaderImpl::get_Value)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x26d038c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::XmlTextReaderImpl),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.get_BaseURI
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XmlTextReaderImpl::*)()>(&System::Xml::XmlTextReaderImpl::get_BaseURI)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26d05a0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::XmlTextReaderImpl),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.get_IsEmptyElement
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlTextReaderImpl::*)()>(&System::Xml::XmlTextReaderImpl::get_IsEmptyElement)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x26d05a8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::XmlTextReaderImpl),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.get_IsDefault
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlTextReaderImpl::*)()>(&System::Xml::XmlTextReaderImpl::get_IsDefault)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x26d05c4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::XmlTextReaderImpl),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.get_ReadState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Xml::ReadState (System::Xml::XmlTextReaderImpl::*)()>(&System::Xml::XmlTextReaderImpl::get_ReadState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26d05e0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::XmlTextReaderImpl),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                                  23
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.get_NameTable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Xml::XmlNameTable (System::Xml::XmlTextReaderImpl::*)()>(&System::Xml::XmlTextReaderImpl::get_NameTable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26d05e8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::XmlTextReaderImpl),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                                  24
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.get_CanResolveEntity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlTextReaderImpl::*)()>(&System::Xml::XmlTextReaderImpl::get_CanResolveEntity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26d05f0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::XmlTextReaderImpl),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                                  26
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.MoveToAttribute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlTextReaderImpl::*)(::StringW)>(&System::Xml::XmlTextReaderImpl::MoveToAttribute)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x26d05f8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::XmlTextReaderImpl),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.MoveToFirstAttribute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlTextReaderImpl::*)()>(&System::Xml::XmlTextReaderImpl::MoveToFirstAttribute)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x26d091c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::XmlTextReaderImpl),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.MoveToNextAttribute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlTextReaderImpl::*)()>(&System::Xml::XmlTextReaderImpl::MoveToNextAttribute)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x26d0990;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::XmlTextReaderImpl),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                                  18
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.MoveToElement
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlTextReaderImpl::*)()>(&System::Xml::XmlTextReaderImpl::MoveToElement)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x26d0a18;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::XmlTextReaderImpl),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                                  19
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.FinishInit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)()>(&System::Xml::XmlTextReaderImpl::FinishInit)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x26d0aa0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "FinishInit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.Read
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlTextReaderImpl::*)()>(&System::Xml::XmlTextReaderImpl::Read)> {
  constexpr static std::size_t size = 0x3ac;
  constexpr static std::size_t addrs = 0x26d0ae8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::XmlTextReaderImpl),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                                  21
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.Close
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)()>(&System::Xml::XmlTextReaderImpl::Close)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26d2c68;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::XmlTextReaderImpl),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                                  22
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.LookupNamespace
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XmlTextReaderImpl::*)(::StringW)>(&System::Xml::XmlTextReaderImpl::LookupNamespace)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x26d2d2c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::XmlTextReaderImpl),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                                  25
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.ReadAttributeValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlTextReaderImpl::*)()>(&System::Xml::XmlTextReaderImpl::ReadAttributeValue)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x26d2d64;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::XmlTextReaderImpl),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.ResolveEntity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)()>(&System::Xml::XmlTextReaderImpl::ResolveEntity)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x26d3444;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::XmlTextReaderImpl),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                                  27
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.set_OuterReader
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)(System::Xml::XmlReader)>(&System::Xml::XmlTextReaderImpl::set_OuterReader)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26d3b3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "set_OuterReader",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::XmlReader>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.System_Xml_IXmlNamespaceResolver_LookupNamespace
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XmlTextReaderImpl::*)(::StringW)>(&System::Xml::XmlTextReaderImpl::System_Xml_IXmlNamespaceResolver_LookupNamespace)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x26d3b44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "System.Xml.IXmlNamespaceResolver.LookupNamespace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.System_Xml_IXmlNamespaceResolver_LookupPrefix
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XmlTextReaderImpl::*)(::StringW)>(&System::Xml::XmlTextReaderImpl::System_Xml_IXmlNamespaceResolver_LookupPrefix)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x26d3b54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "System.Xml.IXmlNamespaceResolver.LookupPrefix",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.LookupPrefix
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XmlTextReaderImpl::*)(::StringW)>(&System::Xml::XmlTextReaderImpl::LookupPrefix)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x26d3b78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "LookupPrefix",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.set_Namespaces
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)(bool)>(&System::Xml::XmlTextReaderImpl::set_Namespaces)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x26d3b9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "set_Namespaces",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.set_EntityHandling
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)(System::Xml::EntityHandling)>(&System::Xml::XmlTextReaderImpl::set_EntityHandling)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x26d3d6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "set_EntityHandling",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::EntityHandling>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.set_XmlResolver
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)(System::Xml::XmlResolver)>(&System::Xml::XmlTextReaderImpl::set_XmlResolver)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x26d3df4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "set_XmlResolver",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::XmlResolver>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.get_DtdParserProxy_NameTable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Xml::XmlNameTable (System::Xml::XmlTextReaderImpl::*)()>(&System::Xml::XmlTextReaderImpl::get_DtdParserProxy_NameTable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26d3e50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "get_DtdParserProxy_NameTable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.get_DtdParserProxy_NamespaceResolver
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Xml::IXmlNamespaceResolver (System::Xml::XmlTextReaderImpl::*)()>(&System::Xml::XmlTextReaderImpl::get_DtdParserProxy_NamespaceResolver)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26d3e58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "get_DtdParserProxy_NamespaceResolver",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.get_DtdParserProxy_DtdValidation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlTextReaderImpl::*)()>(&System::Xml::XmlTextReaderImpl::get_DtdParserProxy_DtdValidation)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x26d3e60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "get_DtdParserProxy_DtdValidation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.get_DtdParserProxy_Normalization
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlTextReaderImpl::*)()>(&System::Xml::XmlTextReaderImpl::get_DtdParserProxy_Normalization)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26d3e80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "get_DtdParserProxy_Normalization",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.get_DtdParserProxy_Namespaces
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlTextReaderImpl::*)()>(&System::Xml::XmlTextReaderImpl::get_DtdParserProxy_Namespaces)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26d3e88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "get_DtdParserProxy_Namespaces",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.get_DtdParserProxy_V1CompatibilityMode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlTextReaderImpl::*)()>(&System::Xml::XmlTextReaderImpl::get_DtdParserProxy_V1CompatibilityMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26d3e90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "get_DtdParserProxy_V1CompatibilityMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.get_DtdParserProxy_BaseUri
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Uri (System::Xml::XmlTextReaderImpl::*)()>(&System::Xml::XmlTextReaderImpl::get_DtdParserProxy_BaseUri)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x26d3e98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "get_DtdParserProxy_BaseUri",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.get_DtdParserProxy_IsEof
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlTextReaderImpl::*)()>(&System::Xml::XmlTextReaderImpl::get_DtdParserProxy_IsEof)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26d3f3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "get_DtdParserProxy_IsEof",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.get_DtdParserProxy_ParsingBuffer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<char16_t> (System::Xml::XmlTextReaderImpl::*)()>(&System::Xml::XmlTextReaderImpl::get_DtdParserProxy_ParsingBuffer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26d3f44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "get_DtdParserProxy_ParsingBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.get_DtdParserProxy_ParsingBufferLength
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Xml::XmlTextReaderImpl::*)()>(&System::Xml::XmlTextReaderImpl::get_DtdParserProxy_ParsingBufferLength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26d3f4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "get_DtdParserProxy_ParsingBufferLength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.get_DtdParserProxy_CurrentPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Xml::XmlTextReaderImpl::*)()>(&System::Xml::XmlTextReaderImpl::get_DtdParserProxy_CurrentPosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26d3f54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "get_DtdParserProxy_CurrentPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.set_DtdParserProxy_CurrentPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)(int32_t)>(&System::Xml::XmlTextReaderImpl::set_DtdParserProxy_CurrentPosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26d3f5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "set_DtdParserProxy_CurrentPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.get_DtdParserProxy_EntityStackLength
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Xml::XmlTextReaderImpl::*)()>(&System::Xml::XmlTextReaderImpl::get_DtdParserProxy_EntityStackLength)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x26d3f64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "get_DtdParserProxy_EntityStackLength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.get_DtdParserProxy_IsEntityEolNormalized
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlTextReaderImpl::*)()>(&System::Xml::XmlTextReaderImpl::get_DtdParserProxy_IsEntityEolNormalized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26d3f70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "get_DtdParserProxy_IsEntityEolNormalized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.get_DtdParserProxy_ValidationEventHandling
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Xml::IValidationEventHandling (System::Xml::XmlTextReaderImpl::*)()>(&System::Xml::XmlTextReaderImpl::get_DtdParserProxy_ValidationEventHandling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26d3f78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "get_DtdParserProxy_ValidationEventHandling",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.DtdParserProxy_OnNewLine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)(int32_t)>(&System::Xml::XmlTextReaderImpl::DtdParserProxy_OnNewLine)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x26d3f80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "DtdParserProxy_OnNewLine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.get_DtdParserProxy_LineNo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Xml::XmlTextReaderImpl::*)()>(&System::Xml::XmlTextReaderImpl::get_DtdParserProxy_LineNo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26d3fa8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "get_DtdParserProxy_LineNo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.get_DtdParserProxy_LineStartPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Xml::XmlTextReaderImpl::*)()>(&System::Xml::XmlTextReaderImpl::get_DtdParserProxy_LineStartPosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26d3fb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "get_DtdParserProxy_LineStartPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.DtdParserProxy_ReadData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Xml::XmlTextReaderImpl::*)()>(&System::Xml::XmlTextReaderImpl::DtdParserProxy_ReadData)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x26d3fb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "DtdParserProxy_ReadData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.DtdParserProxy_ParseNumericCharRef
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Xml::XmlTextReaderImpl::*)(System::Text::StringBuilder)>(&System::Xml::XmlTextReaderImpl::DtdParserProxy_ParseNumericCharRef)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x26d43ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "DtdParserProxy_ParseNumericCharRef",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::StringBuilder>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.DtdParserProxy_ParseNamedCharRef
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Xml::XmlTextReaderImpl::*)(bool, System::Text::StringBuilder)>(&System::Xml::XmlTextReaderImpl::DtdParserProxy_ParseNamedCharRef)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26d44b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "DtdParserProxy_ParseNamedCharRef",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::StringBuilder>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.DtdParserProxy_ParsePI
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)(System::Text::StringBuilder)>(&System::Xml::XmlTextReaderImpl::DtdParserProxy_ParsePI)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x26d4524;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "DtdParserProxy_ParsePI",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::StringBuilder>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.DtdParserProxy_ParseComment
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)(System::Text::StringBuilder)>(&System::Xml::XmlTextReaderImpl::DtdParserProxy_ParseComment)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x26d48d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "DtdParserProxy_ParseComment",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::StringBuilder>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.get_IsResolverNull
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlTextReaderImpl::*)()>(&System::Xml::XmlTextReaderImpl::get_IsResolverNull)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x26d4c60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "get_IsResolverNull",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.GetTempResolver
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Xml::XmlResolver (System::Xml::XmlTextReaderImpl::*)()>(&System::Xml::XmlTextReaderImpl::GetTempResolver)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x26d4ca0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "GetTempResolver",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.DtdParserProxy_PushEntity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlTextReaderImpl::*)(System::Xml::IDtdEntityInfo, ByRef<int32_t>)>(&System::Xml::XmlTextReaderImpl::DtdParserProxy_PushEntity)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x26d4d08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "DtdParserProxy_PushEntity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::IDtdEntityInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.DtdParserProxy_PopEntity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlTextReaderImpl::*)(ByRef<System::Xml::IDtdEntityInfo>, ByRef<int32_t>)>(&System::Xml::XmlTextReaderImpl::DtdParserProxy_PopEntity)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x26d54c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "DtdParserProxy_PopEntity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Xml::IDtdEntityInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.DtdParserProxy_PushExternalSubset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlTextReaderImpl::*)(::StringW, ::StringW)>(&System::Xml::XmlTextReaderImpl::DtdParserProxy_PushExternalSubset)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x26d555c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "DtdParserProxy_PushExternalSubset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.DtdParserProxy_PushInternalDtd
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)(::StringW, ::StringW)>(&System::Xml::XmlTextReaderImpl::DtdParserProxy_PushInternalDtd)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x26d5ca4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "DtdParserProxy_PushInternalDtd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.DtdParserProxy_Throw
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)(System::Exception)>(&System::Xml::XmlTextReaderImpl::DtdParserProxy_Throw)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26d5f04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "DtdParserProxy_Throw",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.DtdParserProxy_OnSystemId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)(::StringW, System::Xml::LineInfo, System::Xml::LineInfo)>(&System::Xml::XmlTextReaderImpl::DtdParserProxy_OnSystemId)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x26d5f9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "DtdParserProxy_OnSystemId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::LineInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::LineInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.DtdParserProxy_OnPublicId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)(::StringW, System::Xml::LineInfo, System::Xml::LineInfo)>(&System::Xml::XmlTextReaderImpl::DtdParserProxy_OnPublicId)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x26d60a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "DtdParserProxy_OnPublicId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::LineInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::LineInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.Throw
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)(int32_t, ::StringW, ::StringW)>(&System::Xml::XmlTextReaderImpl::Throw)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x26d6130;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "Throw",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.Throw
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)(int32_t, ::StringW, ::ArrayW<::StringW>)>(&System::Xml::XmlTextReaderImpl::Throw)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x26d61e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "Throw",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.Throw
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)(int32_t, ::StringW)>(&System::Xml::XmlTextReaderImpl::Throw)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x26d6290;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "Throw",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.Throw
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)(::StringW)>(&System::Xml::XmlTextReaderImpl::Throw)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x26d62ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "Throw",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.Throw
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)(::StringW, int32_t, int32_t)>(&System::Xml::XmlTextReaderImpl::Throw)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x26d6340;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "Throw",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.Throw
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)(::StringW, ::StringW)>(&System::Xml::XmlTextReaderImpl::Throw)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x26d6144;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "Throw",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.Throw
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)(::StringW, ::StringW, int32_t, int32_t)>(&System::Xml::XmlTextReaderImpl::Throw)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x26d63e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "Throw",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.Throw
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)(::StringW, ::ArrayW<::StringW>)>(&System::Xml::XmlTextReaderImpl::Throw)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x26d61f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "Throw",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.Throw
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)(::StringW, ::StringW, System::Exception)>(&System::Xml::XmlTextReaderImpl::Throw)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x26d6474;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "Throw",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.Throw
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)(::StringW, ::ArrayW<::StringW>, System::Exception)>(&System::Xml::XmlTextReaderImpl::Throw)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x26d6500;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "Throw",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.Throw
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)(System::Exception)>(&System::Xml::XmlTextReaderImpl::Throw)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x26d5f0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "Throw",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.ReThrow
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)(System::Exception, int32_t, int32_t)>(&System::Xml::XmlTextReaderImpl::ReThrow)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x26d65bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "ReThrow",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.ThrowWithoutLineInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)(::StringW)>(&System::Xml::XmlTextReaderImpl::ThrowWithoutLineInfo)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x26d2a54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "ThrowWithoutLineInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.ThrowWithoutLineInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)(::StringW, ::StringW)>(&System::Xml::XmlTextReaderImpl::ThrowWithoutLineInfo)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x26d6664;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "ThrowWithoutLineInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.ThrowWithoutLineInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)(::StringW, ::ArrayW<::StringW>, System::Exception)>(&System::Xml::XmlTextReaderImpl::ThrowWithoutLineInfo)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x26d66dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "ThrowWithoutLineInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.ThrowInvalidChar
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)(::ArrayW<char16_t>, int32_t, int32_t)>(&System::Xml::XmlTextReaderImpl::ThrowInvalidChar)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x26d6768;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "ThrowInvalidChar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.SetErrorState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)()>(&System::Xml::XmlTextReaderImpl::SetErrorState)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x26d65a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "SetErrorState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.SendValidationEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)(System::Xml::Schema::XmlSeverityType, ::StringW, ::StringW, int32_t, int32_t)>(&System::Xml::XmlTextReaderImpl::SendValidationEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x26d4bb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "SendValidationEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::Schema::XmlSeverityType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.SendValidationEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)(System::Xml::Schema::XmlSeverityType, System::Xml::Schema::XmlSchemaException)>(&System::Xml::XmlTextReaderImpl::SendValidationEvent)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x26d67d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "SendValidationEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::Schema::XmlSeverityType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::Schema::XmlSchemaException>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.get_InAttributeValueIterator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlTextReaderImpl::*)()>(&System::Xml::XmlTextReaderImpl::get_InAttributeValueIterator)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x26d0854;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "get_InAttributeValueIterator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.FinishAttributeValueIterator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)()>(&System::Xml::XmlTextReaderImpl::FinishAttributeValueIterator)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x26d0878;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "FinishAttributeValueIterator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.get_DtdValidation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlTextReaderImpl::*)()>(&System::Xml::XmlTextReaderImpl::get_DtdValidation)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x26d3e70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "get_DtdValidation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.InitStreamInput
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)(System::Uri, System::IO::Stream, System::Text::Encoding)>(&System::Xml::XmlTextReaderImpl::InitStreamInput)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x26d69c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "InitStreamInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Uri>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::Encoding>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.InitStreamInput
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)(System::Uri, ::StringW, System::IO::Stream, System::Text::Encoding)>(&System::Xml::XmlTextReaderImpl::InitStreamInput)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x26d6a24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "InitStreamInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Uri>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::Encoding>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.InitStreamInput
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)(System::Uri, ::StringW, System::IO::Stream, ::ArrayW<uint8_t>, int32_t, System::Text::Encoding)>(&System::Xml::XmlTextReaderImpl::InitStreamInput)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x26cfde4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "InitStreamInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Uri>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::Encoding>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.InitTextReaderInput
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)(::StringW, System::IO::TextReader)>(&System::Xml::XmlTextReaderImpl::InitTextReaderInput)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x26cf5f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "InitTextReaderInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::TextReader>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.InitTextReaderInput
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)(::StringW, System::Uri, System::IO::TextReader)>(&System::Xml::XmlTextReaderImpl::InitTextReaderInput)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x26d6da8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "InitTextReaderInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Uri>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::TextReader>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.InitStringInput
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)(::StringW, System::Text::Encoding, ::StringW)>(&System::Xml::XmlTextReaderImpl::InitStringInput)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x26cf708;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "InitStringInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::Encoding>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.InitFragmentReader
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)(System::Xml::XmlNodeType, System::Xml::XmlParserContext, bool)>(&System::Xml::XmlTextReaderImpl::InitFragmentReader)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x26cf7d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "InitFragmentReader",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::XmlNodeType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::XmlParserContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.ProcessDtdFromParserContext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)(System::Xml::XmlParserContext)>(&System::Xml::XmlTextReaderImpl::ProcessDtdFromParserContext)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x26d0050;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "ProcessDtdFromParserContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::XmlParserContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.OpenUrl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)()>(&System::Xml::XmlTextReaderImpl::OpenUrl)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x26d16bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "OpenUrl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.OpenUrlDelegate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)(::bs_hook::Il2CppWrapperType)>(&System::Xml::XmlTextReaderImpl::OpenUrlDelegate)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x26d7080;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "OpenUrlDelegate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.DetectEncoding
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Text::Encoding (System::Xml::XmlTextReaderImpl::*)()>(&System::Xml::XmlTextReaderImpl::DetectEncoding)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x26d6a34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "DetectEncoding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.SetupEncoding
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)(System::Text::Encoding)>(&System::Xml::XmlTextReaderImpl::SetupEncoding)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x26d6c60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "SetupEncoding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::Encoding>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.SwitchEncoding
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)(System::Text::Encoding)>(&System::Xml::XmlTextReaderImpl::SwitchEncoding)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x26d71a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "SwitchEncoding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::Encoding>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.CheckEncoding
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Text::Encoding (System::Xml::XmlTextReaderImpl::*)(::StringW)>(&System::Xml::XmlTextReaderImpl::CheckEncoding)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x26d733c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "CheckEncoding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.UnDecodeChars
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)()>(&System::Xml::XmlTextReaderImpl::UnDecodeChars)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x26d7294;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "UnDecodeChars",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.SwitchEncodingToUTF8
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)()>(&System::Xml::XmlTextReaderImpl::SwitchEncodingToUTF8)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x26d767c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "SwitchEncodingToUTF8",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.ReadData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Xml::XmlTextReaderImpl::*)()>(&System::Xml::XmlTextReaderImpl::ReadData)> {
  constexpr static std::size_t size = 0x430;
  constexpr static std::size_t addrs = 0x26d3fbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "ReadData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.GetChars
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Xml::XmlTextReaderImpl::*)(int32_t)>(&System::Xml::XmlTextReaderImpl::GetChars)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x26d7704;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "GetChars",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.InvalidCharRecovery
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)(ByRef<int32_t>, ByRef<int32_t>)>(&System::Xml::XmlTextReaderImpl::InvalidCharRecovery)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x26d781c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "InvalidCharRecovery",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.Close
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)(bool)>(&System::Xml::XmlTextReaderImpl::Close)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x26d2c70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "Close",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.ShiftBuffer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)(int32_t, int32_t, int32_t)>(&System::Xml::XmlTextReaderImpl::ShiftBuffer)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x26d7a04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "ShiftBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.ParseXmlDeclaration
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlTextReaderImpl::*)(bool)>(&System::Xml::XmlTextReaderImpl::ParseXmlDeclaration)> {
  constexpr static std::size_t size = 0xd7c;
  constexpr static std::size_t addrs = 0x26d1848;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "ParseXmlDeclaration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.ParseDocumentContent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlTextReaderImpl::*)()>(&System::Xml::XmlTextReaderImpl::ParseDocumentContent)> {
  constexpr static std::size_t size = 0x4f0;
  constexpr static std::size_t addrs = 0x26d11cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "ParseDocumentContent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.ParseElementContent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlTextReaderImpl::*)()>(&System::Xml::XmlTextReaderImpl::ParseElementContent)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0x26d0e94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "ParseElementContent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.ThrowUnclosedElements
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)()>(&System::Xml::XmlTextReaderImpl::ThrowUnclosedElements)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x26d8f90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "ThrowUnclosedElements",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.ParseElement
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)()>(&System::Xml::XmlTextReaderImpl::ParseElement)> {
  constexpr static std::size_t size = 0x4a0;
  constexpr static std::size_t addrs = 0x26d7ee8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "ParseElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.AddDefaultAttributesAndNormalize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)()>(&System::Xml::XmlTextReaderImpl::AddDefaultAttributesAndNormalize)> {
  constexpr static std::size_t size = 0xa14;
  constexpr static std::size_t addrs = 0x26d9778;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "AddDefaultAttributesAndNormalize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.ParseEndElement
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)()>(&System::Xml::XmlTextReaderImpl::ParseEndElement)> {
  constexpr static std::size_t size = 0x3ec;
  constexpr static std::size_t addrs = 0x26d8ba4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "ParseEndElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.ThrowTagMismatch
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)(System::Xml::System__Xml__XmlTextReaderImpl__NodeData)>(&System::Xml::XmlTextReaderImpl::ThrowTagMismatch)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x26da8e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "ThrowTagMismatch",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::System__Xml__XmlTextReaderImpl__NodeData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.ParseAttributes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)()>(&System::Xml::XmlTextReaderImpl::ParseAttributes)> {
  constexpr static std::size_t size = 0x63c;
  constexpr static std::size_t addrs = 0x26d913c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "ParseAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.ElementNamespaceLookup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)()>(&System::Xml::XmlTextReaderImpl::ElementNamespaceLookup)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x26da18c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "ElementNamespaceLookup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.AttributeNamespaceLookup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)()>(&System::Xml::XmlTextReaderImpl::AttributeNamespaceLookup)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x26da840;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "AttributeNamespaceLookup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.AttributeDuplCheck
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)()>(&System::Xml::XmlTextReaderImpl::AttributeDuplCheck)> {
  constexpr static std::size_t size = 0x374;
  constexpr static std::size_t addrs = 0x26dba10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "AttributeDuplCheck",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.OnDefaultNamespaceDecl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)(System::Xml::System__Xml__XmlTextReaderImpl__NodeData)>(&System::Xml::XmlTextReaderImpl::OnDefaultNamespaceDecl)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x26db64c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "OnDefaultNamespaceDecl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::System__Xml__XmlTextReaderImpl__NodeData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.OnNamespaceDecl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)(System::Xml::System__Xml__XmlTextReaderImpl__NodeData)>(&System::Xml::XmlTextReaderImpl::OnNamespaceDecl)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x26db748;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "OnNamespaceDecl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::System__Xml__XmlTextReaderImpl__NodeData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.OnXmlReservedAttribute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)(System::Xml::System__Xml__XmlTextReaderImpl__NodeData)>(&System::Xml::XmlTextReaderImpl::OnXmlReservedAttribute)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x26db824;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "OnXmlReservedAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::System__Xml__XmlTextReaderImpl__NodeData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.ParseAttributeValueSlow
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)(int32_t, char16_t, System::Xml::System__Xml__XmlTextReaderImpl__NodeData)>(&System::Xml::XmlTextReaderImpl::ParseAttributeValueSlow)> {
  constexpr static std::size_t size = 0x948;
  constexpr static std::size_t addrs = 0x26dad04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "ParseAttributeValueSlow",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::System__Xml__XmlTextReaderImpl__NodeData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.AddAttributeChunkToList
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)(System::Xml::System__Xml__XmlTextReaderImpl__NodeData, System::Xml::System__Xml__XmlTextReaderImpl__NodeData, ByRef<System::Xml::System__Xml__XmlTextReaderImpl__NodeData>)>(&System::Xml::XmlTextReaderImpl::AddAttributeChunkToList)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x26dc11c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "AddAttributeChunkToList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::System__Xml__XmlTextReaderImpl__NodeData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::System__Xml__XmlTextReaderImpl__NodeData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Xml::System__Xml__XmlTextReaderImpl__NodeData>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.ParseText
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlTextReaderImpl::*)()>(&System::Xml::XmlTextReaderImpl::ParseText)> {
  constexpr static std::size_t size = 0x374;
  constexpr static std::size_t addrs = 0x26d8634;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "ParseText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.ParseText
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlTextReaderImpl::*)(ByRef<int32_t>, ByRef<int32_t>, ByRef<int32_t>)>(&System::Xml::XmlTextReaderImpl::ParseText)> {
  constexpr static std::size_t size = 0x6cc;
  constexpr static std::size_t addrs = 0x26dc288;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "ParseText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.FinishPartialValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)()>(&System::Xml::XmlTextReaderImpl::FinishPartialValue)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x26d03d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "FinishPartialValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.FinishOtherValueIterator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)()>(&System::Xml::XmlTextReaderImpl::FinishOtherValueIterator)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x26d0490;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "FinishOtherValueIterator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.SkipPartialTextValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)()>(&System::Xml::XmlTextReaderImpl::SkipPartialTextValue)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x26d2ae8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "SkipPartialTextValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.FinishReadValueChunk
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)()>(&System::Xml::XmlTextReaderImpl::FinishReadValueChunk)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x26d2b28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "FinishReadValueChunk",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.FinishReadContentAsBinary
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)()>(&System::Xml::XmlTextReaderImpl::FinishReadContentAsBinary)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x26d2b48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "FinishReadContentAsBinary",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.FinishReadElementContentAsBinary
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)()>(&System::Xml::XmlTextReaderImpl::FinishReadElementContentAsBinary)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x26d2b98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "FinishReadElementContentAsBinary",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.ParseRootLevelWhitespace
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlTextReaderImpl::*)()>(&System::Xml::XmlTextReaderImpl::ParseRootLevelWhitespace)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x26d89a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "ParseRootLevelWhitespace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.ParseEntityReference
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)()>(&System::Xml::XmlTextReaderImpl::ParseEntityReference)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x26d2678;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "ParseEntityReference",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.HandleEntityReference
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Xml::System__Xml__XmlTextReaderImpl__EntityType (System::Xml::XmlTextReaderImpl::*)(bool, System::Xml::System__Xml__XmlTextReaderImpl__EntityExpandType, ByRef<int32_t>)>(&System::Xml::XmlTextReaderImpl::HandleEntityReference)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x26d8388;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "HandleEntityReference",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::System__Xml__XmlTextReaderImpl__EntityExpandType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.HandleGeneralEntityReference
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Xml::System__Xml__XmlTextReaderImpl__EntityType (System::Xml::XmlTextReaderImpl::*)(::StringW, bool, bool, int32_t)>(&System::Xml::XmlTextReaderImpl::HandleGeneralEntityReference)> {
  constexpr static std::size_t size = 0x4a4;
  constexpr static std::size_t addrs = 0x26d3698;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "HandleGeneralEntityReference",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.get_InEntity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlTextReaderImpl::*)()>(&System::Xml::XmlTextReaderImpl::get_InEntity)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x26d766c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "get_InEntity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.HandleEntityEnd
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlTextReaderImpl::*)(bool)>(&System::Xml::XmlTextReaderImpl::HandleEntityEnd)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x26d689c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "HandleEntityEnd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.SetupEndEntityNodeInContent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)()>(&System::Xml::XmlTextReaderImpl::SetupEndEntityNodeInContent)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x26d26ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "SetupEndEntityNodeInContent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.SetupEndEntityNodeInAttribute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)()>(&System::Xml::XmlTextReaderImpl::SetupEndEntityNodeInAttribute)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x26dcb84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "SetupEndEntityNodeInAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.ParsePI
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlTextReaderImpl::*)()>(&System::Xml::XmlTextReaderImpl::ParsePI)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26d7bd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "ParsePI",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.ParsePI
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlTextReaderImpl::*)(System::Text::StringBuilder)>(&System::Xml::XmlTextReaderImpl::ParsePI)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x26d4568;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "ParsePI",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::StringBuilder>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.ParsePIValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlTextReaderImpl::*)(ByRef<int32_t>, ByRef<int32_t>)>(&System::Xml::XmlTextReaderImpl::ParsePIValue)> {
  constexpr static std::size_t size = 0x394;
  constexpr static std::size_t addrs = 0x26dcbec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "ParsePIValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.ParseComment
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlTextReaderImpl::*)()>(&System::Xml::XmlTextReaderImpl::ParseComment)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x26d7bdc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "ParseComment",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.ParseCData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)()>(&System::Xml::XmlTextReaderImpl::ParseCData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26d7c40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "ParseCData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.ParseCDataOrComment
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)(System::Xml::XmlNodeType)>(&System::Xml::XmlTextReaderImpl::ParseCDataOrComment)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x26d4a5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "ParseCDataOrComment",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::XmlNodeType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.ParseCDataOrComment
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlTextReaderImpl::*)(System::Xml::XmlNodeType, ByRef<int32_t>, ByRef<int32_t>)>(&System::Xml::XmlTextReaderImpl::ParseCDataOrComment)> {
  constexpr static std::size_t size = 0x43c;
  constexpr static std::size_t addrs = 0x26dcf80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "ParseCDataOrComment",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::XmlNodeType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.ParseDoctypeDecl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlTextReaderImpl::*)()>(&System::Xml::XmlTextReaderImpl::ParseDoctypeDecl)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x26d7c48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "ParseDoctypeDecl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.ParseDtd
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)()>(&System::Xml::XmlTextReaderImpl::ParseDtd)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x26dd3bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "ParseDtd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.SkipDtd
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)()>(&System::Xml::XmlTextReaderImpl::SkipDtd)> {
  constexpr static std::size_t size = 0x358;
  constexpr static std::size_t addrs = 0x26dd6d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "SkipDtd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.SkipPublicOrSystemIdLiteral
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)()>(&System::Xml::XmlTextReaderImpl::SkipPublicOrSystemIdLiteral)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x26dda30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "SkipPublicOrSystemIdLiteral",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.SkipUntil
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)(char16_t, bool)>(&System::Xml::XmlTextReaderImpl::SkipUntil)> {
  constexpr static std::size_t size = 0x43c;
  constexpr static std::size_t addrs = 0x26ddae8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "SkipUntil",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.EatWhitespaces
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Xml::XmlTextReaderImpl::*)(System::Text::StringBuilder)>(&System::Xml::XmlTextReaderImpl::EatWhitespaces)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x26d5a50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "EatWhitespaces",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::StringBuilder>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.ParseCharRefInline
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Xml::XmlTextReaderImpl::*)(int32_t, ByRef<int32_t>, ByRef<System::Xml::System__Xml__XmlTextReaderImpl__EntityType>)>(&System::Xml::XmlTextReaderImpl::ParseCharRefInline)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x26dc9ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "ParseCharRefInline",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Xml::System__Xml__XmlTextReaderImpl__EntityType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.ParseNumericCharRef
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Xml::XmlTextReaderImpl::*)(bool, System::Text::StringBuilder, ByRef<System::Xml::System__Xml__XmlTextReaderImpl__EntityType>)>(&System::Xml::XmlTextReaderImpl::ParseNumericCharRef)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x26d440c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "ParseNumericCharRef",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::StringBuilder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Xml::System__Xml__XmlTextReaderImpl__EntityType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.ParseNumericCharRefInline
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Xml::XmlTextReaderImpl::*)(int32_t, bool, System::Text::StringBuilder, ByRef<int32_t>, ByRef<System::Xml::System__Xml__XmlTextReaderImpl__EntityType>)>(&System::Xml::XmlTextReaderImpl::ParseNumericCharRefInline)> {
  constexpr static std::size_t size = 0x660;
  constexpr static std::size_t addrs = 0x26ddf24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "ParseNumericCharRefInline",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::StringBuilder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Xml::System__Xml__XmlTextReaderImpl__EntityType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.ParseNamedCharRef
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Xml::XmlTextReaderImpl::*)(bool, System::Text::StringBuilder)>(&System::Xml::XmlTextReaderImpl::ParseNamedCharRef)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x26d44c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "ParseNamedCharRef",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::StringBuilder>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.ParseNamedCharRefInline
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Xml::XmlTextReaderImpl::*)(int32_t, bool, System::Text::StringBuilder)>(&System::Xml::XmlTextReaderImpl::ParseNamedCharRefInline)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x26de584;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "ParseNamedCharRefInline",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::StringBuilder>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.ParseName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Xml::XmlTextReaderImpl::*)()>(&System::Xml::XmlTextReaderImpl::ParseName)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x26d7a2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "ParseName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.ParseQName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Xml::XmlTextReaderImpl::*)(ByRef<int32_t>)>(&System::Xml::XmlTextReaderImpl::ParseQName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x26d912c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "ParseQName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.ParseQName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Xml::XmlTextReaderImpl::*)(bool, int32_t, ByRef<int32_t>)>(&System::Xml::XmlTextReaderImpl::ParseQName)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x26de860;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "ParseQName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.ReadDataInName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlTextReaderImpl::*)(ByRef<int32_t>)>(&System::Xml::XmlTextReaderImpl::ReadDataInName)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x26deae8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "ReadDataInName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.ParseEntityName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XmlTextReaderImpl::*)()>(&System::Xml::XmlTextReaderImpl::ParseEntityName)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x26dc14c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "ParseEntityName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.AddNode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Xml::System__Xml__XmlTextReaderImpl__NodeData (System::Xml::XmlTextReaderImpl::*)(int32_t, int32_t)>(&System::Xml::XmlTextReaderImpl::AddNode)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x26d25f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "AddNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.AllocNode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Xml::System__Xml__XmlTextReaderImpl__NodeData (System::Xml::XmlTextReaderImpl::*)(int32_t, int32_t)>(&System::Xml::XmlTextReaderImpl::AllocNode)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x26deb28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "AllocNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.AddAttributeNoChecks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Xml::System__Xml__XmlTextReaderImpl__NodeData (System::Xml::XmlTextReaderImpl::*)(::StringW, int32_t)>(&System::Xml::XmlTextReaderImpl::AddAttributeNoChecks)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x26d6028;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "AddAttributeNoChecks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.AddAttribute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Xml::System__Xml__XmlTextReaderImpl__NodeData (System::Xml::XmlTextReaderImpl::*)(int32_t, int32_t)>(&System::Xml::XmlTextReaderImpl::AddAttribute)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x26dab60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "AddAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.AddAttribute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Xml::System__Xml__XmlTextReaderImpl__NodeData (System::Xml::XmlTextReaderImpl::*)(::StringW, ::StringW, ::StringW)>(&System::Xml::XmlTextReaderImpl::AddAttribute)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x26dec60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "AddAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.PopElementContext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)()>(&System::Xml::XmlTextReaderImpl::PopElementContext)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x26d2634;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "PopElementContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.OnNewLine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)(int32_t)>(&System::Xml::XmlTextReaderImpl::OnNewLine)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x26d3f94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "OnNewLine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.OnEof
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)()>(&System::Xml::XmlTextReaderImpl::OnEof)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x26d29cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "OnEof",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.LookupNamespace
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XmlTextReaderImpl::*)(System::Xml::System__Xml__XmlTextReaderImpl__NodeData)>(&System::Xml::XmlTextReaderImpl::LookupNamespace)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x26dbd84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "LookupNamespace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::System__Xml__XmlTextReaderImpl__NodeData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.AddNamespace
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)(::StringW, ::StringW, System::Xml::System__Xml__XmlTextReaderImpl__NodeData)>(&System::Xml::XmlTextReaderImpl::AddNamespace)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x26dbec0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "AddNamespace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::System__Xml__XmlTextReaderImpl__NodeData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.ResetAttributes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)()>(&System::Xml::XmlTextReaderImpl::ResetAttributes)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x26d25c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "ResetAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.FullAttributeCleanup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)()>(&System::Xml::XmlTextReaderImpl::FullAttributeCleanup)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x26dedc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "FullAttributeCleanup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.PushXmlContext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)()>(&System::Xml::XmlTextReaderImpl::PushXmlContext)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x26dbe48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "PushXmlContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.PopXmlContext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)()>(&System::Xml::XmlTextReaderImpl::PopXmlContext)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x26ded94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "PopXmlContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.GetWhitespaceType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Xml::XmlNodeType (System::Xml::XmlTextReaderImpl::*)()>(&System::Xml::XmlTextReaderImpl::GetWhitespaceType)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x26dcb3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "GetWhitespaceType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.GetTextNodeType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Xml::XmlNodeType (System::Xml::XmlTextReaderImpl::*)(int32_t)>(&System::Xml::XmlTextReaderImpl::GetTextNodeType)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x26dc954;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "GetTextNodeType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.PushExternalEntityOrSubset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)(::StringW, ::StringW, System::Uri, ::StringW)>(&System::Xml::XmlTextReaderImpl::PushExternalEntityOrSubset)> {
  constexpr static std::size_t size = 0x3cc;
  constexpr static std::size_t addrs = 0x26d5684;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "PushExternalEntityOrSubset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Uri>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.OpenAndPush
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlTextReaderImpl::*)(System::Uri)>(&System::Xml::XmlTextReaderImpl::OpenAndPush)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x26dee24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "OpenAndPush",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Uri>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.PushExternalEntity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlTextReaderImpl::*)(System::Xml::IDtdEntityInfo)>(&System::Xml::XmlTextReaderImpl::PushExternalEntity)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x26d4e14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "PushExternalEntity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::IDtdEntityInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.PushInternalEntity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)(System::Xml::IDtdEntityInfo)>(&System::Xml::XmlTextReaderImpl::PushInternalEntity)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x26d51a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "PushInternalEntity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::IDtdEntityInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.PopEntity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)()>(&System::Xml::XmlTextReaderImpl::PopEntity)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x26d5510;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "PopEntity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.RegisterEntity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)(System::Xml::IDtdEntityInfo)>(&System::Xml::XmlTextReaderImpl::RegisterEntity)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x26df058;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "RegisterEntity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::IDtdEntityInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.UnregisterEntity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)()>(&System::Xml::XmlTextReaderImpl::UnregisterEntity)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x26df248;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "UnregisterEntity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.PushParsingState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)()>(&System::Xml::XmlTextReaderImpl::PushParsingState)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x26d5d08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "PushParsingState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.PopParsingState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)()>(&System::Xml::XmlTextReaderImpl::PopParsingState)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x26d7998;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "PopParsingState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.IncrementalRead
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Xml::XmlTextReaderImpl::*)()>(&System::Xml::XmlTextReaderImpl::IncrementalRead)> {
  constexpr static std::size_t size = 0x934;
  constexpr static std::size_t addrs = 0x26df2ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "IncrementalRead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.FinishIncrementalRead
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)()>(&System::Xml::XmlTextReaderImpl::FinishIncrementalRead)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x26d2824;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "FinishIncrementalRead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.ParseFragmentAttribute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlTextReaderImpl::*)()>(&System::Xml::XmlTextReaderImpl::ParseFragmentAttribute)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x26d2890;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "ParseFragmentAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.ParseAttributeValueChunk
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlTextReaderImpl::*)()>(&System::Xml::XmlTextReaderImpl::ParseAttributeValueChunk)> {
  constexpr static std::size_t size = 0x494;
  constexpr static std::size_t addrs = 0x26d2fb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "ParseAttributeValueChunk",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.ParseXmlDeclarationFragment
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)()>(&System::Xml::XmlTextReaderImpl::ParseXmlDeclarationFragment)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x26d2910;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "ParseXmlDeclarationFragment",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.ThrowUnexpectedToken
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)(int32_t, ::StringW)>(&System::Xml::XmlTextReaderImpl::ThrowUnexpectedToken)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x26d7c30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "ThrowUnexpectedToken",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.ThrowUnexpectedToken
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)(::StringW)>(&System::Xml::XmlTextReaderImpl::ThrowUnexpectedToken)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26d7a24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "ThrowUnexpectedToken",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.ThrowUnexpectedToken
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)(int32_t, ::StringW, ::StringW)>(&System::Xml::XmlTextReaderImpl::ThrowUnexpectedToken)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x26d7ed8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "ThrowUnexpectedToken",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.ThrowUnexpectedToken
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)(::StringW, ::StringW)>(&System::Xml::XmlTextReaderImpl::ThrowUnexpectedToken)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x26d7a4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "ThrowUnexpectedToken",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.ParseUnexpectedToken
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XmlTextReaderImpl::*)(int32_t)>(&System::Xml::XmlTextReaderImpl::ParseUnexpectedToken)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26d7ed0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "ParseUnexpectedToken",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.ParseUnexpectedToken
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XmlTextReaderImpl::*)()>(&System::Xml::XmlTextReaderImpl::ParseUnexpectedToken)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x26dfbe0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "ParseUnexpectedToken",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.ThrowExpectingWhitespace
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)(int32_t)>(&System::Xml::XmlTextReaderImpl::ThrowExpectingWhitespace)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x26daae0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "ThrowExpectingWhitespace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.GetIndexOfAttributeWithoutPrefix
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Xml::XmlTextReaderImpl::*)(::StringW)>(&System::Xml::XmlTextReaderImpl::GetIndexOfAttributeWithoutPrefix)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x26d06b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "GetIndexOfAttributeWithoutPrefix",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.GetIndexOfAttributeWithPrefix
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Xml::XmlTextReaderImpl::*)(::StringW)>(&System::Xml::XmlTextReaderImpl::GetIndexOfAttributeWithPrefix)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x26d07a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "GetIndexOfAttributeWithPrefix",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.ZeroEndingStream
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlTextReaderImpl::*)(int32_t)>(&System::Xml::XmlTextReaderImpl::ZeroEndingStream)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x26dca18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "ZeroEndingStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.ParseDtdFromParserContext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)()>(&System::Xml::XmlTextReaderImpl::ParseDtdFromParserContext)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x26d6e58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "ParseDtdFromParserContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.MoveToNextContentNode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlTextReaderImpl::*)(bool)>(&System::Xml::XmlTextReaderImpl::MoveToNextContentNode)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x26dca94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "MoveToNextContentNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.get_DtdInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Xml::IDtdInfo (System::Xml::XmlTextReaderImpl::*)()>(&System::Xml::XmlTextReaderImpl::get_DtdInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26dfca8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::XmlTextReaderImpl),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                                  29
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.SetDtdInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)(System::Xml::IDtdInfo)>(&System::Xml::XmlTextReaderImpl::SetDtdInfo)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x26dfcb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "SetDtdInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::IDtdInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.set_XmlValidatingReaderCompatibilityMode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)(bool)>(&System::Xml::XmlTextReaderImpl::set_XmlValidatingReaderCompatibilityMode)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x26dfde4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "set_XmlValidatingReaderCompatibilityMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.AddDefaultAttributeDtd
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlTextReaderImpl::*)(System::Xml::IDtdDefaultAttributeInfo, bool, ::ArrayW<System::Xml::System__Xml__XmlTextReaderImpl__NodeData>)>(&System::Xml::XmlTextReaderImpl::AddDefaultAttributeDtd)> {
  constexpr static std::size_t size = 0x66c;
  constexpr static std::size_t addrs = 0x26da1d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "AddDefaultAttributeDtd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::IDtdDefaultAttributeInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Xml::System__Xml__XmlTextReaderImpl__NodeData>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.AddDefaultAttributeInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Xml::System__Xml__XmlTextReaderImpl__NodeData (System::Xml::XmlTextReaderImpl::*)(::StringW, ::StringW, ::StringW, ::StringW, int32_t, int32_t, int32_t, int32_t, bool)>(&System::Xml::XmlTextReaderImpl::AddDefaultAttributeInternal)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x26dfebc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "AddDefaultAttributeInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.set_DisableUndeclaredEntityCheck
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)(bool)>(&System::Xml::XmlTextReaderImpl::set_DisableUndeclaredEntityCheck)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x26e0100;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "set_DisableUndeclaredEntityCheck",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.RegisterConsumedCharacters
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::*)(int64_t, bool)>(&System::Xml::XmlTextReaderImpl::RegisterConsumedCharacters)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x26d5e28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "RegisterConsumedCharacters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.StripSpaces
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&System::Xml::XmlTextReaderImpl::StripSpaces)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x26e010c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "StripSpaces",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.StripSpaces
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<char16_t>, int32_t, ByRef<int32_t>)>(&System::Xml::XmlTextReaderImpl::StripSpaces)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x26e0334;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "StripSpaces",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.BlockCopyChars
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<char16_t>, int32_t, ::ArrayW<char16_t>, int32_t, int32_t)>(&System::Xml::XmlTextReaderImpl::BlockCopyChars)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x26d76e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "BlockCopyChars",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlTextReaderImpl.BlockCopy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, int32_t, int32_t)>(&System::Xml::XmlTextReaderImpl::BlockCopy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26d76fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "BlockCopy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Xml::IXmlNamespaceResolver
constexpr  System::Xml::XmlTextReaderImpl::operator System::Xml::IXmlNamespaceResolver() const noexcept {
return System::Xml::IXmlNamespaceResolver(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlTextReaderImpl::__set_laterInitParam(System::Xml::System__Xml__XmlTextReaderImpl__LaterInitParam value)  {
::cordl_internals::setInstanceField<System::Xml::System__Xml__XmlTextReaderImpl__LaterInitParam, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Xml::System__Xml__XmlTextReaderImpl__LaterInitParam>(value));
}
constexpr System::Xml::System__Xml__XmlTextReaderImpl__LaterInitParam System::Xml::XmlTextReaderImpl::__get_laterInitParam() const {
return ::cordl_internals::getInstanceField<System::Xml::System__Xml__XmlTextReaderImpl__LaterInitParam, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlTextReaderImpl::__set_xmlCharType(System::Xml::XmlCharType value)  {
::cordl_internals::setInstanceField<System::Xml::XmlCharType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Xml::XmlCharType>(value));
}
constexpr System::Xml::XmlCharType System::Xml::XmlTextReaderImpl::__get_xmlCharType() const {
return ::cordl_internals::getInstanceField<System::Xml::XmlCharType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlTextReaderImpl::__set_ps(System::Xml::System__Xml__XmlTextReaderImpl__ParsingState value)  {
::cordl_internals::setInstanceField<System::Xml::System__Xml__XmlTextReaderImpl__ParsingState, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Xml::System__Xml__XmlTextReaderImpl__ParsingState>(value));
}
constexpr System::Xml::System__Xml__XmlTextReaderImpl__ParsingState System::Xml::XmlTextReaderImpl::__get_ps() const {
return ::cordl_internals::getInstanceField<System::Xml::System__Xml__XmlTextReaderImpl__ParsingState, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlTextReaderImpl::__set_parsingFunction(System::Xml::System__Xml__XmlTextReaderImpl__ParsingFunction value)  {
::cordl_internals::setInstanceField<System::Xml::System__Xml__XmlTextReaderImpl__ParsingFunction, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Xml::System__Xml__XmlTextReaderImpl__ParsingFunction>(value));
}
constexpr System::Xml::System__Xml__XmlTextReaderImpl__ParsingFunction System::Xml::XmlTextReaderImpl::__get_parsingFunction() const {
return ::cordl_internals::getInstanceField<System::Xml::System__Xml__XmlTextReaderImpl__ParsingFunction, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlTextReaderImpl::__set_nextParsingFunction(System::Xml::System__Xml__XmlTextReaderImpl__ParsingFunction value)  {
::cordl_internals::setInstanceField<System::Xml::System__Xml__XmlTextReaderImpl__ParsingFunction, 0x9c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Xml::System__Xml__XmlTextReaderImpl__ParsingFunction>(value));
}
constexpr System::Xml::System__Xml__XmlTextReaderImpl__ParsingFunction System::Xml::XmlTextReaderImpl::__get_nextParsingFunction() const {
return ::cordl_internals::getInstanceField<System::Xml::System__Xml__XmlTextReaderImpl__ParsingFunction, 0x9c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlTextReaderImpl::__set_nextNextParsingFunction(System::Xml::System__Xml__XmlTextReaderImpl__ParsingFunction value)  {
::cordl_internals::setInstanceField<System::Xml::System__Xml__XmlTextReaderImpl__ParsingFunction, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Xml::System__Xml__XmlTextReaderImpl__ParsingFunction>(value));
}
constexpr System::Xml::System__Xml__XmlTextReaderImpl__ParsingFunction System::Xml::XmlTextReaderImpl::__get_nextNextParsingFunction() const {
return ::cordl_internals::getInstanceField<System::Xml::System__Xml__XmlTextReaderImpl__ParsingFunction, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlTextReaderImpl::__set_nodes(::ArrayW<System::Xml::System__Xml__XmlTextReaderImpl__NodeData> value)  {
::cordl_internals::setInstanceField<::ArrayW<System::Xml::System__Xml__XmlTextReaderImpl__NodeData>, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<System::Xml::System__Xml__XmlTextReaderImpl__NodeData>>(value));
}
constexpr ::ArrayW<System::Xml::System__Xml__XmlTextReaderImpl__NodeData> System::Xml::XmlTextReaderImpl::__get_nodes() const {
return ::cordl_internals::getInstanceField<::ArrayW<System::Xml::System__Xml__XmlTextReaderImpl__NodeData>, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlTextReaderImpl::__set_curNode(System::Xml::System__Xml__XmlTextReaderImpl__NodeData value)  {
::cordl_internals::setInstanceField<System::Xml::System__Xml__XmlTextReaderImpl__NodeData, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Xml::System__Xml__XmlTextReaderImpl__NodeData>(value));
}
constexpr System::Xml::System__Xml__XmlTextReaderImpl__NodeData System::Xml::XmlTextReaderImpl::__get_curNode() const {
return ::cordl_internals::getInstanceField<System::Xml::System__Xml__XmlTextReaderImpl__NodeData, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlTextReaderImpl::__set_index(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Xml::XmlTextReaderImpl::__get_index() const {
return ::cordl_internals::getInstanceField<int32_t, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlTextReaderImpl::__set_curAttrIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0xbc>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Xml::XmlTextReaderImpl::__get_curAttrIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0xbc>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlTextReaderImpl::__set_attrCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Xml::XmlTextReaderImpl::__get_attrCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlTextReaderImpl::__set_attrHashtable(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0xc4>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Xml::XmlTextReaderImpl::__get_attrHashtable() const {
return ::cordl_internals::getInstanceField<int32_t, 0xc4>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlTextReaderImpl::__set_attrDuplWalkCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Xml::XmlTextReaderImpl::__get_attrDuplWalkCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlTextReaderImpl::__set_attrNeedNamespaceLookup(bool value)  {
::cordl_internals::setInstanceField<bool, 0xcc>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Xml::XmlTextReaderImpl::__get_attrNeedNamespaceLookup() const {
return ::cordl_internals::getInstanceField<bool, 0xcc>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlTextReaderImpl::__set_fullAttrCleanup(bool value)  {
::cordl_internals::setInstanceField<bool, 0xcd>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Xml::XmlTextReaderImpl::__get_fullAttrCleanup() const {
return ::cordl_internals::getInstanceField<bool, 0xcd>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlTextReaderImpl::__set_attrDuplSortingArray(::ArrayW<System::Xml::System__Xml__XmlTextReaderImpl__NodeData> value)  {
::cordl_internals::setInstanceField<::ArrayW<System::Xml::System__Xml__XmlTextReaderImpl__NodeData>, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<System::Xml::System__Xml__XmlTextReaderImpl__NodeData>>(value));
}
constexpr ::ArrayW<System::Xml::System__Xml__XmlTextReaderImpl__NodeData> System::Xml::XmlTextReaderImpl::__get_attrDuplSortingArray() const {
return ::cordl_internals::getInstanceField<::ArrayW<System::Xml::System__Xml__XmlTextReaderImpl__NodeData>, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlTextReaderImpl::__set_nameTable(System::Xml::XmlNameTable value)  {
::cordl_internals::setInstanceField<System::Xml::XmlNameTable, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Xml::XmlNameTable>(value));
}
constexpr System::Xml::XmlNameTable System::Xml::XmlTextReaderImpl::__get_nameTable() const {
return ::cordl_internals::getInstanceField<System::Xml::XmlNameTable, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlTextReaderImpl::__set_nameTableFromSettings(bool value)  {
::cordl_internals::setInstanceField<bool, 0xe0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Xml::XmlTextReaderImpl::__get_nameTableFromSettings() const {
return ::cordl_internals::getInstanceField<bool, 0xe0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlTextReaderImpl::__set_xmlResolver(System::Xml::XmlResolver value)  {
::cordl_internals::setInstanceField<System::Xml::XmlResolver, 0xe8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Xml::XmlResolver>(value));
}
constexpr System::Xml::XmlResolver System::Xml::XmlTextReaderImpl::__get_xmlResolver() const {
return ::cordl_internals::getInstanceField<System::Xml::XmlResolver, 0xe8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlTextReaderImpl::__set_url(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0xf0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Xml::XmlTextReaderImpl::__get_url() const {
return ::cordl_internals::getInstanceField<::StringW, 0xf0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlTextReaderImpl::__set_normalize(bool value)  {
::cordl_internals::setInstanceField<bool, 0xf8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Xml::XmlTextReaderImpl::__get_normalize() const {
return ::cordl_internals::getInstanceField<bool, 0xf8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlTextReaderImpl::__set_supportNamespaces(bool value)  {
::cordl_internals::setInstanceField<bool, 0xf9>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Xml::XmlTextReaderImpl::__get_supportNamespaces() const {
return ::cordl_internals::getInstanceField<bool, 0xf9>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlTextReaderImpl::__set_whitespaceHandling(System::Xml::WhitespaceHandling value)  {
::cordl_internals::setInstanceField<System::Xml::WhitespaceHandling, 0xfc>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Xml::WhitespaceHandling>(value));
}
constexpr System::Xml::WhitespaceHandling System::Xml::XmlTextReaderImpl::__get_whitespaceHandling() const {
return ::cordl_internals::getInstanceField<System::Xml::WhitespaceHandling, 0xfc>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlTextReaderImpl::__set_dtdProcessing(System::Xml::DtdProcessing value)  {
::cordl_internals::setInstanceField<System::Xml::DtdProcessing, 0x100>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Xml::DtdProcessing>(value));
}
constexpr System::Xml::DtdProcessing System::Xml::XmlTextReaderImpl::__get_dtdProcessing() const {
return ::cordl_internals::getInstanceField<System::Xml::DtdProcessing, 0x100>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlTextReaderImpl::__set_entityHandling(System::Xml::EntityHandling value)  {
::cordl_internals::setInstanceField<System::Xml::EntityHandling, 0x104>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Xml::EntityHandling>(value));
}
constexpr System::Xml::EntityHandling System::Xml::XmlTextReaderImpl::__get_entityHandling() const {
return ::cordl_internals::getInstanceField<System::Xml::EntityHandling, 0x104>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlTextReaderImpl::__set_ignorePIs(bool value)  {
::cordl_internals::setInstanceField<bool, 0x108>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Xml::XmlTextReaderImpl::__get_ignorePIs() const {
return ::cordl_internals::getInstanceField<bool, 0x108>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlTextReaderImpl::__set_ignoreComments(bool value)  {
::cordl_internals::setInstanceField<bool, 0x109>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Xml::XmlTextReaderImpl::__get_ignoreComments() const {
return ::cordl_internals::getInstanceField<bool, 0x109>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlTextReaderImpl::__set_checkCharacters(bool value)  {
::cordl_internals::setInstanceField<bool, 0x10a>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Xml::XmlTextReaderImpl::__get_checkCharacters() const {
return ::cordl_internals::getInstanceField<bool, 0x10a>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlTextReaderImpl::__set_lineNumberOffset(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Xml::XmlTextReaderImpl::__get_lineNumberOffset() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlTextReaderImpl::__set_linePositionOffset(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x110>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Xml::XmlTextReaderImpl::__get_linePositionOffset() const {
return ::cordl_internals::getInstanceField<int32_t, 0x110>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlTextReaderImpl::__set_closeInput(bool value)  {
::cordl_internals::setInstanceField<bool, 0x114>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Xml::XmlTextReaderImpl::__get_closeInput() const {
return ::cordl_internals::getInstanceField<bool, 0x114>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlTextReaderImpl::__set_maxCharactersInDocument(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x118>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int64_t>(value));
}
constexpr int64_t System::Xml::XmlTextReaderImpl::__get_maxCharactersInDocument() const {
return ::cordl_internals::getInstanceField<int64_t, 0x118>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlTextReaderImpl::__set_maxCharactersFromEntities(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x120>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int64_t>(value));
}
constexpr int64_t System::Xml::XmlTextReaderImpl::__get_maxCharactersFromEntities() const {
return ::cordl_internals::getInstanceField<int64_t, 0x120>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlTextReaderImpl::__set_v1Compat(bool value)  {
::cordl_internals::setInstanceField<bool, 0x128>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Xml::XmlTextReaderImpl::__get_v1Compat() const {
return ::cordl_internals::getInstanceField<bool, 0x128>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlTextReaderImpl::__set_namespaceManager(System::Xml::XmlNamespaceManager value)  {
::cordl_internals::setInstanceField<System::Xml::XmlNamespaceManager, 0x130>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Xml::XmlNamespaceManager>(value));
}
constexpr System::Xml::XmlNamespaceManager System::Xml::XmlTextReaderImpl::__get_namespaceManager() const {
return ::cordl_internals::getInstanceField<System::Xml::XmlNamespaceManager, 0x130>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlTextReaderImpl::__set_lastPrefix(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x138>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Xml::XmlTextReaderImpl::__get_lastPrefix() const {
return ::cordl_internals::getInstanceField<::StringW, 0x138>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlTextReaderImpl::__set_xmlContext(System::Xml::System__Xml__XmlTextReaderImpl__XmlContext value)  {
::cordl_internals::setInstanceField<System::Xml::System__Xml__XmlTextReaderImpl__XmlContext, 0x140>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Xml::System__Xml__XmlTextReaderImpl__XmlContext>(value));
}
constexpr System::Xml::System__Xml__XmlTextReaderImpl__XmlContext System::Xml::XmlTextReaderImpl::__get_xmlContext() const {
return ::cordl_internals::getInstanceField<System::Xml::System__Xml__XmlTextReaderImpl__XmlContext, 0x140>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlTextReaderImpl::__set_parsingStatesStack(::ArrayW<System::Xml::System__Xml__XmlTextReaderImpl__ParsingState> value)  {
::cordl_internals::setInstanceField<::ArrayW<System::Xml::System__Xml__XmlTextReaderImpl__ParsingState>, 0x148>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<System::Xml::System__Xml__XmlTextReaderImpl__ParsingState>>(value));
}
constexpr ::ArrayW<System::Xml::System__Xml__XmlTextReaderImpl__ParsingState> System::Xml::XmlTextReaderImpl::__get_parsingStatesStack() const {
return ::cordl_internals::getInstanceField<::ArrayW<System::Xml::System__Xml__XmlTextReaderImpl__ParsingState>, 0x148>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlTextReaderImpl::__set_parsingStatesStackTop(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x150>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Xml::XmlTextReaderImpl::__get_parsingStatesStackTop() const {
return ::cordl_internals::getInstanceField<int32_t, 0x150>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlTextReaderImpl::__set_reportedBaseUri(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x158>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Xml::XmlTextReaderImpl::__get_reportedBaseUri() const {
return ::cordl_internals::getInstanceField<::StringW, 0x158>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlTextReaderImpl::__set_reportedEncoding(System::Text::Encoding value)  {
::cordl_internals::setInstanceField<System::Text::Encoding, 0x160>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Text::Encoding>(value));
}
constexpr System::Text::Encoding System::Xml::XmlTextReaderImpl::__get_reportedEncoding() const {
return ::cordl_internals::getInstanceField<System::Text::Encoding, 0x160>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlTextReaderImpl::__set_dtdInfo(System::Xml::IDtdInfo value)  {
::cordl_internals::setInstanceField<System::Xml::IDtdInfo, 0x168>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Xml::IDtdInfo>(value));
}
constexpr System::Xml::IDtdInfo System::Xml::XmlTextReaderImpl::__get_dtdInfo() const {
return ::cordl_internals::getInstanceField<System::Xml::IDtdInfo, 0x168>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlTextReaderImpl::__set_fragmentType(System::Xml::XmlNodeType value)  {
::cordl_internals::setInstanceField<System::Xml::XmlNodeType, 0x170>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Xml::XmlNodeType>(value));
}
constexpr System::Xml::XmlNodeType System::Xml::XmlTextReaderImpl::__get_fragmentType() const {
return ::cordl_internals::getInstanceField<System::Xml::XmlNodeType, 0x170>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlTextReaderImpl::__set_fragmentParserContext(System::Xml::XmlParserContext value)  {
::cordl_internals::setInstanceField<System::Xml::XmlParserContext, 0x178>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Xml::XmlParserContext>(value));
}
constexpr System::Xml::XmlParserContext System::Xml::XmlTextReaderImpl::__get_fragmentParserContext() const {
return ::cordl_internals::getInstanceField<System::Xml::XmlParserContext, 0x178>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlTextReaderImpl::__set_fragment(bool value)  {
::cordl_internals::setInstanceField<bool, 0x180>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Xml::XmlTextReaderImpl::__get_fragment() const {
return ::cordl_internals::getInstanceField<bool, 0x180>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlTextReaderImpl::__set_incReadDecoder(System::Xml::IncrementalReadDecoder value)  {
::cordl_internals::setInstanceField<System::Xml::IncrementalReadDecoder, 0x188>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Xml::IncrementalReadDecoder>(value));
}
constexpr System::Xml::IncrementalReadDecoder System::Xml::XmlTextReaderImpl::__get_incReadDecoder() const {
return ::cordl_internals::getInstanceField<System::Xml::IncrementalReadDecoder, 0x188>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlTextReaderImpl::__set_incReadState(System::Xml::System__Xml__XmlTextReaderImpl__IncrementalReadState value)  {
::cordl_internals::setInstanceField<System::Xml::System__Xml__XmlTextReaderImpl__IncrementalReadState, 0x190>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Xml::System__Xml__XmlTextReaderImpl__IncrementalReadState>(value));
}
constexpr System::Xml::System__Xml__XmlTextReaderImpl__IncrementalReadState System::Xml::XmlTextReaderImpl::__get_incReadState() const {
return ::cordl_internals::getInstanceField<System::Xml::System__Xml__XmlTextReaderImpl__IncrementalReadState, 0x190>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlTextReaderImpl::__set_incReadLineInfo(System::Xml::LineInfo value)  {
::cordl_internals::setInstanceField<System::Xml::LineInfo, 0x194>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Xml::LineInfo>(value));
}
constexpr System::Xml::LineInfo System::Xml::XmlTextReaderImpl::__get_incReadLineInfo() const {
return ::cordl_internals::getInstanceField<System::Xml::LineInfo, 0x194>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlTextReaderImpl::__set_incReadDepth(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x19c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Xml::XmlTextReaderImpl::__get_incReadDepth() const {
return ::cordl_internals::getInstanceField<int32_t, 0x19c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlTextReaderImpl::__set_incReadLeftStartPos(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x1a0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Xml::XmlTextReaderImpl::__get_incReadLeftStartPos() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1a0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlTextReaderImpl::__set_incReadLeftEndPos(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x1a4>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Xml::XmlTextReaderImpl::__get_incReadLeftEndPos() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1a4>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlTextReaderImpl::__set_attributeValueBaseEntityId(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x1a8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Xml::XmlTextReaderImpl::__get_attributeValueBaseEntityId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1a8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlTextReaderImpl::__set_emptyEntityInAttributeResolved(bool value)  {
::cordl_internals::setInstanceField<bool, 0x1ac>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Xml::XmlTextReaderImpl::__get_emptyEntityInAttributeResolved() const {
return ::cordl_internals::getInstanceField<bool, 0x1ac>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlTextReaderImpl::__set_validationEventHandling(System::Xml::IValidationEventHandling value)  {
::cordl_internals::setInstanceField<System::Xml::IValidationEventHandling, 0x1b0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Xml::IValidationEventHandling>(value));
}
constexpr System::Xml::IValidationEventHandling System::Xml::XmlTextReaderImpl::__get_validationEventHandling() const {
return ::cordl_internals::getInstanceField<System::Xml::IValidationEventHandling, 0x1b0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlTextReaderImpl::__set_onDefaultAttributeUse(System::Xml::System__Xml__XmlTextReaderImpl__OnDefaultAttributeUseDelegate value)  {
::cordl_internals::setInstanceField<System::Xml::System__Xml__XmlTextReaderImpl__OnDefaultAttributeUseDelegate, 0x1b8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Xml::System__Xml__XmlTextReaderImpl__OnDefaultAttributeUseDelegate>(value));
}
constexpr System::Xml::System__Xml__XmlTextReaderImpl__OnDefaultAttributeUseDelegate System::Xml::XmlTextReaderImpl::__get_onDefaultAttributeUse() const {
return ::cordl_internals::getInstanceField<System::Xml::System__Xml__XmlTextReaderImpl__OnDefaultAttributeUseDelegate, 0x1b8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlTextReaderImpl::__set_validatingReaderCompatFlag(bool value)  {
::cordl_internals::setInstanceField<bool, 0x1c0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Xml::XmlTextReaderImpl::__get_validatingReaderCompatFlag() const {
return ::cordl_internals::getInstanceField<bool, 0x1c0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlTextReaderImpl::__set_addDefaultAttributesAndNormalize(bool value)  {
::cordl_internals::setInstanceField<bool, 0x1c1>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Xml::XmlTextReaderImpl::__get_addDefaultAttributesAndNormalize() const {
return ::cordl_internals::getInstanceField<bool, 0x1c1>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlTextReaderImpl::__set_stringBuilder(System::Text::StringBuilder value)  {
::cordl_internals::setInstanceField<System::Text::StringBuilder, 0x1c8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Text::StringBuilder>(value));
}
constexpr System::Text::StringBuilder System::Xml::XmlTextReaderImpl::__get_stringBuilder() const {
return ::cordl_internals::getInstanceField<System::Text::StringBuilder, 0x1c8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlTextReaderImpl::__set_rootElementParsed(bool value)  {
::cordl_internals::setInstanceField<bool, 0x1d0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Xml::XmlTextReaderImpl::__get_rootElementParsed() const {
return ::cordl_internals::getInstanceField<bool, 0x1d0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlTextReaderImpl::__set_standalone(bool value)  {
::cordl_internals::setInstanceField<bool, 0x1d1>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Xml::XmlTextReaderImpl::__get_standalone() const {
return ::cordl_internals::getInstanceField<bool, 0x1d1>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlTextReaderImpl::__set_nextEntityId(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x1d4>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Xml::XmlTextReaderImpl::__get_nextEntityId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1d4>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlTextReaderImpl::__set_parsingMode(System::Xml::System__Xml__XmlTextReaderImpl__ParsingMode value)  {
::cordl_internals::setInstanceField<System::Xml::System__Xml__XmlTextReaderImpl__ParsingMode, 0x1d8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Xml::System__Xml__XmlTextReaderImpl__ParsingMode>(value));
}
constexpr System::Xml::System__Xml__XmlTextReaderImpl__ParsingMode System::Xml::XmlTextReaderImpl::__get_parsingMode() const {
return ::cordl_internals::getInstanceField<System::Xml::System__Xml__XmlTextReaderImpl__ParsingMode, 0x1d8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlTextReaderImpl::__set_readState(System::Xml::ReadState value)  {
::cordl_internals::setInstanceField<System::Xml::ReadState, 0x1dc>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Xml::ReadState>(value));
}
constexpr System::Xml::ReadState System::Xml::XmlTextReaderImpl::__get_readState() const {
return ::cordl_internals::getInstanceField<System::Xml::ReadState, 0x1dc>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlTextReaderImpl::__set_lastEntity(System::Xml::IDtdEntityInfo value)  {
::cordl_internals::setInstanceField<System::Xml::IDtdEntityInfo, 0x1e0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Xml::IDtdEntityInfo>(value));
}
constexpr System::Xml::IDtdEntityInfo System::Xml::XmlTextReaderImpl::__get_lastEntity() const {
return ::cordl_internals::getInstanceField<System::Xml::IDtdEntityInfo, 0x1e0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlTextReaderImpl::__set_afterResetState(bool value)  {
::cordl_internals::setInstanceField<bool, 0x1e8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Xml::XmlTextReaderImpl::__get_afterResetState() const {
return ::cordl_internals::getInstanceField<bool, 0x1e8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlTextReaderImpl::__set_documentStartBytePos(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x1ec>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Xml::XmlTextReaderImpl::__get_documentStartBytePos() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1ec>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlTextReaderImpl::__set_readValueOffset(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x1f0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Xml::XmlTextReaderImpl::__get_readValueOffset() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1f0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlTextReaderImpl::__set_charactersInDocument(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x1f8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int64_t>(value));
}
constexpr int64_t System::Xml::XmlTextReaderImpl::__get_charactersInDocument() const {
return ::cordl_internals::getInstanceField<int64_t, 0x1f8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlTextReaderImpl::__set_charactersFromEntities(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x200>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int64_t>(value));
}
constexpr int64_t System::Xml::XmlTextReaderImpl::__get_charactersFromEntities() const {
return ::cordl_internals::getInstanceField<int64_t, 0x200>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlTextReaderImpl::__set_currentEntities(System::Collections::Generic::Dictionary_2<System::Xml::IDtdEntityInfo,System::Xml::IDtdEntityInfo> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Dictionary_2<System::Xml::IDtdEntityInfo,System::Xml::IDtdEntityInfo>, 0x208>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::Dictionary_2<System::Xml::IDtdEntityInfo,System::Xml::IDtdEntityInfo>>(value));
}
constexpr System::Collections::Generic::Dictionary_2<System::Xml::IDtdEntityInfo,System::Xml::IDtdEntityInfo> System::Xml::XmlTextReaderImpl::__get_currentEntities() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Dictionary_2<System::Xml::IDtdEntityInfo,System::Xml::IDtdEntityInfo>, 0x208>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlTextReaderImpl::__set_disableUndeclaredEntityCheck(bool value)  {
::cordl_internals::setInstanceField<bool, 0x210>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Xml::XmlTextReaderImpl::__get_disableUndeclaredEntityCheck() const {
return ::cordl_internals::getInstanceField<bool, 0x210>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlTextReaderImpl::__set_outerReader(System::Xml::XmlReader value)  {
::cordl_internals::setInstanceField<System::Xml::XmlReader, 0x218>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Xml::XmlReader>(value));
}
constexpr System::Xml::XmlReader System::Xml::XmlTextReaderImpl::__get_outerReader() const {
return ::cordl_internals::getInstanceField<System::Xml::XmlReader, 0x218>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlTextReaderImpl::__set_xmlResolverIsSet(bool value)  {
::cordl_internals::setInstanceField<bool, 0x220>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Xml::XmlTextReaderImpl::__get_xmlResolverIsSet() const {
return ::cordl_internals::getInstanceField<bool, 0x220>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlTextReaderImpl::__set_Xml(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x228>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Xml::XmlTextReaderImpl::__get_Xml() const {
return ::cordl_internals::getInstanceField<::StringW, 0x228>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlTextReaderImpl::__set_XmlNs(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x230>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Xml::XmlTextReaderImpl::__get_XmlNs() const {
return ::cordl_internals::getInstanceField<::StringW, 0x230>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlTextReaderImpl::__set_parseText_dummyTask(System::Threading::Tasks::Task_1<System::Tuple_4<int32_t,int32_t,int32_t,bool>> value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::Task_1<System::Tuple_4<int32_t,int32_t,int32_t,bool>>, 0x238>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::Task_1<System::Tuple_4<int32_t,int32_t,int32_t,bool>>>(value));
}
constexpr System::Threading::Tasks::Task_1<System::Tuple_4<int32_t,int32_t,int32_t,bool>> System::Xml::XmlTextReaderImpl::__get_parseText_dummyTask() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::Task_1<System::Tuple_4<int32_t,int32_t,int32_t,bool>>, 0x238>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Xml::XmlTextReaderImpl System::Xml::XmlTextReaderImpl::New_ctor(System::Xml::XmlNameTable nt)  {
System::Xml::XmlTextReaderImpl o{THROW_UNLESS(::il2cpp_utils::New<System::Xml::XmlTextReaderImpl>(nt))};
return o;
}
 void System::Xml::XmlTextReaderImpl::_ctor(System::Xml::XmlNameTable nt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::XmlNameTable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, nt);
}
 System::Xml::XmlTextReaderImpl System::Xml::XmlTextReaderImpl::New_ctor(System::IO::TextReader input, System::Xml::XmlNameTable nt)  {
System::Xml::XmlTextReaderImpl o{THROW_UNLESS(::il2cpp_utils::New<System::Xml::XmlTextReaderImpl>(input, nt))};
return o;
}
 void System::Xml::XmlTextReaderImpl::_ctor(System::IO::TextReader input, System::Xml::XmlNameTable nt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::TextReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::XmlNameTable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, input, nt);
}
 System::Xml::XmlTextReaderImpl System::Xml::XmlTextReaderImpl::New_ctor(::StringW url, System::IO::TextReader input, System::Xml::XmlNameTable nt)  {
System::Xml::XmlTextReaderImpl o{THROW_UNLESS(::il2cpp_utils::New<System::Xml::XmlTextReaderImpl>(url, input, nt))};
return o;
}
 void System::Xml::XmlTextReaderImpl::_ctor(::StringW url, System::IO::TextReader input, System::Xml::XmlNameTable nt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::TextReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::XmlNameTable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, url, input, nt);
}
 System::Xml::XmlTextReaderImpl System::Xml::XmlTextReaderImpl::New_ctor(::StringW xmlFragment, System::Xml::XmlNodeType fragType, System::Xml::XmlParserContext context)  {
System::Xml::XmlTextReaderImpl o{THROW_UNLESS(::il2cpp_utils::New<System::Xml::XmlTextReaderImpl>(xmlFragment, fragType, context))};
return o;
}
 void System::Xml::XmlTextReaderImpl::_ctor(::StringW xmlFragment, System::Xml::XmlNodeType fragType, System::Xml::XmlParserContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::XmlNodeType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::XmlParserContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, xmlFragment, fragType, context);
}
 System::Xml::XmlTextReaderImpl System::Xml::XmlTextReaderImpl::New_ctor(::StringW xmlFragment, System::Xml::XmlParserContext context)  {
System::Xml::XmlTextReaderImpl o{THROW_UNLESS(::il2cpp_utils::New<System::Xml::XmlTextReaderImpl>(xmlFragment, context))};
return o;
}
 void System::Xml::XmlTextReaderImpl::_ctor(::StringW xmlFragment, System::Xml::XmlParserContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::XmlParserContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, xmlFragment, context);
}
 void System::Xml::XmlTextReaderImpl::FinishInitUriString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "FinishInitUriString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Xml::XmlTextReaderImpl::FinishInitStream()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "FinishInitStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Xml::XmlTextReaderImpl::FinishInitTextReader()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "FinishInitTextReader",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Xml::XmlReaderSettings System::Xml::XmlTextReaderImpl::get_Settings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "get_Settings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Xml::XmlReaderSettings, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Xml::XmlNodeType System::Xml::XmlTextReaderImpl::get_NodeType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "get_NodeType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Xml::XmlNodeType, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Xml::XmlTextReaderImpl::get_Name()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "get_Name",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Xml::XmlTextReaderImpl::get_LocalName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "get_LocalName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Xml::XmlTextReaderImpl::get_NamespaceURI()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "get_NamespaceURI",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Xml::XmlTextReaderImpl::get_Prefix()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "get_Prefix",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Xml::XmlTextReaderImpl::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Xml::XmlTextReaderImpl::get_BaseURI()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "get_BaseURI",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Xml::XmlTextReaderImpl::get_IsEmptyElement()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "get_IsEmptyElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Xml::XmlTextReaderImpl::get_IsDefault()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "get_IsDefault",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Xml::ReadState System::Xml::XmlTextReaderImpl::get_ReadState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "get_ReadState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Xml::ReadState, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Xml::XmlNameTable System::Xml::XmlTextReaderImpl::get_NameTable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "get_NameTable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Xml::XmlNameTable, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Xml::XmlTextReaderImpl::get_CanResolveEntity()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "get_CanResolveEntity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Xml::XmlTextReaderImpl::MoveToAttribute(::StringW name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "MoveToAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, name);
}
 bool System::Xml::XmlTextReaderImpl::MoveToFirstAttribute()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "MoveToFirstAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Xml::XmlTextReaderImpl::MoveToNextAttribute()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "MoveToNextAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Xml::XmlTextReaderImpl::MoveToElement()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "MoveToElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Xml::XmlTextReaderImpl::FinishInit()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "FinishInit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Xml::XmlTextReaderImpl::Read()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "Read",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Xml::XmlTextReaderImpl::Close()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "Close",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Xml::XmlTextReaderImpl::LookupNamespace(::StringW prefix)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "LookupNamespace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, prefix);
}
 bool System::Xml::XmlTextReaderImpl::ReadAttributeValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "ReadAttributeValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Xml::XmlTextReaderImpl::ResolveEntity()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "ResolveEntity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Xml::XmlTextReaderImpl::set_OuterReader(System::Xml::XmlReader value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "set_OuterReader",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::XmlReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::StringW System::Xml::XmlTextReaderImpl::System_Xml_IXmlNamespaceResolver_LookupNamespace(::StringW prefix)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "System.Xml.IXmlNamespaceResolver.LookupNamespace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, prefix);
}
 ::StringW System::Xml::XmlTextReaderImpl::System_Xml_IXmlNamespaceResolver_LookupPrefix(::StringW namespaceName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "System.Xml.IXmlNamespaceResolver.LookupPrefix",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, namespaceName);
}
 ::StringW System::Xml::XmlTextReaderImpl::LookupPrefix(::StringW namespaceName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "LookupPrefix",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, namespaceName);
}
 void System::Xml::XmlTextReaderImpl::set_Namespaces(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "set_Namespaces",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void System::Xml::XmlTextReaderImpl::set_EntityHandling(System::Xml::EntityHandling value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "set_EntityHandling",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::EntityHandling>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void System::Xml::XmlTextReaderImpl::set_XmlResolver(System::Xml::XmlResolver value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "set_XmlResolver",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::XmlResolver>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 System::Xml::XmlNameTable System::Xml::XmlTextReaderImpl::get_DtdParserProxy_NameTable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "get_DtdParserProxy_NameTable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Xml::XmlNameTable, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Xml::IXmlNamespaceResolver System::Xml::XmlTextReaderImpl::get_DtdParserProxy_NamespaceResolver()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "get_DtdParserProxy_NamespaceResolver",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Xml::IXmlNamespaceResolver, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Xml::XmlTextReaderImpl::get_DtdParserProxy_DtdValidation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "get_DtdParserProxy_DtdValidation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Xml::XmlTextReaderImpl::get_DtdParserProxy_Normalization()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "get_DtdParserProxy_Normalization",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Xml::XmlTextReaderImpl::get_DtdParserProxy_Namespaces()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "get_DtdParserProxy_Namespaces",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Xml::XmlTextReaderImpl::get_DtdParserProxy_V1CompatibilityMode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "get_DtdParserProxy_V1CompatibilityMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Uri System::Xml::XmlTextReaderImpl::get_DtdParserProxy_BaseUri()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "get_DtdParserProxy_BaseUri",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Uri, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Xml::XmlTextReaderImpl::get_DtdParserProxy_IsEof()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "get_DtdParserProxy_IsEof",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<char16_t> System::Xml::XmlTextReaderImpl::get_DtdParserProxy_ParsingBuffer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "get_DtdParserProxy_ParsingBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<char16_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::Xml::XmlTextReaderImpl::get_DtdParserProxy_ParsingBufferLength()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "get_DtdParserProxy_ParsingBufferLength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::Xml::XmlTextReaderImpl::get_DtdParserProxy_CurrentPosition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "get_DtdParserProxy_CurrentPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Xml::XmlTextReaderImpl::set_DtdParserProxy_CurrentPosition(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "set_DtdParserProxy_CurrentPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t System::Xml::XmlTextReaderImpl::get_DtdParserProxy_EntityStackLength()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "get_DtdParserProxy_EntityStackLength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Xml::XmlTextReaderImpl::get_DtdParserProxy_IsEntityEolNormalized()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "get_DtdParserProxy_IsEntityEolNormalized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Xml::IValidationEventHandling System::Xml::XmlTextReaderImpl::get_DtdParserProxy_ValidationEventHandling()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "get_DtdParserProxy_ValidationEventHandling",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Xml::IValidationEventHandling, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Xml::XmlTextReaderImpl::DtdParserProxy_OnNewLine(int32_t pos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "DtdParserProxy_OnNewLine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, pos);
}
 int32_t System::Xml::XmlTextReaderImpl::get_DtdParserProxy_LineNo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "get_DtdParserProxy_LineNo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::Xml::XmlTextReaderImpl::get_DtdParserProxy_LineStartPosition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "get_DtdParserProxy_LineStartPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::Xml::XmlTextReaderImpl::DtdParserProxy_ReadData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "DtdParserProxy_ReadData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::Xml::XmlTextReaderImpl::DtdParserProxy_ParseNumericCharRef(System::Text::StringBuilder internalSubsetBuilder)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "DtdParserProxy_ParseNumericCharRef",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::StringBuilder>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, internalSubsetBuilder);
}
 int32_t System::Xml::XmlTextReaderImpl::DtdParserProxy_ParseNamedCharRef(bool expand, System::Text::StringBuilder internalSubsetBuilder)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "DtdParserProxy_ParseNamedCharRef",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::StringBuilder>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, expand, internalSubsetBuilder);
}
 void System::Xml::XmlTextReaderImpl::DtdParserProxy_ParsePI(System::Text::StringBuilder sb)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "DtdParserProxy_ParsePI",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::StringBuilder>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, sb);
}
 void System::Xml::XmlTextReaderImpl::DtdParserProxy_ParseComment(System::Text::StringBuilder sb)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "DtdParserProxy_ParseComment",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::StringBuilder>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, sb);
}
 bool System::Xml::XmlTextReaderImpl::get_IsResolverNull()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "get_IsResolverNull",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Xml::XmlResolver System::Xml::XmlTextReaderImpl::GetTempResolver()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "GetTempResolver",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Xml::XmlResolver, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Xml::XmlTextReaderImpl::DtdParserProxy_PushEntity(System::Xml::IDtdEntityInfo entity, ByRef<int32_t> entityId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "DtdParserProxy_PushEntity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::IDtdEntityInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, entity, entityId);
}
 bool System::Xml::XmlTextReaderImpl::DtdParserProxy_PopEntity(ByRef<System::Xml::IDtdEntityInfo> oldEntity, ByRef<int32_t> newEntityId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "DtdParserProxy_PopEntity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Xml::IDtdEntityInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, oldEntity, newEntityId);
}
 bool System::Xml::XmlTextReaderImpl::DtdParserProxy_PushExternalSubset(::StringW systemId, ::StringW publicId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "DtdParserProxy_PushExternalSubset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, systemId, publicId);
}
 void System::Xml::XmlTextReaderImpl::DtdParserProxy_PushInternalDtd(::StringW baseUri, ::StringW internalDtd)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "DtdParserProxy_PushInternalDtd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, baseUri, internalDtd);
}
 void System::Xml::XmlTextReaderImpl::DtdParserProxy_Throw(System::Exception e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "DtdParserProxy_Throw",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, e);
}
 void System::Xml::XmlTextReaderImpl::DtdParserProxy_OnSystemId(::StringW systemId, System::Xml::LineInfo keywordLineInfo, System::Xml::LineInfo systemLiteralLineInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "DtdParserProxy_OnSystemId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::LineInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::LineInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, systemId, keywordLineInfo, systemLiteralLineInfo);
}
 void System::Xml::XmlTextReaderImpl::DtdParserProxy_OnPublicId(::StringW publicId, System::Xml::LineInfo keywordLineInfo, System::Xml::LineInfo publicLiteralLineInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "DtdParserProxy_OnPublicId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::LineInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::LineInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, publicId, keywordLineInfo, publicLiteralLineInfo);
}
 void System::Xml::XmlTextReaderImpl::Throw(int32_t pos, ::StringW res, ::StringW arg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "Throw",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, pos, res, arg);
}
 void System::Xml::XmlTextReaderImpl::Throw(int32_t pos, ::StringW res, ::ArrayW<::StringW> args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "Throw",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, pos, res, args);
}
 void System::Xml::XmlTextReaderImpl::Throw(int32_t pos, ::StringW res)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "Throw",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, pos, res);
}
 void System::Xml::XmlTextReaderImpl::Throw(::StringW res)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "Throw",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, res);
}
 void System::Xml::XmlTextReaderImpl::Throw(::StringW res, int32_t lineNo, int32_t linePos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "Throw",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, res, lineNo, linePos);
}
 void System::Xml::XmlTextReaderImpl::Throw(::StringW res, ::StringW arg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "Throw",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, res, arg);
}
 void System::Xml::XmlTextReaderImpl::Throw(::StringW res, ::StringW arg, int32_t lineNo, int32_t linePos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "Throw",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, res, arg, lineNo, linePos);
}
 void System::Xml::XmlTextReaderImpl::Throw(::StringW res, ::ArrayW<::StringW> args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "Throw",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, res, args);
}
 void System::Xml::XmlTextReaderImpl::Throw(::StringW res, ::StringW arg, System::Exception innerException)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "Throw",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, res, arg, innerException);
}
 void System::Xml::XmlTextReaderImpl::Throw(::StringW res, ::ArrayW<::StringW> args, System::Exception innerException)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "Throw",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, res, args, innerException);
}
 void System::Xml::XmlTextReaderImpl::Throw(System::Exception e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "Throw",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, e);
}
 void System::Xml::XmlTextReaderImpl::ReThrow(System::Exception e, int32_t lineNo, int32_t linePos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "ReThrow",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, e, lineNo, linePos);
}
 void System::Xml::XmlTextReaderImpl::ThrowWithoutLineInfo(::StringW res)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "ThrowWithoutLineInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, res);
}
 void System::Xml::XmlTextReaderImpl::ThrowWithoutLineInfo(::StringW res, ::StringW arg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "ThrowWithoutLineInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, res, arg);
}
 void System::Xml::XmlTextReaderImpl::ThrowWithoutLineInfo(::StringW res, ::ArrayW<::StringW> args, System::Exception innerException)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "ThrowWithoutLineInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, res, args, innerException);
}
 void System::Xml::XmlTextReaderImpl::ThrowInvalidChar(::ArrayW<char16_t> data, int32_t length, int32_t invCharPos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "ThrowInvalidChar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, data, length, invCharPos);
}
 void System::Xml::XmlTextReaderImpl::SetErrorState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "SetErrorState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Xml::XmlTextReaderImpl::SendValidationEvent(System::Xml::Schema::XmlSeverityType severity, ::StringW code, ::StringW arg, int32_t lineNo, int32_t linePos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "SendValidationEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::Schema::XmlSeverityType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, severity, code, arg, lineNo, linePos);
}
 void System::Xml::XmlTextReaderImpl::SendValidationEvent(System::Xml::Schema::XmlSeverityType severity, System::Xml::Schema::XmlSchemaException exception)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "SendValidationEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::Schema::XmlSeverityType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::Schema::XmlSchemaException>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, severity, exception);
}
 bool System::Xml::XmlTextReaderImpl::get_InAttributeValueIterator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "get_InAttributeValueIterator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Xml::XmlTextReaderImpl::FinishAttributeValueIterator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "FinishAttributeValueIterator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Xml::XmlTextReaderImpl::get_DtdValidation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "get_DtdValidation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Xml::XmlTextReaderImpl::InitStreamInput(System::Uri baseUri, System::IO::Stream stream, System::Text::Encoding encoding)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "InitStreamInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Uri>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::Encoding>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, baseUri, stream, encoding);
}
 void System::Xml::XmlTextReaderImpl::InitStreamInput(System::Uri baseUri, ::StringW baseUriStr, System::IO::Stream stream, System::Text::Encoding encoding)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "InitStreamInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Uri>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::Encoding>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, baseUri, baseUriStr, stream, encoding);
}
 void System::Xml::XmlTextReaderImpl::InitStreamInput(System::Uri baseUri, ::StringW baseUriStr, System::IO::Stream stream, ::ArrayW<uint8_t> bytes, int32_t byteCount, System::Text::Encoding encoding)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "InitStreamInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Uri>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::Encoding>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, baseUri, baseUriStr, stream, bytes, byteCount, encoding);
}
 void System::Xml::XmlTextReaderImpl::InitTextReaderInput(::StringW baseUriStr, System::IO::TextReader input)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "InitTextReaderInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::TextReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, baseUriStr, input);
}
 void System::Xml::XmlTextReaderImpl::InitTextReaderInput(::StringW baseUriStr, System::Uri baseUri, System::IO::TextReader input)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "InitTextReaderInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Uri>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::TextReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, baseUriStr, baseUri, input);
}
 void System::Xml::XmlTextReaderImpl::InitStringInput(::StringW baseUriStr, System::Text::Encoding originalEncoding, ::StringW str)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "InitStringInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::Encoding>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, baseUriStr, originalEncoding, str);
}
 void System::Xml::XmlTextReaderImpl::InitFragmentReader(System::Xml::XmlNodeType fragmentType, System::Xml::XmlParserContext parserContext, bool allowXmlDeclFragment)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "InitFragmentReader",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::XmlNodeType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::XmlParserContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, fragmentType, parserContext, allowXmlDeclFragment);
}
 void System::Xml::XmlTextReaderImpl::ProcessDtdFromParserContext(System::Xml::XmlParserContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "ProcessDtdFromParserContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::XmlParserContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, context);
}
 void System::Xml::XmlTextReaderImpl::OpenUrl()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "OpenUrl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Xml::XmlTextReaderImpl::OpenUrlDelegate(::bs_hook::Il2CppWrapperType xmlResolver)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "OpenUrlDelegate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, xmlResolver);
}
 System::Text::Encoding System::Xml::XmlTextReaderImpl::DetectEncoding()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "DetectEncoding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Text::Encoding, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Xml::XmlTextReaderImpl::SetupEncoding(System::Text::Encoding encoding)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "SetupEncoding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::Encoding>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, encoding);
}
 void System::Xml::XmlTextReaderImpl::SwitchEncoding(System::Text::Encoding newEncoding)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "SwitchEncoding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::Encoding>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, newEncoding);
}
 System::Text::Encoding System::Xml::XmlTextReaderImpl::CheckEncoding(::StringW newEncodingName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "CheckEncoding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Text::Encoding, false>(const_cast<void*>(instance), ___internal_method, newEncodingName);
}
 void System::Xml::XmlTextReaderImpl::UnDecodeChars()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "UnDecodeChars",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Xml::XmlTextReaderImpl::SwitchEncodingToUTF8()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "SwitchEncodingToUTF8",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::Xml::XmlTextReaderImpl::ReadData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "ReadData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::Xml::XmlTextReaderImpl::GetChars(int32_t maxCharsCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "GetChars",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, maxCharsCount);
}
 void System::Xml::XmlTextReaderImpl::InvalidCharRecovery(ByRef<int32_t> bytesCount, ByRef<int32_t> charsCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "InvalidCharRecovery",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, bytesCount, charsCount);
}
 void System::Xml::XmlTextReaderImpl::Close(bool closeInput)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "Close",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, closeInput);
}
 void System::Xml::XmlTextReaderImpl::ShiftBuffer(int32_t sourcePos, int32_t destPos, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "ShiftBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, sourcePos, destPos, count);
}
 bool System::Xml::XmlTextReaderImpl::ParseXmlDeclaration(bool isTextDecl)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "ParseXmlDeclaration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, isTextDecl);
}
 bool System::Xml::XmlTextReaderImpl::ParseDocumentContent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "ParseDocumentContent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Xml::XmlTextReaderImpl::ParseElementContent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "ParseElementContent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Xml::XmlTextReaderImpl::ThrowUnclosedElements()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "ThrowUnclosedElements",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Xml::XmlTextReaderImpl::ParseElement()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "ParseElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Xml::XmlTextReaderImpl::AddDefaultAttributesAndNormalize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "AddDefaultAttributesAndNormalize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Xml::XmlTextReaderImpl::ParseEndElement()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "ParseEndElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Xml::XmlTextReaderImpl::ThrowTagMismatch(System::Xml::System__Xml__XmlTextReaderImpl__NodeData startTag)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "ThrowTagMismatch",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::System__Xml__XmlTextReaderImpl__NodeData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, startTag);
}
 void System::Xml::XmlTextReaderImpl::ParseAttributes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "ParseAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Xml::XmlTextReaderImpl::ElementNamespaceLookup()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "ElementNamespaceLookup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Xml::XmlTextReaderImpl::AttributeNamespaceLookup()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "AttributeNamespaceLookup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Xml::XmlTextReaderImpl::AttributeDuplCheck()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "AttributeDuplCheck",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Xml::XmlTextReaderImpl::OnDefaultNamespaceDecl(System::Xml::System__Xml__XmlTextReaderImpl__NodeData attr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "OnDefaultNamespaceDecl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::System__Xml__XmlTextReaderImpl__NodeData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, attr);
}
 void System::Xml::XmlTextReaderImpl::OnNamespaceDecl(System::Xml::System__Xml__XmlTextReaderImpl__NodeData attr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "OnNamespaceDecl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::System__Xml__XmlTextReaderImpl__NodeData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, attr);
}
 void System::Xml::XmlTextReaderImpl::OnXmlReservedAttribute(System::Xml::System__Xml__XmlTextReaderImpl__NodeData attr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "OnXmlReservedAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::System__Xml__XmlTextReaderImpl__NodeData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, attr);
}
 void System::Xml::XmlTextReaderImpl::ParseAttributeValueSlow(int32_t curPos, char16_t quoteChar, System::Xml::System__Xml__XmlTextReaderImpl__NodeData attr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "ParseAttributeValueSlow",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::System__Xml__XmlTextReaderImpl__NodeData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, curPos, quoteChar, attr);
}
 void System::Xml::XmlTextReaderImpl::AddAttributeChunkToList(System::Xml::System__Xml__XmlTextReaderImpl__NodeData attr, System::Xml::System__Xml__XmlTextReaderImpl__NodeData chunk, ByRef<System::Xml::System__Xml__XmlTextReaderImpl__NodeData> lastChunk)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "AddAttributeChunkToList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::System__Xml__XmlTextReaderImpl__NodeData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::System__Xml__XmlTextReaderImpl__NodeData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Xml::System__Xml__XmlTextReaderImpl__NodeData>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, attr, chunk, lastChunk);
}
 bool System::Xml::XmlTextReaderImpl::ParseText()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "ParseText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Xml::XmlTextReaderImpl::ParseText(ByRef<int32_t> startPos, ByRef<int32_t> endPos, ByRef<int32_t> outOrChars)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "ParseText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, startPos, endPos, outOrChars);
}
 void System::Xml::XmlTextReaderImpl::FinishPartialValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "FinishPartialValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Xml::XmlTextReaderImpl::FinishOtherValueIterator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "FinishOtherValueIterator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Xml::XmlTextReaderImpl::SkipPartialTextValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "SkipPartialTextValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Xml::XmlTextReaderImpl::FinishReadValueChunk()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "FinishReadValueChunk",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Xml::XmlTextReaderImpl::FinishReadContentAsBinary()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "FinishReadContentAsBinary",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Xml::XmlTextReaderImpl::FinishReadElementContentAsBinary()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "FinishReadElementContentAsBinary",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Xml::XmlTextReaderImpl::ParseRootLevelWhitespace()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "ParseRootLevelWhitespace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Xml::XmlTextReaderImpl::ParseEntityReference()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "ParseEntityReference",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Xml::System__Xml__XmlTextReaderImpl__EntityType System::Xml::XmlTextReaderImpl::HandleEntityReference(bool isInAttributeValue, System::Xml::System__Xml__XmlTextReaderImpl__EntityExpandType expandType, ByRef<int32_t> charRefEndPos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "HandleEntityReference",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::System__Xml__XmlTextReaderImpl__EntityExpandType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Xml::System__Xml__XmlTextReaderImpl__EntityType, false>(const_cast<void*>(instance), ___internal_method, isInAttributeValue, expandType, charRefEndPos);
}
 System::Xml::System__Xml__XmlTextReaderImpl__EntityType System::Xml::XmlTextReaderImpl::HandleGeneralEntityReference(::StringW name, bool isInAttributeValue, bool pushFakeEntityIfNullResolver, int32_t entityStartLinePos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "HandleGeneralEntityReference",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Xml::System__Xml__XmlTextReaderImpl__EntityType, false>(const_cast<void*>(instance), ___internal_method, name, isInAttributeValue, pushFakeEntityIfNullResolver, entityStartLinePos);
}
 bool System::Xml::XmlTextReaderImpl::get_InEntity()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "get_InEntity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Xml::XmlTextReaderImpl::HandleEntityEnd(bool checkEntityNesting)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "HandleEntityEnd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, checkEntityNesting);
}
 void System::Xml::XmlTextReaderImpl::SetupEndEntityNodeInContent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "SetupEndEntityNodeInContent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Xml::XmlTextReaderImpl::SetupEndEntityNodeInAttribute()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "SetupEndEntityNodeInAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Xml::XmlTextReaderImpl::ParsePI()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "ParsePI",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Xml::XmlTextReaderImpl::ParsePI(System::Text::StringBuilder piInDtdStringBuilder)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "ParsePI",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::StringBuilder>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, piInDtdStringBuilder);
}
 bool System::Xml::XmlTextReaderImpl::ParsePIValue(ByRef<int32_t> outStartPos, ByRef<int32_t> outEndPos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "ParsePIValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, outStartPos, outEndPos);
}
 bool System::Xml::XmlTextReaderImpl::ParseComment()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "ParseComment",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Xml::XmlTextReaderImpl::ParseCData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "ParseCData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Xml::XmlTextReaderImpl::ParseCDataOrComment(System::Xml::XmlNodeType type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "ParseCDataOrComment",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::XmlNodeType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, type);
}
 bool System::Xml::XmlTextReaderImpl::ParseCDataOrComment(System::Xml::XmlNodeType type, ByRef<int32_t> outStartPos, ByRef<int32_t> outEndPos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "ParseCDataOrComment",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::XmlNodeType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, type, outStartPos, outEndPos);
}
 bool System::Xml::XmlTextReaderImpl::ParseDoctypeDecl()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "ParseDoctypeDecl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Xml::XmlTextReaderImpl::ParseDtd()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "ParseDtd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Xml::XmlTextReaderImpl::SkipDtd()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "SkipDtd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Xml::XmlTextReaderImpl::SkipPublicOrSystemIdLiteral()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "SkipPublicOrSystemIdLiteral",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Xml::XmlTextReaderImpl::SkipUntil(char16_t stopChar, bool recognizeLiterals)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "SkipUntil",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, stopChar, recognizeLiterals);
}
 int32_t System::Xml::XmlTextReaderImpl::EatWhitespaces(System::Text::StringBuilder sb)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "EatWhitespaces",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::StringBuilder>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, sb);
}
 int32_t System::Xml::XmlTextReaderImpl::ParseCharRefInline(int32_t startPos, ByRef<int32_t> charCount, ByRef<System::Xml::System__Xml__XmlTextReaderImpl__EntityType> entityType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "ParseCharRefInline",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Xml::System__Xml__XmlTextReaderImpl__EntityType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, startPos, charCount, entityType);
}
 int32_t System::Xml::XmlTextReaderImpl::ParseNumericCharRef(bool expand, System::Text::StringBuilder internalSubsetBuilder, ByRef<System::Xml::System__Xml__XmlTextReaderImpl__EntityType> entityType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "ParseNumericCharRef",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::StringBuilder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Xml::System__Xml__XmlTextReaderImpl__EntityType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, expand, internalSubsetBuilder, entityType);
}
 int32_t System::Xml::XmlTextReaderImpl::ParseNumericCharRefInline(int32_t startPos, bool expand, System::Text::StringBuilder internalSubsetBuilder, ByRef<int32_t> charCount, ByRef<System::Xml::System__Xml__XmlTextReaderImpl__EntityType> entityType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "ParseNumericCharRefInline",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::StringBuilder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Xml::System__Xml__XmlTextReaderImpl__EntityType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, startPos, expand, internalSubsetBuilder, charCount, entityType);
}
 int32_t System::Xml::XmlTextReaderImpl::ParseNamedCharRef(bool expand, System::Text::StringBuilder internalSubsetBuilder)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "ParseNamedCharRef",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::StringBuilder>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, expand, internalSubsetBuilder);
}
 int32_t System::Xml::XmlTextReaderImpl::ParseNamedCharRefInline(int32_t startPos, bool expand, System::Text::StringBuilder internalSubsetBuilder)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "ParseNamedCharRefInline",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::StringBuilder>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, startPos, expand, internalSubsetBuilder);
}
 int32_t System::Xml::XmlTextReaderImpl::ParseName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "ParseName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::Xml::XmlTextReaderImpl::ParseQName(ByRef<int32_t> colonPos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "ParseQName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, colonPos);
}
 int32_t System::Xml::XmlTextReaderImpl::ParseQName(bool isQName, int32_t startOffset, ByRef<int32_t> colonPos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "ParseQName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, isQName, startOffset, colonPos);
}
 bool System::Xml::XmlTextReaderImpl::ReadDataInName(ByRef<int32_t> pos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "ReadDataInName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, pos);
}
 ::StringW System::Xml::XmlTextReaderImpl::ParseEntityName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "ParseEntityName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Xml::System__Xml__XmlTextReaderImpl__NodeData System::Xml::XmlTextReaderImpl::AddNode(int32_t nodeIndex, int32_t nodeDepth)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "AddNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Xml::System__Xml__XmlTextReaderImpl__NodeData, false>(const_cast<void*>(instance), ___internal_method, nodeIndex, nodeDepth);
}
 System::Xml::System__Xml__XmlTextReaderImpl__NodeData System::Xml::XmlTextReaderImpl::AllocNode(int32_t nodeIndex, int32_t nodeDepth)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "AllocNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Xml::System__Xml__XmlTextReaderImpl__NodeData, false>(const_cast<void*>(instance), ___internal_method, nodeIndex, nodeDepth);
}
 System::Xml::System__Xml__XmlTextReaderImpl__NodeData System::Xml::XmlTextReaderImpl::AddAttributeNoChecks(::StringW name, int32_t attrDepth)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "AddAttributeNoChecks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Xml::System__Xml__XmlTextReaderImpl__NodeData, false>(const_cast<void*>(instance), ___internal_method, name, attrDepth);
}
 System::Xml::System__Xml__XmlTextReaderImpl__NodeData System::Xml::XmlTextReaderImpl::AddAttribute(int32_t endNamePos, int32_t colonPos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "AddAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Xml::System__Xml__XmlTextReaderImpl__NodeData, false>(const_cast<void*>(instance), ___internal_method, endNamePos, colonPos);
}
 System::Xml::System__Xml__XmlTextReaderImpl__NodeData System::Xml::XmlTextReaderImpl::AddAttribute(::StringW localName, ::StringW prefix, ::StringW nameWPrefix)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "AddAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Xml::System__Xml__XmlTextReaderImpl__NodeData, false>(const_cast<void*>(instance), ___internal_method, localName, prefix, nameWPrefix);
}
 void System::Xml::XmlTextReaderImpl::PopElementContext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "PopElementContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Xml::XmlTextReaderImpl::OnNewLine(int32_t pos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "OnNewLine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, pos);
}
 void System::Xml::XmlTextReaderImpl::OnEof()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "OnEof",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Xml::XmlTextReaderImpl::LookupNamespace(System::Xml::System__Xml__XmlTextReaderImpl__NodeData node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "LookupNamespace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::System__Xml__XmlTextReaderImpl__NodeData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, node);
}
 void System::Xml::XmlTextReaderImpl::AddNamespace(::StringW prefix, ::StringW uri, System::Xml::System__Xml__XmlTextReaderImpl__NodeData attr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "AddNamespace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::System__Xml__XmlTextReaderImpl__NodeData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, prefix, uri, attr);
}
 void System::Xml::XmlTextReaderImpl::ResetAttributes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "ResetAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Xml::XmlTextReaderImpl::FullAttributeCleanup()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "FullAttributeCleanup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Xml::XmlTextReaderImpl::PushXmlContext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "PushXmlContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Xml::XmlTextReaderImpl::PopXmlContext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "PopXmlContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Xml::XmlNodeType System::Xml::XmlTextReaderImpl::GetWhitespaceType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "GetWhitespaceType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Xml::XmlNodeType, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Xml::XmlNodeType System::Xml::XmlTextReaderImpl::GetTextNodeType(int32_t orChars)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "GetTextNodeType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Xml::XmlNodeType, false>(const_cast<void*>(instance), ___internal_method, orChars);
}
 void System::Xml::XmlTextReaderImpl::PushExternalEntityOrSubset(::StringW publicId, ::StringW systemId, System::Uri baseUri, ::StringW entityName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "PushExternalEntityOrSubset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Uri>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, publicId, systemId, baseUri, entityName);
}
 bool System::Xml::XmlTextReaderImpl::OpenAndPush(System::Uri uri)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "OpenAndPush",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Uri>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, uri);
}
 bool System::Xml::XmlTextReaderImpl::PushExternalEntity(System::Xml::IDtdEntityInfo entity)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "PushExternalEntity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::IDtdEntityInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, entity);
}
 void System::Xml::XmlTextReaderImpl::PushInternalEntity(System::Xml::IDtdEntityInfo entity)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "PushInternalEntity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::IDtdEntityInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, entity);
}
 void System::Xml::XmlTextReaderImpl::PopEntity()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "PopEntity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Xml::XmlTextReaderImpl::RegisterEntity(System::Xml::IDtdEntityInfo entity)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "RegisterEntity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::IDtdEntityInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, entity);
}
 void System::Xml::XmlTextReaderImpl::UnregisterEntity()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "UnregisterEntity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Xml::XmlTextReaderImpl::PushParsingState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "PushParsingState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Xml::XmlTextReaderImpl::PopParsingState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "PopParsingState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::Xml::XmlTextReaderImpl::IncrementalRead()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "IncrementalRead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Xml::XmlTextReaderImpl::FinishIncrementalRead()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "FinishIncrementalRead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Xml::XmlTextReaderImpl::ParseFragmentAttribute()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "ParseFragmentAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Xml::XmlTextReaderImpl::ParseAttributeValueChunk()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "ParseAttributeValueChunk",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Xml::XmlTextReaderImpl::ParseXmlDeclarationFragment()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "ParseXmlDeclarationFragment",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Xml::XmlTextReaderImpl::ThrowUnexpectedToken(int32_t pos, ::StringW expectedToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "ThrowUnexpectedToken",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, pos, expectedToken);
}
 void System::Xml::XmlTextReaderImpl::ThrowUnexpectedToken(::StringW expectedToken1)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "ThrowUnexpectedToken",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, expectedToken1);
}
 void System::Xml::XmlTextReaderImpl::ThrowUnexpectedToken(int32_t pos, ::StringW expectedToken1, ::StringW expectedToken2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "ThrowUnexpectedToken",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, pos, expectedToken1, expectedToken2);
}
 void System::Xml::XmlTextReaderImpl::ThrowUnexpectedToken(::StringW expectedToken1, ::StringW expectedToken2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "ThrowUnexpectedToken",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, expectedToken1, expectedToken2);
}
 ::StringW System::Xml::XmlTextReaderImpl::ParseUnexpectedToken(int32_t pos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "ParseUnexpectedToken",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, pos);
}
 ::StringW System::Xml::XmlTextReaderImpl::ParseUnexpectedToken()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "ParseUnexpectedToken",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Xml::XmlTextReaderImpl::ThrowExpectingWhitespace(int32_t pos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "ThrowExpectingWhitespace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, pos);
}
 int32_t System::Xml::XmlTextReaderImpl::GetIndexOfAttributeWithoutPrefix(::StringW name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "GetIndexOfAttributeWithoutPrefix",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, name);
}
 int32_t System::Xml::XmlTextReaderImpl::GetIndexOfAttributeWithPrefix(::StringW name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "GetIndexOfAttributeWithPrefix",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, name);
}
 bool System::Xml::XmlTextReaderImpl::ZeroEndingStream(int32_t pos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "ZeroEndingStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, pos);
}
 void System::Xml::XmlTextReaderImpl::ParseDtdFromParserContext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "ParseDtdFromParserContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Xml::XmlTextReaderImpl::MoveToNextContentNode(bool moveIfOnContentNode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "MoveToNextContentNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, moveIfOnContentNode);
}
 System::Xml::IDtdInfo System::Xml::XmlTextReaderImpl::get_DtdInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "get_DtdInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Xml::IDtdInfo, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Xml::XmlTextReaderImpl::SetDtdInfo(System::Xml::IDtdInfo newDtdInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "SetDtdInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::IDtdInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, newDtdInfo);
}
 void System::Xml::XmlTextReaderImpl::set_XmlValidatingReaderCompatibilityMode(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "set_XmlValidatingReaderCompatibilityMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool System::Xml::XmlTextReaderImpl::AddDefaultAttributeDtd(System::Xml::IDtdDefaultAttributeInfo defAttrInfo, bool definedInDtd, ::ArrayW<System::Xml::System__Xml__XmlTextReaderImpl__NodeData> nameSortedNodeData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "AddDefaultAttributeDtd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::IDtdDefaultAttributeInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Xml::System__Xml__XmlTextReaderImpl__NodeData>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, defAttrInfo, definedInDtd, nameSortedNodeData);
}
 System::Xml::System__Xml__XmlTextReaderImpl__NodeData System::Xml::XmlTextReaderImpl::AddDefaultAttributeInternal(::StringW localName, ::StringW ns, ::StringW prefix, ::StringW value, int32_t lineNo, int32_t linePos, int32_t valueLineNo, int32_t valueLinePos, bool isXmlAttribute)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "AddDefaultAttributeInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Xml::System__Xml__XmlTextReaderImpl__NodeData, false>(const_cast<void*>(instance), ___internal_method, localName, ns, prefix, value, lineNo, linePos, valueLineNo, valueLinePos, isXmlAttribute);
}
 void System::Xml::XmlTextReaderImpl::set_DisableUndeclaredEntityCheck(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "set_DisableUndeclaredEntityCheck",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void System::Xml::XmlTextReaderImpl::RegisterConsumedCharacters(int64_t characters, bool inEntityReference)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "RegisterConsumedCharacters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, characters, inEntityReference);
}
 ::StringW System::Xml::XmlTextReaderImpl::StripSpaces(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "StripSpaces",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, value);
}
 void System::Xml::XmlTextReaderImpl::StripSpaces(::ArrayW<char16_t> value, int32_t index, ByRef<int32_t> len)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "StripSpaces",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value, index, len);
}
 void System::Xml::XmlTextReaderImpl::BlockCopyChars(::ArrayW<char16_t> src, int32_t srcOffset, ::ArrayW<char16_t> dst, int32_t dstOffset, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "BlockCopyChars",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, src, srcOffset, dst, dstOffset, count);
}
 void System::Xml::XmlTextReaderImpl::BlockCopy(::ArrayW<uint8_t> src, int32_t srcOffset, ::ArrayW<uint8_t> dst, int32_t dstOffset, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlTextReaderImpl>::get(),
                            "BlockCopy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, src, srcOffset, dst, dstOffset, count);
}
