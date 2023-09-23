#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Math::EC::Endo {
class ScalarSplitParameters;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Math::EC::Endo {
class ECEndomorphism;
}
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
namespace Org::BouncyCastle::Math::EC::Endo {
class EndoPreCompInfo;
}
namespace Org::BouncyCastle::Math::EC::Multiplier {
class IPreCompCallback;
}
namespace Org::BouncyCastle::Math::EC::Multiplier {
class PreCompInfo;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Endo {
class EndoUtilities;
}
namespace Org::BouncyCastle::Math::EC::Endo {
class Org__BouncyCastle__Math__EC__Endo__EndoUtilities__MapPointCallback;
}
// Type: ::MapPointCallback
namespace Org::BouncyCastle::Math::EC::Endo {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1518))
// CS Name: Org.BouncyCastle.Math.EC.Endo.EndoUtilities::MapPointCallback
class CORDL_TYPE Org__BouncyCastle__Math__EC__Endo__EndoUtilities__MapPointCallback : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback
constexpr operator  Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Org__BouncyCastle__Math__EC__Endo__EndoUtilities__MapPointCallback() = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Math__EC__Endo__EndoUtilities__MapPointCallback", modifiers: " const&", def_value: None }]
constexpr Org__BouncyCastle__Math__EC__Endo__EndoUtilities__MapPointCallback(Org__BouncyCastle__Math__EC__Endo__EndoUtilities__MapPointCallback const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Math__EC__Endo__EndoUtilities__MapPointCallback", modifiers: "&&", def_value: None }]
constexpr Org__BouncyCastle__Math__EC__Endo__EndoUtilities__MapPointCallback(Org__BouncyCastle__Math__EC__Endo__EndoUtilities__MapPointCallback&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Org__BouncyCastle__Math__EC__Endo__EndoUtilities__MapPointCallback(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Org__BouncyCastle__Math__EC__Endo__EndoUtilities__MapPointCallback& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Org__BouncyCastle__Math__EC__Endo__EndoUtilities__MapPointCallback& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Org__BouncyCastle__Math__EC__Endo__EndoUtilities__MapPointCallback& operator=(Org__BouncyCastle__Math__EC__Endo__EndoUtilities__MapPointCallback&& o) noexcept = default;
  constexpr Org__BouncyCastle__Math__EC__Endo__EndoUtilities__MapPointCallback& operator=(Org__BouncyCastle__Math__EC__Endo__EndoUtilities__MapPointCallback const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Math::EC::Endo::ECEndomorphism __declspec(property(get=__get_m_endomorphism, put=__set_m_endomorphism))  m_endomorphism;

constexpr void __set_m_endomorphism(Org::BouncyCastle::Math::EC::Endo::ECEndomorphism value) ;

constexpr Org::BouncyCastle::Math::EC::Endo::ECEndomorphism __get_m_endomorphism() const;

 Org::BouncyCastle::Math::EC::ECPoint __declspec(property(get=__get_m_point, put=__set_m_point))  m_point;

constexpr void __set_m_point(Org::BouncyCastle::Math::EC::ECPoint value) ;

constexpr Org::BouncyCastle::Math::EC::ECPoint __get_m_point() const;


// Methods

// Ctor Parameters [CppParam { name: "endomorphism", ty: "Org::BouncyCastle::Math::EC::Endo::ECEndomorphism", modifiers: "", def_value: None }, CppParam { name: "point", ty: "Org::BouncyCastle::Math::EC::ECPoint", modifiers: "", def_value: None }]
explicit Org__BouncyCastle__Math__EC__Endo__EndoUtilities__MapPointCallback(Org::BouncyCastle::Math::EC::Endo::ECEndomorphism endomorphism, Org::BouncyCastle::Math::EC::ECPoint point) ;

/// @brief Method .ctor addr 0xfa7f40 size 0x2c virtual false final false
 void _ctor(Org::BouncyCastle::Math::EC::Endo::ECEndomorphism endomorphism, Org::BouncyCastle::Math::EC::ECPoint point) ;

/// @brief Method Precompute addr 0xfa7fd4 size 0x1f8 virtual true final true
 Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo Precompute(Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo existing) ;

/// @brief Method CheckExisting addr 0xfa81cc size 0x58 virtual false final false
 bool CheckExisting(Org::BouncyCastle::Math::EC::Endo::EndoPreCompInfo existingEndo, Org::BouncyCastle::Math::EC::Endo::ECEndomorphism endomorphism) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::EC::Endo
// Type: Org.BouncyCastle.Math.EC.Endo::EndoUtilities
namespace Org::BouncyCastle::Math::EC::Endo {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1519))
// CS Name: Org.BouncyCastle.Math.EC.Endo.EndoUtilities
class CORDL_TYPE EndoUtilities : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using MapPointCallback = Org::BouncyCastle::Math::EC::Endo::Org__BouncyCastle__Math__EC__Endo__EndoUtilities__MapPointCallback;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~EndoUtilities() = default;

// Ctor Parameters [CppParam { name: "", ty: "EndoUtilities", modifiers: " const&", def_value: None }]
constexpr EndoUtilities(EndoUtilities const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EndoUtilities", modifiers: "&&", def_value: None }]
constexpr EndoUtilities(EndoUtilities&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EndoUtilities(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr EndoUtilities& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EndoUtilities& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EndoUtilities& operator=(EndoUtilities&& o) noexcept = default;
  constexpr EndoUtilities& operator=(EndoUtilities const& o) noexcept = default;
                


// Fields

static ::StringW __declspec(property(get=__get_PRECOMP_NAME, put=__set_PRECOMP_NAME))  PRECOMP_NAME;

static void __set_PRECOMP_NAME(::StringW value) ;

static ::StringW __get_PRECOMP_NAME() ;


// Methods

/// @brief Method DecomposeScalar addr 0xfa7ae4 size 0x234 virtual false final false
static ::ArrayW<Org::BouncyCastle::Math::BigInteger> DecomposeScalar(Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters p, Org::BouncyCastle::Math::BigInteger k) ;

/// @brief Method MapPoint addr 0xfa7e18 size 0x128 virtual false final false
static Org::BouncyCastle::Math::EC::ECPoint MapPoint(Org::BouncyCastle::Math::EC::Endo::ECEndomorphism endomorphism, Org::BouncyCastle::Math::EC::ECPoint p) ;

/// @brief Method CalculateB addr 0xfa7d18 size 0x100 virtual false final false
static Org::BouncyCastle::Math::BigInteger CalculateB(Org::BouncyCastle::Math::BigInteger k, Org::BouncyCastle::Math::BigInteger g, int32_t t) ;

// Ctor Parameters []
explicit EndoUtilities() ;

/// @brief Method .ctor addr 0xfa7fcc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::EC::Endo
NEED_NO_BOX(Org::BouncyCastle::Math::EC::Endo::EndoUtilities);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Endo::EndoUtilities, "Org.BouncyCastle.Math.EC.Endo", "EndoUtilities");
NEED_NO_BOX(Org::BouncyCastle::Math::EC::Endo::Org__BouncyCastle__Math__EC__Endo__EndoUtilities__MapPointCallback);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Endo::Org__BouncyCastle__Math__EC__Endo__EndoUtilities__MapPointCallback, "Org.BouncyCastle.Math.EC.Endo", "EndoUtilities/MapPointCallback");
