#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Security/zzzz__GeneralSecurityException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System {
class Exception;
}
// Forward declare root types
namespace Org::BouncyCastle::Pkix {
class PkixCertPathBuilderException;
}
// Type: Org.BouncyCastle.Pkix::PkixCertPathBuilderException
namespace Org::BouncyCastle::Pkix {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1717))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1718))
// CS Name: Org.BouncyCastle.Pkix.PkixCertPathBuilderException
class CORDL_TYPE PkixCertPathBuilderException : public Org::BouncyCastle::Security::GeneralSecurityException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~PkixCertPathBuilderException() = default;

// Ctor Parameters [CppParam { name: "", ty: "PkixCertPathBuilderException", modifiers: " const&", def_value: None }]
constexpr PkixCertPathBuilderException(PkixCertPathBuilderException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PkixCertPathBuilderException", modifiers: "&&", def_value: None }]
constexpr PkixCertPathBuilderException(PkixCertPathBuilderException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PkixCertPathBuilderException(void* ptr) noexcept : Org::BouncyCastle::Security::GeneralSecurityException(ptr) {
}


  constexpr PkixCertPathBuilderException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PkixCertPathBuilderException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PkixCertPathBuilderException& operator=(PkixCertPathBuilderException&& o) noexcept = default;
  constexpr PkixCertPathBuilderException& operator=(PkixCertPathBuilderException const& o) noexcept = default;
                


// Methods

static Org::BouncyCastle::Pkix::PkixCertPathBuilderException New_ctor() ;

/// @brief Method .ctor addr 0x1067df8 size 0x4 virtual false final false
 void _ctor() ;

static Org::BouncyCastle::Pkix::PkixCertPathBuilderException New_ctor(::StringW message) ;

/// @brief Method .ctor addr 0x105d4a0 size 0x4 virtual false final false
 void _ctor(::StringW message) ;

static Org::BouncyCastle::Pkix::PkixCertPathBuilderException New_ctor(::StringW message, System::Exception exception) ;

/// @brief Method .ctor addr 0x105dcac size 0x4 virtual false final false
 void _ctor(::StringW message, System::Exception exception) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Pkix
NEED_NO_BOX(Org::BouncyCastle::Pkix::PkixCertPathBuilderException);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Pkix::PkixCertPathBuilderException, "Org.BouncyCastle.Pkix", "PkixCertPathBuilderException");
