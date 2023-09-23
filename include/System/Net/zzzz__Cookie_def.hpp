#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System {
struct DateTime;
}
namespace System::Net {
class Comparer;
}
namespace System::Net {
struct CookieVariant;
}
namespace System::Collections {
class IComparer;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace System::Net {
class Cookie;
}
// Type: System.Net::Cookie
namespace System::Net {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7971))
// CS Name: System.Net.Cookie
class CORDL_TYPE Cookie : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa0};

virtual ~Cookie() = default;

// Ctor Parameters [CppParam { name: "", ty: "Cookie", modifiers: " const&", def_value: None }]
constexpr Cookie(Cookie const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Cookie", modifiers: "&&", def_value: None }]
constexpr Cookie(Cookie&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Cookie(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Cookie& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Cookie& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Cookie& operator=(Cookie&& o) noexcept = default;
  constexpr Cookie& operator=(Cookie const& o) noexcept = default;
                


// Fields

static ::ArrayW<char16_t> __declspec(property(get=__get_PortSplitDelimiters, put=__set_PortSplitDelimiters))  PortSplitDelimiters;

static void __set_PortSplitDelimiters(::ArrayW<char16_t> value) ;

static ::ArrayW<char16_t> __get_PortSplitDelimiters() ;

static ::ArrayW<char16_t> __declspec(property(get=__get_Reserved2Name, put=__set_Reserved2Name))  Reserved2Name;

static void __set_Reserved2Name(::ArrayW<char16_t> value) ;

static ::ArrayW<char16_t> __get_Reserved2Name() ;

static ::ArrayW<char16_t> __declspec(property(get=__get_Reserved2Value, put=__set_Reserved2Value))  Reserved2Value;

static void __set_Reserved2Value(::ArrayW<char16_t> value) ;

static ::ArrayW<char16_t> __get_Reserved2Value() ;

static System::Net::Comparer __declspec(property(get=__get_staticComparer, put=__set_staticComparer))  staticComparer;

static void __set_staticComparer(System::Net::Comparer value) ;

static System::Net::Comparer __get_staticComparer() ;

 ::StringW __declspec(property(get=__get_m_comment, put=__set_m_comment))  m_comment;

constexpr void __set_m_comment(::StringW value) ;

constexpr ::StringW __get_m_comment() const;

 System::Uri __declspec(property(get=__get_m_commentUri, put=__set_m_commentUri))  m_commentUri;

constexpr void __set_m_commentUri(System::Uri value) ;

constexpr System::Uri __get_m_commentUri() const;

 System::Net::CookieVariant __declspec(property(get=__get_m_cookieVariant, put=__set_m_cookieVariant))  m_cookieVariant;

constexpr void __set_m_cookieVariant(System::Net::CookieVariant value) ;

constexpr System::Net::CookieVariant __get_m_cookieVariant() const;

 bool __declspec(property(get=__get_m_discard, put=__set_m_discard))  m_discard;

constexpr void __set_m_discard(bool value) ;

constexpr bool __get_m_discard() const;

 ::StringW __declspec(property(get=__get_m_domain, put=__set_m_domain))  m_domain;

constexpr void __set_m_domain(::StringW value) ;

constexpr ::StringW __get_m_domain() const;

 bool __declspec(property(get=__get_m_domain_implicit, put=__set_m_domain_implicit))  m_domain_implicit;

constexpr void __set_m_domain_implicit(bool value) ;

constexpr bool __get_m_domain_implicit() const;

 System::DateTime __declspec(property(get=__get_m_expires, put=__set_m_expires))  m_expires;

constexpr void __set_m_expires(System::DateTime value) ;

constexpr System::DateTime __get_m_expires() const;

 ::StringW __declspec(property(get=__get_m_name, put=__set_m_name))  m_name;

constexpr void __set_m_name(::StringW value) ;

constexpr ::StringW __get_m_name() const;

 ::StringW __declspec(property(get=__get_m_path, put=__set_m_path))  m_path;

constexpr void __set_m_path(::StringW value) ;

constexpr ::StringW __get_m_path() const;

 bool __declspec(property(get=__get_m_path_implicit, put=__set_m_path_implicit))  m_path_implicit;

constexpr void __set_m_path_implicit(bool value) ;

constexpr bool __get_m_path_implicit() const;

 ::StringW __declspec(property(get=__get_m_port, put=__set_m_port))  m_port;

constexpr void __set_m_port(::StringW value) ;

constexpr ::StringW __get_m_port() const;

 bool __declspec(property(get=__get_m_port_implicit, put=__set_m_port_implicit))  m_port_implicit;

constexpr void __set_m_port_implicit(bool value) ;

constexpr bool __get_m_port_implicit() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_m_port_list, put=__set_m_port_list))  m_port_list;

constexpr void __set_m_port_list(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_m_port_list() const;

 bool __declspec(property(get=__get_m_secure, put=__set_m_secure))  m_secure;

constexpr void __set_m_secure(bool value) ;

constexpr bool __get_m_secure() const;

 bool __declspec(property(get=__get_m_httpOnly, put=__set_m_httpOnly))  m_httpOnly;

constexpr void __set_m_httpOnly(bool value) ;

constexpr bool __get_m_httpOnly() const;

 System::DateTime __declspec(property(get=__get_m_timeStamp, put=__set_m_timeStamp))  m_timeStamp;

constexpr void __set_m_timeStamp(System::DateTime value) ;

constexpr System::DateTime __get_m_timeStamp() const;

 ::StringW __declspec(property(get=__get_m_value, put=__set_m_value))  m_value;

constexpr void __set_m_value(::StringW value) ;

constexpr ::StringW __get_m_value() const;

 int32_t __declspec(property(get=__get_m_version, put=__set_m_version))  m_version;

constexpr void __set_m_version(int32_t value) ;

constexpr int32_t __get_m_version() const;

 ::StringW __declspec(property(get=__get_m_domainKey, put=__set_m_domainKey))  m_domainKey;

constexpr void __set_m_domainKey(::StringW value) ;

constexpr ::StringW __get_m_domainKey() const;

 bool __declspec(property(get=__get_IsQuotedVersion, put=__set_IsQuotedVersion))  IsQuotedVersion;

constexpr void __set_IsQuotedVersion(bool value) ;

constexpr bool __get_IsQuotedVersion() const;

 bool __declspec(property(get=__get_IsQuotedDomain, put=__set_IsQuotedDomain))  IsQuotedDomain;

constexpr void __set_IsQuotedDomain(bool value) ;

constexpr bool __get_IsQuotedDomain() const;


// Properties

 ::StringW __declspec(property(get=get_Comment, put=set_Comment))  Comment;

 System::Uri __declspec(property(put=set_CommentUri))  CommentUri;

 bool __declspec(property(put=set_HttpOnly))  HttpOnly;

 bool __declspec(property(put=set_Discard))  Discard;

 ::StringW __declspec(property(get=get_Domain, put=set_Domain))  Domain;

 ::StringW __declspec(property(get=get__Domain))  _Domain;

 bool __declspec(property(get=get_Expired))  Expired;

 System::DateTime __declspec(property(put=set_Expires))  Expires;

 ::StringW __declspec(property(get=get_Name, put=set_Name))  Name;

 ::StringW __declspec(property(get=get_Path, put=set_Path))  Path;

 ::StringW __declspec(property(get=get__Path))  _Path;

 bool __declspec(property(get=get_Plain))  Plain;

 ::StringW __declspec(property(get=get_Port, put=set_Port))  Port;

 ::ArrayW<int32_t> __declspec(property(get=get_PortList))  PortList;

 ::StringW __declspec(property(get=get__Port))  _Port;

 bool __declspec(property(get=get_Secure, put=set_Secure))  Secure;

 ::StringW __declspec(property(get=get_Value, put=set_Value))  Value;

 System::Net::CookieVariant __declspec(property(get=get_Variant))  Variant;

 ::StringW __declspec(property(get=get_DomainKey))  DomainKey;

 int32_t __declspec(property(get=get_Version, put=set_Version))  Version;

 ::StringW __declspec(property(get=get__Version))  _Version;


// Methods

// Ctor Parameters []
explicit Cookie() ;

/// @brief Method .ctor addr 0x2819450 size 0xe0 virtual false final false
 void _ctor() ;

/// @brief Method get_Comment addr 0x2819530 size 0x8 virtual false final false
 ::StringW get_Comment() ;

/// @brief Method set_Comment addr 0x2819538 size 0x58 virtual false final false
 void set_Comment(::StringW value) ;

/// @brief Method set_CommentUri addr 0x2819590 size 0x8 virtual false final false
 void set_CommentUri(System::Uri value) ;

/// @brief Method set_HttpOnly addr 0x2819598 size 0xc virtual false final false
 void set_HttpOnly(bool value) ;

/// @brief Method set_Discard addr 0x28195a4 size 0xc virtual false final false
 void set_Discard(bool value) ;

/// @brief Method get_Domain addr 0x28195b0 size 0x8 virtual false final false
 ::StringW get_Domain() ;

/// @brief Method set_Domain addr 0x28195b8 size 0x74 virtual false final false
 void set_Domain(::StringW value) ;

/// @brief Method get__Domain addr 0x281962c size 0xcc virtual false final false
 ::StringW get__Domain() ;

/// @brief Method get_Expired addr 0x2819708 size 0xb8 virtual false final false
 bool get_Expired() ;

/// @brief Method set_Expires addr 0x28197c0 size 0x8 virtual false final false
 void set_Expires(System::DateTime value) ;

/// @brief Method get_Name addr 0x28197c8 size 0x8 virtual false final false
 ::StringW get_Name() ;

/// @brief Method set_Name addr 0x28197d0 size 0x18c virtual false final false
 void set_Name(::StringW value) ;

/// @brief Method InternalSetName addr 0x281995c size 0x104 virtual false final false
 bool InternalSetName(::StringW value) ;

/// @brief Method get_Path addr 0x2819a68 size 0x8 virtual false final false
 ::StringW get_Path() ;

/// @brief Method set_Path addr 0x2819a70 size 0x6c virtual false final false
 void set_Path(::StringW value) ;

/// @brief Method get__Path addr 0x2819adc size 0x9c virtual false final false
 ::StringW get__Path() ;

/// @brief Method get_Plain addr 0x28196f8 size 0x10 virtual false final false
 bool get_Plain() ;

/// @brief Method IsDomainEqualToHost addr 0x2819b78 size 0x58 virtual false final false
static bool IsDomainEqualToHost(::StringW domain, ::StringW host) ;

/// @brief Method VerifySetDefaults addr 0x2819bd0 size 0x9f0 virtual false final false
 bool VerifySetDefaults(System::Net::CookieVariant variant, System::Uri uri, bool isLocalDomain, ::StringW localDomain, bool set_default, bool isThrow) ;

/// @brief Method DomainCharsTest addr 0x281a5c0 size 0x9c virtual false final false
static bool DomainCharsTest(::StringW name) ;

/// @brief Method get_Port addr 0x281a720 size 0x8 virtual false final false
 ::StringW get_Port() ;

/// @brief Method set_Port addr 0x281a728 size 0x334 virtual false final false
 void set_Port(::StringW value) ;

/// @brief Method get_PortList addr 0x281aa5c size 0x8 virtual false final false
 ::ArrayW<int32_t> get_PortList() ;

/// @brief Method get__Port addr 0x281aa64 size 0xc8 virtual false final false
 ::StringW get__Port() ;

/// @brief Method get_Secure addr 0x281ab2c size 0x8 virtual false final false
 bool get_Secure() ;

/// @brief Method set_Secure addr 0x281ab34 size 0xc virtual false final false
 void set_Secure(bool value) ;

/// @brief Method get_Value addr 0x281ab40 size 0x8 virtual false final false
 ::StringW get_Value() ;

/// @brief Method set_Value addr 0x281ab48 size 0x68 virtual false final false
 void set_Value(::StringW value) ;

/// @brief Method get_Variant addr 0x281abb0 size 0x8 virtual false final false
 System::Net::CookieVariant get_Variant() ;

/// @brief Method get_DomainKey addr 0x281abb8 size 0x1c virtual false final false
 ::StringW get_DomainKey() ;

/// @brief Method get_Version addr 0x281abd4 size 0x8 virtual false final false
 int32_t get_Version() ;

/// @brief Method set_Version addr 0x281abdc size 0x78 virtual false final false
 void set_Version(int32_t value) ;

/// @brief Method get__Version addr 0x281ac54 size 0xfc virtual false final false
 ::StringW get__Version() ;

/// @brief Method GetComparer addr 0x281ad50 size 0x58 virtual false final false
static System::Collections::IComparer GetComparer() ;

/// @brief Method Equals addr 0x281ada8 size 0xd0 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType comparand) ;

/// @brief Method GetHashCode addr 0x281ae78 size 0x268 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x281b0e0 size 0x310 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
NEED_NO_BOX(System::Net::Cookie);
DEFINE_IL2CPP_ARG_TYPE(System::Net::Cookie, "System.Net", "Cookie");
