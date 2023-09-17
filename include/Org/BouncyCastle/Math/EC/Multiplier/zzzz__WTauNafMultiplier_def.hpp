#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Math/EC/Multiplier/zzzz__AbstractECMultiplier_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Math::EC::Abc {
class ZTauElement;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
namespace Org::BouncyCastle::Math::EC {
class AbstractF2mPoint;
}
namespace Org::BouncyCastle::Math::EC::Multiplier {
class PreCompInfo;
}
namespace Org::BouncyCastle::Math::EC::Multiplier {
class IPreCompCallback;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Multiplier {
class WTauNafMultiplier;
}
namespace Org::BouncyCastle::Math::EC::Multiplier {
class ____Org__BouncyCastle__Math__EC__Multiplier__WTauNafMultiplier__WTauNafCallback;
}
// Type: ::WTauNafCallback
namespace Org::BouncyCastle::Math::EC::Multiplier {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1547))
// CS Name: Org.BouncyCastle.Math.EC.Multiplier.WTauNafMultiplier::WTauNafCallback
class CORDL_TYPE ____Org__BouncyCastle__Math__EC__Multiplier__WTauNafMultiplier__WTauNafCallback : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback
constexpr operator  ::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____Org__BouncyCastle__Math__EC__Multiplier__WTauNafMultiplier__WTauNafCallback() = default;

