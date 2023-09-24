#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::Encoders {
class Base64;
}
// Type: Org.BouncyCastle.Utilities.Encoders::Base64
namespace Org::BouncyCastle::Utilities::Encoders {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1793))
// CS Name: Org.BouncyCastle.Utilities.Encoders.Base64
class CORDL_TYPE Base64 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Base64() = default;

// Ctor Parameters [CppParam { name: "", ty: "Base64", modifiers: " const&", def_value: None }]
constexpr Base64(Base64 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Base64", modifiers: "&&", def_value: None }]
constexpr Base64(Base64&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Base64(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Base64& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Base64& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Base64& operator=(Base64&& o) noexcept = default;
  constexpr Base64& operator=(Base64 const& o) noexcept = default;
                


// Methods

static Org::BouncyCastle::Utilities::Encoders::Base64 New_ctor() ;

/// @brief Method .ctor addr 0x10cf860 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method ToBase64String addr 0x10cf868 size 0x68 virtual false final false
static ::StringW ToBase64String(::ArrayW<uint8_t> data) ;

/// @brief Method ToBase64String addr 0x10cf8d0 size 0x70 virtual false final false
static ::StringW ToBase64String(::ArrayW<uint8_t> data, int32_t off, int32_t length) ;

/// @brief Method Encode addr 0x10cf940 size 0x1c virtual false final false
static ::ArrayW<uint8_t> Encode(::ArrayW<uint8_t> data) ;

/// @brief Method Encode addr 0x10cf95c size 0x78 virtual false final false
static ::ArrayW<uint8_t> Encode(::ArrayW<uint8_t> data, int32_t off, int32_t length) ;

/// @brief Method Encode addr 0x10cf9d4 size 0x50 virtual false final false
static int32_t Encode(::ArrayW<uint8_t> data, System::IO::Stream outStream) ;

/// @brief Method Encode addr 0x10cfa24 size 0x50 virtual false final false
static int32_t Encode(::ArrayW<uint8_t> data, int32_t off, int32_t length, System::IO::Stream outStream) ;

/// @brief Method Decode addr 0x10cfa74 size 0x6c virtual false final false
static ::ArrayW<uint8_t> Decode(::ArrayW<uint8_t> data) ;

/// @brief Method Decode addr 0x10cfae0 size 0x58 virtual false final false
static ::ArrayW<uint8_t> Decode(::StringW data) ;

/// @brief Method Decode addr 0x10cfb38 size 0x50 virtual false final false
static int32_t Decode(::StringW data, System::IO::Stream outStream) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Utilities::Encoders
NEED_NO_BOX(Org::BouncyCastle::Utilities::Encoders::Base64);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Utilities::Encoders::Base64, "Org.BouncyCastle.Utilities.Encoders", "Base64");
