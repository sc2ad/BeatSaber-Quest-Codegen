#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine::UIElements {
class IManipulator;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class VisualElementExtensions;
}
// Type: UnityEngine.UIElements::VisualElementExtensions
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6906))
// CS Name: UnityEngine.UIElements.VisualElementExtensions
class CORDL_TYPE VisualElementExtensions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~VisualElementExtensions() = default;

// Ctor Parameters [CppParam { name: "", ty: "VisualElementExtensions", modifiers: " const&", def_value: None }]
constexpr VisualElementExtensions(VisualElementExtensions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "VisualElementExtensions", modifiers: "&&", def_value: None }]
constexpr VisualElementExtensions(VisualElementExtensions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit VisualElementExtensions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr VisualElementExtensions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr VisualElementExtensions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr VisualElementExtensions& operator=(VisualElementExtensions&& o) noexcept = default;
  constexpr VisualElementExtensions& operator=(VisualElementExtensions const& o) noexcept = default;
                


// Methods

/// @brief Method WorldToLocal addr 0x2c4a834 size 0xec virtual false final false
static UnityEngine::Vector2 WorldToLocal(UnityEngine::UIElements::VisualElement ele, UnityEngine::Vector2 p) ;

/// @brief Method LocalToWorld addr 0x2c4a920 size 0xec virtual false final false
static UnityEngine::Vector2 LocalToWorld(UnityEngine::UIElements::VisualElement ele, UnityEngine::Vector2 p) ;

/// @brief Method WorldToLocal addr 0x2c4aa0c size 0xec virtual false final false
static UnityEngine::Rect WorldToLocal(UnityEngine::UIElements::VisualElement ele, UnityEngine::Rect r) ;

/// @brief Method AddManipulator addr 0x2c4aaf8 size 0xac virtual false final false
static void AddManipulator(UnityEngine::UIElements::VisualElement ele, UnityEngine::UIElements::IManipulator manipulator) ;

/// @brief Method RemoveManipulator addr 0x2c4aba4 size 0xa8 virtual false final false
static void RemoveManipulator(UnityEngine::UIElements::VisualElement ele, UnityEngine::UIElements::IManipulator manipulator) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::VisualElementExtensions);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::VisualElementExtensions, "UnityEngine.UIElements", "VisualElementExtensions");
