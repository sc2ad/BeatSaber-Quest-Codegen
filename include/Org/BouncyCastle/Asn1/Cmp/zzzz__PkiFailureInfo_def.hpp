#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerBitString_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Asn1 {
class DerBitString;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cmp {
class PkiFailureInfo;
}
// Type: Org.BouncyCastle.Asn1.Cmp::PkiFailureInfo
namespace Org::BouncyCastle::Asn1::Cmp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(34))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(35))
// CS Name: Org.BouncyCastle.Asn1.Cmp.PkiFailureInfo
class CORDL_TYPE PkiFailureInfo : public Org::BouncyCastle::Asn1::DerBitString {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~PkiFailureInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "PkiFailureInfo", modifiers: " const&", def_value: None }]
constexpr PkiFailureInfo(PkiFailureInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PkiFailureInfo", modifiers: "&&", def_value: None }]
constexpr PkiFailureInfo(PkiFailureInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PkiFailureInfo(void* ptr) noexcept : Org::BouncyCastle::Asn1::DerBitString(ptr) {
}


  constexpr PkiFailureInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PkiFailureInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PkiFailureInfo& operator=(PkiFailureInfo&& o) noexcept = default;
  constexpr PkiFailureInfo& operator=(PkiFailureInfo const& o) noexcept = default;
                


// Fields

/// @brief Field BadAlg offset 0
static constexpr int32_t  BadAlg{128};

/// @brief Field BadMessageCheck offset 0
static constexpr int32_t  BadMessageCheck{64};

/// @brief Field BadRequest offset 0
static constexpr int32_t  BadRequest{32};

/// @brief Field BadTime offset 0
static constexpr int32_t  BadTime{16};

/// @brief Field BadCertId offset 0
static constexpr int32_t  BadCertId{8};

/// @brief Field BadDataFormat offset 0
static constexpr int32_t  BadDataFormat{4};

/// @brief Field WrongAuthority offset 0
static constexpr int32_t  WrongAuthority{2};

/// @brief Field IncorrectData offset 0
static constexpr int32_t  IncorrectData{1};

/// @brief Field MissingTimeStamp offset 0
static constexpr int32_t  MissingTimeStamp{32768};

/// @brief Field BadPop offset 0
static constexpr int32_t  BadPop{16384};

/// @brief Field CertRevoked offset 0
static constexpr int32_t  CertRevoked{8192};

/// @brief Field CertConfirmed offset 0
static constexpr int32_t  CertConfirmed{4096};

/// @brief Field WrongIntegrity offset 0
static constexpr int32_t  WrongIntegrity{2048};

/// @brief Field BadRecipientNonce offset 0
static constexpr int32_t  BadRecipientNonce{1024};

/// @brief Field TimeNotAvailable offset 0
static constexpr int32_t  TimeNotAvailable{512};

/// @brief Field UnacceptedPolicy offset 0
static constexpr int32_t  UnacceptedPolicy{256};

/// @brief Field UnacceptedExtension offset 0
static constexpr int32_t  UnacceptedExtension{8388608};

/// @brief Field AddInfoNotAvailable offset 0
static constexpr int32_t  AddInfoNotAvailable{4194304};

/// @brief Field BadSenderNonce offset 0
static constexpr int32_t  BadSenderNonce{2097152};

/// @brief Field BadCertTemplate offset 0
static constexpr int32_t  BadCertTemplate{1048576};

/// @brief Field SignerNotTrusted offset 0
static constexpr int32_t  SignerNotTrusted{524288};

/// @brief Field TransactionIdInUse offset 0
static constexpr int32_t  TransactionIdInUse{262144};

/// @brief Field UnsupportedVersion offset 0
static constexpr int32_t  UnsupportedVersion{131072};

/// @brief Field NotAuthorized offset 0
static constexpr int32_t  NotAuthorized{65536};

/// @brief Field SystemUnavail offset 0
static constexpr int32_t  SystemUnavail{-2147483648};

/// @brief Field SystemFailure offset 0
static constexpr int32_t  SystemFailure{1073741824};

/// @brief Field DuplicateCertReq offset 0
static constexpr int32_t  DuplicateCertReq{536870912};


// Methods

// Ctor Parameters [CppParam { name: "info", ty: "int32_t", modifiers: "", def_value: None }]
explicit PkiFailureInfo(int32_t info) ;

/// @brief Method .ctor addr 0xdde154 size 0x64 virtual false final false
 void _ctor(int32_t info) ;

// Ctor Parameters [CppParam { name: "info", ty: "Org::BouncyCastle::Asn1::DerBitString", modifiers: "", def_value: None }]
explicit PkiFailureInfo(Org::BouncyCastle::Asn1::DerBitString info) ;

/// @brief Method .ctor addr 0xdde1b8 size 0x90 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::DerBitString info) ;

/// @brief Method ToString addr 0xdde248 size 0x98 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Cmp
NEED_NO_BOX(Org::BouncyCastle::Asn1::Cmp::PkiFailureInfo);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Cmp::PkiFailureInfo, "Org.BouncyCastle.Asn1.Cmp", "PkiFailureInfo");
