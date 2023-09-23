#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::Collections {
class IList;
}
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extensions;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class OcspStatusRequest;
}
// Type: Org.BouncyCastle.Crypto.Tls::OcspStatusRequest
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1258))
// CS Name: Org.BouncyCastle.Crypto.Tls.OcspStatusRequest
class CORDL_TYPE OcspStatusRequest : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~OcspStatusRequest() = default;

// Ctor Parameters [CppParam { name: "", ty: "OcspStatusRequest", modifiers: " const&", def_value: None }]
constexpr OcspStatusRequest(OcspStatusRequest const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OcspStatusRequest", modifiers: "&&", def_value: None }]
constexpr OcspStatusRequest(OcspStatusRequest&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OcspStatusRequest(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr OcspStatusRequest& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OcspStatusRequest& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OcspStatusRequest& operator=(OcspStatusRequest&& o) noexcept = default;
  constexpr OcspStatusRequest& operator=(OcspStatusRequest const& o) noexcept = default;
                


// Fields

 System::Collections::IList __declspec(property(get=__get_mResponderIDList, put=__set_mResponderIDList))  mResponderIDList;

constexpr void __set_mResponderIDList(System::Collections::IList value) ;

constexpr System::Collections::IList __get_mResponderIDList() const;

 Org::BouncyCastle::Asn1::X509::X509Extensions __declspec(property(get=__get_mRequestExtensions, put=__set_mRequestExtensions))  mRequestExtensions;

constexpr void __set_mRequestExtensions(Org::BouncyCastle::Asn1::X509::X509Extensions value) ;

constexpr Org::BouncyCastle::Asn1::X509::X509Extensions __get_mRequestExtensions() const;


// Properties

 System::Collections::IList __declspec(property(get=get_ResponderIDList))  ResponderIDList;

 Org::BouncyCastle::Asn1::X509::X509Extensions __declspec(property(get=get_RequestExtensions))  RequestExtensions;


// Methods

// Ctor Parameters [CppParam { name: "responderIDList", ty: "System::Collections::IList", modifiers: "", def_value: None }, CppParam { name: "requestExtensions", ty: "Org::BouncyCastle::Asn1::X509::X509Extensions", modifiers: "", def_value: None }]
explicit OcspStatusRequest(System::Collections::IList responderIDList, Org::BouncyCastle::Asn1::X509::X509Extensions requestExtensions) ;

/// @brief Method .ctor addr 0xf04f10 size 0x2c virtual false final false
 void _ctor(System::Collections::IList responderIDList, Org::BouncyCastle::Asn1::X509::X509Extensions requestExtensions) ;

/// @brief Method get_ResponderIDList addr 0xf04f3c size 0x8 virtual true final false
 System::Collections::IList get_ResponderIDList() ;

/// @brief Method get_RequestExtensions addr 0xf04f44 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::X509::X509Extensions get_RequestExtensions() ;

/// @brief Method Encode addr 0xf04f4c size 0x3c0 virtual true final false
 void Encode(System::IO::Stream output) ;

/// @brief Method Parse addr 0xf0530c size 0x2a8 virtual false final false
static Org::BouncyCastle::Crypto::Tls::OcspStatusRequest Parse(System::IO::Stream input) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::OcspStatusRequest);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::OcspStatusRequest, "Org.BouncyCastle.Crypto.Tls", "OcspStatusRequest");
