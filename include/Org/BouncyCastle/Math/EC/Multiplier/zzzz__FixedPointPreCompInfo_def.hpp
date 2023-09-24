#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
namespace Org::BouncyCastle::Math::EC {
class ECLookupTable;
}
namespace Org::BouncyCastle::Math::EC::Multiplier {
class PreCompInfo;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Multiplier {
class FixedPointPreCompInfo;
}
// Type: Org.BouncyCastle.Math.EC.Multiplier::FixedPointPreCompInfo
namespace Org::BouncyCastle::Math::EC::Multiplier {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1530))
// CS Name: Org.BouncyCastle.Math.EC.Multiplier.FixedPointPreCompInfo
class CORDL_TYPE FixedPointPreCompInfo : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo
constexpr operator  Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~FixedPointPreCompInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "FixedPointPreCompInfo", modifiers: " const&", def_value: None }]
constexpr FixedPointPreCompInfo(FixedPointPreCompInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FixedPointPreCompInfo", modifiers: "&&", def_value: None }]
constexpr FixedPointPreCompInfo(FixedPointPreCompInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FixedPointPreCompInfo(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr FixedPointPreCompInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FixedPointPreCompInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FixedPointPreCompInfo& operator=(FixedPointPreCompInfo&& o) noexcept = default;
  constexpr FixedPointPreCompInfo& operator=(FixedPointPreCompInfo const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Math::EC::ECPoint __declspec(property(get=__get_m_offset, put=__set_m_offset))  m_offset;

constexpr void __set_m_offset(Org::BouncyCastle::Math::EC::ECPoint value) ;

constexpr Org::BouncyCastle::Math::EC::ECPoint __get_m_offset() const;

 Org::BouncyCastle::Math::EC::ECLookupTable __declspec(property(get=__get_m_lookupTable, put=__set_m_lookupTable))  m_lookupTable;

constexpr void __set_m_lookupTable(Org::BouncyCastle::Math::EC::ECLookupTable value) ;

constexpr Org::BouncyCastle::Math::EC::ECLookupTable __get_m_lookupTable() const;

 int32_t __declspec(property(get=__get_m_width, put=__set_m_width))  m_width;

constexpr void __set_m_width(int32_t value) ;

constexpr int32_t __get_m_width() const;


// Properties

 Org::BouncyCastle::Math::EC::ECLookupTable __declspec(property(get=get_LookupTable, put=set_LookupTable))  LookupTable;

 Org::BouncyCastle::Math::EC::ECPoint __declspec(property(get=get_Offset, put=set_Offset))  Offset;

 int32_t __declspec(property(get=get_Width, put=set_Width))  Width;


// Methods

/// @brief Method get_LookupTable addr 0xfa90cc size 0x8 virtual true final false
 Org::BouncyCastle::Math::EC::ECLookupTable get_LookupTable() ;

/// @brief Method set_LookupTable addr 0xfa90d4 size 0x8 virtual true final false
 void set_LookupTable(Org::BouncyCastle::Math::EC::ECLookupTable value) ;

/// @brief Method get_Offset addr 0xfa90dc size 0x8 virtual true final false
 Org::BouncyCastle::Math::EC::ECPoint get_Offset() ;

/// @brief Method set_Offset addr 0xfa90e4 size 0x8 virtual true final false
 void set_Offset(Org::BouncyCastle::Math::EC::ECPoint value) ;

/// @brief Method get_Width addr 0xfa90ec size 0x8 virtual true final false
 int32_t get_Width() ;

/// @brief Method set_Width addr 0xfa90f4 size 0x8 virtual true final false
 void set_Width(int32_t value) ;

static Org::BouncyCastle::Math::EC::Multiplier::FixedPointPreCompInfo New_ctor() ;

/// @brief Method .ctor addr 0xfa90fc size 0x14 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::EC::Multiplier
NEED_NO_BOX(Org::BouncyCastle::Math::EC::Multiplier::FixedPointPreCompInfo);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Multiplier::FixedPointPreCompInfo, "Org.BouncyCastle.Math.EC.Multiplier", "FixedPointPreCompInfo");
