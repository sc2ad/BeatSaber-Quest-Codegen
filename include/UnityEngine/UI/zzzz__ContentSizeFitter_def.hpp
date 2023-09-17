#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/EventSystems/zzzz__UIBehaviour_def.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine {
struct DrivenRectTransformTracker;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine::UI {
class ILayoutController;
}
namespace UnityEngine::UI {
class ILayoutSelfController;
}
// Forward declare root types
namespace UnityEngine::UI {
struct ____UnityEngine__UI__ContentSizeFitter__FitMode;
}
namespace UnityEngine::UI {
class ContentSizeFitter;
}
// Type: ::FitMode
namespace UnityEngine::UI {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13015))
// CS Name: UnityEngine.UI.ContentSizeFitter::FitMode
struct CORDL_TYPE ____UnityEngine__UI__ContentSizeFitter__FitMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____UnityEngine__UI__ContentSizeFitter__FitMode(int32_t value__) noexcept;


                    constexpr ____UnityEngine__UI__ContentSizeFitter__FitMode(____UnityEngine__UI__ContentSizeFitter__FitMode const&) = default;
                    constexpr ____UnityEngine__UI__ContentSizeFitter__FitMode(____UnityEngine__UI__ContentSizeFitter__FitMode&&) = default;
                    constexpr ____UnityEngine__UI__ContentSizeFitter__FitMode& operator=(____UnityEngine__UI__ContentSizeFitter__FitMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__UI__ContentSizeFitter__FitMode& operator=(____UnityEngine__UI__ContentSizeFitter__FitMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__UI__ContentSizeFitter__FitMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______UnityEngine__UI__ContentSizeFitter__FitMode_Unwrapped : int32_t {
__Unconstrained = 0,
__MinSize = 1,
__PreferredSize = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______UnityEngine__UI__ContentSizeFitter__FitMode_Unwrapped () const noexcept {
return std::bit_cast<______UnityEngine__UI__ContentSizeFitter__FitMode_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Unconstrained offset 0
static ::UnityEngine::UI::____UnityEngine__UI__ContentSizeFitter__FitMode const Unconstrained;

/// @brief Field MinSize offset 0
static ::UnityEngine::UI::____UnityEngine__UI__ContentSizeFitter__FitMode const MinSize;

/// @brief Field PreferredSize offset 0
static ::UnityEngine::UI::____UnityEngine__UI__ContentSizeFitter__FitMode const PreferredSize;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
// Type: UnityEngine.UI::ContentSizeFitter
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13153))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13016))
// CS Name: UnityEngine.UI.ContentSizeFitter
class CORDL_TYPE ContentSizeFitter : public ::UnityEngine::EventSystems::UIBehaviour {
public:
// Declarations
using FitMode = ::UnityEngine::UI::____UnityEngine__UI__ContentSizeFitter__FitMode;

/// @brief Convert operator to ::UnityEngine::UI::ILayoutSelfController
constexpr operator  ::UnityEngine::UI::ILayoutSelfController() const noexcept;

/// @brief Convert operator to ::UnityEngine::UI::ILayoutController
constexpr operator  ::UnityEngine::UI::ILayoutController() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~ContentSizeFitter() = default;

// Ctor Parameters [CppParam { name: "", ty: "ContentSizeFitter", modifiers: " const&", def_value: None }]
constexpr ContentSizeFitter(ContentSizeFitter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ContentSizeFitter", modifiers: "&&", def_value: None }]
constexpr ContentSizeFitter(ContentSizeFitter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ContentSizeFitter(void* ptr) noexcept : ::UnityEngine::EventSystems::UIBehaviour(ptr) {
}


  constexpr ContentSizeFitter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ContentSizeFitter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ContentSizeFitter& operator=(ContentSizeFitter&& o) noexcept = default;
  constexpr ContentSizeFitter& operator=(ContentSizeFitter const& o) noexcept = default;
                


// Fields

 ::UnityEngine::UI::____UnityEngine__UI__ContentSizeFitter__FitMode __declspec(property(get=__get_m_HorizontalFit, put=__set_m_HorizontalFit))  m_HorizontalFit;

constexpr void __set_m_HorizontalFit(::UnityEngine::UI::____UnityEngine__UI__ContentSizeFitter__FitMode value) ;

constexpr ::UnityEngine::UI::____UnityEngine__UI__ContentSizeFitter__FitMode __get_m_HorizontalFit() const;

 ::UnityEngine::UI::____UnityEngine__UI__ContentSizeFitter__FitMode __declspec(property(get=__get_m_VerticalFit, put=__set_m_VerticalFit))  m_VerticalFit;

constexpr void __set_m_VerticalFit(::UnityEngine::UI::____UnityEngine__UI__ContentSizeFitter__FitMode value) ;

constexpr ::UnityEngine::UI::____UnityEngine__UI__ContentSizeFitter__FitMode __get_m_VerticalFit() const;

 ::UnityEngine::RectTransform __declspec(property(get=__get_m_Rect, put=__set_m_Rect))  m_Rect;

constexpr void __set_m_Rect(::UnityEngine::RectTransform value) ;

constexpr ::UnityEngine::RectTransform __get_m_Rect() const;

 ::UnityEngine::DrivenRectTransformTracker __declspec(property(get=__get_m_Tracker, put=__set_m_Tracker))  m_Tracker;

constexpr void __set_m_Tracker(::UnityEngine::DrivenRectTransformTracker value) ;

constexpr ::UnityEngine::DrivenRectTransformTracker __get_m_Tracker() const;


// Properties

 ::UnityEngine::UI::____UnityEngine__UI__ContentSizeFitter__FitMode __declspec(property(get=get_horizontalFit, put=set_horizontalFit))  horizontalFit;

 ::UnityEngine::UI::____UnityEngine__UI__ContentSizeFitter__FitMode __declspec(property(get=get_verticalFit, put=set_verticalFit))  verticalFit;

 ::UnityEngine::RectTransform __declspec(property(get=get_rectTransform))  rectTransform;


// Methods

/// @brief Method get_horizontalFit addr 0x2bfb560 size 0x8 virtual false final false
 ::UnityEngine::UI::____UnityEngine__UI__ContentSizeFitter__FitMode get_horizontalFit() ;

/// @brief Method set_horizontalFit addr 0x2bfb568 size 0x74 virtual false final false
 void set_horizontalFit(::UnityEngine::UI::____UnityEngine__UI__ContentSizeFitter__FitMode value) ;

/// @brief Method get_verticalFit addr 0x2bfb660 size 0x8 virtual false final false
 ::UnityEngine::UI::____UnityEngine__UI__ContentSizeFitter__FitMode get_verticalFit() ;

/// @brief Method set_verticalFit addr 0x2bfb668 size 0x74 virtual false final false
 void set_verticalFit(::UnityEngine::UI::____UnityEngine__UI__ContentSizeFitter__FitMode value) ;

/// @brief Method get_rectTransform addr 0x2bfb6dc size 0x94 virtual false final false
 ::UnityEngine::RectTransform get_rectTransform() ;

// Ctor Parameters []
explicit ContentSizeFitter() ;

/// @brief Method .ctor addr 0x2bfb770 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method OnEnable addr 0x2bfb778 size 0x1c virtual true final false
 void OnEnable() ;

/// @brief Method OnDisable addr 0x2bfb794 size 0x7c virtual true final false
 void OnDisable() ;

/// @brief Method OnRectTransformDimensionsChange addr 0x2bfb810 size 0x4 virtual true final false
 void OnRectTransformDimensionsChange() ;

/// @brief Method HandleSelfFittingAlongAxis addr 0x2bfb814 size 0xe4 virtual false final false
 void HandleSelfFittingAlongAxis(int32_t axis) ;

/// @brief Method SetLayoutHorizontal addr 0x2bfb910 size 0x24 virtual true final false
 void SetLayoutHorizontal() ;

/// @brief Method SetLayoutVertical addr 0x2bfb934 size 0x8 virtual true final false
 void SetLayoutVertical() ;

/// @brief Method SetDirty addr 0x2bfb5dc size 0x84 virtual false final false
 void SetDirty() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::____UnityEngine__UI__ContentSizeFitter__FitMode, "UnityEngine.UI", "ContentSizeFitter/FitMode");
NEED_NO_BOX(::UnityEngine::UI::ContentSizeFitter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::ContentSizeFitter, "UnityEngine.UI", "ContentSizeFitter");
