#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__FocusChangeDirection_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
namespace UnityEngine::UIElements {
class VisualElementFocusRing;
}
namespace UnityEngine::UIElements {
class Focusable;
}
namespace UnityEngine::UIElements {
class UnityEngine__UIElements__NavigateFocusRing__ChangeDirection;
}
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
class FocusChangeDirection;
}
namespace UnityEngine::UIElements {
class FocusController;
}
namespace UnityEngine::UIElements {
class IFocusRing;
}
namespace UnityEngine::UIElements {
struct UnityEngine__UIElements__NavigateFocusRing__FocusableHierarchyTraversal;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine {
struct Rect;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class NavigateFocusRing;
}
namespace UnityEngine::UIElements {
class UnityEngine__UIElements__NavigateFocusRing__ChangeDirection;
}
namespace UnityEngine::UIElements {
struct UnityEngine__UIElements__NavigateFocusRing__FocusableHierarchyTraversal;
}
// Type: ::ChangeDirection
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6967))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7113))
// CS Name: UnityEngine.UIElements.NavigateFocusRing::ChangeDirection
class CORDL_TYPE UnityEngine__UIElements__NavigateFocusRing__ChangeDirection : public UnityEngine::UIElements::FocusChangeDirection {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~UnityEngine__UIElements__NavigateFocusRing__ChangeDirection() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__NavigateFocusRing__ChangeDirection", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__NavigateFocusRing__ChangeDirection(UnityEngine__UIElements__NavigateFocusRing__ChangeDirection const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__NavigateFocusRing__ChangeDirection", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__NavigateFocusRing__ChangeDirection(UnityEngine__UIElements__NavigateFocusRing__ChangeDirection&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__NavigateFocusRing__ChangeDirection(void* ptr) noexcept : UnityEngine::UIElements::FocusChangeDirection(ptr) {
}


  constexpr UnityEngine__UIElements__NavigateFocusRing__ChangeDirection& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__NavigateFocusRing__ChangeDirection& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__NavigateFocusRing__ChangeDirection& operator=(UnityEngine__UIElements__NavigateFocusRing__ChangeDirection&& o) noexcept = default;
  constexpr UnityEngine__UIElements__NavigateFocusRing__ChangeDirection& operator=(UnityEngine__UIElements__NavigateFocusRing__ChangeDirection const& o) noexcept = default;
                


// Methods

static UnityEngine::UIElements::UnityEngine__UIElements__NavigateFocusRing__ChangeDirection New_ctor(int32_t i) ;

/// @brief Method .ctor addr 0x2ca1794 size 0x68 virtual false final false
 void _ctor(int32_t i) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::FocusableHierarchyTraversal
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7114))
// CS Name: UnityEngine.UIElements.NavigateFocusRing::FocusableHierarchyTraversal
struct CORDL_TYPE UnityEngine__UIElements__NavigateFocusRing__FocusableHierarchyTraversal : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "currentFocusable", ty: "UnityEngine::UIElements::VisualElement", modifiers: "", def_value: None }, CppParam { name: "validRect", ty: "UnityEngine::Rect", modifiers: "", def_value: None }, CppParam { name: "firstPass", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "direction", ty: "UnityEngine::UIElements::UnityEngine__UIElements__NavigateFocusRing__ChangeDirection", modifiers: "", def_value: None }]
constexpr UnityEngine__UIElements__NavigateFocusRing__FocusableHierarchyTraversal(UnityEngine::UIElements::VisualElement currentFocusable, UnityEngine::Rect validRect, bool firstPass, UnityEngine::UIElements::UnityEngine__UIElements__NavigateFocusRing__ChangeDirection direction) noexcept;


                    constexpr UnityEngine__UIElements__NavigateFocusRing__FocusableHierarchyTraversal(UnityEngine__UIElements__NavigateFocusRing__FocusableHierarchyTraversal const&) = default;
                    constexpr UnityEngine__UIElements__NavigateFocusRing__FocusableHierarchyTraversal(UnityEngine__UIElements__NavigateFocusRing__FocusableHierarchyTraversal&&) = default;
                    constexpr UnityEngine__UIElements__NavigateFocusRing__FocusableHierarchyTraversal& operator=(UnityEngine__UIElements__NavigateFocusRing__FocusableHierarchyTraversal const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UIElements__NavigateFocusRing__FocusableHierarchyTraversal& operator=(UnityEngine__UIElements__NavigateFocusRing__FocusableHierarchyTraversal&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x28};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__NavigateFocusRing__FocusableHierarchyTraversal(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::UIElements::VisualElement __declspec(property(get=__get_currentFocusable, put=__set_currentFocusable))  currentFocusable;

constexpr void __set_currentFocusable(UnityEngine::UIElements::VisualElement value) ;

constexpr UnityEngine::UIElements::VisualElement __get_currentFocusable() const;

 UnityEngine::Rect __declspec(property(get=__get_validRect, put=__set_validRect))  validRect;

constexpr void __set_validRect(UnityEngine::Rect value) ;

constexpr UnityEngine::Rect __get_validRect() const;

 bool __declspec(property(get=__get_firstPass, put=__set_firstPass))  firstPass;

constexpr void __set_firstPass(bool value) ;

constexpr bool __get_firstPass() const;

 UnityEngine::UIElements::UnityEngine__UIElements__NavigateFocusRing__ChangeDirection __declspec(property(get=__get_direction, put=__set_direction))  direction;

constexpr void __set_direction(UnityEngine::UIElements::UnityEngine__UIElements__NavigateFocusRing__ChangeDirection value) ;

constexpr UnityEngine::UIElements::UnityEngine__UIElements__NavigateFocusRing__ChangeDirection __get_direction() const;


// Methods

/// @brief Method ValidateHierarchyTraversal addr 0x2ca17fc size 0xb0 virtual false final false
 bool ValidateHierarchyTraversal(UnityEngine::UIElements::VisualElement v) ;

/// @brief Method ValidateElement addr 0x2ca18ac size 0xc4 virtual false final false
 bool ValidateElement(UnityEngine::UIElements::VisualElement v) ;

/// @brief Method Order addr 0x2ca1970 size 0xec virtual false final false
 int32_t Order(UnityEngine::UIElements::VisualElement a, UnityEngine::UIElements::VisualElement b) ;

/// @brief Method StrictOrder addr 0x2ca1d84 size 0x84 virtual false final false
 int32_t StrictOrder(UnityEngine::UIElements::VisualElement a, UnityEngine::UIElements::VisualElement b) ;

/// @brief Method StrictOrder addr 0x2ca1a5c size 0x1f4 virtual false final false
 int32_t StrictOrder(UnityEngine::Rect ra, UnityEngine::Rect rb) ;

/// @brief Method TieBreaker addr 0x2ca1c50 size 0x134 virtual false final false
 int32_t TieBreaker(UnityEngine::Rect ra, UnityEngine::Rect rb) ;

/// @brief Method GetBestOverall addr 0x2ca11b8 size 0x13c virtual false final false
 UnityEngine::UIElements::VisualElement GetBestOverall(UnityEngine::UIElements::VisualElement candidate, UnityEngine::UIElements::VisualElement bestSoFar) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::NavigateFocusRing
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7115))
// CS Name: UnityEngine.UIElements.NavigateFocusRing
class CORDL_TYPE NavigateFocusRing : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using FocusableHierarchyTraversal = UnityEngine::UIElements::UnityEngine__UIElements__NavigateFocusRing__FocusableHierarchyTraversal;

