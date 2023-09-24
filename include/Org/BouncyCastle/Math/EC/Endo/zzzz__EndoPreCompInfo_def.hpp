#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Math::EC::Multiplier {
class PreCompInfo;
}
namespace Org::BouncyCastle::Math::EC::Endo {
class ECEndomorphism;
}
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Endo {
class EndoPreCompInfo;
}
// Type: Org.BouncyCastle.Math.EC.Endo::EndoPreCompInfo
namespace Org::BouncyCastle::Math::EC::Endo {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1517))
// CS Name: Org.BouncyCastle.Math.EC.Endo.EndoPreCompInfo
class CORDL_TYPE EndoPreCompInfo : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo
constexpr operator  Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~EndoPreCompInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "EndoPreCompInfo", modifiers: " const&", def_value: None }]
constexpr EndoPreCompInfo(EndoPreCompInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EndoPreCompInfo", modifiers: "&&", def_value: None }]
constexpr EndoPreCompInfo(EndoPreCompInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EndoPreCompInfo(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr EndoPreCompInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EndoPreCompInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EndoPreCompInfo& operator=(EndoPreCompInfo&& o) noexcept = default;
  constexpr EndoPreCompInfo& operator=(EndoPreCompInfo const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Math::EC::Endo::ECEndomorphism __declspec(property(get=__get_m_endomorphism, put=__set_m_endomorphism))  m_endomorphism;

constexpr void __set_m_endomorphism(Org::BouncyCastle::Math::EC::Endo::ECEndomorphism value) ;

constexpr Org::BouncyCastle::Math::EC::Endo::ECEndomorphism __get_m_endomorphism() const;

 Org::BouncyCastle::Math::EC::ECPoint __declspec(property(get=__get_m_mappedPoint, put=__set_m_mappedPoint))  m_mappedPoint;

constexpr void __set_m_mappedPoint(Org::BouncyCastle::Math::EC::ECPoint value) ;

constexpr Org::BouncyCastle::Math::EC::ECPoint __get_m_mappedPoint() const;


// Properties

 Org::BouncyCastle::Math::EC::Endo::ECEndomorphism __declspec(property(get=get_Endomorphism, put=set_Endomorphism))  Endomorphism;

 Org::BouncyCastle::Math::EC::ECPoint __declspec(property(get=get_MappedPoint, put=set_MappedPoint))  MappedPoint;


// Methods

/// @brief Method get_Endomorphism addr 0xfa7abc size 0x8 virtual true final false
 Org::BouncyCastle::Math::EC::Endo::ECEndomorphism get_Endomorphism() ;

/// @brief Method set_Endomorphism addr 0xfa7ac4 size 0x8 virtual true final false
 void set_Endomorphism(Org::BouncyCastle::Math::EC::Endo::ECEndomorphism value) ;

/// @brief Method get_MappedPoint addr 0xfa7acc size 0x8 virtual true final false
 Org::BouncyCastle::Math::EC::ECPoint get_MappedPoint() ;

/// @brief Method set_MappedPoint addr 0xfa7ad4 size 0x8 virtual true final false
 void set_MappedPoint(Org::BouncyCastle::Math::EC::ECPoint value) ;

static Org::BouncyCastle::Math::EC::Endo::EndoPreCompInfo New_ctor() ;

/// @brief Method .ctor addr 0xfa7adc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::EC::Endo
NEED_NO_BOX(Org::BouncyCastle::Math::EC::Endo::EndoPreCompInfo);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Endo::EndoPreCompInfo, "Org.BouncyCastle.Math.EC.Endo", "EndoPreCompInfo");
