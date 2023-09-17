#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Asn1 {
class IAsn1Choice;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509CertificateStructure;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::IsisMtt::Ocsp {
struct ____Org__BouncyCastle__Asn1__IsisMtt__Ocsp__RequestedCertificate__Choice;
}
namespace Org::BouncyCastle::Asn1::IsisMtt::Ocsp {
class RequestedCertificate;
}
// Type: ::Choice
namespace Org::BouncyCastle::Asn1::IsisMtt::Ocsp {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(180))
// CS Name: Org.BouncyCastle.Asn1.IsisMtt.Ocsp.RequestedCertificate::Choice
struct CORDL_TYPE ____Org__BouncyCastle__Asn1__IsisMtt__Ocsp__RequestedCertificate__Choice : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____Org__BouncyCastle__Asn1__IsisMtt__Ocsp__RequestedCertificate__Choice(int32_t value__) noexcept;


                    constexpr ____Org__BouncyCastle__Asn1__IsisMtt__Ocsp__RequestedCertificate__Choice(____Org__BouncyCastle__Asn1__IsisMtt__Ocsp__RequestedCertificate__Choice const&) = default;
                    constexpr ____Org__BouncyCastle__Asn1__IsisMtt__Ocsp__RequestedCertificate__Choice(____Org__BouncyCastle__Asn1__IsisMtt__Ocsp__RequestedCertificate__Choice&&) = default;
                    constexpr ____Org__BouncyCastle__Asn1__IsisMtt__Ocsp__RequestedCertificate__Choice& operator=(____Org__BouncyCastle__Asn1__IsisMtt__Ocsp__RequestedCertificate__Choice const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____Org__BouncyCastle__Asn1__IsisMtt__Ocsp__RequestedCertificate__Choice& operator=(____Org__BouncyCastle__Asn1__IsisMtt__Ocsp__RequestedCertificate__Choice&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____Org__BouncyCastle__Asn1__IsisMtt__Ocsp__RequestedCertificate__Choice(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______Org__BouncyCastle__Asn1__IsisMtt__Ocsp__RequestedCertificate__Choice_Unwrapped : int32_t {
__Certificate = -1,
__PublicKeyCertificate = 0,
__AttributeCertificate = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______Org__BouncyCastle__Asn1__IsisMtt__Ocsp__RequestedCertificate__Choice_Unwrapped () const noexcept {
return std::bit_cast<______Org__BouncyCastle__Asn1__IsisMtt__Ocsp__RequestedCertificate__Choice_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Certificate offset 0
static ::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::____Org__BouncyCastle__Asn1__IsisMtt__Ocsp__RequestedCertificate__Choice const Certificate;

/// @brief Field PublicKeyCertificate offset 0
static ::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::____Org__BouncyCastle__Asn1__IsisMtt__Ocsp__RequestedCertificate__Choice const PublicKeyCertificate;

/// @brief Field AttributeCertificate offset 0
static ::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::____Org__BouncyCastle__Asn1__IsisMtt__Ocsp__RequestedCertificate__Choice const AttributeCertificate;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::IsisMtt::Ocsp
// Type: Org.BouncyCastle.Asn1.IsisMtt.Ocsp::RequestedCertificate
namespace Org::BouncyCastle::Asn1::IsisMtt::Ocsp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(181))
// CS Name: Org.BouncyCastle.Asn1.IsisMtt.Ocsp.RequestedCertificate
class CORDL_TYPE RequestedCertificate : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
using Choice = ::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::____Org__BouncyCastle__Asn1__IsisMtt__Ocsp__RequestedCertificate__Choice;

/// @brief Convert operator to ::Org::BouncyCastle::Asn1::IAsn1Choice
constexpr operator  ::Org::BouncyCastle::Asn1::IAsn1Choice() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~RequestedCertificate() = default;

// Ctor Parameters [CppParam { name: "", ty: "RequestedCertificate", modifiers: " const&", def_value: None }]
constexpr RequestedCertificate(RequestedCertificate const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RequestedCertificate", modifiers: "&&", def_value: None }]
constexpr RequestedCertificate(RequestedCertificate&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RequestedCertificate(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr RequestedCertificate& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RequestedCertificate& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RequestedCertificate& operator=(RequestedCertificate&& o) noexcept = default;
  constexpr RequestedCertificate& operator=(RequestedCertificate const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Asn1::X509::X509CertificateStructure __declspec(property(get=__get_cert, put=__set_cert))  cert;

constexpr void __set_cert(::Org::BouncyCastle::Asn1::X509::X509CertificateStructure value) ;

constexpr ::Org::BouncyCastle::Asn1::X509::X509CertificateStructure __get_cert() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_publicKeyCert, put=__set_publicKeyCert))  publicKeyCert;

constexpr void __set_publicKeyCert(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_publicKeyCert() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_attributeCert, put=__set_attributeCert))  attributeCert;

constexpr void __set_attributeCert(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_attributeCert() const;


// Properties

 ::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::____Org__BouncyCastle__Asn1__IsisMtt__Ocsp__RequestedCertificate__Choice __declspec(property(get=get_Type))  Type;


// Methods

/// @brief Method GetInstance addr 0xee7fb0 size 0x1f4 virtual false final false
static ::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate GetInstance(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetInstance addr 0xee82f8 size 0x6c virtual false final false
static ::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject obj, bool isExplicit) ;

// Ctor Parameters [CppParam { name: "tagged", ty: "::Org::BouncyCastle::Asn1::Asn1TaggedObject", modifiers: "", def_value: None }]
explicit RequestedCertificate(::Org::BouncyCastle::Asn1::Asn1TaggedObject tagged) ;

/// @brief Method .ctor addr 0xee81cc size 0x12c virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Asn1TaggedObject tagged) ;

// Ctor Parameters [CppParam { name: "certificate", ty: "::Org::BouncyCastle::Asn1::X509::X509CertificateStructure", modifiers: "", def_value: None }]
explicit RequestedCertificate(::Org::BouncyCastle::Asn1::X509::X509CertificateStructure certificate) ;

/// @brief Method .ctor addr 0xee81a4 size 0x28 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::X509::X509CertificateStructure certificate) ;

// Ctor Parameters [CppParam { name: "type", ty: "::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::____Org__BouncyCastle__Asn1__IsisMtt__Ocsp__RequestedCertificate__Choice", modifiers: "", def_value: None }, CppParam { name: "certificateOctets", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit RequestedCertificate(::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::____Org__BouncyCastle__Asn1__IsisMtt__Ocsp__RequestedCertificate__Choice type, ::ArrayW<uint8_t> certificateOctets) ;

/// @brief Method .ctor addr 0xee8364 size 0xac virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::____Org__BouncyCastle__Asn1__IsisMtt__Ocsp__RequestedCertificate__Choice type, ::ArrayW<uint8_t> certificateOctets) ;

/// @brief Method get_Type addr 0xee8410 size 0x20 virtual false final false
 ::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::____Org__BouncyCastle__Asn1__IsisMtt__Ocsp__RequestedCertificate__Choice get_Type() ;

/// @brief Method GetCertificateBytes addr 0xee8430 size 0x104 virtual false final false
 ::ArrayW<uint8_t> GetCertificateBytes() ;

/// @brief Method ToAsn1Object addr 0xee8534 size 0x104 virtual true final false
 ::Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::IsisMtt::Ocsp
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::____Org__BouncyCastle__Asn1__IsisMtt__Ocsp__RequestedCertificate__Choice, "Org.BouncyCastle.Asn1.IsisMtt.Ocsp", "RequestedCertificate/Choice");
NEED_NO_BOX(::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate, "Org.BouncyCastle.Asn1.IsisMtt.Ocsp", "RequestedCertificate");
