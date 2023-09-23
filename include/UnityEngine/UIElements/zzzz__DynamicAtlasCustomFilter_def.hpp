#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine::UIElements {
struct DynamicAtlasFilters;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class DynamicAtlasCustomFilter;
}
// Type: UnityEngine.UIElements::DynamicAtlasCustomFilter
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6844))
// CS Name: UnityEngine.UIElements.DynamicAtlasCustomFilter
class CORDL_TYPE DynamicAtlasCustomFilter : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~DynamicAtlasCustomFilter() = default;

// Ctor Parameters [CppParam { name: "", ty: "DynamicAtlasCustomFilter", modifiers: " const&", def_value: None }]
constexpr DynamicAtlasCustomFilter(DynamicAtlasCustomFilter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DynamicAtlasCustomFilter", modifiers: "&&", def_value: None }]
constexpr DynamicAtlasCustomFilter(DynamicAtlasCustomFilter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DynamicAtlasCustomFilter(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr DynamicAtlasCustomFilter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DynamicAtlasCustomFilter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DynamicAtlasCustomFilter& operator=(DynamicAtlasCustomFilter&& o) noexcept = default;
  constexpr DynamicAtlasCustomFilter& operator=(DynamicAtlasCustomFilter const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit DynamicAtlasCustomFilter(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2c3b338 size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2c3b410 size 0x14 virtual true final false
 bool Invoke(UnityEngine::Texture2D texture, ByRef<UnityEngine::UIElements::DynamicAtlasFilters> filtersToApply) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::DynamicAtlasCustomFilter);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::DynamicAtlasCustomFilter, "UnityEngine.UIElements", "DynamicAtlasCustomFilter");
