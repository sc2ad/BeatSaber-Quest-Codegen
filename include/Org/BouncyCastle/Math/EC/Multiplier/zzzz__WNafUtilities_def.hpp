#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Math::EC::Multiplier {
class PreCompInfo;
}
namespace Org::BouncyCastle::Math::EC {
class ECCurve;
}
namespace Org::BouncyCastle::Math::EC::Multiplier {
class IPreCompCallback;
}
namespace Org::BouncyCastle::Math::EC::Multiplier {
class WNafPreCompInfo;
}
namespace Org::BouncyCastle::Math::EC {
class ECPointMap;
}
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Multiplier {
class Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__ConfigureBasepointCallback;
}
namespace Org::BouncyCastle::Math::EC::Multiplier {
class Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__MapPointCallback;
}
namespace Org::BouncyCastle::Math::EC::Multiplier {
class Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__PrecomputeCallback;
}
namespace Org::BouncyCastle::Math::EC::Multiplier {
class Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__PrecomputeWithPointMapCallback;
}
namespace Org::BouncyCastle::Math::EC::Multiplier {
class WNafUtilities;
}
// Type: ::ConfigureBasepointCallback
namespace Org::BouncyCastle::Math::EC::Multiplier {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1542))
// CS Name: Org.BouncyCastle.Math.EC.Multiplier.WNafUtilities::ConfigureBasepointCallback
class CORDL_TYPE Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__ConfigureBasepointCallback : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback
constexpr operator  Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__ConfigureBasepointCallback() = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__ConfigureBasepointCallback", modifiers: " const&", def_value: None }]
constexpr Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__ConfigureBasepointCallback(Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__ConfigureBasepointCallback const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__ConfigureBasepointCallback", modifiers: "&&", def_value: None }]
constexpr Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__ConfigureBasepointCallback(Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__ConfigureBasepointCallback&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__ConfigureBasepointCallback(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__ConfigureBasepointCallback& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__ConfigureBasepointCallback& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__ConfigureBasepointCallback& operator=(Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__ConfigureBasepointCallback&& o) noexcept = default;
  constexpr Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__ConfigureBasepointCallback& operator=(Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__ConfigureBasepointCallback const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Math::EC::ECCurve __declspec(property(get=__get_m_curve, put=__set_m_curve))  m_curve;

constexpr void __set_m_curve(Org::BouncyCastle::Math::EC::ECCurve value) ;

constexpr Org::BouncyCastle::Math::EC::ECCurve __get_m_curve() const;

 int32_t __declspec(property(get=__get_m_confWidth, put=__set_m_confWidth))  m_confWidth;

constexpr void __set_m_confWidth(int32_t value) ;

constexpr int32_t __get_m_confWidth() const;


// Methods

// Ctor Parameters [CppParam { name: "curve", ty: "Org::BouncyCastle::Math::EC::ECCurve", modifiers: "", def_value: None }, CppParam { name: "confWidth", ty: "int32_t", modifiers: "", def_value: None }]
explicit Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__ConfigureBasepointCallback(Org::BouncyCastle::Math::EC::ECCurve curve, int32_t confWidth) ;

/// @brief Method .ctor addr 0xfaafe4 size 0x30 virtual false final false
 void _ctor(Org::BouncyCastle::Math::EC::ECCurve curve, int32_t confWidth) ;

/// @brief Method Precompute addr 0xfac030 size 0x1b8 virtual true final true
 Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo Precompute(Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo existing) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::EC::Multiplier
// Type: ::MapPointCallback
namespace Org::BouncyCastle::Math::EC::Multiplier {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1543))
// CS Name: Org.BouncyCastle.Math.EC.Multiplier.WNafUtilities::MapPointCallback
class CORDL_TYPE Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__MapPointCallback : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback
constexpr operator  Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__MapPointCallback() = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__MapPointCallback", modifiers: " const&", def_value: None }]
constexpr Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__MapPointCallback(Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__MapPointCallback const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__MapPointCallback", modifiers: "&&", def_value: None }]
constexpr Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__MapPointCallback(Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__MapPointCallback&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__MapPointCallback(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__MapPointCallback& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__MapPointCallback& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__MapPointCallback& operator=(Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__MapPointCallback&& o) noexcept = default;
  constexpr Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__MapPointCallback& operator=(Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__MapPointCallback const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo __declspec(property(get=__get_m_infoP, put=__set_m_infoP))  m_infoP;

constexpr void __set_m_infoP(Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo value) ;

constexpr Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo __get_m_infoP() const;

 bool __declspec(property(get=__get_m_includeNegated, put=__set_m_includeNegated))  m_includeNegated;

constexpr void __set_m_includeNegated(bool value) ;

constexpr bool __get_m_includeNegated() const;

 Org::BouncyCastle::Math::EC::ECPointMap __declspec(property(get=__get_m_pointMap, put=__set_m_pointMap))  m_pointMap;

constexpr void __set_m_pointMap(Org::BouncyCastle::Math::EC::ECPointMap value) ;

constexpr Org::BouncyCastle::Math::EC::ECPointMap __get_m_pointMap() const;


// Methods

// Ctor Parameters [CppParam { name: "infoP", ty: "Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo", modifiers: "", def_value: None }, CppParam { name: "includeNegated", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "pointMap", ty: "Org::BouncyCastle::Math::EC::ECPointMap", modifiers: "", def_value: None }]
explicit Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__MapPointCallback(Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo infoP, bool includeNegated, Org::BouncyCastle::Math::EC::ECPointMap pointMap) ;

/// @brief Method .ctor addr 0xfabcac size 0x40 virtual false final false
 void _ctor(Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo infoP, bool includeNegated, Org::BouncyCastle::Math::EC::ECPointMap pointMap) ;

/// @brief Method Precompute addr 0xfac1e8 size 0x378 virtual true final true
 Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo Precompute(Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo existing) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::EC::Multiplier
// Type: ::PrecomputeCallback
namespace Org::BouncyCastle::Math::EC::Multiplier {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1544))
// CS Name: Org.BouncyCastle.Math.EC.Multiplier.WNafUtilities::PrecomputeCallback
class CORDL_TYPE Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__PrecomputeCallback : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback
constexpr operator  Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__PrecomputeCallback() = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__PrecomputeCallback", modifiers: " const&", def_value: None }]
constexpr Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__PrecomputeCallback(Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__PrecomputeCallback const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__PrecomputeCallback", modifiers: "&&", def_value: None }]
constexpr Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__PrecomputeCallback(Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__PrecomputeCallback&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__PrecomputeCallback(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__PrecomputeCallback& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__PrecomputeCallback& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__PrecomputeCallback& operator=(Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__PrecomputeCallback&& o) noexcept = default;
  constexpr Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__PrecomputeCallback& operator=(Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__PrecomputeCallback const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Math::EC::ECPoint __declspec(property(get=__get_m_p, put=__set_m_p))  m_p;

constexpr void __set_m_p(Org::BouncyCastle::Math::EC::ECPoint value) ;

constexpr Org::BouncyCastle::Math::EC::ECPoint __get_m_p() const;

 int32_t __declspec(property(get=__get_m_minWidth, put=__set_m_minWidth))  m_minWidth;

constexpr void __set_m_minWidth(int32_t value) ;

constexpr int32_t __get_m_minWidth() const;

 bool __declspec(property(get=__get_m_includeNegated, put=__set_m_includeNegated))  m_includeNegated;

constexpr void __set_m_includeNegated(bool value) ;

constexpr bool __get_m_includeNegated() const;


// Methods

// Ctor Parameters [CppParam { name: "p", ty: "Org::BouncyCastle::Math::EC::ECPoint", modifiers: "", def_value: None }, CppParam { name: "minWidth", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "includeNegated", ty: "bool", modifiers: "", def_value: None }]
explicit Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__PrecomputeCallback(Org::BouncyCastle::Math::EC::ECPoint p, int32_t minWidth, bool includeNegated) ;

/// @brief Method .ctor addr 0xfabcec size 0x40 virtual false final false
 void _ctor(Org::BouncyCastle::Math::EC::ECPoint p, int32_t minWidth, bool includeNegated) ;

/// @brief Method Precompute addr 0xfac560 size 0x7e4 virtual true final true
 Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo Precompute(Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo existing) ;

/// @brief Method CheckExisting addr 0xfacd44 size 0x108 virtual false final false
 bool CheckExisting(Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo existingWNaf, int32_t width, int32_t reqPreCompLen, bool includeNegated) ;

/// @brief Method CheckTable addr 0xface4c size 0x1c virtual false final false
 bool CheckTable(::ArrayW<Org::BouncyCastle::Math::EC::ECPoint> table, int32_t reqLen) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::EC::Multiplier
// Type: ::PrecomputeWithPointMapCallback
namespace Org::BouncyCastle::Math::EC::Multiplier {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1545))
// CS Name: Org.BouncyCastle.Math.EC.Multiplier.WNafUtilities::PrecomputeWithPointMapCallback
class CORDL_TYPE Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__PrecomputeWithPointMapCallback : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback
constexpr operator  Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__PrecomputeWithPointMapCallback() = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__PrecomputeWithPointMapCallback", modifiers: " const&", def_value: None }]
constexpr Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__PrecomputeWithPointMapCallback(Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__PrecomputeWithPointMapCallback const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__PrecomputeWithPointMapCallback", modifiers: "&&", def_value: None }]
constexpr Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__PrecomputeWithPointMapCallback(Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__PrecomputeWithPointMapCallback&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__PrecomputeWithPointMapCallback(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__PrecomputeWithPointMapCallback& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__PrecomputeWithPointMapCallback& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__PrecomputeWithPointMapCallback& operator=(Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__PrecomputeWithPointMapCallback&& o) noexcept = default;
  constexpr Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__PrecomputeWithPointMapCallback& operator=(Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__PrecomputeWithPointMapCallback const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Math::EC::ECPoint __declspec(property(get=__get_m_point, put=__set_m_point))  m_point;

constexpr void __set_m_point(Org::BouncyCastle::Math::EC::ECPoint value) ;

constexpr Org::BouncyCastle::Math::EC::ECPoint __get_m_point() const;

 Org::BouncyCastle::Math::EC::ECPointMap __declspec(property(get=__get_m_pointMap, put=__set_m_pointMap))  m_pointMap;

constexpr void __set_m_pointMap(Org::BouncyCastle::Math::EC::ECPointMap value) ;

constexpr Org::BouncyCastle::Math::EC::ECPointMap __get_m_pointMap() const;

 Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo __declspec(property(get=__get_m_fromWNaf, put=__set_m_fromWNaf))  m_fromWNaf;

constexpr void __set_m_fromWNaf(Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo value) ;

constexpr Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo __get_m_fromWNaf() const;

 bool __declspec(property(get=__get_m_includeNegated, put=__set_m_includeNegated))  m_includeNegated;

constexpr void __set_m_includeNegated(bool value) ;

constexpr bool __get_m_includeNegated() const;


// Methods

// Ctor Parameters [CppParam { name: "point", ty: "Org::BouncyCastle::Math::EC::ECPoint", modifiers: "", def_value: None }, CppParam { name: "pointMap", ty: "Org::BouncyCastle::Math::EC::ECPointMap", modifiers: "", def_value: None }, CppParam { name: "fromWNaf", ty: "Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo", modifiers: "", def_value: None }, CppParam { name: "includeNegated", ty: "bool", modifiers: "", def_value: None }]
explicit Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__PrecomputeWithPointMapCallback(Org::BouncyCastle::Math::EC::ECPoint point, Org::BouncyCastle::Math::EC::ECPointMap pointMap, Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo fromWNaf, bool includeNegated) ;

/// @brief Method .ctor addr 0xfabe6c size 0x44 virtual false final false
 void _ctor(Org::BouncyCastle::Math::EC::ECPoint point, Org::BouncyCastle::Math::EC::ECPointMap pointMap, Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo fromWNaf, bool includeNegated) ;

/// @brief Method Precompute addr 0xface68 size 0x408 virtual true final true
 Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo Precompute(Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo existing) ;

/// @brief Method CheckExisting addr 0xfad270 size 0x9c virtual false final false
 bool CheckExisting(Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo existingWNaf, int32_t width, int32_t reqPreCompLen, bool includeNegated) ;

/// @brief Method CheckTable addr 0xfad30c size 0x1c virtual false final false
 bool CheckTable(::ArrayW<Org::BouncyCastle::Math::EC::ECPoint> table, int32_t reqLen) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::EC::Multiplier
// Type: Org.BouncyCastle.Math.EC.Multiplier::WNafUtilities
namespace Org::BouncyCastle::Math::EC::Multiplier {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1546))
// CS Name: Org.BouncyCastle.Math.EC.Multiplier.WNafUtilities
class CORDL_TYPE WNafUtilities : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using PrecomputeWithPointMapCallback = Org::BouncyCastle::Math::EC::Multiplier::Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__PrecomputeWithPointMapCallback;

using PrecomputeCallback = Org::BouncyCastle::Math::EC::Multiplier::Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__PrecomputeCallback;

using MapPointCallback = Org::BouncyCastle::Math::EC::Multiplier::Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__MapPointCallback;

using ConfigureBasepointCallback = Org::BouncyCastle::Math::EC::Multiplier::Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__ConfigureBasepointCallback;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~WNafUtilities() = default;

// Ctor Parameters [CppParam { name: "", ty: "WNafUtilities", modifiers: " const&", def_value: None }]
constexpr WNafUtilities(WNafUtilities const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "WNafUtilities", modifiers: "&&", def_value: None }]
constexpr WNafUtilities(WNafUtilities&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit WNafUtilities(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr WNafUtilities& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr WNafUtilities& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr WNafUtilities& operator=(WNafUtilities&& o) noexcept = default;
  constexpr WNafUtilities& operator=(WNafUtilities const& o) noexcept = default;
                


// Fields

static ::StringW __declspec(property(get=__get_PRECOMP_NAME, put=__set_PRECOMP_NAME))  PRECOMP_NAME;

static void __set_PRECOMP_NAME(::StringW value) ;

static ::StringW __get_PRECOMP_NAME() ;

static ::ArrayW<int32_t> __declspec(property(get=__get_DEFAULT_WINDOW_SIZE_CUTOFFS, put=__set_DEFAULT_WINDOW_SIZE_CUTOFFS))  DEFAULT_WINDOW_SIZE_CUTOFFS;

static void __set_DEFAULT_WINDOW_SIZE_CUTOFFS(::ArrayW<int32_t> value) ;

static ::ArrayW<int32_t> __get_DEFAULT_WINDOW_SIZE_CUTOFFS() ;

static int32_t __declspec(property(get=__get_MAX_WIDTH, put=__set_MAX_WIDTH))  MAX_WIDTH;

static void __set_MAX_WIDTH(int32_t value) ;

static int32_t __get_MAX_WIDTH() ;

static ::ArrayW<Org::BouncyCastle::Math::EC::ECPoint> __declspec(property(get=__get_EMPTY_POINTS, put=__set_EMPTY_POINTS))  EMPTY_POINTS;

static void __set_EMPTY_POINTS(::ArrayW<Org::BouncyCastle::Math::EC::ECPoint> value) ;

static ::ArrayW<Org::BouncyCastle::Math::EC::ECPoint> __get_EMPTY_POINTS() ;


// Methods

/// @brief Method ConfigureBasepoint addr 0xfaae64 size 0x180 virtual false final false
static void ConfigureBasepoint(Org::BouncyCastle::Math::EC::ECPoint p) ;

/// @brief Method GenerateCompactNaf addr 0xfa9c80 size 0x274 virtual false final false
static ::ArrayW<int32_t> GenerateCompactNaf(Org::BouncyCastle::Math::BigInteger k) ;

/// @brief Method GenerateCompactWindowNaf addr 0xfaaa38 size 0x30c virtual false final false
static ::ArrayW<int32_t> GenerateCompactWindowNaf(int32_t width, Org::BouncyCastle::Math::BigInteger k) ;

/// @brief Method GenerateJsf addr 0xfab098 size 0x298 virtual false final false
static ::ArrayW<uint8_t> GenerateJsf(Org::BouncyCastle::Math::BigInteger g, Org::BouncyCastle::Math::BigInteger h) ;

/// @brief Method GenerateNaf addr 0xfab3b4 size 0x188 virtual false final false
static ::ArrayW<uint8_t> GenerateNaf(Org::BouncyCastle::Math::BigInteger k) ;

/// @brief Method GenerateWindowNaf addr 0xfab53c size 0x2d8 virtual false final false
static ::ArrayW<uint8_t> GenerateWindowNaf(int32_t width, Org::BouncyCastle::Math::BigInteger k) ;

/// @brief Method GetNafWeight addr 0xfab814 size 0x64 virtual false final false
static int32_t GetNafWeight(Org::BouncyCastle::Math::BigInteger k) ;

/// @brief Method GetWNafPreCompInfo addr 0xfab878 size 0x98 virtual false final false
static Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo GetWNafPreCompInfo(Org::BouncyCastle::Math::EC::ECPoint p) ;

/// @brief Method GetWNafPreCompInfo addr 0xfab910 size 0x78 virtual false final false
static Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo GetWNafPreCompInfo(Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo preCompInfo) ;

/// @brief Method GetWindowSize addr 0xfaa898 size 0x64 virtual false final false
static int32_t GetWindowSize(int32_t bits) ;

/// @brief Method GetWindowSize addr 0xfaba40 size 0x70 virtual false final false
static int32_t GetWindowSize(int32_t bits, int32_t maxWidth) ;

/// @brief Method GetWindowSize addr 0xfabab0 size 0x70 virtual false final false
static int32_t GetWindowSize(int32_t bits, ::ArrayW<int32_t> windowSizeCutoffs) ;

/// @brief Method GetWindowSize addr 0xfab988 size 0xb8 virtual false final false
static int32_t GetWindowSize(int32_t bits, ::ArrayW<int32_t> windowSizeCutoffs, int32_t maxWidth) ;

/// @brief Method MapPointWithPrecomp addr 0xfabb20 size 0x18c virtual false final false
static Org::BouncyCastle::Math::EC::ECPoint MapPointWithPrecomp(Org::BouncyCastle::Math::EC::ECPoint p, int32_t minWidth, bool includeNegated, Org::BouncyCastle::Math::EC::ECPointMap pointMap) ;

/// @brief Method Precompute addr 0xfaa8fc size 0x13c virtual false final false
static Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo Precompute(Org::BouncyCastle::Math::EC::ECPoint p, int32_t minWidth, bool includeNegated) ;

/// @brief Method PrecomputeWithPointMap addr 0xfabd2c size 0x140 virtual false final false
static Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo PrecomputeWithPointMap(Org::BouncyCastle::Math::EC::ECPoint p, Org::BouncyCastle::Math::EC::ECPointMap pointMap, Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo fromWNaf, bool includeNegated) ;

/// @brief Method Trim addr 0xfab330 size 0x84 virtual false final false
static ::ArrayW<uint8_t> Trim(::ArrayW<uint8_t> a, int32_t length) ;

/// @brief Method Trim addr 0xfab014 size 0x84 virtual false final false
static ::ArrayW<int32_t> Trim(::ArrayW<int32_t> a, int32_t length) ;

/// @brief Method ResizeTable addr 0xfabeb0 size 0x84 virtual false final false
static ::ArrayW<Org::BouncyCastle::Math::EC::ECPoint> ResizeTable(::ArrayW<Org::BouncyCastle::Math::EC::ECPoint> a, int32_t length) ;

// Ctor Parameters []
explicit WNafUtilities() ;

/// @brief Method .ctor addr 0xfac028 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::EC::Multiplier
NEED_NO_BOX(Org::BouncyCastle::Math::EC::Multiplier::Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__ConfigureBasepointCallback);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Multiplier::Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__ConfigureBasepointCallback, "Org.BouncyCastle.Math.EC.Multiplier", "WNafUtilities/ConfigureBasepointCallback");
NEED_NO_BOX(Org::BouncyCastle::Math::EC::Multiplier::Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__MapPointCallback);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Multiplier::Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__MapPointCallback, "Org.BouncyCastle.Math.EC.Multiplier", "WNafUtilities/MapPointCallback");
NEED_NO_BOX(Org::BouncyCastle::Math::EC::Multiplier::Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__PrecomputeCallback);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Multiplier::Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__PrecomputeCallback, "Org.BouncyCastle.Math.EC.Multiplier", "WNafUtilities/PrecomputeCallback");
NEED_NO_BOX(Org::BouncyCastle::Math::EC::Multiplier::Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__PrecomputeWithPointMapCallback);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Multiplier::Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__PrecomputeWithPointMapCallback, "Org.BouncyCastle.Math.EC.Multiplier", "WNafUtilities/PrecomputeWithPointMapCallback");
NEED_NO_BOX(Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities, "Org.BouncyCastle.Math.EC.Multiplier", "WNafUtilities");
