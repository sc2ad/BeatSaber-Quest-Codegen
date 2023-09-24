#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cmp {
class PbmParameter;
}
// Type: Org.BouncyCastle.Asn1.Cmp::PbmParameter
namespace Org::BouncyCastle::Asn1::Cmp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(28))
// CS Name: Org.BouncyCastle.Asn1.Cmp.PbmParameter
class CORDL_TYPE PbmParameter : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~PbmParameter() = default;

// Ctor Parameters [CppParam { name: "", ty: "PbmParameter", modifiers: " const&", def_value: None }]
constexpr PbmParameter(PbmParameter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PbmParameter", modifiers: "&&", def_value: None }]
constexpr PbmParameter(PbmParameter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PbmParameter(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr PbmParameter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PbmParameter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PbmParameter& operator=(PbmParameter&& o) noexcept = default;
  constexpr PbmParameter& operator=(PbmParameter const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::Asn1OctetString __declspec(property(get=__get_salt, put=__set_salt))  salt;

constexpr void __set_salt(Org::BouncyCastle::Asn1::Asn1OctetString value) ;

constexpr Org::BouncyCastle::Asn1::Asn1OctetString __get_salt() const;

 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=__get_owf, put=__set_owf))  owf;

constexpr void __set_owf(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier value) ;

constexpr Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __get_owf() const;

 Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=__get_iterationCount, put=__set_iterationCount))  iterationCount;

constexpr void __set_iterationCount(Org::BouncyCastle::Asn1::DerInteger value) ;

constexpr Org::BouncyCastle::Asn1::DerInteger __get_iterationCount() const;

 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=__get_mac, put=__set_mac))  mac;

constexpr void __set_mac(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier value) ;

constexpr Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __get_mac() const;


// Properties

 Org::BouncyCastle::Asn1::Asn1OctetString __declspec(property(get=get_Salt))  Salt;

 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=get_Owf))  Owf;

 Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=get_IterationCount))  IterationCount;

 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=get_Mac))  Mac;


// Methods

static Org::BouncyCastle::Asn1::Cmp::PbmParameter New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xddbadc size 0xac virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method GetInstance addr 0xddbb88 size 0x188 virtual false final false
static Org::BouncyCastle::Asn1::Cmp::PbmParameter GetInstance(::bs_hook::Il2CppWrapperType obj) ;

static Org::BouncyCastle::Asn1::Cmp::PbmParameter New_ctor(::ArrayW<uint8_t> salt, Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier owf, int32_t iterationCount, Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier mac) ;

/// @brief Method .ctor addr 0xddbd10 size 0xc4 virtual false final false
 void _ctor(::ArrayW<uint8_t> salt, Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier owf, int32_t iterationCount, Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier mac) ;

static Org::BouncyCastle::Asn1::Cmp::PbmParameter New_ctor(Org::BouncyCastle::Asn1::Asn1OctetString salt, Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier owf, Org::BouncyCastle::Asn1::DerInteger iterationCount, Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier mac) ;

/// @brief Method .ctor addr 0xddbdd4 size 0x40 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1OctetString salt, Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier owf, Org::BouncyCastle::Asn1::DerInteger iterationCount, Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier mac) ;

/// @brief Method get_Salt addr 0xddbe14 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::Asn1OctetString get_Salt() ;

/// @brief Method get_Owf addr 0xddbe1c size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier get_Owf() ;

/// @brief Method get_IterationCount addr 0xddbe24 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::DerInteger get_IterationCount() ;

/// @brief Method get_Mac addr 0xddbe2c size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier get_Mac() ;

/// @brief Method ToAsn1Object addr 0xddbe34 size 0x148 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Cmp
NEED_NO_BOX(Org::BouncyCastle::Asn1::Cmp::PbmParameter);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Cmp::PbmParameter, "Org.BouncyCastle.Asn1.Cmp", "PbmParameter");
