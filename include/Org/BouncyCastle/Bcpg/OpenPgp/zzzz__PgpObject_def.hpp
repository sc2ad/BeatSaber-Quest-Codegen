#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpObject;
}
// Type: Org.BouncyCastle.Bcpg.OpenPgp::PgpObject
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1628))
// CS Name: Org.BouncyCastle.Bcpg.OpenPgp.PgpObject
class CORDL_TYPE PgpObject : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~PgpObject() = default;

// Ctor Parameters [CppParam { name: "", ty: "PgpObject", modifiers: " const&", def_value: None }]
constexpr PgpObject(PgpObject const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PgpObject", modifiers: "&&", def_value: None }]
constexpr PgpObject(PgpObject&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PgpObject(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PgpObject& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PgpObject& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PgpObject& operator=(PgpObject&& o) noexcept = default;
  constexpr PgpObject& operator=(PgpObject const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit PgpObject() ;

/// @brief Method .ctor addr 0x10190fc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg::OpenPgp
NEED_NO_BOX(Org::BouncyCastle::Bcpg::OpenPgp::PgpObject);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Bcpg::OpenPgp::PgpObject, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpObject");
