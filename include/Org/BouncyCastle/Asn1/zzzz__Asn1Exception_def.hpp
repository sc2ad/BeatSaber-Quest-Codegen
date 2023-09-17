#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/IO/zzzz__IOException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System {
class Exception;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class Asn1Exception;
}
// Type: Org.BouncyCastle.Asn1::Asn1Exception
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3557))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(450))
// CS Name: Org.BouncyCastle.Asn1.Asn1Exception
class CORDL_TYPE Asn1Exception : public ::System::IO::IOException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~Asn1Exception() = default;

// Ctor Parameters [CppParam { name: "", ty: "Asn1Exception", modifiers: " const&", def_value: None }]
constexpr Asn1Exception(Asn1Exception const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Asn1Exception", modifiers: "&&", def_value: None }]
constexpr Asn1Exception(Asn1Exception&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Asn1Exception(void* ptr) noexcept : ::System::IO::IOException(ptr) {
}


  constexpr Asn1Exception& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Asn1Exception& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Asn1Exception& operator=(Asn1Exception&& o) noexcept = default;
  constexpr Asn1Exception& operator=(Asn1Exception const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit Asn1Exception() ;

/// @brief Method .ctor addr 0x1128bb0 size 0x8 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }]
explicit Asn1Exception(::StringW message) ;

/// @brief Method .ctor addr 0x1128bb8 size 0x8 virtual false final false
 void _ctor(::StringW message) ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "exception", ty: "::System::Exception", modifiers: "", def_value: None }]
explicit Asn1Exception(::StringW message, ::System::Exception exception) ;

/// @brief Method .ctor addr 0x1128bc0 size 0x8 virtual false final false
 void _ctor(::StringW message, ::System::Exception exception) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Asn1Exception);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Asn1Exception, "Org.BouncyCastle.Asn1", "Asn1Exception");
