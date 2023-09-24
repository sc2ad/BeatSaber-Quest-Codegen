#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Security/Principal/zzzz__GenericIdentity_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace System::Net {
class HttpListenerBasicIdentity;
}
// Type: System.Net::HttpListenerBasicIdentity
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2990))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8023))
// CS Name: System.Net.HttpListenerBasicIdentity
class CORDL_TYPE HttpListenerBasicIdentity : public System::Security::Principal::GenericIdentity {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~HttpListenerBasicIdentity() = default;

// Ctor Parameters [CppParam { name: "", ty: "HttpListenerBasicIdentity", modifiers: " const&", def_value: None }]
constexpr HttpListenerBasicIdentity(HttpListenerBasicIdentity const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HttpListenerBasicIdentity", modifiers: "&&", def_value: None }]
constexpr HttpListenerBasicIdentity(HttpListenerBasicIdentity&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HttpListenerBasicIdentity(void* ptr) noexcept : System::Security::Principal::GenericIdentity(ptr) {
}


  constexpr HttpListenerBasicIdentity& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HttpListenerBasicIdentity& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HttpListenerBasicIdentity& operator=(HttpListenerBasicIdentity&& o) noexcept = default;
  constexpr HttpListenerBasicIdentity& operator=(HttpListenerBasicIdentity const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_password, put=__set_password))  password;

constexpr void __set_password(::StringW value) ;

constexpr ::StringW __get_password() const;


// Methods

static System::Net::HttpListenerBasicIdentity New_ctor(::StringW username, ::StringW password) ;

/// @brief Method .ctor addr 0x2836e10 size 0x68 virtual false final false
 void _ctor(::StringW username, ::StringW password) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
NEED_NO_BOX(System::Net::HttpListenerBasicIdentity);
DEFINE_IL2CPP_ARG_TYPE(System::Net::HttpListenerBasicIdentity, "System.Net", "HttpListenerBasicIdentity");
