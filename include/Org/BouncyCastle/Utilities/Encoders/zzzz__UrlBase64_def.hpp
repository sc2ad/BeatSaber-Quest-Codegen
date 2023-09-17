#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Utilities::Encoders {
class IEncoder;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::Encoders {
class UrlBase64;
}
// Type: Org.BouncyCastle.Utilities.Encoders::UrlBase64
namespace Org::BouncyCastle::Utilities::Encoders {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1802))
// CS Name: Org.BouncyCastle.Utilities.Encoders.UrlBase64
class CORDL_TYPE UrlBase64 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UrlBase64() = default;

// Ctor Parameters [CppParam { name: "", ty: "UrlBase64", modifiers: " const&", def_value: None }]
constexpr UrlBase64(UrlBase64 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UrlBase64", modifiers: "&&", def_value: None }]
constexpr UrlBase64(UrlBase64&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UrlBase64(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UrlBase64& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UrlBase64& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UrlBase64& operator=(UrlBase64&& o) noexcept = default;
  constexpr UrlBase64& operator=(UrlBase64 const& o) noexcept = default;
                


// Fields

static ::Org::BouncyCastle::Utilities::Encoders::IEncoder __declspec(property(get=__get_encoder, put=__set_encoder))  encoder;

static void __set_encoder(::Org::BouncyCastle::Utilities::Encoders::IEncoder value) ;

static ::Org::BouncyCastle::Utilities::Encoders::IEncoder __get_encoder() ;


// Methods

/// @brief Method Encode addr 0x10d2bfc size 0x22c virtual false final false
static ::ArrayW<uint8_t> Encode(::ArrayW<uint8_t> data) ;

/// @brief Method Encode addr 0x10d2e28 size 0xf0 virtual false final false
static int32_t Encode(::ArrayW<uint8_t> data, ::System::IO::Stream outStr) ;

/// @brief Method Decode addr 0x10d2f18 size 0x230 virtual false final false
static ::ArrayW<uint8_t> Decode(::ArrayW<uint8_t> data) ;

/// @brief Method Decode addr 0x10d3148 size 0xf4 virtual false final false
static int32_t Decode(::ArrayW<uint8_t> data, ::System::IO::Stream outStr) ;

/// @brief Method Decode addr 0x10d323c size 0x210 virtual false final false
static ::ArrayW<uint8_t> Decode(::StringW data) ;

/// @brief Method Decode addr 0x10d344c size 0xe4 virtual false final false
static int32_t Decode(::StringW data, ::System::IO::Stream outStr) ;

// Ctor Parameters []
explicit UrlBase64() ;

/// @brief Method .ctor addr 0x10d3618 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Utilities::Encoders
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Utilities::Encoders::UrlBase64);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::Encoders::UrlBase64, "Org.BouncyCastle.Utilities.Encoders", "UrlBase64");
