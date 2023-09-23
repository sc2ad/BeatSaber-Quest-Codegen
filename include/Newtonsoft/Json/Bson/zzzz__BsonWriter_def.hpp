#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Newtonsoft/Json/zzzz__JsonWriter_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace System {
struct DateTimeKind;
}
namespace Newtonsoft::Json::Bson {
struct BsonType;
}
namespace System::IO {
class Stream;
}
namespace System {
struct DateTime;
}
namespace System {
struct DateTimeOffset;
}
namespace Newtonsoft::Json::Bson {
class BsonBinaryWriter;
}
namespace System {
struct TimeSpan;
}
namespace Newtonsoft::Json {
struct JsonToken;
}
namespace System::IO {
class BinaryWriter;
}
namespace Newtonsoft::Json::Bson {
class BsonToken;
}
namespace System {
struct Decimal;
}
namespace System {
class Uri;
}
namespace System {
struct Guid;
}
// Forward declare root types
namespace Newtonsoft::Json::Bson {
class BsonWriter;
}
// Type: Newtonsoft.Json.Bson::BsonWriter
namespace Newtonsoft::Json::Bson {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11785))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12025))
// CS Name: Newtonsoft.Json.Bson.BsonWriter
class CORDL_TYPE BsonWriter : public Newtonsoft::Json::JsonWriter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~BsonWriter() = default;

