#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
// Forward declare root types
namespace System::Net::Cache {
class RequestCacheProtocol;
}
// Type: System.Net.Cache::RequestCacheProtocol
namespace System::Net::Cache {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8174))
// CS Name: System.Net.Cache.RequestCacheProtocol
class CORDL_TYPE RequestCacheProtocol : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~RequestCacheProtocol() = default;

// Ctor Parameters [CppParam { name: "", ty: "RequestCacheProtocol", modifiers: " const&", def_value: None }]
constexpr RequestCacheProtocol(RequestCacheProtocol const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RequestCacheProtocol", modifiers: "&&", def_value: None }]
constexpr RequestCacheProtocol(RequestCacheProtocol&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RequestCacheProtocol(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RequestCacheProtocol& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RequestCacheProtocol& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RequestCacheProtocol& operator=(RequestCacheProtocol&& o) noexcept = default;
  constexpr RequestCacheProtocol& operator=(RequestCacheProtocol const& o) noexcept = default;
                


// Methods

static System::Net::Cache::RequestCacheProtocol New_ctor(::bs_hook::Il2CppWrapperType arg1, ::bs_hook::Il2CppWrapperType arg2) ;

/// @brief Method .ctor addr 0x285ee44 size 0x48 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType arg1, ::bs_hook::Il2CppWrapperType arg2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Cache
NEED_NO_BOX(System::Net::Cache::RequestCacheProtocol);
DEFINE_IL2CPP_ARG_TYPE(System::Net::Cache::RequestCacheProtocol, "System.Net.Cache", "RequestCacheProtocol");
