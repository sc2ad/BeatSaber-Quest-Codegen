#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace UnityEngine::UIElements {
struct DynamicAtlasFilters;
}
namespace UnityEngine::UIElements {
struct DynamicAtlasFiltersInternal;
}
namespace UnityEngine::UIElements {
class DynamicAtlasCustomFilter;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class DynamicAtlasSettings;
}
// Type: UnityEngine.UIElements::DynamicAtlasSettings
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7110))
// CS Name: UnityEngine.UIElements.DynamicAtlasSettings
class CORDL_TYPE DynamicAtlasSettings : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~DynamicAtlasSettings() = default;

// Ctor Parameters [CppParam { name: "", ty: "DynamicAtlasSettings", modifiers: " const&", def_value: None }]
constexpr DynamicAtlasSettings(DynamicAtlasSettings const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DynamicAtlasSettings", modifiers: "&&", def_value: None }]
constexpr DynamicAtlasSettings(DynamicAtlasSettings&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DynamicAtlasSettings(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DynamicAtlasSettings& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DynamicAtlasSettings& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DynamicAtlasSettings& operator=(DynamicAtlasSettings&& o) noexcept = default;
  constexpr DynamicAtlasSettings& operator=(DynamicAtlasSettings const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_m_MinAtlasSize, put=__set_m_MinAtlasSize))  m_MinAtlasSize;

constexpr void __set_m_MinAtlasSize(int32_t value) ;

constexpr int32_t __get_m_MinAtlasSize() const;

 int32_t __declspec(property(get=__get_m_MaxAtlasSize, put=__set_m_MaxAtlasSize))  m_MaxAtlasSize;

constexpr void __set_m_MaxAtlasSize(int32_t value) ;

constexpr int32_t __get_m_MaxAtlasSize() const;

 int32_t __declspec(property(get=__get_m_MaxSubTextureSize, put=__set_m_MaxSubTextureSize))  m_MaxSubTextureSize;

constexpr void __set_m_MaxSubTextureSize(int32_t value) ;

constexpr int32_t __get_m_MaxSubTextureSize() const;

 UnityEngine::UIElements::DynamicAtlasFiltersInternal __declspec(property(get=__get_m_ActiveFilters, put=__set_m_ActiveFilters))  m_ActiveFilters;

constexpr void __set_m_ActiveFilters(UnityEngine::UIElements::DynamicAtlasFiltersInternal value) ;

constexpr UnityEngine::UIElements::DynamicAtlasFiltersInternal __get_m_ActiveFilters() const;

 UnityEngine::UIElements::DynamicAtlasCustomFilter __declspec(property(get=__get_m_CustomFilter, put=__set_m_CustomFilter))  m_CustomFilter;

constexpr void __set_m_CustomFilter(UnityEngine::UIElements::DynamicAtlasCustomFilter value) ;

constexpr UnityEngine::UIElements::DynamicAtlasCustomFilter __get_m_CustomFilter() const;


// Properties

 int32_t __declspec(property(get=get_minAtlasSize, put=set_minAtlasSize))  minAtlasSize;

 int32_t __declspec(property(get=get_maxAtlasSize, put=set_maxAtlasSize))  maxAtlasSize;

 int32_t __declspec(property(get=get_maxSubTextureSize, put=set_maxSubTextureSize))  maxSubTextureSize;

 UnityEngine::UIElements::DynamicAtlasFilters __declspec(property(get=get_activeFilters, put=set_activeFilters))  activeFilters;

static UnityEngine::UIElements::DynamicAtlasFilters __declspec(property(get=get_defaultFilters))  defaultFilters;

 UnityEngine::UIElements::DynamicAtlasCustomFilter __declspec(property(get=get_customFilter, put=set_customFilter))  customFilter;

static UnityEngine::UIElements::DynamicAtlasSettings __declspec(property(get=get_defaults))  defaults;


// Methods

/// @brief Method get_minAtlasSize addr 0x2c9f638 size 0x8 virtual false final false
 int32_t get_minAtlasSize() ;

/// @brief Method set_minAtlasSize addr 0x2c9f640 size 0x8 virtual false final false
 void set_minAtlasSize(int32_t value) ;

/// @brief Method get_maxAtlasSize addr 0x2c9f648 size 0x8 virtual false final false
 int32_t get_maxAtlasSize() ;

/// @brief Method set_maxAtlasSize addr 0x2c9f650 size 0x8 virtual false final false
 void set_maxAtlasSize(int32_t value) ;

/// @brief Method get_maxSubTextureSize addr 0x2c9f658 size 0x8 virtual false final false
 int32_t get_maxSubTextureSize() ;

/// @brief Method set_maxSubTextureSize addr 0x2c9f660 size 0x8 virtual false final false
 void set_maxSubTextureSize(int32_t value) ;

/// @brief Method get_activeFilters addr 0x2c9f668 size 0x8 virtual false final false
 UnityEngine::UIElements::DynamicAtlasFilters get_activeFilters() ;

/// @brief Method set_activeFilters addr 0x2c9f670 size 0x8 virtual false final false
 void set_activeFilters(UnityEngine::UIElements::DynamicAtlasFilters value) ;

/// @brief Method get_defaultFilters addr 0x2c9f678 size 0x8 virtual false final false
static UnityEngine::UIElements::DynamicAtlasFilters get_defaultFilters() ;

/// @brief Method get_customFilter addr 0x2c9f680 size 0x8 virtual false final false
 UnityEngine::UIElements::DynamicAtlasCustomFilter get_customFilter() ;

/// @brief Method set_customFilter addr 0x2c9f688 size 0x8 virtual false final false
 void set_customFilter(UnityEngine::UIElements::DynamicAtlasCustomFilter value) ;

/// @brief Method get_defaults addr 0x2c9f690 size 0x80 virtual false final false
static UnityEngine::UIElements::DynamicAtlasSettings get_defaults() ;

// Ctor Parameters []
explicit DynamicAtlasSettings() ;

/// @brief Method .ctor addr 0x2c9f710 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::DynamicAtlasSettings);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::DynamicAtlasSettings, "UnityEngine.UIElements", "DynamicAtlasSettings");
