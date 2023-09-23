#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Security::Cryptography::X509Certificates {
struct StoreName;
}
namespace Mono::Security::X509 {
class X509Store;
}
namespace System::Security::Cryptography::X509Certificates {
struct OpenFlags;
}
namespace System::Security::Cryptography::X509Certificates {
struct StoreLocation;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate2Collection;
}
namespace System {
class IDisposable;
}
namespace Mono::Security::X509 {
class X509Stores;
}
// Forward declare root types
namespace System::Security::Cryptography::X509Certificates {
class X509Store;
}
// Type: System.Security.Cryptography.X509Certificates::X509Store
namespace System::Security::Cryptography::X509Certificates {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7867))
// CS Name: System.Security.Cryptography.X509Certificates.X509Store
class CORDL_TYPE X509Store : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~X509Store() = default;

// Ctor Parameters [CppParam { name: "", ty: "X509Store", modifiers: " const&", def_value: None }]
constexpr X509Store(X509Store const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "X509Store", modifiers: "&&", def_value: None }]
constexpr X509Store(X509Store&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit X509Store(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr X509Store& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr X509Store& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr X509Store& operator=(X509Store&& o) noexcept = default;
  constexpr X509Store& operator=(X509Store const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__name, put=__set__name))  _name;

constexpr void __set__name(::StringW value) ;

constexpr ::StringW __get__name() const;

 System::Security::Cryptography::X509Certificates::StoreLocation __declspec(property(get=__get__location, put=__set__location))  _location;

constexpr void __set__location(System::Security::Cryptography::X509Certificates::StoreLocation value) ;

constexpr System::Security::Cryptography::X509Certificates::StoreLocation __get__location() const;

 System::Security::Cryptography::X509Certificates::X509Certificate2Collection __declspec(property(get=__get_list, put=__set_list))  list;

constexpr void __set_list(System::Security::Cryptography::X509Certificates::X509Certificate2Collection value) ;

constexpr System::Security::Cryptography::X509Certificates::X509Certificate2Collection __get_list() const;

 System::Security::Cryptography::X509Certificates::OpenFlags __declspec(property(get=__get__flags, put=__set__flags))  _flags;

constexpr void __set__flags(System::Security::Cryptography::X509Certificates::OpenFlags value) ;

constexpr System::Security::Cryptography::X509Certificates::OpenFlags __get__flags() const;

 Mono::Security::X509::X509Store __declspec(property(get=__get_store, put=__set_store))  store;

constexpr void __set_store(Mono::Security::X509::X509Store value) ;

constexpr Mono::Security::X509::X509Store __get_store() const;


// Properties

 System::Security::Cryptography::X509Certificates::X509Certificate2Collection __declspec(property(get=get_Certificates))  Certificates;

 Mono::Security::X509::X509Stores __declspec(property(get=get_Factory))  Factory;

 Mono::Security::X509::X509Store __declspec(property(get=get_Store))  Store;


// Methods

// Ctor Parameters [CppParam { name: "storeName", ty: "System::Security::Cryptography::X509Certificates::StoreName", modifiers: "", def_value: None }, CppParam { name: "storeLocation", ty: "System::Security::Cryptography::X509Certificates::StoreLocation", modifiers: "", def_value: None }]
explicit X509Store(System::Security::Cryptography::X509Certificates::StoreName storeName, System::Security::Cryptography::X509Certificates::StoreLocation storeLocation) ;

/// @brief Method .ctor addr 0x27f4a9c size 0x138 virtual false final false
 void _ctor(System::Security::Cryptography::X509Certificates::StoreName storeName, System::Security::Cryptography::X509Certificates::StoreLocation storeLocation) ;

/// @brief Method get_Certificates addr 0x27f4bd4 size 0x88 virtual false final false
 System::Security::Cryptography::X509Certificates::X509Certificate2Collection get_Certificates() ;

/// @brief Method get_Factory addr 0x27f4c5c size 0x1c virtual false final false
 Mono::Security::X509::X509Stores get_Factory() ;

/// @brief Method get_Store addr 0x27f4c78 size 0x8 virtual false final false
 Mono::Security::X509::X509Store get_Store() ;

/// @brief Method Close addr 0x27f4c80 size 0x1c virtual false final false
 void Close() ;

/// @brief Method Dispose addr 0x27f4c9c size 0x1c virtual true final true
 void Dispose() ;

/// @brief Method Open addr 0x27f4cb8 size 0x3fc virtual false final false
 void Open(System::Security::Cryptography::X509Certificates::OpenFlags flags) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography::X509Certificates
NEED_NO_BOX(System::Security::Cryptography::X509Certificates::X509Store);
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::X509Certificates::X509Store, "System.Security.Cryptography.X509Certificates", "X509Store");
