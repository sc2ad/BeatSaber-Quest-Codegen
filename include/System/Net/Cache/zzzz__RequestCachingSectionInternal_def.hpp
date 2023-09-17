#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
// Forward declare root types
namespace System::Net::Cache {
class RequestCachingSectionInternal;
}
// Type: System.Net.Cache::RequestCachingSectionInternal
namespace System::Net::Cache {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8170))
// CS Name: System.Net.Cache.RequestCachingSectionInternal
class CORDL_TYPE RequestCachingSectionInternal : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~RequestCachingSectionInternal() = default;

// Ctor Parameters [CppParam { name: "", ty: "RequestCachingSectionInternal", modifiers: " const&", def_value: None }]
constexpr RequestCachingSectionInternal(RequestCachingSectionInternal const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RequestCachingSectionInternal", modifiers: "&&", def_value: None }]
constexpr RequestCachingSectionInternal(RequestCachingSectionInternal&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RequestCachingSectionInternal(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RequestCachingSectionInternal& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RequestCachingSectionInternal& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RequestCachingSectionInternal& operator=(RequestCachingSectionInternal&& o) noexcept = default;
  constexpr RequestCachingSectionInternal& operator=(RequestCachingSectionInternal const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_DisableAllCaching, put=__set_DisableAllCaching))  DisableAllCaching;

constexpr void __set_DisableAllCaching(bool value) ;

constexpr bool __get_DisableAllCaching() const;


// Methods

// Ctor Parameters []
explicit RequestCachingSectionInternal() ;

/// @brief Method .ctor addr 0x285ebd0 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Cache
} // end anonymous namespace
NEED_NO_BOX(::System::Net::Cache::RequestCachingSectionInternal);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Cache::RequestCachingSectionInternal, "System.Net.Cache", "RequestCachingSectionInternal");
