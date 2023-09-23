#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1::Icao {
class DataGroupHash;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1::Icao {
class LdsVersionInfo;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Icao {
class LdsSecurityObject;
}
// Type: Org.BouncyCastle.Asn1.Icao::LdsSecurityObject
namespace Org::BouncyCastle::Asn1::Icao {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(177))
// CS Name: Org.BouncyCastle.Asn1.Icao.LdsSecurityObject
class CORDL_TYPE LdsSecurityObject : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~LdsSecurityObject() = default;

// Ctor Parameters [CppParam { name: "", ty: "LdsSecurityObject", modifiers: " const&", def_value: None }]
constexpr LdsSecurityObject(LdsSecurityObject const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LdsSecurityObject", modifiers: "&&", def_value: None }]
constexpr LdsSecurityObject(LdsSecurityObject&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LdsSecurityObject(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr LdsSecurityObject& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LdsSecurityObject& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LdsSecurityObject& operator=(LdsSecurityObject&& o) noexcept = default;
  constexpr LdsSecurityObject& operator=(LdsSecurityObject const& o) noexcept = default;
                


// Fields

/// @brief Field UBDataGroups offset 0
static constexpr int32_t  UBDataGroups{16};

 Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=__get_version, put=__set_version))  version;

constexpr void __set_version(Org::BouncyCastle::Asn1::DerInteger value) ;

constexpr Org::BouncyCastle::Asn1::DerInteger __get_version() const;

 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=__get_digestAlgorithmIdentifier, put=__set_digestAlgorithmIdentifier))  digestAlgorithmIdentifier;

constexpr void __set_digestAlgorithmIdentifier(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier value) ;

constexpr Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __get_digestAlgorithmIdentifier() const;

 ::ArrayW<Org::BouncyCastle::Asn1::Icao::DataGroupHash> __declspec(property(get=__get_datagroupHash, put=__set_datagroupHash))  datagroupHash;

constexpr void __set_datagroupHash(::ArrayW<Org::BouncyCastle::Asn1::Icao::DataGroupHash> value) ;

constexpr ::ArrayW<Org::BouncyCastle::Asn1::Icao::DataGroupHash> __get_datagroupHash() const;

 Org::BouncyCastle::Asn1::Icao::LdsVersionInfo __declspec(property(get=__get_versionInfo, put=__set_versionInfo))  versionInfo;

constexpr void __set_versionInfo(Org::BouncyCastle::Asn1::Icao::LdsVersionInfo value) ;

constexpr Org::BouncyCastle::Asn1::Icao::LdsVersionInfo __get_versionInfo() const;


// Properties

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_Version))  Version;

 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=get_DigestAlgorithmIdentifier))  DigestAlgorithmIdentifier;

 Org::BouncyCastle::Asn1::Icao::LdsVersionInfo __declspec(property(get=get_VersionInfo))  VersionInfo;


// Methods

/// @brief Method GetInstance addr 0xee6c28 size 0xa4 virtual false final false
static Org::BouncyCastle::Asn1::Icao::LdsSecurityObject GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters [CppParam { name: "seq", ty: "Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit LdsSecurityObject(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xee6ccc size 0x570 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

// Ctor Parameters [CppParam { name: "digestAlgorithmIdentifier", ty: "Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier", modifiers: "", def_value: None }, CppParam { name: "datagroupHash", ty: "::ArrayW<Org::BouncyCastle::Asn1::Icao::DataGroupHash>", modifiers: "", def_value: None }]
explicit LdsSecurityObject(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier digestAlgorithmIdentifier, ::ArrayW<Org::BouncyCastle::Asn1::Icao::DataGroupHash> datagroupHash) ;

/// @brief Method .ctor addr 0xee7430 size 0xac virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier digestAlgorithmIdentifier, ::ArrayW<Org::BouncyCastle::Asn1::Icao::DataGroupHash> datagroupHash) ;

// Ctor Parameters [CppParam { name: "digestAlgorithmIdentifier", ty: "Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier", modifiers: "", def_value: None }, CppParam { name: "datagroupHash", ty: "::ArrayW<Org::BouncyCastle::Asn1::Icao::DataGroupHash>", modifiers: "", def_value: None }, CppParam { name: "versionInfo", ty: "Org::BouncyCastle::Asn1::Icao::LdsVersionInfo", modifiers: "", def_value: None }]
explicit LdsSecurityObject(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier digestAlgorithmIdentifier, ::ArrayW<Org::BouncyCastle::Asn1::Icao::DataGroupHash> datagroupHash, Org::BouncyCastle::Asn1::Icao::LdsVersionInfo versionInfo) ;

/// @brief Method .ctor addr 0xee74dc size 0xb8 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier digestAlgorithmIdentifier, ::ArrayW<Org::BouncyCastle::Asn1::Icao::DataGroupHash> datagroupHash, Org::BouncyCastle::Asn1::Icao::LdsVersionInfo versionInfo) ;

/// @brief Method CheckDatagroupHashSeqSize addr 0xee7384 size 0xac virtual false final false
 void CheckDatagroupHashSeqSize(int32_t size) ;

/// @brief Method get_Version addr 0xee7594 size 0x1c virtual false final false
 Org::BouncyCastle::Math::BigInteger get_Version() ;

/// @brief Method get_DigestAlgorithmIdentifier addr 0xee75b0 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier get_DigestAlgorithmIdentifier() ;

/// @brief Method GetDatagroupHash addr 0xee75b8 size 0x8 virtual false final false
 ::ArrayW<Org::BouncyCastle::Asn1::Icao::DataGroupHash> GetDatagroupHash() ;

/// @brief Method get_VersionInfo addr 0xee75c0 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::Icao::LdsVersionInfo get_VersionInfo() ;

/// @brief Method ToAsn1Object addr 0xee75c8 size 0x1c0 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Icao
NEED_NO_BOX(Org::BouncyCastle::Asn1::Icao::LdsSecurityObject);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Icao::LdsSecurityObject, "Org.BouncyCastle.Asn1.Icao", "LdsSecurityObject");
