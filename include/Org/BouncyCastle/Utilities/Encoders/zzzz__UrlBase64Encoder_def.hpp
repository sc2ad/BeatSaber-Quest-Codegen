#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Utilities/Encoders/zzzz__Base64Encoder_def.hpp"
namespace {
// Forward declare root types
namespace Org::BouncyCastle::Utilities::Encoders {
class UrlBase64Encoder;
}
// Type: Org.BouncyCastle.Utilities.Encoders::UrlBase64Encoder
namespace Org::BouncyCastle::Utilities::Encoders {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1795))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1803))
// CS Name: Org.BouncyCastle.Utilities.Encoders.UrlBase64Encoder
class CORDL_TYPE UrlBase64Encoder : public ::Org::BouncyCastle::Utilities::Encoders::Base64Encoder {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~UrlBase64Encoder() = default;

// Ctor Parameters [CppParam { name: "", ty: "UrlBase64Encoder", modifiers: " const&", def_value: None }]
constexpr UrlBase64Encoder(UrlBase64Encoder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UrlBase64Encoder", modifiers: "&&", def_value: None }]
constexpr UrlBase64Encoder(UrlBase64Encoder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UrlBase64Encoder(void* ptr) noexcept : ::Org::BouncyCastle::Utilities::Encoders::Base64Encoder(ptr) {
}


  constexpr UrlBase64Encoder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UrlBase64Encoder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UrlBase64Encoder& operator=(UrlBase64Encoder&& o) noexcept = default;
  constexpr UrlBase64Encoder& operator=(UrlBase64Encoder const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit UrlBase64Encoder() ;

/// @brief Method .ctor addr 0x10d35a4 size 0x74 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Utilities::Encoders
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Utilities::Encoders::UrlBase64Encoder);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::Encoders::UrlBase64Encoder, "Org.BouncyCastle.Utilities.Encoders", "UrlBase64Encoder");
