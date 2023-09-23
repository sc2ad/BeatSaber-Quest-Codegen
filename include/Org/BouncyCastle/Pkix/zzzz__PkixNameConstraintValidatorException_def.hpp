#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace Org::BouncyCastle::Pkix {
class PkixNameConstraintValidatorException;
}
// Type: Org.BouncyCastle.Pkix::PkixNameConstraintValidatorException
namespace Org::BouncyCastle::Pkix {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2560))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1727))
// CS Name: Org.BouncyCastle.Pkix.PkixNameConstraintValidatorException
class CORDL_TYPE PkixNameConstraintValidatorException : public System::Exception {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~PkixNameConstraintValidatorException() = default;

// Ctor Parameters [CppParam { name: "", ty: "PkixNameConstraintValidatorException", modifiers: " const&", def_value: None }]
constexpr PkixNameConstraintValidatorException(PkixNameConstraintValidatorException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PkixNameConstraintValidatorException", modifiers: "&&", def_value: None }]
constexpr PkixNameConstraintValidatorException(PkixNameConstraintValidatorException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PkixNameConstraintValidatorException(void* ptr) noexcept : System::Exception(ptr) {
}


  constexpr PkixNameConstraintValidatorException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PkixNameConstraintValidatorException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PkixNameConstraintValidatorException& operator=(PkixNameConstraintValidatorException&& o) noexcept = default;
  constexpr PkixNameConstraintValidatorException& operator=(PkixNameConstraintValidatorException const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "msg", ty: "::StringW", modifiers: "", def_value: None }]
explicit PkixNameConstraintValidatorException(::StringW msg) ;

/// @brief Method .ctor addr 0x107ee24 size 0x68 virtual false final false
 void _ctor(::StringW msg) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Pkix
NEED_NO_BOX(Org::BouncyCastle::Pkix::PkixNameConstraintValidatorException);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Pkix::PkixNameConstraintValidatorException, "Org.BouncyCastle.Pkix", "PkixNameConstraintValidatorException");
