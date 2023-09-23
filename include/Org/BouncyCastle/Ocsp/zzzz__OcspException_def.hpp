#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System {
class Exception;
}
// Forward declare root types
namespace Org::BouncyCastle::Ocsp {
class OcspException;
}
// Type: Org.BouncyCastle.Ocsp::OcspException
namespace Org::BouncyCastle::Ocsp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2560))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1612))
// CS Name: Org.BouncyCastle.Ocsp.OcspException
class CORDL_TYPE OcspException : public System::Exception {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~OcspException() = default;

// Ctor Parameters [CppParam { name: "", ty: "OcspException", modifiers: " const&", def_value: None }]
constexpr OcspException(OcspException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OcspException", modifiers: "&&", def_value: None }]
constexpr OcspException(OcspException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OcspException(void* ptr) noexcept : System::Exception(ptr) {
}


  constexpr OcspException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OcspException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OcspException& operator=(OcspException&& o) noexcept = default;
  constexpr OcspException& operator=(OcspException const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit OcspException() ;

/// @brief Method .ctor addr 0x10133dc size 0x58 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }]
explicit OcspException(::StringW message) ;

/// @brief Method .ctor addr 0x1013434 size 0x68 virtual false final false
 void _ctor(::StringW message) ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "e", ty: "System::Exception", modifiers: "", def_value: None }]
explicit OcspException(::StringW message, System::Exception e) ;

/// @brief Method .ctor addr 0x100fc38 size 0x70 virtual false final false
 void _ctor(::StringW message, System::Exception e) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Ocsp
NEED_NO_BOX(Org::BouncyCastle::Ocsp::OcspException);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Ocsp::OcspException, "Org.BouncyCastle.Ocsp", "OcspException");
