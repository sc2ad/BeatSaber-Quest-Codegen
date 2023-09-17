#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System {
class Uri;
}
namespace System::Net {
class Cookie;
}
namespace System::Net {
class CookieCollection;
}
namespace System::Net {
struct HeaderVariantInfo;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Net {
class PathList;
}
namespace System::Collections {
class Hashtable;
}
// Forward declare root types
namespace System::Net {
class CookieContainer;
}
// Type: System.Net::CookieContainer
namespace System::Net {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7981))
// CS Name: System.Net.CookieContainer
class CORDL_TYPE CookieContainer : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~CookieContainer() = default;

// Ctor Parameters [CppParam { name: "", ty: "CookieContainer", modifiers: " const&", def_value: None }]
constexpr CookieContainer(CookieContainer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CookieContainer", modifiers: "&&", def_value: None }]
constexpr CookieContainer(CookieContainer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CookieContainer(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CookieContainer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CookieContainer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CookieContainer& operator=(CookieContainer&& o) noexcept = default;
  constexpr CookieContainer& operator=(CookieContainer const& o) noexcept = default;
                


// Fields

static ::ArrayW<::System::Net::HeaderVariantInfo> __declspec(property(get=__get_HeaderInfo, put=__set_HeaderInfo))  HeaderInfo;

static void __set_HeaderInfo(::ArrayW<::System::Net::HeaderVariantInfo> value) ;

static ::ArrayW<::System::Net::HeaderVariantInfo> __get_HeaderInfo() ;

 ::System::Collections::Hashtable __declspec(property(get=__get_m_domainTable, put=__set_m_domainTable))  m_domainTable;

constexpr void __set_m_domainTable(::System::Collections::Hashtable value) ;

constexpr ::System::Collections::Hashtable __get_m_domainTable() const;

 int32_t __declspec(property(get=__get_m_maxCookieSize, put=__set_m_maxCookieSize))  m_maxCookieSize;

constexpr void __set_m_maxCookieSize(int32_t value) ;

constexpr int32_t __get_m_maxCookieSize() const;

 int32_t __declspec(property(get=__get_m_maxCookies, put=__set_m_maxCookies))  m_maxCookies;

constexpr void __set_m_maxCookies(int32_t value) ;

constexpr int32_t __get_m_maxCookies() const;

 int32_t __declspec(property(get=__get_m_maxCookiesPerDomain, put=__set_m_maxCookiesPerDomain))  m_maxCookiesPerDomain;

constexpr void __set_m_maxCookiesPerDomain(int32_t value) ;

constexpr int32_t __get_m_maxCookiesPerDomain() const;

 int32_t __declspec(property(get=__get_m_count, put=__set_m_count))  m_count;

constexpr void __set_m_count(int32_t value) ;

constexpr int32_t __get_m_count() const;

 ::StringW __declspec(property(get=__get_m_fqdnMyDomain, put=__set_m_fqdnMyDomain))  m_fqdnMyDomain;

constexpr void __set_m_fqdnMyDomain(::StringW value) ;

constexpr ::StringW __get_m_fqdnMyDomain() const;


// Methods

// Ctor Parameters []
explicit CookieContainer() ;

/// @brief Method .ctor addr 0x281d774 size 0xf4 virtual false final false
 void _ctor() ;

/// @brief Method AddRemoveDomain addr 0x281d868 size 0x128 virtual false final false
 void AddRemoveDomain(::StringW key, ::System::Net::PathList value) ;

/// @brief Method Add addr 0x281d990 size 0x820 virtual false final false
 void Add(::System::Net::Cookie cookie, bool throwOnError) ;

/// @brief Method AgeCookies addr 0x281e7e4 size 0x153c virtual false final false
 bool AgeCookies(::StringW domain) ;

/// @brief Method ExpireCollection addr 0x281fd4c size 0x16c virtual false final false
 int32_t ExpireCollection(::System::Net::CookieCollection cc) ;

/// @brief Method IsLocalDomain addr 0x281fedc size 0x29c virtual false final false
 bool IsLocalDomain(::StringW host) ;

/// @brief Method CookieCutter addr 0x2820178 size 0x6d4 virtual false final false
 ::System::Net::CookieCollection CookieCutter(::System::Uri uri, ::StringW headerName, ::StringW setCookieHeader, bool isThrow) ;

/// @brief Method InternalGetCookies addr 0x282084c size 0x4ac virtual false final false
 ::System::Net::CookieCollection InternalGetCookies(::System::Uri uri) ;

/// @brief Method BuildCookieCollectionFromDomainMatches addr 0x2820cf8 size 0x804 virtual false final false
 void BuildCookieCollectionFromDomainMatches(::System::Uri uri, bool isSecure, int32_t port, ::System::Net::CookieCollection cookies, ::System::Collections::Generic::List_1<::StringW> domainAttribute, bool matchOnlyPlainCookie) ;

/// @brief Method MergeUpdateCollections addr 0x2821520 size 0x20c virtual false final false
 void MergeUpdateCollections(::System::Net::CookieCollection destination, ::System::Net::CookieCollection source, int32_t port, bool isSecure, bool isPlainOnly) ;

/// @brief Method GetCookieHeader addr 0x282172c size 0xd0 virtual false final false
 ::StringW GetCookieHeader(::System::Uri uri) ;

/// @brief Method GetCookieHeader addr 0x28217fc size 0x398 virtual false final false
 ::StringW GetCookieHeader(::System::Uri uri, ByRef<::StringW> optCookie2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
} // end anonymous namespace
NEED_NO_BOX(::System::Net::CookieContainer);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::CookieContainer, "System.Net", "CookieContainer");
