#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
// Forward declare root types
namespace UnityEngine::UI {
class MultipleDisplayUtilities;
}
// Type: UnityEngine.UI::MultipleDisplayUtilities
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13042))
// CS Name: UnityEngine.UI.MultipleDisplayUtilities
class CORDL_TYPE MultipleDisplayUtilities : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~MultipleDisplayUtilities() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultipleDisplayUtilities", modifiers: " const&", def_value: None }]
constexpr MultipleDisplayUtilities(MultipleDisplayUtilities const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultipleDisplayUtilities", modifiers: "&&", def_value: None }]
constexpr MultipleDisplayUtilities(MultipleDisplayUtilities&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultipleDisplayUtilities(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MultipleDisplayUtilities& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultipleDisplayUtilities& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultipleDisplayUtilities& operator=(MultipleDisplayUtilities&& o) noexcept = default;
  constexpr MultipleDisplayUtilities& operator=(MultipleDisplayUtilities const& o) noexcept = default;
                


// Methods

/// @brief Method GetRelativeMousePositionForDrag addr 0x2c0499c size 0x68 virtual false final false
static bool GetRelativeMousePositionForDrag(UnityEngine::EventSystems::PointerEventData eventData, ByRef<UnityEngine::Vector2> position) ;

/// @brief Method RelativeMouseAtScaled addr 0x2c04a04 size 0x468 virtual false final false
static UnityEngine::Vector3 RelativeMouseAtScaled(UnityEngine::Vector2 position) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
NEED_NO_BOX(UnityEngine::UI::MultipleDisplayUtilities);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::MultipleDisplayUtilities, "UnityEngine.UI", "MultipleDisplayUtilities");
