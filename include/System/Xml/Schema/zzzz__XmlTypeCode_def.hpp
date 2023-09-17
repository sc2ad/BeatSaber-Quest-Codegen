#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Xml::Schema {
struct XmlTypeCode;
}
// Type: System.Xml.Schema::XmlTypeCode
namespace System::Xml::Schema {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11688))
// CS Name: System.Xml.Schema.XmlTypeCode
struct CORDL_TYPE XmlTypeCode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr XmlTypeCode(int32_t value__) noexcept;


                    constexpr XmlTypeCode(XmlTypeCode const&) = default;
                    constexpr XmlTypeCode(XmlTypeCode&&) = default;
                    constexpr XmlTypeCode& operator=(XmlTypeCode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr XmlTypeCode& operator=(XmlTypeCode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit XmlTypeCode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __XmlTypeCode_Unwrapped : int32_t {
__None = 0,
__Item = 1,
__Node = 2,
__Document = 3,
__Element = 4,
__Attribute = 5,
__Namespace = 6,
__ProcessingInstruction = 7,
__Comment = 8,
__Text = 9,
__AnyAtomicType = 10,
__UntypedAtomic = 11,
__String = 12,
__Boolean = 13,
__Decimal = 14,
__Float = 15,
__Double = 16,
__Duration = 17,
__DateTime = 18,
__Time = 19,
__Date = 20,
__GYearMonth = 21,
__GYear = 22,
__GMonthDay = 23,
__GDay = 24,
__GMonth = 25,
__HexBinary = 26,
__Base64Binary = 27,
__AnyUri = 28,
__QName = 29,
__Notation = 30,
__NormalizedString = 31,
__Token = 32,
__Language = 33,
__NmToken = 34,
__Name = 35,
__NCName = 36,
__Id = 37,
__Idref = 38,
__Entity = 39,
__Integer = 40,
__NonPositiveInteger = 41,
__NegativeInteger = 42,
__Long = 43,
__Int = 44,
__Short = 45,
__Byte = 46,
__NonNegativeInteger = 47,
__UnsignedLong = 48,
__UnsignedInt = 49,
__UnsignedShort = 50,
__UnsignedByte = 51,
__PositiveInteger = 52,
__YearMonthDuration = 53,
__DayTimeDuration = 54,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __XmlTypeCode_Unwrapped () const noexcept {
return std::bit_cast<__XmlTypeCode_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static ::System::Xml::Schema::XmlTypeCode const None;

/// @brief Field Item offset 0
static ::System::Xml::Schema::XmlTypeCode const Item;

/// @brief Field Node offset 0
static ::System::Xml::Schema::XmlTypeCode const Node;

/// @brief Field Document offset 0
static ::System::Xml::Schema::XmlTypeCode const Document;

/// @brief Field Element offset 0
static ::System::Xml::Schema::XmlTypeCode const Element;

/// @brief Field Attribute offset 0
static ::System::Xml::Schema::XmlTypeCode const Attribute;

/// @brief Field Namespace offset 0
static ::System::Xml::Schema::XmlTypeCode const Namespace;

/// @brief Field ProcessingInstruction offset 0
static ::System::Xml::Schema::XmlTypeCode const ProcessingInstruction;

/// @brief Field Comment offset 0
static ::System::Xml::Schema::XmlTypeCode const Comment;

/// @brief Field Text offset 0
static ::System::Xml::Schema::XmlTypeCode const Text;

/// @brief Field AnyAtomicType offset 0
static ::System::Xml::Schema::XmlTypeCode const AnyAtomicType;

/// @brief Field UntypedAtomic offset 0
static ::System::Xml::Schema::XmlTypeCode const UntypedAtomic;

/// @brief Field String offset 0
static ::System::Xml::Schema::XmlTypeCode const String;

/// @brief Field Boolean offset 0
static ::System::Xml::Schema::XmlTypeCode const Boolean;

/// @brief Field Decimal offset 0
static ::System::Xml::Schema::XmlTypeCode const Decimal;

/// @brief Field Float offset 0
static ::System::Xml::Schema::XmlTypeCode const Float;

/// @brief Field Double offset 0
static ::System::Xml::Schema::XmlTypeCode const Double;

/// @brief Field Duration offset 0
static ::System::Xml::Schema::XmlTypeCode const Duration;

/// @brief Field DateTime offset 0
static ::System::Xml::Schema::XmlTypeCode const DateTime;

/// @brief Field Time offset 0
static ::System::Xml::Schema::XmlTypeCode const Time;

/// @brief Field Date offset 0
static ::System::Xml::Schema::XmlTypeCode const Date;

/// @brief Field GYearMonth offset 0
static ::System::Xml::Schema::XmlTypeCode const GYearMonth;

/// @brief Field GYear offset 0
static ::System::Xml::Schema::XmlTypeCode const GYear;

/// @brief Field GMonthDay offset 0
static ::System::Xml::Schema::XmlTypeCode const GMonthDay;

/// @brief Field GDay offset 0
static ::System::Xml::Schema::XmlTypeCode const GDay;

/// @brief Field GMonth offset 0
static ::System::Xml::Schema::XmlTypeCode const GMonth;

/// @brief Field HexBinary offset 0
static ::System::Xml::Schema::XmlTypeCode const HexBinary;

/// @brief Field Base64Binary offset 0
static ::System::Xml::Schema::XmlTypeCode const Base64Binary;

/// @brief Field AnyUri offset 0
static ::System::Xml::Schema::XmlTypeCode const AnyUri;

/// @brief Field QName offset 0
static ::System::Xml::Schema::XmlTypeCode const QName;

/// @brief Field Notation offset 0
static ::System::Xml::Schema::XmlTypeCode const Notation;

/// @brief Field NormalizedString offset 0
static ::System::Xml::Schema::XmlTypeCode const NormalizedString;

/// @brief Field Token offset 0
static ::System::Xml::Schema::XmlTypeCode const Token;

/// @brief Field Language offset 0
static ::System::Xml::Schema::XmlTypeCode const Language;

/// @brief Field NmToken offset 0
static ::System::Xml::Schema::XmlTypeCode const NmToken;

/// @brief Field Name offset 0
static ::System::Xml::Schema::XmlTypeCode const Name;

/// @brief Field NCName offset 0
static ::System::Xml::Schema::XmlTypeCode const NCName;

/// @brief Field Id offset 0
static ::System::Xml::Schema::XmlTypeCode const Id;

/// @brief Field Idref offset 0
static ::System::Xml::Schema::XmlTypeCode const Idref;

/// @brief Field Entity offset 0
static ::System::Xml::Schema::XmlTypeCode const Entity;

/// @brief Field Integer offset 0
static ::System::Xml::Schema::XmlTypeCode const Integer;

/// @brief Field NonPositiveInteger offset 0
static ::System::Xml::Schema::XmlTypeCode const NonPositiveInteger;

/// @brief Field NegativeInteger offset 0
static ::System::Xml::Schema::XmlTypeCode const NegativeInteger;

/// @brief Field Long offset 0
static ::System::Xml::Schema::XmlTypeCode const Long;

/// @brief Field Int offset 0
static ::System::Xml::Schema::XmlTypeCode const Int;

/// @brief Field Short offset 0
static ::System::Xml::Schema::XmlTypeCode const Short;

/// @brief Field Byte offset 0
static ::System::Xml::Schema::XmlTypeCode const Byte;

/// @brief Field NonNegativeInteger offset 0
static ::System::Xml::Schema::XmlTypeCode const NonNegativeInteger;

/// @brief Field UnsignedLong offset 0
static ::System::Xml::Schema::XmlTypeCode const UnsignedLong;

/// @brief Field UnsignedInt offset 0
static ::System::Xml::Schema::XmlTypeCode const UnsignedInt;

/// @brief Field UnsignedShort offset 0
static ::System::Xml::Schema::XmlTypeCode const UnsignedShort;

/// @brief Field UnsignedByte offset 0
static ::System::Xml::Schema::XmlTypeCode const UnsignedByte;

/// @brief Field PositiveInteger offset 0
static ::System::Xml::Schema::XmlTypeCode const PositiveInteger;

/// @brief Field YearMonthDuration offset 0
static ::System::Xml::Schema::XmlTypeCode const YearMonthDuration;

/// @brief Field DayTimeDuration offset 0
static ::System::Xml::Schema::XmlTypeCode const DayTimeDuration;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlTypeCode, "System.Xml.Schema", "XmlTypeCode");
