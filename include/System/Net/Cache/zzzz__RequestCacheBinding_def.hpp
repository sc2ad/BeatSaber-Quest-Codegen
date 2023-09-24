#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::Net::Cache {
class RequestCacheValidator;
}
namespace System::Net::Cache {
class RequestCachePolicy;
}
namespace System::Net::Cache {
class RequestCache;
}
// Forward declare root types
namespace System::Net::Cache {
class RequestCacheBinding;
}
// Type: System.Net.Cache::RequestCacheBinding
namespace System::Net::Cache {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8171))
// CS Name: System.Net.Cache.RequestCacheBinding
class CORDL_TYPE RequestCacheBinding : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~RequestCacheBinding() = default;

// Ctor Parameters [CppParam { name: "", ty: "RequestCacheBinding", modifiers: " const&", def_value: None }]
constexpr RequestCacheBinding(RequestCacheBinding const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RequestCacheBinding", modifiers: "&&", def_value: None }]
constexpr RequestCacheBinding(RequestCacheBinding&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RequestCacheBinding(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RequestCacheBinding& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RequestCacheBinding& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RequestCacheBinding& operator=(RequestCacheBinding&& o) noexcept = default;
  constexpr RequestCacheBinding& operator=(RequestCacheBinding const& o) noexcept = default;
                


// Fields

 System::Net::Cache::RequestCache __declspec(property(get=__get_m_RequestCache, put=__set_m_RequestCache))  m_RequestCache;

constexpr void __set_m_RequestCache(System::Net::Cache::RequestCache value) ;

constexpr System::Net::Cache::RequestCache __get_m_RequestCache() const;

 System::Net::Cache::RequestCacheValidator __declspec(property(get=__get_m_CacheValidator, put=__set_m_CacheValidator))  m_CacheValidator;

constexpr void __set_m_CacheValidator(System::Net::Cache::RequestCacheValidator value) ;

constexpr System::Net::Cache::RequestCacheValidator __get_m_CacheValidator() const;

 System::Net::Cache::RequestCachePolicy __declspec(property(get=__get_m_Policy, put=__set_m_Policy))  m_Policy;

constexpr void __set_m_Policy(System::Net::Cache::RequestCachePolicy value) ;

constexpr System::Net::Cache::RequestCachePolicy __get_m_Policy() const;


// Properties

 System::Net::Cache::RequestCache __declspec(property(get=get_Cache))  Cache;

 System::Net::Cache::RequestCacheValidator __declspec(property(get=get_Validator))  Validator;

 System::Net::Cache::RequestCachePolicy __declspec(property(get=get_Policy))  Policy;


// Methods

static System::Net::Cache::RequestCacheBinding New_ctor(System::Net::Cache::RequestCache requestCache, System::Net::Cache::RequestCacheValidator cacheValidator, System::Net::Cache::RequestCachePolicy policy) ;

/// @brief Method .ctor addr 0x285ed10 size 0x3c virtual false final false
 void _ctor(System::Net::Cache::RequestCache requestCache, System::Net::Cache::RequestCacheValidator cacheValidator, System::Net::Cache::RequestCachePolicy policy) ;

/// @brief Method get_Cache addr 0x285ed8c size 0x8 virtual false final false
 System::Net::Cache::RequestCache get_Cache() ;

/// @brief Method get_Validator addr 0x285ed94 size 0x8 virtual false final false
 System::Net::Cache::RequestCacheValidator get_Validator() ;

/// @brief Method get_Policy addr 0x285ed9c size 0x8 virtual false final false
 System::Net::Cache::RequestCachePolicy get_Policy() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Cache
NEED_NO_BOX(System::Net::Cache::RequestCacheBinding);
DEFINE_IL2CPP_ARG_TYPE(System::Net::Cache::RequestCacheBinding, "System.Net.Cache", "RequestCacheBinding");
