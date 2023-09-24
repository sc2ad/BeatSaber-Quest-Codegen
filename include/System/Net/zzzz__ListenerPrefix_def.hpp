#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Net {
class HttpListener;
}
// Forward declare root types
namespace System::Net {
class ListenerPrefix;
}
// Type: System.Net::ListenerPrefix
namespace System::Net {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8041))
// CS Name: System.Net.ListenerPrefix
class CORDL_TYPE ListenerPrefix : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~ListenerPrefix() = default;

// Ctor Parameters [CppParam { name: "", ty: "ListenerPrefix", modifiers: " const&", def_value: None }]
constexpr ListenerPrefix(ListenerPrefix const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ListenerPrefix", modifiers: "&&", def_value: None }]
constexpr ListenerPrefix(ListenerPrefix&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ListenerPrefix(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ListenerPrefix& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ListenerPrefix& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ListenerPrefix& operator=(ListenerPrefix&& o) noexcept = default;
  constexpr ListenerPrefix& operator=(ListenerPrefix const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_original, put=__set_original))  original;

constexpr void __set_original(::StringW value) ;

constexpr ::StringW __get_original() const;

 ::StringW __declspec(property(get=__get_host, put=__set_host))  host;

constexpr void __set_host(::StringW value) ;

constexpr ::StringW __get_host() const;

 uint16_t __declspec(property(get=__get_port, put=__set_port))  port;

constexpr void __set_port(uint16_t value) ;

constexpr uint16_t __get_port() const;

 ::StringW __declspec(property(get=__get_path, put=__set_path))  path;

constexpr void __set_path(::StringW value) ;

constexpr ::StringW __get_path() const;

 bool __declspec(property(get=__get_secure, put=__set_secure))  secure;

constexpr void __set_secure(bool value) ;

constexpr bool __get_secure() const;

 System::Net::HttpListener __declspec(property(get=__get_Listener, put=__set_Listener))  Listener;

constexpr void __set_Listener(System::Net::HttpListener value) ;

constexpr System::Net::HttpListener __get_Listener() const;


// Properties

 bool __declspec(property(get=get_Secure))  Secure;

 ::StringW __declspec(property(get=get_Host))  Host;

 int32_t __declspec(property(get=get_Port))  Port;

 ::StringW __declspec(property(get=get_Path))  Path;


// Methods

static System::Net::ListenerPrefix New_ctor(::StringW prefix) ;

/// @brief Method .ctor addr 0x2840bec size 0x30 virtual false final false
 void _ctor(::StringW prefix) ;

/// @brief Method ToString addr 0x2840f0c size 0x8 virtual true final false
 ::StringW ToString() ;

/// @brief Method get_Secure addr 0x2840f14 size 0x8 virtual false final false
 bool get_Secure() ;

/// @brief Method get_Host addr 0x2840f1c size 0x8 virtual false final false
 ::StringW get_Host() ;

/// @brief Method get_Port addr 0x2840f24 size 0x8 virtual false final false
 int32_t get_Port() ;

/// @brief Method get_Path addr 0x2840f2c size 0x8 virtual false final false
 ::StringW get_Path() ;

/// @brief Method Equals addr 0x2840f34 size 0x80 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType o) ;

/// @brief Method GetHashCode addr 0x2840fb4 size 0x20 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Parse addr 0x2840c1c size 0x2f0 virtual false final false
 void Parse(::StringW uri) ;

/// @brief Method CheckUri addr 0x2840fd4 size 0x350 virtual false final false
static void CheckUri(::StringW uri) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
NEED_NO_BOX(System::Net::ListenerPrefix);
DEFINE_IL2CPP_ARG_TYPE(System::Net::ListenerPrefix, "System.Net", "ListenerPrefix");
