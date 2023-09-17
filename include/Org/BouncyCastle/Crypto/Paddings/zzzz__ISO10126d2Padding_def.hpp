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
class ISO10126d2Padding;
}
// Type: Org.BouncyCastle.Crypto.Paddings::ISO10126d2Padding
namespace Org::BouncyCastle::Crypto::Paddings {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1006))
// CS Name: Org.BouncyCastle.Crypto.Paddings.ISO10126d2Padding
class CORDL_TYPE ISO10126d2Padding : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding
constexpr operator  ::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~ISO10126d2Padding() = default;

// Ctor Parameters [CppParam { name: "", ty: "ISO10126d2Padding", modifiers: " const&", def_value: None }]
constexpr ISO10126d2Padding(ISO10126d2Padding const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ISO10126d2Padding", modifiers: "&&", def_value: None }]
constexpr ISO10126d2Padding(ISO10126d2Padding&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ISO10126d2Padding(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ISO10126d2Padding& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ISO10126d2Padding& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ISO10126d2Padding& operator=(ISO10126d2Padding&& o) noexcept = default;
  constexpr ISO10126d2Padding& operator=(ISO10126d2Padding const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Security::SecureRandom __declspec(property(get=__get_random, put=__set_random))  random;

constexpr void __set_random(::Org::BouncyCastle::Security::SecureRandom value) ;

constexpr ::Org::BouncyCastle::Security::SecureRandom __get_random() const;


// Properties

 ::StringW __declspec(property(get=get_PaddingName))  PaddingName;


// Methods

/// @brief Method Init addr 0xea0fd0 size 0x6c virtual true final true
 void Init(::Org::BouncyCastle::Security::SecureRandom random) ;

/// @brief Method get_PaddingName addr 0xea103c size 0x40 virtual true final true
 ::StringW get_PaddingName() ;

/// @brief Method AddPadding addr 0xea107c size 0xb4 virtual true final true
 int32_t AddPadding(::ArrayW<uint8_t> input, int32_t inOff) ;

/// @brief Method PadCount addr 0xea1130 size 0x84 virtual true final true
 int32_t PadCount(::ArrayW<uint8_t> input) ;

// Ctor Parameters []
explicit ISO10126d2Padding() ;

/// @brief Method .ctor addr 0xea11b4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Paddings
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Paddings::ISO10126d2Padding);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Paddings::ISO10126d2Padding, "Org.BouncyCastle.Crypto.Paddings", "ISO10126d2Padding");
