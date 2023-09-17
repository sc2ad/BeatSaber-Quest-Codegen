#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventPtr;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEvent;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
namespace UnityEngine::InputSystem::LowLevel {
class IInputEventTypeInfo;
}
namespace UnityEngine::InputSystem {
struct InputActionPhase;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct ActionEvent;
}
namespace UnityEngine::InputSystem::LowLevel {
struct ____UnityEngine__InputSystem__LowLevel__ActionEvent___m_ValueData_e__FixedBuffer;
}
// Type: ::<m_ValueData>e__FixedBuffer
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6601))
// CS Name: UnityEngine.InputSystem.LowLevel.ActionEvent::<m_ValueData>e__FixedBuffer
struct CORDL_TYPE ____UnityEngine__InputSystem__LowLevel__ActionEvent___m_ValueData_e__FixedBuffer : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr ____UnityEngine__InputSystem__LowLevel__ActionEvent___m_ValueData_e__FixedBuffer(uint8_t FixedElementField) noexcept;


                    constexpr ____UnityEngine__InputSystem__LowLevel__ActionEvent___m_ValueData_e__FixedBuffer(____UnityEngine__InputSystem__LowLevel__ActionEvent___m_ValueData_e__FixedBuffer const&) = default;
                    constexpr ____UnityEngine__InputSystem__LowLevel__ActionEvent___m_ValueData_e__FixedBuffer(____UnityEngine__InputSystem__LowLevel__ActionEvent___m_ValueData_e__FixedBuffer&&) = default;
                    constexpr ____UnityEngine__InputSystem__LowLevel__ActionEvent___m_ValueData_e__FixedBuffer& operator=(____UnityEngine__InputSystem__LowLevel__ActionEvent___m_ValueData_e__FixedBuffer const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__InputSystem__LowLevel__ActionEvent___m_ValueData_e__FixedBuffer& operator=(____UnityEngine__InputSystem__LowLevel__ActionEvent___m_ValueData_e__FixedBuffer&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__InputSystem__LowLevel__ActionEvent___m_ValueData_e__FixedBuffer(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 uint8_t __declspec(property(get=__get_FixedElementField, put=__set_FixedElementField))  FixedElementField;

constexpr void __set_FixedElementField(uint8_t value) ;

constexpr uint8_t __get_FixedElementField() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::LowLevel
// Type: UnityEngine.InputSystem.LowLevel::ActionEvent
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6602))
// CS Name: UnityEngine.InputSystem.LowLevel.ActionEvent
struct CORDL_TYPE ActionEvent : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using _m_ValueData_e__FixedBuffer = ::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__ActionEvent___m_ValueData_e__FixedBuffer;

/// @brief Convert operator to ::UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo
constexpr operator  ::UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo() const;

// Ctor Parameters [CppParam { name: "baseEvent", ty: "::UnityEngine::InputSystem::LowLevel::InputEvent", modifiers: "", def_value: None }, CppParam { name: "m_ControlIndex", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "m_BindingIndex", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "m_InteractionIndex", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "m_StateIndex", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "m_Phase", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "m_StartTime", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "m_ValueData", ty: "::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__ActionEvent___m_ValueData_e__FixedBuffer", modifiers: "", def_value: None }]
constexpr ActionEvent(::UnityEngine::InputSystem::LowLevel::InputEvent baseEvent, uint16_t m_ControlIndex, uint16_t m_BindingIndex, uint16_t m_InteractionIndex, uint8_t m_StateIndex, uint8_t m_Phase, double_t m_StartTime, ::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__ActionEvent___m_ValueData_e__FixedBuffer m_ValueData) noexcept;


                    constexpr ActionEvent(ActionEvent const&) = default;
                    constexpr ActionEvent(ActionEvent&&) = default;
                    constexpr ActionEvent& operator=(ActionEvent const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ActionEvent& operator=(ActionEvent&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x28};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ActionEvent(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::UnityEngine::InputSystem::LowLevel::InputEvent __declspec(property(get=__get_baseEvent, put=__set_baseEvent))  baseEvent;

constexpr void __set_baseEvent(::UnityEngine::InputSystem::LowLevel::InputEvent value) ;

constexpr ::UnityEngine::InputSystem::LowLevel::InputEvent __get_baseEvent() const;

 uint16_t __declspec(property(get=__get_m_ControlIndex, put=__set_m_ControlIndex))  m_ControlIndex;

constexpr void __set_m_ControlIndex(uint16_t value) ;

constexpr uint16_t __get_m_ControlIndex() const;

 uint16_t __declspec(property(get=__get_m_BindingIndex, put=__set_m_BindingIndex))  m_BindingIndex;

constexpr void __set_m_BindingIndex(uint16_t value) ;

constexpr uint16_t __get_m_BindingIndex() const;

 uint16_t __declspec(property(get=__get_m_InteractionIndex, put=__set_m_InteractionIndex))  m_InteractionIndex;

constexpr void __set_m_InteractionIndex(uint16_t value) ;

constexpr uint16_t __get_m_InteractionIndex() const;

 uint8_t __declspec(property(get=__get_m_StateIndex, put=__set_m_StateIndex))  m_StateIndex;

constexpr void __set_m_StateIndex(uint8_t value) ;

constexpr uint8_t __get_m_StateIndex() const;

 uint8_t __declspec(property(get=__get_m_Phase, put=__set_m_Phase))  m_Phase;

constexpr void __set_m_Phase(uint8_t value) ;

constexpr uint8_t __get_m_Phase() const;

 double_t __declspec(property(get=__get_m_StartTime, put=__set_m_StartTime))  m_StartTime;

constexpr void __set_m_StartTime(double_t value) ;

constexpr double_t __get_m_StartTime() const;

 ::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__ActionEvent___m_ValueData_e__FixedBuffer __declspec(property(get=__get_m_ValueData, put=__set_m_ValueData))  m_ValueData;

constexpr void __set_m_ValueData(::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__ActionEvent___m_ValueData_e__FixedBuffer value) ;

constexpr ::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__ActionEvent___m_ValueData_e__FixedBuffer __get_m_ValueData() const;


// Properties

static ::UnityEngine::InputSystem::Utilities::FourCC __declspec(property(get=get_Type))  Type;

 double_t __declspec(property(get=get_startTime, put=set_startTime))  startTime;

 ::UnityEngine::InputSystem::InputActionPhase __declspec(property(get=get_phase, put=set_phase))  phase;

 void* __declspec(property(get=get_valueData))  valueData;

 int32_t __declspec(property(get=get_valueSizeInBytes))  valueSizeInBytes;

 int32_t __declspec(property(get=get_stateIndex, put=set_stateIndex))  stateIndex;

 int32_t __declspec(property(get=get_controlIndex, put=set_controlIndex))  controlIndex;

 int32_t __declspec(property(get=get_bindingIndex, put=set_bindingIndex))  bindingIndex;

 int32_t __declspec(property(get=get_interactionIndex, put=set_interactionIndex))  interactionIndex;

 ::UnityEngine::InputSystem::Utilities::FourCC __declspec(property(get=get_typeStatic))  typeStatic;


// Methods

/// @brief Method get_Type addr 0x2956860 size 0x30 virtual false final false
static ::UnityEngine::InputSystem::Utilities::FourCC get_Type() ;

/// @brief Method get_startTime addr 0x2956890 size 0x8 virtual false final false
 double_t get_startTime() ;

/// @brief Method set_startTime addr 0x2956898 size 0x8 virtual false final false
 void set_startTime(double_t value) ;

/// @brief Method get_phase addr 0x29568a0 size 0x8 virtual false final false
 ::UnityEngine::InputSystem::InputActionPhase get_phase() ;

/// @brief Method set_phase addr 0x29568a8 size 0x8 virtual false final false
 void set_phase(::UnityEngine::InputSystem::InputActionPhase value) ;

/// @brief Method get_valueData addr 0x29568b0 size 0x8 virtual false final false
 void* get_valueData() ;

/// @brief Method get_valueSizeInBytes addr 0x29568b8 size 0xc virtual false final false
 int32_t get_valueSizeInBytes() ;

/// @brief Method get_stateIndex addr 0x29568cc size 0x8 virtual false final false
 int32_t get_stateIndex() ;

/// @brief Method set_stateIndex addr 0x29568d4 size 0x64 virtual false final false
 void set_stateIndex(int32_t value) ;

/// @brief Method get_controlIndex addr 0x2956938 size 0x8 virtual false final false
 int32_t get_controlIndex() ;

/// @brief Method set_controlIndex addr 0x2956940 size 0x64 virtual false final false
 void set_controlIndex(int32_t value) ;

/// @brief Method get_bindingIndex addr 0x29569a4 size 0x8 virtual false final false
 int32_t get_bindingIndex() ;

/// @brief Method set_bindingIndex addr 0x29569ac size 0x64 virtual false final false
 void set_bindingIndex(int32_t value) ;

/// @brief Method get_interactionIndex addr 0x2956a10 size 0x14 virtual false final false
 int32_t get_interactionIndex() ;

/// @brief Method set_interactionIndex addr 0x2956a24 size 0x74 virtual false final false
 void set_interactionIndex(int32_t value) ;

/// @brief Method ToEventPtr addr 0x2956a98 size 0x4 virtual false final false
 ::UnityEngine::InputSystem::LowLevel::InputEventPtr ToEventPtr() ;

/// @brief Method get_typeStatic addr 0x2956a9c size 0x30 virtual true final true
 ::UnityEngine::InputSystem::Utilities::FourCC get_typeStatic() ;

/// @brief Method GetEventSizeWithValueSize addr 0x2956acc size 0x8 virtual false final false
static int32_t GetEventSizeWithValueSize(int32_t valueSizeInBytes) ;

/// @brief Method From addr 0x2956ad4 size 0x12c virtual false final false
static void* From(::UnityEngine::InputSystem::LowLevel::InputEventPtr ptr) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::LowLevel
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::ActionEvent, "UnityEngine.InputSystem.LowLevel", "ActionEvent");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__ActionEvent___m_ValueData_e__FixedBuffer, "UnityEngine.InputSystem.LowLevel", "ActionEvent/<m_ValueData>e__FixedBuffer");
