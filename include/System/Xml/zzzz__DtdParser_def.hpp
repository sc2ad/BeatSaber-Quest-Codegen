#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace System::Xml {
class System__Xml__DtdParser__ParseElementOnlyContent_LocalFrame;
}
namespace System::Xml {
class IDtdParser;
}
namespace System::Xml {
struct XmlCharType;
}
namespace System::Xml::Schema {
class SchemaEntity;
}
namespace System::Xml {
struct System__Xml__DtdParser__LiteralType;
}
namespace System::Xml {
struct System__Xml__DtdParser__Token;
}
namespace System::Xml::Schema {
class ParticleContentValidator;
}
namespace System::Xml::Schema {
struct XmlSeverityType;
}
namespace System::Xml {
class XmlNameTable;
}
namespace System::Xml {
struct LineInfo;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Xml {
struct System__Xml__DtdParser__ScanningFunction;
}
namespace System::Xml::Schema {
class SchemaElementDecl;
}
namespace System::Text {
class StringBuilder;
}
namespace System::Xml {
class IDtdParserAdapterWithValidation;
}
namespace System::Xml::Schema {
class SchemaAttDef;
}
namespace System::Xml {
class XmlQualifiedName;
}
namespace System::Xml::Schema {
class SchemaInfo;
}
namespace System::Xml {
class System__Xml__DtdParser__UndeclaredNotation;
}
namespace System::Xml {
class IDtdParserAdapter;
}
namespace System::Xml {
class IDtdInfo;
}
namespace System::Xml::Schema {
class XmlSchemaException;
}
// Forward declare root types
namespace System::Xml {
struct System__Xml__DtdParser__LiteralType;
}
namespace System::Xml {
struct System__Xml__DtdParser__ScanningFunction;
}
namespace System::Xml {
struct System__Xml__DtdParser__Token;
}
namespace System::Xml {
class DtdParser;
}
namespace System::Xml {
class System__Xml__DtdParser__ParseElementOnlyContent_LocalFrame;
}
namespace System::Xml {
class System__Xml__DtdParser__UndeclaredNotation;
}
// Type: ::Token
namespace System::Xml {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11478))
// CS Name: System.Xml.DtdParser::Token
struct CORDL_TYPE System__Xml__DtdParser__Token : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr System__Xml__DtdParser__Token(int32_t value__) noexcept;


                    constexpr System__Xml__DtdParser__Token(System__Xml__DtdParser__Token const&) = default;
                    constexpr System__Xml__DtdParser__Token(System__Xml__DtdParser__Token&&) = default;
                    constexpr System__Xml__DtdParser__Token& operator=(System__Xml__DtdParser__Token const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Xml__DtdParser__Token& operator=(System__Xml__DtdParser__Token&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Xml__DtdParser__Token(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __System__Xml__DtdParser__Token_Unwrapped : int32_t {
__CDATA = 0,
__ID = 1,
__IDREF = 2,
__IDREFS = 3,
__ENTITY = 4,
__ENTITIES = 5,
__NMTOKEN = 6,
__NMTOKENS = 7,
__NOTATION = 8,
__None = 9,
__PERef = 10,
__AttlistDecl = 11,
__ElementDecl = 12,
__EntityDecl = 13,
__NotationDecl = 14,
__Comment = 15,
__PI = 16,
__CondSectionStart = 17,
__CondSectionEnd = 18,
__Eof = 19,
__REQUIRED = 20,
__IMPLIED = 21,
__FIXED = 22,
__QName = 23,
__Name = 24,
__Nmtoken = 25,
__Quote = 26,
__LeftParen = 27,
__RightParen = 28,
__GreaterThan = 29,
__Or = 30,
__LeftBracket = 31,
__RightBracket = 32,
__PUBLIC = 33,
__SYSTEM = 34,
__Literal = 35,
__DOCTYPE = 36,
__NData = 37,
__Percent = 38,
__Star = 39,
__QMark = 40,
__Plus = 41,
__PCDATA = 42,
__Comma = 43,
__ANY = 44,
__EMPTY = 45,
__IGNORE = 46,
__INCLUDE = 47,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __System__Xml__DtdParser__Token_Unwrapped () const noexcept {
return std::bit_cast<__System__Xml__DtdParser__Token_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field CDATA offset 0
static System::Xml::System__Xml__DtdParser__Token const CDATA;

/// @brief Field ID offset 0
static System::Xml::System__Xml__DtdParser__Token const ID;

/// @brief Field IDREF offset 0
static System::Xml::System__Xml__DtdParser__Token const IDREF;

/// @brief Field IDREFS offset 0
static System::Xml::System__Xml__DtdParser__Token const IDREFS;

/// @brief Field ENTITY offset 0
static System::Xml::System__Xml__DtdParser__Token const ENTITY;

/// @brief Field ENTITIES offset 0
static System::Xml::System__Xml__DtdParser__Token const ENTITIES;

/// @brief Field NMTOKEN offset 0
static System::Xml::System__Xml__DtdParser__Token const NMTOKEN;

/// @brief Field NMTOKENS offset 0
static System::Xml::System__Xml__DtdParser__Token const NMTOKENS;

/// @brief Field NOTATION offset 0
static System::Xml::System__Xml__DtdParser__Token const NOTATION;

/// @brief Field None offset 0
static System::Xml::System__Xml__DtdParser__Token const None;

/// @brief Field PERef offset 0
static System::Xml::System__Xml__DtdParser__Token const PERef;

/// @brief Field AttlistDecl offset 0
static System::Xml::System__Xml__DtdParser__Token const AttlistDecl;

/// @brief Field ElementDecl offset 0
static System::Xml::System__Xml__DtdParser__Token const ElementDecl;

/// @brief Field EntityDecl offset 0
static System::Xml::System__Xml__DtdParser__Token const EntityDecl;

/// @brief Field NotationDecl offset 0
static System::Xml::System__Xml__DtdParser__Token const NotationDecl;

/// @brief Field Comment offset 0
static System::Xml::System__Xml__DtdParser__Token const Comment;

/// @brief Field PI offset 0
static System::Xml::System__Xml__DtdParser__Token const PI;

/// @brief Field CondSectionStart offset 0
static System::Xml::System__Xml__DtdParser__Token const CondSectionStart;

/// @brief Field CondSectionEnd offset 0
static System::Xml::System__Xml__DtdParser__Token const CondSectionEnd;

/// @brief Field Eof offset 0
static System::Xml::System__Xml__DtdParser__Token const Eof;

/// @brief Field REQUIRED offset 0
static System::Xml::System__Xml__DtdParser__Token const REQUIRED;

/// @brief Field IMPLIED offset 0
static System::Xml::System__Xml__DtdParser__Token const IMPLIED;

/// @brief Field FIXED offset 0
static System::Xml::System__Xml__DtdParser__Token const FIXED;

/// @brief Field QName offset 0
static System::Xml::System__Xml__DtdParser__Token const QName;

/// @brief Field Name offset 0
static System::Xml::System__Xml__DtdParser__Token const Name;

/// @brief Field Nmtoken offset 0
static System::Xml::System__Xml__DtdParser__Token const Nmtoken;

/// @brief Field Quote offset 0
static System::Xml::System__Xml__DtdParser__Token const Quote;

/// @brief Field LeftParen offset 0
static System::Xml::System__Xml__DtdParser__Token const LeftParen;

/// @brief Field RightParen offset 0
static System::Xml::System__Xml__DtdParser__Token const RightParen;

/// @brief Field GreaterThan offset 0
static System::Xml::System__Xml__DtdParser__Token const GreaterThan;

/// @brief Field Or offset 0
static System::Xml::System__Xml__DtdParser__Token const Or;

/// @brief Field LeftBracket offset 0
static System::Xml::System__Xml__DtdParser__Token const LeftBracket;

/// @brief Field RightBracket offset 0
static System::Xml::System__Xml__DtdParser__Token const RightBracket;

/// @brief Field PUBLIC offset 0
static System::Xml::System__Xml__DtdParser__Token const PUBLIC;

/// @brief Field SYSTEM offset 0
static System::Xml::System__Xml__DtdParser__Token const SYSTEM;

/// @brief Field Literal offset 0
static System::Xml::System__Xml__DtdParser__Token const Literal;

/// @brief Field DOCTYPE offset 0
static System::Xml::System__Xml__DtdParser__Token const DOCTYPE;

/// @brief Field NData offset 0
static System::Xml::System__Xml__DtdParser__Token const NData;

/// @brief Field Percent offset 0
static System::Xml::System__Xml__DtdParser__Token const Percent;

/// @brief Field Star offset 0
static System::Xml::System__Xml__DtdParser__Token const Star;

/// @brief Field QMark offset 0
static System::Xml::System__Xml__DtdParser__Token const QMark;

/// @brief Field Plus offset 0
static System::Xml::System__Xml__DtdParser__Token const Plus;

/// @brief Field PCDATA offset 0
static System::Xml::System__Xml__DtdParser__Token const PCDATA;

/// @brief Field Comma offset 0
static System::Xml::System__Xml__DtdParser__Token const Comma;

/// @brief Field ANY offset 0
static System::Xml::System__Xml__DtdParser__Token const ANY;

/// @brief Field EMPTY offset 0
static System::Xml::System__Xml__DtdParser__Token const EMPTY;

/// @brief Field IGNORE offset 0
static System::Xml::System__Xml__DtdParser__Token const IGNORE;

/// @brief Field INCLUDE offset 0
static System::Xml::System__Xml__DtdParser__Token const INCLUDE;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Xml
// Type: ::ScanningFunction
namespace System::Xml {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11479))
// CS Name: System.Xml.DtdParser::ScanningFunction
struct CORDL_TYPE System__Xml__DtdParser__ScanningFunction : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr System__Xml__DtdParser__ScanningFunction(int32_t value__) noexcept;


                    constexpr System__Xml__DtdParser__ScanningFunction(System__Xml__DtdParser__ScanningFunction const&) = default;
                    constexpr System__Xml__DtdParser__ScanningFunction(System__Xml__DtdParser__ScanningFunction&&) = default;
                    constexpr System__Xml__DtdParser__ScanningFunction& operator=(System__Xml__DtdParser__ScanningFunction const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Xml__DtdParser__ScanningFunction& operator=(System__Xml__DtdParser__ScanningFunction&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Xml__DtdParser__ScanningFunction(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __System__Xml__DtdParser__ScanningFunction_Unwrapped : int32_t {
__SubsetContent = 0,
__Name = 1,
__QName = 2,
__Nmtoken = 3,
__Doctype1 = 4,
__Doctype2 = 5,
__Element1 = 6,
__Element2 = 7,
__Element3 = 8,
__Element4 = 9,
__Element5 = 10,
__Element6 = 11,
__Element7 = 12,
__Attlist1 = 13,
__Attlist2 = 14,
__Attlist3 = 15,
__Attlist4 = 16,
__Attlist5 = 17,
__Attlist6 = 18,
__Attlist7 = 19,
__Entity1 = 20,
__Entity2 = 21,
__Entity3 = 22,
__Notation1 = 23,
__CondSection1 = 24,
__CondSection2 = 25,
__CondSection3 = 26,
__Literal = 27,
__SystemId = 28,
__PublicId1 = 29,
__PublicId2 = 30,
__ClosingTag = 31,
__ParamEntitySpace = 32,
__None = 33,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __System__Xml__DtdParser__ScanningFunction_Unwrapped () const noexcept {
return std::bit_cast<__System__Xml__DtdParser__ScanningFunction_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field SubsetContent offset 0
static System::Xml::System__Xml__DtdParser__ScanningFunction const SubsetContent;

/// @brief Field Name offset 0
static System::Xml::System__Xml__DtdParser__ScanningFunction const Name;

/// @brief Field QName offset 0
static System::Xml::System__Xml__DtdParser__ScanningFunction const QName;

/// @brief Field Nmtoken offset 0
static System::Xml::System__Xml__DtdParser__ScanningFunction const Nmtoken;

/// @brief Field Doctype1 offset 0
static System::Xml::System__Xml__DtdParser__ScanningFunction const Doctype1;

/// @brief Field Doctype2 offset 0
static System::Xml::System__Xml__DtdParser__ScanningFunction const Doctype2;

/// @brief Field Element1 offset 0
static System::Xml::System__Xml__DtdParser__ScanningFunction const Element1;

/// @brief Field Element2 offset 0
static System::Xml::System__Xml__DtdParser__ScanningFunction const Element2;

/// @brief Field Element3 offset 0
static System::Xml::System__Xml__DtdParser__ScanningFunction const Element3;

/// @brief Field Element4 offset 0
static System::Xml::System__Xml__DtdParser__ScanningFunction const Element4;

/// @brief Field Element5 offset 0
static System::Xml::System__Xml__DtdParser__ScanningFunction const Element5;

/// @brief Field Element6 offset 0
static System::Xml::System__Xml__DtdParser__ScanningFunction const Element6;

/// @brief Field Element7 offset 0
static System::Xml::System__Xml__DtdParser__ScanningFunction const Element7;

/// @brief Field Attlist1 offset 0
static System::Xml::System__Xml__DtdParser__ScanningFunction const Attlist1;

/// @brief Field Attlist2 offset 0
static System::Xml::System__Xml__DtdParser__ScanningFunction const Attlist2;

/// @brief Field Attlist3 offset 0
static System::Xml::System__Xml__DtdParser__ScanningFunction const Attlist3;

/// @brief Field Attlist4 offset 0
static System::Xml::System__Xml__DtdParser__ScanningFunction const Attlist4;

/// @brief Field Attlist5 offset 0
static System::Xml::System__Xml__DtdParser__ScanningFunction const Attlist5;

/// @brief Field Attlist6 offset 0
static System::Xml::System__Xml__DtdParser__ScanningFunction const Attlist6;

/// @brief Field Attlist7 offset 0
static System::Xml::System__Xml__DtdParser__ScanningFunction const Attlist7;

/// @brief Field Entity1 offset 0
static System::Xml::System__Xml__DtdParser__ScanningFunction const Entity1;

/// @brief Field Entity2 offset 0
static System::Xml::System__Xml__DtdParser__ScanningFunction const Entity2;

/// @brief Field Entity3 offset 0
static System::Xml::System__Xml__DtdParser__ScanningFunction const Entity3;

/// @brief Field Notation1 offset 0
static System::Xml::System__Xml__DtdParser__ScanningFunction const Notation1;

/// @brief Field CondSection1 offset 0
static System::Xml::System__Xml__DtdParser__ScanningFunction const CondSection1;

/// @brief Field CondSection2 offset 0
static System::Xml::System__Xml__DtdParser__ScanningFunction const CondSection2;

/// @brief Field CondSection3 offset 0
static System::Xml::System__Xml__DtdParser__ScanningFunction const CondSection3;

/// @brief Field Literal offset 0
static System::Xml::System__Xml__DtdParser__ScanningFunction const Literal;

/// @brief Field SystemId offset 0
static System::Xml::System__Xml__DtdParser__ScanningFunction const SystemId;

/// @brief Field PublicId1 offset 0
static System::Xml::System__Xml__DtdParser__ScanningFunction const PublicId1;

/// @brief Field PublicId2 offset 0
static System::Xml::System__Xml__DtdParser__ScanningFunction const PublicId2;

/// @brief Field ClosingTag offset 0
static System::Xml::System__Xml__DtdParser__ScanningFunction const ClosingTag;

/// @brief Field ParamEntitySpace offset 0
static System::Xml::System__Xml__DtdParser__ScanningFunction const ParamEntitySpace;

/// @brief Field None offset 0
static System::Xml::System__Xml__DtdParser__ScanningFunction const None;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Xml
// Type: ::LiteralType
namespace System::Xml {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11480))
// CS Name: System.Xml.DtdParser::LiteralType
struct CORDL_TYPE System__Xml__DtdParser__LiteralType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr System__Xml__DtdParser__LiteralType(int32_t value__) noexcept;


                    constexpr System__Xml__DtdParser__LiteralType(System__Xml__DtdParser__LiteralType const&) = default;
                    constexpr System__Xml__DtdParser__LiteralType(System__Xml__DtdParser__LiteralType&&) = default;
                    constexpr System__Xml__DtdParser__LiteralType& operator=(System__Xml__DtdParser__LiteralType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Xml__DtdParser__LiteralType& operator=(System__Xml__DtdParser__LiteralType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Xml__DtdParser__LiteralType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __System__Xml__DtdParser__LiteralType_Unwrapped : int32_t {
__AttributeValue = 0,
__EntityReplText = 1,
__SystemOrPublicID = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __System__Xml__DtdParser__LiteralType_Unwrapped () const noexcept {
return std::bit_cast<__System__Xml__DtdParser__LiteralType_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field AttributeValue offset 0
static System::Xml::System__Xml__DtdParser__LiteralType const AttributeValue;

/// @brief Field EntityReplText offset 0
static System::Xml::System__Xml__DtdParser__LiteralType const EntityReplText;

/// @brief Field SystemOrPublicID offset 0
static System::Xml::System__Xml__DtdParser__LiteralType const SystemOrPublicID;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Xml
// Type: ::UndeclaredNotation
namespace System::Xml {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11481))
// CS Name: System.Xml.DtdParser::UndeclaredNotation
class CORDL_TYPE System__Xml__DtdParser__UndeclaredNotation : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~System__Xml__DtdParser__UndeclaredNotation() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Xml__DtdParser__UndeclaredNotation", modifiers: " const&", def_value: None }]
constexpr System__Xml__DtdParser__UndeclaredNotation(System__Xml__DtdParser__UndeclaredNotation const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Xml__DtdParser__UndeclaredNotation", modifiers: "&&", def_value: None }]
constexpr System__Xml__DtdParser__UndeclaredNotation(System__Xml__DtdParser__UndeclaredNotation&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Xml__DtdParser__UndeclaredNotation(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Xml__DtdParser__UndeclaredNotation& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Xml__DtdParser__UndeclaredNotation& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Xml__DtdParser__UndeclaredNotation& operator=(System__Xml__DtdParser__UndeclaredNotation&& o) noexcept = default;
  constexpr System__Xml__DtdParser__UndeclaredNotation& operator=(System__Xml__DtdParser__UndeclaredNotation const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_name, put=__set_name))  name;

constexpr void __set_name(::StringW value) ;

constexpr ::StringW __get_name() const;

 int32_t __declspec(property(get=__get_lineNo, put=__set_lineNo))  lineNo;

constexpr void __set_lineNo(int32_t value) ;

constexpr int32_t __get_lineNo() const;

 int32_t __declspec(property(get=__get_linePos, put=__set_linePos))  linePos;

constexpr void __set_linePos(int32_t value) ;

constexpr int32_t __get_linePos() const;

 System::Xml::System__Xml__DtdParser__UndeclaredNotation __declspec(property(get=__get_next, put=__set_next))  next;

constexpr void __set_next(System::Xml::System__Xml__DtdParser__UndeclaredNotation value) ;

constexpr System::Xml::System__Xml__DtdParser__UndeclaredNotation __get_next() const;


// Methods

static System::Xml::System__Xml__DtdParser__UndeclaredNotation New_ctor(::StringW name, int32_t lineNo, int32_t linePos) ;

/// @brief Method .ctor addr 0x27090a8 size 0x40 virtual false final false
 void _ctor(::StringW name, int32_t lineNo, int32_t linePos) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
// Type: ::ParseElementOnlyContent_LocalFrame
namespace System::Xml {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11482))
// CS Name: System.Xml.DtdParser::ParseElementOnlyContent_LocalFrame
class CORDL_TYPE System__Xml__DtdParser__ParseElementOnlyContent_LocalFrame : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~System__Xml__DtdParser__ParseElementOnlyContent_LocalFrame() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Xml__DtdParser__ParseElementOnlyContent_LocalFrame", modifiers: " const&", def_value: None }]
constexpr System__Xml__DtdParser__ParseElementOnlyContent_LocalFrame(System__Xml__DtdParser__ParseElementOnlyContent_LocalFrame const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Xml__DtdParser__ParseElementOnlyContent_LocalFrame", modifiers: "&&", def_value: None }]
constexpr System__Xml__DtdParser__ParseElementOnlyContent_LocalFrame(System__Xml__DtdParser__ParseElementOnlyContent_LocalFrame&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Xml__DtdParser__ParseElementOnlyContent_LocalFrame(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Xml__DtdParser__ParseElementOnlyContent_LocalFrame& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Xml__DtdParser__ParseElementOnlyContent_LocalFrame& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Xml__DtdParser__ParseElementOnlyContent_LocalFrame& operator=(System__Xml__DtdParser__ParseElementOnlyContent_LocalFrame&& o) noexcept = default;
  constexpr System__Xml__DtdParser__ParseElementOnlyContent_LocalFrame& operator=(System__Xml__DtdParser__ParseElementOnlyContent_LocalFrame const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_startParenEntityId, put=__set_startParenEntityId))  startParenEntityId;

constexpr void __set_startParenEntityId(int32_t value) ;

constexpr int32_t __get_startParenEntityId() const;

 System::Xml::System__Xml__DtdParser__Token __declspec(property(get=__get_parsingSchema, put=__set_parsingSchema))  parsingSchema;

constexpr void __set_parsingSchema(System::Xml::System__Xml__DtdParser__Token value) ;

constexpr System::Xml::System__Xml__DtdParser__Token __get_parsingSchema() const;


// Methods

static System::Xml::System__Xml__DtdParser__ParseElementOnlyContent_LocalFrame New_ctor(int32_t startParentEntityIdParam) ;

/// @brief Method .ctor addr 0x27090e8 size 0x2c virtual false final false
 void _ctor(int32_t startParentEntityIdParam) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
// Type: System.Xml::DtdParser
namespace System::Xml {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11483))
// CS Name: System.Xml.DtdParser
class CORDL_TYPE DtdParser : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using ParseElementOnlyContent_LocalFrame = System::Xml::System__Xml__DtdParser__ParseElementOnlyContent_LocalFrame;

using UndeclaredNotation = System::Xml::System__Xml__DtdParser__UndeclaredNotation;

using LiteralType = System::Xml::System__Xml__DtdParser__LiteralType;

using ScanningFunction = System::Xml::System__Xml__DtdParser__ScanningFunction;

using Token = System::Xml::System__Xml__DtdParser__Token;

/// @brief Convert operator to System::Xml::IDtdParser
constexpr operator  System::Xml::IDtdParser() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xc8};

virtual ~DtdParser() = default;

// Ctor Parameters [CppParam { name: "", ty: "DtdParser", modifiers: " const&", def_value: None }]
constexpr DtdParser(DtdParser const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DtdParser", modifiers: "&&", def_value: None }]
constexpr DtdParser(DtdParser&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DtdParser(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DtdParser& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DtdParser& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DtdParser& operator=(DtdParser&& o) noexcept = default;
  constexpr DtdParser& operator=(DtdParser const& o) noexcept = default;
                


// Fields

 System::Xml::IDtdParserAdapter __declspec(property(get=__get_readerAdapter, put=__set_readerAdapter))  readerAdapter;

constexpr void __set_readerAdapter(System::Xml::IDtdParserAdapter value) ;

constexpr System::Xml::IDtdParserAdapter __get_readerAdapter() const;

 System::Xml::IDtdParserAdapterWithValidation __declspec(property(get=__get_readerAdapterWithValidation, put=__set_readerAdapterWithValidation))  readerAdapterWithValidation;

constexpr void __set_readerAdapterWithValidation(System::Xml::IDtdParserAdapterWithValidation value) ;

constexpr System::Xml::IDtdParserAdapterWithValidation __get_readerAdapterWithValidation() const;

 System::Xml::XmlNameTable __declspec(property(get=__get_nameTable, put=__set_nameTable))  nameTable;

constexpr void __set_nameTable(System::Xml::XmlNameTable value) ;

constexpr System::Xml::XmlNameTable __get_nameTable() const;

 System::Xml::Schema::SchemaInfo __declspec(property(get=__get_schemaInfo, put=__set_schemaInfo))  schemaInfo;

constexpr void __set_schemaInfo(System::Xml::Schema::SchemaInfo value) ;

constexpr System::Xml::Schema::SchemaInfo __get_schemaInfo() const;

 System::Xml::XmlCharType __declspec(property(get=__get_xmlCharType, put=__set_xmlCharType))  xmlCharType;

constexpr void __set_xmlCharType(System::Xml::XmlCharType value) ;

constexpr System::Xml::XmlCharType __get_xmlCharType() const;

 ::StringW __declspec(property(get=__get_systemId, put=__set_systemId))  systemId;

constexpr void __set_systemId(::StringW value) ;

constexpr ::StringW __get_systemId() const;

 ::StringW __declspec(property(get=__get_publicId, put=__set_publicId))  publicId;

constexpr void __set_publicId(::StringW value) ;

constexpr ::StringW __get_publicId() const;

 bool __declspec(property(get=__get_normalize, put=__set_normalize))  normalize;

constexpr void __set_normalize(bool value) ;

constexpr bool __get_normalize() const;

 bool __declspec(property(get=__get_validate, put=__set_validate))  validate;

constexpr void __set_validate(bool value) ;

constexpr bool __get_validate() const;

 bool __declspec(property(get=__get_supportNamespaces, put=__set_supportNamespaces))  supportNamespaces;

constexpr void __set_supportNamespaces(bool value) ;

constexpr bool __get_supportNamespaces() const;

 bool __declspec(property(get=__get_v1Compat, put=__set_v1Compat))  v1Compat;

constexpr void __set_v1Compat(bool value) ;

constexpr bool __get_v1Compat() const;

 ::ArrayW<char16_t> __declspec(property(get=__get_chars, put=__set_chars))  chars;

constexpr void __set_chars(::ArrayW<char16_t> value) ;

constexpr ::ArrayW<char16_t> __get_chars() const;

 int32_t __declspec(property(get=__get_charsUsed, put=__set_charsUsed))  charsUsed;

constexpr void __set_charsUsed(int32_t value) ;

constexpr int32_t __get_charsUsed() const;

 int32_t __declspec(property(get=__get_curPos, put=__set_curPos))  curPos;

constexpr void __set_curPos(int32_t value) ;

constexpr int32_t __get_curPos() const;

 System::Xml::System__Xml__DtdParser__ScanningFunction __declspec(property(get=__get_scanningFunction, put=__set_scanningFunction))  scanningFunction;

constexpr void __set_scanningFunction(System::Xml::System__Xml__DtdParser__ScanningFunction value) ;

constexpr System::Xml::System__Xml__DtdParser__ScanningFunction __get_scanningFunction() const;

 System::Xml::System__Xml__DtdParser__ScanningFunction __declspec(property(get=__get_nextScaningFunction, put=__set_nextScaningFunction))  nextScaningFunction;

constexpr void __set_nextScaningFunction(System::Xml::System__Xml__DtdParser__ScanningFunction value) ;

constexpr System::Xml::System__Xml__DtdParser__ScanningFunction __get_nextScaningFunction() const;

 System::Xml::System__Xml__DtdParser__ScanningFunction __declspec(property(get=__get_savedScanningFunction, put=__set_savedScanningFunction))  savedScanningFunction;

constexpr void __set_savedScanningFunction(System::Xml::System__Xml__DtdParser__ScanningFunction value) ;

constexpr System::Xml::System__Xml__DtdParser__ScanningFunction __get_savedScanningFunction() const;

 bool __declspec(property(get=__get_whitespaceSeen, put=__set_whitespaceSeen))  whitespaceSeen;

constexpr void __set_whitespaceSeen(bool value) ;

constexpr bool __get_whitespaceSeen() const;

 int32_t __declspec(property(get=__get_tokenStartPos, put=__set_tokenStartPos))  tokenStartPos;

constexpr void __set_tokenStartPos(int32_t value) ;

constexpr int32_t __get_tokenStartPos() const;

 int32_t __declspec(property(get=__get_colonPos, put=__set_colonPos))  colonPos;

constexpr void __set_colonPos(int32_t value) ;

constexpr int32_t __get_colonPos() const;

 System::Text::StringBuilder __declspec(property(get=__get_internalSubsetValueSb, put=__set_internalSubsetValueSb))  internalSubsetValueSb;

constexpr void __set_internalSubsetValueSb(System::Text::StringBuilder value) ;

constexpr System::Text::StringBuilder __get_internalSubsetValueSb() const;

 int32_t __declspec(property(get=__get_externalEntitiesDepth, put=__set_externalEntitiesDepth))  externalEntitiesDepth;

constexpr void __set_externalEntitiesDepth(int32_t value) ;

constexpr int32_t __get_externalEntitiesDepth() const;

 int32_t __declspec(property(get=__get_currentEntityId, put=__set_currentEntityId))  currentEntityId;

constexpr void __set_currentEntityId(int32_t value) ;

constexpr int32_t __get_currentEntityId() const;

 bool __declspec(property(get=__get_freeFloatingDtd, put=__set_freeFloatingDtd))  freeFloatingDtd;

constexpr void __set_freeFloatingDtd(bool value) ;

constexpr bool __get_freeFloatingDtd() const;

 bool __declspec(property(get=__get_hasFreeFloatingInternalSubset, put=__set_hasFreeFloatingInternalSubset))  hasFreeFloatingInternalSubset;

constexpr void __set_hasFreeFloatingInternalSubset(bool value) ;

constexpr bool __get_hasFreeFloatingInternalSubset() const;

 System::Text::StringBuilder __declspec(property(get=__get_stringBuilder, put=__set_stringBuilder))  stringBuilder;

constexpr void __set_stringBuilder(System::Text::StringBuilder value) ;

constexpr System::Text::StringBuilder __get_stringBuilder() const;

 int32_t __declspec(property(get=__get_condSectionDepth, put=__set_condSectionDepth))  condSectionDepth;

constexpr void __set_condSectionDepth(int32_t value) ;

constexpr int32_t __get_condSectionDepth() const;

 System::Xml::LineInfo __declspec(property(get=__get_literalLineInfo, put=__set_literalLineInfo))  literalLineInfo;

constexpr void __set_literalLineInfo(System::Xml::LineInfo value) ;

constexpr System::Xml::LineInfo __get_literalLineInfo() const;

 char16_t __declspec(property(get=__get_literalQuoteChar, put=__set_literalQuoteChar))  literalQuoteChar;

constexpr void __set_literalQuoteChar(char16_t value) ;

constexpr char16_t __get_literalQuoteChar() const;

 ::StringW __declspec(property(get=__get_documentBaseUri, put=__set_documentBaseUri))  documentBaseUri;

constexpr void __set_documentBaseUri(::StringW value) ;

constexpr ::StringW __get_documentBaseUri() const;

 ::StringW __declspec(property(get=__get_externalDtdBaseUri, put=__set_externalDtdBaseUri))  externalDtdBaseUri;

constexpr void __set_externalDtdBaseUri(::StringW value) ;

constexpr ::StringW __get_externalDtdBaseUri() const;

 System::Collections::Generic::Dictionary_2<::StringW,System::Xml::System__Xml__DtdParser__UndeclaredNotation> __declspec(property(get=__get_undeclaredNotations, put=__set_undeclaredNotations))  undeclaredNotations;

constexpr void __set_undeclaredNotations(System::Collections::Generic::Dictionary_2<::StringW,System::Xml::System__Xml__DtdParser__UndeclaredNotation> value) ;

constexpr System::Collections::Generic::Dictionary_2<::StringW,System::Xml::System__Xml__DtdParser__UndeclaredNotation> __get_undeclaredNotations() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_condSectionEntityIds, put=__set_condSectionEntityIds))  condSectionEntityIds;

constexpr void __set_condSectionEntityIds(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_condSectionEntityIds() const;


// Properties

 bool __declspec(property(get=get_ParsingInternalSubset))  ParsingInternalSubset;

 bool __declspec(property(get=get_IgnoreEntityReferences))  IgnoreEntityReferences;

 bool __declspec(property(get=get_SaveInternalSubsetValue))  SaveInternalSubsetValue;

 bool __declspec(property(get=get_ParsingTopLevelMarkup))  ParsingTopLevelMarkup;

 bool __declspec(property(get=get_SupportNamespaces))  SupportNamespaces;

 bool __declspec(property(get=get_Normalize))  Normalize;

 int32_t __declspec(property(get=get_LineNo))  LineNo;

 int32_t __declspec(property(get=get_LinePos))  LinePos;

 ::StringW __declspec(property(get=get_BaseUriStr))  BaseUriStr;


// Methods

static System::Xml::DtdParser New_ctor() ;

/// @brief Method .ctor addr 0x26ff1e4 size 0x88 virtual false final false
 void _ctor() ;

/// @brief Method Create addr 0x26f98fc size 0x58 virtual false final false
static System::Xml::IDtdParser Create() ;

/// @brief Method Initialize addr 0x26ff26c size 0x3d0 virtual false final false
 void Initialize(System::Xml::IDtdParserAdapter readerAdapter) ;

/// @brief Method InitializeFreeFloatingDtd addr 0x26ff63c size 0x3d0 virtual false final false
 void InitializeFreeFloatingDtd(::StringW baseUri, ::StringW docTypeName, ::StringW publicId, ::StringW systemId, ::StringW internalSubset, System::Xml::IDtdParserAdapter adapter) ;

/// @brief Method System.Xml.IDtdParser.ParseInternalDtd addr 0x26ffa88 size 0x30 virtual true final true
 System::Xml::IDtdInfo System_Xml_IDtdParser_ParseInternalDtd(System::Xml::IDtdParserAdapter adapter, bool saveInternalSubset) ;

/// @brief Method System.Xml.IDtdParser.ParseFreeFloatingDtd addr 0x26ffd14 size 0x24 virtual true final true
 System::Xml::IDtdInfo System_Xml_IDtdParser_ParseFreeFloatingDtd(::StringW baseUri, ::StringW docTypeName, ::StringW publicId, ::StringW systemId, ::StringW internalSubset, System::Xml::IDtdParserAdapter adapter) ;

/// @brief Method get_ParsingInternalSubset addr 0x26ffd38 size 0x10 virtual false final false
 bool get_ParsingInternalSubset() ;

/// @brief Method get_IgnoreEntityReferences addr 0x26ffd48 size 0x10 virtual false final false
 bool get_IgnoreEntityReferences() ;

/// @brief Method get_SaveInternalSubsetValue addr 0x26ffd58 size 0xc0 virtual false final false
 bool get_SaveInternalSubsetValue() ;

/// @brief Method get_ParsingTopLevelMarkup addr 0x26ffe18 size 0x30 virtual false final false
 bool get_ParsingTopLevelMarkup() ;

/// @brief Method get_SupportNamespaces addr 0x26ffe48 size 0x8 virtual false final false
 bool get_SupportNamespaces() ;

/// @brief Method get_Normalize addr 0x26ffe50 size 0x8 virtual false final false
 bool get_Normalize() ;

/// @brief Method Parse addr 0x26ffab8 size 0x25c virtual false final false
 void Parse(bool saveInternalSubset) ;

/// @brief Method ParseInDocumentDtd addr 0x26ffeac size 0x150 virtual false final false
 void ParseInDocumentDtd(bool saveInternalSubset) ;

/// @brief Method ParseFreeFloatingDtd addr 0x26ffe58 size 0x54 virtual false final false
 void ParseFreeFloatingDtd() ;

/// @brief Method ParseInternalSubset addr 0x2701360 size 0x4 virtual false final false
 void ParseInternalSubset() ;

/// @brief Method ParseExternalSubset addr 0x2701364 size 0x1a4 virtual false final false
 void ParseExternalSubset() ;

/// @brief Method ParseSubset addr 0x2701508 size 0x35c virtual false final false
 void ParseSubset() ;

/// @brief Method ParseAttlistDecl addr 0x2701864 size 0x5c8 virtual false final false
 void ParseAttlistDecl() ;

/// @brief Method ParseAttlistType addr 0x2703298 size 0x55c virtual false final false
 void ParseAttlistType(System::Xml::Schema::SchemaAttDef attrDef, System::Xml::Schema::SchemaElementDecl elementDecl, bool ignoreErrors) ;

/// @brief Method ParseAttlistDefault addr 0x27037f4 size 0x1b4 virtual false final false
 void ParseAttlistDefault(System::Xml::Schema::SchemaAttDef attrDef, bool ignoreErrors) ;

/// @brief Method ParseElementDecl addr 0x2701e2c size 0x394 virtual false final false
 void ParseElementDecl() ;

/// @brief Method ParseElementOnlyContent addr 0x2703f74 size 0x350 virtual false final false
 void ParseElementOnlyContent(System::Xml::Schema::ParticleContentValidator pcv, int32_t startParenEntityId) ;

/// @brief Method ParseHowMany addr 0x27042c4 size 0x70 virtual false final false
 void ParseHowMany(System::Xml::Schema::ParticleContentValidator pcv) ;

/// @brief Method ParseElementMixedContent addr 0x2703cd0 size 0x2a4 virtual false final false
 void ParseElementMixedContent(System::Xml::Schema::ParticleContentValidator pcv, int32_t startParenEntityId) ;

/// @brief Method ParseEntityDecl addr 0x27021c0 size 0x35c virtual false final false
 void ParseEntityDecl() ;

/// @brief Method ParseNotationDecl addr 0x270251c size 0x1f4 virtual false final false
 void ParseNotationDecl() ;

/// @brief Method AddUndeclaredNotation addr 0x2703a98 size 0x160 virtual false final false
 void AddUndeclaredNotation(::StringW notationName) ;

/// @brief Method ParseComment addr 0x2702710 size 0x244 virtual false final false
 void ParseComment() ;

/// @brief Method ParsePI addr 0x2702954 size 0x164 virtual false final false
 void ParsePI() ;

/// @brief Method ParseCondSection addr 0x2702b20 size 0x224 virtual false final false
 void ParseCondSection() ;

/// @brief Method ParseExternalId addr 0x2700e44 size 0x514 virtual false final false
 void ParseExternalId(System::Xml::System__Xml__DtdParser__Token idTokenType, System::Xml::System__Xml__DtdParser__Token declType, ByRef<::StringW> publicId, ByRef<::StringW> systemId) ;

/// @brief Method GetToken addr 0x27003dc size 0x8ac virtual false final false
 System::Xml::System__Xml__DtdParser__Token GetToken(bool needWhiteSpace) ;

/// @brief Method ScanSubsetContent addr 0x2704aa4 size 0x704 virtual false final false
 System::Xml::System__Xml__DtdParser__Token ScanSubsetContent() ;

/// @brief Method ScanNameExpected addr 0x2704a3c size 0x24 virtual false final false
 System::Xml::System__Xml__DtdParser__Token ScanNameExpected() ;

/// @brief Method ScanQNameExpected addr 0x2704a60 size 0x24 virtual false final false
 System::Xml::System__Xml__DtdParser__Token ScanQNameExpected() ;

/// @brief Method ScanNmtokenExpected addr 0x2704a84 size 0x20 virtual false final false
 System::Xml::System__Xml__DtdParser__Token ScanNmtokenExpected() ;

/// @brief Method ScanDoctype1 addr 0x27051a8 size 0x11c virtual false final false
 System::Xml::System__Xml__DtdParser__Token ScanDoctype1() ;

/// @brief Method ScanDoctype2 addr 0x27052c4 size 0xa8 virtual false final false
 System::Xml::System__Xml__DtdParser__Token ScanDoctype2() ;

/// @brief Method ScanClosingTag addr 0x27074f8 size 0x94 virtual false final false
 System::Xml::System__Xml__DtdParser__Token ScanClosingTag() ;

/// @brief Method ScanElement1 addr 0x270536c size 0x1d0 virtual false final false
 System::Xml::System__Xml__DtdParser__Token ScanElement1() ;

/// @brief Method ScanElement2 addr 0x270553c size 0x1a4 virtual false final false
 System::Xml::System__Xml__DtdParser__Token ScanElement2() ;

/// @brief Method ScanElement3 addr 0x27056e0 size 0x80 virtual false final false
 System::Xml::System__Xml__DtdParser__Token ScanElement3() ;

/// @brief Method ScanElement4 addr 0x2705760 size 0xcc virtual false final false
 System::Xml::System__Xml__DtdParser__Token ScanElement4() ;

/// @brief Method ScanElement5 addr 0x270582c size 0xec virtual false final false
 System::Xml::System__Xml__DtdParser__Token ScanElement5() ;

/// @brief Method ScanElement6 addr 0x2705918 size 0xd0 virtual false final false
 System::Xml::System__Xml__DtdParser__Token ScanElement6() ;

/// @brief Method ScanElement7 addr 0x27059e8 size 0x60 virtual false final false
 System::Xml::System__Xml__DtdParser__Token ScanElement7() ;

/// @brief Method ScanAttlist1 addr 0x2705a48 size 0xc4 virtual false final false
 System::Xml::System__Xml__DtdParser__Token ScanAttlist1() ;

/// @brief Method ScanAttlist2 addr 0x2705b0c size 0x680 virtual false final false
 System::Xml::System__Xml__DtdParser__Token ScanAttlist2() ;

/// @brief Method ScanAttlist3 addr 0x270618c size 0xa0 virtual false final false
 System::Xml::System__Xml__DtdParser__Token ScanAttlist3() ;

/// @brief Method ScanAttlist4 addr 0x270622c size 0xd0 virtual false final false
 System::Xml::System__Xml__DtdParser__Token ScanAttlist4() ;

/// @brief Method ScanAttlist5 addr 0x27062fc size 0xd0 virtual false final false
 System::Xml::System__Xml__DtdParser__Token ScanAttlist5() ;

/// @brief Method ScanAttlist6 addr 0x27063cc size 0x374 virtual false final false
 System::Xml::System__Xml__DtdParser__Token ScanAttlist6() ;

/// @brief Method ScanAttlist7 addr 0x2706740 size 0xbc virtual false final false
 System::Xml::System__Xml__DtdParser__Token ScanAttlist7() ;

/// @brief Method ScanLiteral addr 0x2707b3c size 0xa88 virtual false final false
 System::Xml::System__Xml__DtdParser__Token ScanLiteral(System::Xml::System__Xml__DtdParser__LiteralType literalType) ;

/// @brief Method ScanEntityName addr 0x27085c4 size 0x160 virtual false final false
 System::Xml::XmlQualifiedName ScanEntityName() ;

/// @brief Method ScanNotation1 addr 0x27067fc size 0xf8 virtual false final false
 System::Xml::System__Xml__DtdParser__Token ScanNotation1() ;

/// @brief Method ScanSystemId addr 0x27068f4 size 0xb4 virtual false final false
 System::Xml::System__Xml__DtdParser__Token ScanSystemId() ;

/// @brief Method ScanEntity1 addr 0x2706ac4 size 0x74 virtual false final false
 System::Xml::System__Xml__DtdParser__Token ScanEntity1() ;

/// @brief Method ScanEntity2 addr 0x2706b38 size 0x12c virtual false final false
 System::Xml::System__Xml__DtdParser__Token ScanEntity2() ;

/// @brief Method ScanEntity3 addr 0x2706c64 size 0x114 virtual false final false
 System::Xml::System__Xml__DtdParser__Token ScanEntity3() ;

/// @brief Method ScanPublicId1 addr 0x27069a8 size 0xb4 virtual false final false
 System::Xml::System__Xml__DtdParser__Token ScanPublicId1() ;

/// @brief Method ScanPublicId2 addr 0x2706a5c size 0x68 virtual false final false
 System::Xml::System__Xml__DtdParser__Token ScanPublicId2() ;

/// @brief Method ScanCondSection1 addr 0x2706d78 size 0x29c virtual false final false
 System::Xml::System__Xml__DtdParser__Token ScanCondSection1() ;

/// @brief Method ScanCondSection2 addr 0x2707014 size 0x98 virtual false final false
 System::Xml::System__Xml__DtdParser__Token ScanCondSection2() ;

/// @brief Method ScanCondSection3 addr 0x27070ac size 0x44c virtual false final false
 System::Xml::System__Xml__DtdParser__Token ScanCondSection3() ;

/// @brief Method ScanName addr 0x27077f8 size 0x8 virtual false final false
 void ScanName() ;

/// @brief Method ScanQName addr 0x2707800 size 0x8 virtual false final false
 void ScanQName() ;

/// @brief Method ScanQName addr 0x2708924 size 0x280 virtual false final false
 void ScanQName(bool isQName) ;

/// @brief Method ReadDataInName addr 0x2708ba4 size 0x44 virtual false final false
 bool ReadDataInName() ;

/// @brief Method ScanNmtoken addr 0x2707808 size 0x16c virtual false final false
 void ScanNmtoken() ;

/// @brief Method EatPublicKeyword addr 0x2707974 size 0xe4 virtual false final false
 bool EatPublicKeyword() ;

/// @brief Method EatSystemKeyword addr 0x2707a58 size 0xe4 virtual false final false
 bool EatSystemKeyword() ;

/// @brief Method GetNameQualified addr 0x2700cd4 size 0x170 virtual false final false
 System::Xml::XmlQualifiedName GetNameQualified(bool canHavePrefix) ;

/// @brief Method GetNameString addr 0x2703a7c size 0x1c virtual false final false
 ::StringW GetNameString() ;

/// @brief Method GetNmtokenString addr 0x2703bf8 size 0x1c virtual false final false
 ::StringW GetNmtokenString() ;

/// @brief Method GetValue addr 0x2703c74 size 0x5c virtual false final false
 ::StringW GetValue() ;

/// @brief Method GetValueWithStrippedSpaces addr 0x2703c14 size 0x60 virtual false final false
 ::StringW GetValueWithStrippedSpaces() ;

/// @brief Method ReadData addr 0x270758c size 0xc4 virtual false final false
 int32_t ReadData() ;

/// @brief Method LoadParsingBuffer addr 0x2700260 size 0x17c virtual false final false
 void LoadParsingBuffer() ;

/// @brief Method SaveParsingBuffer addr 0x2701358 size 0x8 virtual false final false
 void SaveParsingBuffer() ;

/// @brief Method SaveParsingBuffer addr 0x2702e20 size 0x14c virtual false final false
 void SaveParsingBuffer(int32_t internalSubsetValueEndPos) ;

/// @brief Method HandleEntityReference addr 0x2704930 size 0x50 virtual false final false
 bool HandleEntityReference(bool paramEntity, bool inLiteral, bool inAttribute) ;

/// @brief Method HandleEntityReference addr 0x2708e10 size 0x298 virtual false final false
 bool HandleEntityReference(System::Xml::XmlQualifiedName entityName, bool paramEntity, bool inLiteral, bool inAttribute) ;

/// @brief Method HandleEntityEnd addr 0x2707650 size 0x1a8 virtual false final false
 bool HandleEntityEnd(bool inLiteral) ;

/// @brief Method VerifyEntityReference addr 0x2708724 size 0x200 virtual false final false
 System::Xml::Schema::SchemaEntity VerifyEntityReference(System::Xml::XmlQualifiedName entityName, bool paramEntity, bool mustBeDeclared, bool inAttribute) ;

/// @brief Method SendValidationEvent addr 0x2702d44 size 0xdc virtual false final false
 void SendValidationEvent(int32_t pos, System::Xml::Schema::XmlSeverityType severity, ::StringW code, ::StringW arg) ;

/// @brief Method SendValidationEvent addr 0x27039b4 size 0xc8 virtual false final false
 void SendValidationEvent(System::Xml::Schema::XmlSeverityType severity, ::StringW code, ::StringW arg) ;

/// @brief Method SendValidationEvent addr 0x2700120 size 0x140 virtual false final false
 void SendValidationEvent(System::Xml::Schema::XmlSeverityType severity, System::Xml::Schema::XmlSchemaException e) ;

/// @brief Method IsAttributeValueType addr 0x27039a8 size 0xc virtual false final false
 bool IsAttributeValueType(System::Xml::System__Xml__DtdParser__Token token) ;

/// @brief Method get_LineNo addr 0x2702f74 size 0xa4 virtual false final false
 int32_t get_LineNo() ;

/// @brief Method get_LinePos addr 0x2703018 size 0xb0 virtual false final false
 int32_t get_LinePos() ;

/// @brief Method get_BaseUriStr addr 0x26ffffc size 0x124 virtual false final false
 ::StringW get_BaseUriStr() ;

/// @brief Method OnUnexpectedError addr 0x2700c88 size 0x4c virtual false final false
 void OnUnexpectedError() ;

/// @brief Method Throw addr 0x2702ab8 size 0x68 virtual false final false
 void Throw(int32_t curPos, ::StringW res) ;

/// @brief Method Throw addr 0x2704334 size 0x1e8 virtual false final false
 void Throw(int32_t curPos, ::StringW res, ::StringW arg) ;

/// @brief Method Throw addr 0x27046c8 size 0x1e8 virtual false final false
 void Throw(int32_t curPos, ::StringW res, ::ArrayW<::StringW> args) ;

/// @brief Method Throw addr 0x27030c8 size 0x1d0 virtual false final false
 void Throw(::StringW res, ::StringW arg, int32_t lineNo, int32_t linePos) ;

/// @brief Method ThrowInvalidChar addr 0x26ffa0c size 0x7c virtual false final false
 void ThrowInvalidChar(int32_t pos, ::StringW data, int32_t invCharPos) ;

/// @brief Method ThrowInvalidChar addr 0x27048b0 size 0x80 virtual false final false
 void ThrowInvalidChar(::ArrayW<char16_t> data, int32_t length, int32_t invCharPos) ;

/// @brief Method ThrowUnexpectedToken addr 0x2702f6c size 0x8 virtual false final false
 void ThrowUnexpectedToken(int32_t pos, ::StringW expectedToken) ;

/// @brief Method ThrowUnexpectedToken addr 0x270451c size 0x1ac virtual false final false
 void ThrowUnexpectedToken(int32_t pos, ::StringW expectedToken1, ::StringW expectedToken2) ;

/// @brief Method ParseUnexpectedToken addr 0x2704980 size 0xbc virtual false final false
 ::StringW ParseUnexpectedToken(int32_t startPos) ;

/// @brief Method StripSpaces addr 0x2708be8 size 0x228 virtual false final false
static ::StringW StripSpaces(::StringW value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
DEFINE_IL2CPP_ARG_TYPE(System::Xml::System__Xml__DtdParser__LiteralType, "System.Xml", "DtdParser/LiteralType");
DEFINE_IL2CPP_ARG_TYPE(System::Xml::System__Xml__DtdParser__ScanningFunction, "System.Xml", "DtdParser/ScanningFunction");
DEFINE_IL2CPP_ARG_TYPE(System::Xml::System__Xml__DtdParser__Token, "System.Xml", "DtdParser/Token");
NEED_NO_BOX(System::Xml::DtdParser);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::DtdParser, "System.Xml", "DtdParser");
NEED_NO_BOX(System::Xml::System__Xml__DtdParser__ParseElementOnlyContent_LocalFrame);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::System__Xml__DtdParser__ParseElementOnlyContent_LocalFrame, "System.Xml", "DtdParser/ParseElementOnlyContent_LocalFrame");
NEED_NO_BOX(System::Xml::System__Xml__DtdParser__UndeclaredNotation);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::System__Xml__DtdParser__UndeclaredNotation, "System.Xml", "DtdParser/UndeclaredNotation");
