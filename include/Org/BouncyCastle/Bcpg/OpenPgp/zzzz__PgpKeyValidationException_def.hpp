#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System {
class Exception;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpKeyValidationException;
}
// Type: Org.BouncyCastle.Bcpg.OpenPgp::PgpKeyValidationException
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1635))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1649))
// CS Name: Org.BouncyCastle.Bcpg.OpenPgp.PgpKeyValidationException
class CORDL_TYPE PgpKeyValidationException : public Org::BouncyCastle::Bcpg::OpenPgp::PgpException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~PgpKeyValidationException() = default;

// Ctor Parameters [CppParam { name: "", ty: "PgpKeyValidationException", modifiers: " const&", def_value: None }]
constexpr PgpKeyValidationException(PgpKeyValidationException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PgpKeyValidationException", modifiers: "&&", def_value: None }]
constexpr PgpKeyValidationException(PgpKeyValidationException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PgpKeyValidationException(void* ptr) noexcept : Org::BouncyCastle::Bcpg::OpenPgp::PgpException(ptr) {
}


  constexpr PgpKeyValidationException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PgpKeyValidationException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PgpKeyValidationException& operator=(PgpKeyValidationException&& o) noexcept = default;
  constexpr PgpKeyValidationException& operator=(PgpKeyValidationException const& o) noexcept = default;
                


// Methods

static Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyValidationException New_ctor() ;

/// @brief Method .ctor addr 0x1023d74 size 0x4 virtual false final false
 void _ctor() ;

static Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyValidationException New_ctor(::StringW message) ;

/// @brief Method .ctor addr 0x1023d78 size 0x4 virtual false final false
 void _ctor(::StringW message) ;

static Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyValidationException New_ctor(::StringW message, System::Exception exception) ;

/// @brief Method .ctor addr 0x1023d7c size 0x4 virtual false final false
 void _ctor(::StringW message, System::Exception exception) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg::OpenPgp
NEED_NO_BOX(Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyValidationException);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyValidationException, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpKeyValidationException");
