#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Crypto::Paddings {
class IBlockCipherPadding;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Paddings {
class ISO7816d4Padding;
}
// Type: Org.BouncyCastle.Crypto.Paddings::ISO7816d4Padding
namespace Org::BouncyCastle::Crypto::Paddings {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1007))
// CS Name: Org.BouncyCastle.Crypto.Paddings.ISO7816d4Padding
class CORDL_TYPE ISO7816d4Padding : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding
constexpr operator  ::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ISO7816d4Padding() = default;

// Ctor Parameters [CppParam { name: "", ty: "ISO7816d4Padding", modifiers: " const&", def_value: None }]
constexpr ISO7816d4Padding(ISO7816d4Padding const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ISO7816d4Padding", modifiers: "&&", def_value: None }]
constexpr ISO7816d4Padding(ISO7816d4Padding&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ISO7816d4Padding(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ISO7816d4Padding& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ISO7816d4Padding& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ISO7816d4Padding& operator=(ISO7816d4Padding&& o) noexcept = default;
  constexpr ISO7816d4Padding& operator=(ISO7816d4Padding const& o) noexcept = default;
                


// Properties

 ::StringW __declspec(property(get=get_PaddingName))  PaddingName;


// Methods

/// @brief Method Init addr 0xea11bc size 0x4 virtual true final true
 void Init(::Org::BouncyCastle::Security::SecureRandom random) ;

/// @brief Method get_PaddingName addr 0xea11c0 size 0x40 virtual true final true
 ::StringW get_PaddingName() ;

/// @brief Method AddPadding addr 0xea1200 size 0x64 virtual true final true
 int32_t AddPadding(::ArrayW<uint8_t> input, int32_t inOff) ;

/// @brief Method PadCount addr 0xea1264 size 0xb0 virtual true final true
 int32_t PadCount(::ArrayW<uint8_t> input) ;

// Ctor Parameters []
explicit ISO7816d4Padding() ;

/// @brief Method .ctor addr 0xea1314 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Paddings
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Paddings::ISO7816d4Padding);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Paddings::ISO7816d4Padding, "Org.BouncyCastle.Crypto.Paddings", "ISO7816d4Padding");
