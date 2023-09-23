#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Asn1 {
class Asn1InputStream;
}
namespace Org::BouncyCastle::Asn1::Ocsp {
class OcspResponse;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Ocsp {
class OcspResp;
}
// Type: Org.BouncyCastle.Ocsp::OcspResp
namespace Org::BouncyCastle::Ocsp {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1616))
// CS Name: Org.BouncyCastle.Ocsp.OcspResp
class CORDL_TYPE OcspResp : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~OcspResp() = default;

// Ctor Parameters [CppParam { name: "", ty: "OcspResp", modifiers: " const&", def_value: None }]
constexpr OcspResp(OcspResp const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OcspResp", modifiers: "&&", def_value: None }]
constexpr OcspResp(OcspResp&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OcspResp(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr OcspResp& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OcspResp& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OcspResp& operator=(OcspResp&& o) noexcept = default;
  constexpr OcspResp& operator=(OcspResp const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::Ocsp::OcspResponse __declspec(property(get=__get_resp, put=__set_resp))  resp;

constexpr void __set_resp(Org::BouncyCastle::Asn1::Ocsp::OcspResponse value) ;

constexpr Org::BouncyCastle::Asn1::Ocsp::OcspResponse __get_resp() const;


// Properties

 int32_t __declspec(property(get=get_Status))  Status;


// Methods

// Ctor Parameters [CppParam { name: "resp", ty: "Org::BouncyCastle::Asn1::Ocsp::OcspResponse", modifiers: "", def_value: None }]
explicit OcspResp(Org::BouncyCastle::Asn1::Ocsp::OcspResponse resp) ;

/// @brief Method .ctor addr 0x1015b78 size 0x28 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Ocsp::OcspResponse resp) ;

// Ctor Parameters [CppParam { name: "resp", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit OcspResp(::ArrayW<uint8_t> resp) ;

/// @brief Method .ctor addr 0x1015ba0 size 0x74 virtual false final false
 void _ctor(::ArrayW<uint8_t> resp) ;

// Ctor Parameters [CppParam { name: "inStr", ty: "System::IO::Stream", modifiers: "", def_value: None }]
explicit OcspResp(System::IO::Stream inStr) ;

/// @brief Method .ctor addr 0x1015d4c size 0x74 virtual false final false
 void _ctor(System::IO::Stream inStr) ;

// Ctor Parameters [CppParam { name: "aIn", ty: "Org::BouncyCastle::Asn1::Asn1InputStream", modifiers: "", def_value: None }]
explicit OcspResp(Org::BouncyCastle::Asn1::Asn1InputStream aIn) ;

/// @brief Method .ctor addr 0x1015c14 size 0x138 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1InputStream aIn) ;

/// @brief Method get_Status addr 0x1015dc0 size 0x24 virtual false final false
 int32_t get_Status() ;

/// @brief Method GetResponseObject addr 0x1015de4 size 0x1d4 virtual false final false
 ::bs_hook::Il2CppWrapperType GetResponseObject() ;

/// @brief Method GetEncoded addr 0x1015fb8 size 0x1c virtual false final false
 ::ArrayW<uint8_t> GetEncoded() ;

/// @brief Method Equals addr 0x1015fd4 size 0xb0 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x1016084 size 0x1c virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Ocsp
NEED_NO_BOX(Org::BouncyCastle::Ocsp::OcspResp);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Ocsp::OcspResp, "Org.BouncyCastle.Ocsp", "OcspResp");
