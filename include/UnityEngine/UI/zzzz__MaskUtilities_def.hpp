#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
class Component;
}
namespace UnityEngine::UI {
class RectMask2D;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::UI {
class IClippable;
}
// Forward declare root types
namespace UnityEngine::UI {
class MaskUtilities;
}
// Type: UnityEngine.UI::MaskUtilities
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13039))
// CS Name: UnityEngine.UI.MaskUtilities
class CORDL_TYPE MaskUtilities : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~MaskUtilities() = default;

// Ctor Parameters [CppParam { name: "", ty: "MaskUtilities", modifiers: " const&", def_value: None }]
constexpr MaskUtilities(MaskUtilities const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MaskUtilities", modifiers: "&&", def_value: None }]
constexpr MaskUtilities(MaskUtilities&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MaskUtilities(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MaskUtilities& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MaskUtilities& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MaskUtilities& operator=(MaskUtilities&& o) noexcept = default;
  constexpr MaskUtilities& operator=(MaskUtilities const& o) noexcept = default;
                


// Methods

/// @brief Method Notify2DMaskStateChanged addr 0x2c030dc size 0x25c virtual false final false
static void Notify2DMaskStateChanged(::UnityEngine::Component mask) ;

/// @brief Method NotifyStencilStateChanged addr 0x2c017ac size 0x258 virtual false final false
static void NotifyStencilStateChanged(::UnityEngine::Component mask) ;

/// @brief Method FindRootSortOverrideCanvas addr 0x2c01f08 size 0x1a0 virtual false final false
static ::UnityEngine::Transform FindRootSortOverrideCanvas(::UnityEngine::Transform start) ;

/// @brief Method GetStencilDepth addr 0x2c020a8 size 0x288 virtual false final false
static int32_t GetStencilDepth(::UnityEngine::Transform transform, ::UnityEngine::Transform stopAfter) ;

/// @brief Method IsDescendantOrSelf addr 0x2c03338 size 0x150 virtual false final false
static bool IsDescendantOrSelf(::UnityEngine::Transform father, ::UnityEngine::Transform child) ;

/// @brief Method GetRectMaskForClippable addr 0x2c02b2c size 0x41c virtual false final false
static ::UnityEngine::UI::RectMask2D GetRectMaskForClippable(::UnityEngine::UI::IClippable clippable) ;

/// @brief Method GetRectMasksForClip addr 0x2c03488 size 0x364 virtual false final false
static void GetRectMasksForClip(::UnityEngine::UI::RectMask2D clipper, ::System::Collections::Generic::List_1<::UnityEngine::UI::RectMask2D> masks) ;

// Ctor Parameters []
explicit MaskUtilities() ;

/// @brief Method .ctor addr 0x2c037ec size 0x1008 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UI::MaskUtilities);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::MaskUtilities, "UnityEngine.UI", "MaskUtilities");
