#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace Org::BouncyCastle::Math::EC::Multiplier {
class PreCompInfo;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Multiplier {
class ValidityPreCompInfo;
}
// Type: Org.BouncyCastle.Math.EC.Multiplier::ValidityPreCompInfo
namespace Org::BouncyCastle::Math::EC::Multiplier {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1539))
// CS Name: Org.BouncyCastle.Math.EC.Multiplier.ValidityPreCompInfo
class CORDL_TYPE ValidityPreCompInfo : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo
constexpr operator  Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~ValidityPreCompInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "ValidityPreCompInfo", modifiers: " const&", def_value: None }]
constexpr ValidityPreCompInfo(ValidityPreCompInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ValidityPreCompInfo", modifiers: "&&", def_value: None }]
constexpr ValidityPreCompInfo(ValidityPreCompInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ValidityPreCompInfo(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ValidityPreCompInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ValidityPreCompInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ValidityPreCompInfo& operator=(ValidityPreCompInfo&& o) noexcept = default;
  constexpr ValidityPreCompInfo& operator=(ValidityPreCompInfo const& o) noexcept = default;
                


// Fields

static ::StringW __declspec(property(get=__get_PRECOMP_NAME, put=__set_PRECOMP_NAME))  PRECOMP_NAME;

static void __set_PRECOMP_NAME(::StringW value) ;

static ::StringW __get_PRECOMP_NAME() ;

 bool __declspec(property(get=__get_failed, put=__set_failed))  failed;

constexpr void __set_failed(bool value) ;

constexpr bool __get_failed() const;

 bool __declspec(property(get=__get_curveEquationPassed, put=__set_curveEquationPassed))  curveEquationPassed;

constexpr void __set_curveEquationPassed(bool value) ;

constexpr bool __get_curveEquationPassed() const;

 bool __declspec(property(get=__get_orderPassed, put=__set_orderPassed))  orderPassed;

constexpr void __set_orderPassed(bool value) ;

constexpr bool __get_orderPassed() const;


// Methods

/// @brief Method HasFailed addr 0xfaa4e4 size 0x8 virtual false final false
 bool HasFailed() ;

/// @brief Method ReportFailed addr 0xfaa4ec size 0xc virtual false final false
 void ReportFailed() ;

/// @brief Method HasCurveEquationPassed addr 0xfaa4f8 size 0x8 virtual false final false
 bool HasCurveEquationPassed() ;

/// @brief Method ReportCurveEquationPassed addr 0xfaa500 size 0xc virtual false final false
 void ReportCurveEquationPassed() ;

/// @brief Method HasOrderPassed addr 0xfaa50c size 0x8 virtual false final false
 bool HasOrderPassed() ;

/// @brief Method ReportOrderPassed addr 0xfaa514 size 0xc virtual false final false
 void ReportOrderPassed() ;

static Org::BouncyCastle::Math::EC::Multiplier::ValidityPreCompInfo New_ctor() ;

/// @brief Method .ctor addr 0xfaa580 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::EC::Multiplier
NEED_NO_BOX(Org::BouncyCastle::Math::EC::Multiplier::ValidityPreCompInfo);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Multiplier::ValidityPreCompInfo, "Org.BouncyCastle.Math.EC.Multiplier", "ValidityPreCompInfo");
