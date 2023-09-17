#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Xml {
class Base64Encoder;
}
// Type: System.Xml::Base64Encoder
namespace System::Xml {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11346))
// CS Name: System.Xml.Base64Encoder
class CORDL_TYPE Base64Encoder : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

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

 ::ArrayW<uint8_t> __declspec(property(get=__get_leftOverBytes, put=__set_leftOverBytes))  leftOverBytes;

constexpr void __set_leftOverBytes(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_leftOverBytes() const;

 int32_t __declspec(property(get=__get_leftOverBytesCount, put=__set_leftOverBytesCount))  leftOverBytesCount;

constexpr void __set_leftOverBytesCount(int32_t value) ;

constexpr int32_t __get_leftOverBytesCount() const;

 ::ArrayW<char16_t> __declspec(property(get=__get_charsLine, put=__set_charsLine))  charsLine;

constexpr void __set_charsLine(::ArrayW<char16_t> value) ;

constexpr ::ArrayW<char16_t> __get_charsLine() const;


// Methods

// Ctor Parameters []
explicit Base64Encoder() ;

/// @brief Method .ctor addr 0x26bae28 size 0x5c virtual false final false
 void _ctor() ;

/// @brief Method WriteChars addr 0x0 size 0xffffffffffffffff virtual true final false
 void WriteChars(::ArrayW<char16_t> chars, int32_t index, int32_t count) ;

/// @brief Method Encode addr 0x26bae84 size 0x334 virtual false final false
 void Encode(::ArrayW<uint8_t> buffer, int32_t index, int32_t count) ;

/// @brief Method Flush addr 0x26bb1b8 size 0xa8 virtual false final false
 void Flush() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
} // end anonymous namespace
NEED_NO_BOX(::System::Xml::Base64Encoder);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Base64Encoder, "System.Xml", "Base64Encoder");
