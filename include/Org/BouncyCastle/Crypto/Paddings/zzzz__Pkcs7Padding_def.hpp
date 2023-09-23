#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto::Paddings {
class IBlockCipherPadding;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Paddings {
class Pkcs7Padding;
}
// Type: Org.BouncyCastle.Crypto.Paddings::Pkcs7Padding
namespace Org::BouncyCastle::Crypto::Paddings {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1009))
// CS Name: Org.BouncyCastle.Crypto.Paddings.Pkcs7Padding
class CORDL_TYPE Pkcs7Padding : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding
constexpr operator  Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Pkcs7Padding() = default;

// Ctor Parameters [CppParam { name: "", ty: "Pkcs7Padding", modifiers: " const&", def_value: None }]
constexpr Pkcs7Padding(Pkcs7Padding const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Pkcs7Padding", modifiers: "&&", def_value: None }]
constexpr Pkcs7Padding(Pkcs7Padding&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Pkcs7Padding(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Pkcs7Padding& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Pkcs7Padding& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Pkcs7Padding& operator=(Pkcs7Padding&& o) noexcept = default;
  constexpr Pkcs7Padding& operator=(Pkcs7Padding const& o) noexcept = default;
                


// Properties

 ::StringW __declspec(property(get=get_PaddingName))  PaddingName;


// Methods

/// @brief Method Init addr 0xea1f70 size 0x4 virtual true final true
 void Init(Org::BouncyCastle::Security::SecureRandom random) ;

/// @brief Method get_PaddingName addr 0xea1f74 size 0x40 virtual true final true
 ::StringW get_PaddingName() ;

/// @brief Method AddPadding addr 0xea1fb4 size 0x4c virtual true final true
 int32_t AddPadding(::ArrayW<uint8_t> input, int32_t inOff) ;

/// @brief Method PadCount addr 0xea2000 size 0xc0 virtual true final true
 int32_t PadCount(::ArrayW<uint8_t> input) ;

// Ctor Parameters []
explicit Pkcs7Padding() ;

/// @brief Method .ctor addr 0xea1480 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Paddings
NEED_NO_BOX(Org::BouncyCastle::Crypto::Paddings::Pkcs7Padding);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Paddings::Pkcs7Padding, "Org.BouncyCastle.Crypto.Paddings", "Pkcs7Padding");
