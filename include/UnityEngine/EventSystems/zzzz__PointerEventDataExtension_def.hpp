#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Ray;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
// Forward declare root types
namespace UnityEngine::EventSystems {
class PointerEventDataExtension;
}
// Type: UnityEngine.EventSystems::PointerEventDataExtension
namespace UnityEngine::EventSystems {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9522))
// CS Name: UnityEngine.EventSystems.PointerEventDataExtension
class CORDL_TYPE PointerEventDataExtension : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~PointerEventDataExtension() = default;

// Ctor Parameters [CppParam { name: "", ty: "PointerEventDataExtension", modifiers: " const&", def_value: None }]
constexpr PointerEventDataExtension(PointerEventDataExtension const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PointerEventDataExtension", modifiers: "&&", def_value: None }]
constexpr PointerEventDataExtension(PointerEventDataExtension&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PointerEventDataExtension(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PointerEventDataExtension& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PointerEventDataExtension& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PointerEventDataExtension& operator=(PointerEventDataExtension&& o) noexcept = default;
  constexpr PointerEventDataExtension& operator=(PointerEventDataExtension const& o) noexcept = default;
                


// Methods

/// @brief Method IsVRPointer addr 0x266c02c size 0x78 virtual false final false
static bool IsVRPointer(::UnityEngine::EventSystems::PointerEventData pointerEventData) ;

/// @brief Method GetRay addr 0x266e5f4 size 0x88 virtual false final false
static ::UnityEngine::Ray GetRay(::UnityEngine::EventSystems::PointerEventData pointerEventData) ;

/// @brief Method GetSwipeStart addr 0x266da94 size 0x7c virtual false final false
static ::UnityEngine::Vector2 GetSwipeStart(::UnityEngine::EventSystems::PointerEventData pointerEventData) ;

/// @brief Method SetSwipeStart addr 0x266c0a4 size 0x8c virtual false final false
static void SetSwipeStart(::UnityEngine::EventSystems::PointerEventData pointerEventData, ::UnityEngine::Vector2 start) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::EventSystems
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::EventSystems::PointerEventDataExtension);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::PointerEventDataExtension, "UnityEngine.EventSystems", "PointerEventDataExtension");
