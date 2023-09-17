#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace {
// Forward declare root types
namespace System::Net::Cache {
class RequestCache;
}
// Type: System.Net.Cache::RequestCache
namespace System::Net::Cache {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8167))
// CS Name: System.Net.Cache.RequestCache
class CORDL_TYPE RequestCache : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~RequestCache() = default;

// Ctor Parameters [CppParam { name: "", ty: "RequestCache", modifiers: " const&", def_value: None }]
constexpr RequestCache(RequestCache const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RequestCache", modifiers: "&&", def_value: None }]
constexpr RequestCache(RequestCache&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RequestCache(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RequestCache& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RequestCache& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RequestCache& operator=(RequestCache&& o) noexcept = default;
  constexpr RequestCache& operator=(RequestCache const& o) noexcept = default;
                


// Fields

static ::ArrayW<char16_t> __declspec(property(get=__get_LineSplits, put=__set_LineSplits))  LineSplits;

static void __set_LineSplits(::ArrayW<char16_t> value) ;

static ::ArrayW<char16_t> __get_LineSplits() ;


// Methods

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Cache
} // end anonymous namespace
NEED_NO_BOX(::System::Net::Cache::RequestCache);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Cache::RequestCache, "System.Net.Cache", "RequestCache");