using ChangeDirection = UnityEngine::UIElements::UnityEngine__UIElements__NavigateFocusRing__ChangeDirection;

/// @brief Convert operator to UnityEngine::UIElements::IFocusRing
constexpr operator  UnityEngine::UIElements::IFocusRing() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~NavigateFocusRing() = default;

// Ctor Parameters [CppParam { name: "", ty: "NavigateFocusRing", modifiers: " const&", def_value: None }]
constexpr NavigateFocusRing(NavigateFocusRing const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NavigateFocusRing", modifiers: "&&", def_value: None }]
constexpr NavigateFocusRing(NavigateFocusRing&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NavigateFocusRing(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr NavigateFocusRing& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NavigateFocusRing& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NavigateFocusRing& operator=(NavigateFocusRing&& o) noexcept = default;
  constexpr NavigateFocusRing& operator=(NavigateFocusRing const& o) noexcept = default;
                


// Fields

static UnityEngine::UIElements::UnityEngine__UIElements__NavigateFocusRing__ChangeDirection __declspec(property(get=__get_Left, put=__set_Left))  Left;

static void __set_Left(UnityEngine::UIElements::UnityEngine__UIElements__NavigateFocusRing__ChangeDirection value) ;

static UnityEngine::UIElements::UnityEngine__UIElements__NavigateFocusRing__ChangeDirection __get_Left() ;

static UnityEngine::UIElements::UnityEngine__UIElements__NavigateFocusRing__ChangeDirection __declspec(property(get=__get_Right, put=__set_Right))  Right;

static void __set_Right(UnityEngine::UIElements::UnityEngine__UIElements__NavigateFocusRing__ChangeDirection value) ;

static UnityEngine::UIElements::UnityEngine__UIElements__NavigateFocusRing__ChangeDirection __get_Right() ;

static UnityEngine::UIElements::UnityEngine__UIElements__NavigateFocusRing__ChangeDirection __declspec(property(get=__get_Up, put=__set_Up))  Up;

static void __set_Up(UnityEngine::UIElements::UnityEngine__UIElements__NavigateFocusRing__ChangeDirection value) ;

static UnityEngine::UIElements::UnityEngine__UIElements__NavigateFocusRing__ChangeDirection __get_Up() ;

static UnityEngine::UIElements::UnityEngine__UIElements__NavigateFocusRing__ChangeDirection __declspec(property(get=__get_Down, put=__set_Down))  Down;

static void __set_Down(UnityEngine::UIElements::UnityEngine__UIElements__NavigateFocusRing__ChangeDirection value) ;

static UnityEngine::UIElements::UnityEngine__UIElements__NavigateFocusRing__ChangeDirection __get_Down() ;

static UnityEngine::UIElements::UnityEngine__UIElements__NavigateFocusRing__ChangeDirection __declspec(property(get=__get_Next, put=__set_Next))  Next;

static void __set_Next(UnityEngine::UIElements::UnityEngine__UIElements__NavigateFocusRing__ChangeDirection value) ;

static UnityEngine::UIElements::UnityEngine__UIElements__NavigateFocusRing__ChangeDirection __get_Next() ;

static UnityEngine::UIElements::UnityEngine__UIElements__NavigateFocusRing__ChangeDirection __declspec(property(get=__get_Previous, put=__set_Previous))  Previous;

static void __set_Previous(UnityEngine::UIElements::UnityEngine__UIElements__NavigateFocusRing__ChangeDirection value) ;

static UnityEngine::UIElements::UnityEngine__UIElements__NavigateFocusRing__ChangeDirection __get_Previous() ;

 UnityEngine::UIElements::VisualElement __declspec(property(get=__get_m_Root, put=__set_m_Root))  m_Root;

constexpr void __set_m_Root(UnityEngine::UIElements::VisualElement value) ;

constexpr UnityEngine::UIElements::VisualElement __get_m_Root() const;

 UnityEngine::UIElements::VisualElementFocusRing __declspec(property(get=__get_m_Ring, put=__set_m_Ring))  m_Ring;

constexpr void __set_m_Ring(UnityEngine::UIElements::VisualElementFocusRing value) ;

constexpr UnityEngine::UIElements::VisualElementFocusRing __get_m_Ring() const;


// Properties

 UnityEngine::UIElements::FocusController __declspec(property(get=get_focusController))  focusController;


// Methods

/// @brief Method get_focusController addr 0x2ca0490 size 0x24 virtual false final false
 UnityEngine::UIElements::FocusController get_focusController() ;

static UnityEngine::UIElements::NavigateFocusRing New_ctor(UnityEngine::UIElements::VisualElement root) ;

/// @brief Method .ctor addr 0x2c9f978 size 0x84 virtual false final false
 void _ctor(UnityEngine::UIElements::VisualElement root) ;

/// @brief Method GetFocusChangeDirection addr 0x2ca04b4 size 0x438 virtual true final true
 UnityEngine::UIElements::FocusChangeDirection GetFocusChangeDirection(UnityEngine::UIElements::Focusable currentFocusable, UnityEngine::UIElements::EventBase e) ;

/// @brief Method GetNextFocusable addr 0x2ca08ec size 0x2b4 virtual true final false
 UnityEngine::UIElements::Focusable GetNextFocusable(UnityEngine::UIElements::Focusable currentFocusable, UnityEngine::UIElements::FocusChangeDirection direction) ;

/// @brief Method GetNextFocusable2D addr 0x2ca0ba0 size 0x590 virtual false final false
 UnityEngine::UIElements::Focusable GetNextFocusable2D(UnityEngine::UIElements::Focusable currentFocusable, UnityEngine::UIElements::UnityEngine__UIElements__NavigateFocusRing__ChangeDirection direction) ;

/// @brief Method IsActive addr 0x2ca1354 size 0xd8 virtual false final false
static bool IsActive(UnityEngine::UIElements::VisualElement v) ;

/// @brief Method IsFocusable addr 0x2ca142c size 0x40 virtual false final false
static bool IsFocusable(UnityEngine::UIElements::Focusable focusable) ;

/// @brief Method IsLeaf addr 0x2ca146c size 0x40 virtual false final false
static bool IsLeaf(UnityEngine::UIElements::Focusable focusable) ;

/// @brief Method IsFocusRoot addr 0x2ca14ac size 0xb0 virtual false final false
static bool IsFocusRoot(UnityEngine::UIElements::VisualElement focusable) ;

/// @brief Method GetLeafFocusable addr 0x2ca12f4 size 0x60 virtual false final false
static UnityEngine::UIElements::VisualElement GetLeafFocusable(UnityEngine::UIElements::VisualElement v) ;

/// @brief Method GetLeafFocusableRecursive addr 0x2ca155c size 0x10c virtual false final false
static UnityEngine::UIElements::VisualElement GetLeafFocusableRecursive(UnityEngine::UIElements::VisualElement v) ;

/// @brief Method GetRootFocusable addr 0x2ca1130 size 0x88 virtual false final false
static UnityEngine::UIElements::VisualElement GetRootFocusable(UnityEngine::UIElements::VisualElement v) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::NavigateFocusRing);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::NavigateFocusRing, "UnityEngine.UIElements", "NavigateFocusRing");
NEED_NO_BOX(UnityEngine::UIElements::UnityEngine__UIElements__NavigateFocusRing__ChangeDirection);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__NavigateFocusRing__ChangeDirection, "UnityEngine.UIElements", "NavigateFocusRing/ChangeDirection");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__NavigateFocusRing__FocusableHierarchyTraversal, "UnityEngine.UIElements", "NavigateFocusRing/FocusableHierarchyTraversal");
