#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__SignatureSubpacket_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::Sig {
class Features;
}
// Type: Org.BouncyCastle.Bcpg.Sig::Features
namespace Org::BouncyCastle::Bcpg::Sig {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(531))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(534))
// CS Name: Org.BouncyCastle.Bcpg.Sig.Features
class CORDL_TYPE Features : public Org::BouncyCastle::Bcpg::SignatureSubpacket {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Features() = default;

// Ctor Parameters [CppParam { name: "", ty: "Features", modifiers: " const&", def_value: None }]
constexpr Features(Features const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Features", modifiers: "&&", def_value: None }]
constexpr Features(Features&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Features(void* ptr) noexcept : Org::BouncyCastle::Bcpg::SignatureSubpacket(ptr) {
}


  constexpr Features& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Features& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Features& operator=(Features&& o) noexcept = default;
  constexpr Features& operator=(Features const& o) noexcept = default;
                


// Fields

static uint8_t __declspec(property(get=__get_FEATURE_MODIFICATION_DETECTION, put=__set_FEATURE_MODIFICATION_DETECTION))  FEATURE_MODIFICATION_DETECTION;

static void __set_FEATURE_MODIFICATION_DETECTION(uint8_t value) ;

static uint8_t __get_FEATURE_MODIFICATION_DETECTION() ;


// Properties

 bool __declspec(property(get=get_SupportsModificationDetection))  SupportsModificationDetection;


// Methods

/// @brief Method FeatureToByteArray addr 0x113d3dc size 0x64 virtual false final false
static ::ArrayW<uint8_t> FeatureToByteArray(uint8_t feature) ;

static Org::BouncyCastle::Bcpg::Sig::Features New_ctor(bool critical, bool isLongLength, ::ArrayW<uint8_t> data) ;

/// @brief Method .ctor addr 0x113d440 size 0x48 virtual false final false
 void _ctor(bool critical, bool isLongLength, ::ArrayW<uint8_t> data) ;

static Org::BouncyCastle::Bcpg::Sig::Features New_ctor(bool critical, uint8_t feature) ;

/// @brief Method .ctor addr 0x113d488 size 0x90 virtual false final false
 void _ctor(bool critical, uint8_t feature) ;

/// @brief Method get_SupportsModificationDetection addr 0x113d518 size 0x60 virtual false final false
 bool get_SupportsModificationDetection() ;

/// @brief Method SupportsFeature addr 0x113d578 size 0x78 virtual false final false
 bool SupportsFeature(uint8_t feature) ;

/// @brief Method SetSupportsFeature addr 0x113d5f0 size 0x1b4 virtual false final false
 void SetSupportsFeature(uint8_t feature, bool support) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg::Sig
NEED_NO_BOX(Org::BouncyCastle::Bcpg::Sig::Features);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Bcpg::Sig::Features, "Org.BouncyCastle.Bcpg.Sig", "Features");
