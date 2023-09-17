#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace System {
template<typename T>
struct Nullable_1;
}
namespace Mono::Security::Interface {
struct MonoSslPolicyErrors;
}
// Forward declare root types
namespace Mono::Security::Interface {
class ValidationResult;
}
// Type: Mono.Security.Interface::ValidationResult
namespace Mono::Security::Interface {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13986))
// CS Name: Mono.Security.Interface.ValidationResult
class CORDL_TYPE ValidationResult : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~ValidationResult() = default;

// Ctor Parameters [CppParam { name: "", ty: "ValidationResult", modifiers: " const&", def_value: None }]
constexpr ValidationResult(ValidationResult const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ValidationResult", modifiers: "&&", def_value: None }]
constexpr ValidationResult(ValidationResult&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ValidationResult(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ValidationResult& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ValidationResult& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ValidationResult& operator=(ValidationResult&& o) noexcept = default;
  constexpr ValidationResult& operator=(ValidationResult const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_trusted, put=__set_trusted))  trusted;

constexpr void __set_trusted(bool value) ;

constexpr bool __get_trusted() const;

 bool __declspec(property(get=__get_user_denied, put=__set_user_denied))  user_denied;

constexpr void __set_user_denied(bool value) ;

constexpr bool __get_user_denied() const;

 int32_t __declspec(property(get=__get_error_code, put=__set_error_code))  error_code;

constexpr void __set_error_code(int32_t value) ;

constexpr int32_t __get_error_code() const;

 ::System::Nullable_1<::Mono::Security::Interface::MonoSslPolicyErrors> __declspec(property(get=__get_policy_errors, put=__set_policy_errors))  policy_errors;

constexpr void __set_policy_errors(::System::Nullable_1<::Mono::Security::Interface::MonoSslPolicyErrors> value) ;

constexpr ::System::Nullable_1<::Mono::Security::Interface::MonoSslPolicyErrors> __get_policy_errors() const;


// Properties

 bool __declspec(property(get=get_Trusted))  Trusted;

 bool __declspec(property(get=get_UserDenied))  UserDenied;


// Methods

// Ctor Parameters [CppParam { name: "trusted", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "user_denied", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "error_code", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "policy_errors", ty: "::System::Nullable_1<::Mono::Security::Interface::MonoSslPolicyErrors>", modifiers: "", def_value: None }]
explicit ValidationResult(bool trusted, bool user_denied, int32_t error_code, ::System::Nullable_1<::Mono::Security::Interface::MonoSslPolicyErrors> policy_errors) ;

/// @brief Method .ctor addr 0x2295440 size 0x48 virtual false final false
 void _ctor(bool trusted, bool user_denied, int32_t error_code, ::System::Nullable_1<::Mono::Security::Interface::MonoSslPolicyErrors> policy_errors) ;

/// @brief Method get_Trusted addr 0x2295488 size 0x8 virtual false final false
 bool get_Trusted() ;

/// @brief Method get_UserDenied addr 0x2295490 size 0x8 virtual false final false
 bool get_UserDenied() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Security::Interface
} // end anonymous namespace
NEED_NO_BOX(::Mono::Security::Interface::ValidationResult);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Interface::ValidationResult, "Mono.Security.Interface", "ValidationResult");
