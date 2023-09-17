#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System {
struct DateTime;
}
namespace Mono::Security {
class ASN1;
}
// Forward declare root types
namespace Mono::Security {
class ASN1Convert;
}
// Type: Mono.Security::ASN1Convert
namespace Mono::Security {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13949))
// CS Name: Mono.Security.ASN1Convert
class CORDL_TYPE ASN1Convert : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ASN1Convert() = default;

// Ctor Parameters [CppParam { name: "", ty: "ASN1Convert", modifiers: " const&", def_value: None }]
constexpr ASN1Convert(ASN1Convert const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ASN1Convert", modifiers: "&&", def_value: None }]
constexpr ASN1Convert(ASN1Convert&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ASN1Convert(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ASN1Convert& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ASN1Convert& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ASN1Convert& operator=(ASN1Convert&& o) noexcept = default;
  constexpr ASN1Convert& operator=(ASN1Convert const& o) noexcept = default;
                


// Methods

/// @brief Method FromInt32 addr 0x228075c size 0x150 virtual false final false
static ::Mono::Security::ASN1 FromInt32(int32_t value) ;

/// @brief Method FromOid addr 0x22808c4 size 0xe8 virtual false final false
static ::Mono::Security::ASN1 FromOid(::StringW oid) ;

/// @brief Method FromUnsignedBigInteger addr 0x22809ac size 0x11c virtual false final false
static ::Mono::Security::ASN1 FromUnsignedBigInteger(::ArrayW<uint8_t> big) ;

/// @brief Method ToInt32 addr 0x2280ac8 size 0x118 virtual false final false
static int32_t ToInt32(::Mono::Security::ASN1 asn1) ;

/// @brief Method ToOid addr 0x2280be0 size 0x28c virtual false final false
static ::StringW ToOid(::Mono::Security::ASN1 asn1) ;

/// @brief Method ToDateTime addr 0x2280e6c size 0x55c virtual false final false
static ::System::DateTime ToDateTime(::Mono::Security::ASN1 time) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Security
} // end anonymous namespace
NEED_NO_BOX(::Mono::Security::ASN1Convert);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::ASN1Convert, "Mono.Security", "ASN1Convert");
