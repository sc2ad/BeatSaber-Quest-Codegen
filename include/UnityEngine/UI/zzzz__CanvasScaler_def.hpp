#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/EventSystems/zzzz__UIBehaviour_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
class Canvas;
}
// Forward declare root types
namespace UnityEngine::UI {
struct ____UnityEngine__UI__CanvasScaler__ScaleMode;
}
namespace UnityEngine::UI {
struct ____UnityEngine__UI__CanvasScaler__ScreenMatchMode;
}
namespace UnityEngine::UI {
struct ____UnityEngine__UI__CanvasScaler__Unit;
}
namespace UnityEngine::UI {
class CanvasScaler;
}
// Type: ::ScaleMode
namespace UnityEngine::UI {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13011))
// CS Name: UnityEngine.UI.CanvasScaler::ScaleMode
struct CORDL_TYPE ____UnityEngine__UI__CanvasScaler__ScaleMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____UnityEngine__UI__CanvasScaler__ScaleMode(int32_t value__) noexcept;


                    constexpr ____UnityEngine__UI__CanvasScaler__ScaleMode(____UnityEngine__UI__CanvasScaler__ScaleMode const&) = default;
                    constexpr ____UnityEngine__UI__CanvasScaler__ScaleMode(____UnityEngine__UI__CanvasScaler__ScaleMode&&) = default;
                    constexpr ____UnityEngine__UI__CanvasScaler__ScaleMode& operator=(____UnityEngine__UI__CanvasScaler__ScaleMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__UI__CanvasScaler__ScaleMode& operator=(____UnityEngine__UI__CanvasScaler__ScaleMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__UI__CanvasScaler__ScaleMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______UnityEngine__UI__CanvasScaler__ScaleMode_Unwrapped : int32_t {
__ConstantPixelSize = 0,
__ScaleWithScreenSize = 1,
__ConstantPhysicalSize = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______UnityEngine__UI__CanvasScaler__ScaleMode_Unwrapped () const noexcept {
return std::bit_cast<______UnityEngine__UI__CanvasScaler__ScaleMode_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field ConstantPixelSize offset 0
static ::UnityEngine::UI::____UnityEngine__UI__CanvasScaler__ScaleMode const ConstantPixelSize;

/// @brief Field ScaleWithScreenSize offset 0
static ::UnityEngine::UI::____UnityEngine__UI__CanvasScaler__ScaleMode const ScaleWithScreenSize;

/// @brief Field ConstantPhysicalSize offset 0
static ::UnityEngine::UI::____UnityEngine__UI__CanvasScaler__ScaleMode const ConstantPhysicalSize;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
// Type: ::ScreenMatchMode
namespace UnityEngine::UI {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13012))
// CS Name: UnityEngine.UI.CanvasScaler::ScreenMatchMode
struct CORDL_TYPE ____UnityEngine__UI__CanvasScaler__ScreenMatchMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____UnityEngine__UI__CanvasScaler__ScreenMatchMode(int32_t value__) noexcept;


                    constexpr ____UnityEngine__UI__CanvasScaler__ScreenMatchMode(____UnityEngine__UI__CanvasScaler__ScreenMatchMode const&) = default;
                    constexpr ____UnityEngine__UI__CanvasScaler__ScreenMatchMode(____UnityEngine__UI__CanvasScaler__ScreenMatchMode&&) = default;
                    constexpr ____UnityEngine__UI__CanvasScaler__ScreenMatchMode& operator=(____UnityEngine__UI__CanvasScaler__ScreenMatchMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__UI__CanvasScaler__ScreenMatchMode& operator=(____UnityEngine__UI__CanvasScaler__ScreenMatchMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__UI__CanvasScaler__ScreenMatchMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______UnityEngine__UI__CanvasScaler__ScreenMatchMode_Unwrapped : int32_t {
__MatchWidthOrHeight = 0,
__Expand = 1,
__Shrink = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______UnityEngine__UI__CanvasScaler__ScreenMatchMode_Unwrapped () const noexcept {
return std::bit_cast<______UnityEngine__UI__CanvasScaler__ScreenMatchMode_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field MatchWidthOrHeight offset 0
static ::UnityEngine::UI::____UnityEngine__UI__CanvasScaler__ScreenMatchMode const MatchWidthOrHeight;

/// @brief Field Expand offset 0
static ::UnityEngine::UI::____UnityEngine__UI__CanvasScaler__ScreenMatchMode const Expand;

/// @brief Field Shrink offset 0
static ::UnityEngine::UI::____UnityEngine__UI__CanvasScaler__ScreenMatchMode const Shrink;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
// Type: ::Unit
namespace UnityEngine::UI {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13013))
// CS Name: UnityEngine.UI.CanvasScaler::Unit
struct CORDL_TYPE ____UnityEngine__UI__CanvasScaler__Unit : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____UnityEngine__UI__CanvasScaler__Unit(int32_t value__) noexcept;


                    constexpr ____UnityEngine__UI__CanvasScaler__Unit(____UnityEngine__UI__CanvasScaler__Unit const&) = default;
                    constexpr ____UnityEngine__UI__CanvasScaler__Unit(____UnityEngine__UI__CanvasScaler__Unit&&) = default;
                    constexpr ____UnityEngine__UI__CanvasScaler__Unit& operator=(____UnityEngine__UI__CanvasScaler__Unit const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__UI__CanvasScaler__Unit& operator=(____UnityEngine__UI__CanvasScaler__Unit&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__UI__CanvasScaler__Unit(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______UnityEngine__UI__CanvasScaler__Unit_Unwrapped : int32_t {
__Centimeters = 0,
__Millimeters = 1,
__Inches = 2,
__Points = 3,
__Picas = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______UnityEngine__UI__CanvasScaler__Unit_Unwrapped () const noexcept {
return std::bit_cast<______UnityEngine__UI__CanvasScaler__Unit_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Centimeters offset 0
static ::UnityEngine::UI::____UnityEngine__UI__CanvasScaler__Unit const Centimeters;

/// @brief Field Millimeters offset 0
static ::UnityEngine::UI::____UnityEngine__UI__CanvasScaler__Unit const Millimeters;

/// @brief Field Inches offset 0
static ::UnityEngine::UI::____UnityEngine__UI__CanvasScaler__Unit const Inches;

/// @brief Field Points offset 0
static ::UnityEngine::UI::____UnityEngine__UI__CanvasScaler__Unit const Points;

/// @brief Field Picas offset 0
static ::UnityEngine::UI::____UnityEngine__UI__CanvasScaler__Unit const Picas;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
// Type: UnityEngine.UI::CanvasScaler
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13153))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13014))
// CS Name: UnityEngine.UI.CanvasScaler
class CORDL_TYPE CanvasScaler : public ::UnityEngine::EventSystems::UIBehaviour {
public:
// Declarations
using Unit = ::UnityEngine::UI::____UnityEngine__UI__CanvasScaler__Unit;

using ScreenMatchMode = ::UnityEngine::UI::____UnityEngine__UI__CanvasScaler__ScreenMatchMode;

using ScaleMode = ::UnityEngine::UI::____UnityEngine__UI__CanvasScaler__ScaleMode;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~CanvasScaler() = default;

// Ctor Parameters [CppParam { name: "", ty: "CanvasScaler", modifiers: " const&", def_value: None }]
constexpr CanvasScaler(CanvasScaler const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CanvasScaler", modifiers: "&&", def_value: None }]
constexpr CanvasScaler(CanvasScaler&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CanvasScaler(void* ptr) noexcept : ::UnityEngine::EventSystems::UIBehaviour(ptr) {
}


  constexpr CanvasScaler& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CanvasScaler& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CanvasScaler& operator=(CanvasScaler&& o) noexcept = default;
  constexpr CanvasScaler& operator=(CanvasScaler const& o) noexcept = default;
                


// Fields

 ::UnityEngine::UI::____UnityEngine__UI__CanvasScaler__ScaleMode __declspec(property(get=__get_m_UiScaleMode, put=__set_m_UiScaleMode))  m_UiScaleMode;

constexpr void __set_m_UiScaleMode(::UnityEngine::UI::____UnityEngine__UI__CanvasScaler__ScaleMode value) ;

constexpr ::UnityEngine::UI::____UnityEngine__UI__CanvasScaler__ScaleMode __get_m_UiScaleMode() const;

 float_t __declspec(property(get=__get_m_ReferencePixelsPerUnit, put=__set_m_ReferencePixelsPerUnit))  m_ReferencePixelsPerUnit;

constexpr void __set_m_ReferencePixelsPerUnit(float_t value) ;

constexpr float_t __get_m_ReferencePixelsPerUnit() const;

 float_t __declspec(property(get=__get_m_ScaleFactor, put=__set_m_ScaleFactor))  m_ScaleFactor;

constexpr void __set_m_ScaleFactor(float_t value) ;

constexpr float_t __get_m_ScaleFactor() const;

 ::UnityEngine::Vector2 __declspec(property(get=__get_m_ReferenceResolution, put=__set_m_ReferenceResolution))  m_ReferenceResolution;

constexpr void __set_m_ReferenceResolution(::UnityEngine::Vector2 value) ;

constexpr ::UnityEngine::Vector2 __get_m_ReferenceResolution() const;

 ::UnityEngine::UI::____UnityEngine__UI__CanvasScaler__ScreenMatchMode __declspec(property(get=__get_m_ScreenMatchMode, put=__set_m_ScreenMatchMode))  m_ScreenMatchMode;

constexpr void __set_m_ScreenMatchMode(::UnityEngine::UI::____UnityEngine__UI__CanvasScaler__ScreenMatchMode value) ;

constexpr ::UnityEngine::UI::____UnityEngine__UI__CanvasScaler__ScreenMatchMode __get_m_ScreenMatchMode() const;

 float_t __declspec(property(get=__get_m_MatchWidthOrHeight, put=__set_m_MatchWidthOrHeight))  m_MatchWidthOrHeight;

constexpr void __set_m_MatchWidthOrHeight(float_t value) ;

constexpr float_t __get_m_MatchWidthOrHeight() const;

/// @brief Field kLogBase offset 0
static constexpr float_t  kLogBase{2};

 ::UnityEngine::UI::____UnityEngine__UI__CanvasScaler__Unit __declspec(property(get=__get_m_PhysicalUnit, put=__set_m_PhysicalUnit))  m_PhysicalUnit;

constexpr void __set_m_PhysicalUnit(::UnityEngine::UI::____UnityEngine__UI__CanvasScaler__Unit value) ;

constexpr ::UnityEngine::UI::____UnityEngine__UI__CanvasScaler__Unit __get_m_PhysicalUnit() const;

 float_t __declspec(property(get=__get_m_FallbackScreenDPI, put=__set_m_FallbackScreenDPI))  m_FallbackScreenDPI;

constexpr void __set_m_FallbackScreenDPI(float_t value) ;

constexpr float_t __get_m_FallbackScreenDPI() const;

 float_t __declspec(property(get=__get_m_DefaultSpriteDPI, put=__set_m_DefaultSpriteDPI))  m_DefaultSpriteDPI;

constexpr void __set_m_DefaultSpriteDPI(float_t value) ;

constexpr float_t __get_m_DefaultSpriteDPI() const;

 float_t __declspec(property(get=__get_m_DynamicPixelsPerUnit, put=__set_m_DynamicPixelsPerUnit))  m_DynamicPixelsPerUnit;

constexpr void __set_m_DynamicPixelsPerUnit(float_t value) ;

constexpr float_t __get_m_DynamicPixelsPerUnit() const;

 ::UnityEngine::Canvas __declspec(property(get=__get_m_Canvas, put=__set_m_Canvas))  m_Canvas;

constexpr void __set_m_Canvas(::UnityEngine::Canvas value) ;

constexpr ::UnityEngine::Canvas __get_m_Canvas() const;

 float_t __declspec(property(get=__get_m_PrevScaleFactor, put=__set_m_PrevScaleFactor))  m_PrevScaleFactor;

constexpr void __set_m_PrevScaleFactor(float_t value) ;

constexpr float_t __get_m_PrevScaleFactor() const;

 float_t __declspec(property(get=__get_m_PrevReferencePixelsPerUnit, put=__set_m_PrevReferencePixelsPerUnit))  m_PrevReferencePixelsPerUnit;

constexpr void __set_m_PrevReferencePixelsPerUnit(float_t value) ;

constexpr float_t __get_m_PrevReferencePixelsPerUnit() const;

 bool __declspec(property(get=__get_m_PresetInfoIsWorld, put=__set_m_PresetInfoIsWorld))  m_PresetInfoIsWorld;

constexpr void __set_m_PresetInfoIsWorld(bool value) ;

constexpr bool __get_m_PresetInfoIsWorld() const;


// Properties

 ::UnityEngine::UI::____UnityEngine__UI__CanvasScaler__ScaleMode __declspec(property(get=get_uiScaleMode, put=set_uiScaleMode))  uiScaleMode;

 float_t __declspec(property(get=get_referencePixelsPerUnit, put=set_referencePixelsPerUnit))  referencePixelsPerUnit;

 float_t __declspec(property(get=get_scaleFactor, put=set_scaleFactor))  scaleFactor;

 ::UnityEngine::Vector2 __declspec(property(get=get_referenceResolution, put=set_referenceResolution))  referenceResolution;

 ::UnityEngine::UI::____UnityEngine__UI__CanvasScaler__ScreenMatchMode __declspec(property(get=get_screenMatchMode, put=set_screenMatchMode))  screenMatchMode;

 float_t __declspec(property(get=get_matchWidthOrHeight, put=set_matchWidthOrHeight))  matchWidthOrHeight;

 ::UnityEngine::UI::____UnityEngine__UI__CanvasScaler__Unit __declspec(property(get=get_physicalUnit, put=set_physicalUnit))  physicalUnit;

 float_t __declspec(property(get=get_fallbackScreenDPI, put=set_fallbackScreenDPI))  fallbackScreenDPI;

 float_t __declspec(property(get=get_defaultSpriteDPI, put=set_defaultSpriteDPI))  defaultSpriteDPI;

 float_t __declspec(property(get=get_dynamicPixelsPerUnit, put=set_dynamicPixelsPerUnit))  dynamicPixelsPerUnit;


// Methods

/// @brief Method get_uiScaleMode addr 0x2bfae28 size 0x8 virtual false final false
 ::UnityEngine::UI::____UnityEngine__UI__CanvasScaler__ScaleMode get_uiScaleMode() ;

/// @brief Method set_uiScaleMode addr 0x2bfae30 size 0x8 virtual false final false
 void set_uiScaleMode(::UnityEngine::UI::____UnityEngine__UI__CanvasScaler__ScaleMode value) ;

/// @brief Method get_referencePixelsPerUnit addr 0x2bfae38 size 0x8 virtual false final false
 float_t get_referencePixelsPerUnit() ;

/// @brief Method set_referencePixelsPerUnit addr 0x2bfae40 size 0x8 virtual false final false
 void set_referencePixelsPerUnit(float_t value) ;

/// @brief Method get_scaleFactor addr 0x2bfae48 size 0x8 virtual false final false
 float_t get_scaleFactor() ;

/// @brief Method set_scaleFactor addr 0x2bfae50 size 0x14 virtual false final false
 void set_scaleFactor(float_t value) ;

/// @brief Method get_referenceResolution addr 0x2bfae64 size 0x8 virtual false final false
 ::UnityEngine::Vector2 get_referenceResolution() ;

/// @brief Method set_referenceResolution addr 0x2bfae6c size 0x64 virtual false final false
 void set_referenceResolution(::UnityEngine::Vector2 value) ;

/// @brief Method get_screenMatchMode addr 0x2bfaed0 size 0x8 virtual false final false
 ::UnityEngine::UI::____UnityEngine__UI__CanvasScaler__ScreenMatchMode get_screenMatchMode() ;

/// @brief Method set_screenMatchMode addr 0x2bfaed8 size 0x8 virtual false final false
 void set_screenMatchMode(::UnityEngine::UI::____UnityEngine__UI__CanvasScaler__ScreenMatchMode value) ;

/// @brief Method get_matchWidthOrHeight addr 0x2bfaee0 size 0x8 virtual false final false
 float_t get_matchWidthOrHeight() ;

/// @brief Method set_matchWidthOrHeight addr 0x2bfaee8 size 0x8 virtual false final false
 void set_matchWidthOrHeight(float_t value) ;

/// @brief Method get_physicalUnit addr 0x2bfaef0 size 0x8 virtual false final false
 ::UnityEngine::UI::____UnityEngine__UI__CanvasScaler__Unit get_physicalUnit() ;

/// @brief Method set_physicalUnit addr 0x2bfaef8 size 0x8 virtual false final false
 void set_physicalUnit(::UnityEngine::UI::____UnityEngine__UI__CanvasScaler__Unit value) ;

/// @brief Method get_fallbackScreenDPI addr 0x2bfaf00 size 0x8 virtual false final false
 float_t get_fallbackScreenDPI() ;

/// @brief Method set_fallbackScreenDPI addr 0x2bfaf08 size 0x8 virtual false final false
 void set_fallbackScreenDPI(float_t value) ;

/// @brief Method get_defaultSpriteDPI addr 0x2bfaf10 size 0x8 virtual false final false
 float_t get_defaultSpriteDPI() ;

/// @brief Method set_defaultSpriteDPI addr 0x2bfaf18 size 0x10 virtual false final false
 void set_defaultSpriteDPI(float_t value) ;

/// @brief Method get_dynamicPixelsPerUnit addr 0x2bfaf28 size 0x8 virtual false final false
 float_t get_dynamicPixelsPerUnit() ;

/// @brief Method set_dynamicPixelsPerUnit addr 0x2bfaf30 size 0x8 virtual false final false
 void set_dynamicPixelsPerUnit(float_t value) ;

// Ctor Parameters []
explicit CanvasScaler() ;

/// @brief Method .ctor addr 0x2bfaf38 size 0x48 virtual false final false
 void _ctor() ;

/// @brief Method OnEnable addr 0x2bfaf80 size 0xcc virtual true final false
 void OnEnable() ;

/// @brief Method Canvas_preWillRenderCanvases addr 0x2bfb04c size 0x10 virtual false final false
 void Canvas_preWillRenderCanvases() ;

/// @brief Method OnDisable addr 0x2bfb05c size 0xa8 virtual true final false
 void OnDisable() ;

/// @brief Method Handle addr 0x2bfb184 size 0xfc virtual true final false
 void Handle() ;

/// @brief Method HandleWorldCanvas addr 0x2bfb280 size 0x20 virtual true final false
 void HandleWorldCanvas() ;

/// @brief Method HandleConstantPixelSize addr 0x2bfb2a0 size 0x20 virtual true final false
 void HandleConstantPixelSize() ;

/// @brief Method HandleScaleWithScreenSize addr 0x2bfb2c0 size 0x234 virtual true final false
 void HandleScaleWithScreenSize() ;

/// @brief Method HandleConstantPhysicalSize addr 0x2bfb4f4 size 0x6c virtual true final false
 void HandleConstantPhysicalSize() ;

/// @brief Method SetScaleFactor addr 0x2bfb104 size 0x40 virtual false final false
 void SetScaleFactor(float_t scaleFactor) ;

/// @brief Method SetReferencePixelsPerUnit addr 0x2bfb144 size 0x40 virtual false final false
 void SetReferencePixelsPerUnit(float_t referencePixelsPerUnit) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::____UnityEngine__UI__CanvasScaler__ScaleMode, "UnityEngine.UI", "CanvasScaler/ScaleMode");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::____UnityEngine__UI__CanvasScaler__ScreenMatchMode, "UnityEngine.UI", "CanvasScaler/ScreenMatchMode");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::____UnityEngine__UI__CanvasScaler__Unit, "UnityEngine.UI", "CanvasScaler/Unit");
NEED_NO_BOX(::UnityEngine::UI::CanvasScaler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::CanvasScaler, "UnityEngine.UI", "CanvasScaler");
