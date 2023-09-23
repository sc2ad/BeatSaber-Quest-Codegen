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
class TbcPadding;
}
// Type: Org.BouncyCastle.Crypto.Paddings::TbcPadding
namespace Org::BouncyCastle::Crypto::Paddings {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1010))
// CS Name: Org.BouncyCastle.Crypto.Paddings.TbcPadding
class CORDL_TYPE TbcPadding : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding
constexpr operator  Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~TbcPadding() = default;

// Ctor Parameters [CppParam { name: "", ty: "TbcPadding", modifiers: " const&", def_value: None }]
constexpr TbcPadding(TbcPadding const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TbcPadding", modifiers: "&&", def_value: None }]
constexpr TbcPadding(TbcPadding&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TbcPadding(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TbcPadding& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TbcPadding& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TbcPadding& operator=(TbcPadding&& o) noexcept = default;
  constexpr TbcPadding& operator=(TbcPadding const& o) noexcept = default;
                


// Properties

 ::StringW __declspec(property(get=get_PaddingName))  PaddingName;


// Methods

/// @brief Method get_PaddingName addr 0xea20c0 size 0x40 virtual true final true
 ::StringW get_PaddingName() ;

/// @brief Method Init addr 0xea2100 size 0x4 virtual true final false
 void Init(Org::BouncyCastle::Security::SecureRandom random) ;

/// @brief Method AddPadding addr 0xea2104 size 0x88 virtual true final false
 int32_t AddPadding(::ArrayW<uint8_t> input, int32_t inOff) ;

/// @brief Method PadCount addr 0xea218c size 0x5c virtual true final false
 int32_t PadCount(::ArrayW<uint8_t> input) ;

// Ctor Parameters []
explicit TbcPadding() ;

/// @brief Method .ctor addr 0xea21e8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Paddings
NEED_NO_BOX(Org::BouncyCastle::Crypto::Paddings::TbcPadding);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Paddings::TbcPadding, "Org.BouncyCastle.Crypto.Paddings", "TbcPadding");
