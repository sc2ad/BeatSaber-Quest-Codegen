#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
namespace Org::BouncyCastle::Math::EC::Multiplier {
class PreCompInfo;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Multiplier {
class WNafPreCompInfo;
}
// Type: Org.BouncyCastle.Math.EC.Multiplier::WNafPreCompInfo
namespace Org::BouncyCastle::Math::EC::Multiplier {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1541))
// CS Name: Org.BouncyCastle.Math.EC.Multiplier.WNafPreCompInfo
class CORDL_TYPE WNafPreCompInfo : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo
constexpr operator  Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~WNafPreCompInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "WNafPreCompInfo", modifiers: " const&", def_value: None }]
constexpr WNafPreCompInfo(WNafPreCompInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "WNafPreCompInfo", modifiers: "&&", def_value: None }]
constexpr WNafPreCompInfo(WNafPreCompInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit WNafPreCompInfo(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr WNafPreCompInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr WNafPreCompInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr WNafPreCompInfo& operator=(WNafPreCompInfo&& o) noexcept = default;
  constexpr WNafPreCompInfo& operator=(WNafPreCompInfo const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_m_promotionCountdown, put=__set_m_promotionCountdown))  m_promotionCountdown;

constexpr void __set_m_promotionCountdown(int32_t value) ;

constexpr int32_t __get_m_promotionCountdown() const;

 int32_t __declspec(property(get=__get_m_confWidth, put=__set_m_confWidth))  m_confWidth;

constexpr void __set_m_confWidth(int32_t value) ;

constexpr int32_t __get_m_confWidth() const;

 ::ArrayW<Org::BouncyCastle::Math::EC::ECPoint> __declspec(property(get=__get_m_preComp, put=__set_m_preComp))  m_preComp;

constexpr void __set_m_preComp(::ArrayW<Org::BouncyCastle::Math::EC::ECPoint> value) ;

constexpr ::ArrayW<Org::BouncyCastle::Math::EC::ECPoint> __get_m_preComp() const;

 ::ArrayW<Org::BouncyCastle::Math::EC::ECPoint> __declspec(property(get=__get_m_preCompNeg, put=__set_m_preCompNeg))  m_preCompNeg;

constexpr void __set_m_preCompNeg(::ArrayW<Org::BouncyCastle::Math::EC::ECPoint> value) ;

constexpr ::ArrayW<Org::BouncyCastle::Math::EC::ECPoint> __get_m_preCompNeg() const;

 Org::BouncyCastle::Math::EC::ECPoint __declspec(property(get=__get_m_twice, put=__set_m_twice))  m_twice;

constexpr void __set_m_twice(Org::BouncyCastle::Math::EC::ECPoint value) ;

constexpr Org::BouncyCastle::Math::EC::ECPoint __get_m_twice() const;

 int32_t __declspec(property(get=__get_m_width, put=__set_m_width))  m_width;

constexpr void __set_m_width(int32_t value) ;

constexpr int32_t __get_m_width() const;


// Properties

 int32_t __declspec(property(get=get_PromotionCountdown, put=set_PromotionCountdown))  PromotionCountdown;

 bool __declspec(property(get=get_IsPromoted))  IsPromoted;

 int32_t __declspec(property(get=get_ConfWidth, put=set_ConfWidth))  ConfWidth;

 ::ArrayW<Org::BouncyCastle::Math::EC::ECPoint> __declspec(property(get=get_PreComp, put=set_PreComp))  PreComp;

 ::ArrayW<Org::BouncyCastle::Math::EC::ECPoint> __declspec(property(get=get_PreCompNeg, put=set_PreCompNeg))  PreCompNeg;

 Org::BouncyCastle::Math::EC::ECPoint __declspec(property(get=get_Twice, put=set_Twice))  Twice;

 int32_t __declspec(property(get=get_Width, put=set_Width))  Width;


// Methods

/// @brief Method DecrementPromotionCountdown addr 0xfaad4c size 0x38 virtual false final false
 int32_t DecrementPromotionCountdown() ;

/// @brief Method get_PromotionCountdown addr 0xfaad84 size 0x18 virtual false final false
 int32_t get_PromotionCountdown() ;

/// @brief Method set_PromotionCountdown addr 0xfaad9c size 0x24 virtual false final false
 void set_PromotionCountdown(int32_t value) ;

/// @brief Method get_IsPromoted addr 0xfaadc0 size 0x1c virtual true final false
 bool get_IsPromoted() ;

/// @brief Method get_ConfWidth addr 0xfaaddc size 0x8 virtual true final false
 int32_t get_ConfWidth() ;

/// @brief Method set_ConfWidth addr 0xfaade4 size 0x8 virtual true final false
 void set_ConfWidth(int32_t value) ;

/// @brief Method get_PreComp addr 0xfaadec size 0x8 virtual true final false
 ::ArrayW<Org::BouncyCastle::Math::EC::ECPoint> get_PreComp() ;

/// @brief Method set_PreComp addr 0xfaadf4 size 0x8 virtual true final false
 void set_PreComp(::ArrayW<Org::BouncyCastle::Math::EC::ECPoint> value) ;

/// @brief Method get_PreCompNeg addr 0xfaadfc size 0x8 virtual true final false
 ::ArrayW<Org::BouncyCastle::Math::EC::ECPoint> get_PreCompNeg() ;

/// @brief Method set_PreCompNeg addr 0xfaae04 size 0x8 virtual true final false
 void set_PreCompNeg(::ArrayW<Org::BouncyCastle::Math::EC::ECPoint> value) ;

/// @brief Method get_Twice addr 0xfaae0c size 0x8 virtual true final false
 Org::BouncyCastle::Math::EC::ECPoint get_Twice() ;

/// @brief Method set_Twice addr 0xfaae14 size 0x8 virtual true final false
 void set_Twice(Org::BouncyCastle::Math::EC::ECPoint value) ;

/// @brief Method get_Width addr 0xfaae1c size 0x8 virtual true final false
 int32_t get_Width() ;

/// @brief Method set_Width addr 0xfaae24 size 0x8 virtual true final false
 void set_Width(int32_t value) ;

// Ctor Parameters []
explicit WNafPreCompInfo() ;

/// @brief Method .ctor addr 0xfaae2c size 0x38 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::EC::Multiplier
NEED_NO_BOX(Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo, "Org.BouncyCastle.Math.EC.Multiplier", "WNafPreCompInfo");
