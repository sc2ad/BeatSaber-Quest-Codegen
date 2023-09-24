#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System {
class Exception;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpDataValidationException;
}
// Type: Org.BouncyCastle.Bcpg.OpenPgp::PgpDataValidationException
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1635))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1636))
// CS Name: Org.BouncyCastle.Bcpg.OpenPgp.PgpDataValidationException
class CORDL_TYPE PgpDataValidationException : public Org::BouncyCastle::Bcpg::OpenPgp::PgpException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~PgpDataValidationException() = default;

// Ctor Parameters [CppParam { name: "", ty: "PgpDataValidationException", modifiers: " const&", def_value: None }]
constexpr PgpDataValidationException(PgpDataValidationException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PgpDataValidationException", modifiers: "&&", def_value: None }]
constexpr PgpDataValidationException(PgpDataValidationException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PgpDataValidationException(void* ptr) noexcept : Org::BouncyCastle::Bcpg::OpenPgp::PgpException(ptr) {
}


  constexpr PgpDataValidationException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PgpDataValidationException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PgpDataValidationException& operator=(PgpDataValidationException&& o) noexcept = default;
  constexpr PgpDataValidationException& operator=(PgpDataValidationException const& o) noexcept = default;
                


// Methods

static Org::BouncyCastle::Bcpg::OpenPgp::PgpDataValidationException New_ctor() ;

/// @brief Method .ctor addr 0x101d408 size 0x4 virtual false final false
 void _ctor() ;

static Org::BouncyCastle::Bcpg::OpenPgp::PgpDataValidationException New_ctor(::StringW message) ;

/// @brief Method .ctor addr 0x101d40c size 0x4 virtual false final false
 void _ctor(::StringW message) ;

static Org::BouncyCastle::Bcpg::OpenPgp::PgpDataValidationException New_ctor(::StringW message, System::Exception exception) ;

/// @brief Method .ctor addr 0x101d410 size 0x4 virtual false final false
 void _ctor(::StringW message, System::Exception exception) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg::OpenPgp
NEED_NO_BOX(Org::BouncyCastle::Bcpg::OpenPgp::PgpDataValidationException);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Bcpg::OpenPgp::PgpDataValidationException, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpDataValidationException");
