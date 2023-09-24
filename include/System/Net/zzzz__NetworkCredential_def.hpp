#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Security {
class SecureString;
}
namespace System {
class Uri;
}
namespace System::Net {
class ICredentials;
}
// Forward declare root types
namespace System::Net {
class NetworkCredential;
}
// Type: System.Net::NetworkCredential
namespace System::Net {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7932))
// CS Name: System.Net.NetworkCredential
class CORDL_TYPE NetworkCredential : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Net::ICredentials
constexpr operator  System::Net::ICredentials() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~NetworkCredential() = default;

// Ctor Parameters [CppParam { name: "", ty: "NetworkCredential", modifiers: " const&", def_value: None }]
constexpr NetworkCredential(NetworkCredential const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NetworkCredential", modifiers: "&&", def_value: None }]
constexpr NetworkCredential(NetworkCredential&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NetworkCredential(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr NetworkCredential& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NetworkCredential& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NetworkCredential& operator=(NetworkCredential&& o) noexcept = default;
  constexpr NetworkCredential& operator=(NetworkCredential const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_m_domain, put=__set_m_domain))  m_domain;

constexpr void __set_m_domain(::StringW value) ;

constexpr ::StringW __get_m_domain() const;

 ::StringW __declspec(property(get=__get_m_userName, put=__set_m_userName))  m_userName;

constexpr void __set_m_userName(::StringW value) ;

constexpr ::StringW __get_m_userName() const;

 System::Security::SecureString __declspec(property(get=__get_m_password, put=__set_m_password))  m_password;

constexpr void __set_m_password(System::Security::SecureString value) ;

constexpr System::Security::SecureString __get_m_password() const;


// Properties

 ::StringW __declspec(property(get=get_UserName, put=set_UserName))  UserName;

 ::StringW __declspec(property(get=get_Password, put=set_Password))  Password;

 ::StringW __declspec(property(get=get_Domain, put=set_Domain))  Domain;


// Methods

static System::Net::NetworkCredential New_ctor(::StringW userName, ::StringW password) ;

/// @brief Method .ctor addr 0x280d330 size 0x68 virtual false final false
 void _ctor(::StringW userName, ::StringW password) ;

static System::Net::NetworkCredential New_ctor(::StringW userName, ::StringW password, ::StringW domain) ;

/// @brief Method .ctor addr 0x280d398 size 0xc4 virtual false final false
 void _ctor(::StringW userName, ::StringW password, ::StringW domain) ;

/// @brief Method get_UserName addr 0x280d53c size 0x8 virtual false final false
 ::StringW get_UserName() ;

/// @brief Method set_UserName addr 0x280d45c size 0x60 virtual false final false
 void set_UserName(::StringW value) ;

/// @brief Method get_Password addr 0x280d544 size 0xc virtual false final false
 ::StringW get_Password() ;

/// @brief Method set_Password addr 0x280d4bc size 0x20 virtual false final false
 void set_Password(::StringW value) ;

/// @brief Method get_Domain addr 0x280d55c size 0x8 virtual false final false
 ::StringW get_Domain() ;

/// @brief Method set_Domain addr 0x280d4dc size 0x60 virtual false final false
 void set_Domain(::StringW value) ;

/// @brief Method InternalGetUserName addr 0x280d564 size 0x8 virtual false final false
 ::StringW InternalGetUserName() ;

/// @brief Method InternalGetPassword addr 0x280d550 size 0xc virtual false final false
 ::StringW InternalGetPassword() ;

/// @brief Method InternalGetDomain addr 0x280d56c size 0x8 virtual false final false
 ::StringW InternalGetDomain() ;

/// @brief Method GetCredential addr 0x280d574 size 0x4 virtual true final true
 System::Net::NetworkCredential GetCredential(System::Uri uri, ::StringW authType) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
NEED_NO_BOX(System::Net::NetworkCredential);
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkCredential, "System.Net", "NetworkCredential");
