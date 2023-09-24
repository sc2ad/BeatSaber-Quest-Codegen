#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__SignatureSubpacket_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::Sig {
class TrustSignature;
}
// Type: Org.BouncyCastle.Bcpg.Sig::TrustSignature
namespace Org::BouncyCastle::Bcpg::Sig {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(531))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(549))
// CS Name: Org.BouncyCastle.Bcpg.Sig.TrustSignature
class CORDL_TYPE TrustSignature : public Org::BouncyCastle::Bcpg::SignatureSubpacket {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~TrustSignature() = default;

// Ctor Parameters [CppParam { name: "", ty: "TrustSignature", modifiers: " const&", def_value: None }]
constexpr TrustSignature(TrustSignature const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TrustSignature", modifiers: "&&", def_value: None }]
constexpr TrustSignature(TrustSignature&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TrustSignature(void* ptr) noexcept : Org::BouncyCastle::Bcpg::SignatureSubpacket(ptr) {
}


  constexpr TrustSignature& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TrustSignature& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TrustSignature& operator=(TrustSignature&& o) noexcept = default;
  constexpr TrustSignature& operator=(TrustSignature const& o) noexcept = default;
                


// Properties

 int32_t __declspec(property(get=get_Depth))  Depth;

 int32_t __declspec(property(get=get_TrustAmount))  TrustAmount;


// Methods

/// @brief Method IntToByteArray addr 0x113f010 size 0x7c virtual false final false
static ::ArrayW<uint8_t> IntToByteArray(int32_t v1, int32_t v2) ;

static Org::BouncyCastle::Bcpg::Sig::TrustSignature New_ctor(bool critical, bool isLongLength, ::ArrayW<uint8_t> data) ;

/// @brief Method .ctor addr 0x113f08c size 0x48 virtual false final false
 void _ctor(bool critical, bool isLongLength, ::ArrayW<uint8_t> data) ;

static Org::BouncyCastle::Bcpg::Sig::TrustSignature New_ctor(bool critical, int32_t depth, int32_t trustAmount) ;

/// @brief Method .ctor addr 0x113f0d4 size 0x50 virtual false final false
 void _ctor(bool critical, int32_t depth, int32_t trustAmount) ;

/// @brief Method get_Depth addr 0x113f124 size 0x28 virtual false final false
 int32_t get_Depth() ;

/// @brief Method get_TrustAmount addr 0x113f14c size 0x2c virtual false final false
 int32_t get_TrustAmount() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg::Sig
NEED_NO_BOX(Org::BouncyCastle::Bcpg::Sig::TrustSignature);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Bcpg::Sig::TrustSignature, "Org.BouncyCastle.Bcpg.Sig", "TrustSignature");
