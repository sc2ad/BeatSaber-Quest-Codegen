#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class DerPrintableString;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Icao {
class LdsVersionInfo;
}
// Type: Org.BouncyCastle.Asn1.Icao::LdsVersionInfo
namespace Org::BouncyCastle::Asn1::Icao {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(178))
// CS Name: Org.BouncyCastle.Asn1.Icao.LdsVersionInfo
class CORDL_TYPE LdsVersionInfo : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~LdsVersionInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "LdsVersionInfo", modifiers: " const&", def_value: None }]
constexpr LdsVersionInfo(LdsVersionInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LdsVersionInfo", modifiers: "&&", def_value: None }]
constexpr LdsVersionInfo(LdsVersionInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LdsVersionInfo(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr LdsVersionInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LdsVersionInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LdsVersionInfo& operator=(LdsVersionInfo&& o) noexcept = default;
  constexpr LdsVersionInfo& operator=(LdsVersionInfo const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::DerPrintableString __declspec(property(get=__get_ldsVersion, put=__set_ldsVersion))  ldsVersion;

constexpr void __set_ldsVersion(Org::BouncyCastle::Asn1::DerPrintableString value) ;

constexpr Org::BouncyCastle::Asn1::DerPrintableString __get_ldsVersion() const;

 Org::BouncyCastle::Asn1::DerPrintableString __declspec(property(get=__get_unicodeVersion, put=__set_unicodeVersion))  unicodeVersion;

constexpr void __set_unicodeVersion(Org::BouncyCastle::Asn1::DerPrintableString value) ;

constexpr Org::BouncyCastle::Asn1::DerPrintableString __get_unicodeVersion() const;


// Methods

static Org::BouncyCastle::Asn1::Icao::LdsVersionInfo New_ctor(::StringW ldsVersion, ::StringW unicodeVersion) ;

/// @brief Method .ctor addr 0xee7788 size 0xa0 virtual false final false
 void _ctor(::StringW ldsVersion, ::StringW unicodeVersion) ;

static Org::BouncyCastle::Asn1::Icao::LdsVersionInfo New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xee7828 size 0xe8 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method GetInstance addr 0xee72e0 size 0xa4 virtual false final false
static Org::BouncyCastle::Asn1::Icao::LdsVersionInfo GetInstance(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetLdsVersion addr 0xee7910 size 0x20 virtual true final false
 ::StringW GetLdsVersion() ;

/// @brief Method GetUnicodeVersion addr 0xee7930 size 0x20 virtual true final false
 ::StringW GetUnicodeVersion() ;

/// @brief Method ToAsn1Object addr 0xee7950 size 0xf0 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Icao
NEED_NO_BOX(Org::BouncyCastle::Asn1::Icao::LdsVersionInfo);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Icao::LdsVersionInfo, "Org.BouncyCastle.Asn1.Icao", "LdsVersionInfo");
