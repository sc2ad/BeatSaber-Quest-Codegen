#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::IO {
class BinaryWriter;
}
namespace Newtonsoft::Json::Bson {
class BsonToken;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System::Text {
class Encoding;
}
namespace System {
struct DateTimeKind;
}
// Forward declare root types
namespace Newtonsoft::Json::Bson {
class BsonBinaryWriter;
}
// Type: Newtonsoft.Json.Bson::BsonBinaryWriter
namespace Newtonsoft::Json::Bson {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12012))
// CS Name: Newtonsoft.Json.Bson.BsonBinaryWriter
class CORDL_TYPE BsonBinaryWriter : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~BsonBinaryWriter() = default;

// Ctor Parameters [CppParam { name: "", ty: "BsonBinaryWriter", modifiers: " const&", def_value: None }]
constexpr BsonBinaryWriter(BsonBinaryWriter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BsonBinaryWriter", modifiers: "&&", def_value: None }]
constexpr BsonBinaryWriter(BsonBinaryWriter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BsonBinaryWriter(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BsonBinaryWriter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BsonBinaryWriter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BsonBinaryWriter& operator=(BsonBinaryWriter&& o) noexcept = default;
  constexpr BsonBinaryWriter& operator=(BsonBinaryWriter const& o) noexcept = default;
                


// Fields

static ::System::Text::Encoding __declspec(property(get=__get_Encoding, put=__set_Encoding))  Encoding;

static void __set_Encoding(::System::Text::Encoding value) ;

static ::System::Text::Encoding __get_Encoding() ;

 ::System::IO::BinaryWriter __declspec(property(get=__get__writer, put=__set__writer))  _writer;

constexpr void __set__writer(::System::IO::BinaryWriter value) ;

constexpr ::System::IO::BinaryWriter __get__writer() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get__largeByteBuffer, put=__set__largeByteBuffer))  _largeByteBuffer;

constexpr void __set__largeByteBuffer(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get__largeByteBuffer() const;

 ::System::DateTimeKind __declspec(property(get=__get__DateTimeKindHandling_k__BackingField, put=__set__DateTimeKindHandling_k__BackingField))  _DateTimeKindHandling_k__BackingField;

constexpr void __set__DateTimeKindHandling_k__BackingField(::System::DateTimeKind value) ;

constexpr ::System::DateTimeKind __get__DateTimeKindHandling_k__BackingField() const;


// Properties

 ::System::DateTimeKind __declspec(property(get=get_DateTimeKindHandling, put=set_DateTimeKindHandling))  DateTimeKindHandling;


// Methods

/// @brief Method get_DateTimeKindHandling addr 0x254c968 size 0x8 virtual false final false
 ::System::DateTimeKind get_DateTimeKindHandling() ;

/// @brief Method set_DateTimeKindHandling addr 0x254c970 size 0x8 virtual false final false
 void set_DateTimeKindHandling(::System::DateTimeKind value) ;

// Ctor Parameters [CppParam { name: "writer", ty: "::System::IO::BinaryWriter", modifiers: "", def_value: None }]
explicit BsonBinaryWriter(::System::IO::BinaryWriter writer) ;

/// @brief Method .ctor addr 0x254c978 size 0x30 virtual false final false
 void _ctor(::System::IO::BinaryWriter writer) ;

/// @brief Method Flush addr 0x254c9a8 size 0x20 virtual false final false
 void Flush() ;

/// @brief Method Close addr 0x254c9c8 size 0x20 virtual false final false
 void Close() ;

/// @brief Method WriteToken addr 0x254c9e8 size 0x28 virtual false final false
 void WriteToken(::Newtonsoft::Json::Bson::BsonToken t) ;

/// @brief Method WriteTokenInternal addr 0x254d2ac size 0xe50 virtual false final false
 void WriteTokenInternal(::Newtonsoft::Json::Bson::BsonToken t) ;

/// @brief Method WriteString addr 0x254e18c size 0xa4 virtual false final false
 void WriteString(::StringW s, int32_t byteCount, ::System::Nullable_1<int32_t> calculatedlengthPrefix) ;

/// @brief Method WriteUtf8Bytes addr 0x254e2c0 size 0x13c virtual false final false
 void WriteUtf8Bytes(::StringW s, int32_t byteCount) ;

/// @brief Method CalculateSize addr 0x254e3fc size 0x8 virtual false final false
 int32_t CalculateSize(int32_t stringByteCount) ;

/// @brief Method CalculateSizeWithLength addr 0x254e404 size 0x14 virtual false final false
 int32_t CalculateSizeWithLength(int32_t stringByteCount, bool includeSize) ;

/// @brief Method CalculateSize addr 0x254ca10 size 0x89c virtual false final false
 int32_t CalculateSize(::Newtonsoft::Json::Bson::BsonToken t) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Bson
} // end anonymous namespace
NEED_NO_BOX(::Newtonsoft::Json::Bson::BsonBinaryWriter);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Bson::BsonBinaryWriter, "Newtonsoft.Json.Bson", "BsonBinaryWriter");