// Ctor Parameters [CppParam { name: "", ty: "____Org__BouncyCastle__Math__EC__Multiplier__WTauNafMultiplier__WTauNafCallback", modifiers: " const&", def_value: None }]
constexpr ____Org__BouncyCastle__Math__EC__Multiplier__WTauNafMultiplier__WTauNafCallback(____Org__BouncyCastle__Math__EC__Multiplier__WTauNafMultiplier__WTauNafCallback const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____Org__BouncyCastle__Math__EC__Multiplier__WTauNafMultiplier__WTauNafCallback", modifiers: "&&", def_value: None }]
constexpr ____Org__BouncyCastle__Math__EC__Multiplier__WTauNafMultiplier__WTauNafCallback(____Org__BouncyCastle__Math__EC__Multiplier__WTauNafMultiplier__WTauNafCallback&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____Org__BouncyCastle__Math__EC__Multiplier__WTauNafMultiplier__WTauNafCallback(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____Org__BouncyCastle__Math__EC__Multiplier__WTauNafMultiplier__WTauNafCallback& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____Org__BouncyCastle__Math__EC__Multiplier__WTauNafMultiplier__WTauNafCallback& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____Org__BouncyCastle__Math__EC__Multiplier__WTauNafMultiplier__WTauNafCallback& operator=(____Org__BouncyCastle__Math__EC__Multiplier__WTauNafMultiplier__WTauNafCallback&& o) noexcept = default;
  constexpr ____Org__BouncyCastle__Math__EC__Multiplier__WTauNafMultiplier__WTauNafCallback& operator=(____Org__BouncyCastle__Math__EC__Multiplier__WTauNafMultiplier__WTauNafCallback const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Math::EC::AbstractF2mPoint __declspec(property(get=__get_m_p, put=__set_m_p))  m_p;

constexpr void __set_m_p(::Org::BouncyCastle::Math::EC::AbstractF2mPoint value) ;

constexpr ::Org::BouncyCastle::Math::EC::AbstractF2mPoint __get_m_p() const;

 int8_t __declspec(property(get=__get_m_a, put=__set_m_a))  m_a;

constexpr void __set_m_a(int8_t value) ;

constexpr int8_t __get_m_a() const;


// Methods

// Ctor Parameters [CppParam { name: "p", ty: "::Org::BouncyCastle::Math::EC::AbstractF2mPoint", modifiers: "", def_value: None }, CppParam { name: "a", ty: "int8_t", modifiers: "", def_value: None }]
explicit ____Org__BouncyCastle__Math__EC__Multiplier__WTauNafMultiplier__WTauNafCallback(::Org::BouncyCastle::Math::EC::AbstractF2mPoint p, int8_t a) ;

/// @brief Method .ctor addr 0xfadabc size 0x30 virtual false final false
 void _ctor(::Org::BouncyCastle::Math::EC::AbstractF2mPoint p, int8_t a) ;

/// @brief Method Precompute addr 0xfadb54 size 0xe8 virtual true final true
 ::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo Precompute(::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo existing) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::EC::Multiplier
// Type: Org.BouncyCastle.Math.EC.Multiplier::WTauNafMultiplier
namespace Org::BouncyCastle::Math::EC::Multiplier {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1527))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1548))
// CS Name: Org.BouncyCastle.Math.EC.Multiplier.WTauNafMultiplier
class CORDL_TYPE WTauNafMultiplier : public ::Org::BouncyCastle::Math::EC::Multiplier::AbstractECMultiplier {
public:
// Declarations
using WTauNafCallback = ::Org::BouncyCastle::Math::EC::Multiplier::____Org__BouncyCastle__Math__EC__Multiplier__WTauNafMultiplier__WTauNafCallback;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~WTauNafMultiplier() = default;

// Ctor Parameters [CppParam { name: "", ty: "WTauNafMultiplier", modifiers: " const&", def_value: None }]
constexpr WTauNafMultiplier(WTauNafMultiplier const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "WTauNafMultiplier", modifiers: "&&", def_value: None }]
constexpr WTauNafMultiplier(WTauNafMultiplier&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit WTauNafMultiplier(void* ptr) noexcept : ::Org::BouncyCastle::Math::EC::Multiplier::AbstractECMultiplier(ptr) {
}


  constexpr WTauNafMultiplier& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr WTauNafMultiplier& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr WTauNafMultiplier& operator=(WTauNafMultiplier&& o) noexcept = default;
  constexpr WTauNafMultiplier& operator=(WTauNafMultiplier const& o) noexcept = default;
                


// Fields

static ::StringW __declspec(property(get=__get_PRECOMP_NAME, put=__set_PRECOMP_NAME))  PRECOMP_NAME;

static void __set_PRECOMP_NAME(::StringW value) ;

static ::StringW __get_PRECOMP_NAME() ;


// Methods

/// @brief Method MultiplyPositive addr 0xfad328 size 0x1f4 virtual true final false
 ::Org::BouncyCastle::Math::EC::ECPoint MultiplyPositive(::Org::BouncyCastle::Math::EC::ECPoint point, ::Org::BouncyCastle::Math::BigInteger k) ;

/// @brief Method MultiplyWTnaf addr 0xfad51c size 0x14c virtual false final false
 ::Org::BouncyCastle::Math::EC::AbstractF2mPoint MultiplyWTnaf(::Org::BouncyCastle::Math::EC::AbstractF2mPoint p, ::Org::BouncyCastle::Math::EC::Abc::ZTauElement lambda, int8_t a, int8_t mu) ;

/// @brief Method MultiplyFromWTnaf addr 0xfad668 size 0x454 virtual false final false
static ::Org::BouncyCastle::Math::EC::AbstractF2mPoint MultiplyFromWTnaf(::Org::BouncyCastle::Math::EC::AbstractF2mPoint p, ::ArrayW<int8_t> u) ;

// Ctor Parameters []
explicit WTauNafMultiplier() ;

/// @brief Method .ctor addr 0xfadb4c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::EC::Multiplier
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier, "Org.BouncyCastle.Math.EC.Multiplier", "WTauNafMultiplier");
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Multiplier::____Org__BouncyCastle__Math__EC__Multiplier__WTauNafMultiplier__WTauNafCallback);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Multiplier::____Org__BouncyCastle__Math__EC__Multiplier__WTauNafMultiplier__WTauNafCallback, "Org.BouncyCastle.Math.EC.Multiplier", "WTauNafMultiplier/WTauNafCallback");
