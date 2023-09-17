#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/IO/zzzz__IOException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System {
class Exception;
}
// Forward declare root types
namespace Org::BouncyCastle::Pkcs {
class PkcsIOException;
}
// Type: Org.BouncyCastle.Pkcs::PkcsIOException
namespace Org::BouncyCastle::Pkcs {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3557))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1706))
// CS Name: Org.BouncyCastle.Pkcs.PkcsIOException
class CORDL_TYPE PkcsIOException : public ::System::IO::IOException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~PkcsIOException() = default;

// Ctor Parameters [CppParam { name: "", ty: "PkcsIOException", modifiers: " const&", def_value: None }]
constexpr PkcsIOException(PkcsIOException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PkcsIOException", modifiers: "&&", def_value: None }]
constexpr PkcsIOException(PkcsIOException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PkcsIOException(void* ptr) noexcept : ::System::IO::IOException(ptr) {
}


  constexpr PkcsIOException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PkcsIOException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PkcsIOException& operator=(PkcsIOException&& o) noexcept = default;
  constexpr PkcsIOException& operator=(PkcsIOException const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }]
explicit PkcsIOException(::StringW message) ;

/// @brief Method .ctor addr 0x105b0ec size 0x8 virtual false final false
 void _ctor(::StringW message) ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "underlying", ty: "::System::Exception", modifiers: "", def_value: None }]
explicit PkcsIOException(::StringW message, ::System::Exception underlying) ;

/// @brief Method .ctor addr 0x105a74c size 0x8 virtual false final false
 void _ctor(::StringW message, ::System::Exception underlying) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Pkcs
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Pkcs::PkcsIOException);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Pkcs::PkcsIOException, "Org.BouncyCastle.Pkcs", "PkcsIOException");
