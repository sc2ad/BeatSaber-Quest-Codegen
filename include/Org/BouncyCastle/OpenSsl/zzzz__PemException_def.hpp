#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/IO/zzzz__IOException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System {
class Exception;
}
// Forward declare root types
namespace Org::BouncyCastle::OpenSsl {
class PemException;
}
// Type: Org.BouncyCastle.OpenSsl::PemException
namespace Org::BouncyCastle::OpenSsl {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3557))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1684))
// CS Name: Org.BouncyCastle.OpenSsl.PemException
class CORDL_TYPE PemException : public System::IO::IOException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~PemException() = default;

// Ctor Parameters [CppParam { name: "", ty: "PemException", modifiers: " const&", def_value: None }]
constexpr PemException(PemException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PemException", modifiers: "&&", def_value: None }]
constexpr PemException(PemException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PemException(void* ptr) noexcept : System::IO::IOException(ptr) {
}


  constexpr PemException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PemException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PemException& operator=(PemException&& o) noexcept = default;
  constexpr PemException& operator=(PemException const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }]
explicit PemException(::StringW message) ;

/// @brief Method .ctor addr 0x10453e8 size 0x8 virtual false final false
 void _ctor(::StringW message) ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "exception", ty: "System::Exception", modifiers: "", def_value: None }]
explicit PemException(::StringW message, System::Exception exception) ;

/// @brief Method .ctor addr 0x10453f0 size 0x8 virtual false final false
 void _ctor(::StringW message, System::Exception exception) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::OpenSsl
NEED_NO_BOX(Org::BouncyCastle::OpenSsl::PemException);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::OpenSsl::PemException, "Org.BouncyCastle.OpenSsl", "PemException");
