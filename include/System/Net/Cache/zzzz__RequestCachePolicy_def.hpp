#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Net::Cache {
struct RequestCacheLevel;
}
// Forward declare root types
namespace System::Net::Cache {
class RequestCachePolicy;
}
// Type: System.Net.Cache::RequestCachePolicy
namespace System::Net::Cache {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8173))
// CS Name: System.Net.Cache.RequestCachePolicy
class CORDL_TYPE RequestCachePolicy : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~RequestCachePolicy() = default;

// Ctor Parameters [CppParam { name: "", ty: "RequestCachePolicy", modifiers: " const&", def_value: None }]
constexpr RequestCachePolicy(RequestCachePolicy const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RequestCachePolicy", modifiers: "&&", def_value: None }]
constexpr RequestCachePolicy(RequestCachePolicy&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RequestCachePolicy(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RequestCachePolicy& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RequestCachePolicy& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RequestCachePolicy& operator=(RequestCachePolicy&& o) noexcept = default;
  constexpr RequestCachePolicy& operator=(RequestCachePolicy const& o) noexcept = default;
                


// Fields

 System::Net::Cache::RequestCacheLevel __declspec(property(get=__get_m_Level, put=__set_m_Level))  m_Level;

constexpr void __set_m_Level(System::Net::Cache::RequestCacheLevel value) ;

constexpr System::Net::Cache::RequestCacheLevel __get_m_Level() const;


// Properties

 System::Net::Cache::RequestCacheLevel __declspec(property(get=get_Level))  Level;


// Methods

static System::Net::Cache::RequestCachePolicy New_ctor(System::Net::Cache::RequestCacheLevel level) ;

/// @brief Method .ctor addr 0x285ec94 size 0x7c virtual false final false
 void _ctor(System::Net::Cache::RequestCacheLevel level) ;

/// @brief Method get_Level addr 0x285eda4 size 0x8 virtual false final false
 System::Net::Cache::RequestCacheLevel get_Level() ;

/// @brief Method ToString addr 0x285edac size 0x98 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Cache
NEED_NO_BOX(System::Net::Cache::RequestCachePolicy);
DEFINE_IL2CPP_ARG_TYPE(System::Net::Cache::RequestCachePolicy, "System.Net.Cache", "RequestCachePolicy");
