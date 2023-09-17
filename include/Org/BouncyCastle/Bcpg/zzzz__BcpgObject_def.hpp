#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Bcpg {
class BcpgOutputStream;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
class BcpgObject;
}
// Type: Org.BouncyCastle.Bcpg::BcpgObject
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(554))
// CS Name: Org.BouncyCastle.Bcpg.BcpgObject
class CORDL_TYPE BcpgObject : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~BcpgObject() = default;

// Ctor Parameters [CppParam { name: "", ty: "BcpgObject", modifiers: " const&", def_value: None }]
constexpr BcpgObject(BcpgObject const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BcpgObject", modifiers: "&&", def_value: None }]
constexpr BcpgObject(BcpgObject&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BcpgObject(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BcpgObject& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BcpgObject& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BcpgObject& operator=(BcpgObject&& o) noexcept = default;
  constexpr BcpgObject& operator=(BcpgObject const& o) noexcept = default;
                


// Methods

/// @brief Method GetEncoded addr 0x114544c size 0xb0 virtual true final false
 ::ArrayW<uint8_t> GetEncoded() ;

/// @brief Method Encode addr 0x0 size 0xffffffffffffffff virtual true final false
 void Encode(::Org::BouncyCastle::Bcpg::BcpgOutputStream bcpgOut) ;

// Ctor Parameters []
explicit BcpgObject() ;

/// @brief Method .ctor addr 0x114559c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::BcpgObject);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::BcpgObject, "Org.BouncyCastle.Bcpg", "BcpgObject");
