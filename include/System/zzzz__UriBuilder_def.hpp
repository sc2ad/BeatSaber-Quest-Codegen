#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System {
class Uri;
}
// Forward declare root types
namespace System {
class UriBuilder;
}
// Type: System::UriBuilder
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7717))
// CS Name: System.UriBuilder
class CORDL_TYPE UriBuilder : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x68};

virtual ~UriBuilder() = default;

// Ctor Parameters [CppParam { name: "", ty: "UriBuilder", modifiers: " const&", def_value: None }]
constexpr UriBuilder(UriBuilder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UriBuilder", modifiers: "&&", def_value: None }]
constexpr UriBuilder(UriBuilder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UriBuilder(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UriBuilder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UriBuilder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UriBuilder& operator=(UriBuilder&& o) noexcept = default;
  constexpr UriBuilder& operator=(UriBuilder const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get__changed, put=__set__changed))  _changed;

constexpr void __set__changed(bool value) ;

constexpr bool __get__changed() const;

 ::StringW __declspec(property(get=__get__fragment, put=__set__fragment))  _fragment;

constexpr void __set__fragment(::StringW value) ;

constexpr ::StringW __get__fragment() const;

 ::StringW __declspec(property(get=__get__host, put=__set__host))  _host;

constexpr void __set__host(::StringW value) ;

constexpr ::StringW __get__host() const;

 ::StringW __declspec(property(get=__get__password, put=__set__password))  _password;

constexpr void __set__password(::StringW value) ;

constexpr ::StringW __get__password() const;

 ::StringW __declspec(property(get=__get__path, put=__set__path))  _path;

constexpr void __set__path(::StringW value) ;

constexpr ::StringW __get__path() const;

 int32_t __declspec(property(get=__get__port, put=__set__port))  _port;

constexpr void __set__port(int32_t value) ;

constexpr int32_t __get__port() const;

 ::StringW __declspec(property(get=__get__query, put=__set__query))  _query;

constexpr void __set__query(::StringW value) ;

constexpr ::StringW __get__query() const;

 ::StringW __declspec(property(get=__get__scheme, put=__set__scheme))  _scheme;

constexpr void __set__scheme(::StringW value) ;

constexpr ::StringW __get__scheme() const;

 ::StringW __declspec(property(get=__get__schemeDelimiter, put=__set__schemeDelimiter))  _schemeDelimiter;

constexpr void __set__schemeDelimiter(::StringW value) ;

constexpr ::StringW __get__schemeDelimiter() const;

 System::Uri __declspec(property(get=__get__uri, put=__set__uri))  _uri;

constexpr void __set__uri(System::Uri value) ;

constexpr System::Uri __get__uri() const;

 ::StringW __declspec(property(get=__get__username, put=__set__username))  _username;

constexpr void __set__username(::StringW value) ;

constexpr ::StringW __get__username() const;


// Properties

 ::StringW __declspec(property(put=set_Host))  Host;

 ::StringW __declspec(property(put=set_Path))  Path;

 int32_t __declspec(property(put=set_Port))  Port;

 ::StringW __declspec(property(put=set_Query))  Query;

 ::StringW __declspec(property(put=set_Scheme))  Scheme;

 System::Uri __declspec(property(get=get_Uri))  Uri;


// Methods

// Ctor Parameters []
explicit UriBuilder() ;

/// @brief Method .ctor addr 0x27b5114 size 0x10c virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "uri", ty: "::StringW", modifiers: "", def_value: None }]
explicit UriBuilder(::StringW uri) ;

/// @brief Method .ctor addr 0x27b5220 size 0x1a8 virtual false final false
 void _ctor(::StringW uri) ;

// Ctor Parameters [CppParam { name: "uri", ty: "System::Uri", modifiers: "", def_value: None }]
explicit UriBuilder(System::Uri uri) ;

/// @brief Method .ctor addr 0x27b553c size 0x174 virtual false final false
 void _ctor(System::Uri uri) ;

/// @brief Method Init addr 0x27b53c8 size 0x174 virtual false final false
 void Init(System::Uri uri) ;

/// @brief Method set_Host addr 0x27b5814 size 0xec virtual false final false
 void set_Host(::StringW value) ;

/// @brief Method set_Path addr 0x27b5900 size 0xb4 virtual false final false
 void set_Path(::StringW value) ;

/// @brief Method set_Port addr 0x27b59b4 size 0x70 virtual false final false
 void set_Port(int32_t value) ;

/// @brief Method set_Query addr 0x27b5a24 size 0xb8 virtual false final false
 void set_Query(::StringW value) ;

/// @brief Method set_Scheme addr 0x27b5adc size 0x148 virtual false final false
 void set_Scheme(::StringW value) ;

/// @brief Method get_Uri addr 0x27b5c24 size 0x98 virtual false final false
 System::Uri get_Uri() ;

/// @brief Method Equals addr 0x27b5cbc size 0x5c virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType rparam) ;

/// @brief Method GetHashCode addr 0x27b5d18 size 0x20 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method SetFieldsFromUri addr 0x27b56b0 size 0x164 virtual false final false
 void SetFieldsFromUri(System::Uri uri) ;

/// @brief Method ToString addr 0x27b5d38 size 0x4cc virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::UriBuilder);
DEFINE_IL2CPP_ARG_TYPE(System::UriBuilder, "System", "UriBuilder");
