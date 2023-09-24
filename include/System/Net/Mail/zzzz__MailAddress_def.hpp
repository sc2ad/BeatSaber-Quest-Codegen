#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Text {
class Encoding;
}
namespace System::Net::Mime {
class EncodedStreamFactory;
}
// Forward declare root types
namespace System::Net::Mail {
class MailAddress;
}
// Type: System.Net.Mail::MailAddress
namespace System::Net::Mail {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8233))
// CS Name: System.Net.Mail.MailAddress
class CORDL_TYPE MailAddress : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MailAddress() = default;

// Ctor Parameters [CppParam { name: "", ty: "MailAddress", modifiers: " const&", def_value: None }]
constexpr MailAddress(MailAddress const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MailAddress", modifiers: "&&", def_value: None }]
constexpr MailAddress(MailAddress&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MailAddress(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MailAddress& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MailAddress& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MailAddress& operator=(MailAddress&& o) noexcept = default;
  constexpr MailAddress& operator=(MailAddress const& o) noexcept = default;
                


// Fields

 System::Text::Encoding __declspec(property(get=__get__displayNameEncoding, put=__set__displayNameEncoding))  _displayNameEncoding;

constexpr void __set__displayNameEncoding(System::Text::Encoding value) ;

constexpr System::Text::Encoding __get__displayNameEncoding() const;

 ::StringW __declspec(property(get=__get__displayName, put=__set__displayName))  _displayName;

constexpr void __set__displayName(::StringW value) ;

constexpr ::StringW __get__displayName() const;

 ::StringW __declspec(property(get=__get__userName, put=__set__userName))  _userName;

constexpr void __set__userName(::StringW value) ;

constexpr ::StringW __get__userName() const;

 ::StringW __declspec(property(get=__get__host, put=__set__host))  _host;

constexpr void __set__host(::StringW value) ;

constexpr ::StringW __get__host() const;

static System::Net::Mime::EncodedStreamFactory __declspec(property(get=__get_s_encoderFactory, put=__set_s_encoderFactory))  s_encoderFactory;

static void __set_s_encoderFactory(System::Net::Mime::EncodedStreamFactory value) ;

static System::Net::Mime::EncodedStreamFactory __get_s_encoderFactory() ;


// Properties

 ::StringW __declspec(property(get=get_DisplayName))  DisplayName;

 ::StringW __declspec(property(get=get_Address))  Address;

 ::StringW __declspec(property(get=get_SmtpAddress))  SmtpAddress;


// Methods

static System::Net::Mail::MailAddress New_ctor(::StringW displayName, ::StringW userName, ::StringW domain) ;

/// @brief Method .ctor addr 0x276ffec size 0x80 virtual false final false
 void _ctor(::StringW displayName, ::StringW userName, ::StringW domain) ;

static System::Net::Mail::MailAddress New_ctor(::StringW address) ;

/// @brief Method .ctor addr 0x2770900 size 0xc virtual false final false
 void _ctor(::StringW address) ;

static System::Net::Mail::MailAddress New_ctor(::StringW address, ::StringW displayName, System::Text::Encoding displayNameEncoding) ;

/// @brief Method .ctor addr 0x277090c size 0x24c virtual false final false
 void _ctor(::StringW address, ::StringW displayName, System::Text::Encoding displayNameEncoding) ;

/// @brief Method get_DisplayName addr 0x2770b58 size 0x8 virtual false final false
 ::StringW get_DisplayName() ;

/// @brief Method get_Address addr 0x2770b60 size 0x4c virtual false final false
 ::StringW get_Address() ;

/// @brief Method get_SmtpAddress addr 0x2770bac size 0x78 virtual false final false
 ::StringW get_SmtpAddress() ;

/// @brief Method ToString addr 0x2770c24 size 0xa4 virtual true final false
 ::StringW ToString() ;

/// @brief Method Equals addr 0x2770cc8 size 0x64 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method GetHashCode addr 0x2770d2c size 0x28 virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Mail
NEED_NO_BOX(System::Net::Mail::MailAddress);
DEFINE_IL2CPP_ARG_TYPE(System::Net::Mail::MailAddress, "System.Net.Mail", "MailAddress");
