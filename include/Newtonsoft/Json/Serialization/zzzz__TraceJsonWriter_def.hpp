#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Newtonsoft/Json/zzzz__JsonWriter_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace System {
struct DateTimeOffset;
}
namespace Newtonsoft::Json {
class JsonTextWriter;
}
namespace System::IO {
class StringWriter;
}
namespace Newtonsoft::Json {
class JsonWriter;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
struct DateTime;
}
namespace System {
struct Decimal;
}
namespace System {
struct Guid;
}
namespace System {
struct TimeSpan;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
class TraceJsonWriter;
}
// Type: Newtonsoft.Json.Serialization::TraceJsonWriter
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11785))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11853))
// CS Name: Newtonsoft.Json.Serialization.TraceJsonWriter
class CORDL_TYPE TraceJsonWriter : public Newtonsoft::Json::JsonWriter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x78};

virtual ~TraceJsonWriter() = default;

// Ctor Parameters [CppParam { name: "", ty: "TraceJsonWriter", modifiers: " const&", def_value: None }]
constexpr TraceJsonWriter(TraceJsonWriter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TraceJsonWriter", modifiers: "&&", def_value: None }]
constexpr TraceJsonWriter(TraceJsonWriter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TraceJsonWriter(void* ptr) noexcept : Newtonsoft::Json::JsonWriter(ptr) {
}


  constexpr TraceJsonWriter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TraceJsonWriter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TraceJsonWriter& operator=(TraceJsonWriter&& o) noexcept = default;
  constexpr TraceJsonWriter& operator=(TraceJsonWriter const& o) noexcept = default;
                


// Fields

 Newtonsoft::Json::JsonWriter __declspec(property(get=__get__innerWriter, put=__set__innerWriter))  _innerWriter;

constexpr void __set__innerWriter(Newtonsoft::Json::JsonWriter value) ;

constexpr Newtonsoft::Json::JsonWriter __get__innerWriter() const;

 Newtonsoft::Json::JsonTextWriter __declspec(property(get=__get__textWriter, put=__set__textWriter))  _textWriter;

constexpr void __set__textWriter(Newtonsoft::Json::JsonTextWriter value) ;

constexpr Newtonsoft::Json::JsonTextWriter __get__textWriter() const;

 System::IO::StringWriter __declspec(property(get=__get__sw, put=__set__sw))  _sw;

constexpr void __set__sw(System::IO::StringWriter value) ;

constexpr System::IO::StringWriter __get__sw() const;


// Methods

static Newtonsoft::Json::Serialization::TraceJsonWriter New_ctor(Newtonsoft::Json::JsonWriter innerWriter) ;

/// @brief Method .ctor addr 0x24f37d0 size 0x1c0 virtual false final false
 void _ctor(Newtonsoft::Json::JsonWriter innerWriter) ;

/// @brief Method GetSerializedJsonMessage addr 0x24f3990 size 0x20 virtual false final false
 ::StringW GetSerializedJsonMessage() ;

/// @brief Method WriteValue addr 0x24f39b0 size 0x78 virtual true final false
 void WriteValue(System::Decimal value) ;

/// @brief Method WriteValue addr 0x24f3a28 size 0x74 virtual true final false
 void WriteValue(bool value) ;

/// @brief Method WriteValue addr 0x24f3a9c size 0x70 virtual true final false
 void WriteValue(uint8_t value) ;

/// @brief Method WriteValue addr 0x24f3b0c size 0x60 virtual true final false
 void WriteValue(System::Nullable_1<uint8_t> value) ;

/// @brief Method WriteValue addr 0x24f3b6c size 0x70 virtual true final false
 void WriteValue(char16_t value) ;

/// @brief Method WriteValue addr 0x24f3bdc size 0x5c virtual true final false
 void WriteValue(::ArrayW<uint8_t> value) ;

/// @brief Method WriteValue addr 0x24f3c38 size 0x70 virtual true final false
 void WriteValue(System::DateTime value) ;

/// @brief Method WriteValue addr 0x24f3ca8 size 0x78 virtual true final false
 void WriteValue(System::DateTimeOffset value) ;

/// @brief Method WriteValue addr 0x24f3d20 size 0x70 virtual true final false
 void WriteValue(double_t value) ;

/// @brief Method WriteUndefined addr 0x24f3d90 size 0x60 virtual true final false
 void WriteUndefined() ;

/// @brief Method WriteNull addr 0x24f3df0 size 0x60 virtual true final false
 void WriteNull() ;

/// @brief Method WriteValue addr 0x24f3e50 size 0x70 virtual true final false
 void WriteValue(float_t value) ;

/// @brief Method WriteValue addr 0x24f3ec0 size 0x78 virtual true final false
 void WriteValue(System::Guid value) ;

/// @brief Method WriteValue addr 0x24f3f38 size 0x70 virtual true final false
 void WriteValue(int32_t value) ;

/// @brief Method WriteValue addr 0x24f3fa8 size 0x70 virtual true final false
 void WriteValue(int64_t value) ;

/// @brief Method WriteValue addr 0x24f4018 size 0x5c virtual true final false
 void WriteValue(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method WriteValue addr 0x24f4074 size 0x70 virtual true final false
 void WriteValue(int8_t value) ;

/// @brief Method WriteValue addr 0x24f40e4 size 0x70 virtual true final false
 void WriteValue(int16_t value) ;

/// @brief Method WriteValue addr 0x24f4154 size 0x70 virtual true final false
 void WriteValue(::StringW value) ;

/// @brief Method WriteValue addr 0x24f41c4 size 0x70 virtual true final false
 void WriteValue(System::TimeSpan value) ;

/// @brief Method WriteValue addr 0x24f4234 size 0x70 virtual true final false
 void WriteValue(uint32_t value) ;

/// @brief Method WriteValue addr 0x24f42a4 size 0x70 virtual true final false
 void WriteValue(uint64_t value) ;

/// @brief Method WriteValue addr 0x24f4314 size 0x5c virtual true final false
 void WriteValue(System::Uri value) ;

/// @brief Method WriteValue addr 0x24f4370 size 0x70 virtual true final false
 void WriteValue(uint16_t value) ;

/// @brief Method WriteWhitespace addr 0x24f43e0 size 0x5c virtual true final false
 void WriteWhitespace(::StringW ws) ;

/// @brief Method WriteComment addr 0x24f443c size 0x5c virtual true final false
 void WriteComment(::StringW text) ;

/// @brief Method WriteStartArray addr 0x24f4498 size 0x48 virtual true final false
 void WriteStartArray() ;

/// @brief Method WriteEndArray addr 0x24f44e0 size 0x44 virtual true final false
 void WriteEndArray() ;

/// @brief Method WriteStartConstructor addr 0x24f4524 size 0x58 virtual true final false
 void WriteStartConstructor(::StringW name) ;

/// @brief Method WriteEndConstructor addr 0x24f457c size 0x4c virtual true final false
 void WriteEndConstructor() ;

/// @brief Method WritePropertyName addr 0x24f45c8 size 0x60 virtual true final false
 void WritePropertyName(::StringW name) ;

/// @brief Method WritePropertyName addr 0x24f4628 size 0x6c virtual true final false
 void WritePropertyName(::StringW name, bool escape) ;

/// @brief Method WriteStartObject addr 0x24f4694 size 0x48 virtual true final false
 void WriteStartObject() ;

/// @brief Method WriteEndObject addr 0x24f46dc size 0x44 virtual true final false
 void WriteEndObject() ;

/// @brief Method WriteRawValue addr 0x24f4720 size 0x70 virtual true final false
 void WriteRawValue(::StringW json) ;

/// @brief Method WriteRaw addr 0x24f4790 size 0x50 virtual true final false
 void WriteRaw(::StringW json) ;

/// @brief Method Close addr 0x24f47e0 size 0x40 virtual true final false
 void Close() ;

/// @brief Method Flush addr 0x24f4820 size 0x1038 virtual true final false
 void Flush() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Serialization
NEED_NO_BOX(Newtonsoft::Json::Serialization::TraceJsonWriter);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Serialization::TraceJsonWriter, "Newtonsoft.Json.Serialization", "TraceJsonWriter");
