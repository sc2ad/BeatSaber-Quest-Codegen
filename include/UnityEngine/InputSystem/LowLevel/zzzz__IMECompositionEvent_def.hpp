#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine::InputSystem::LowLevel {
struct IMECompositionString;
}
namespace UnityEngine::InputSystem::LowLevel {
class IInputEventTypeInfo;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEvent;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct IMECompositionEvent;
}
// Type: UnityEngine.InputSystem.LowLevel::IMECompositionEvent
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6609))
// CS Name: UnityEngine.InputSystem.LowLevel.IMECompositionEvent
struct CORDL_TYPE IMECompositionEvent : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo
constexpr operator  UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo() const;

// Ctor Parameters [CppParam { name: "baseEvent", ty: "UnityEngine::InputSystem::LowLevel::InputEvent", modifiers: "", def_value: None }, CppParam { name: "compositionString", ty: "UnityEngine::InputSystem::LowLevel::IMECompositionString", modifiers: "", def_value: None }]
constexpr IMECompositionEvent(UnityEngine::InputSystem::LowLevel::InputEvent baseEvent, UnityEngine::InputSystem::LowLevel::IMECompositionString compositionString) noexcept;


                    constexpr IMECompositionEvent(IMECompositionEvent const&) = default;
                    constexpr IMECompositionEvent(IMECompositionEvent&&) = default;
                    constexpr IMECompositionEvent& operator=(IMECompositionEvent const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr IMECompositionEvent& operator=(IMECompositionEvent&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x98};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit IMECompositionEvent(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

/// @brief Field kIMECharBufferSize offset 0
static constexpr int32_t  kIMECharBufferSize{64};

/// @brief Field Type offset 0
static constexpr int32_t  Type{1229800787};

 UnityEngine::InputSystem::LowLevel::InputEvent __declspec(property(get=__get_baseEvent, put=__set_baseEvent))  baseEvent;

constexpr void __set_baseEvent(UnityEngine::InputSystem::LowLevel::InputEvent value) ;

constexpr UnityEngine::InputSystem::LowLevel::InputEvent __get_baseEvent() const;

 UnityEngine::InputSystem::LowLevel::IMECompositionString __declspec(property(get=__get_compositionString, put=__set_compositionString))  compositionString;

constexpr void __set_compositionString(UnityEngine::InputSystem::LowLevel::IMECompositionString value) ;

constexpr UnityEngine::InputSystem::LowLevel::IMECompositionString __get_compositionString() const;


// Properties

 UnityEngine::InputSystem::Utilities::FourCC __declspec(property(get=get_typeStatic))  typeStatic;


// Methods

/// @brief Method get_typeStatic addr 0x29573dc size 0x20 virtual true final true
 UnityEngine::InputSystem::Utilities::FourCC get_typeStatic() ;

/// @brief Method Create addr 0x29573fc size 0xf4 virtual false final false
static UnityEngine::InputSystem::LowLevel::IMECompositionEvent Create(int32_t deviceId, ::StringW compositionString, double_t time) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::LowLevel
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::LowLevel::IMECompositionEvent, "UnityEngine.InputSystem.LowLevel", "IMECompositionEvent");
