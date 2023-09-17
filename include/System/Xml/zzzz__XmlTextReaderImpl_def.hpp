#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/zzzz__XmlNamespaceManager_def.hpp"
#include "System/Xml/zzzz__XmlReader_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace System::Xml {
class IXmlNamespaceResolver;
}
namespace System::Xml {
class IDtdDefaultAttributeInfo;
}
namespace System::Xml {
struct XmlCharType;
}
namespace System::Xml::Schema {
class XmlSchemaException;
}
namespace System {
template<typename T1,typename T2,typename T3,typename T4>
class Tuple_4;
}
namespace System::Text {
class Encoding;
}
namespace System::Xml {
struct XmlNodeType;
}
namespace System::Xml {
struct LineInfo;
}
namespace System::Xml {
class XmlReaderSettings;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Xml {
class XmlNamespaceManager;
}
namespace System {
class Uri;
}
namespace System::Xml {
struct EntityHandling;
}
namespace System::Xml {
struct WhitespaceHandling;
}
namespace System::Xml {
struct ReadState;
}
namespace System::Xml {
class XmlNameTable;
}
namespace System::Xml {
class IncrementalReadDecoder;
}
namespace System::Xml {
class IDtdEntityInfo;
}
namespace System::IO {
class Stream;
}
namespace System::Xml {
class XmlParserContext;
}
namespace System::Xml {
class XmlResolver;
}
namespace System::Xml {
class IDtdInfo;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
class Exception;
}
namespace System::Xml::Schema {
struct XmlSeverityType;
}
namespace System::Xml {
class IValidationEventHandling;
}
namespace System::Xml {
class XmlReader;
}
namespace System::Xml {
struct DtdProcessing;
}
namespace System::IO {
class TextReader;
}
namespace System::Text {
class StringBuilder;
}
namespace System::Collections::Generic {
template<typename T>
class IComparer_1;
}
namespace System::Xml {
class IDtdParserAdapter;
}
namespace System::Xml {
class IDtdParserAdapterWithValidation;
}
namespace System::Xml {
class IDtdParserAdapterV1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IComparable;
}
namespace System::Xml {
struct XmlSpace;
}
namespace System::Text {
class Decoder;
}
// Forward declare root types
namespace System::Xml {
struct ____System__Xml__XmlTextReaderImpl__EntityExpandType;
}
namespace System::Xml {
struct ____System__Xml__XmlTextReaderImpl__EntityType;
}
namespace System::Xml {
struct ____System__Xml__XmlTextReaderImpl__IncrementalReadState;
}
namespace System::Xml {
struct ____System__Xml__XmlTextReaderImpl__InitInputType;
}
namespace System::Xml {
struct ____System__Xml__XmlTextReaderImpl__ParsingFunction;
}
namespace System::Xml {
struct ____System__Xml__XmlTextReaderImpl__ParsingMode;
}
namespace System::Xml {
class XmlTextReaderImpl;
}
namespace System::Xml {
class ____System__Xml__XmlTextReaderImpl__DtdDefaultAttributeInfoToNodeDataComparer;
}
namespace System::Xml {
class ____System__Xml__XmlTextReaderImpl__DtdParserProxy;
}
namespace System::Xml {
class ____System__Xml__XmlTextReaderImpl__LaterInitParam;
}
namespace System::Xml {
class ____System__Xml__XmlTextReaderImpl__NoNamespaceManager;
}
namespace System::Xml {
class ____System__Xml__XmlTextReaderImpl__NodeData;
}
namespace System::Xml {
class ____System__Xml__XmlTextReaderImpl__OnDefaultAttributeUseDelegate;
}
namespace System::Xml {
class ____System__Xml__XmlTextReaderImpl__XmlContext;
}
namespace System::Xml {
struct ____System__Xml__XmlTextReaderImpl__ParsingState;
}
// Type: ::ParsingFunction
namespace System::Xml {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11402))
// CS Name: System.Xml.XmlTextReaderImpl::ParsingFunction
struct CORDL_TYPE ____System__Xml__XmlTextReaderImpl__ParsingFunction : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____System__Xml__XmlTextReaderImpl__ParsingFunction(int32_t value__) noexcept;


                    constexpr ____System__Xml__XmlTextReaderImpl__ParsingFunction(____System__Xml__XmlTextReaderImpl__ParsingFunction const&) = default;
                    constexpr ____System__Xml__XmlTextReaderImpl__ParsingFunction(____System__Xml__XmlTextReaderImpl__ParsingFunction&&) = default;
                    constexpr ____System__Xml__XmlTextReaderImpl__ParsingFunction& operator=(____System__Xml__XmlTextReaderImpl__ParsingFunction const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____System__Xml__XmlTextReaderImpl__ParsingFunction& operator=(____System__Xml__XmlTextReaderImpl__ParsingFunction&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____System__Xml__XmlTextReaderImpl__ParsingFunction(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______System__Xml__XmlTextReaderImpl__ParsingFunction_Unwrapped : int32_t {
__ElementContent = 0,
__NoData = 1,
__OpenUrl = 2,
__SwitchToInteractive = 3,
__SwitchToInteractiveXmlDecl = 4,
__DocumentContent = 5,
__MoveToElementContent = 6,
__PopElementContext = 7,
__PopEmptyElementContext = 8,
__ResetAttributesRootLevel = 9,
__Error = 10,
__Eof = 11,
__ReaderClosed = 12,
__EntityReference = 13,
__InIncrementalRead = 14,
__FragmentAttribute = 15,
__ReportEndEntity = 16,
__AfterResolveEntityInContent = 17,
__AfterResolveEmptyEntityInContent = 18,
__XmlDeclarationFragment = 19,
__GoToEof = 20,
__PartialTextValue = 21,
__InReadAttributeValue = 22,
__InReadValueChunk = 23,
__InReadContentAsBinary = 24,
__InReadElementContentAsBinary = 25,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______System__Xml__XmlTextReaderImpl__ParsingFunction_Unwrapped () const noexcept {
return std::bit_cast<______System__Xml__XmlTextReaderImpl__ParsingFunction_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field ElementContent offset 0
static ::System::Xml::____System__Xml__XmlTextReaderImpl__ParsingFunction const ElementContent;

/// @brief Field NoData offset 0
static ::System::Xml::____System__Xml__XmlTextReaderImpl__ParsingFunction const NoData;

/// @brief Field OpenUrl offset 0
static ::System::Xml::____System__Xml__XmlTextReaderImpl__ParsingFunction const OpenUrl;

/// @brief Field SwitchToInteractive offset 0
static ::System::Xml::____System__Xml__XmlTextReaderImpl__ParsingFunction const SwitchToInteractive;

/// @brief Field SwitchToInteractiveXmlDecl offset 0
static ::System::Xml::____System__Xml__XmlTextReaderImpl__ParsingFunction const SwitchToInteractiveXmlDecl;

/// @brief Field DocumentContent offset 0
static ::System::Xml::____System__Xml__XmlTextReaderImpl__ParsingFunction const DocumentContent;

/// @brief Field MoveToElementContent offset 0
static ::System::Xml::____System__Xml__XmlTextReaderImpl__ParsingFunction const MoveToElementContent;

/// @brief Field PopElementContext offset 0
static ::System::Xml::____System__Xml__XmlTextReaderImpl__ParsingFunction const PopElementContext;

/// @brief Field PopEmptyElementContext offset 0
static ::System::Xml::____System__Xml__XmlTextReaderImpl__ParsingFunction const PopEmptyElementContext;

/// @brief Field ResetAttributesRootLevel offset 0
static ::System::Xml::____System__Xml__XmlTextReaderImpl__ParsingFunction const ResetAttributesRootLevel;

/// @brief Field Error offset 0
static ::System::Xml::____System__Xml__XmlTextReaderImpl__ParsingFunction const Error;

/// @brief Field Eof offset 0
static ::System::Xml::____System__Xml__XmlTextReaderImpl__ParsingFunction const Eof;

/// @brief Field ReaderClosed offset 0
static ::System::Xml::____System__Xml__XmlTextReaderImpl__ParsingFunction const ReaderClosed;

/// @brief Field EntityReference offset 0
static ::System::Xml::____System__Xml__XmlTextReaderImpl__ParsingFunction const EntityReference;

/// @brief Field InIncrementalRead offset 0
static ::System::Xml::____System__Xml__XmlTextReaderImpl__ParsingFunction const InIncrementalRead;

/// @brief Field FragmentAttribute offset 0
static ::System::Xml::____System__Xml__XmlTextReaderImpl__ParsingFunction const FragmentAttribute;

/// @brief Field ReportEndEntity offset 0
static ::System::Xml::____System__Xml__XmlTextReaderImpl__ParsingFunction const ReportEndEntity;

/// @brief Field AfterResolveEntityInContent offset 0
static ::System::Xml::____System__Xml__XmlTextReaderImpl__ParsingFunction const AfterResolveEntityInContent;

/// @brief Field AfterResolveEmptyEntityInContent offset 0
static ::System::Xml::____System__Xml__XmlTextReaderImpl__ParsingFunction const AfterResolveEmptyEntityInContent;

/// @brief Field XmlDeclarationFragment offset 0
static ::System::Xml::____System__Xml__XmlTextReaderImpl__ParsingFunction const XmlDeclarationFragment;

/// @brief Field GoToEof offset 0
static ::System::Xml::____System__Xml__XmlTextReaderImpl__ParsingFunction const GoToEof;

/// @brief Field PartialTextValue offset 0
static ::System::Xml::____System__Xml__XmlTextReaderImpl__ParsingFunction const PartialTextValue;

/// @brief Field InReadAttributeValue offset 0
static ::System::Xml::____System__Xml__XmlTextReaderImpl__ParsingFunction const InReadAttributeValue;

/// @brief Field InReadValueChunk offset 0
static ::System::Xml::____System__Xml__XmlTextReaderImpl__ParsingFunction const InReadValueChunk;

/// @brief Field InReadContentAsBinary offset 0
static ::System::Xml::____System__Xml__XmlTextReaderImpl__ParsingFunction const InReadContentAsBinary;

/// @brief Field InReadElementContentAsBinary offset 0
static ::System::Xml::____System__Xml__XmlTextReaderImpl__ParsingFunction const InReadElementContentAsBinary;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Xml
// Type: ::ParsingMode
namespace System::Xml {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11403))
// CS Name: System.Xml.XmlTextReaderImpl::ParsingMode
struct CORDL_TYPE ____System__Xml__XmlTextReaderImpl__ParsingMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____System__Xml__XmlTextReaderImpl__ParsingMode(int32_t value__) noexcept;


                    constexpr ____System__Xml__XmlTextReaderImpl__ParsingMode(____System__Xml__XmlTextReaderImpl__ParsingMode const&) = default;
                    constexpr ____System__Xml__XmlTextReaderImpl__ParsingMode(____System__Xml__XmlTextReaderImpl__ParsingMode&&) = default;
                    constexpr ____System__Xml__XmlTextReaderImpl__ParsingMode& operator=(____System__Xml__XmlTextReaderImpl__ParsingMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____System__Xml__XmlTextReaderImpl__ParsingMode& operator=(____System__Xml__XmlTextReaderImpl__ParsingMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____System__Xml__XmlTextReaderImpl__ParsingMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______System__Xml__XmlTextReaderImpl__ParsingMode_Unwrapped : int32_t {
__Full = 0,
__SkipNode = 1,
__SkipContent = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______System__Xml__XmlTextReaderImpl__ParsingMode_Unwrapped () const noexcept {
return std::bit_cast<______System__Xml__XmlTextReaderImpl__ParsingMode_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Full offset 0
static ::System::Xml::____System__Xml__XmlTextReaderImpl__ParsingMode const Full;

/// @brief Field SkipNode offset 0
static ::System::Xml::____System__Xml__XmlTextReaderImpl__ParsingMode const SkipNode;

/// @brief Field SkipContent offset 0
static ::System::Xml::____System__Xml__XmlTextReaderImpl__ParsingMode const SkipContent;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Xml
// Type: ::EntityType
namespace System::Xml {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11404))
// CS Name: System.Xml.XmlTextReaderImpl::EntityType
struct CORDL_TYPE ____System__Xml__XmlTextReaderImpl__EntityType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____System__Xml__XmlTextReaderImpl__EntityType(int32_t value__) noexcept;


                    constexpr ____System__Xml__XmlTextReaderImpl__EntityType(____System__Xml__XmlTextReaderImpl__EntityType const&) = default;
                    constexpr ____System__Xml__XmlTextReaderImpl__EntityType(____System__Xml__XmlTextReaderImpl__EntityType&&) = default;
                    constexpr ____System__Xml__XmlTextReaderImpl__EntityType& operator=(____System__Xml__XmlTextReaderImpl__EntityType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____System__Xml__XmlTextReaderImpl__EntityType& operator=(____System__Xml__XmlTextReaderImpl__EntityType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____System__Xml__XmlTextReaderImpl__EntityType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______System__Xml__XmlTextReaderImpl__EntityType_Unwrapped : int32_t {
__CharacterDec = 0,
__CharacterHex = 1,
__CharacterNamed = 2,
__Expanded = 3,
__Skipped = 4,
__FakeExpanded = 5,
__Unexpanded = 6,
__ExpandedInAttribute = 7,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______System__Xml__XmlTextReaderImpl__EntityType_Unwrapped () const noexcept {
return std::bit_cast<______System__Xml__XmlTextReaderImpl__EntityType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field CharacterDec offset 0
static ::System::Xml::____System__Xml__XmlTextReaderImpl__EntityType const CharacterDec;

/// @brief Field CharacterHex offset 0
static ::System::Xml::____System__Xml__XmlTextReaderImpl__EntityType const CharacterHex;

/// @brief Field CharacterNamed offset 0
static ::System::Xml::____System__Xml__XmlTextReaderImpl__EntityType const CharacterNamed;

/// @brief Field Expanded offset 0
static ::System::Xml::____System__Xml__XmlTextReaderImpl__EntityType const Expanded;

/// @brief Field Skipped offset 0
static ::System::Xml::____System__Xml__XmlTextReaderImpl__EntityType const Skipped;

/// @brief Field FakeExpanded offset 0
static ::System::Xml::____System__Xml__XmlTextReaderImpl__EntityType const FakeExpanded;

/// @brief Field Unexpanded offset 0
static ::System::Xml::____System__Xml__XmlTextReaderImpl__EntityType const Unexpanded;

/// @brief Field ExpandedInAttribute offset 0
static ::System::Xml::____System__Xml__XmlTextReaderImpl__EntityType const ExpandedInAttribute;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Xml
// Type: ::EntityExpandType
namespace System::Xml {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11405))
// CS Name: System.Xml.XmlTextReaderImpl::EntityExpandType
struct CORDL_TYPE ____System__Xml__XmlTextReaderImpl__EntityExpandType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____System__Xml__XmlTextReaderImpl__EntityExpandType(int32_t value__) noexcept;


                    constexpr ____System__Xml__XmlTextReaderImpl__EntityExpandType(____System__Xml__XmlTextReaderImpl__EntityExpandType const&) = default;
                    constexpr ____System__Xml__XmlTextReaderImpl__EntityExpandType(____System__Xml__XmlTextReaderImpl__EntityExpandType&&) = default;
                    constexpr ____System__Xml__XmlTextReaderImpl__EntityExpandType& operator=(____System__Xml__XmlTextReaderImpl__EntityExpandType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____System__Xml__XmlTextReaderImpl__EntityExpandType& operator=(____System__Xml__XmlTextReaderImpl__EntityExpandType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____System__Xml__XmlTextReaderImpl__EntityExpandType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______System__Xml__XmlTextReaderImpl__EntityExpandType_Unwrapped : int32_t {
__All = 0,
__OnlyGeneral = 1,
__OnlyCharacter = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______System__Xml__XmlTextReaderImpl__EntityExpandType_Unwrapped () const noexcept {
return std::bit_cast<______System__Xml__XmlTextReaderImpl__EntityExpandType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field All offset 0
static ::System::Xml::____System__Xml__XmlTextReaderImpl__EntityExpandType const All;

/// @brief Field OnlyGeneral offset 0
static ::System::Xml::____System__Xml__XmlTextReaderImpl__EntityExpandType const OnlyGeneral;

/// @brief Field OnlyCharacter offset 0
static ::System::Xml::____System__Xml__XmlTextReaderImpl__EntityExpandType const OnlyCharacter;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Xml
// Type: ::IncrementalReadState
namespace System::Xml {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11406))
// CS Name: System.Xml.XmlTextReaderImpl::IncrementalReadState
struct CORDL_TYPE ____System__Xml__XmlTextReaderImpl__IncrementalReadState : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____System__Xml__XmlTextReaderImpl__IncrementalReadState(int32_t value__) noexcept;


                    constexpr ____System__Xml__XmlTextReaderImpl__IncrementalReadState(____System__Xml__XmlTextReaderImpl__IncrementalReadState const&) = default;
                    constexpr ____System__Xml__XmlTextReaderImpl__IncrementalReadState(____System__Xml__XmlTextReaderImpl__IncrementalReadState&&) = default;
                    constexpr ____System__Xml__XmlTextReaderImpl__IncrementalReadState& operator=(____System__Xml__XmlTextReaderImpl__IncrementalReadState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____System__Xml__XmlTextReaderImpl__IncrementalReadState& operator=(____System__Xml__XmlTextReaderImpl__IncrementalReadState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____System__Xml__XmlTextReaderImpl__IncrementalReadState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______System__Xml__XmlTextReaderImpl__IncrementalReadState_Unwrapped : int32_t {
__Text = 0,
__StartTag = 1,
__PI = 2,
__CDATA = 3,
__Comment = 4,
__Attributes = 5,
__AttributeValue = 6,
__ReadData = 7,
__EndElement = 8,
__End = 9,
__ReadValueChunk_OnCachedValue = 10,
__ReadValueChunk_OnPartialValue = 11,
__ReadContentAsBinary_OnCachedValue = 12,
__ReadContentAsBinary_OnPartialValue = 13,
__ReadContentAsBinary_End = 14,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______System__Xml__XmlTextReaderImpl__IncrementalReadState_Unwrapped () const noexcept {
return std::bit_cast<______System__Xml__XmlTextReaderImpl__IncrementalReadState_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Text offset 0
static ::System::Xml::____System__Xml__XmlTextReaderImpl__IncrementalReadState const Text;

/// @brief Field StartTag offset 0
static ::System::Xml::____System__Xml__XmlTextReaderImpl__IncrementalReadState const StartTag;

/// @brief Field PI offset 0
static ::System::Xml::____System__Xml__XmlTextReaderImpl__IncrementalReadState const PI;

/// @brief Field CDATA offset 0
static ::System::Xml::____System__Xml__XmlTextReaderImpl__IncrementalReadState const CDATA;

/// @brief Field Comment offset 0
static ::System::Xml::____System__Xml__XmlTextReaderImpl__IncrementalReadState const Comment;

/// @brief Field Attributes offset 0
static ::System::Xml::____System__Xml__XmlTextReaderImpl__IncrementalReadState const Attributes;

/// @brief Field AttributeValue offset 0
static ::System::Xml::____System__Xml__XmlTextReaderImpl__IncrementalReadState const AttributeValue;

/// @brief Field ReadData offset 0
static ::System::Xml::____System__Xml__XmlTextReaderImpl__IncrementalReadState const ReadData;

/// @brief Field EndElement offset 0
static ::System::Xml::____System__Xml__XmlTextReaderImpl__IncrementalReadState const EndElement;

/// @brief Field End offset 0
static ::System::Xml::____System__Xml__XmlTextReaderImpl__IncrementalReadState const End;

/// @brief Field ReadValueChunk_OnCachedValue offset 0
static ::System::Xml::____System__Xml__XmlTextReaderImpl__IncrementalReadState const ReadValueChunk_OnCachedValue;

/// @brief Field ReadValueChunk_OnPartialValue offset 0
static ::System::Xml::____System__Xml__XmlTextReaderImpl__IncrementalReadState const ReadValueChunk_OnPartialValue;

/// @brief Field ReadContentAsBinary_OnCachedValue offset 0
static ::System::Xml::____System__Xml__XmlTextReaderImpl__IncrementalReadState const ReadContentAsBinary_OnCachedValue;

/// @brief Field ReadContentAsBinary_OnPartialValue offset 0
static ::System::Xml::____System__Xml__XmlTextReaderImpl__IncrementalReadState const ReadContentAsBinary_OnPartialValue;

/// @brief Field ReadContentAsBinary_End offset 0
static ::System::Xml::____System__Xml__XmlTextReaderImpl__IncrementalReadState const ReadContentAsBinary_End;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Xml
// Type: ::LaterInitParam
namespace System::Xml {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11407))
// CS Name: System.Xml.XmlTextReaderImpl::LaterInitParam
class CORDL_TYPE ____System__Xml__XmlTextReaderImpl__LaterInitParam : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~____System__Xml__XmlTextReaderImpl__LaterInitParam() = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Xml__XmlTextReaderImpl__LaterInitParam", modifiers: " const&", def_value: None }]
constexpr ____System__Xml__XmlTextReaderImpl__LaterInitParam(____System__Xml__XmlTextReaderImpl__LaterInitParam const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Xml__XmlTextReaderImpl__LaterInitParam", modifiers: "&&", def_value: None }]
constexpr ____System__Xml__XmlTextReaderImpl__LaterInitParam(____System__Xml__XmlTextReaderImpl__LaterInitParam&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____System__Xml__XmlTextReaderImpl__LaterInitParam(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____System__Xml__XmlTextReaderImpl__LaterInitParam& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____System__Xml__XmlTextReaderImpl__LaterInitParam& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____System__Xml__XmlTextReaderImpl__LaterInitParam& operator=(____System__Xml__XmlTextReaderImpl__LaterInitParam&& o) noexcept = default;
  constexpr ____System__Xml__XmlTextReaderImpl__LaterInitParam& operator=(____System__Xml__XmlTextReaderImpl__LaterInitParam const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_useAsync, put=__set_useAsync))  useAsync;

constexpr void __set_useAsync(bool value) ;

constexpr bool __get_useAsync() const;

 ::System::IO::Stream __declspec(property(get=__get_inputStream, put=__set_inputStream))  inputStream;

constexpr void __set_inputStream(::System::IO::Stream value) ;

constexpr ::System::IO::Stream __get_inputStream() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_inputBytes, put=__set_inputBytes))  inputBytes;

constexpr void __set_inputBytes(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_inputBytes() const;

 int32_t __declspec(property(get=__get_inputByteCount, put=__set_inputByteCount))  inputByteCount;

constexpr void __set_inputByteCount(int32_t value) ;

constexpr int32_t __get_inputByteCount() const;

 ::System::Uri __declspec(property(get=__get_inputbaseUri, put=__set_inputbaseUri))  inputbaseUri;

constexpr void __set_inputbaseUri(::System::Uri value) ;

constexpr ::System::Uri __get_inputbaseUri() const;

 ::StringW __declspec(property(get=__get_inputUriStr, put=__set_inputUriStr))  inputUriStr;

constexpr void __set_inputUriStr(::StringW value) ;

constexpr ::StringW __get_inputUriStr() const;

 ::System::Xml::XmlResolver __declspec(property(get=__get_inputUriResolver, put=__set_inputUriResolver))  inputUriResolver;

constexpr void __set_inputUriResolver(::System::Xml::XmlResolver value) ;

constexpr ::System::Xml::XmlResolver __get_inputUriResolver() const;

 ::System::Xml::XmlParserContext __declspec(property(get=__get_inputContext, put=__set_inputContext))  inputContext;

constexpr void __set_inputContext(::System::Xml::XmlParserContext value) ;

constexpr ::System::Xml::XmlParserContext __get_inputContext() const;

 ::System::IO::TextReader __declspec(property(get=__get_inputTextReader, put=__set_inputTextReader))  inputTextReader;

constexpr void __set_inputTextReader(::System::IO::TextReader value) ;

constexpr ::System::IO::TextReader __get_inputTextReader() const;

 ::System::Xml::____System__Xml__XmlTextReaderImpl__InitInputType __declspec(property(get=__get_initType, put=__set_initType))  initType;

constexpr void __set_initType(::System::Xml::____System__Xml__XmlTextReaderImpl__InitInputType value) ;

constexpr ::System::Xml::____System__Xml__XmlTextReaderImpl__InitInputType __get_initType() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
// Type: ::InitInputType
namespace System::Xml {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11408))
// CS Name: System.Xml.XmlTextReaderImpl::InitInputType
struct CORDL_TYPE ____System__Xml__XmlTextReaderImpl__InitInputType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____System__Xml__XmlTextReaderImpl__InitInputType(int32_t value__) noexcept;


                    constexpr ____System__Xml__XmlTextReaderImpl__InitInputType(____System__Xml__XmlTextReaderImpl__InitInputType const&) = default;
                    constexpr ____System__Xml__XmlTextReaderImpl__InitInputType(____System__Xml__XmlTextReaderImpl__InitInputType&&) = default;
                    constexpr ____System__Xml__XmlTextReaderImpl__InitInputType& operator=(____System__Xml__XmlTextReaderImpl__InitInputType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____System__Xml__XmlTextReaderImpl__InitInputType& operator=(____System__Xml__XmlTextReaderImpl__InitInputType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____System__Xml__XmlTextReaderImpl__InitInputType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______System__Xml__XmlTextReaderImpl__InitInputType_Unwrapped : int32_t {
__UriString = 0,
__Stream = 1,
__TextReader = 2,
__Invalid = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______System__Xml__XmlTextReaderImpl__InitInputType_Unwrapped () const noexcept {
return std::bit_cast<______System__Xml__XmlTextReaderImpl__InitInputType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field UriString offset 0
static ::System::Xml::____System__Xml__XmlTextReaderImpl__InitInputType const UriString;

/// @brief Field Stream offset 0
static ::System::Xml::____System__Xml__XmlTextReaderImpl__InitInputType const Stream;

/// @brief Field TextReader offset 0
static ::System::Xml::____System__Xml__XmlTextReaderImpl__InitInputType const TextReader;

/// @brief Field Invalid offset 0
static ::System::Xml::____System__Xml__XmlTextReaderImpl__InitInputType const Invalid;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Xml
// Type: ::ParsingState
namespace System::Xml {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11409))
// CS Name: System.Xml.XmlTextReaderImpl::ParsingState
struct CORDL_TYPE ____System__Xml__XmlTextReaderImpl__ParsingState : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "chars", ty: "::ArrayW<char16_t>", modifiers: "", def_value: None }, CppParam { name: "charPos", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "charsUsed", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "encoding", ty: "::System::Text::Encoding", modifiers: "", def_value: None }, CppParam { name: "appendMode", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "stream", ty: "::System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "decoder", ty: "::System::Text::Decoder", modifiers: "", def_value: None }, CppParam { name: "bytes", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "bytePos", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "bytesUsed", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "textReader", ty: "::System::IO::TextReader", modifiers: "", def_value: None }, CppParam { name: "lineNo", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "lineStartPos", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "baseUriStr", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "baseUri", ty: "::System::Uri", modifiers: "", def_value: None }, CppParam { name: "isEof", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isStreamEof", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "entity", ty: "::System::Xml::IDtdEntityInfo", modifiers: "", def_value: None }, CppParam { name: "entityId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "eolNormalized", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "entityResolvedManually", ty: "bool", modifiers: "", def_value: None }]
constexpr ____System__Xml__XmlTextReaderImpl__ParsingState(::ArrayW<char16_t> chars, int32_t charPos, int32_t charsUsed, ::System::Text::Encoding encoding, bool appendMode, ::System::IO::Stream stream, ::System::Text::Decoder decoder, ::ArrayW<uint8_t> bytes, int32_t bytePos, int32_t bytesUsed, ::System::IO::TextReader textReader, int32_t lineNo, int32_t lineStartPos, ::StringW baseUriStr, ::System::Uri baseUri, bool isEof, bool isStreamEof, ::System::Xml::IDtdEntityInfo entity, int32_t entityId, bool eolNormalized, bool entityResolvedManually) noexcept;


                    constexpr ____System__Xml__XmlTextReaderImpl__ParsingState(____System__Xml__XmlTextReaderImpl__ParsingState const&) = default;
                    constexpr ____System__Xml__XmlTextReaderImpl__ParsingState(____System__Xml__XmlTextReaderImpl__ParsingState&&) = default;
                    constexpr ____System__Xml__XmlTextReaderImpl__ParsingState& operator=(____System__Xml__XmlTextReaderImpl__ParsingState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____System__Xml__XmlTextReaderImpl__ParsingState& operator=(____System__Xml__XmlTextReaderImpl__ParsingState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x78};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____System__Xml__XmlTextReaderImpl__ParsingState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ArrayW<char16_t> __declspec(property(get=__get_chars, put=__set_chars))  chars;

constexpr void __set_chars(::ArrayW<char16_t> value) ;

constexpr ::ArrayW<char16_t> __get_chars() const;

 int32_t __declspec(property(get=__get_charPos, put=__set_charPos))  charPos;

constexpr void __set_charPos(int32_t value) ;

constexpr int32_t __get_charPos() const;

 int32_t __declspec(property(get=__get_charsUsed, put=__set_charsUsed))  charsUsed;

constexpr void __set_charsUsed(int32_t value) ;

constexpr int32_t __get_charsUsed() const;

 ::System::Text::Encoding __declspec(property(get=__get_encoding, put=__set_encoding))  encoding;

constexpr void __set_encoding(::System::Text::Encoding value) ;

constexpr ::System::Text::Encoding __get_encoding() const;

 bool __declspec(property(get=__get_appendMode, put=__set_appendMode))  appendMode;

constexpr void __set_appendMode(bool value) ;

constexpr bool __get_appendMode() const;

 ::System::IO::Stream __declspec(property(get=__get_stream, put=__set_stream))  stream;

constexpr void __set_stream(::System::IO::Stream value) ;

constexpr ::System::IO::Stream __get_stream() const;

 ::System::Text::Decoder __declspec(property(get=__get_decoder, put=__set_decoder))  decoder;

constexpr void __set_decoder(::System::Text::Decoder value) ;

constexpr ::System::Text::Decoder __get_decoder() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_bytes, put=__set_bytes))  bytes;

constexpr void __set_bytes(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_bytes() const;

 int32_t __declspec(property(get=__get_bytePos, put=__set_bytePos))  bytePos;

constexpr void __set_bytePos(int32_t value) ;

constexpr int32_t __get_bytePos() const;

 int32_t __declspec(property(get=__get_bytesUsed, put=__set_bytesUsed))  bytesUsed;

constexpr void __set_bytesUsed(int32_t value) ;

constexpr int32_t __get_bytesUsed() const;

 ::System::IO::TextReader __declspec(property(get=__get_textReader, put=__set_textReader))  textReader;

constexpr void __set_textReader(::System::IO::TextReader value) ;

constexpr ::System::IO::TextReader __get_textReader() const;

 int32_t __declspec(property(get=__get_lineNo, put=__set_lineNo))  lineNo;

constexpr void __set_lineNo(int32_t value) ;

constexpr int32_t __get_lineNo() const;

 int32_t __declspec(property(get=__get_lineStartPos, put=__set_lineStartPos))  lineStartPos;

constexpr void __set_lineStartPos(int32_t value) ;

constexpr int32_t __get_lineStartPos() const;

 ::StringW __declspec(property(get=__get_baseUriStr, put=__set_baseUriStr))  baseUriStr;

constexpr void __set_baseUriStr(::StringW value) ;

constexpr ::StringW __get_baseUriStr() const;

 ::System::Uri __declspec(property(get=__get_baseUri, put=__set_baseUri))  baseUri;

constexpr void __set_baseUri(::System::Uri value) ;

constexpr ::System::Uri __get_baseUri() const;

 bool __declspec(property(get=__get_isEof, put=__set_isEof))  isEof;

constexpr void __set_isEof(bool value) ;

constexpr bool __get_isEof() const;

 bool __declspec(property(get=__get_isStreamEof, put=__set_isStreamEof))  isStreamEof;

constexpr void __set_isStreamEof(bool value) ;

constexpr bool __get_isStreamEof() const;

 ::System::Xml::IDtdEntityInfo __declspec(property(get=__get_entity, put=__set_entity))  entity;

constexpr void __set_entity(::System::Xml::IDtdEntityInfo value) ;

constexpr ::System::Xml::IDtdEntityInfo __get_entity() const;

 int32_t __declspec(property(get=__get_entityId, put=__set_entityId))  entityId;

constexpr void __set_entityId(int32_t value) ;

constexpr int32_t __get_entityId() const;

 bool __declspec(property(get=__get_eolNormalized, put=__set_eolNormalized))  eolNormalized;

constexpr void __set_eolNormalized(bool value) ;

constexpr bool __get_eolNormalized() const;

 bool __declspec(property(get=__get_entityResolvedManually, put=__set_entityResolvedManually))  entityResolvedManually;

constexpr void __set_entityResolvedManually(bool value) ;

constexpr bool __get_entityResolvedManually() const;


// Properties

 int32_t __declspec(property(get=get_LineNo))  LineNo;

 int32_t __declspec(property(get=get_LinePos))  LinePos;


// Methods

/// @brief Method Clear addr 0x26e0884 size 0x7c virtual false final false
 void Clear() ;

/// @brief Method Close addr 0x26e0900 size 0x38 virtual false final false
 void Close(bool closeInput) ;

/// @brief Method get_LineNo addr 0x26e0938 size 0x8 virtual false final false
 int32_t get_LineNo() ;

/// @brief Method get_LinePos addr 0x26e0940 size 0x10 virtual false final false
 int32_t get_LinePos() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Xml
// Type: ::XmlContext
namespace System::Xml {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11410))
// CS Name: System.Xml.XmlTextReaderImpl::XmlContext
class CORDL_TYPE ____System__Xml__XmlTextReaderImpl__XmlContext : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~____System__Xml__XmlTextReaderImpl__XmlContext() = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Xml__XmlTextReaderImpl__XmlContext", modifiers: " const&", def_value: None }]
constexpr ____System__Xml__XmlTextReaderImpl__XmlContext(____System__Xml__XmlTextReaderImpl__XmlContext const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Xml__XmlTextReaderImpl__XmlContext", modifiers: "&&", def_value: None }]
constexpr ____System__Xml__XmlTextReaderImpl__XmlContext(____System__Xml__XmlTextReaderImpl__XmlContext&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____System__Xml__XmlTextReaderImpl__XmlContext(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____System__Xml__XmlTextReaderImpl__XmlContext& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____System__Xml__XmlTextReaderImpl__XmlContext& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____System__Xml__XmlTextReaderImpl__XmlContext& operator=(____System__Xml__XmlTextReaderImpl__XmlContext&& o) noexcept = default;
  constexpr ____System__Xml__XmlTextReaderImpl__XmlContext& operator=(____System__Xml__XmlTextReaderImpl__XmlContext const& o) noexcept = default;
                


// Fields

 ::System::Xml::XmlSpace __declspec(property(get=__get_xmlSpace, put=__set_xmlSpace))  xmlSpace;

constexpr void __set_xmlSpace(::System::Xml::XmlSpace value) ;

constexpr ::System::Xml::XmlSpace __get_xmlSpace() const;

 ::StringW __declspec(property(get=__get_xmlLang, put=__set_xmlLang))  xmlLang;

constexpr void __set_xmlLang(::StringW value) ;

constexpr ::StringW __get_xmlLang() const;

 ::StringW __declspec(property(get=__get_defaultNamespace, put=__set_defaultNamespace))  defaultNamespace;

constexpr void __set_defaultNamespace(::StringW value) ;

constexpr ::StringW __get_defaultNamespace() const;

 ::System::Xml::____System__Xml__XmlTextReaderImpl__XmlContext __declspec(property(get=__get_previousContext, put=__set_previousContext))  previousContext;

constexpr void __set_previousContext(::System::Xml::____System__Xml__XmlTextReaderImpl__XmlContext value) ;

constexpr ::System::Xml::____System__Xml__XmlTextReaderImpl__XmlContext __get_previousContext() const;


// Methods

// Ctor Parameters []
explicit ____System__Xml__XmlTextReaderImpl__XmlContext() ;

/// @brief Method .ctor addr 0x26e0950 size 0x64 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "previousContext", ty: "::System::Xml::____System__Xml__XmlTextReaderImpl__XmlContext", modifiers: "", def_value: None }]
explicit ____System__Xml__XmlTextReaderImpl__XmlContext(::System::Xml::____System__Xml__XmlTextReaderImpl__XmlContext previousContext) ;

/// @brief Method .ctor addr 0x26e09b4 size 0x40 virtual false final false
 void _ctor(::System::Xml::____System__Xml__XmlTextReaderImpl__XmlContext previousContext) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
// Type: ::NoNamespaceManager
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11512))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11411))
// CS Name: System.Xml.XmlTextReaderImpl::NoNamespaceManager
class CORDL_TYPE ____System__Xml__XmlTextReaderImpl__NoNamespaceManager : public ::System::Xml::XmlNamespaceManager {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~____System__Xml__XmlTextReaderImpl__NoNamespaceManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Xml__XmlTextReaderImpl__NoNamespaceManager", modifiers: " const&", def_value: None }]
constexpr ____System__Xml__XmlTextReaderImpl__NoNamespaceManager(____System__Xml__XmlTextReaderImpl__NoNamespaceManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Xml__XmlTextReaderImpl__NoNamespaceManager", modifiers: "&&", def_value: None }]
constexpr ____System__Xml__XmlTextReaderImpl__NoNamespaceManager(____System__Xml__XmlTextReaderImpl__NoNamespaceManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____System__Xml__XmlTextReaderImpl__NoNamespaceManager(void* ptr) noexcept : ::System::Xml::XmlNamespaceManager(ptr) {
}


  constexpr ____System__Xml__XmlTextReaderImpl__NoNamespaceManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____System__Xml__XmlTextReaderImpl__NoNamespaceManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____System__Xml__XmlTextReaderImpl__NoNamespaceManager& operator=(____System__Xml__XmlTextReaderImpl__NoNamespaceManager&& o) noexcept = default;
  constexpr ____System__Xml__XmlTextReaderImpl__NoNamespaceManager& operator=(____System__Xml__XmlTextReaderImpl__NoNamespaceManager const& o) noexcept = default;
                


// Properties

 ::StringW __declspec(property(get=get_DefaultNamespace))  DefaultNamespace;


// Methods

// Ctor Parameters []
explicit ____System__Xml__XmlTextReaderImpl__NoNamespaceManager() ;

/// @brief Method .ctor addr 0x26e09f4 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method get_DefaultNamespace addr 0x26e09fc size 0x48 virtual true final false
 ::StringW get_DefaultNamespace() ;

/// @brief Method PushScope addr 0x26e0a44 size 0x4 virtual true final false
 void PushScope() ;

/// @brief Method PopScope addr 0x26e0a48 size 0x8 virtual true final false
 bool PopScope() ;

/// @brief Method AddNamespace addr 0x26e0a50 size 0x4 virtual true final false
 void AddNamespace(::StringW prefix, ::StringW uri) ;

/// @brief Method RemoveNamespace addr 0x26e0a54 size 0x4 virtual true final false
 void RemoveNamespace(::StringW prefix, ::StringW uri) ;

/// @brief Method GetEnumerator addr 0x26e0a58 size 0x8 virtual true final false
 ::System::Collections::IEnumerator GetEnumerator() ;

/// @brief Method LookupNamespace addr 0x26e0a60 size 0x48 virtual true final false
 ::StringW LookupNamespace(::StringW prefix) ;

/// @brief Method LookupPrefix addr 0x26e0aa8 size 0x8 virtual true final false
 ::StringW LookupPrefix(::StringW uri) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
// Type: ::DtdParserProxy
namespace System::Xml {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11412))
// CS Name: System.Xml.XmlTextReaderImpl::DtdParserProxy
class CORDL_TYPE ____System__Xml__XmlTextReaderImpl__DtdParserProxy : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Xml::IDtdParserAdapterV1
constexpr operator  ::System::Xml::IDtdParserAdapterV1() const noexcept;

/// @brief Convert operator to ::System::Xml::IDtdParserAdapterWithValidation
constexpr operator  ::System::Xml::IDtdParserAdapterWithValidation() const noexcept;

/// @brief Convert operator to ::System::Xml::IDtdParserAdapter
constexpr operator  ::System::Xml::IDtdParserAdapter() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~____System__Xml__XmlTextReaderImpl__DtdParserProxy() = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Xml__XmlTextReaderImpl__DtdParserProxy", modifiers: " const&", def_value: None }]
constexpr ____System__Xml__XmlTextReaderImpl__DtdParserProxy(____System__Xml__XmlTextReaderImpl__DtdParserProxy const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Xml__XmlTextReaderImpl__DtdParserProxy", modifiers: "&&", def_value: None }]
constexpr ____System__Xml__XmlTextReaderImpl__DtdParserProxy(____System__Xml__XmlTextReaderImpl__DtdParserProxy&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____System__Xml__XmlTextReaderImpl__DtdParserProxy(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____System__Xml__XmlTextReaderImpl__DtdParserProxy& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____System__Xml__XmlTextReaderImpl__DtdParserProxy& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____System__Xml__XmlTextReaderImpl__DtdParserProxy& operator=(____System__Xml__XmlTextReaderImpl__DtdParserProxy&& o) noexcept = default;
  constexpr ____System__Xml__XmlTextReaderImpl__DtdParserProxy& operator=(____System__Xml__XmlTextReaderImpl__DtdParserProxy const& o) noexcept = default;
                


// Fields

 ::System::Xml::XmlTextReaderImpl __declspec(property(get=__get_reader, put=__set_reader))  reader;

constexpr void __set_reader(::System::Xml::XmlTextReaderImpl value) ;

constexpr ::System::Xml::XmlTextReaderImpl __get_reader() const;


// Properties

 ::System::Xml::XmlNameTable __declspec(property(get=System_Xml_IDtdParserAdapter_get_NameTable))  System_Xml_IDtdParserAdapter_NameTable;

 ::System::Xml::IXmlNamespaceResolver __declspec(property(get=System_Xml_IDtdParserAdapter_get_NamespaceResolver))  System_Xml_IDtdParserAdapter_NamespaceResolver;

 ::System::Uri __declspec(property(get=System_Xml_IDtdParserAdapter_get_BaseUri))  System_Xml_IDtdParserAdapter_BaseUri;

 bool __declspec(property(get=System_Xml_IDtdParserAdapter_get_IsEof))  System_Xml_IDtdParserAdapter_IsEof;

 ::ArrayW<char16_t> __declspec(property(get=System_Xml_IDtdParserAdapter_get_ParsingBuffer))  System_Xml_IDtdParserAdapter_ParsingBuffer;

 int32_t __declspec(property(get=System_Xml_IDtdParserAdapter_get_ParsingBufferLength))  System_Xml_IDtdParserAdapter_ParsingBufferLength;

 int32_t __declspec(property(get=System_Xml_IDtdParserAdapter_get_CurrentPosition, put=System_Xml_IDtdParserAdapter_set_CurrentPosition))  System_Xml_IDtdParserAdapter_CurrentPosition;

 int32_t __declspec(property(get=System_Xml_IDtdParserAdapter_get_EntityStackLength))  System_Xml_IDtdParserAdapter_EntityStackLength;

 bool __declspec(property(get=System_Xml_IDtdParserAdapter_get_IsEntityEolNormalized))  System_Xml_IDtdParserAdapter_IsEntityEolNormalized;

 int32_t __declspec(property(get=System_Xml_IDtdParserAdapter_get_LineNo))  System_Xml_IDtdParserAdapter_LineNo;

 int32_t __declspec(property(get=System_Xml_IDtdParserAdapter_get_LineStartPosition))  System_Xml_IDtdParserAdapter_LineStartPosition;

 bool __declspec(property(get=System_Xml_IDtdParserAdapterWithValidation_get_DtdValidation))  System_Xml_IDtdParserAdapterWithValidation_DtdValidation;

 ::System::Xml::IValidationEventHandling __declspec(property(get=System_Xml_IDtdParserAdapterWithValidation_get_ValidationEventHandling))  System_Xml_IDtdParserAdapterWithValidation_ValidationEventHandling;

 bool __declspec(property(get=System_Xml_IDtdParserAdapterV1_get_Normalization))  System_Xml_IDtdParserAdapterV1_Normalization;

 bool __declspec(property(get=System_Xml_IDtdParserAdapterV1_get_Namespaces))  System_Xml_IDtdParserAdapterV1_Namespaces;

 bool __declspec(property(get=System_Xml_IDtdParserAdapterV1_get_V1CompatibilityMode))  System_Xml_IDtdParserAdapterV1_V1CompatibilityMode;


// Methods

// Ctor Parameters [CppParam { name: "reader", ty: "::System::Xml::XmlTextReaderImpl", modifiers: "", def_value: None }]
explicit ____System__Xml__XmlTextReaderImpl__DtdParserProxy(::System::Xml::XmlTextReaderImpl reader) ;

/// @brief Method .ctor addr 0x26e0ab0 size 0x28 virtual false final false
 void _ctor(::System::Xml::XmlTextReaderImpl reader) ;

/// @brief Method System.Xml.IDtdParserAdapter.get_NameTable addr 0x26e0ad8 size 0x1c virtual true final true
 ::System::Xml::XmlNameTable System_Xml_IDtdParserAdapter_get_NameTable() ;

/// @brief Method System.Xml.IDtdParserAdapter.get_NamespaceResolver addr 0x26e0af4 size 0x1c virtual true final true
 ::System::Xml::IXmlNamespaceResolver System_Xml_IDtdParserAdapter_get_NamespaceResolver() ;

/// @brief Method System.Xml.IDtdParserAdapter.get_BaseUri addr 0x26e0b10 size 0x1c virtual true final true
 ::System::Uri System_Xml_IDtdParserAdapter_get_BaseUri() ;

/// @brief Method System.Xml.IDtdParserAdapter.get_IsEof addr 0x26e0b2c size 0x1c virtual true final true
 bool System_Xml_IDtdParserAdapter_get_IsEof() ;

/// @brief Method System.Xml.IDtdParserAdapter.get_ParsingBuffer addr 0x26e0b48 size 0x1c virtual true final true
 ::ArrayW<char16_t> System_Xml_IDtdParserAdapter_get_ParsingBuffer() ;

/// @brief Method System.Xml.IDtdParserAdapter.get_ParsingBufferLength addr 0x26e0b64 size 0x1c virtual true final true
 int32_t System_Xml_IDtdParserAdapter_get_ParsingBufferLength() ;

/// @brief Method System.Xml.IDtdParserAdapter.get_CurrentPosition addr 0x26e0b80 size 0x1c virtual true final true
 int32_t System_Xml_IDtdParserAdapter_get_CurrentPosition() ;

/// @brief Method System.Xml.IDtdParserAdapter.set_CurrentPosition addr 0x26e0b9c size 0x1c virtual true final true
 void System_Xml_IDtdParserAdapter_set_CurrentPosition(int32_t value) ;

/// @brief Method System.Xml.IDtdParserAdapter.get_EntityStackLength addr 0x26e0bb8 size 0x1c virtual true final true
 int32_t System_Xml_IDtdParserAdapter_get_EntityStackLength() ;

/// @brief Method System.Xml.IDtdParserAdapter.get_IsEntityEolNormalized addr 0x26e0bd4 size 0x1c virtual true final true
 bool System_Xml_IDtdParserAdapter_get_IsEntityEolNormalized() ;

/// @brief Method System.Xml.IDtdParserAdapter.OnNewLine addr 0x26e0bf0 size 0x1c virtual true final true
 void System_Xml_IDtdParserAdapter_OnNewLine(int32_t pos) ;

/// @brief Method System.Xml.IDtdParserAdapter.get_LineNo addr 0x26e0c0c size 0x1c virtual true final true
 int32_t System_Xml_IDtdParserAdapter_get_LineNo() ;

/// @brief Method System.Xml.IDtdParserAdapter.get_LineStartPosition addr 0x26e0c28 size 0x1c virtual true final true
 int32_t System_Xml_IDtdParserAdapter_get_LineStartPosition() ;

/// @brief Method System.Xml.IDtdParserAdapter.ReadData addr 0x26e0c44 size 0x1c virtual true final true
 int32_t System_Xml_IDtdParserAdapter_ReadData() ;

/// @brief Method System.Xml.IDtdParserAdapter.ParseNumericCharRef addr 0x26e0c60 size 0x1c virtual true final true
 int32_t System_Xml_IDtdParserAdapter_ParseNumericCharRef(::System::Text::StringBuilder internalSubsetBuilder) ;

/// @brief Method System.Xml.IDtdParserAdapter.ParseNamedCharRef addr 0x26e0c7c size 0x20 virtual true final true
 int32_t System_Xml_IDtdParserAdapter_ParseNamedCharRef(bool expand, ::System::Text::StringBuilder internalSubsetBuilder) ;

/// @brief Method System.Xml.IDtdParserAdapter.ParsePI addr 0x26e0c9c size 0x1c virtual true final true
 void System_Xml_IDtdParserAdapter_ParsePI(::System::Text::StringBuilder sb) ;

/// @brief Method System.Xml.IDtdParserAdapter.ParseComment addr 0x26e0cb8 size 0x1c virtual true final true
 void System_Xml_IDtdParserAdapter_ParseComment(::System::Text::StringBuilder sb) ;

/// @brief Method System.Xml.IDtdParserAdapter.PushEntity addr 0x26e0cd4 size 0x1c virtual true final true
 bool System_Xml_IDtdParserAdapter_PushEntity(::System::Xml::IDtdEntityInfo entity, ByRef<int32_t> entityId) ;

/// @brief Method System.Xml.IDtdParserAdapter.PopEntity addr 0x26e0cf0 size 0x1c virtual true final true
 bool System_Xml_IDtdParserAdapter_PopEntity(ByRef<::System::Xml::IDtdEntityInfo> oldEntity, ByRef<int32_t> newEntityId) ;

/// @brief Method System.Xml.IDtdParserAdapter.PushExternalSubset addr 0x26e0d0c size 0x1c virtual true final true
 bool System_Xml_IDtdParserAdapter_PushExternalSubset(::StringW systemId, ::StringW publicId) ;

/// @brief Method System.Xml.IDtdParserAdapter.PushInternalDtd addr 0x26e0d28 size 0x1c virtual true final true
 void System_Xml_IDtdParserAdapter_PushInternalDtd(::StringW baseUri, ::StringW internalDtd) ;

/// @brief Method System.Xml.IDtdParserAdapter.Throw addr 0x26e0d44 size 0x1c virtual true final true
 void System_Xml_IDtdParserAdapter_Throw(::System::Exception e) ;

/// @brief Method System.Xml.IDtdParserAdapter.OnSystemId addr 0x26e0d60 size 0x1c virtual true final true
 void System_Xml_IDtdParserAdapter_OnSystemId(::StringW systemId, ::System::Xml::LineInfo keywordLineInfo, ::System::Xml::LineInfo systemLiteralLineInfo) ;

/// @brief Method System.Xml.IDtdParserAdapter.OnPublicId addr 0x26e0d7c size 0x1c virtual true final true
 void System_Xml_IDtdParserAdapter_OnPublicId(::StringW publicId, ::System::Xml::LineInfo keywordLineInfo, ::System::Xml::LineInfo publicLiteralLineInfo) ;

/// @brief Method System.Xml.IDtdParserAdapterWithValidation.get_DtdValidation addr 0x26e0d98 size 0x1c virtual true final true
 bool System_Xml_IDtdParserAdapterWithValidation_get_DtdValidation() ;

/// @brief Method System.Xml.IDtdParserAdapterWithValidation.get_ValidationEventHandling addr 0x26e0db4 size 0x1c virtual true final true
 ::System::Xml::IValidationEventHandling System_Xml_IDtdParserAdapterWithValidation_get_ValidationEventHandling() ;

/// @brief Method System.Xml.IDtdParserAdapterV1.get_Normalization addr 0x26e0dd0 size 0x1c virtual true final true
 bool System_Xml_IDtdParserAdapterV1_get_Normalization() ;

/// @brief Method System.Xml.IDtdParserAdapterV1.get_Namespaces addr 0x26e0dec size 0x1c virtual true final true
 bool System_Xml_IDtdParserAdapterV1_get_Namespaces() ;

/// @brief Method System.Xml.IDtdParserAdapterV1.get_V1CompatibilityMode addr 0x26e0e08 size 0x1c virtual true final true
 bool System_Xml_IDtdParserAdapterV1_get_V1CompatibilityMode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
// Type: ::NodeData
namespace System::Xml {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11413))
// CS Name: System.Xml.XmlTextReaderImpl::NodeData
class CORDL_TYPE ____System__Xml__XmlTextReaderImpl__NodeData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::IComparable
constexpr operator  ::System::IComparable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~____System__Xml__XmlTextReaderImpl__NodeData() = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Xml__XmlTextReaderImpl__NodeData", modifiers: " const&", def_value: None }]
constexpr ____System__Xml__XmlTextReaderImpl__NodeData(____System__Xml__XmlTextReaderImpl__NodeData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Xml__XmlTextReaderImpl__NodeData", modifiers: "&&", def_value: None }]
constexpr ____System__Xml__XmlTextReaderImpl__NodeData(____System__Xml__XmlTextReaderImpl__NodeData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____System__Xml__XmlTextReaderImpl__NodeData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____System__Xml__XmlTextReaderImpl__NodeData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____System__Xml__XmlTextReaderImpl__NodeData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____System__Xml__XmlTextReaderImpl__NodeData& operator=(____System__Xml__XmlTextReaderImpl__NodeData&& o) noexcept = default;
  constexpr ____System__Xml__XmlTextReaderImpl__NodeData& operator=(____System__Xml__XmlTextReaderImpl__NodeData const& o) noexcept = default;
                


// Fields

static ::System::Xml::____System__Xml__XmlTextReaderImpl__NodeData __declspec(property(get=__get_s_None, put=__set_s_None))  s_None;

static void __set_s_None(::System::Xml::____System__Xml__XmlTextReaderImpl__NodeData value) ;

static ::System::Xml::____System__Xml__XmlTextReaderImpl__NodeData __get_s_None() ;

 ::System::Xml::XmlNodeType __declspec(property(get=__get_type, put=__set_type))  type;

constexpr void __set_type(::System::Xml::XmlNodeType value) ;

constexpr ::System::Xml::XmlNodeType __get_type() const;

 ::StringW __declspec(property(get=__get_localName, put=__set_localName))  localName;

constexpr void __set_localName(::StringW value) ;

constexpr ::StringW __get_localName() const;

 ::StringW __declspec(property(get=__get_prefix, put=__set_prefix))  prefix;

constexpr void __set_prefix(::StringW value) ;

constexpr ::StringW __get_prefix() const;

 ::StringW __declspec(property(get=__get_ns, put=__set_ns))  ns;

constexpr void __set_ns(::StringW value) ;

constexpr ::StringW __get_ns() const;

 ::StringW __declspec(property(get=__get_nameWPrefix, put=__set_nameWPrefix))  nameWPrefix;

constexpr void __set_nameWPrefix(::StringW value) ;

constexpr ::StringW __get_nameWPrefix() const;

 ::StringW __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(::StringW value) ;

constexpr ::StringW __get_value() const;

 ::ArrayW<char16_t> __declspec(property(get=__get_chars, put=__set_chars))  chars;

constexpr void __set_chars(::ArrayW<char16_t> value) ;

constexpr ::ArrayW<char16_t> __get_chars() const;

 int32_t __declspec(property(get=__get_valueStartPos, put=__set_valueStartPos))  valueStartPos;

constexpr void __set_valueStartPos(int32_t value) ;

constexpr int32_t __get_valueStartPos() const;

 int32_t __declspec(property(get=__get_valueLength, put=__set_valueLength))  valueLength;

constexpr void __set_valueLength(int32_t value) ;

constexpr int32_t __get_valueLength() const;

 ::System::Xml::LineInfo __declspec(property(get=__get_lineInfo, put=__set_lineInfo))  lineInfo;

constexpr void __set_lineInfo(::System::Xml::LineInfo value) ;

constexpr ::System::Xml::LineInfo __get_lineInfo() const;

 ::System::Xml::LineInfo __declspec(property(get=__get_lineInfo2, put=__set_lineInfo2))  lineInfo2;

constexpr void __set_lineInfo2(::System::Xml::LineInfo value) ;

constexpr ::System::Xml::LineInfo __get_lineInfo2() const;

 char16_t __declspec(property(get=__get_quoteChar, put=__set_quoteChar))  quoteChar;

constexpr void __set_quoteChar(char16_t value) ;

constexpr char16_t __get_quoteChar() const;

 int32_t __declspec(property(get=__get_depth, put=__set_depth))  depth;

constexpr void __set_depth(int32_t value) ;

constexpr int32_t __get_depth() const;

 bool __declspec(property(get=__get_isEmptyOrDefault, put=__set_isEmptyOrDefault))  isEmptyOrDefault;

constexpr void __set_isEmptyOrDefault(bool value) ;

constexpr bool __get_isEmptyOrDefault() const;

 int32_t __declspec(property(get=__get_entityId, put=__set_entityId))  entityId;

constexpr void __set_entityId(int32_t value) ;

constexpr int32_t __get_entityId() const;

 bool __declspec(property(get=__get_xmlContextPushed, put=__set_xmlContextPushed))  xmlContextPushed;

constexpr void __set_xmlContextPushed(bool value) ;

constexpr bool __get_xmlContextPushed() const;

 ::System::Xml::____System__Xml__XmlTextReaderImpl__NodeData __declspec(property(get=__get_nextAttrValueChunk, put=__set_nextAttrValueChunk))  nextAttrValueChunk;

constexpr void __set_nextAttrValueChunk(::System::Xml::____System__Xml__XmlTextReaderImpl__NodeData value) ;

constexpr ::System::Xml::____System__Xml__XmlTextReaderImpl__NodeData __get_nextAttrValueChunk() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_schemaType, put=__set_schemaType))  schemaType;

constexpr void __set_schemaType(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_schemaType() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_typedValue, put=__set_typedValue))  typedValue;

constexpr void __set_typedValue(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_typedValue() const;


// Properties

static ::System::Xml::____System__Xml__XmlTextReaderImpl__NodeData __declspec(property(get=get_None))  None;

 int32_t __declspec(property(get=get_LineNo))  LineNo;

 int32_t __declspec(property(get=get_LinePos))  LinePos;

 bool __declspec(property(get=get_IsEmptyElement, put=set_IsEmptyElement))  IsEmptyElement;

 bool __declspec(property(get=get_IsDefaultAttribute, put=set_IsDefaultAttribute))  IsDefaultAttribute;

 bool __declspec(property(get=get_ValueBuffered))  ValueBuffered;

 ::StringW __declspec(property(get=get_StringValue))  StringValue;


// Methods

/// @brief Method get_None addr 0x26e0e24 size 0xa0 virtual false final false
static ::System::Xml::____System__Xml__XmlTextReaderImpl__NodeData get_None() ;

// Ctor Parameters []
explicit ____System__Xml__XmlTextReaderImpl__NodeData() ;

/// @brief Method .ctor addr 0x26e0ec4 size 0x28 virtual false final false
 void _ctor() ;

/// @brief Method get_LineNo addr 0x26e0f78 size 0x8 virtual false final false
 int32_t get_LineNo() ;

/// @brief Method get_LinePos addr 0x26e0f80 size 0x8 virtual false final false
 int32_t get_LinePos() ;

/// @brief Method get_IsEmptyElement addr 0x26e0f88 size 0x24 virtual false final false
 bool get_IsEmptyElement() ;

/// @brief Method set_IsEmptyElement addr 0x26e0fac size 0xc virtual false final false
 void set_IsEmptyElement(bool value) ;

/// @brief Method get_IsDefaultAttribute addr 0x26e0fb8 size 0x24 virtual false final false
 bool get_IsDefaultAttribute() ;

/// @brief Method set_IsDefaultAttribute addr 0x26e0fdc size 0xc virtual false final false
 void set_IsDefaultAttribute(bool value) ;

/// @brief Method get_ValueBuffered addr 0x26e0fe8 size 0x10 virtual false final false
 bool get_ValueBuffered() ;

/// @brief Method get_StringValue addr 0x26e0ff8 size 0x2c virtual false final false
 ::StringW get_StringValue() ;

/// @brief Method TrimSpacesInValue addr 0x26e1024 size 0x3c virtual false final false
 void TrimSpacesInValue() ;

/// @brief Method Clear addr 0x26e0eec size 0x8c virtual false final false
 void Clear(::System::Xml::XmlNodeType type) ;

/// @brief Method ClearName addr 0x26e1060 size 0x54 virtual false final false
 void ClearName() ;

/// @brief Method SetLineInfo addr 0x26e10b4 size 0xc virtual false final false
 void SetLineInfo(int32_t lineNo, int32_t linePos) ;

/// @brief Method SetLineInfo2 addr 0x26e10c0 size 0xc virtual false final false
 void SetLineInfo2(int32_t lineNo, int32_t linePos) ;

/// @brief Method SetValueNode addr 0x26e10cc size 0x70 virtual false final false
 void SetValueNode(::System::Xml::XmlNodeType type, ::StringW value) ;

/// @brief Method SetValueNode addr 0x26e113c size 0x7c virtual false final false
 void SetValueNode(::System::Xml::XmlNodeType type, ::ArrayW<char16_t> chars, int32_t startPos, int32_t len) ;

/// @brief Method SetNamedNode addr 0x26e11b8 size 0xa8 virtual false final false
 void SetNamedNode(::System::Xml::XmlNodeType type, ::StringW localName) ;

/// @brief Method SetNamedNode addr 0x26e1260 size 0x88 virtual false final false
 void SetNamedNode(::System::Xml::XmlNodeType type, ::StringW localName, ::StringW prefix, ::StringW nameWPrefix) ;

/// @brief Method SetValue addr 0x26e12e8 size 0x10 virtual false final false
 void SetValue(::StringW value) ;

/// @brief Method SetValue addr 0x26e12f8 size 0xc virtual false final false
 void SetValue(::ArrayW<char16_t> chars, int32_t startPos, int32_t len) ;

/// @brief Method OnBufferInvalidated addr 0x26e1304 size 0x38 virtual false final false
 void OnBufferInvalidated() ;

/// @brief Method CopyTo addr 0x26e133c size 0x80 virtual false final false
 void CopyTo(int32_t valueOffset, ::System::Text::StringBuilder sb) ;

/// @brief Method GetNameWPrefix addr 0x26e13bc size 0x14 virtual false final false
 ::StringW GetNameWPrefix(::System::Xml::XmlNameTable nt) ;

/// @brief Method CreateNameWPrefix addr 0x26e13d0 size 0x8c virtual false final false
 ::StringW CreateNameWPrefix(::System::Xml::XmlNameTable nt) ;

/// @brief Method System.IComparable.CompareTo addr 0x26e145c size 0xd8 virtual true final true
 int32_t System_IComparable_CompareTo(::bs_hook::Il2CppWrapperType obj) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
// Type: ::DtdDefaultAttributeInfoToNodeDataComparer
namespace System::Xml {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11414))
// CS Name: System.Xml.XmlTextReaderImpl::DtdDefaultAttributeInfoToNodeDataComparer
class CORDL_TYPE ____System__Xml__XmlTextReaderImpl__DtdDefaultAttributeInfoToNodeDataComparer : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::Generic::IComparer_1<::bs_hook::Il2CppWrapperType>
constexpr operator  ::System::Collections::Generic::IComparer_1<::bs_hook::Il2CppWrapperType>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~____System__Xml__XmlTextReaderImpl__DtdDefaultAttributeInfoToNodeDataComparer() = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Xml__XmlTextReaderImpl__DtdDefaultAttributeInfoToNodeDataComparer", modifiers: " const&", def_value: None }]
constexpr ____System__Xml__XmlTextReaderImpl__DtdDefaultAttributeInfoToNodeDataComparer(____System__Xml__XmlTextReaderImpl__DtdDefaultAttributeInfoToNodeDataComparer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Xml__XmlTextReaderImpl__DtdDefaultAttributeInfoToNodeDataComparer", modifiers: "&&", def_value: None }]
constexpr ____System__Xml__XmlTextReaderImpl__DtdDefaultAttributeInfoToNodeDataComparer(____System__Xml__XmlTextReaderImpl__DtdDefaultAttributeInfoToNodeDataComparer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____System__Xml__XmlTextReaderImpl__DtdDefaultAttributeInfoToNodeDataComparer(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____System__Xml__XmlTextReaderImpl__DtdDefaultAttributeInfoToNodeDataComparer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____System__Xml__XmlTextReaderImpl__DtdDefaultAttributeInfoToNodeDataComparer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____System__Xml__XmlTextReaderImpl__DtdDefaultAttributeInfoToNodeDataComparer& operator=(____System__Xml__XmlTextReaderImpl__DtdDefaultAttributeInfoToNodeDataComparer&& o) noexcept = default;
  constexpr ____System__Xml__XmlTextReaderImpl__DtdDefaultAttributeInfoToNodeDataComparer& operator=(____System__Xml__XmlTextReaderImpl__DtdDefaultAttributeInfoToNodeDataComparer const& o) noexcept = default;
                


// Fields

static ::System::Collections::Generic::IComparer_1<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get_s_instance, put=__set_s_instance))  s_instance;

static void __set_s_instance(::System::Collections::Generic::IComparer_1<::bs_hook::Il2CppWrapperType> value) ;

static ::System::Collections::Generic::IComparer_1<::bs_hook::Il2CppWrapperType> __get_s_instance() ;


// Properties

static ::System::Collections::Generic::IComparer_1<::bs_hook::Il2CppWrapperType> __declspec(property(get=get_Instance))  Instance;


// Methods

/// @brief Method get_Instance addr 0x26e1534 size 0x58 virtual false final false
static ::System::Collections::Generic::IComparer_1<::bs_hook::Il2CppWrapperType> get_Instance() ;

/// @brief Method Compare addr 0x26e158c size 0x348 virtual true final true
 int32_t Compare(::bs_hook::Il2CppWrapperType x, ::bs_hook::Il2CppWrapperType y) ;

// Ctor Parameters []
explicit ____System__Xml__XmlTextReaderImpl__DtdDefaultAttributeInfoToNodeDataComparer() ;

/// @brief Method .ctor addr 0x26e18d4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
// Type: ::OnDefaultAttributeUseDelegate
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11415))
// CS Name: System.Xml.XmlTextReaderImpl::OnDefaultAttributeUseDelegate
class CORDL_TYPE ____System__Xml__XmlTextReaderImpl__OnDefaultAttributeUseDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~____System__Xml__XmlTextReaderImpl__OnDefaultAttributeUseDelegate() = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Xml__XmlTextReaderImpl__OnDefaultAttributeUseDelegate", modifiers: " const&", def_value: None }]
constexpr ____System__Xml__XmlTextReaderImpl__OnDefaultAttributeUseDelegate(____System__Xml__XmlTextReaderImpl__OnDefaultAttributeUseDelegate const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Xml__XmlTextReaderImpl__OnDefaultAttributeUseDelegate", modifiers: "&&", def_value: None }]
constexpr ____System__Xml__XmlTextReaderImpl__OnDefaultAttributeUseDelegate(____System__Xml__XmlTextReaderImpl__OnDefaultAttributeUseDelegate&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____System__Xml__XmlTextReaderImpl__OnDefaultAttributeUseDelegate(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr ____System__Xml__XmlTextReaderImpl__OnDefaultAttributeUseDelegate& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____System__Xml__XmlTextReaderImpl__OnDefaultAttributeUseDelegate& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____System__Xml__XmlTextReaderImpl__OnDefaultAttributeUseDelegate& operator=(____System__Xml__XmlTextReaderImpl__OnDefaultAttributeUseDelegate&& o) noexcept = default;
  constexpr ____System__Xml__XmlTextReaderImpl__OnDefaultAttributeUseDelegate& operator=(____System__Xml__XmlTextReaderImpl__OnDefaultAttributeUseDelegate const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ____System__Xml__XmlTextReaderImpl__OnDefaultAttributeUseDelegate(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x26e1940 size 0x130 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x26e1a70 size 0x14 virtual true final false
 void Invoke(::System::Xml::IDtdDefaultAttributeInfo defaultAttribute, ::System::Xml::XmlTextReaderImpl coreReader) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
// Type: System.Xml::XmlTextReaderImpl
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11398))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11416))
// CS Name: System.Xml.XmlTextReaderImpl
class CORDL_TYPE XmlTextReaderImpl : public ::System::Xml::XmlReader {
public:
// Declarations
using OnDefaultAttributeUseDelegate = ::System::Xml::____System__Xml__XmlTextReaderImpl__OnDefaultAttributeUseDelegate;

using DtdDefaultAttributeInfoToNodeDataComparer = ::System::Xml::____System__Xml__XmlTextReaderImpl__DtdDefaultAttributeInfoToNodeDataComparer;

using NodeData = ::System::Xml::____System__Xml__XmlTextReaderImpl__NodeData;

using DtdParserProxy = ::System::Xml::____System__Xml__XmlTextReaderImpl__DtdParserProxy;

using NoNamespaceManager = ::System::Xml::____System__Xml__XmlTextReaderImpl__NoNamespaceManager;

using XmlContext = ::System::Xml::____System__Xml__XmlTextReaderImpl__XmlContext;

using ParsingState = ::System::Xml::____System__Xml__XmlTextReaderImpl__ParsingState;

using InitInputType = ::System::Xml::____System__Xml__XmlTextReaderImpl__InitInputType;

using LaterInitParam = ::System::Xml::____System__Xml__XmlTextReaderImpl__LaterInitParam;

using IncrementalReadState = ::System::Xml::____System__Xml__XmlTextReaderImpl__IncrementalReadState;

using EntityExpandType = ::System::Xml::____System__Xml__XmlTextReaderImpl__EntityExpandType;

using EntityType = ::System::Xml::____System__Xml__XmlTextReaderImpl__EntityType;

using ParsingMode = ::System::Xml::____System__Xml__XmlTextReaderImpl__ParsingMode;

using ParsingFunction = ::System::Xml::____System__Xml__XmlTextReaderImpl__ParsingFunction;

/// @brief Convert operator to ::System::Xml::IXmlNamespaceResolver
constexpr operator  ::System::Xml::IXmlNamespaceResolver() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x240};

virtual ~XmlTextReaderImpl() = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlTextReaderImpl", modifiers: " const&", def_value: None }]
constexpr XmlTextReaderImpl(XmlTextReaderImpl const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlTextReaderImpl", modifiers: "&&", def_value: None }]
constexpr XmlTextReaderImpl(XmlTextReaderImpl&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XmlTextReaderImpl(void* ptr) noexcept : ::System::Xml::XmlReader(ptr) {
}


  constexpr XmlTextReaderImpl& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XmlTextReaderImpl& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XmlTextReaderImpl& operator=(XmlTextReaderImpl&& o) noexcept = default;
  constexpr XmlTextReaderImpl& operator=(XmlTextReaderImpl const& o) noexcept = default;
                


// Fields

 ::System::Xml::____System__Xml__XmlTextReaderImpl__LaterInitParam __declspec(property(get=__get_laterInitParam, put=__set_laterInitParam))  laterInitParam;

constexpr void __set_laterInitParam(::System::Xml::____System__Xml__XmlTextReaderImpl__LaterInitParam value) ;

constexpr ::System::Xml::____System__Xml__XmlTextReaderImpl__LaterInitParam __get_laterInitParam() const;

 ::System::Xml::XmlCharType __declspec(property(get=__get_xmlCharType, put=__set_xmlCharType))  xmlCharType;

constexpr void __set_xmlCharType(::System::Xml::XmlCharType value) ;

constexpr ::System::Xml::XmlCharType __get_xmlCharType() const;

 ::System::Xml::____System__Xml__XmlTextReaderImpl__ParsingState __declspec(property(get=__get_ps, put=__set_ps))  ps;

constexpr void __set_ps(::System::Xml::____System__Xml__XmlTextReaderImpl__ParsingState value) ;

constexpr ::System::Xml::____System__Xml__XmlTextReaderImpl__ParsingState __get_ps() const;

 ::System::Xml::____System__Xml__XmlTextReaderImpl__ParsingFunction __declspec(property(get=__get_parsingFunction, put=__set_parsingFunction))  parsingFunction;

constexpr void __set_parsingFunction(::System::Xml::____System__Xml__XmlTextReaderImpl__ParsingFunction value) ;

constexpr ::System::Xml::____System__Xml__XmlTextReaderImpl__ParsingFunction __get_parsingFunction() const;

 ::System::Xml::____System__Xml__XmlTextReaderImpl__ParsingFunction __declspec(property(get=__get_nextParsingFunction, put=__set_nextParsingFunction))  nextParsingFunction;

constexpr void __set_nextParsingFunction(::System::Xml::____System__Xml__XmlTextReaderImpl__ParsingFunction value) ;

constexpr ::System::Xml::____System__Xml__XmlTextReaderImpl__ParsingFunction __get_nextParsingFunction() const;

 ::System::Xml::____System__Xml__XmlTextReaderImpl__ParsingFunction __declspec(property(get=__get_nextNextParsingFunction, put=__set_nextNextParsingFunction))  nextNextParsingFunction;

constexpr void __set_nextNextParsingFunction(::System::Xml::____System__Xml__XmlTextReaderImpl__ParsingFunction value) ;

constexpr ::System::Xml::____System__Xml__XmlTextReaderImpl__ParsingFunction __get_nextNextParsingFunction() const;

 ::ArrayW<::System::Xml::____System__Xml__XmlTextReaderImpl__NodeData> __declspec(property(get=__get_nodes, put=__set_nodes))  nodes;

constexpr void __set_nodes(::ArrayW<::System::Xml::____System__Xml__XmlTextReaderImpl__NodeData> value) ;

constexpr ::ArrayW<::System::Xml::____System__Xml__XmlTextReaderImpl__NodeData> __get_nodes() const;

 ::System::Xml::____System__Xml__XmlTextReaderImpl__NodeData __declspec(property(get=__get_curNode, put=__set_curNode))  curNode;

constexpr void __set_curNode(::System::Xml::____System__Xml__XmlTextReaderImpl__NodeData value) ;

constexpr ::System::Xml::____System__Xml__XmlTextReaderImpl__NodeData __get_curNode() const;

 int32_t __declspec(property(get=__get_index, put=__set_index))  index;

constexpr void __set_index(int32_t value) ;

constexpr int32_t __get_index() const;

 int32_t __declspec(property(get=__get_curAttrIndex, put=__set_curAttrIndex))  curAttrIndex;

constexpr void __set_curAttrIndex(int32_t value) ;

constexpr int32_t __get_curAttrIndex() const;

 int32_t __declspec(property(get=__get_attrCount, put=__set_attrCount))  attrCount;

constexpr void __set_attrCount(int32_t value) ;

constexpr int32_t __get_attrCount() const;

 int32_t __declspec(property(get=__get_attrHashtable, put=__set_attrHashtable))  attrHashtable;

constexpr void __set_attrHashtable(int32_t value) ;

constexpr int32_t __get_attrHashtable() const;

 int32_t __declspec(property(get=__get_attrDuplWalkCount, put=__set_attrDuplWalkCount))  attrDuplWalkCount;

constexpr void __set_attrDuplWalkCount(int32_t value) ;

constexpr int32_t __get_attrDuplWalkCount() const;

 bool __declspec(property(get=__get_attrNeedNamespaceLookup, put=__set_attrNeedNamespaceLookup))  attrNeedNamespaceLookup;

constexpr void __set_attrNeedNamespaceLookup(bool value) ;

constexpr bool __get_attrNeedNamespaceLookup() const;

 bool __declspec(property(get=__get_fullAttrCleanup, put=__set_fullAttrCleanup))  fullAttrCleanup;

constexpr void __set_fullAttrCleanup(bool value) ;

constexpr bool __get_fullAttrCleanup() const;

 ::ArrayW<::System::Xml::____System__Xml__XmlTextReaderImpl__NodeData> __declspec(property(get=__get_attrDuplSortingArray, put=__set_attrDuplSortingArray))  attrDuplSortingArray;

constexpr void __set_attrDuplSortingArray(::ArrayW<::System::Xml::____System__Xml__XmlTextReaderImpl__NodeData> value) ;

constexpr ::ArrayW<::System::Xml::____System__Xml__XmlTextReaderImpl__NodeData> __get_attrDuplSortingArray() const;

 ::System::Xml::XmlNameTable __declspec(property(get=__get_nameTable, put=__set_nameTable))  nameTable;

constexpr void __set_nameTable(::System::Xml::XmlNameTable value) ;

constexpr ::System::Xml::XmlNameTable __get_nameTable() const;

 bool __declspec(property(get=__get_nameTableFromSettings, put=__set_nameTableFromSettings))  nameTableFromSettings;

constexpr void __set_nameTableFromSettings(bool value) ;

constexpr bool __get_nameTableFromSettings() const;

 ::System::Xml::XmlResolver __declspec(property(get=__get_xmlResolver, put=__set_xmlResolver))  xmlResolver;

constexpr void __set_xmlResolver(::System::Xml::XmlResolver value) ;

constexpr ::System::Xml::XmlResolver __get_xmlResolver() const;

 ::StringW __declspec(property(get=__get_url, put=__set_url))  url;

constexpr void __set_url(::StringW value) ;

constexpr ::StringW __get_url() const;

 bool __declspec(property(get=__get_normalize, put=__set_normalize))  normalize;

constexpr void __set_normalize(bool value) ;

constexpr bool __get_normalize() const;

 bool __declspec(property(get=__get_supportNamespaces, put=__set_supportNamespaces))  supportNamespaces;

constexpr void __set_supportNamespaces(bool value) ;

constexpr bool __get_supportNamespaces() const;

 ::System::Xml::WhitespaceHandling __declspec(property(get=__get_whitespaceHandling, put=__set_whitespaceHandling))  whitespaceHandling;

constexpr void __set_whitespaceHandling(::System::Xml::WhitespaceHandling value) ;

constexpr ::System::Xml::WhitespaceHandling __get_whitespaceHandling() const;

 ::System::Xml::DtdProcessing __declspec(property(get=__get_dtdProcessing, put=__set_dtdProcessing))  dtdProcessing;

constexpr void __set_dtdProcessing(::System::Xml::DtdProcessing value) ;

constexpr ::System::Xml::DtdProcessing __get_dtdProcessing() const;

 ::System::Xml::EntityHandling __declspec(property(get=__get_entityHandling, put=__set_entityHandling))  entityHandling;

constexpr void __set_entityHandling(::System::Xml::EntityHandling value) ;

constexpr ::System::Xml::EntityHandling __get_entityHandling() const;

 bool __declspec(property(get=__get_ignorePIs, put=__set_ignorePIs))  ignorePIs;

constexpr void __set_ignorePIs(bool value) ;

constexpr bool __get_ignorePIs() const;

 bool __declspec(property(get=__get_ignoreComments, put=__set_ignoreComments))  ignoreComments;

constexpr void __set_ignoreComments(bool value) ;

constexpr bool __get_ignoreComments() const;

 bool __declspec(property(get=__get_checkCharacters, put=__set_checkCharacters))  checkCharacters;

constexpr void __set_checkCharacters(bool value) ;

constexpr bool __get_checkCharacters() const;

 int32_t __declspec(property(get=__get_lineNumberOffset, put=__set_lineNumberOffset))  lineNumberOffset;

constexpr void __set_lineNumberOffset(int32_t value) ;

constexpr int32_t __get_lineNumberOffset() const;

 int32_t __declspec(property(get=__get_linePositionOffset, put=__set_linePositionOffset))  linePositionOffset;

constexpr void __set_linePositionOffset(int32_t value) ;

constexpr int32_t __get_linePositionOffset() const;

 bool __declspec(property(get=__get_closeInput, put=__set_closeInput))  closeInput;

constexpr void __set_closeInput(bool value) ;

constexpr bool __get_closeInput() const;

 int64_t __declspec(property(get=__get_maxCharactersInDocument, put=__set_maxCharactersInDocument))  maxCharactersInDocument;

constexpr void __set_maxCharactersInDocument(int64_t value) ;

constexpr int64_t __get_maxCharactersInDocument() const;

 int64_t __declspec(property(get=__get_maxCharactersFromEntities, put=__set_maxCharactersFromEntities))  maxCharactersFromEntities;

constexpr void __set_maxCharactersFromEntities(int64_t value) ;

constexpr int64_t __get_maxCharactersFromEntities() const;

 bool __declspec(property(get=__get_v1Compat, put=__set_v1Compat))  v1Compat;

constexpr void __set_v1Compat(bool value) ;

constexpr bool __get_v1Compat() const;

 ::System::Xml::XmlNamespaceManager __declspec(property(get=__get_namespaceManager, put=__set_namespaceManager))  namespaceManager;

constexpr void __set_namespaceManager(::System::Xml::XmlNamespaceManager value) ;

constexpr ::System::Xml::XmlNamespaceManager __get_namespaceManager() const;

 ::StringW __declspec(property(get=__get_lastPrefix, put=__set_lastPrefix))  lastPrefix;

constexpr void __set_lastPrefix(::StringW value) ;

constexpr ::StringW __get_lastPrefix() const;

 ::System::Xml::____System__Xml__XmlTextReaderImpl__XmlContext __declspec(property(get=__get_xmlContext, put=__set_xmlContext))  xmlContext;

constexpr void __set_xmlContext(::System::Xml::____System__Xml__XmlTextReaderImpl__XmlContext value) ;

constexpr ::System::Xml::____System__Xml__XmlTextReaderImpl__XmlContext __get_xmlContext() const;

 ::ArrayW<::System::Xml::____System__Xml__XmlTextReaderImpl__ParsingState> __declspec(property(get=__get_parsingStatesStack, put=__set_parsingStatesStack))  parsingStatesStack;

constexpr void __set_parsingStatesStack(::ArrayW<::System::Xml::____System__Xml__XmlTextReaderImpl__ParsingState> value) ;

constexpr ::ArrayW<::System::Xml::____System__Xml__XmlTextReaderImpl__ParsingState> __get_parsingStatesStack() const;

 int32_t __declspec(property(get=__get_parsingStatesStackTop, put=__set_parsingStatesStackTop))  parsingStatesStackTop;

constexpr void __set_parsingStatesStackTop(int32_t value) ;

constexpr int32_t __get_parsingStatesStackTop() const;

 ::StringW __declspec(property(get=__get_reportedBaseUri, put=__set_reportedBaseUri))  reportedBaseUri;

constexpr void __set_reportedBaseUri(::StringW value) ;

constexpr ::StringW __get_reportedBaseUri() const;

 ::System::Text::Encoding __declspec(property(get=__get_reportedEncoding, put=__set_reportedEncoding))  reportedEncoding;

constexpr void __set_reportedEncoding(::System::Text::Encoding value) ;

constexpr ::System::Text::Encoding __get_reportedEncoding() const;

 ::System::Xml::IDtdInfo __declspec(property(get=__get_dtdInfo, put=__set_dtdInfo))  dtdInfo;

constexpr void __set_dtdInfo(::System::Xml::IDtdInfo value) ;

constexpr ::System::Xml::IDtdInfo __get_dtdInfo() const;

 ::System::Xml::XmlNodeType __declspec(property(get=__get_fragmentType, put=__set_fragmentType))  fragmentType;

constexpr void __set_fragmentType(::System::Xml::XmlNodeType value) ;

constexpr ::System::Xml::XmlNodeType __get_fragmentType() const;

 ::System::Xml::XmlParserContext __declspec(property(get=__get_fragmentParserContext, put=__set_fragmentParserContext))  fragmentParserContext;

constexpr void __set_fragmentParserContext(::System::Xml::XmlParserContext value) ;

constexpr ::System::Xml::XmlParserContext __get_fragmentParserContext() const;

 bool __declspec(property(get=__get_fragment, put=__set_fragment))  fragment;

constexpr void __set_fragment(bool value) ;

constexpr bool __get_fragment() const;

 ::System::Xml::IncrementalReadDecoder __declspec(property(get=__get_incReadDecoder, put=__set_incReadDecoder))  incReadDecoder;

constexpr void __set_incReadDecoder(::System::Xml::IncrementalReadDecoder value) ;

constexpr ::System::Xml::IncrementalReadDecoder __get_incReadDecoder() const;

 ::System::Xml::____System__Xml__XmlTextReaderImpl__IncrementalReadState __declspec(property(get=__get_incReadState, put=__set_incReadState))  incReadState;

constexpr void __set_incReadState(::System::Xml::____System__Xml__XmlTextReaderImpl__IncrementalReadState value) ;

constexpr ::System::Xml::____System__Xml__XmlTextReaderImpl__IncrementalReadState __get_incReadState() const;

 ::System::Xml::LineInfo __declspec(property(get=__get_incReadLineInfo, put=__set_incReadLineInfo))  incReadLineInfo;

constexpr void __set_incReadLineInfo(::System::Xml::LineInfo value) ;

constexpr ::System::Xml::LineInfo __get_incReadLineInfo() const;

 int32_t __declspec(property(get=__get_incReadDepth, put=__set_incReadDepth))  incReadDepth;

constexpr void __set_incReadDepth(int32_t value) ;

constexpr int32_t __get_incReadDepth() const;

 int32_t __declspec(property(get=__get_incReadLeftStartPos, put=__set_incReadLeftStartPos))  incReadLeftStartPos;

constexpr void __set_incReadLeftStartPos(int32_t value) ;

constexpr int32_t __get_incReadLeftStartPos() const;

 int32_t __declspec(property(get=__get_incReadLeftEndPos, put=__set_incReadLeftEndPos))  incReadLeftEndPos;

constexpr void __set_incReadLeftEndPos(int32_t value) ;

constexpr int32_t __get_incReadLeftEndPos() const;

 int32_t __declspec(property(get=__get_attributeValueBaseEntityId, put=__set_attributeValueBaseEntityId))  attributeValueBaseEntityId;

constexpr void __set_attributeValueBaseEntityId(int32_t value) ;

constexpr int32_t __get_attributeValueBaseEntityId() const;

 bool __declspec(property(get=__get_emptyEntityInAttributeResolved, put=__set_emptyEntityInAttributeResolved))  emptyEntityInAttributeResolved;

constexpr void __set_emptyEntityInAttributeResolved(bool value) ;

constexpr bool __get_emptyEntityInAttributeResolved() const;

 ::System::Xml::IValidationEventHandling __declspec(property(get=__get_validationEventHandling, put=__set_validationEventHandling))  validationEventHandling;

constexpr void __set_validationEventHandling(::System::Xml::IValidationEventHandling value) ;

constexpr ::System::Xml::IValidationEventHandling __get_validationEventHandling() const;

 ::System::Xml::____System__Xml__XmlTextReaderImpl__OnDefaultAttributeUseDelegate __declspec(property(get=__get_onDefaultAttributeUse, put=__set_onDefaultAttributeUse))  onDefaultAttributeUse;

constexpr void __set_onDefaultAttributeUse(::System::Xml::____System__Xml__XmlTextReaderImpl__OnDefaultAttributeUseDelegate value) ;

constexpr ::System::Xml::____System__Xml__XmlTextReaderImpl__OnDefaultAttributeUseDelegate __get_onDefaultAttributeUse() const;

 bool __declspec(property(get=__get_validatingReaderCompatFlag, put=__set_validatingReaderCompatFlag))  validatingReaderCompatFlag;

constexpr void __set_validatingReaderCompatFlag(bool value) ;

constexpr bool __get_validatingReaderCompatFlag() const;

 bool __declspec(property(get=__get_addDefaultAttributesAndNormalize, put=__set_addDefaultAttributesAndNormalize))  addDefaultAttributesAndNormalize;

constexpr void __set_addDefaultAttributesAndNormalize(bool value) ;

constexpr bool __get_addDefaultAttributesAndNormalize() const;

 ::System::Text::StringBuilder __declspec(property(get=__get_stringBuilder, put=__set_stringBuilder))  stringBuilder;

constexpr void __set_stringBuilder(::System::Text::StringBuilder value) ;

constexpr ::System::Text::StringBuilder __get_stringBuilder() const;

 bool __declspec(property(get=__get_rootElementParsed, put=__set_rootElementParsed))  rootElementParsed;

constexpr void __set_rootElementParsed(bool value) ;

constexpr bool __get_rootElementParsed() const;

 bool __declspec(property(get=__get_standalone, put=__set_standalone))  standalone;

constexpr void __set_standalone(bool value) ;

constexpr bool __get_standalone() const;

 int32_t __declspec(property(get=__get_nextEntityId, put=__set_nextEntityId))  nextEntityId;

constexpr void __set_nextEntityId(int32_t value) ;

constexpr int32_t __get_nextEntityId() const;

 ::System::Xml::____System__Xml__XmlTextReaderImpl__ParsingMode __declspec(property(get=__get_parsingMode, put=__set_parsingMode))  parsingMode;

constexpr void __set_parsingMode(::System::Xml::____System__Xml__XmlTextReaderImpl__ParsingMode value) ;

constexpr ::System::Xml::____System__Xml__XmlTextReaderImpl__ParsingMode __get_parsingMode() const;

 ::System::Xml::ReadState __declspec(property(get=__get_readState, put=__set_readState))  readState;

constexpr void __set_readState(::System::Xml::ReadState value) ;

constexpr ::System::Xml::ReadState __get_readState() const;

 ::System::Xml::IDtdEntityInfo __declspec(property(get=__get_lastEntity, put=__set_lastEntity))  lastEntity;

constexpr void __set_lastEntity(::System::Xml::IDtdEntityInfo value) ;

constexpr ::System::Xml::IDtdEntityInfo __get_lastEntity() const;

 bool __declspec(property(get=__get_afterResetState, put=__set_afterResetState))  afterResetState;

constexpr void __set_afterResetState(bool value) ;

constexpr bool __get_afterResetState() const;

 int32_t __declspec(property(get=__get_documentStartBytePos, put=__set_documentStartBytePos))  documentStartBytePos;

constexpr void __set_documentStartBytePos(int32_t value) ;

constexpr int32_t __get_documentStartBytePos() const;

 int32_t __declspec(property(get=__get_readValueOffset, put=__set_readValueOffset))  readValueOffset;

constexpr void __set_readValueOffset(int32_t value) ;

constexpr int32_t __get_readValueOffset() const;

 int64_t __declspec(property(get=__get_charactersInDocument, put=__set_charactersInDocument))  charactersInDocument;

constexpr void __set_charactersInDocument(int64_t value) ;

constexpr int64_t __get_charactersInDocument() const;

 int64_t __declspec(property(get=__get_charactersFromEntities, put=__set_charactersFromEntities))  charactersFromEntities;

constexpr void __set_charactersFromEntities(int64_t value) ;

constexpr int64_t __get_charactersFromEntities() const;

 ::System::Collections::Generic::Dictionary_2<::System::Xml::IDtdEntityInfo,::System::Xml::IDtdEntityInfo> __declspec(property(get=__get_currentEntities, put=__set_currentEntities))  currentEntities;

constexpr void __set_currentEntities(::System::Collections::Generic::Dictionary_2<::System::Xml::IDtdEntityInfo,::System::Xml::IDtdEntityInfo> value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::System::Xml::IDtdEntityInfo,::System::Xml::IDtdEntityInfo> __get_currentEntities() const;

 bool __declspec(property(get=__get_disableUndeclaredEntityCheck, put=__set_disableUndeclaredEntityCheck))  disableUndeclaredEntityCheck;

constexpr void __set_disableUndeclaredEntityCheck(bool value) ;

constexpr bool __get_disableUndeclaredEntityCheck() const;

 ::System::Xml::XmlReader __declspec(property(get=__get_outerReader, put=__set_outerReader))  outerReader;

constexpr void __set_outerReader(::System::Xml::XmlReader value) ;

constexpr ::System::Xml::XmlReader __get_outerReader() const;

 bool __declspec(property(get=__get_xmlResolverIsSet, put=__set_xmlResolverIsSet))  xmlResolverIsSet;

constexpr void __set_xmlResolverIsSet(bool value) ;

constexpr bool __get_xmlResolverIsSet() const;

 ::StringW __declspec(property(get=__get_Xml, put=__set_Xml))  Xml;

constexpr void __set_Xml(::StringW value) ;

constexpr ::StringW __get_Xml() const;

 ::StringW __declspec(property(get=__get_XmlNs, put=__set_XmlNs))  XmlNs;

constexpr void __set_XmlNs(::StringW value) ;

constexpr ::StringW __get_XmlNs() const;

 ::System::Threading::Tasks::Task_1<::System::Tuple_4<int32_t,int32_t,int32_t,bool>> __declspec(property(get=__get_parseText_dummyTask, put=__set_parseText_dummyTask))  parseText_dummyTask;

constexpr void __set_parseText_dummyTask(::System::Threading::Tasks::Task_1<::System::Tuple_4<int32_t,int32_t,int32_t,bool>> value) ;

constexpr ::System::Threading::Tasks::Task_1<::System::Tuple_4<int32_t,int32_t,int32_t,bool>> __get_parseText_dummyTask() const;


// Properties

 ::System::Xml::XmlReaderSettings __declspec(property(get=get_Settings))  Settings;

 ::System::Xml::XmlNodeType __declspec(property(get=get_NodeType))  NodeType;

 ::StringW __declspec(property(get=get_Name))  Name;

 ::StringW __declspec(property(get=get_LocalName))  LocalName;

 ::StringW __declspec(property(get=get_NamespaceURI))  NamespaceURI;

 ::StringW __declspec(property(get=get_Prefix))  Prefix;

 ::StringW __declspec(property(get=get_Value))  Value;

 ::StringW __declspec(property(get=get_BaseURI))  BaseURI;

 bool __declspec(property(get=get_IsEmptyElement))  IsEmptyElement;

 bool __declspec(property(get=get_IsDefault))  IsDefault;

 ::System::Xml::ReadState __declspec(property(get=get_ReadState))  ReadState;

 ::System::Xml::XmlNameTable __declspec(property(get=get_NameTable))  NameTable;

 bool __declspec(property(get=get_CanResolveEntity))  CanResolveEntity;

 ::System::Xml::XmlReader __declspec(property(put=set_OuterReader))  OuterReader;

 bool __declspec(property(put=set_Namespaces))  Namespaces;

 ::System::Xml::EntityHandling __declspec(property(put=set_EntityHandling))  EntityHandling;

 ::System::Xml::XmlResolver __declspec(property(put=set_XmlResolver))  XmlResolver;

 ::System::Xml::XmlNameTable __declspec(property(get=get_DtdParserProxy_NameTable))  DtdParserProxy_NameTable;

 ::System::Xml::IXmlNamespaceResolver __declspec(property(get=get_DtdParserProxy_NamespaceResolver))  DtdParserProxy_NamespaceResolver;

 bool __declspec(property(get=get_DtdParserProxy_DtdValidation))  DtdParserProxy_DtdValidation;

 bool __declspec(property(get=get_DtdParserProxy_Normalization))  DtdParserProxy_Normalization;

 bool __declspec(property(get=get_DtdParserProxy_Namespaces))  DtdParserProxy_Namespaces;

 bool __declspec(property(get=get_DtdParserProxy_V1CompatibilityMode))  DtdParserProxy_V1CompatibilityMode;

 ::System::Uri __declspec(property(get=get_DtdParserProxy_BaseUri))  DtdParserProxy_BaseUri;

 bool __declspec(property(get=get_DtdParserProxy_IsEof))  DtdParserProxy_IsEof;

 ::ArrayW<char16_t> __declspec(property(get=get_DtdParserProxy_ParsingBuffer))  DtdParserProxy_ParsingBuffer;

 int32_t __declspec(property(get=get_DtdParserProxy_ParsingBufferLength))  DtdParserProxy_ParsingBufferLength;

 int32_t __declspec(property(get=get_DtdParserProxy_CurrentPosition, put=set_DtdParserProxy_CurrentPosition))  DtdParserProxy_CurrentPosition;

 int32_t __declspec(property(get=get_DtdParserProxy_EntityStackLength))  DtdParserProxy_EntityStackLength;

 bool __declspec(property(get=get_DtdParserProxy_IsEntityEolNormalized))  DtdParserProxy_IsEntityEolNormalized;

 ::System::Xml::IValidationEventHandling __declspec(property(get=get_DtdParserProxy_ValidationEventHandling))  DtdParserProxy_ValidationEventHandling;

 int32_t __declspec(property(get=get_DtdParserProxy_LineNo))  DtdParserProxy_LineNo;

 int32_t __declspec(property(get=get_DtdParserProxy_LineStartPosition))  DtdParserProxy_LineStartPosition;

 bool __declspec(property(get=get_IsResolverNull))  IsResolverNull;

 bool __declspec(property(get=get_InAttributeValueIterator))  InAttributeValueIterator;

 bool __declspec(property(get=get_DtdValidation))  DtdValidation;

 bool __declspec(property(get=get_InEntity))  InEntity;

 ::System::Xml::IDtdInfo __declspec(property(get=get_DtdInfo))  DtdInfo;

 bool __declspec(property(put=set_XmlValidatingReaderCompatibilityMode))  XmlValidatingReaderCompatibilityMode;

 bool __declspec(property(put=set_DisableUndeclaredEntityCheck))  DisableUndeclaredEntityCheck;


// Methods

// Ctor Parameters [CppParam { name: "nt", ty: "::System::Xml::XmlNameTable", modifiers: "", def_value: None }]
explicit XmlTextReaderImpl(::System::Xml::XmlNameTable nt) ;

/// @brief Method .ctor addr 0x26cf144 size 0x374 virtual false final false
 void _ctor(::System::Xml::XmlNameTable nt) ;

// Ctor Parameters [CppParam { name: "input", ty: "::System::IO::TextReader", modifiers: "", def_value: None }, CppParam { name: "nt", ty: "::System::Xml::XmlNameTable", modifiers: "", def_value: None }]
explicit XmlTextReaderImpl(::System::IO::TextReader input, ::System::Xml::XmlNameTable nt) ;

/// @brief Method .ctor addr 0x26cf4b8 size 0x68 virtual false final false
 void _ctor(::System::IO::TextReader input, ::System::Xml::XmlNameTable nt) ;

// Ctor Parameters [CppParam { name: "url", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "input", ty: "::System::IO::TextReader", modifiers: "", def_value: None }, CppParam { name: "nt", ty: "::System::Xml::XmlNameTable", modifiers: "", def_value: None }]
explicit XmlTextReaderImpl(::StringW url, ::System::IO::TextReader input, ::System::Xml::XmlNameTable nt) ;

/// @brief Method .ctor addr 0x26cf520 size 0xd0 virtual false final false
 void _ctor(::StringW url, ::System::IO::TextReader input, ::System::Xml::XmlNameTable nt) ;

// Ctor Parameters [CppParam { name: "xmlFragment", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "fragType", ty: "::System::Xml::XmlNodeType", modifiers: "", def_value: None }, CppParam { name: "context", ty: "::System::Xml::XmlParserContext", modifiers: "", def_value: None }]
explicit XmlTextReaderImpl(::StringW xmlFragment, ::System::Xml::XmlNodeType fragType, ::System::Xml::XmlParserContext context) ;

/// @brief Method .ctor addr 0x26cf5fc size 0x10c virtual false final false
 void _ctor(::StringW xmlFragment, ::System::Xml::XmlNodeType fragType, ::System::Xml::XmlParserContext context) ;

// Ctor Parameters [CppParam { name: "xmlFragment", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "context", ty: "::System::Xml::XmlParserContext", modifiers: "", def_value: None }]
explicit XmlTextReaderImpl(::StringW xmlFragment, ::System::Xml::XmlParserContext context) ;

/// @brief Method .ctor addr 0x26cf9c0 size 0x138 virtual false final false
 void _ctor(::StringW xmlFragment, ::System::Xml::XmlParserContext context) ;

/// @brief Method FinishInitUriString addr 0x26cfaf8 size 0x2ec virtual false final false
 void FinishInitUriString() ;

/// @brief Method FinishInitStream addr 0x26d00bc size 0x80 virtual false final false
 void FinishInitStream() ;

/// @brief Method FinishInitTextReader addr 0x26d013c size 0x64 virtual false final false
 void FinishInitTextReader() ;

/// @brief Method get_Settings addr 0x26d01a0 size 0x158 virtual true final false
 ::System::Xml::XmlReaderSettings get_Settings() ;

/// @brief Method get_NodeType addr 0x26d02f8 size 0x1c virtual true final false
 ::System::Xml::XmlNodeType get_NodeType() ;

/// @brief Method get_Name addr 0x26d0314 size 0x24 virtual true final false
 ::StringW get_Name() ;

/// @brief Method get_LocalName addr 0x26d0338 size 0x1c virtual true final false
 ::StringW get_LocalName() ;

/// @brief Method get_NamespaceURI addr 0x26d0354 size 0x1c virtual true final false
 ::StringW get_NamespaceURI() ;

/// @brief Method get_Prefix addr 0x26d0370 size 0x1c virtual true final false
 ::StringW get_Prefix() ;

/// @brief Method get_Value addr 0x26d038c size 0x48 virtual true final false
 ::StringW get_Value() ;

/// @brief Method get_BaseURI addr 0x26d05a0 size 0x8 virtual true final false
 ::StringW get_BaseURI() ;

/// @brief Method get_IsEmptyElement addr 0x26d05a8 size 0x1c virtual true final false
 bool get_IsEmptyElement() ;

/// @brief Method get_IsDefault addr 0x26d05c4 size 0x1c virtual true final false
 bool get_IsDefault() ;

/// @brief Method get_ReadState addr 0x26d05e0 size 0x8 virtual true final false
 ::System::Xml::ReadState get_ReadState() ;

/// @brief Method get_NameTable addr 0x26d05e8 size 0x8 virtual true final false
 ::System::Xml::XmlNameTable get_NameTable() ;

/// @brief Method get_CanResolveEntity addr 0x26d05f0 size 0x8 virtual true final false
 bool get_CanResolveEntity() ;

/// @brief Method MoveToAttribute addr 0x26d05f8 size 0xc0 virtual true final false
 bool MoveToAttribute(::StringW name) ;

/// @brief Method MoveToFirstAttribute addr 0x26d091c size 0x74 virtual true final false
 bool MoveToFirstAttribute() ;

/// @brief Method MoveToNextAttribute addr 0x26d0990 size 0x88 virtual true final false
 bool MoveToNextAttribute() ;

/// @brief Method MoveToElement addr 0x26d0a18 size 0x88 virtual true final false
 bool MoveToElement() ;

/// @brief Method FinishInit addr 0x26d0aa0 size 0x48 virtual false final false
 void FinishInit() ;

/// @brief Method Read addr 0x26d0ae8 size 0x3ac virtual true final false
 bool Read() ;

/// @brief Method Close addr 0x26d2c68 size 0x8 virtual true final false
 void Close() ;

/// @brief Method LookupNamespace addr 0x26d2d2c size 0x38 virtual true final false
 ::StringW LookupNamespace(::StringW prefix) ;

/// @brief Method ReadAttributeValue addr 0x26d2d64 size 0x24c virtual true final false
 bool ReadAttributeValue() ;

/// @brief Method ResolveEntity addr 0x26d3444 size 0x254 virtual true final false
 void ResolveEntity() ;

/// @brief Method set_OuterReader addr 0x26d3b3c size 0x8 virtual false final false
 void set_OuterReader(::System::Xml::XmlReader value) ;

/// @brief Method System.Xml.IXmlNamespaceResolver.LookupNamespace addr 0x26d3b44 size 0x10 virtual true final true
 ::StringW System_Xml_IXmlNamespaceResolver_LookupNamespace(::StringW prefix) ;

/// @brief Method System.Xml.IXmlNamespaceResolver.LookupPrefix addr 0x26d3b54 size 0x24 virtual true final true
 ::StringW System_Xml_IXmlNamespaceResolver_LookupPrefix(::StringW namespaceName) ;

/// @brief Method LookupPrefix addr 0x26d3b78 size 0x24 virtual false final false
 ::StringW LookupPrefix(::StringW namespaceName) ;

/// @brief Method set_Namespaces addr 0x26d3b9c size 0x1d0 virtual false final false
 void set_Namespaces(bool value) ;

/// @brief Method set_EntityHandling addr 0x26d3d6c size 0x88 virtual false final false
 void set_EntityHandling(::System::Xml::EntityHandling value) ;

/// @brief Method set_XmlResolver addr 0x26d3df4 size 0x5c virtual false final false
 void set_XmlResolver(::System::Xml::XmlResolver value) ;

/// @brief Method get_DtdParserProxy_NameTable addr 0x26d3e50 size 0x8 virtual false final false
 ::System::Xml::XmlNameTable get_DtdParserProxy_NameTable() ;

/// @brief Method get_DtdParserProxy_NamespaceResolver addr 0x26d3e58 size 0x8 virtual false final false
 ::System::Xml::IXmlNamespaceResolver get_DtdParserProxy_NamespaceResolver() ;

/// @brief Method get_DtdParserProxy_DtdValidation addr 0x26d3e60 size 0x10 virtual false final false
 bool get_DtdParserProxy_DtdValidation() ;

/// @brief Method get_DtdParserProxy_Normalization addr 0x26d3e80 size 0x8 virtual false final false
 bool get_DtdParserProxy_Normalization() ;

/// @brief Method get_DtdParserProxy_Namespaces addr 0x26d3e88 size 0x8 virtual false final false
 bool get_DtdParserProxy_Namespaces() ;

/// @brief Method get_DtdParserProxy_V1CompatibilityMode addr 0x26d3e90 size 0x8 virtual false final false
 bool get_DtdParserProxy_V1CompatibilityMode() ;

/// @brief Method get_DtdParserProxy_BaseUri addr 0x26d3e98 size 0xa4 virtual false final false
 ::System::Uri get_DtdParserProxy_BaseUri() ;

/// @brief Method get_DtdParserProxy_IsEof addr 0x26d3f3c size 0x8 virtual false final false
 bool get_DtdParserProxy_IsEof() ;

/// @brief Method get_DtdParserProxy_ParsingBuffer addr 0x26d3f44 size 0x8 virtual false final false
 ::ArrayW<char16_t> get_DtdParserProxy_ParsingBuffer() ;

/// @brief Method get_DtdParserProxy_ParsingBufferLength addr 0x26d3f4c size 0x8 virtual false final false
 int32_t get_DtdParserProxy_ParsingBufferLength() ;

/// @brief Method get_DtdParserProxy_CurrentPosition addr 0x26d3f54 size 0x8 virtual false final false
 int32_t get_DtdParserProxy_CurrentPosition() ;

/// @brief Method set_DtdParserProxy_CurrentPosition addr 0x26d3f5c size 0x8 virtual false final false
 void set_DtdParserProxy_CurrentPosition(int32_t value) ;

/// @brief Method get_DtdParserProxy_EntityStackLength addr 0x26d3f64 size 0xc virtual false final false
 int32_t get_DtdParserProxy_EntityStackLength() ;

/// @brief Method get_DtdParserProxy_IsEntityEolNormalized addr 0x26d3f70 size 0x8 virtual false final false
 bool get_DtdParserProxy_IsEntityEolNormalized() ;

/// @brief Method get_DtdParserProxy_ValidationEventHandling addr 0x26d3f78 size 0x8 virtual false final false
 ::System::Xml::IValidationEventHandling get_DtdParserProxy_ValidationEventHandling() ;

/// @brief Method DtdParserProxy_OnNewLine addr 0x26d3f80 size 0x14 virtual false final false
 void DtdParserProxy_OnNewLine(int32_t pos) ;

/// @brief Method get_DtdParserProxy_LineNo addr 0x26d3fa8 size 0x8 virtual false final false
 int32_t get_DtdParserProxy_LineNo() ;

/// @brief Method get_DtdParserProxy_LineStartPosition addr 0x26d3fb0 size 0x8 virtual false final false
 int32_t get_DtdParserProxy_LineStartPosition() ;

/// @brief Method DtdParserProxy_ReadData addr 0x26d3fb8 size 0x4 virtual false final false
 int32_t DtdParserProxy_ReadData() ;

/// @brief Method DtdParserProxy_ParseNumericCharRef addr 0x26d43ec size 0x20 virtual false final false
 int32_t DtdParserProxy_ParseNumericCharRef(::System::Text::StringBuilder internalSubsetBuilder) ;

/// @brief Method DtdParserProxy_ParseNamedCharRef addr 0x26d44b8 size 0x8 virtual false final false
 int32_t DtdParserProxy_ParseNamedCharRef(bool expand, ::System::Text::StringBuilder internalSubsetBuilder) ;

/// @brief Method DtdParserProxy_ParsePI addr 0x26d4524 size 0x44 virtual false final false
 void DtdParserProxy_ParsePI(::System::Text::StringBuilder sb) ;

/// @brief Method DtdParserProxy_ParseComment addr 0x26d48d8 size 0x184 virtual false final false
 void DtdParserProxy_ParseComment(::System::Text::StringBuilder sb) ;

/// @brief Method get_IsResolverNull addr 0x26d4c60 size 0x40 virtual false final false
 bool get_IsResolverNull() ;

/// @brief Method GetTempResolver addr 0x26d4ca0 size 0x68 virtual false final false
 ::System::Xml::XmlResolver GetTempResolver() ;

/// @brief Method DtdParserProxy_PushEntity addr 0x26d4d08 size 0x10c virtual false final false
 bool DtdParserProxy_PushEntity(::System::Xml::IDtdEntityInfo entity, ByRef<int32_t> entityId) ;

/// @brief Method DtdParserProxy_PopEntity addr 0x26d54c4 size 0x4c virtual false final false
 bool DtdParserProxy_PopEntity(ByRef<::System::Xml::IDtdEntityInfo> oldEntity, ByRef<int32_t> newEntityId) ;

/// @brief Method DtdParserProxy_PushExternalSubset addr 0x26d555c size 0x128 virtual false final false
 bool DtdParserProxy_PushExternalSubset(::StringW systemId, ::StringW publicId) ;

/// @brief Method DtdParserProxy_PushInternalDtd addr 0x26d5ca4 size 0x64 virtual false final false
 void DtdParserProxy_PushInternalDtd(::StringW baseUri, ::StringW internalDtd) ;

/// @brief Method DtdParserProxy_Throw addr 0x26d5f04 size 0x8 virtual false final false
 void DtdParserProxy_Throw(::System::Exception e) ;

/// @brief Method DtdParserProxy_OnSystemId addr 0x26d5f9c size 0x8c virtual false final false
 void DtdParserProxy_OnSystemId(::StringW systemId, ::System::Xml::LineInfo keywordLineInfo, ::System::Xml::LineInfo systemLiteralLineInfo) ;

/// @brief Method DtdParserProxy_OnPublicId addr 0x26d60a4 size 0x8c virtual false final false
 void DtdParserProxy_OnPublicId(::StringW publicId, ::System::Xml::LineInfo keywordLineInfo, ::System::Xml::LineInfo publicLiteralLineInfo) ;

/// @brief Method Throw addr 0x26d6130 size 0x14 virtual false final false
 void Throw(int32_t pos, ::StringW res, ::StringW arg) ;

/// @brief Method Throw addr 0x26d61e0 size 0x14 virtual false final false
 void Throw(int32_t pos, ::StringW res, ::ArrayW<::StringW> args) ;

/// @brief Method Throw addr 0x26d6290 size 0x5c virtual false final false
 void Throw(int32_t pos, ::StringW res) ;

/// @brief Method Throw addr 0x26d62ec size 0x54 virtual false final false
 void Throw(::StringW res) ;

/// @brief Method Throw addr 0x26d6340 size 0xa8 virtual false final false
 void Throw(::StringW res, int32_t lineNo, int32_t linePos) ;

/// @brief Method Throw addr 0x26d6144 size 0x9c virtual false final false
 void Throw(::StringW res, ::StringW arg) ;

/// @brief Method Throw addr 0x26d63e8 size 0x8c virtual false final false
 void Throw(::StringW res, ::StringW arg, int32_t lineNo, int32_t linePos) ;

/// @brief Method Throw addr 0x26d61f4 size 0x9c virtual false final false
 void Throw(::StringW res, ::ArrayW<::StringW> args) ;

/// @brief Method Throw addr 0x26d6474 size 0x8c virtual false final false
 void Throw(::StringW res, ::StringW arg, ::System::Exception innerException) ;

/// @brief Method Throw addr 0x26d6500 size 0xa8 virtual false final false
 void Throw(::StringW res, ::ArrayW<::StringW> args, ::System::Exception innerException) ;

/// @brief Method Throw addr 0x26d5f0c size 0x90 virtual false final false
 void Throw(::System::Exception e) ;

/// @brief Method ReThrow addr 0x26d65bc size 0xa8 virtual false final false
 void ReThrow(::System::Exception e, int32_t lineNo, int32_t linePos) ;

/// @brief Method ThrowWithoutLineInfo addr 0x26d2a54 size 0x94 virtual false final false
 void ThrowWithoutLineInfo(::StringW res) ;

/// @brief Method ThrowWithoutLineInfo addr 0x26d6664 size 0x78 virtual false final false
 void ThrowWithoutLineInfo(::StringW res, ::StringW arg) ;

/// @brief Method ThrowWithoutLineInfo addr 0x26d66dc size 0x8c virtual false final false
 void ThrowWithoutLineInfo(::StringW res, ::ArrayW<::StringW> args, ::System::Exception innerException) ;

/// @brief Method ThrowInvalidChar addr 0x26d6768 size 0x70 virtual false final false
 void ThrowInvalidChar(::ArrayW<char16_t> data, int32_t length, int32_t invCharPos) ;

/// @brief Method SetErrorState addr 0x26d65a8 size 0x14 virtual false final false
 void SetErrorState() ;

/// @brief Method SendValidationEvent addr 0x26d4bb4 size 0xac virtual false final false
 void SendValidationEvent(::System::Xml::Schema::XmlSeverityType severity, ::StringW code, ::StringW arg, int32_t lineNo, int32_t linePos) ;

/// @brief Method SendValidationEvent addr 0x26d67d8 size 0xc4 virtual false final false
 void SendValidationEvent(::System::Xml::Schema::XmlSeverityType severity, ::System::Xml::Schema::XmlSchemaException exception) ;

/// @brief Method get_InAttributeValueIterator addr 0x26d0854 size 0x24 virtual false final false
 bool get_InAttributeValueIterator() ;

/// @brief Method FinishAttributeValueIterator addr 0x26d0878 size 0xa4 virtual false final false
 void FinishAttributeValueIterator() ;

/// @brief Method get_DtdValidation addr 0x26d3e70 size 0x10 virtual false final false
 bool get_DtdValidation() ;

/// @brief Method InitStreamInput addr 0x26d69c4 size 0x60 virtual false final false
 void InitStreamInput(::System::Uri baseUri, ::System::IO::Stream stream, ::System::Text::Encoding encoding) ;

/// @brief Method InitStreamInput addr 0x26d6a24 size 0x10 virtual false final false
 void InitStreamInput(::System::Uri baseUri, ::StringW baseUriStr, ::System::IO::Stream stream, ::System::Text::Encoding encoding) ;

/// @brief Method InitStreamInput addr 0x26cfde4 size 0x26c virtual false final false
 void InitStreamInput(::System::Uri baseUri, ::StringW baseUriStr, ::System::IO::Stream stream, ::ArrayW<uint8_t> bytes, int32_t byteCount, ::System::Text::Encoding encoding) ;

/// @brief Method InitTextReaderInput addr 0x26cf5f0 size 0xc virtual false final false
 void InitTextReaderInput(::StringW baseUriStr, ::System::IO::TextReader input) ;

/// @brief Method InitTextReaderInput addr 0x26d6da8 size 0xb0 virtual false final false
 void InitTextReaderInput(::StringW baseUriStr, ::System::Uri baseUri, ::System::IO::TextReader input) ;

/// @brief Method InitStringInput addr 0x26cf708 size 0xcc virtual false final false
 void InitStringInput(::StringW baseUriStr, ::System::Text::Encoding originalEncoding, ::StringW str) ;

/// @brief Method InitFragmentReader addr 0x26cf7d4 size 0x1ec virtual false final false
 void InitFragmentReader(::System::Xml::XmlNodeType fragmentType, ::System::Xml::XmlParserContext parserContext, bool allowXmlDeclFragment) ;

/// @brief Method ProcessDtdFromParserContext addr 0x26d0050 size 0x6c virtual false final false
 void ProcessDtdFromParserContext(::System::Xml::XmlParserContext context) ;

/// @brief Method OpenUrl addr 0x26d16bc size 0x18c virtual false final false
 void OpenUrl() ;

/// @brief Method OpenUrlDelegate addr 0x26d7080 size 0x124 virtual false final false
 void OpenUrlDelegate(::bs_hook::Il2CppWrapperType xmlResolver) ;

/// @brief Method DetectEncoding addr 0x26d6a34 size 0x22c virtual false final false
 ::System::Text::Encoding DetectEncoding() ;

/// @brief Method SetupEncoding addr 0x26d6c60 size 0x148 virtual false final false
 void SetupEncoding(::System::Text::Encoding encoding) ;

/// @brief Method SwitchEncoding addr 0x26d71a4 size 0xf0 virtual false final false
 void SwitchEncoding(::System::Text::Encoding newEncoding) ;

/// @brief Method CheckEncoding addr 0x26d733c size 0x330 virtual false final false
 ::System::Text::Encoding CheckEncoding(::StringW newEncodingName) ;

/// @brief Method UnDecodeChars addr 0x26d7294 size 0xa8 virtual false final false
 void UnDecodeChars() ;

/// @brief Method SwitchEncodingToUTF8 addr 0x26d767c size 0x6c virtual false final false
 void SwitchEncodingToUTF8() ;

/// @brief Method ReadData addr 0x26d3fbc size 0x430 virtual false final false
 int32_t ReadData() ;

/// @brief Method GetChars addr 0x26d7704 size 0x118 virtual false final false
 int32_t GetChars(int32_t maxCharsCount) ;

/// @brief Method InvalidCharRecovery addr 0x26d781c size 0x17c virtual false final false
 void InvalidCharRecovery(ByRef<int32_t> bytesCount, ByRef<int32_t> charsCount) ;

/// @brief Method Close addr 0x26d2c70 size 0xbc virtual false final false
 void Close(bool closeInput) ;

/// @brief Method ShiftBuffer addr 0x26d7a04 size 0x20 virtual false final false
 void ShiftBuffer(int32_t sourcePos, int32_t destPos, int32_t count) ;

/// @brief Method ParseXmlDeclaration addr 0x26d1848 size 0xd7c virtual false final false
 bool ParseXmlDeclaration(bool isTextDecl) ;

/// @brief Method ParseDocumentContent addr 0x26d11cc size 0x4f0 virtual false final false
 bool ParseDocumentContent() ;

/// @brief Method ParseElementContent addr 0x26d0e94 size 0x338 virtual false final false
 bool ParseElementContent() ;

/// @brief Method ThrowUnclosedElements addr 0x26d8f90 size 0x19c virtual false final false
 void ThrowUnclosedElements() ;

/// @brief Method ParseElement addr 0x26d7ee8 size 0x4a0 virtual false final false
 void ParseElement() ;

/// @brief Method AddDefaultAttributesAndNormalize addr 0x26d9778 size 0xa14 virtual false final false
 void AddDefaultAttributesAndNormalize() ;

/// @brief Method ParseEndElement addr 0x26d8ba4 size 0x3ec virtual false final false
 void ParseEndElement() ;

/// @brief Method ThrowTagMismatch addr 0x26da8e4 size 0x1fc virtual false final false
 void ThrowTagMismatch(::System::Xml::____System__Xml__XmlTextReaderImpl__NodeData startTag) ;

/// @brief Method ParseAttributes addr 0x26d913c size 0x63c virtual false final false
 void ParseAttributes() ;

/// @brief Method ElementNamespaceLookup addr 0x26da18c size 0x48 virtual false final false
 void ElementNamespaceLookup() ;

/// @brief Method AttributeNamespaceLookup addr 0x26da840 size 0xa4 virtual false final false
 void AttributeNamespaceLookup() ;

/// @brief Method AttributeDuplCheck addr 0x26dba10 size 0x374 virtual false final false
 void AttributeDuplCheck() ;

/// @brief Method OnDefaultNamespaceDecl addr 0x26db64c size 0xfc virtual false final false
 void OnDefaultNamespaceDecl(::System::Xml::____System__Xml__XmlTextReaderImpl__NodeData attr) ;

/// @brief Method OnNamespaceDecl addr 0x26db748 size 0xdc virtual false final false
 void OnNamespaceDecl(::System::Xml::____System__Xml__XmlTextReaderImpl__NodeData attr) ;

/// @brief Method OnXmlReservedAttribute addr 0x26db824 size 0x1ec virtual false final false
 void OnXmlReservedAttribute(::System::Xml::____System__Xml__XmlTextReaderImpl__NodeData attr) ;

/// @brief Method ParseAttributeValueSlow addr 0x26dad04 size 0x948 virtual false final false
 void ParseAttributeValueSlow(int32_t curPos, char16_t quoteChar, ::System::Xml::____System__Xml__XmlTextReaderImpl__NodeData attr) ;

/// @brief Method AddAttributeChunkToList addr 0x26dc11c size 0x30 virtual false final false
 void AddAttributeChunkToList(::System::Xml::____System__Xml__XmlTextReaderImpl__NodeData attr, ::System::Xml::____System__Xml__XmlTextReaderImpl__NodeData chunk, ByRef<::System::Xml::____System__Xml__XmlTextReaderImpl__NodeData> lastChunk) ;

/// @brief Method ParseText addr 0x26d8634 size 0x374 virtual false final false
 bool ParseText() ;

/// @brief Method ParseText addr 0x26dc288 size 0x6cc virtual false final false
 bool ParseText(ByRef<int32_t> startPos, ByRef<int32_t> endPos, ByRef<int32_t> outOrChars) ;

/// @brief Method FinishPartialValue addr 0x26d03d4 size 0xbc virtual false final false
 void FinishPartialValue() ;

/// @brief Method FinishOtherValueIterator addr 0x26d0490 size 0x110 virtual false final false
 void FinishOtherValueIterator() ;

/// @brief Method SkipPartialTextValue addr 0x26d2ae8 size 0x40 virtual false final false
 void SkipPartialTextValue() ;

/// @brief Method FinishReadValueChunk addr 0x26d2b28 size 0x20 virtual false final false
 void FinishReadValueChunk() ;

/// @brief Method FinishReadContentAsBinary addr 0x26d2b48 size 0x50 virtual false final false
 void FinishReadContentAsBinary() ;

/// @brief Method FinishReadElementContentAsBinary addr 0x26d2b98 size 0xd0 virtual false final false
 void FinishReadElementContentAsBinary() ;

/// @brief Method ParseRootLevelWhitespace addr 0x26d89a8 size 0x1fc virtual false final false
 bool ParseRootLevelWhitespace() ;

/// @brief Method ParseEntityReference addr 0x26d2678 size 0x74 virtual false final false
 void ParseEntityReference() ;

/// @brief Method HandleEntityReference addr 0x26d8388 size 0x2ac virtual false final false
 ::System::Xml::____System__Xml__XmlTextReaderImpl__EntityType HandleEntityReference(bool isInAttributeValue, ::System::Xml::____System__Xml__XmlTextReaderImpl__EntityExpandType expandType, ByRef<int32_t> charRefEndPos) ;

/// @brief Method HandleGeneralEntityReference addr 0x26d3698 size 0x4a4 virtual false final false
 ::System::Xml::____System__Xml__XmlTextReaderImpl__EntityType HandleGeneralEntityReference(::StringW name, bool isInAttributeValue, bool pushFakeEntityIfNullResolver, int32_t entityStartLinePos) ;

/// @brief Method get_InEntity addr 0x26d766c size 0x10 virtual false final false
 bool get_InEntity() ;

/// @brief Method HandleEntityEnd addr 0x26d689c size 0x128 virtual false final false
 bool HandleEntityEnd(bool checkEntityNesting) ;

/// @brief Method SetupEndEntityNodeInContent addr 0x26d26ec size 0x138 virtual false final false
 void SetupEndEntityNodeInContent() ;

/// @brief Method SetupEndEntityNodeInAttribute addr 0x26dcb84 size 0x68 virtual false final false
 void SetupEndEntityNodeInAttribute() ;

/// @brief Method ParsePI addr 0x26d7bd4 size 0x8 virtual false final false
 bool ParsePI() ;

/// @brief Method ParsePI addr 0x26d4568 size 0x370 virtual false final false
 bool ParsePI(::System::Text::StringBuilder piInDtdStringBuilder) ;

/// @brief Method ParsePIValue addr 0x26dcbec size 0x394 virtual false final false
 bool ParsePIValue(ByRef<int32_t> outStartPos, ByRef<int32_t> outEndPos) ;

/// @brief Method ParseComment addr 0x26d7bdc size 0x54 virtual false final false
 bool ParseComment() ;

/// @brief Method ParseCData addr 0x26d7c40 size 0x8 virtual false final false
 void ParseCData() ;

/// @brief Method ParseCDataOrComment addr 0x26d4a5c size 0x158 virtual false final false
 void ParseCDataOrComment(::System::Xml::XmlNodeType type) ;

/// @brief Method ParseCDataOrComment addr 0x26dcf80 size 0x43c virtual false final false
 bool ParseCDataOrComment(::System::Xml::XmlNodeType type, ByRef<int32_t> outStartPos, ByRef<int32_t> outEndPos) ;

/// @brief Method ParseDoctypeDecl addr 0x26d7c48 size 0x288 virtual false final false
 bool ParseDoctypeDecl() ;

/// @brief Method ParseDtd addr 0x26dd3bc size 0x31c virtual false final false
 void ParseDtd() ;

/// @brief Method SkipDtd addr 0x26dd6d8 size 0x358 virtual false final false
 void SkipDtd() ;

/// @brief Method SkipPublicOrSystemIdLiteral addr 0x26dda30 size 0xb8 virtual false final false
 void SkipPublicOrSystemIdLiteral() ;

/// @brief Method SkipUntil addr 0x26ddae8 size 0x43c virtual false final false
 void SkipUntil(char16_t stopChar, bool recognizeLiterals) ;

/// @brief Method EatWhitespaces addr 0x26d5a50 size 0x254 virtual false final false
 int32_t EatWhitespaces(::System::Text::StringBuilder sb) ;

/// @brief Method ParseCharRefInline addr 0x26dc9ac size 0x6c virtual false final false
 int32_t ParseCharRefInline(int32_t startPos, ByRef<int32_t> charCount, ByRef<::System::Xml::____System__Xml__XmlTextReaderImpl__EntityType> entityType) ;

/// @brief Method ParseNumericCharRef addr 0x26d440c size 0xac virtual false final false
 int32_t ParseNumericCharRef(bool expand, ::System::Text::StringBuilder internalSubsetBuilder, ByRef<::System::Xml::____System__Xml__XmlTextReaderImpl__EntityType> entityType) ;

/// @brief Method ParseNumericCharRefInline addr 0x26ddf24 size 0x660 virtual false final false
 int32_t ParseNumericCharRefInline(int32_t startPos, bool expand, ::System::Text::StringBuilder internalSubsetBuilder, ByRef<int32_t> charCount, ByRef<::System::Xml::____System__Xml__XmlTextReaderImpl__EntityType> entityType) ;

/// @brief Method ParseNamedCharRef addr 0x26d44c0 size 0x64 virtual false final false
 int32_t ParseNamedCharRef(bool expand, ::System::Text::StringBuilder internalSubsetBuilder) ;

/// @brief Method ParseNamedCharRefInline addr 0x26de584 size 0x2dc virtual false final false
 int32_t ParseNamedCharRefInline(int32_t startPos, bool expand, ::System::Text::StringBuilder internalSubsetBuilder) ;

/// @brief Method ParseName addr 0x26d7a2c size 0x20 virtual false final false
 int32_t ParseName() ;

/// @brief Method ParseQName addr 0x26d912c size 0x10 virtual false final false
 int32_t ParseQName(ByRef<int32_t> colonPos) ;

/// @brief Method ParseQName addr 0x26de860 size 0x288 virtual false final false
 int32_t ParseQName(bool isQName, int32_t startOffset, ByRef<int32_t> colonPos) ;

/// @brief Method ReadDataInName addr 0x26deae8 size 0x40 virtual false final false
 bool ReadDataInName(ByRef<int32_t> pos) ;

/// @brief Method ParseEntityName addr 0x26dc14c size 0x13c virtual false final false
 ::StringW ParseEntityName() ;

/// @brief Method AddNode addr 0x26d25f0 size 0x44 virtual false final false
 ::System::Xml::____System__Xml__XmlTextReaderImpl__NodeData AddNode(int32_t nodeIndex, int32_t nodeDepth) ;

/// @brief Method AllocNode addr 0x26deb28 size 0x138 virtual false final false
 ::System::Xml::____System__Xml__XmlTextReaderImpl__NodeData AllocNode(int32_t nodeIndex, int32_t nodeDepth) ;

/// @brief Method AddAttributeNoChecks addr 0x26d6028 size 0x7c virtual false final false
 ::System::Xml::____System__Xml__XmlTextReaderImpl__NodeData AddAttributeNoChecks(::StringW name, int32_t attrDepth) ;

/// @brief Method AddAttribute addr 0x26dab60 size 0x1a4 virtual false final false
 ::System::Xml::____System__Xml__XmlTextReaderImpl__NodeData AddAttribute(int32_t endNamePos, int32_t colonPos) ;

/// @brief Method AddAttribute addr 0x26dec60 size 0x134 virtual false final false
 ::System::Xml::____System__Xml__XmlTextReaderImpl__NodeData AddAttribute(::StringW localName, ::StringW prefix, ::StringW nameWPrefix) ;

/// @brief Method PopElementContext addr 0x26d2634 size 0x44 virtual false final false
 void PopElementContext() ;

/// @brief Method OnNewLine addr 0x26d3f94 size 0x14 virtual false final false
 void OnNewLine(int32_t pos) ;

/// @brief Method OnEof addr 0x26d29cc size 0x88 virtual false final false
 void OnEof() ;

/// @brief Method LookupNamespace addr 0x26dbd84 size 0xc4 virtual false final false
 ::StringW LookupNamespace(::System::Xml::____System__Xml__XmlTextReaderImpl__NodeData node) ;

/// @brief Method AddNamespace addr 0x26dbec0 size 0x25c virtual false final false
 void AddNamespace(::StringW prefix, ::StringW uri, ::System::Xml::____System__Xml__XmlTextReaderImpl__NodeData attr) ;

/// @brief Method ResetAttributes addr 0x26d25c4 size 0x2c virtual false final false
 void ResetAttributes() ;

/// @brief Method FullAttributeCleanup addr 0x26dedc0 size 0x64 virtual false final false
 void FullAttributeCleanup() ;

/// @brief Method PushXmlContext addr 0x26dbe48 size 0x78 virtual false final false
 void PushXmlContext() ;

/// @brief Method PopXmlContext addr 0x26ded94 size 0x2c virtual false final false
 void PopXmlContext() ;

/// @brief Method GetWhitespaceType addr 0x26dcb3c size 0x48 virtual false final false
 ::System::Xml::XmlNodeType GetWhitespaceType() ;

/// @brief Method GetTextNodeType addr 0x26dc954 size 0x58 virtual false final false
 ::System::Xml::XmlNodeType GetTextNodeType(int32_t orChars) ;

/// @brief Method PushExternalEntityOrSubset addr 0x26d5684 size 0x3cc virtual false final false
 void PushExternalEntityOrSubset(::StringW publicId, ::StringW systemId, ::System::Uri baseUri, ::StringW entityName) ;

/// @brief Method OpenAndPush addr 0x26dee24 size 0x234 virtual false final false
 bool OpenAndPush(::System::Uri uri) ;

/// @brief Method PushExternalEntity addr 0x26d4e14 size 0x390 virtual false final false
 bool PushExternalEntity(::System::Xml::IDtdEntityInfo entity) ;

/// @brief Method PushInternalEntity addr 0x26d51a4 size 0x320 virtual false final false
 void PushInternalEntity(::System::Xml::IDtdEntityInfo entity) ;

/// @brief Method PopEntity addr 0x26d5510 size 0x4c virtual false final false
 void PopEntity() ;

/// @brief Method RegisterEntity addr 0x26df058 size 0x1f0 virtual false final false
 void RegisterEntity(::System::Xml::IDtdEntityInfo entity) ;

/// @brief Method UnregisterEntity addr 0x26df248 size 0x64 virtual false final false
 void UnregisterEntity() ;

/// @brief Method PushParsingState addr 0x26d5d08 size 0x120 virtual false final false
 void PushParsingState() ;

/// @brief Method PopParsingState addr 0x26d7998 size 0x6c virtual false final false
 void PopParsingState() ;

/// @brief Method IncrementalRead addr 0x26df2ac size 0x934 virtual false final false
 int32_t IncrementalRead() ;

/// @brief Method FinishIncrementalRead addr 0x26d2824 size 0x6c virtual false final false
 void FinishIncrementalRead() ;

/// @brief Method ParseFragmentAttribute addr 0x26d2890 size 0x80 virtual false final false
 bool ParseFragmentAttribute() ;

/// @brief Method ParseAttributeValueChunk addr 0x26d2fb0 size 0x494 virtual false final false
 bool ParseAttributeValueChunk() ;

/// @brief Method ParseXmlDeclarationFragment addr 0x26d2910 size 0xbc virtual false final false
 void ParseXmlDeclarationFragment() ;

/// @brief Method ThrowUnexpectedToken addr 0x26d7c30 size 0x10 virtual false final false
 void ThrowUnexpectedToken(int32_t pos, ::StringW expectedToken) ;

/// @brief Method ThrowUnexpectedToken addr 0x26d7a24 size 0x8 virtual false final false
 void ThrowUnexpectedToken(::StringW expectedToken1) ;

/// @brief Method ThrowUnexpectedToken addr 0x26d7ed8 size 0x10 virtual false final false
 void ThrowUnexpectedToken(int32_t pos, ::StringW expectedToken1, ::StringW expectedToken2) ;

/// @brief Method ThrowUnexpectedToken addr 0x26d7a4c size 0x188 virtual false final false
 void ThrowUnexpectedToken(::StringW expectedToken1, ::StringW expectedToken2) ;

/// @brief Method ParseUnexpectedToken addr 0x26d7ed0 size 0x8 virtual false final false
 ::StringW ParseUnexpectedToken(int32_t pos) ;

/// @brief Method ParseUnexpectedToken addr 0x26dfbe0 size 0xc8 virtual false final false
 ::StringW ParseUnexpectedToken() ;

/// @brief Method ThrowExpectingWhitespace addr 0x26daae0 size 0x80 virtual false final false
 void ThrowExpectingWhitespace(int32_t pos) ;

/// @brief Method GetIndexOfAttributeWithoutPrefix addr 0x26d06b8 size 0xe8 virtual false final false
 int32_t GetIndexOfAttributeWithoutPrefix(::StringW name) ;

/// @brief Method GetIndexOfAttributeWithPrefix addr 0x26d07a0 size 0xb4 virtual false final false
 int32_t GetIndexOfAttributeWithPrefix(::StringW name) ;

/// @brief Method ZeroEndingStream addr 0x26dca18 size 0x7c virtual false final false
 bool ZeroEndingStream(int32_t pos) ;

/// @brief Method ParseDtdFromParserContext addr 0x26d6e58 size 0x228 virtual false final false
 void ParseDtdFromParserContext() ;

/// @brief Method MoveToNextContentNode addr 0x26dca94 size 0xa8 virtual false final false
 bool MoveToNextContentNode(bool moveIfOnContentNode) ;

/// @brief Method get_DtdInfo addr 0x26dfca8 size 0x8 virtual true final false
 ::System::Xml::IDtdInfo get_DtdInfo() ;

/// @brief Method SetDtdInfo addr 0x26dfcb0 size 0x134 virtual false final false
 void SetDtdInfo(::System::Xml::IDtdInfo newDtdInfo) ;

/// @brief Method set_XmlValidatingReaderCompatibilityMode addr 0x26dfde4 size 0xd8 virtual false final false
 void set_XmlValidatingReaderCompatibilityMode(bool value) ;

/// @brief Method AddDefaultAttributeDtd addr 0x26da1d4 size 0x66c virtual false final false
 bool AddDefaultAttributeDtd(::System::Xml::IDtdDefaultAttributeInfo defAttrInfo, bool definedInDtd, ::ArrayW<::System::Xml::____System__Xml__XmlTextReaderImpl__NodeData> nameSortedNodeData) ;

/// @brief Method AddDefaultAttributeInternal addr 0x26dfebc size 0x244 virtual false final false
 ::System::Xml::____System__Xml__XmlTextReaderImpl__NodeData AddDefaultAttributeInternal(::StringW localName, ::StringW ns, ::StringW prefix, ::StringW value, int32_t lineNo, int32_t linePos, int32_t valueLineNo, int32_t valueLinePos, bool isXmlAttribute) ;

/// @brief Method set_DisableUndeclaredEntityCheck addr 0x26e0100 size 0xc virtual false final false
 void set_DisableUndeclaredEntityCheck(bool value) ;

/// @brief Method RegisterConsumedCharacters addr 0x26d5e28 size 0xdc virtual false final false
 void RegisterConsumedCharacters(int64_t characters, bool inEntityReference) ;

/// @brief Method StripSpaces addr 0x26e010c size 0x228 virtual false final false
static ::StringW StripSpaces(::StringW value) ;

/// @brief Method StripSpaces addr 0x26e0334 size 0x110 virtual false final false
static void StripSpaces(::ArrayW<char16_t> value, int32_t index, ByRef<int32_t> len) ;

/// @brief Method BlockCopyChars addr 0x26d76e8 size 0x14 virtual false final false
static void BlockCopyChars(::ArrayW<char16_t> src, int32_t srcOffset, ::ArrayW<char16_t> dst, int32_t dstOffset, int32_t count) ;

/// @brief Method BlockCopy addr 0x26d76fc size 0x8 virtual false final false
static void BlockCopy(::ArrayW<uint8_t> src, int32_t srcOffset, ::ArrayW<uint8_t> dst, int32_t dstOffset, int32_t count) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::____System__Xml__XmlTextReaderImpl__EntityExpandType, "System.Xml", "XmlTextReaderImpl/EntityExpandType");
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::____System__Xml__XmlTextReaderImpl__EntityType, "System.Xml", "XmlTextReaderImpl/EntityType");
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::____System__Xml__XmlTextReaderImpl__IncrementalReadState, "System.Xml", "XmlTextReaderImpl/IncrementalReadState");
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::____System__Xml__XmlTextReaderImpl__InitInputType, "System.Xml", "XmlTextReaderImpl/InitInputType");
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::____System__Xml__XmlTextReaderImpl__ParsingFunction, "System.Xml", "XmlTextReaderImpl/ParsingFunction");
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::____System__Xml__XmlTextReaderImpl__ParsingMode, "System.Xml", "XmlTextReaderImpl/ParsingMode");
NEED_NO_BOX(::System::Xml::XmlTextReaderImpl);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlTextReaderImpl, "System.Xml", "XmlTextReaderImpl");
NEED_NO_BOX(::System::Xml::____System__Xml__XmlTextReaderImpl__DtdDefaultAttributeInfoToNodeDataComparer);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::____System__Xml__XmlTextReaderImpl__DtdDefaultAttributeInfoToNodeDataComparer, "System.Xml", "XmlTextReaderImpl/DtdDefaultAttributeInfoToNodeDataComparer");
NEED_NO_BOX(::System::Xml::____System__Xml__XmlTextReaderImpl__DtdParserProxy);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::____System__Xml__XmlTextReaderImpl__DtdParserProxy, "System.Xml", "XmlTextReaderImpl/DtdParserProxy");
NEED_NO_BOX(::System::Xml::____System__Xml__XmlTextReaderImpl__LaterInitParam);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::____System__Xml__XmlTextReaderImpl__LaterInitParam, "System.Xml", "XmlTextReaderImpl/LaterInitParam");
NEED_NO_BOX(::System::Xml::____System__Xml__XmlTextReaderImpl__NoNamespaceManager);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::____System__Xml__XmlTextReaderImpl__NoNamespaceManager, "System.Xml", "XmlTextReaderImpl/NoNamespaceManager");
NEED_NO_BOX(::System::Xml::____System__Xml__XmlTextReaderImpl__NodeData);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::____System__Xml__XmlTextReaderImpl__NodeData, "System.Xml", "XmlTextReaderImpl/NodeData");
NEED_NO_BOX(::System::Xml::____System__Xml__XmlTextReaderImpl__OnDefaultAttributeUseDelegate);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::____System__Xml__XmlTextReaderImpl__OnDefaultAttributeUseDelegate, "System.Xml", "XmlTextReaderImpl/OnDefaultAttributeUseDelegate");
NEED_NO_BOX(::System::Xml::____System__Xml__XmlTextReaderImpl__XmlContext);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::____System__Xml__XmlTextReaderImpl__XmlContext, "System.Xml", "XmlTextReaderImpl/XmlContext");
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::____System__Xml__XmlTextReaderImpl__ParsingState, "System.Xml", "XmlTextReaderImpl/ParsingState");
