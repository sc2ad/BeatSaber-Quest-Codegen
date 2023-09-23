#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace Org::BouncyCastle::Math::EC::Multiplier {
class PreCompInfo;
}
namespace Org::BouncyCastle::Math::EC {
class AbstractF2mPoint;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Multiplier {
class WTauNafPreCompInfo;
}
// Type: Org.BouncyCastle.Math.EC.Multiplier::WTauNafPreCompInfo
namespace Org::BouncyCastle::Math::EC::Multiplier {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1549))
// CS Name: Org.BouncyCastle.Math.EC.Multiplier.WTauNafPreCompInfo
class CORDL_TYPE WTauNafPreCompInfo : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo
constexpr operator  Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~WTauNafPreCompInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "WTauNafPreCompInfo", modifiers: " const&", def_value: None }]
constexpr WTauNafPreCompInfo(WTauNafPreCompInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "WTauNafPreCompInfo", modifiers: "&&", def_value: None }]
constexpr WTauNafPreCompInfo(WTauNafPreCompInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit WTauNafPreCompInfo(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr WTauNafPreCompInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr WTauNafPreCompInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr WTauNafPreCompInfo& operator=(WTauNafPreCompInfo&& o) noexcept = default;
  constexpr WTauNafPreCompInfo& operator=(WTauNafPreCompInfo const& o) noexcept = default;
                


// Fields

 ::ArrayW<Org::BouncyCastle::Math::EC::AbstractF2mPoint> __declspec(property(get=__get_m_preComp, put=__set_m_preComp))  m_preComp;

constexpr void __set_m_preComp(::ArrayW<Org::BouncyCastle::Math::EC::AbstractF2mPoint> value) ;

constexpr ::ArrayW<Org::BouncyCastle::Math::EC::AbstractF2mPoint> __get_m_preComp() const;


// Properties

 ::ArrayW<Org::BouncyCastle::Math::EC::AbstractF2mPoint> __declspec(property(get=get_PreComp, put=set_PreComp))  PreComp;


// Methods

/// @brief Method get_PreComp addr 0xfadc44 size 0x8 virtual true final false
 ::ArrayW<Org::BouncyCastle::Math::EC::AbstractF2mPoint> get_PreComp() ;

/// @brief Method set_PreComp addr 0xfadc4c size 0x8 virtual true final false
 void set_PreComp(::ArrayW<Org::BouncyCastle::Math::EC::AbstractF2mPoint> value) ;

// Ctor Parameters []
explicit WTauNafPreCompInfo() ;

/// @brief Method .ctor addr 0xfadc3c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::EC::Multiplier
NEED_NO_BOX(Org::BouncyCastle::Math::EC::Multiplier::WTauNafPreCompInfo);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Multiplier::WTauNafPreCompInfo, "Org.BouncyCastle.Math.EC.Multiplier", "WTauNafPreCompInfo");
