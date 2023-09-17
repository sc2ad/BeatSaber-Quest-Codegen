#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System {
class Exception;
}
// Forward declare root types
namespace Org::BouncyCastle::Pkcs {
class PkcsException;
}
// Type: Org.BouncyCastle.Pkcs::PkcsException
namespace Org::BouncyCastle::Pkcs {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2560))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1705))
// CS Name: Org.BouncyCastle.Pkcs.PkcsException
class CORDL_TYPE PkcsException : public ::System::Exception {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~PkcsException() = default;

// Ctor Parameters [CppParam { name: "", ty: "PkcsException", modifiers: " const&", def_value: None }]
constexpr PkcsException(PkcsException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PkcsException", modifiers: "&&", def_value: None }]
constexpr PkcsException(PkcsException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PkcsException(void* ptr) noexcept : ::System::Exception(ptr) {
}


  constexpr PkcsException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PkcsException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PkcsException& operator=(PkcsException&& o) noexcept = default;
  constexpr PkcsException& operator=(PkcsException const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }]
explicit PkcsException(::StringW message) ;

/// @brief Method .ctor addr 0x105b084 size 0x68 virtual false final false
 void _ctor(::StringW message) ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "underlying", ty: "::System::Exception", modifiers: "", def_value: None }]
explicit PkcsException(::StringW message, ::System::Exception underlying) ;

/// @brief Method .ctor addr 0x105abb4 size 0x70 virtual false final false
 void _ctor(::StringW message, ::System::Exception underlying) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Pkcs
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Pkcs::PkcsException);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Pkcs::PkcsException, "Org.BouncyCastle.Pkcs", "PkcsException");
