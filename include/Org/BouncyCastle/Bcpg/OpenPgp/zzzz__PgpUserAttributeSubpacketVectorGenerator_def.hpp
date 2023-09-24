#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::Collections {
class IList;
}
namespace Org::BouncyCastle::Bcpg::Attr {
struct Org__BouncyCastle__Bcpg__Attr__ImageAttrib__Format;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpUserAttributeSubpacketVector;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpUserAttributeSubpacketVectorGenerator;
}
// Type: Org.BouncyCastle.Bcpg.OpenPgp::PgpUserAttributeSubpacketVectorGenerator
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1672))
// CS Name: Org.BouncyCastle.Bcpg.OpenPgp.PgpUserAttributeSubpacketVectorGenerator
class CORDL_TYPE PgpUserAttributeSubpacketVectorGenerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~PgpUserAttributeSubpacketVectorGenerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "PgpUserAttributeSubpacketVectorGenerator", modifiers: " const&", def_value: None }]
constexpr PgpUserAttributeSubpacketVectorGenerator(PgpUserAttributeSubpacketVectorGenerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PgpUserAttributeSubpacketVectorGenerator", modifiers: "&&", def_value: None }]
constexpr PgpUserAttributeSubpacketVectorGenerator(PgpUserAttributeSubpacketVectorGenerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PgpUserAttributeSubpacketVectorGenerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PgpUserAttributeSubpacketVectorGenerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PgpUserAttributeSubpacketVectorGenerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PgpUserAttributeSubpacketVectorGenerator& operator=(PgpUserAttributeSubpacketVectorGenerator&& o) noexcept = default;
  constexpr PgpUserAttributeSubpacketVectorGenerator& operator=(PgpUserAttributeSubpacketVectorGenerator const& o) noexcept = default;
                


// Fields

 System::Collections::IList __declspec(property(get=__get_list, put=__set_list))  list;

constexpr void __set_list(System::Collections::IList value) ;

constexpr System::Collections::IList __get_list() const;


// Methods

/// @brief Method SetImageAttribute addr 0x10415c4 size 0x150 virtual true final false
 void SetImageAttribute(Org::BouncyCastle::Bcpg::Attr::Org__BouncyCastle__Bcpg__Attr__ImageAttrib__Format imageType, ::ArrayW<uint8_t> imageData) ;

/// @brief Method Generate addr 0x1041714 size 0x2c8 virtual true final false
 Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector Generate() ;

static Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVectorGenerator New_ctor() ;

/// @brief Method .ctor addr 0x10419dc size 0x64 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg::OpenPgp
NEED_NO_BOX(Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVectorGenerator);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVectorGenerator, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpUserAttributeSubpacketVectorGenerator");
