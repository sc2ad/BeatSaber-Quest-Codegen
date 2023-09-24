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
class X923Padding;
}
// Type: Org.BouncyCastle.Crypto.Paddings::X923Padding
namespace Org::BouncyCastle::Crypto::Paddings {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1011))
// CS Name: Org.BouncyCastle.Crypto.Paddings.X923Padding
class CORDL_TYPE X923Padding : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding
constexpr operator  Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~X923Padding() = default;

// Ctor Parameters [CppParam { name: "", ty: "X923Padding", modifiers: " const&", def_value: None }]
constexpr X923Padding(X923Padding const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "X923Padding", modifiers: "&&", def_value: None }]
constexpr X923Padding(X923Padding&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit X923Padding(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr X923Padding& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr X923Padding& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr X923Padding& operator=(X923Padding&& o) noexcept = default;
  constexpr X923Padding& operator=(X923Padding const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Security::SecureRandom __declspec(property(get=__get_random, put=__set_random))  random;

constexpr void __set_random(Org::BouncyCastle::Security::SecureRandom value) ;

constexpr Org::BouncyCastle::Security::SecureRandom __get_random() const;


// Properties

 ::StringW __declspec(property(get=get_PaddingName))  PaddingName;


// Methods

/// @brief Method Init addr 0xea21f0 size 0x8 virtual true final true
 void Init(Org::BouncyCastle::Security::SecureRandom random) ;

/// @brief Method get_PaddingName addr 0xea21f8 size 0x40 virtual true final true
 ::StringW get_PaddingName() ;

/// @brief Method AddPadding addr 0xea2238 size 0xcc virtual true final true
 int32_t AddPadding(::ArrayW<uint8_t> input, int32_t inOff) ;

/// @brief Method PadCount addr 0xea2304 size 0x84 virtual true final true
 int32_t PadCount(::ArrayW<uint8_t> input) ;

static Org::BouncyCastle::Crypto::Paddings::X923Padding New_ctor() ;

/// @brief Method .ctor addr 0xea2388 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Paddings
NEED_NO_BOX(Org::BouncyCastle::Crypto::Paddings::X923Padding);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Paddings::X923Padding, "Org.BouncyCastle.Crypto.Paddings", "X923Padding");
