#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__InvalidOperationException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System {
class Exception;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class Asn1ParsingException;
}
// Type: Org.BouncyCastle.Asn1::Asn1ParsingException
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2426))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(459))
// CS Name: Org.BouncyCastle.Asn1.Asn1ParsingException
class CORDL_TYPE Asn1ParsingException : public ::System::InvalidOperationException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~Asn1ParsingException() = default;

// Ctor Parameters [CppParam { name: "", ty: "Asn1ParsingException", modifiers: " const&", def_value: None }]
constexpr Asn1ParsingException(Asn1ParsingException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Asn1ParsingException", modifiers: "&&", def_value: None }]
constexpr Asn1ParsingException(Asn1ParsingException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Asn1ParsingException(void* ptr) noexcept : ::System::InvalidOperationException(ptr) {
}


  constexpr Asn1ParsingException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Asn1ParsingException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Asn1ParsingException& operator=(Asn1ParsingException&& o) noexcept = default;
  constexpr Asn1ParsingException& operator=(Asn1ParsingException const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit Asn1ParsingException() ;

/// @brief Method .ctor addr 0x112cf98 size 0x8 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }]
explicit Asn1ParsingException(::StringW message) ;

/// @brief Method .ctor addr 0x112cfa0 size 0x8 virtual false final false
 void _ctor(::StringW message) ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "exception", ty: "::System::Exception", modifiers: "", def_value: None }]
explicit Asn1ParsingException(::StringW message, ::System::Exception exception) ;

/// @brief Method .ctor addr 0x112cfa8 size 0x8 virtual false final false
 void _ctor(::StringW message, ::System::Exception exception) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Asn1ParsingException);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Asn1ParsingException, "Org.BouncyCastle.Asn1", "Asn1ParsingException");
