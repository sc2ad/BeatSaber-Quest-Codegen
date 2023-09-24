#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::IO {
class TextWriter;
}
// Forward declare root types
namespace Newtonsoft::Json::Utilities {
class Base64Encoder;
}
// Type: Newtonsoft.Json.Utilities::Base64Encoder
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11789))
// CS Name: Newtonsoft.Json.Utilities.Base64Encoder
class CORDL_TYPE Base64Encoder : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~Base64Encoder() = default;

// Ctor Parameters [CppParam { name: "", ty: "Base64Encoder", modifiers: " const&", def_value: None }]
constexpr Base64Encoder(Base64Encoder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Base64Encoder", modifiers: "&&", def_value: None }]
constexpr Base64Encoder(Base64Encoder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Base64Encoder(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Base64Encoder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Base64Encoder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Base64Encoder& operator=(Base64Encoder&& o) noexcept = default;
  constexpr Base64Encoder& operator=(Base64Encoder const& o) noexcept = default;
                


// Fields

/// @brief Field Base64LineSize offset 0
static constexpr int32_t  Base64LineSize{76};

/// @brief Field LineSizeInBytes offset 0
static constexpr int32_t  LineSizeInBytes{57};

 ::ArrayW<char16_t> __declspec(property(get=__get__charsLine, put=__set__charsLine))  _charsLine;

constexpr void __set__charsLine(::ArrayW<char16_t> value) ;

constexpr ::ArrayW<char16_t> __get__charsLine() const;

 System::IO::TextWriter __declspec(property(get=__get__writer, put=__set__writer))  _writer;

constexpr void __set__writer(System::IO::TextWriter value) ;

constexpr System::IO::TextWriter __get__writer() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get__leftOverBytes, put=__set__leftOverBytes))  _leftOverBytes;

constexpr void __set__leftOverBytes(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get__leftOverBytes() const;

 int32_t __declspec(property(get=__get__leftOverBytesCount, put=__set__leftOverBytesCount))  _leftOverBytesCount;

constexpr void __set__leftOverBytesCount(int32_t value) ;

constexpr int32_t __get__leftOverBytesCount() const;


// Methods

static Newtonsoft::Json::Utilities::Base64Encoder New_ctor(System::IO::TextWriter writer) ;

/// @brief Method .ctor addr 0x24e18b8 size 0x8c virtual false final false
 void _ctor(System::IO::TextWriter writer) ;

/// @brief Method Encode addr 0x24e1944 size 0x34c virtual false final false
 void Encode(::ArrayW<uint8_t> buffer, int32_t index, int32_t count) ;

/// @brief Method Flush addr 0x24e1cb4 size 0xb8 virtual false final false
 void Flush() ;

/// @brief Method WriteChars addr 0x24e1c90 size 0x24 virtual false final false
 void WriteChars(::ArrayW<char16_t> chars, int32_t index, int32_t count) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Utilities
NEED_NO_BOX(Newtonsoft::Json::Utilities::Base64Encoder);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Utilities::Base64Encoder, "Newtonsoft.Json.Utilities", "Base64Encoder");
