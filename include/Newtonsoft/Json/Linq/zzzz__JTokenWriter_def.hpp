#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Newtonsoft/Json/zzzz__JsonWriter_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace Newtonsoft::Json::Linq {
class JValue;
}
namespace Newtonsoft::Json::Linq {
class JContainer;
}
namespace System {
struct TimeSpan;
}
namespace System {
struct DateTime;
}
namespace Newtonsoft::Json {
struct JsonToken;
}
namespace System {
struct Guid;
}
namespace System {
struct DateTimeOffset;
}
namespace System {
class Uri;
}
namespace Newtonsoft::Json {
class JsonReader;
}
namespace System {
struct Decimal;
}
namespace Newtonsoft::Json::Linq {
class JToken;
}
// Forward declare root types
namespace Newtonsoft::Json::Linq {
class JTokenWriter;
}
// Type: Newtonsoft.Json.Linq::JTokenWriter
namespace Newtonsoft::Json::Linq {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11785))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11937))
// CS Name: Newtonsoft.Json.Linq.JTokenWriter
class CORDL_TYPE JTokenWriter : public Newtonsoft::Json::JsonWriter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~JTokenWriter() = default;

// Ctor Parameters [CppParam { name: "", ty: "JTokenWriter", modifiers: " const&", def_value: None }]
constexpr JTokenWriter(JTokenWriter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "JTokenWriter", modifiers: "&&", def_value: None }]
constexpr JTokenWriter(JTokenWriter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit JTokenWriter(void* ptr) noexcept : Newtonsoft::Json::JsonWriter(ptr) {
}


  constexpr JTokenWriter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr JTokenWriter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr JTokenWriter& operator=(JTokenWriter&& o) noexcept = default;
  constexpr JTokenWriter& operator=(JTokenWriter const& o) noexcept = default;
                


// Fields

 Newtonsoft::Json::Linq::JContainer __declspec(property(get=__get__token, put=__set__token))  _token;

constexpr void __set__token(Newtonsoft::Json::Linq::JContainer value) ;

constexpr Newtonsoft::Json::Linq::JContainer __get__token() const;

 Newtonsoft::Json::Linq::JContainer __declspec(property(get=__get__parent, put=__set__parent))  _parent;

constexpr void __set__parent(Newtonsoft::Json::Linq::JContainer value) ;

constexpr Newtonsoft::Json::Linq::JContainer __get__parent() const;

 Newtonsoft::Json::Linq::JValue __declspec(property(get=__get__value, put=__set__value))  _value;

constexpr void __set__value(Newtonsoft::Json::Linq::JValue value) ;

constexpr Newtonsoft::Json::Linq::JValue __get__value() const;

 Newtonsoft::Json::Linq::JToken __declspec(property(get=__get__current, put=__set__current))  _current;

constexpr void __set__current(Newtonsoft::Json::Linq::JToken value) ;

constexpr Newtonsoft::Json::Linq::JToken __get__current() const;


// Properties

 Newtonsoft::Json::Linq::JToken __declspec(property(get=get_CurrentToken))  CurrentToken;

 Newtonsoft::Json::Linq::JToken __declspec(property(get=get_Token))  Token;


// Methods

/// @brief Method get_CurrentToken addr 0x2524bd0 size 0x8 virtual false final false
 Newtonsoft::Json::Linq::JToken get_CurrentToken() ;

/// @brief Method get_Token addr 0x2524bd8 size 0x1c virtual false final false
 Newtonsoft::Json::Linq::JToken get_Token() ;

// Ctor Parameters [CppParam { name: "container", ty: "Newtonsoft::Json::Linq::JContainer", modifiers: "", def_value: None }]
explicit JTokenWriter(Newtonsoft::Json::Linq::JContainer container) ;

/// @brief Method .ctor addr 0x251e660 size 0x90 virtual false final false
 void _ctor(Newtonsoft::Json::Linq::JContainer container) ;

// Ctor Parameters []
explicit JTokenWriter() ;

/// @brief Method .ctor addr 0x2524bf4 size 0x58 virtual false final false
 void _ctor() ;

/// @brief Method Flush addr 0x2524c4c size 0x4 virtual true final false
 void Flush() ;

/// @brief Method Close addr 0x2524c50 size 0x8 virtual true final false
 void Close() ;

/// @brief Method WriteStartObject addr 0x2524c58 size 0x84 virtual true final false
 void WriteStartObject() ;

/// @brief Method AddParent addr 0x2524cdc size 0x3c virtual false final false
 void AddParent(Newtonsoft::Json::Linq::JContainer container) ;

/// @brief Method RemoveParent addr 0x2524d18 size 0x54 virtual false final false
 void RemoveParent() ;

/// @brief Method WriteStartArray addr 0x2524d6c size 0x84 virtual true final false
 void WriteStartArray() ;

/// @brief Method WriteStartConstructor addr 0x2524df0 size 0x98 virtual true final false
 void WriteStartConstructor(::StringW name) ;

/// @brief Method WriteEnd addr 0x2524e88 size 0x4 virtual true final false
 void WriteEnd(Newtonsoft::Json::JsonToken token) ;

/// @brief Method WritePropertyName addr 0x2524e8c size 0xe0 virtual true final false
 void WritePropertyName(::StringW name) ;

/// @brief Method AddValue addr 0x2524f6c size 0x74 virtual false final false
 void AddValue(::bs_hook::Il2CppWrapperType value, Newtonsoft::Json::JsonToken token) ;

/// @brief Method AddValue addr 0x2524fe0 size 0x94 virtual false final false
 void AddValue(Newtonsoft::Json::Linq::JValue value, Newtonsoft::Json::JsonToken token) ;

/// @brief Method WriteValue addr 0x2525074 size 0x8 virtual true final false
 void WriteValue(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method WriteNull addr 0x252507c size 0x20 virtual true final false
 void WriteNull() ;

/// @brief Method WriteUndefined addr 0x252509c size 0x20 virtual true final false
 void WriteUndefined() ;

/// @brief Method WriteRaw addr 0x25250bc size 0x88 virtual true final false
 void WriteRaw(::StringW json) ;

/// @brief Method WriteComment addr 0x2525144 size 0x38 virtual true final false
 void WriteComment(::StringW text) ;

/// @brief Method WriteValue addr 0x252517c size 0x30 virtual true final false
 void WriteValue(::StringW value) ;

/// @brief Method WriteValue addr 0x25251ac size 0x7c virtual true final false
 void WriteValue(int32_t value) ;

/// @brief Method WriteValue addr 0x2525228 size 0x7c virtual true final false
 void WriteValue(uint32_t value) ;

/// @brief Method WriteValue addr 0x25252a4 size 0x7c virtual true final false
 void WriteValue(int64_t value) ;

/// @brief Method WriteValue addr 0x2525320 size 0x7c virtual true final false
 void WriteValue(uint64_t value) ;

/// @brief Method WriteValue addr 0x252539c size 0x7c virtual true final false
 void WriteValue(float_t value) ;

/// @brief Method WriteValue addr 0x2525418 size 0x7c virtual true final false
 void WriteValue(double_t value) ;

/// @brief Method WriteValue addr 0x2525494 size 0x7c virtual true final false
 void WriteValue(bool value) ;

/// @brief Method WriteValue addr 0x2525510 size 0x7c virtual true final false
 void WriteValue(int16_t value) ;

/// @brief Method WriteValue addr 0x252558c size 0x7c virtual true final false
 void WriteValue(uint16_t value) ;

/// @brief Method WriteValue addr 0x2525608 size 0x98 virtual true final false
 void WriteValue(char16_t value) ;

/// @brief Method WriteValue addr 0x25256a0 size 0x7c virtual true final false
 void WriteValue(uint8_t value) ;

/// @brief Method WriteValue addr 0x252571c size 0x7c virtual true final false
 void WriteValue(int8_t value) ;

/// @brief Method WriteValue addr 0x2525798 size 0xb4 virtual true final false
 void WriteValue(System::Decimal value) ;

/// @brief Method WriteValue addr 0x252584c size 0xb8 virtual true final false
 void WriteValue(System::DateTime value) ;

/// @brief Method WriteValue addr 0x2525904 size 0x8c virtual true final false
 void WriteValue(System::DateTimeOffset value) ;

/// @brief Method WriteValue addr 0x2525990 size 0x30 virtual true final false
 void WriteValue(::ArrayW<uint8_t> value) ;

/// @brief Method WriteValue addr 0x25259c0 size 0x7c virtual true final false
 void WriteValue(System::TimeSpan value) ;

/// @brief Method WriteValue addr 0x2525a3c size 0x8c virtual true final false
 void WriteValue(System::Guid value) ;

/// @brief Method WriteValue addr 0x2525ac8 size 0x30 virtual true final false
 void WriteValue(System::Uri value) ;

/// @brief Method WriteToken addr 0x2525af8 size 0x268 virtual true final false
 void WriteToken(Newtonsoft::Json::JsonReader reader, bool writeChildren, bool writeDateConstructorAsDate, bool writeComments) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Linq
NEED_NO_BOX(Newtonsoft::Json::Linq::JTokenWriter);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Linq::JTokenWriter, "Newtonsoft.Json.Linq", "JTokenWriter");
