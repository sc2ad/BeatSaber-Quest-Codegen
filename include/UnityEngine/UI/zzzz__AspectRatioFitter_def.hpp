#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/EventSystems/zzzz__UIBehaviour_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine::UI {
class ILayoutController;
}
namespace UnityEngine {
struct DrivenRectTransformTracker;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine::UI {
struct UnityEngine__UI__AspectRatioFitter__AspectMode;
}
namespace UnityEngine::UI {
class ILayoutSelfController;
}
// Forward declare root types
namespace UnityEngine::UI {
struct UnityEngine__UI__AspectRatioFitter__AspectMode;
}
namespace UnityEngine::UI {
class AspectRatioFitter;
}
// Type: ::AspectMode
namespace UnityEngine::UI {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13009))
// CS Name: UnityEngine.UI.AspectRatioFitter::AspectMode
struct CORDL_TYPE UnityEngine__UI__AspectRatioFitter__AspectMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__UI__AspectRatioFitter__AspectMode(int32_t value__) noexcept;


                    constexpr UnityEngine__UI__AspectRatioFitter__AspectMode(UnityEngine__UI__AspectRatioFitter__AspectMode const&) = default;
                    constexpr UnityEngine__UI__AspectRatioFitter__AspectMode(UnityEngine__UI__AspectRatioFitter__AspectMode&&) = default;
                    constexpr UnityEngine__UI__AspectRatioFitter__AspectMode& operator=(UnityEngine__UI__AspectRatioFitter__AspectMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UI__AspectRatioFitter__AspectMode& operator=(UnityEngine__UI__AspectRatioFitter__AspectMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UI__AspectRatioFitter__AspectMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__UI__AspectRatioFitter__AspectMode_Unwrapped : int32_t {
__None = 0,
__WidthControlsHeight = 1,
__HeightControlsWidth = 2,
__FitInParent = 3,
__EnvelopeParent = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__UI__AspectRatioFitter__AspectMode_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__UI__AspectRatioFitter__AspectMode_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static UnityEngine::UI::UnityEngine__UI__AspectRatioFitter__AspectMode const None;

/// @brief Field WidthControlsHeight offset 0
static UnityEngine::UI::UnityEngine__UI__AspectRatioFitter__AspectMode const WidthControlsHeight;

/// @brief Field HeightControlsWidth offset 0
static UnityEngine::UI::UnityEngine__UI__AspectRatioFitter__AspectMode const HeightControlsWidth;

/// @brief Field FitInParent offset 0
static UnityEngine::UI::UnityEngine__UI__AspectRatioFitter__AspectMode const FitInParent;

/// @brief Field EnvelopeParent offset 0
static UnityEngine::UI::UnityEngine__UI__AspectRatioFitter__AspectMode const EnvelopeParent;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
// Type: UnityEngine.UI::AspectRatioFitter
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13153))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13010))
// CS Name: UnityEngine.UI.AspectRatioFitter
class CORDL_TYPE AspectRatioFitter : public UnityEngine::EventSystems::UIBehaviour {
public:
// Declarations
using AspectMode = UnityEngine::UI::UnityEngine__UI__AspectRatioFitter__AspectMode;

/// @brief Convert operator to UnityEngine::UI::ILayoutSelfController
constexpr operator  UnityEngine::UI::ILayoutSelfController() const noexcept;

/// @brief Convert operator to UnityEngine::UI::ILayoutController
constexpr operator  UnityEngine::UI::ILayoutController() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~AspectRatioFitter() = default;

// Ctor Parameters [CppParam { name: "", ty: "AspectRatioFitter", modifiers: " const&", def_value: None }]
constexpr AspectRatioFitter(AspectRatioFitter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AspectRatioFitter", modifiers: "&&", def_value: None }]
constexpr AspectRatioFitter(AspectRatioFitter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AspectRatioFitter(void* ptr) noexcept : UnityEngine::EventSystems::UIBehaviour(ptr) {
}


  constexpr AspectRatioFitter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AspectRatioFitter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AspectRatioFitter& operator=(AspectRatioFitter&& o) noexcept = default;
  constexpr AspectRatioFitter& operator=(AspectRatioFitter const& o) noexcept = default;
                


// Fields

 UnityEngine::UI::UnityEngine__UI__AspectRatioFitter__AspectMode __declspec(property(get=__get_m_AspectMode, put=__set_m_AspectMode))  m_AspectMode;

constexpr void __set_m_AspectMode(UnityEngine::UI::UnityEngine__UI__AspectRatioFitter__AspectMode value) ;

constexpr UnityEngine::UI::UnityEngine__UI__AspectRatioFitter__AspectMode __get_m_AspectMode() const;

 float_t __declspec(property(get=__get_m_AspectRatio, put=__set_m_AspectRatio))  m_AspectRatio;

constexpr void __set_m_AspectRatio(float_t value) ;

constexpr float_t __get_m_AspectRatio() const;

 UnityEngine::RectTransform __declspec(property(get=__get_m_Rect, put=__set_m_Rect))  m_Rect;

constexpr void __set_m_Rect(UnityEngine::RectTransform value) ;

constexpr UnityEngine::RectTransform __get_m_Rect() const;

 bool __declspec(property(get=__get_m_DelayedSetDirty, put=__set_m_DelayedSetDirty))  m_DelayedSetDirty;

constexpr void __set_m_DelayedSetDirty(bool value) ;

constexpr bool __get_m_DelayedSetDirty() const;

 bool __declspec(property(get=__get_m_DoesParentExist, put=__set_m_DoesParentExist))  m_DoesParentExist;

constexpr void __set_m_DoesParentExist(bool value) ;

constexpr bool __get_m_DoesParentExist() const;

 UnityEngine::DrivenRectTransformTracker __declspec(property(get=__get_m_Tracker, put=__set_m_Tracker))  m_Tracker;

constexpr void __set_m_Tracker(UnityEngine::DrivenRectTransformTracker value) ;

constexpr UnityEngine::DrivenRectTransformTracker __get_m_Tracker() const;


// Properties

 UnityEngine::UI::UnityEngine__UI__AspectRatioFitter__AspectMode __declspec(property(get=get_aspectMode, put=set_aspectMode))  aspectMode;

 float_t __declspec(property(get=get_aspectRatio, put=set_aspectRatio))  aspectRatio;

 UnityEngine::RectTransform __declspec(property(get=get_rectTransform))  rectTransform;


// Methods

/// @brief Method get_aspectMode addr 0x2bfa078 size 0x8 virtual false final false
 UnityEngine::UI::UnityEngine__UI__AspectRatioFitter__AspectMode get_aspectMode() ;

/// @brief Method set_aspectMode addr 0x2bfa080 size 0x74 virtual false final false
 void set_aspectMode(UnityEngine::UI::UnityEngine__UI__AspectRatioFitter__AspectMode value) ;

/// @brief Method get_aspectRatio addr 0x2bfa0f8 size 0x8 virtual false final false
 float_t get_aspectRatio() ;

/// @brief Method set_aspectRatio addr 0x2bfa100 size 0x74 virtual false final false
 void set_aspectRatio(float_t value) ;

/// @brief Method get_rectTransform addr 0x2bfa174 size 0x94 virtual false final false
 UnityEngine::RectTransform get_rectTransform() ;

static UnityEngine::UI::AspectRatioFitter New_ctor() ;

/// @brief Method .ctor addr 0x2bfa208 size 0x10 virtual false final false
 void _ctor() ;

/// @brief Method OnEnable addr 0x2bfa218 size 0x98 virtual true final false
 void OnEnable() ;

/// @brief Method Start addr 0x2bfa2b0 size 0x50 virtual true final false
 void Start() ;

/// @brief Method OnDisable addr 0x2bfa3f4 size 0x7c virtual true final false
 void OnDisable() ;

/// @brief Method OnTransformParentChanged addr 0x2bfa85c size 0x98 virtual true final false
 void OnTransformParentChanged() ;

/// @brief Method Update addr 0x2bfa8f4 size 0x14 virtual true final false
 void Update() ;

/// @brief Method OnRectTransformDimensionsChange addr 0x2bfa908 size 0x4 virtual true final false
 void OnRectTransformDimensionsChange() ;

/// @brief Method UpdateRect addr 0x2bfa90c size 0x304 virtual false final false
 void UpdateRect() ;

/// @brief Method GetSizeDeltaToProduceSize addr 0x2bfad20 size 0xf8 virtual false final false
 float_t GetSizeDeltaToProduceSize(float_t size, int32_t axis) ;

/// @brief Method GetParentSize addr 0x2bfac10 size 0x110 virtual false final false
 UnityEngine::Vector2 GetParentSize() ;

/// @brief Method SetLayoutHorizontal addr 0x2bfae18 size 0x4 virtual true final false
 void SetLayoutHorizontal() ;

/// @brief Method SetLayoutVertical addr 0x2bfae1c size 0x4 virtual true final false
 void SetLayoutVertical() ;

/// @brief Method SetDirty addr 0x2bfa0f4 size 0x4 virtual false final false
 void SetDirty() ;

/// @brief Method IsComponentValidOnObject addr 0x2bfa300 size 0xcc virtual false final false
 bool IsComponentValidOnObject() ;

/// @brief Method IsAspectModeValid addr 0x2bfa3cc size 0x28 virtual false final false
 bool IsAspectModeValid() ;

/// @brief Method DoesParentExists addr 0x2bfae20 size 0x8 virtual false final false
 bool DoesParentExists() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::UnityEngine__UI__AspectRatioFitter__AspectMode, "UnityEngine.UI", "AspectRatioFitter/AspectMode");
NEED_NO_BOX(UnityEngine::UI::AspectRatioFitter);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::AspectRatioFitter, "UnityEngine.UI", "AspectRatioFitter");
