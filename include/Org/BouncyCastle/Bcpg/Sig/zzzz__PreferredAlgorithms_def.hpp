#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__SignatureSubpacket_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Bcpg {
struct SignatureSubpacketTag;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::Sig {
class PreferredAlgorithms;
}
// Type: Org.BouncyCastle.Bcpg.Sig::PreferredAlgorithms
namespace Org::BouncyCastle::Bcpg::Sig {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(531))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(539))
// CS Name: Org.BouncyCastle.Bcpg.Sig.PreferredAlgorithms
class CORDL_TYPE PreferredAlgorithms : public Org::BouncyCastle::Bcpg::SignatureSubpacket {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~PreferredAlgorithms() = default;

// Ctor Parameters [CppParam { name: "", ty: "PreferredAlgorithms", modifiers: " const&", def_value: None }]
constexpr PreferredAlgorithms(PreferredAlgorithms const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PreferredAlgorithms", modifiers: "&&", def_value: None }]
constexpr PreferredAlgorithms(PreferredAlgorithms&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PreferredAlgorithms(void* ptr) noexcept : Org::BouncyCastle::Bcpg::SignatureSubpacket(ptr) {
}


  constexpr PreferredAlgorithms& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PreferredAlgorithms& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PreferredAlgorithms& operator=(PreferredAlgorithms&& o) noexcept = default;
  constexpr PreferredAlgorithms& operator=(PreferredAlgorithms const& o) noexcept = default;
                


// Methods

/// @brief Method IntToByteArray addr 0x113e1e8 size 0xa0 virtual false final false
static ::ArrayW<uint8_t> IntToByteArray(::ArrayW<int32_t> v) ;

// Ctor Parameters [CppParam { name: "type", ty: "Org::BouncyCastle::Bcpg::SignatureSubpacketTag", modifiers: "", def_value: None }, CppParam { name: "critical", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isLongLength", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "data", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit PreferredAlgorithms(Org::BouncyCastle::Bcpg::SignatureSubpacketTag type, bool critical, bool isLongLength, ::ArrayW<uint8_t> data) ;

/// @brief Method .ctor addr 0x113e288 size 0x48 virtual false final false
 void _ctor(Org::BouncyCastle::Bcpg::SignatureSubpacketTag type, bool critical, bool isLongLength, ::ArrayW<uint8_t> data) ;

// Ctor Parameters [CppParam { name: "type", ty: "Org::BouncyCastle::Bcpg::SignatureSubpacketTag", modifiers: "", def_value: None }, CppParam { name: "critical", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "preferences", ty: "::ArrayW<int32_t>", modifiers: "", def_value: None }]
explicit PreferredAlgorithms(Org::BouncyCastle::Bcpg::SignatureSubpacketTag type, bool critical, ::ArrayW<int32_t> preferences) ;

/// @brief Method .ctor addr 0x113e2d0 size 0x54 virtual false final false
 void _ctor(Org::BouncyCastle::Bcpg::SignatureSubpacketTag type, bool critical, ::ArrayW<int32_t> preferences) ;

/// @brief Method GetPreferences addr 0x113e324 size 0xa8 virtual false final false
 ::ArrayW<int32_t> GetPreferences() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg::Sig
NEED_NO_BOX(Org::BouncyCastle::Bcpg::Sig::PreferredAlgorithms);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Bcpg::Sig::PreferredAlgorithms, "Org.BouncyCastle.Bcpg.Sig", "PreferredAlgorithms");
