#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
namespace UnityEngine::UI {
class RectMask2D;
}
namespace UnityEngine {
struct Rect;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace UnityEngine::UI {
class Clipping;
}
// Type: UnityEngine.UI::Clipping
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12964))
// CS Name: UnityEngine.UI.Clipping
class CORDL_TYPE Clipping : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Clipping() = default;

// Ctor Parameters [CppParam { name: "", ty: "Clipping", modifiers: " const&", def_value: None }]
constexpr Clipping(Clipping const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Clipping", modifiers: "&&", def_value: None }]
constexpr Clipping(Clipping&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Clipping(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Clipping& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Clipping& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Clipping& operator=(Clipping&& o) noexcept = default;
  constexpr Clipping& operator=(Clipping const& o) noexcept = default;
                


// Methods

/// @brief Method FindCullAndClipWorldRect addr 0x2bda198 size 0x260 virtual false final false
static UnityEngine::Rect FindCullAndClipWorldRect(System::Collections::Generic::List_1<UnityEngine::UI::RectMask2D> rectMaskParents, ByRef<bool> validRect) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
NEED_NO_BOX(UnityEngine::UI::Clipping);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::Clipping, "UnityEngine.UI", "Clipping");
