#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
namespace Org::BouncyCastle::Math::EC::Multiplier {
class Org__BouncyCastle__Math__EC__Multiplier__FixedPointUtilities__FixedPointCallback;
}
namespace Org::BouncyCastle::Math::EC {
class ECCurve;
}
namespace Org::BouncyCastle::Math::EC::Multiplier {
class PreCompInfo;
}
namespace Org::BouncyCastle::Math::EC::Multiplier {
class FixedPointPreCompInfo;
}
namespace Org::BouncyCastle::Math::EC {
class ECLookupTable;
}
namespace Org::BouncyCastle::Math::EC::Multiplier {
class IPreCompCallback;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Multiplier {
class FixedPointUtilities;
}
namespace Org::BouncyCastle::Math::EC::Multiplier {
class Org__BouncyCastle__Math__EC__Multiplier__FixedPointUtilities__FixedPointCallback;
}
// Type: ::FixedPointCallback
namespace Org::BouncyCastle::Math::EC::Multiplier {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1531))
// CS Name: Org.BouncyCastle.Math.EC.Multiplier.FixedPointUtilities::FixedPointCallback
class CORDL_TYPE Org__BouncyCastle__Math__EC__Multiplier__FixedPointUtilities__FixedPointCallback : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback
constexpr operator  Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Org__BouncyCastle__Math__EC__Multiplier__FixedPointUtilities__FixedPointCallback() = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Math__EC__Multiplier__FixedPointUtilities__FixedPointCallback", modifiers: " const&", def_value: None }]
constexpr Org__BouncyCastle__Math__EC__Multiplier__FixedPointUtilities__FixedPointCallback(Org__BouncyCastle__Math__EC__Multiplier__FixedPointUtilities__FixedPointCallback const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Math__EC__Multiplier__FixedPointUtilities__FixedPointCallback", modifiers: "&&", def_value: None }]
constexpr Org__BouncyCastle__Math__EC__Multiplier__FixedPointUtilities__FixedPointCallback(Org__BouncyCastle__Math__EC__Multiplier__FixedPointUtilities__FixedPointCallback&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Org__BouncyCastle__Math__EC__Multiplier__FixedPointUtilities__FixedPointCallback(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Org__BouncyCastle__Math__EC__Multiplier__FixedPointUtilities__FixedPointCallback& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Org__BouncyCastle__Math__EC__Multiplier__FixedPointUtilities__FixedPointCallback& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Org__BouncyCastle__Math__EC__Multiplier__FixedPointUtilities__FixedPointCallback& operator=(Org__BouncyCastle__Math__EC__Multiplier__FixedPointUtilities__FixedPointCallback&& o) noexcept = default;
  constexpr Org__BouncyCastle__Math__EC__Multiplier__FixedPointUtilities__FixedPointCallback& operator=(Org__BouncyCastle__Math__EC__Multiplier__FixedPointUtilities__FixedPointCallback const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Math::EC::ECPoint __declspec(property(get=__get_m_p, put=__set_m_p))  m_p;

constexpr void __set_m_p(Org::BouncyCastle::Math::EC::ECPoint value) ;

constexpr Org::BouncyCastle::Math::EC::ECPoint __get_m_p() const;


// Methods

static Org::BouncyCastle::Math::EC::Multiplier::Org__BouncyCastle__Math__EC__Multiplier__FixedPointUtilities__FixedPointCallback New_ctor(Org::BouncyCastle::Math::EC::ECPoint p) ;

/// @brief Method .ctor addr 0xfa9188 size 0x28 virtual false final false
 void _ctor(Org::BouncyCastle::Math::EC::ECPoint p) ;

/// @brief Method Precompute addr 0xfa9218 size 0x434 virtual true final true
 Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo Precompute(Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo existing) ;

/// @brief Method CheckExisting addr 0xfa964c size 0x38 virtual false final false
 bool CheckExisting(Org::BouncyCastle::Math::EC::Multiplier::FixedPointPreCompInfo existingFP, int32_t n) ;

/// @brief Method CheckTable addr 0xfa9684 size 0xb0 virtual false final false
 bool CheckTable(Org::BouncyCastle::Math::EC::ECLookupTable table, int32_t n) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::EC::Multiplier
// Type: Org.BouncyCastle.Math.EC.Multiplier::FixedPointUtilities
namespace Org::BouncyCastle::Math::EC::Multiplier {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1532))
// CS Name: Org.BouncyCastle.Math.EC.Multiplier.FixedPointUtilities
class CORDL_TYPE FixedPointUtilities : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using FixedPointCallback = Org::BouncyCastle::Math::EC::Multiplier::Org__BouncyCastle__Math__EC__Multiplier__FixedPointUtilities__FixedPointCallback;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~FixedPointUtilities() = default;

// Ctor Parameters [CppParam { name: "", ty: "FixedPointUtilities", modifiers: " const&", def_value: None }]
constexpr FixedPointUtilities(FixedPointUtilities const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FixedPointUtilities", modifiers: "&&", def_value: None }]
constexpr FixedPointUtilities(FixedPointUtilities&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FixedPointUtilities(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr FixedPointUtilities& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FixedPointUtilities& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FixedPointUtilities& operator=(FixedPointUtilities&& o) noexcept = default;
  constexpr FixedPointUtilities& operator=(FixedPointUtilities const& o) noexcept = default;
                


// Fields

static ::StringW __declspec(property(get=__get_PRECOMP_NAME, put=__set_PRECOMP_NAME))  PRECOMP_NAME;

static void __set_PRECOMP_NAME(::StringW value) ;

static ::StringW __get_PRECOMP_NAME() ;


// Methods

/// @brief Method GetCombSize addr 0xfa8f58 size 0x4c virtual false final false
static int32_t GetCombSize(Org::BouncyCastle::Math::EC::ECCurve c) ;

/// @brief Method GetFixedPointPreCompInfo addr 0xfa9110 size 0x78 virtual false final false
static Org::BouncyCastle::Math::EC::Multiplier::FixedPointPreCompInfo GetFixedPointPreCompInfo(Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo preCompInfo) ;

/// @brief Method Precompute addr 0xfa8fa4 size 0x120 virtual false final false
static Org::BouncyCastle::Math::EC::Multiplier::FixedPointPreCompInfo Precompute(Org::BouncyCastle::Math::EC::ECPoint p) ;

static Org::BouncyCastle::Math::EC::Multiplier::FixedPointUtilities New_ctor() ;

/// @brief Method .ctor addr 0xfa9210 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::EC::Multiplier
NEED_NO_BOX(Org::BouncyCastle::Math::EC::Multiplier::FixedPointUtilities);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Multiplier::FixedPointUtilities, "Org.BouncyCastle.Math.EC.Multiplier", "FixedPointUtilities");
NEED_NO_BOX(Org::BouncyCastle::Math::EC::Multiplier::Org__BouncyCastle__Math__EC__Multiplier__FixedPointUtilities__FixedPointCallback);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Multiplier::Org__BouncyCastle__Math__EC__Multiplier__FixedPointUtilities__FixedPointCallback, "Org.BouncyCastle.Math.EC.Multiplier", "FixedPointUtilities/FixedPointCallback");
