#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine {
struct EventType;
}
// Type: UnityEngine::EventType
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14761))
// CS Name: UnityEngine.EventType
struct CORDL_TYPE EventType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EventType(int32_t value__) noexcept;


                    constexpr EventType(EventType const&) = default;
                    constexpr EventType(EventType&&) = default;
                    constexpr EventType& operator=(EventType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr EventType& operator=(EventType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit EventType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __EventType_Unwrapped : int32_t {
__MouseDown = 0,
__MouseUp = 1,
__MouseMove = 2,
__MouseDrag = 3,
__KeyDown = 4,
__KeyUp = 5,
__ScrollWheel = 6,
__Repaint = 7,
__Layout = 8,
__DragUpdated = 9,
__DragPerform = 10,
__DragExited = 15,
__Ignore = 11,
__Used = 12,
__ValidateCommand = 13,
__ExecuteCommand = 14,
__ContextClick = 16,
__MouseEnterWindow = 20,
__MouseLeaveWindow = 21,
__TouchDown = 30,
__TouchUp = 31,
__TouchMove = 32,
__TouchEnter = 33,
__TouchLeave = 34,
__TouchStationary = 35,
__mouseDown = 0,
__mouseUp = 1,
__mouseMove = 2,
__mouseDrag = 3,
__keyDown = 4,
__keyUp = 5,
__scrollWheel = 6,
__repaint = 7,
__layout = 8,
__dragUpdated = 9,
__dragPerform = 10,
__ignore = 11,
__used = 12,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EventType_Unwrapped () const noexcept {
return std::bit_cast<__EventType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field MouseDown offset 0
static ::UnityEngine::EventType const MouseDown;

/// @brief Field MouseUp offset 0
static ::UnityEngine::EventType const MouseUp;

/// @brief Field MouseMove offset 0
static ::UnityEngine::EventType const MouseMove;

/// @brief Field MouseDrag offset 0
static ::UnityEngine::EventType const MouseDrag;

/// @brief Field KeyDown offset 0
static ::UnityEngine::EventType const KeyDown;

/// @brief Field KeyUp offset 0
static ::UnityEngine::EventType const KeyUp;

/// @brief Field ScrollWheel offset 0
static ::UnityEngine::EventType const ScrollWheel;

/// @brief Field Repaint offset 0
static ::UnityEngine::EventType const Repaint;

/// @brief Field Layout offset 0
static ::UnityEngine::EventType const Layout;

/// @brief Field DragUpdated offset 0
static ::UnityEngine::EventType const DragUpdated;

/// @brief Field DragPerform offset 0
static ::UnityEngine::EventType const DragPerform;

/// @brief Field DragExited offset 0
static ::UnityEngine::EventType const DragExited;

/// @brief Field Ignore offset 0
static ::UnityEngine::EventType const Ignore;

/// @brief Field Used offset 0
static ::UnityEngine::EventType const Used;

/// @brief Field ValidateCommand offset 0
static ::UnityEngine::EventType const ValidateCommand;

/// @brief Field ExecuteCommand offset 0
static ::UnityEngine::EventType const ExecuteCommand;

/// @brief Field ContextClick offset 0
static ::UnityEngine::EventType const ContextClick;

/// @brief Field MouseEnterWindow offset 0
static ::UnityEngine::EventType const MouseEnterWindow;

/// @brief Field MouseLeaveWindow offset 0
static ::UnityEngine::EventType const MouseLeaveWindow;

/// @brief Field TouchDown offset 0
static ::UnityEngine::EventType const TouchDown;

/// @brief Field TouchUp offset 0
static ::UnityEngine::EventType const TouchUp;

/// @brief Field TouchMove offset 0
static ::UnityEngine::EventType const TouchMove;

/// @brief Field TouchEnter offset 0
static ::UnityEngine::EventType const TouchEnter;

/// @brief Field TouchLeave offset 0
static ::UnityEngine::EventType const TouchLeave;

/// @brief Field TouchStationary offset 0
static ::UnityEngine::EventType const TouchStationary;

/// @brief Field mouseDown offset 0
static ::UnityEngine::EventType const mouseDown;

/// @brief Field mouseUp offset 0
static ::UnityEngine::EventType const mouseUp;

/// @brief Field mouseMove offset 0
static ::UnityEngine::EventType const mouseMove;

/// @brief Field mouseDrag offset 0
static ::UnityEngine::EventType const mouseDrag;

/// @brief Field keyDown offset 0
static ::UnityEngine::EventType const keyDown;

/// @brief Field keyUp offset 0
static ::UnityEngine::EventType const keyUp;

/// @brief Field scrollWheel offset 0
static ::UnityEngine::EventType const scrollWheel;

/// @brief Field repaint offset 0
static ::UnityEngine::EventType const repaint;

/// @brief Field layout offset 0
static ::UnityEngine::EventType const layout;

/// @brief Field dragUpdated offset 0
static ::UnityEngine::EventType const dragUpdated;

/// @brief Field dragPerform offset 0
static ::UnityEngine::EventType const dragPerform;

/// @brief Field ignore offset 0
static ::UnityEngine::EventType const ignore;

/// @brief Field used offset 0
static ::UnityEngine::EventType const used;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventType, "UnityEngine", "EventType");
