#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System {
class Exception;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpException;
}
// Type: Org.BouncyCastle.Bcpg.OpenPgp::PgpException
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2560))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1635))
// CS Name: Org.BouncyCastle.Bcpg.OpenPgp.PgpException
class CORDL_TYPE PgpException : public System::Exception {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~PgpException() = default;

// Ctor Parameters [CppParam { name: "", ty: "PgpException", modifiers: " const&", def_value: None }]
constexpr PgpException(PgpException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PgpException", modifiers: "&&", def_value: None }]
constexpr PgpException(PgpException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PgpException(void* ptr) noexcept : System::Exception(ptr) {
}


  constexpr PgpException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PgpException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PgpException& operator=(PgpException&& o) noexcept = default;
  constexpr PgpException& operator=(PgpException const& o) noexcept = default;
                


// Properties

 System::Exception __declspec(property(get=get_UnderlyingException))  UnderlyingException;


// Methods

static Org::BouncyCastle::Bcpg::OpenPgp::PgpException New_ctor() ;

/// @brief Method .ctor addr 0x101d338 size 0x58 virtual false final false
 void _ctor() ;

static Org::BouncyCastle::Bcpg::OpenPgp::PgpException New_ctor(::StringW message) ;

/// @brief Method .ctor addr 0x10193d4 size 0x68 virtual false final false
 void _ctor(::StringW message) ;

static Org::BouncyCastle::Bcpg::OpenPgp::PgpException New_ctor(::StringW message, System::Exception exception) ;

/// @brief Method .ctor addr 0x101d390 size 0x70 virtual false final false
 void _ctor(::StringW message, System::Exception exception) ;

/// @brief Method get_UnderlyingException addr 0x101d400 size 0x8 virtual false final false
 System::Exception get_UnderlyingException() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg::OpenPgp
NEED_NO_BOX(Org::BouncyCastle::Bcpg::OpenPgp::PgpException);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Bcpg::OpenPgp::PgpException, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpException");
