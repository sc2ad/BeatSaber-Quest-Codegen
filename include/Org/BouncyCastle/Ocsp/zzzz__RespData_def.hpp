#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509ExtensionBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Ocsp {
class RespID;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extensions;
}
namespace Org::BouncyCastle::Asn1::Ocsp {
class ResponseData;
}
namespace Org::BouncyCastle::Ocsp {
class SingleResp;
}
namespace System {
struct DateTime;
}
// Forward declare root types
namespace Org::BouncyCastle::Ocsp {
class RespData;
}
// Type: Org.BouncyCastle.Ocsp::RespData
namespace Org::BouncyCastle::Ocsp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1606))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1622))
// CS Name: Org.BouncyCastle.Ocsp.RespData
class CORDL_TYPE RespData : public Org::BouncyCastle::X509::X509ExtensionBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~RespData() = default;

// Ctor Parameters [CppParam { name: "", ty: "RespData", modifiers: " const&", def_value: None }]
constexpr RespData(RespData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RespData", modifiers: "&&", def_value: None }]
constexpr RespData(RespData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RespData(void* ptr) noexcept : Org::BouncyCastle::X509::X509ExtensionBase(ptr) {
}


  constexpr RespData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RespData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RespData& operator=(RespData&& o) noexcept = default;
  constexpr RespData& operator=(RespData const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::Ocsp::ResponseData __declspec(property(get=__get_data, put=__set_data))  data;

constexpr void __set_data(Org::BouncyCastle::Asn1::Ocsp::ResponseData value) ;

constexpr Org::BouncyCastle::Asn1::Ocsp::ResponseData __get_data() const;


// Properties

 int32_t __declspec(property(get=get_Version))  Version;

 System::DateTime __declspec(property(get=get_ProducedAt))  ProducedAt;

 Org::BouncyCastle::Asn1::X509::X509Extensions __declspec(property(get=get_ResponseExtensions))  ResponseExtensions;


// Methods

// Ctor Parameters [CppParam { name: "data", ty: "Org::BouncyCastle::Asn1::Ocsp::ResponseData", modifiers: "", def_value: None }]
explicit RespData(Org::BouncyCastle::Asn1::Ocsp::ResponseData data) ;

/// @brief Method .ctor addr 0x10101d8 size 0x28 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Ocsp::ResponseData data) ;

/// @brief Method get_Version addr 0x1018994 size 0x2c virtual false final false
 int32_t get_Version() ;

/// @brief Method GetResponderId addr 0x10189c0 size 0x70 virtual false final false
 Org::BouncyCastle::Ocsp::RespID GetResponderId() ;

/// @brief Method get_ProducedAt addr 0x1018a30 size 0x24 virtual false final false
 System::DateTime get_ProducedAt() ;

/// @brief Method GetResponses addr 0x1018a54 size 0x138 virtual false final false
 ::ArrayW<Org::BouncyCastle::Ocsp::SingleResp> GetResponses() ;

/// @brief Method get_ResponseExtensions addr 0x1018b8c size 0x1c virtual false final false
 Org::BouncyCastle::Asn1::X509::X509Extensions get_ResponseExtensions() ;

/// @brief Method GetX509Extensions addr 0x1018ba8 size 0x1c virtual true final false
 Org::BouncyCastle::Asn1::X509::X509Extensions GetX509Extensions() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Ocsp
NEED_NO_BOX(Org::BouncyCastle::Ocsp::RespData);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Ocsp::RespData, "Org.BouncyCastle.Ocsp", "RespData");
