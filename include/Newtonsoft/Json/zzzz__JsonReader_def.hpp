#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace System::Globalization {
class CultureInfo;
}
namespace Newtonsoft::Json {
struct JsonPosition;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Newtonsoft::Json {
struct Newtonsoft__Json__JsonReader__State;
}
namespace Newtonsoft::Json {
struct DateParseHandling;
}
namespace Newtonsoft::Json {
struct JsonContainerType;
}
namespace System {
class IDisposable;
}
namespace System {
class Type;
}
namespace System {
struct DateTime;
}
namespace Newtonsoft::Json {
struct DateTimeZoneHandling;
}
namespace Newtonsoft::Json {
struct FloatParseHandling;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
struct Decimal;
}
namespace Newtonsoft::Json {
class JsonReaderException;
}
namespace System {
struct DateTimeOffset;
}
namespace Newtonsoft::Json {
struct JsonToken;
}
// Forward declare root types
namespace Newtonsoft::Json {
struct Newtonsoft__Json__JsonReader__State;
}
namespace Newtonsoft::Json {
class JsonReader;
}
// Type: ::State
namespace Newtonsoft::Json {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11774))
// CS Name: Newtonsoft.Json.JsonReader::State
struct CORDL_TYPE Newtonsoft__Json__JsonReader__State : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Newtonsoft__Json__JsonReader__State(int32_t value__) noexcept;


                    constexpr Newtonsoft__Json__JsonReader__State(Newtonsoft__Json__JsonReader__State const&) = default;
                    constexpr Newtonsoft__Json__JsonReader__State(Newtonsoft__Json__JsonReader__State&&) = default;
                    constexpr Newtonsoft__Json__JsonReader__State& operator=(Newtonsoft__Json__JsonReader__State const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Newtonsoft__Json__JsonReader__State& operator=(Newtonsoft__Json__JsonReader__State&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Newtonsoft__Json__JsonReader__State(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __Newtonsoft__Json__JsonReader__State_Unwrapped : int32_t {
__Start = 0,
__Complete = 1,
__Property = 2,
__ObjectStart = 3,
__Object = 4,
__ArrayStart = 5,
__Array = 6,
__Closed = 7,
__PostValue = 8,
__ConstructorStart = 9,
__Constructor = 10,
__Error = 11,
__Finished = 12,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Newtonsoft__Json__JsonReader__State_Unwrapped () const noexcept {
return std::bit_cast<__Newtonsoft__Json__JsonReader__State_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Start offset 0
static Newtonsoft::Json::Newtonsoft__Json__JsonReader__State const Start;

/// @brief Field Complete offset 0
static Newtonsoft::Json::Newtonsoft__Json__JsonReader__State const Complete;

/// @brief Field Property offset 0
static Newtonsoft::Json::Newtonsoft__Json__JsonReader__State const Property;

/// @brief Field ObjectStart offset 0
static Newtonsoft::Json::Newtonsoft__Json__JsonReader__State const ObjectStart;

/// @brief Field Object offset 0
static Newtonsoft::Json::Newtonsoft__Json__JsonReader__State const Object;

/// @brief Field ArrayStart offset 0
static Newtonsoft::Json::Newtonsoft__Json__JsonReader__State const ArrayStart;

/// @brief Field Array offset 0
static Newtonsoft::Json::Newtonsoft__Json__JsonReader__State const Array;

/// @brief Field Closed offset 0
static Newtonsoft::Json::Newtonsoft__Json__JsonReader__State const Closed;

/// @brief Field PostValue offset 0
static Newtonsoft::Json::Newtonsoft__Json__JsonReader__State const PostValue;

/// @brief Field ConstructorStart offset 0
static Newtonsoft::Json::Newtonsoft__Json__JsonReader__State const ConstructorStart;

/// @brief Field Constructor offset 0
static Newtonsoft::Json::Newtonsoft__Json__JsonReader__State const Constructor;

/// @brief Field Error offset 0
static Newtonsoft::Json::Newtonsoft__Json__JsonReader__State const Error;

/// @brief Field Finished offset 0
static Newtonsoft::Json::Newtonsoft__Json__JsonReader__State const Finished;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json
// Type: Newtonsoft.Json::JsonReader
namespace Newtonsoft::Json {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11775))
// CS Name: Newtonsoft.Json.JsonReader
class CORDL_TYPE JsonReader : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using State = Newtonsoft::Json::Newtonsoft__Json__JsonReader__State;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x78};

virtual ~JsonReader() = default;

// Ctor Parameters [CppParam { name: "", ty: "JsonReader", modifiers: " const&", def_value: None }]
constexpr JsonReader(JsonReader const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "JsonReader", modifiers: "&&", def_value: None }]
constexpr JsonReader(JsonReader&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit JsonReader(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr JsonReader& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr JsonReader& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr JsonReader& operator=(JsonReader&& o) noexcept = default;
  constexpr JsonReader& operator=(JsonReader const& o) noexcept = default;
                


// Fields

 Newtonsoft::Json::JsonToken __declspec(property(get=__get__tokenType, put=__set__tokenType))  _tokenType;

constexpr void __set__tokenType(Newtonsoft::Json::JsonToken value) ;

constexpr Newtonsoft::Json::JsonToken __get__tokenType() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__value, put=__set__value))  _value;

constexpr void __set__value(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__value() const;

 char16_t __declspec(property(get=__get__quoteChar, put=__set__quoteChar))  _quoteChar;

constexpr void __set__quoteChar(char16_t value) ;

constexpr char16_t __get__quoteChar() const;

 Newtonsoft::Json::Newtonsoft__Json__JsonReader__State __declspec(property(get=__get__currentState, put=__set__currentState))  _currentState;

constexpr void __set__currentState(Newtonsoft::Json::Newtonsoft__Json__JsonReader__State value) ;

constexpr Newtonsoft::Json::Newtonsoft__Json__JsonReader__State __get__currentState() const;

 Newtonsoft::Json::JsonPosition __declspec(property(get=__get__currentPosition, put=__set__currentPosition))  _currentPosition;

constexpr void __set__currentPosition(Newtonsoft::Json::JsonPosition value) ;

constexpr Newtonsoft::Json::JsonPosition __get__currentPosition() const;

 System::Globalization::CultureInfo __declspec(property(get=__get__culture, put=__set__culture))  _culture;

constexpr void __set__culture(System::Globalization::CultureInfo value) ;

constexpr System::Globalization::CultureInfo __get__culture() const;

 Newtonsoft::Json::DateTimeZoneHandling __declspec(property(get=__get__dateTimeZoneHandling, put=__set__dateTimeZoneHandling))  _dateTimeZoneHandling;

constexpr void __set__dateTimeZoneHandling(Newtonsoft::Json::DateTimeZoneHandling value) ;

constexpr Newtonsoft::Json::DateTimeZoneHandling __get__dateTimeZoneHandling() const;

 System::Nullable_1<int32_t> __declspec(property(get=__get__maxDepth, put=__set__maxDepth))  _maxDepth;

constexpr void __set__maxDepth(System::Nullable_1<int32_t> value) ;

constexpr System::Nullable_1<int32_t> __get__maxDepth() const;

 bool __declspec(property(get=__get__hasExceededMaxDepth, put=__set__hasExceededMaxDepth))  _hasExceededMaxDepth;

constexpr void __set__hasExceededMaxDepth(bool value) ;

constexpr bool __get__hasExceededMaxDepth() const;

 Newtonsoft::Json::DateParseHandling __declspec(property(get=__get__dateParseHandling, put=__set__dateParseHandling))  _dateParseHandling;

constexpr void __set__dateParseHandling(Newtonsoft::Json::DateParseHandling value) ;

constexpr Newtonsoft::Json::DateParseHandling __get__dateParseHandling() const;

 Newtonsoft::Json::FloatParseHandling __declspec(property(get=__get__floatParseHandling, put=__set__floatParseHandling))  _floatParseHandling;

constexpr void __set__floatParseHandling(Newtonsoft::Json::FloatParseHandling value) ;

constexpr Newtonsoft::Json::FloatParseHandling __get__floatParseHandling() const;

 ::StringW __declspec(property(get=__get__dateFormatString, put=__set__dateFormatString))  _dateFormatString;

constexpr void __set__dateFormatString(::StringW value) ;

constexpr ::StringW __get__dateFormatString() const;

 System::Collections::Generic::List_1<Newtonsoft::Json::JsonPosition> __declspec(property(get=__get__stack, put=__set__stack))  _stack;

constexpr void __set__stack(System::Collections::Generic::List_1<Newtonsoft::Json::JsonPosition> value) ;

constexpr System::Collections::Generic::List_1<Newtonsoft::Json::JsonPosition> __get__stack() const;

 bool __declspec(property(get=__get__CloseInput_k__BackingField, put=__set__CloseInput_k__BackingField))  _CloseInput_k__BackingField;

constexpr void __set__CloseInput_k__BackingField(bool value) ;

constexpr bool __get__CloseInput_k__BackingField() const;

 bool __declspec(property(get=__get__SupportMultipleContent_k__BackingField, put=__set__SupportMultipleContent_k__BackingField))  _SupportMultipleContent_k__BackingField;

constexpr void __set__SupportMultipleContent_k__BackingField(bool value) ;

constexpr bool __get__SupportMultipleContent_k__BackingField() const;


// Properties

 Newtonsoft::Json::Newtonsoft__Json__JsonReader__State __declspec(property(get=get_CurrentState))  CurrentState;

 bool __declspec(property(get=get_CloseInput, put=set_CloseInput))  CloseInput;

 bool __declspec(property(get=get_SupportMultipleContent, put=set_SupportMultipleContent))  SupportMultipleContent;

 char16_t __declspec(property(get=get_QuoteChar, put=set_QuoteChar))  QuoteChar;

 Newtonsoft::Json::DateTimeZoneHandling __declspec(property(get=get_DateTimeZoneHandling, put=set_DateTimeZoneHandling))  DateTimeZoneHandling;

 Newtonsoft::Json::DateParseHandling __declspec(property(get=get_DateParseHandling, put=set_DateParseHandling))  DateParseHandling;

 Newtonsoft::Json::FloatParseHandling __declspec(property(get=get_FloatParseHandling, put=set_FloatParseHandling))  FloatParseHandling;

 ::StringW __declspec(property(get=get_DateFormatString, put=set_DateFormatString))  DateFormatString;

 System::Nullable_1<int32_t> __declspec(property(get=get_MaxDepth, put=set_MaxDepth))  MaxDepth;

 Newtonsoft::Json::JsonToken __declspec(property(get=get_TokenType))  TokenType;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_Value))  Value;

 System::Type __declspec(property(get=get_ValueType))  ValueType;

 int32_t __declspec(property(get=get_Depth))  Depth;

 ::StringW __declspec(property(get=get_Path))  Path;

 System::Globalization::CultureInfo __declspec(property(get=get_Culture, put=set_Culture))  Culture;


// Methods

/// @brief Method get_CurrentState addr 0x24d353c size 0x8 virtual false final false
 Newtonsoft::Json::Newtonsoft__Json__JsonReader__State get_CurrentState() ;

/// @brief Method get_CloseInput addr 0x24d3544 size 0x8 virtual false final false
 bool get_CloseInput() ;

/// @brief Method set_CloseInput addr 0x24d354c size 0xc virtual false final false
 void set_CloseInput(bool value) ;

/// @brief Method get_SupportMultipleContent addr 0x24d3558 size 0x8 virtual false final false
 bool get_SupportMultipleContent() ;

/// @brief Method set_SupportMultipleContent addr 0x24d3560 size 0xc virtual false final false
 void set_SupportMultipleContent(bool value) ;

/// @brief Method get_QuoteChar addr 0x24d356c size 0x8 virtual true final false
 char16_t get_QuoteChar() ;

/// @brief Method set_QuoteChar addr 0x24d3574 size 0x8 virtual true final false
 void set_QuoteChar(char16_t value) ;

/// @brief Method get_DateTimeZoneHandling addr 0x24d357c size 0x8 virtual false final false
 Newtonsoft::Json::DateTimeZoneHandling get_DateTimeZoneHandling() ;

/// @brief Method set_DateTimeZoneHandling addr 0x24d3584 size 0x64 virtual false final false
 void set_DateTimeZoneHandling(Newtonsoft::Json::DateTimeZoneHandling value) ;

/// @brief Method get_DateParseHandling addr 0x24d35e8 size 0x8 virtual false final false
 Newtonsoft::Json::DateParseHandling get_DateParseHandling() ;

/// @brief Method set_DateParseHandling addr 0x24d35f0 size 0x64 virtual false final false
 void set_DateParseHandling(Newtonsoft::Json::DateParseHandling value) ;

/// @brief Method get_FloatParseHandling addr 0x24d3654 size 0x8 virtual false final false
 Newtonsoft::Json::FloatParseHandling get_FloatParseHandling() ;

/// @brief Method set_FloatParseHandling addr 0x24d365c size 0x64 virtual false final false
 void set_FloatParseHandling(Newtonsoft::Json::FloatParseHandling value) ;

/// @brief Method get_DateFormatString addr 0x24d36c0 size 0x8 virtual false final false
 ::StringW get_DateFormatString() ;

/// @brief Method set_DateFormatString addr 0x24d36c8 size 0x8 virtual false final false
 void set_DateFormatString(::StringW value) ;

/// @brief Method get_MaxDepth addr 0x24d36d0 size 0x8 virtual false final false
 System::Nullable_1<int32_t> get_MaxDepth() ;

/// @brief Method set_MaxDepth addr 0x24d36d8 size 0xc0 virtual false final false
 void set_MaxDepth(System::Nullable_1<int32_t> value) ;

/// @brief Method get_TokenType addr 0x24d3798 size 0x8 virtual true final false
 Newtonsoft::Json::JsonToken get_TokenType() ;

/// @brief Method get_Value addr 0x24d37a0 size 0x8 virtual true final false
 ::bs_hook::Il2CppWrapperType get_Value() ;

/// @brief Method get_ValueType addr 0x24d37a8 size 0x14 virtual true final false
 System::Type get_ValueType() ;

/// @brief Method get_Depth addr 0x24d37bc size 0x7c virtual true final false
 int32_t get_Depth() ;

/// @brief Method get_Path addr 0x24d3838 size 0x120 virtual true final false
 ::StringW get_Path() ;

/// @brief Method get_Culture addr 0x24ca47c size 0x68 virtual false final false
 System::Globalization::CultureInfo get_Culture() ;

/// @brief Method set_Culture addr 0x24d3958 size 0x8 virtual false final false
 void set_Culture(System::Globalization::CultureInfo value) ;

/// @brief Method GetPosition addr 0x24d3960 size 0xa4 virtual false final false
 Newtonsoft::Json::JsonPosition GetPosition(int32_t depth) ;

static Newtonsoft::Json::JsonReader New_ctor() ;

/// @brief Method .ctor addr 0x24c98e8 size 0x38 virtual false final false
 void _ctor() ;

/// @brief Method Push addr 0x24d3a04 size 0x288 virtual false final false
 void Push(Newtonsoft::Json::JsonContainerType value) ;

/// @brief Method Pop addr 0x24d3ca4 size 0x11c virtual false final false
 Newtonsoft::Json::JsonContainerType Pop() ;

/// @brief Method Peek addr 0x24d3dc0 size 0x8 virtual false final false
 Newtonsoft::Json::JsonContainerType Peek() ;

/// @brief Method Read addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Read() ;

/// @brief Method ReadAsInt32 addr 0x24d3dc8 size 0x2dc virtual true final false
 System::Nullable_1<int32_t> ReadAsInt32() ;

/// @brief Method ReadInt32String addr 0x24cefd4 size 0x1e8 virtual false final false
 System::Nullable_1<int32_t> ReadInt32String(::StringW s) ;

/// @brief Method ReadAsString addr 0x24d4118 size 0x368 virtual true final false
 ::StringW ReadAsString() ;

/// @brief Method ReadAsBytes addr 0x24d4480 size 0x3f8 virtual true final false
 ::ArrayW<uint8_t> ReadAsBytes() ;

/// @brief Method ReadArrayIntoByteArray addr 0x24cca00 size 0x29c virtual false final false
 ::ArrayW<uint8_t> ReadArrayIntoByteArray() ;

/// @brief Method ReadAsDouble addr 0x24d4878 size 0x2cc virtual true final false
 System::Nullable_1<double_t> ReadAsDouble() ;

/// @brief Method ReadDoubleString addr 0x24cf3e8 size 0x1dc virtual false final false
 System::Nullable_1<double_t> ReadDoubleString(::StringW s) ;

/// @brief Method ReadAsBoolean addr 0x24d4b44 size 0x2c0 virtual true final false
 System::Nullable_1<bool> ReadAsBoolean() ;

/// @brief Method ReadBooleanString addr 0x24cecfc size 0x1e8 virtual false final false
 System::Nullable_1<bool> ReadBooleanString(::StringW s) ;

/// @brief Method ReadAsDecimal addr 0x24d4e04 size 0x310 virtual true final false
 System::Nullable_1<System::Decimal> ReadAsDecimal() ;

/// @brief Method ReadDecimalString addr 0x24cf1bc size 0x22c virtual false final false
 System::Nullable_1<System::Decimal> ReadDecimalString(::StringW s) ;

/// @brief Method ReadAsDateTime addr 0x24d5114 size 0x2c0 virtual true final false
 System::Nullable_1<System::DateTime> ReadAsDateTime() ;

/// @brief Method ReadDateTimeString addr 0x24cd080 size 0x288 virtual false final false
 System::Nullable_1<System::DateTime> ReadDateTimeString(::StringW s) ;

/// @brief Method ReadAsDateTimeOffset addr 0x24d53d4 size 0x2cc virtual true final false
 System::Nullable_1<System::DateTimeOffset> ReadAsDateTimeOffset() ;

/// @brief Method ReadDateTimeOffsetString addr 0x24cd308 size 0x268 virtual false final false
 System::Nullable_1<System::DateTimeOffset> ReadDateTimeOffsetString(::StringW s) ;

/// @brief Method ReaderReadAndAssert addr 0x24cc804 size 0x44 virtual false final false
 void ReaderReadAndAssert() ;

/// @brief Method CreateUnexpectedEndException addr 0x24cf8bc size 0x4c virtual false final false
 Newtonsoft::Json::JsonReaderException CreateUnexpectedEndException() ;

/// @brief Method ReadIntoWrappedTypeObject addr 0x24cc848 size 0x1b8 virtual false final false
 void ReadIntoWrappedTypeObject() ;

/// @brief Method Skip addr 0x24d56a0 size 0x98 virtual false final false
 void Skip() ;

/// @brief Method SetToken addr 0x24cb348 size 0xc virtual false final false
 void SetToken(Newtonsoft::Json::JsonToken newToken) ;

/// @brief Method SetToken addr 0x24ce554 size 0x8 virtual false final false
 void SetToken(Newtonsoft::Json::JsonToken newToken, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method SetToken addr 0x24ca324 size 0x158 virtual false final false
 void SetToken(Newtonsoft::Json::JsonToken newToken, ::bs_hook::Il2CppWrapperType value, bool updateIndex) ;

/// @brief Method SetPostValueState addr 0x24ca2e4 size 0x40 virtual false final false
 void SetPostValueState(bool updateIndex) ;

/// @brief Method UpdateScopeWithFinishedValue addr 0x24d3c8c size 0x18 virtual false final false
 void UpdateScopeWithFinishedValue() ;

/// @brief Method ValidateEnd addr 0x24d5738 size 0x100 virtual false final false
 void ValidateEnd(Newtonsoft::Json::JsonToken endToken) ;

/// @brief Method SetStateBasedOnCurrent addr 0x24ceee4 size 0xf0 virtual false final false
 void SetStateBasedOnCurrent() ;

/// @brief Method SetFinished addr 0x24d5838 size 0x18 virtual false final false
 void SetFinished() ;

/// @brief Method GetTypeForCloseToken addr 0x24d5850 size 0xa8 virtual false final false
 Newtonsoft::Json::JsonContainerType GetTypeForCloseToken(Newtonsoft::Json::JsonToken token) ;

/// @brief Method System.IDisposable.Dispose addr 0x24d58f8 size 0x70 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method Dispose addr 0x24d5968 size 0x24 virtual true final false
 void Dispose(bool disposing) ;

/// @brief Method Close addr 0x24d09cc size 0x14 virtual true final false
 void Close() ;

/// @brief Method ReadAndAssert addr 0x24d598c size 0x54 virtual false final false
 void ReadAndAssert() ;

/// @brief Method ReadAndMoveToContent addr 0x24d59e8 size 0x30 virtual false final false
 bool ReadAndMoveToContent() ;

/// @brief Method MoveToContent addr 0x24d5a18 size 0x58 virtual false final false
 bool MoveToContent() ;

/// @brief Method GetContentToken addr 0x24d40a4 size 0x74 virtual false final false
 Newtonsoft::Json::JsonToken GetContentToken() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Newtonsoft__Json__JsonReader__State, "Newtonsoft.Json", "JsonReader/State");
NEED_NO_BOX(Newtonsoft::Json::JsonReader);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::JsonReader, "Newtonsoft.Json", "JsonReader");
