#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::Net {
class IWebProxy;
}
// Forward declare root types
namespace System::Net::Configuration {
class DefaultProxySectionInternal;
}
// Type: System.Net.Configuration::DefaultProxySectionInternal
namespace System::Net::Configuration {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8163))
// CS Name: System.Net.Configuration.DefaultProxySectionInternal
class CORDL_TYPE DefaultProxySectionInternal : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~DefaultProxySectionInternal() = default;

// Ctor Parameters [CppParam { name: "", ty: "DefaultProxySectionInternal", modifiers: " const&", def_value: None }]
constexpr DefaultProxySectionInternal(DefaultProxySectionInternal const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DefaultProxySectionInternal", modifiers: "&&", def_value: None }]
constexpr DefaultProxySectionInternal(DefaultProxySectionInternal&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DefaultProxySectionInternal(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DefaultProxySectionInternal& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DefaultProxySectionInternal& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DefaultProxySectionInternal& operator=(DefaultProxySectionInternal&& o) noexcept = default;
  constexpr DefaultProxySectionInternal& operator=(DefaultProxySectionInternal const& o) noexcept = default;
                


// Fields

 System::Net::IWebProxy __declspec(property(get=__get_webProxy, put=__set_webProxy))  webProxy;

constexpr void __set_webProxy(System::Net::IWebProxy value) ;

constexpr System::Net::IWebProxy __get_webProxy() const;

static ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_classSyncObject, put=__set_classSyncObject))  classSyncObject;

static void __set_classSyncObject(::bs_hook::Il2CppWrapperType value) ;

static ::bs_hook::Il2CppWrapperType __get_classSyncObject() ;


// Properties

static ::bs_hook::Il2CppWrapperType __declspec(property(get=get_ClassSyncObject))  ClassSyncObject;

 System::Net::IWebProxy __declspec(property(get=get_WebProxy))  WebProxy;


// Methods

/// @brief Method GetDefaultProxy_UsingOldMonoCode addr 0x285e4fc size 0x8 virtual false final false
static System::Net::IWebProxy GetDefaultProxy_UsingOldMonoCode() ;

/// @brief Method GetSystemWebProxy addr 0x285e504 size 0x8 virtual false final false
static System::Net::IWebProxy GetSystemWebProxy() ;

/// @brief Method get_ClassSyncObject addr 0x285e50c size 0xa0 virtual false final false
static ::bs_hook::Il2CppWrapperType get_ClassSyncObject() ;

/// @brief Method GetSection addr 0x285e5ac size 0x114 virtual false final false
static System::Net::Configuration::DefaultProxySectionInternal GetSection() ;

/// @brief Method get_WebProxy addr 0x285e6c8 size 0x8 virtual false final false
 System::Net::IWebProxy get_WebProxy() ;

// Ctor Parameters []
explicit DefaultProxySectionInternal() ;

/// @brief Method .ctor addr 0x285e6c0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Configuration
NEED_NO_BOX(System::Net::Configuration::DefaultProxySectionInternal);
DEFINE_IL2CPP_ARG_TYPE(System::Net::Configuration::DefaultProxySectionInternal, "System.Net.Configuration", "DefaultProxySectionInternal");
