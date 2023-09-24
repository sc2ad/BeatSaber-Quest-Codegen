#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Cms {
class CmsReadable;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Cms {
class CmsProcessable;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class CmsProcessableByteArray;
}
// Type: Org.BouncyCastle.Cms::CmsProcessableByteArray
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(645))
// CS Name: Org.BouncyCastle.Cms.CmsProcessableByteArray
class CORDL_TYPE CmsProcessableByteArray : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Cms::CmsProcessable
constexpr operator  Org::BouncyCastle::Cms::CmsProcessable() const noexcept;

/// @brief Convert operator to Org::BouncyCastle::Cms::CmsReadable
constexpr operator  Org::BouncyCastle::Cms::CmsReadable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~CmsProcessableByteArray() = default;

// Ctor Parameters [CppParam { name: "", ty: "CmsProcessableByteArray", modifiers: " const&", def_value: None }]
constexpr CmsProcessableByteArray(CmsProcessableByteArray const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CmsProcessableByteArray", modifiers: "&&", def_value: None }]
constexpr CmsProcessableByteArray(CmsProcessableByteArray&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CmsProcessableByteArray(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CmsProcessableByteArray& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CmsProcessableByteArray& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CmsProcessableByteArray& operator=(CmsProcessableByteArray&& o) noexcept = default;
  constexpr CmsProcessableByteArray& operator=(CmsProcessableByteArray const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_type, put=__set_type))  type;

constexpr void __set_type(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

constexpr Org::BouncyCastle::Asn1::DerObjectIdentifier __get_type() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_bytes, put=__set_bytes))  bytes;

constexpr void __set_bytes(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_bytes() const;


// Properties

 Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=get_Type))  Type;


// Methods

static Org::BouncyCastle::Cms::CmsProcessableByteArray New_ctor(::ArrayW<uint8_t> bytes) ;

/// @brief Method .ctor addr 0x1159e70 size 0x78 virtual false final false
 void _ctor(::ArrayW<uint8_t> bytes) ;

static Org::BouncyCastle::Cms::CmsProcessableByteArray New_ctor(Org::BouncyCastle::Asn1::DerObjectIdentifier type, ::ArrayW<uint8_t> bytes) ;

/// @brief Method .ctor addr 0x1159ee8 size 0x2c virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::DerObjectIdentifier type, ::ArrayW<uint8_t> bytes) ;

/// @brief Method get_Type addr 0x1159f14 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::DerObjectIdentifier get_Type() ;

/// @brief Method GetInputStream addr 0x1159f1c size 0x6c virtual true final false
 System::IO::Stream GetInputStream() ;

/// @brief Method Write addr 0x1159f88 size 0x38 virtual true final false
 void Write(System::IO::Stream zOut) ;

/// @brief Method GetContent addr 0x1159fc0 size 0x1c virtual true final false
 ::bs_hook::Il2CppWrapperType GetContent() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Cms
NEED_NO_BOX(Org::BouncyCastle::Cms::CmsProcessableByteArray);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Cms::CmsProcessableByteArray, "Org.BouncyCastle.Cms", "CmsProcessableByteArray");
