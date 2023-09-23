#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
// Forward declare root types
namespace UnityEngine::ResourceManagement::ResourceProviders {
class ProviderLoadRequestOptions;
}
// Type: UnityEngine.ResourceManagement.ResourceProviders::ProviderLoadRequestOptions
namespace UnityEngine::ResourceManagement::ResourceProviders {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14295))
// CS Name: UnityEngine.ResourceManagement.ResourceProviders.ProviderLoadRequestOptions
class CORDL_TYPE ProviderLoadRequestOptions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~ProviderLoadRequestOptions() = default;

// Ctor Parameters [CppParam { name: "", ty: "ProviderLoadRequestOptions", modifiers: " const&", def_value: None }]
constexpr ProviderLoadRequestOptions(ProviderLoadRequestOptions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ProviderLoadRequestOptions", modifiers: "&&", def_value: None }]
constexpr ProviderLoadRequestOptions(ProviderLoadRequestOptions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ProviderLoadRequestOptions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ProviderLoadRequestOptions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ProviderLoadRequestOptions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ProviderLoadRequestOptions& operator=(ProviderLoadRequestOptions&& o) noexcept = default;
  constexpr ProviderLoadRequestOptions& operator=(ProviderLoadRequestOptions const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_m_IgnoreFailures, put=__set_m_IgnoreFailures))  m_IgnoreFailures;

constexpr void __set_m_IgnoreFailures(bool value) ;

constexpr bool __get_m_IgnoreFailures() const;

 int32_t __declspec(property(get=__get_m_WebRequestTimeout, put=__set_m_WebRequestTimeout))  m_WebRequestTimeout;

constexpr void __set_m_WebRequestTimeout(int32_t value) ;

constexpr int32_t __get_m_WebRequestTimeout() const;


// Properties

 bool __declspec(property(get=get_IgnoreFailures, put=set_IgnoreFailures))  IgnoreFailures;

 int32_t __declspec(property(get=get_WebRequestTimeout, put=set_WebRequestTimeout))  WebRequestTimeout;


// Methods

/// @brief Method Copy addr 0x2a40a40 size 0x80 virtual false final false
 UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions Copy() ;

/// @brief Method get_IgnoreFailures addr 0x2a40ac0 size 0x8 virtual false final false
 bool get_IgnoreFailures() ;

/// @brief Method set_IgnoreFailures addr 0x2a40ac8 size 0xc virtual false final false
 void set_IgnoreFailures(bool value) ;

/// @brief Method get_WebRequestTimeout addr 0x2a40ad4 size 0x8 virtual false final false
 int32_t get_WebRequestTimeout() ;

/// @brief Method set_WebRequestTimeout addr 0x2a40adc size 0x8 virtual false final false
 void set_WebRequestTimeout(int32_t value) ;

// Ctor Parameters []
explicit ProviderLoadRequestOptions() ;

/// @brief Method .ctor addr 0x2a40ae4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement::ResourceProviders
NEED_NO_BOX(UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions, "UnityEngine.ResourceManagement.ResourceProviders", "ProviderLoadRequestOptions");
