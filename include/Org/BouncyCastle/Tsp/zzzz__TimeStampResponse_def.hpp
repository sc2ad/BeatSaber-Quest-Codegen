#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Tsp {
class TimeStampToken;
}
namespace Org::BouncyCastle::Asn1::Tsp {
class TimeStampResp;
}
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1InputStream;
}
namespace Org::BouncyCastle::Asn1::Cmp {
class PkiFailureInfo;
}
namespace Org::BouncyCastle::Tsp {
class TimeStampRequest;
}
// Forward declare root types
namespace Org::BouncyCastle::Tsp {
class TimeStampResponse;
}
// Type: Org.BouncyCastle.Tsp::TimeStampResponse
namespace Org::BouncyCastle::Tsp {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1766))
// CS Name: Org.BouncyCastle.Tsp.TimeStampResponse
class CORDL_TYPE TimeStampResponse : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~TimeStampResponse() = default;

// Ctor Parameters [CppParam { name: "", ty: "TimeStampResponse", modifiers: " const&", def_value: None }]
constexpr TimeStampResponse(TimeStampResponse const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TimeStampResponse", modifiers: "&&", def_value: None }]
constexpr TimeStampResponse(TimeStampResponse&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TimeStampResponse(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TimeStampResponse& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TimeStampResponse& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TimeStampResponse& operator=(TimeStampResponse&& o) noexcept = default;
  constexpr TimeStampResponse& operator=(TimeStampResponse const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::Tsp::TimeStampResp __declspec(property(get=__get_resp, put=__set_resp))  resp;

constexpr void __set_resp(Org::BouncyCastle::Asn1::Tsp::TimeStampResp value) ;

constexpr Org::BouncyCastle::Asn1::Tsp::TimeStampResp __get_resp() const;

 Org::BouncyCastle::Tsp::TimeStampToken __declspec(property(get=__get_timeStampToken, put=__set_timeStampToken))  timeStampToken;

constexpr void __set_timeStampToken(Org::BouncyCastle::Tsp::TimeStampToken value) ;

constexpr Org::BouncyCastle::Tsp::TimeStampToken __get_timeStampToken() const;


// Properties

 int32_t __declspec(property(get=get_Status))  Status;

 Org::BouncyCastle::Tsp::TimeStampToken __declspec(property(get=get_TimeStampToken))  TimeStampToken;


// Methods

// Ctor Parameters [CppParam { name: "resp", ty: "Org::BouncyCastle::Asn1::Tsp::TimeStampResp", modifiers: "", def_value: None }]
explicit TimeStampResponse(Org::BouncyCastle::Asn1::Tsp::TimeStampResp resp) ;

/// @brief Method .ctor addr 0x10c45a4 size 0x80 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Tsp::TimeStampResp resp) ;

// Ctor Parameters [CppParam { name: "resp", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit TimeStampResponse(::ArrayW<uint8_t> resp) ;

/// @brief Method .ctor addr 0x10c4698 size 0x7c virtual false final false
 void _ctor(::ArrayW<uint8_t> resp) ;

// Ctor Parameters [CppParam { name: "input", ty: "System::IO::Stream", modifiers: "", def_value: None }]
explicit TimeStampResponse(System::IO::Stream input) ;

/// @brief Method .ctor addr 0x10c4830 size 0x7c virtual false final false
 void _ctor(System::IO::Stream input) ;

/// @brief Method readTimeStampResp addr 0x10c4714 size 0x11c virtual false final false
static Org::BouncyCastle::Asn1::Tsp::TimeStampResp readTimeStampResp(Org::BouncyCastle::Asn1::Asn1InputStream input) ;

/// @brief Method get_Status addr 0x10c491c size 0x30 virtual false final false
 int32_t get_Status() ;

/// @brief Method GetStatusString addr 0x10c494c size 0x100 virtual false final false
 ::StringW GetStatusString() ;

/// @brief Method GetFailInfo addr 0x10c4a4c size 0x84 virtual false final false
 Org::BouncyCastle::Asn1::Cmp::PkiFailureInfo GetFailInfo() ;

/// @brief Method get_TimeStampToken addr 0x10c4ad0 size 0x8 virtual false final false
 Org::BouncyCastle::Tsp::TimeStampToken get_TimeStampToken() ;

/// @brief Method Validate addr 0x10c4ad8 size 0x32c virtual false final false
 void Validate(Org::BouncyCastle::Tsp::TimeStampRequest request) ;

/// @brief Method GetEncoded addr 0x10c4eec size 0x1c virtual false final false
 ::ArrayW<uint8_t> GetEncoded() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Tsp
NEED_NO_BOX(Org::BouncyCastle::Tsp::TimeStampResponse);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Tsp::TimeStampResponse, "Org.BouncyCastle.Tsp", "TimeStampResponse");
