#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Security/zzzz__GeneralSecurityException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System {
class Exception;
}
namespace Org::BouncyCastle::Pkix {
class PkixCertPath;
}
// Forward declare root types
namespace Org::BouncyCastle::Pkix {
class PkixCertPathValidatorException;
}
// Type: Org.BouncyCastle.Pkix::PkixCertPathValidatorException
namespace Org::BouncyCastle::Pkix {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1717))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1723))
// CS Name: Org.BouncyCastle.Pkix.PkixCertPathValidatorException
class CORDL_TYPE PkixCertPathValidatorException : public Org::BouncyCastle::Security::GeneralSecurityException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa8};

virtual ~PkixCertPathValidatorException() = default;

// Ctor Parameters [CppParam { name: "", ty: "PkixCertPathValidatorException", modifiers: " const&", def_value: None }]
constexpr PkixCertPathValidatorException(PkixCertPathValidatorException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PkixCertPathValidatorException", modifiers: "&&", def_value: None }]
constexpr PkixCertPathValidatorException(PkixCertPathValidatorException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PkixCertPathValidatorException(void* ptr) noexcept : Org::BouncyCastle::Security::GeneralSecurityException(ptr) {
}


  constexpr PkixCertPathValidatorException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PkixCertPathValidatorException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PkixCertPathValidatorException& operator=(PkixCertPathValidatorException&& o) noexcept = default;
  constexpr PkixCertPathValidatorException& operator=(PkixCertPathValidatorException const& o) noexcept = default;
                


// Fields

 System::Exception __declspec(property(get=__get_cause, put=__set_cause))  cause;

constexpr void __set_cause(System::Exception value) ;

constexpr System::Exception __get_cause() const;

 Org::BouncyCastle::Pkix::PkixCertPath __declspec(property(get=__get_certPath, put=__set_certPath))  certPath;

constexpr void __set_certPath(Org::BouncyCastle::Pkix::PkixCertPath value) ;

constexpr Org::BouncyCastle::Pkix::PkixCertPath __get_certPath() const;

 int32_t __declspec(property(get=__get_index, put=__set_index))  index;

constexpr void __set_index(int32_t value) ;

constexpr int32_t __get_index() const;


// Properties

 ::StringW __declspec(property(get=get_Message))  Message;

 Org::BouncyCastle::Pkix::PkixCertPath __declspec(property(get=get_CertPath))  CertPath;

 int32_t __declspec(property(get=get_Index))  Index;


// Methods

// Ctor Parameters []
explicit PkixCertPathValidatorException() ;

/// @brief Method .ctor addr 0x1074518 size 0xc virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }]
explicit PkixCertPathValidatorException(::StringW message) ;

/// @brief Method .ctor addr 0x1074524 size 0xc virtual false final false
 void _ctor(::StringW message) ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "cause", ty: "System::Exception", modifiers: "", def_value: None }]
explicit PkixCertPathValidatorException(::StringW message, System::Exception cause) ;

/// @brief Method .ctor addr 0x1060298 size 0x2c virtual false final false
 void _ctor(::StringW message, System::Exception cause) ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "cause", ty: "System::Exception", modifiers: "", def_value: None }, CppParam { name: "certPath", ty: "Org::BouncyCastle::Pkix::PkixCertPath", modifiers: "", def_value: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }]
explicit PkixCertPathValidatorException(::StringW message, System::Exception cause, Org::BouncyCastle::Pkix::PkixCertPath certPath, int32_t index) ;

/// @brief Method .ctor addr 0x106a15c size 0x198 virtual false final false
 void _ctor(::StringW message, System::Exception cause, Org::BouncyCastle::Pkix::PkixCertPath certPath, int32_t index) ;

/// @brief Method get_Message addr 0x1074530 size 0x34 virtual true final false
 ::StringW get_Message() ;

/// @brief Method get_CertPath addr 0x1074564 size 0x8 virtual false final false
 Org::BouncyCastle::Pkix::PkixCertPath get_CertPath() ;

/// @brief Method get_Index addr 0x107456c size 0x8 virtual false final false
 int32_t get_Index() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Pkix
NEED_NO_BOX(Org::BouncyCastle::Pkix::PkixCertPathValidatorException);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Pkix::PkixCertPathValidatorException, "Org.BouncyCastle.Pkix", "PkixCertPathValidatorException");
