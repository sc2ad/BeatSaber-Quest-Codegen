#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
// Forward declare root types
namespace System::Net::Cache {
class RequestCacheValidator;
}
// Type: System.Net.Cache::RequestCacheValidator
namespace System::Net::Cache {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8169))
// CS Name: System.Net.Cache.RequestCacheValidator
class CORDL_TYPE RequestCacheValidator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~RequestCacheValidator() = default;

// Ctor Parameters [CppParam { name: "", ty: "RequestCacheValidator", modifiers: " const&", def_value: None }]
constexpr RequestCacheValidator(RequestCacheValidator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RequestCacheValidator", modifiers: "&&", def_value: None }]
constexpr RequestCacheValidator(RequestCacheValidator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RequestCacheValidator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RequestCacheValidator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RequestCacheValidator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RequestCacheValidator& operator=(RequestCacheValidator&& o) noexcept = default;
  constexpr RequestCacheValidator& operator=(RequestCacheValidator const& o) noexcept = default;
                


// Methods

/// @brief Method CreateValidator addr 0x285ed4c size 0x40 virtual false final false
 ::bs_hook::Il2CppWrapperType CreateValidator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Cache
} // end anonymous namespace
NEED_NO_BOX(::System::Net::Cache::RequestCacheValidator);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Cache::RequestCacheValidator, "System.Net.Cache", "RequestCacheValidator");