// Ctor Parameters [CppParam { name: "", ty: "BsonWriter", modifiers: " const&", def_value: None }]
constexpr BsonWriter(BsonWriter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BsonWriter", modifiers: "&&", def_value: None }]
constexpr BsonWriter(BsonWriter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BsonWriter(void* ptr) noexcept : Newtonsoft::Json::JsonWriter(ptr) {
}


  constexpr BsonWriter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BsonWriter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BsonWriter& operator=(BsonWriter&& o) noexcept = default;
  constexpr BsonWriter& operator=(BsonWriter const& o) noexcept = default;
                


// Fields

 Newtonsoft::Json::Bson::BsonBinaryWriter __declspec(property(get=__get__writer, put=__set__writer))  _writer;

constexpr void __set__writer(Newtonsoft::Json::Bson::BsonBinaryWriter value) ;

constexpr Newtonsoft::Json::Bson::BsonBinaryWriter __get__writer() const;

 Newtonsoft::Json::Bson::BsonToken __declspec(property(get=__get__root, put=__set__root))  _root;

constexpr void __set__root(Newtonsoft::Json::Bson::BsonToken value) ;

constexpr Newtonsoft::Json::Bson::BsonToken __get__root() const;

 Newtonsoft::Json::Bson::BsonToken __declspec(property(get=__get__parent, put=__set__parent))  _parent;

constexpr void __set__parent(Newtonsoft::Json::Bson::BsonToken value) ;

constexpr Newtonsoft::Json::Bson::BsonToken __get__parent() const;

 ::StringW __declspec(property(get=__get__propertyName, put=__set__propertyName))  _propertyName;

constexpr void __set__propertyName(::StringW value) ;

constexpr ::StringW __get__propertyName() const;


// Properties

 System::DateTimeKind __declspec(property(get=get_DateTimeKindHandling, put=set_DateTimeKindHandling))  DateTimeKindHandling;


// Methods

/// @brief Method get_DateTimeKindHandling addr 0x2550534 size 0x1c virtual false final false
 System::DateTimeKind get_DateTimeKindHandling() ;

/// @brief Method set_DateTimeKindHandling addr 0x2550550 size 0x1c virtual false final false
 void set_DateTimeKindHandling(System::DateTimeKind value) ;

// Ctor Parameters [CppParam { name: "stream", ty: "System::IO::Stream", modifiers: "", def_value: None }]
explicit BsonWriter(System::IO::Stream stream) ;

/// @brief Method .ctor addr 0x255056c size 0xfc virtual false final false
 void _ctor(System::IO::Stream stream) ;

// Ctor Parameters [CppParam { name: "writer", ty: "System::IO::BinaryWriter", modifiers: "", def_value: None }]
explicit BsonWriter(System::IO::BinaryWriter writer) ;

/// @brief Method .ctor addr 0x2550668 size 0xcc virtual false final false
 void _ctor(System::IO::BinaryWriter writer) ;

/// @brief Method Flush addr 0x2550734 size 0x28 virtual true final false
 void Flush() ;

/// @brief Method WriteEnd addr 0x255075c size 0x70 virtual true final false
 void WriteEnd(Newtonsoft::Json::JsonToken token) ;

/// @brief Method WriteComment addr 0x25507ec size 0x44 virtual true final false
 void WriteComment(::StringW text) ;

/// @brief Method WriteStartConstructor addr 0x2550830 size 0x44 virtual true final false
 void WriteStartConstructor(::StringW name) ;

/// @brief Method WriteRaw addr 0x2550874 size 0x44 virtual true final false
 void WriteRaw(::StringW json) ;

/// @brief Method WriteRawValue addr 0x25508b8 size 0x44 virtual true final false
 void WriteRawValue(::StringW json) ;

/// @brief Method WriteStartArray addr 0x25508fc size 0x74 virtual true final false
 void WriteStartArray() ;

/// @brief Method WriteStartObject addr 0x2550994 size 0x74 virtual true final false
 void WriteStartObject() ;

/// @brief Method WritePropertyName addr 0x2550a08 size 0x28 virtual true final false
 void WritePropertyName(::StringW name) ;

/// @brief Method Close addr 0x2550a30 size 0x44 virtual true final false
 void Close() ;

/// @brief Method AddParent addr 0x2550970 size 0x24 virtual false final false
 void AddParent(Newtonsoft::Json::Bson::BsonToken container) ;

/// @brief Method RemoveParent addr 0x25507cc size 0x20 virtual false final false
 void RemoveParent() ;

/// @brief Method AddValue addr 0x2550c60 size 0x7c virtual false final false
 void AddValue(::bs_hook::Il2CppWrapperType value, Newtonsoft::Json::Bson::BsonType type) ;

/// @brief Method AddToken addr 0x2550a74 size 0x1ec virtual false final false
 void AddToken(Newtonsoft::Json::Bson::BsonToken token) ;

/// @brief Method WriteValue addr 0x2550cdc size 0x8 virtual true final false
 void WriteValue(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method WriteNull addr 0x2550ce4 size 0x24 virtual true final false
 void WriteNull() ;

/// @brief Method WriteUndefined addr 0x2550d08 size 0x24 virtual true final false
 void WriteUndefined() ;

/// @brief Method WriteValue addr 0x2550d2c size 0xa8 virtual true final false
 void WriteValue(::StringW value) ;

/// @brief Method WriteValue addr 0x2550dd4 size 0x7c virtual true final false
 void WriteValue(int32_t value) ;

/// @brief Method WriteValue addr 0x2550e50 size 0xbc virtual true final false
 void WriteValue(uint32_t value) ;

/// @brief Method WriteValue addr 0x2550f0c size 0x7c virtual true final false
 void WriteValue(int64_t value) ;

/// @brief Method WriteValue addr 0x2550f88 size 0xbc virtual true final false
 void WriteValue(uint64_t value) ;

/// @brief Method WriteValue addr 0x2551044 size 0x7c virtual true final false
 void WriteValue(float_t value) ;

/// @brief Method WriteValue addr 0x25510c0 size 0x7c virtual true final false
 void WriteValue(double_t value) ;

/// @brief Method WriteValue addr 0x255113c size 0x7c virtual true final false
 void WriteValue(bool value) ;

/// @brief Method WriteValue addr 0x25511b8 size 0x7c virtual true final false
 void WriteValue(int16_t value) ;

/// @brief Method WriteValue addr 0x2551234 size 0x7c virtual true final false
 void WriteValue(uint16_t value) ;

/// @brief Method WriteValue addr 0x25512b0 size 0xe0 virtual true final false
 void WriteValue(char16_t value) ;

/// @brief Method WriteValue addr 0x2551390 size 0x7c virtual true final false
 void WriteValue(uint8_t value) ;

/// @brief Method WriteValue addr 0x255140c size 0x7c virtual true final false
 void WriteValue(int8_t value) ;

/// @brief Method WriteValue addr 0x2551488 size 0xb4 virtual true final false
 void WriteValue(System::Decimal value) ;

/// @brief Method WriteValue addr 0x255153c size 0xb8 virtual true final false
 void WriteValue(System::DateTime value) ;

/// @brief Method WriteValue addr 0x25515f4 size 0x8c virtual true final false
 void WriteValue(System::DateTimeOffset value) ;

/// @brief Method WriteValue addr 0x2551680 size 0x8c virtual true final false
 void WriteValue(::ArrayW<uint8_t> value) ;

/// @brief Method WriteValue addr 0x255170c size 0xb8 virtual true final false
 void WriteValue(System::Guid value) ;

/// @brief Method WriteValue addr 0x25517c4 size 0xb0 virtual true final false
 void WriteValue(System::TimeSpan value) ;

/// @brief Method WriteValue addr 0x2551874 size 0xa8 virtual true final false
 void WriteValue(System::Uri value) ;

/// @brief Method WriteObjectId addr 0x255191c size 0xd4 virtual false final false
 void WriteObjectId(::ArrayW<uint8_t> value) ;

/// @brief Method WriteRegex addr 0x25519f0 size 0xc0 virtual false final false
 void WriteRegex(::StringW pattern, ::StringW options) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Bson
NEED_NO_BOX(Newtonsoft::Json::Bson::BsonWriter);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Bson::BsonWriter, "Newtonsoft.Json.Bson", "BsonWriter");
