#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__VerticalVirtualizationController_1_def.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::UIElements {
class BaseVerticalCollectionView;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template<typename T>
class FixedHeightVirtualizationController_1;
}
namespace UnityEngine::UIElements {
template<::cordl_internals::il2cpp_reference_type T>
class FixedHeightVirtualizationController_1<T>;
}
// Type: UnityEngine.UIElements::FixedHeightVirtualizationController`1
// Type: UnityEngine.UIElements::FixedHeightVirtualizationController`1
namespace UnityEngine::UIElements {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7470)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7470), inst: 5174 }), TypeDefinitionIndex(TypeDefinitionIndex(7467))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7467), inst: 2 })
// CS Name: UnityEngine.UIElements.FixedHeightVirtualizationController`1
class CORDL_TYPE FixedHeightVirtualizationController_1<T> : public UnityEngine::UIElements::VerticalVirtualizationController_1<T> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~FixedHeightVirtualizationController_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "FixedHeightVirtualizationController_1", modifiers: " const&", def_value: None }]
constexpr FixedHeightVirtualizationController_1(FixedHeightVirtualizationController_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FixedHeightVirtualizationController_1", modifiers: "&&", def_value: None }]
constexpr FixedHeightVirtualizationController_1(FixedHeightVirtualizationController_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FixedHeightVirtualizationController_1(void* ptr) noexcept : UnityEngine::UIElements::VerticalVirtualizationController_1<T>(ptr) {
}


  constexpr FixedHeightVirtualizationController_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FixedHeightVirtualizationController_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FixedHeightVirtualizationController_1& operator=(FixedHeightVirtualizationController_1&& o) noexcept = default;
  constexpr FixedHeightVirtualizationController_1& operator=(FixedHeightVirtualizationController_1 const& o) noexcept = default;
                


// Properties

 float_t __declspec(property(get=get_resolvedItemHeight))  resolvedItemHeight;


// Methods

/// @brief Method get_resolvedItemHeight addr 0x0 size 0xffffffffffffffff virtual false final false
 float_t get_resolvedItemHeight() ;

/// @brief Method VisibleItemPredicate addr 0x0 size 0xffffffffffffffff virtual true final false
 bool VisibleItemPredicate(T i) ;

// Ctor Parameters [CppParam { name: "collectionView", ty: "UnityEngine::UIElements::BaseVerticalCollectionView", modifiers: "", def_value: None }]
explicit FixedHeightVirtualizationController_1(UnityEngine::UIElements::BaseVerticalCollectionView collectionView) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(UnityEngine::UIElements::BaseVerticalCollectionView collectionView) ;

/// @brief Method GetIndexFromPosition addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetIndexFromPosition(UnityEngine::Vector2 position) ;

/// @brief Method GetItemHeight addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t GetItemHeight(int32_t index) ;

/// @brief Method ScrollToItem addr 0x0 size 0xffffffffffffffff virtual true final false
 void ScrollToItem(int32_t index) ;

/// @brief Method Resize addr 0x0 size 0xffffffffffffffff virtual true final false
 void Resize(UnityEngine::Vector2 size, int32_t layoutPass) ;

/// @brief Method OnScroll addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnScroll(UnityEngine::Vector2 scrollOffset) ;

/// @brief Method GetOrMakeItem addr 0x0 size 0xffffffffffffffff virtual true final false
 T GetOrMakeItem() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(UnityEngine::UIElements::FixedHeightVirtualizationController_1, "UnityEngine.UIElements", "FixedHeightVirtualizationController`1");
