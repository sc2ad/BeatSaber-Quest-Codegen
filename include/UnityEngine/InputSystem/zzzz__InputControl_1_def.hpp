#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace System {
struct Int32Enum;
}
namespace UnityEngine::InputSystem {
template<typename TValue>
class InputProcessor_1;
}
namespace UnityEngine::InputSystem::Utilities {
template<typename TValue>
struct InlinedArray_1;
}
namespace System {
class Type;
}
namespace UnityEngine::InputSystem::LowLevel {
struct TouchState;
}
namespace UnityEngine::InputSystem::XR {
struct Bone;
}
namespace UnityEngine::InputSystem::XR {
struct Eyes;
}
namespace UnityEngine::InputSystem::XR {
struct PoseState;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine::XR::OpenXR::Input {
struct Haptic;
}
namespace UnityEngine::XR::OpenXR::Input {
struct Pose;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
template<typename TValue>
class InputControl_1;
}
namespace UnityEngine::InputSystem {
template<>
class InputControl_1<System::Int32Enum>;
}
namespace UnityEngine::InputSystem {
template<>
class InputControl_1<UnityEngine::InputSystem::LowLevel::TouchState>;
}
namespace UnityEngine::InputSystem {
template<>
class InputControl_1<UnityEngine::InputSystem::XR::Bone>;
}
namespace UnityEngine::InputSystem {
template<>
class InputControl_1<UnityEngine::InputSystem::XR::Eyes>;
}
namespace UnityEngine::InputSystem {
template<>
class InputControl_1<UnityEngine::InputSystem::XR::PoseState>;
}
namespace UnityEngine::InputSystem {
template<>
class InputControl_1<UnityEngine::Quaternion>;
}
namespace UnityEngine::InputSystem {
template<>
class InputControl_1<UnityEngine::Vector2>;
}
namespace UnityEngine::InputSystem {
template<>
class InputControl_1<UnityEngine::Vector3>;
}
namespace UnityEngine::InputSystem {
template<>
class InputControl_1<UnityEngine::XR::OpenXR::Input::Haptic>;
}
namespace UnityEngine::InputSystem {
template<>
class InputControl_1<UnityEngine::XR::OpenXR::Input::Pose>;
}
namespace UnityEngine::InputSystem {
template<>
class InputControl_1<bool>;
}
namespace UnityEngine::InputSystem {
template<>
class InputControl_1<double_t>;
}
namespace UnityEngine::InputSystem {
template<>
class InputControl_1<float_t>;
}
namespace UnityEngine::InputSystem {
template<>
class InputControl_1<int32_t>;
}
namespace UnityEngine::InputSystem {
template<>
class InputControl_1<uint32_t>;
}
// Type: UnityEngine.InputSystem::InputControl`1
// Type: UnityEngine.InputSystem::InputControl`1
namespace UnityEngine::InputSystem {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6298)), TypeDefinitionIndex(TypeDefinitionIndex(6299))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6299), inst: 92 })
// CS Name: UnityEngine.InputSystem.InputControl`1
class CORDL_TYPE InputControl_1<int32_t> : public UnityEngine::InputSystem::InputControl {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xc0};

virtual ~InputControl_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "InputControl_1", modifiers: " const&", def_value: None }]
constexpr InputControl_1(InputControl_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InputControl_1", modifiers: "&&", def_value: None }]
constexpr InputControl_1(InputControl_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InputControl_1(void* ptr) noexcept : UnityEngine::InputSystem::InputControl(ptr) {
}


  constexpr InputControl_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InputControl_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InputControl_1& operator=(InputControl_1&& o) noexcept = default;
  constexpr InputControl_1& operator=(InputControl_1 const& o) noexcept = default;
                


// Fields

 UnityEngine::InputSystem::Utilities::InlinedArray_1<UnityEngine::InputSystem::InputProcessor_1<int32_t>> __declspec(property(get=__get_m_ProcessorStack, put=__set_m_ProcessorStack))  m_ProcessorStack;

constexpr void __set_m_ProcessorStack(UnityEngine::InputSystem::Utilities::InlinedArray_1<UnityEngine::InputSystem::InputProcessor_1<int32_t>> value) ;

constexpr UnityEngine::InputSystem::Utilities::InlinedArray_1<UnityEngine::InputSystem::InputProcessor_1<int32_t>> __get_m_ProcessorStack() const;


// Properties

 System::Type __declspec(property(get=get_valueType))  valueType;

 int32_t __declspec(property(get=get_valueSizeInBytes))  valueSizeInBytes;

 ::ArrayW<UnityEngine::InputSystem::InputProcessor_1<int32_t>> __declspec(property(get=get_processors))  processors;


// Methods

/// @brief Method get_valueType addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Type get_valueType() ;

/// @brief Method get_valueSizeInBytes addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_valueSizeInBytes() ;

/// @brief Method ReadValue addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t ReadValue() ;

/// @brief Method ReadValueFromPreviousFrame addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t ReadValueFromPreviousFrame() ;

/// @brief Method ReadDefaultValue addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t ReadDefaultValue() ;

/// @brief Method ReadValueFromState addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t ReadValueFromState(void* statePtr) ;

/// @brief Method ReadUnprocessedValue addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t ReadUnprocessedValue() ;

/// @brief Method ReadUnprocessedValueFromState addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t ReadUnprocessedValueFromState(void* statePtr) ;

/// @brief Method ReadValueFromStateAsObject addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType ReadValueFromStateAsObject(void* statePtr) ;

/// @brief Method ReadValueFromStateIntoBuffer addr 0x0 size 0xffffffffffffffff virtual true final false
 void ReadValueFromStateIntoBuffer(void* statePtr, void* bufferPtr, int32_t bufferSize) ;

/// @brief Method WriteValueFromBufferIntoState addr 0x0 size 0xffffffffffffffff virtual true final false
 void WriteValueFromBufferIntoState(void* bufferPtr, int32_t bufferSize, void* statePtr) ;

/// @brief Method WriteValueFromObjectIntoState addr 0x0 size 0xffffffffffffffff virtual true final false
 void WriteValueFromObjectIntoState(::bs_hook::Il2CppWrapperType value, void* statePtr) ;

/// @brief Method WriteValueIntoState addr 0x0 size 0xffffffffffffffff virtual true final false
 void WriteValueIntoState(int32_t value, void* statePtr) ;

/// @brief Method ReadValueFromBufferAsObject addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType ReadValueFromBufferAsObject(void* buffer, int32_t bufferSize) ;

/// @brief Method CompareValue addr 0x0 size 0xffffffffffffffff virtual true final false
 bool CompareValue(void* firstStatePtr, void* secondStatePtr) ;

/// @brief Method ProcessValue addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t ProcessValue(int32_t value) ;

/// @brief Method TryGetProcessor addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TProcessor>
 TProcessor TryGetProcessor() ;

/// @brief Method AddProcessor addr 0x0 size 0xffffffffffffffff virtual true final false
 void AddProcessor(::bs_hook::Il2CppWrapperType processor) ;

/// @brief Method get_processors addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<UnityEngine::InputSystem::InputProcessor_1<int32_t>> get_processors() ;

// Ctor Parameters []
explicit InputControl_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: UnityEngine.InputSystem::InputControl`1
namespace UnityEngine::InputSystem {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6298)), TypeDefinitionIndex(TypeDefinitionIndex(6299))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6299), inst: 99 })
// CS Name: UnityEngine.InputSystem.InputControl`1
class CORDL_TYPE InputControl_1<bool> : public UnityEngine::InputSystem::InputControl {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xc0};

virtual ~InputControl_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "InputControl_1", modifiers: " const&", def_value: None }]
constexpr InputControl_1(InputControl_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InputControl_1", modifiers: "&&", def_value: None }]
constexpr InputControl_1(InputControl_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InputControl_1(void* ptr) noexcept : UnityEngine::InputSystem::InputControl(ptr) {
}


  constexpr InputControl_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InputControl_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InputControl_1& operator=(InputControl_1&& o) noexcept = default;
  constexpr InputControl_1& operator=(InputControl_1 const& o) noexcept = default;
                


// Fields

 UnityEngine::InputSystem::Utilities::InlinedArray_1<UnityEngine::InputSystem::InputProcessor_1<bool>> __declspec(property(get=__get_m_ProcessorStack, put=__set_m_ProcessorStack))  m_ProcessorStack;

constexpr void __set_m_ProcessorStack(UnityEngine::InputSystem::Utilities::InlinedArray_1<UnityEngine::InputSystem::InputProcessor_1<bool>> value) ;

constexpr UnityEngine::InputSystem::Utilities::InlinedArray_1<UnityEngine::InputSystem::InputProcessor_1<bool>> __get_m_ProcessorStack() const;


// Properties

 System::Type __declspec(property(get=get_valueType))  valueType;

 int32_t __declspec(property(get=get_valueSizeInBytes))  valueSizeInBytes;

 ::ArrayW<UnityEngine::InputSystem::InputProcessor_1<bool>> __declspec(property(get=get_processors))  processors;


// Methods

/// @brief Method get_valueType addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Type get_valueType() ;

/// @brief Method get_valueSizeInBytes addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_valueSizeInBytes() ;

/// @brief Method ReadValue addr 0x0 size 0xffffffffffffffff virtual false final false
 bool ReadValue() ;

/// @brief Method ReadValueFromPreviousFrame addr 0x0 size 0xffffffffffffffff virtual false final false
 bool ReadValueFromPreviousFrame() ;

/// @brief Method ReadDefaultValue addr 0x0 size 0xffffffffffffffff virtual false final false
 bool ReadDefaultValue() ;

/// @brief Method ReadValueFromState addr 0x0 size 0xffffffffffffffff virtual false final false
 bool ReadValueFromState(void* statePtr) ;

/// @brief Method ReadUnprocessedValue addr 0x0 size 0xffffffffffffffff virtual false final false
 bool ReadUnprocessedValue() ;

/// @brief Method ReadUnprocessedValueFromState addr 0x0 size 0xffffffffffffffff virtual true final false
 bool ReadUnprocessedValueFromState(void* statePtr) ;

/// @brief Method ReadValueFromStateAsObject addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType ReadValueFromStateAsObject(void* statePtr) ;

/// @brief Method ReadValueFromStateIntoBuffer addr 0x0 size 0xffffffffffffffff virtual true final false
 void ReadValueFromStateIntoBuffer(void* statePtr, void* bufferPtr, int32_t bufferSize) ;

/// @brief Method WriteValueFromBufferIntoState addr 0x0 size 0xffffffffffffffff virtual true final false
 void WriteValueFromBufferIntoState(void* bufferPtr, int32_t bufferSize, void* statePtr) ;

/// @brief Method WriteValueFromObjectIntoState addr 0x0 size 0xffffffffffffffff virtual true final false
 void WriteValueFromObjectIntoState(::bs_hook::Il2CppWrapperType value, void* statePtr) ;

/// @brief Method WriteValueIntoState addr 0x0 size 0xffffffffffffffff virtual true final false
 void WriteValueIntoState(bool value, void* statePtr) ;

/// @brief Method ReadValueFromBufferAsObject addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType ReadValueFromBufferAsObject(void* buffer, int32_t bufferSize) ;

/// @brief Method CompareValue addr 0x0 size 0xffffffffffffffff virtual true final false
 bool CompareValue(void* firstStatePtr, void* secondStatePtr) ;

/// @brief Method ProcessValue addr 0x0 size 0xffffffffffffffff virtual false final false
 bool ProcessValue(bool value) ;

/// @brief Method TryGetProcessor addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TProcessor>
 TProcessor TryGetProcessor() ;

/// @brief Method AddProcessor addr 0x0 size 0xffffffffffffffff virtual true final false
 void AddProcessor(::bs_hook::Il2CppWrapperType processor) ;

/// @brief Method get_processors addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<UnityEngine::InputSystem::InputProcessor_1<bool>> get_processors() ;

// Ctor Parameters []
explicit InputControl_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: UnityEngine.InputSystem::InputControl`1
namespace UnityEngine::InputSystem {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6299)), TypeDefinitionIndex(TypeDefinitionIndex(6298))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6299), inst: 374 })
// CS Name: UnityEngine.InputSystem.InputControl`1
class CORDL_TYPE InputControl_1<float_t> : public UnityEngine::InputSystem::InputControl {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xc0};

virtual ~InputControl_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "InputControl_1", modifiers: " const&", def_value: None }]
constexpr InputControl_1(InputControl_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InputControl_1", modifiers: "&&", def_value: None }]
constexpr InputControl_1(InputControl_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InputControl_1(void* ptr) noexcept : UnityEngine::InputSystem::InputControl(ptr) {
}


  constexpr InputControl_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InputControl_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InputControl_1& operator=(InputControl_1&& o) noexcept = default;
  constexpr InputControl_1& operator=(InputControl_1 const& o) noexcept = default;
                


// Fields

 UnityEngine::InputSystem::Utilities::InlinedArray_1<UnityEngine::InputSystem::InputProcessor_1<float_t>> __declspec(property(get=__get_m_ProcessorStack, put=__set_m_ProcessorStack))  m_ProcessorStack;

constexpr void __set_m_ProcessorStack(UnityEngine::InputSystem::Utilities::InlinedArray_1<UnityEngine::InputSystem::InputProcessor_1<float_t>> value) ;

constexpr UnityEngine::InputSystem::Utilities::InlinedArray_1<UnityEngine::InputSystem::InputProcessor_1<float_t>> __get_m_ProcessorStack() const;


// Properties

 System::Type __declspec(property(get=get_valueType))  valueType;

 int32_t __declspec(property(get=get_valueSizeInBytes))  valueSizeInBytes;

 ::ArrayW<UnityEngine::InputSystem::InputProcessor_1<float_t>> __declspec(property(get=get_processors))  processors;


// Methods

/// @brief Method get_valueType addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Type get_valueType() ;

/// @brief Method get_valueSizeInBytes addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_valueSizeInBytes() ;

/// @brief Method ReadValue addr 0x0 size 0xffffffffffffffff virtual false final false
 float_t ReadValue() ;

/// @brief Method ReadValueFromPreviousFrame addr 0x0 size 0xffffffffffffffff virtual false final false
 float_t ReadValueFromPreviousFrame() ;

/// @brief Method ReadDefaultValue addr 0x0 size 0xffffffffffffffff virtual false final false
 float_t ReadDefaultValue() ;

/// @brief Method ReadValueFromState addr 0x0 size 0xffffffffffffffff virtual false final false
 float_t ReadValueFromState(void* statePtr) ;

/// @brief Method ReadUnprocessedValue addr 0x0 size 0xffffffffffffffff virtual false final false
 float_t ReadUnprocessedValue() ;

/// @brief Method ReadUnprocessedValueFromState addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t ReadUnprocessedValueFromState(void* statePtr) ;

/// @brief Method ReadValueFromStateAsObject addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType ReadValueFromStateAsObject(void* statePtr) ;

/// @brief Method ReadValueFromStateIntoBuffer addr 0x0 size 0xffffffffffffffff virtual true final false
 void ReadValueFromStateIntoBuffer(void* statePtr, void* bufferPtr, int32_t bufferSize) ;

/// @brief Method WriteValueFromBufferIntoState addr 0x0 size 0xffffffffffffffff virtual true final false
 void WriteValueFromBufferIntoState(void* bufferPtr, int32_t bufferSize, void* statePtr) ;

/// @brief Method WriteValueFromObjectIntoState addr 0x0 size 0xffffffffffffffff virtual true final false
 void WriteValueFromObjectIntoState(::bs_hook::Il2CppWrapperType value, void* statePtr) ;

/// @brief Method WriteValueIntoState addr 0x0 size 0xffffffffffffffff virtual true final false
 void WriteValueIntoState(float_t value, void* statePtr) ;

/// @brief Method ReadValueFromBufferAsObject addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType ReadValueFromBufferAsObject(void* buffer, int32_t bufferSize) ;

/// @brief Method CompareValue addr 0x0 size 0xffffffffffffffff virtual true final false
 bool CompareValue(void* firstStatePtr, void* secondStatePtr) ;

/// @brief Method ProcessValue addr 0x0 size 0xffffffffffffffff virtual false final false
 float_t ProcessValue(float_t value) ;

/// @brief Method TryGetProcessor addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TProcessor>
 TProcessor TryGetProcessor() ;

/// @brief Method AddProcessor addr 0x0 size 0xffffffffffffffff virtual true final false
 void AddProcessor(::bs_hook::Il2CppWrapperType processor) ;

/// @brief Method get_processors addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<UnityEngine::InputSystem::InputProcessor_1<float_t>> get_processors() ;

// Ctor Parameters []
explicit InputControl_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: UnityEngine.InputSystem::InputControl`1
namespace UnityEngine::InputSystem {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6299)), TypeDefinitionIndex(TypeDefinitionIndex(6298))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6299), inst: 393 })
// CS Name: UnityEngine.InputSystem.InputControl`1
class CORDL_TYPE InputControl_1<UnityEngine::Vector2> : public UnityEngine::InputSystem::InputControl {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xc0};

virtual ~InputControl_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "InputControl_1", modifiers: " const&", def_value: None }]
constexpr InputControl_1(InputControl_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InputControl_1", modifiers: "&&", def_value: None }]
constexpr InputControl_1(InputControl_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InputControl_1(void* ptr) noexcept : UnityEngine::InputSystem::InputControl(ptr) {
}


  constexpr InputControl_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InputControl_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InputControl_1& operator=(InputControl_1&& o) noexcept = default;
  constexpr InputControl_1& operator=(InputControl_1 const& o) noexcept = default;
                


// Fields

 UnityEngine::InputSystem::Utilities::InlinedArray_1<UnityEngine::InputSystem::InputProcessor_1<UnityEngine::Vector2>> __declspec(property(get=__get_m_ProcessorStack, put=__set_m_ProcessorStack))  m_ProcessorStack;

constexpr void __set_m_ProcessorStack(UnityEngine::InputSystem::Utilities::InlinedArray_1<UnityEngine::InputSystem::InputProcessor_1<UnityEngine::Vector2>> value) ;

constexpr UnityEngine::InputSystem::Utilities::InlinedArray_1<UnityEngine::InputSystem::InputProcessor_1<UnityEngine::Vector2>> __get_m_ProcessorStack() const;


// Properties

 System::Type __declspec(property(get=get_valueType))  valueType;

 int32_t __declspec(property(get=get_valueSizeInBytes))  valueSizeInBytes;

 ::ArrayW<UnityEngine::InputSystem::InputProcessor_1<UnityEngine::Vector2>> __declspec(property(get=get_processors))  processors;


// Methods

/// @brief Method get_valueType addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Type get_valueType() ;

/// @brief Method get_valueSizeInBytes addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_valueSizeInBytes() ;

/// @brief Method ReadValue addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::Vector2 ReadValue() ;

/// @brief Method ReadValueFromPreviousFrame addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::Vector2 ReadValueFromPreviousFrame() ;

/// @brief Method ReadDefaultValue addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::Vector2 ReadDefaultValue() ;

/// @brief Method ReadValueFromState addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::Vector2 ReadValueFromState(void* statePtr) ;

/// @brief Method ReadUnprocessedValue addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::Vector2 ReadUnprocessedValue() ;

/// @brief Method ReadUnprocessedValueFromState addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::Vector2 ReadUnprocessedValueFromState(void* statePtr) ;

/// @brief Method ReadValueFromStateAsObject addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType ReadValueFromStateAsObject(void* statePtr) ;

/// @brief Method ReadValueFromStateIntoBuffer addr 0x0 size 0xffffffffffffffff virtual true final false
 void ReadValueFromStateIntoBuffer(void* statePtr, void* bufferPtr, int32_t bufferSize) ;

/// @brief Method WriteValueFromBufferIntoState addr 0x0 size 0xffffffffffffffff virtual true final false
 void WriteValueFromBufferIntoState(void* bufferPtr, int32_t bufferSize, void* statePtr) ;

/// @brief Method WriteValueFromObjectIntoState addr 0x0 size 0xffffffffffffffff virtual true final false
 void WriteValueFromObjectIntoState(::bs_hook::Il2CppWrapperType value, void* statePtr) ;

/// @brief Method WriteValueIntoState addr 0x0 size 0xffffffffffffffff virtual true final false
 void WriteValueIntoState(UnityEngine::Vector2 value, void* statePtr) ;

/// @brief Method ReadValueFromBufferAsObject addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType ReadValueFromBufferAsObject(void* buffer, int32_t bufferSize) ;

/// @brief Method CompareValue addr 0x0 size 0xffffffffffffffff virtual true final false
 bool CompareValue(void* firstStatePtr, void* secondStatePtr) ;

/// @brief Method ProcessValue addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::Vector2 ProcessValue(UnityEngine::Vector2 value) ;

/// @brief Method TryGetProcessor addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TProcessor>
 TProcessor TryGetProcessor() ;

/// @brief Method AddProcessor addr 0x0 size 0xffffffffffffffff virtual true final false
 void AddProcessor(::bs_hook::Il2CppWrapperType processor) ;

/// @brief Method get_processors addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<UnityEngine::InputSystem::InputProcessor_1<UnityEngine::Vector2>> get_processors() ;

// Ctor Parameters []
explicit InputControl_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: UnityEngine.InputSystem::InputControl`1
namespace UnityEngine::InputSystem {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6299)), TypeDefinitionIndex(TypeDefinitionIndex(6298))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6299), inst: 394 })
// CS Name: UnityEngine.InputSystem.InputControl`1
class CORDL_TYPE InputControl_1<UnityEngine::Vector3> : public UnityEngine::InputSystem::InputControl {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xc0};

virtual ~InputControl_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "InputControl_1", modifiers: " const&", def_value: None }]
constexpr InputControl_1(InputControl_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InputControl_1", modifiers: "&&", def_value: None }]
constexpr InputControl_1(InputControl_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InputControl_1(void* ptr) noexcept : UnityEngine::InputSystem::InputControl(ptr) {
}


  constexpr InputControl_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InputControl_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InputControl_1& operator=(InputControl_1&& o) noexcept = default;
  constexpr InputControl_1& operator=(InputControl_1 const& o) noexcept = default;
                


// Fields

 UnityEngine::InputSystem::Utilities::InlinedArray_1<UnityEngine::InputSystem::InputProcessor_1<UnityEngine::Vector3>> __declspec(property(get=__get_m_ProcessorStack, put=__set_m_ProcessorStack))  m_ProcessorStack;

constexpr void __set_m_ProcessorStack(UnityEngine::InputSystem::Utilities::InlinedArray_1<UnityEngine::InputSystem::InputProcessor_1<UnityEngine::Vector3>> value) ;

constexpr UnityEngine::InputSystem::Utilities::InlinedArray_1<UnityEngine::InputSystem::InputProcessor_1<UnityEngine::Vector3>> __get_m_ProcessorStack() const;


// Properties

 System::Type __declspec(property(get=get_valueType))  valueType;

 int32_t __declspec(property(get=get_valueSizeInBytes))  valueSizeInBytes;

 ::ArrayW<UnityEngine::InputSystem::InputProcessor_1<UnityEngine::Vector3>> __declspec(property(get=get_processors))  processors;


// Methods

/// @brief Method get_valueType addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Type get_valueType() ;

/// @brief Method get_valueSizeInBytes addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_valueSizeInBytes() ;

/// @brief Method ReadValue addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::Vector3 ReadValue() ;

/// @brief Method ReadValueFromPreviousFrame addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::Vector3 ReadValueFromPreviousFrame() ;

/// @brief Method ReadDefaultValue addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::Vector3 ReadDefaultValue() ;

/// @brief Method ReadValueFromState addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::Vector3 ReadValueFromState(void* statePtr) ;

/// @brief Method ReadUnprocessedValue addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::Vector3 ReadUnprocessedValue() ;

/// @brief Method ReadUnprocessedValueFromState addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::Vector3 ReadUnprocessedValueFromState(void* statePtr) ;

/// @brief Method ReadValueFromStateAsObject addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType ReadValueFromStateAsObject(void* statePtr) ;

/// @brief Method ReadValueFromStateIntoBuffer addr 0x0 size 0xffffffffffffffff virtual true final false
 void ReadValueFromStateIntoBuffer(void* statePtr, void* bufferPtr, int32_t bufferSize) ;

/// @brief Method WriteValueFromBufferIntoState addr 0x0 size 0xffffffffffffffff virtual true final false
 void WriteValueFromBufferIntoState(void* bufferPtr, int32_t bufferSize, void* statePtr) ;

/// @brief Method WriteValueFromObjectIntoState addr 0x0 size 0xffffffffffffffff virtual true final false
 void WriteValueFromObjectIntoState(::bs_hook::Il2CppWrapperType value, void* statePtr) ;

/// @brief Method WriteValueIntoState addr 0x0 size 0xffffffffffffffff virtual true final false
 void WriteValueIntoState(UnityEngine::Vector3 value, void* statePtr) ;

/// @brief Method ReadValueFromBufferAsObject addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType ReadValueFromBufferAsObject(void* buffer, int32_t bufferSize) ;

/// @brief Method CompareValue addr 0x0 size 0xffffffffffffffff virtual true final false
 bool CompareValue(void* firstStatePtr, void* secondStatePtr) ;

/// @brief Method ProcessValue addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::Vector3 ProcessValue(UnityEngine::Vector3 value) ;

/// @brief Method TryGetProcessor addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TProcessor>
 TProcessor TryGetProcessor() ;

/// @brief Method AddProcessor addr 0x0 size 0xffffffffffffffff virtual true final false
 void AddProcessor(::bs_hook::Il2CppWrapperType processor) ;

/// @brief Method get_processors addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<UnityEngine::InputSystem::InputProcessor_1<UnityEngine::Vector3>> get_processors() ;

// Ctor Parameters []
explicit InputControl_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: UnityEngine.InputSystem::InputControl`1
namespace UnityEngine::InputSystem {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6298)), TypeDefinitionIndex(TypeDefinitionIndex(6299))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6299), inst: 729 })
// CS Name: UnityEngine.InputSystem.InputControl`1
class CORDL_TYPE InputControl_1<uint32_t> : public UnityEngine::InputSystem::InputControl {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xc0};

virtual ~InputControl_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "InputControl_1", modifiers: " const&", def_value: None }]
constexpr InputControl_1(InputControl_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InputControl_1", modifiers: "&&", def_value: None }]
constexpr InputControl_1(InputControl_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InputControl_1(void* ptr) noexcept : UnityEngine::InputSystem::InputControl(ptr) {
}


  constexpr InputControl_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InputControl_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InputControl_1& operator=(InputControl_1&& o) noexcept = default;
  constexpr InputControl_1& operator=(InputControl_1 const& o) noexcept = default;
                


// Fields

 UnityEngine::InputSystem::Utilities::InlinedArray_1<UnityEngine::InputSystem::InputProcessor_1<uint32_t>> __declspec(property(get=__get_m_ProcessorStack, put=__set_m_ProcessorStack))  m_ProcessorStack;

constexpr void __set_m_ProcessorStack(UnityEngine::InputSystem::Utilities::InlinedArray_1<UnityEngine::InputSystem::InputProcessor_1<uint32_t>> value) ;

constexpr UnityEngine::InputSystem::Utilities::InlinedArray_1<UnityEngine::InputSystem::InputProcessor_1<uint32_t>> __get_m_ProcessorStack() const;


// Properties

 System::Type __declspec(property(get=get_valueType))  valueType;

 int32_t __declspec(property(get=get_valueSizeInBytes))  valueSizeInBytes;

 ::ArrayW<UnityEngine::InputSystem::InputProcessor_1<uint32_t>> __declspec(property(get=get_processors))  processors;


// Methods

/// @brief Method get_valueType addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Type get_valueType() ;

/// @brief Method get_valueSizeInBytes addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_valueSizeInBytes() ;

/// @brief Method ReadValue addr 0x0 size 0xffffffffffffffff virtual false final false
 uint32_t ReadValue() ;

/// @brief Method ReadValueFromPreviousFrame addr 0x0 size 0xffffffffffffffff virtual false final false
 uint32_t ReadValueFromPreviousFrame() ;

/// @brief Method ReadDefaultValue addr 0x0 size 0xffffffffffffffff virtual false final false
 uint32_t ReadDefaultValue() ;

/// @brief Method ReadValueFromState addr 0x0 size 0xffffffffffffffff virtual false final false
 uint32_t ReadValueFromState(void* statePtr) ;

/// @brief Method ReadUnprocessedValue addr 0x0 size 0xffffffffffffffff virtual false final false
 uint32_t ReadUnprocessedValue() ;

/// @brief Method ReadUnprocessedValueFromState addr 0x0 size 0xffffffffffffffff virtual true final false
 uint32_t ReadUnprocessedValueFromState(void* statePtr) ;

/// @brief Method ReadValueFromStateAsObject addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType ReadValueFromStateAsObject(void* statePtr) ;

/// @brief Method ReadValueFromStateIntoBuffer addr 0x0 size 0xffffffffffffffff virtual true final false
 void ReadValueFromStateIntoBuffer(void* statePtr, void* bufferPtr, int32_t bufferSize) ;

/// @brief Method WriteValueFromBufferIntoState addr 0x0 size 0xffffffffffffffff virtual true final false
 void WriteValueFromBufferIntoState(void* bufferPtr, int32_t bufferSize, void* statePtr) ;

/// @brief Method WriteValueFromObjectIntoState addr 0x0 size 0xffffffffffffffff virtual true final false
 void WriteValueFromObjectIntoState(::bs_hook::Il2CppWrapperType value, void* statePtr) ;

/// @brief Method WriteValueIntoState addr 0x0 size 0xffffffffffffffff virtual true final false
 void WriteValueIntoState(uint32_t value, void* statePtr) ;

/// @brief Method ReadValueFromBufferAsObject addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType ReadValueFromBufferAsObject(void* buffer, int32_t bufferSize) ;

/// @brief Method CompareValue addr 0x0 size 0xffffffffffffffff virtual true final false
 bool CompareValue(void* firstStatePtr, void* secondStatePtr) ;

/// @brief Method ProcessValue addr 0x0 size 0xffffffffffffffff virtual false final false
 uint32_t ProcessValue(uint32_t value) ;

/// @brief Method TryGetProcessor addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TProcessor>
 TProcessor TryGetProcessor() ;

/// @brief Method AddProcessor addr 0x0 size 0xffffffffffffffff virtual true final false
 void AddProcessor(::bs_hook::Il2CppWrapperType processor) ;

/// @brief Method get_processors addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<UnityEngine::InputSystem::InputProcessor_1<uint32_t>> get_processors() ;

// Ctor Parameters []
explicit InputControl_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: UnityEngine.InputSystem::InputControl`1
namespace UnityEngine::InputSystem {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6299)), TypeDefinitionIndex(TypeDefinitionIndex(6298))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6299), inst: 2598 })
// CS Name: UnityEngine.InputSystem.InputControl`1
class CORDL_TYPE InputControl_1<double_t> : public UnityEngine::InputSystem::InputControl {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xc0};

virtual ~InputControl_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "InputControl_1", modifiers: " const&", def_value: None }]
constexpr InputControl_1(InputControl_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InputControl_1", modifiers: "&&", def_value: None }]
constexpr InputControl_1(InputControl_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InputControl_1(void* ptr) noexcept : UnityEngine::InputSystem::InputControl(ptr) {
}


  constexpr InputControl_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InputControl_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InputControl_1& operator=(InputControl_1&& o) noexcept = default;
  constexpr InputControl_1& operator=(InputControl_1 const& o) noexcept = default;
                


// Fields

 UnityEngine::InputSystem::Utilities::InlinedArray_1<UnityEngine::InputSystem::InputProcessor_1<double_t>> __declspec(property(get=__get_m_ProcessorStack, put=__set_m_ProcessorStack))  m_ProcessorStack;

constexpr void __set_m_ProcessorStack(UnityEngine::InputSystem::Utilities::InlinedArray_1<UnityEngine::InputSystem::InputProcessor_1<double_t>> value) ;

constexpr UnityEngine::InputSystem::Utilities::InlinedArray_1<UnityEngine::InputSystem::InputProcessor_1<double_t>> __get_m_ProcessorStack() const;


// Properties

 System::Type __declspec(property(get=get_valueType))  valueType;

 int32_t __declspec(property(get=get_valueSizeInBytes))  valueSizeInBytes;

 ::ArrayW<UnityEngine::InputSystem::InputProcessor_1<double_t>> __declspec(property(get=get_processors))  processors;


// Methods

/// @brief Method get_valueType addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Type get_valueType() ;

/// @brief Method get_valueSizeInBytes addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_valueSizeInBytes() ;

/// @brief Method ReadValue addr 0x0 size 0xffffffffffffffff virtual false final false
 double_t ReadValue() ;

/// @brief Method ReadValueFromPreviousFrame addr 0x0 size 0xffffffffffffffff virtual false final false
 double_t ReadValueFromPreviousFrame() ;

/// @brief Method ReadDefaultValue addr 0x0 size 0xffffffffffffffff virtual false final false
 double_t ReadDefaultValue() ;

/// @brief Method ReadValueFromState addr 0x0 size 0xffffffffffffffff virtual false final false
 double_t ReadValueFromState(void* statePtr) ;

/// @brief Method ReadUnprocessedValue addr 0x0 size 0xffffffffffffffff virtual false final false
 double_t ReadUnprocessedValue() ;

/// @brief Method ReadUnprocessedValueFromState addr 0x0 size 0xffffffffffffffff virtual true final false
 double_t ReadUnprocessedValueFromState(void* statePtr) ;

/// @brief Method ReadValueFromStateAsObject addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType ReadValueFromStateAsObject(void* statePtr) ;

/// @brief Method ReadValueFromStateIntoBuffer addr 0x0 size 0xffffffffffffffff virtual true final false
 void ReadValueFromStateIntoBuffer(void* statePtr, void* bufferPtr, int32_t bufferSize) ;

/// @brief Method WriteValueFromBufferIntoState addr 0x0 size 0xffffffffffffffff virtual true final false
 void WriteValueFromBufferIntoState(void* bufferPtr, int32_t bufferSize, void* statePtr) ;

/// @brief Method WriteValueFromObjectIntoState addr 0x0 size 0xffffffffffffffff virtual true final false
 void WriteValueFromObjectIntoState(::bs_hook::Il2CppWrapperType value, void* statePtr) ;

/// @brief Method WriteValueIntoState addr 0x0 size 0xffffffffffffffff virtual true final false
 void WriteValueIntoState(double_t value, void* statePtr) ;

/// @brief Method ReadValueFromBufferAsObject addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType ReadValueFromBufferAsObject(void* buffer, int32_t bufferSize) ;

/// @brief Method CompareValue addr 0x0 size 0xffffffffffffffff virtual true final false
 bool CompareValue(void* firstStatePtr, void* secondStatePtr) ;

/// @brief Method ProcessValue addr 0x0 size 0xffffffffffffffff virtual false final false
 double_t ProcessValue(double_t value) ;

/// @brief Method TryGetProcessor addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TProcessor>
 TProcessor TryGetProcessor() ;

/// @brief Method AddProcessor addr 0x0 size 0xffffffffffffffff virtual true final false
 void AddProcessor(::bs_hook::Il2CppWrapperType processor) ;

/// @brief Method get_processors addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<UnityEngine::InputSystem::InputProcessor_1<double_t>> get_processors() ;

// Ctor Parameters []
explicit InputControl_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: UnityEngine.InputSystem::InputControl`1
namespace UnityEngine::InputSystem {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6299)), TypeDefinitionIndex(TypeDefinitionIndex(6298))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6299), inst: 3222 })
// CS Name: UnityEngine.InputSystem.InputControl`1
class CORDL_TYPE InputControl_1<UnityEngine::Quaternion> : public UnityEngine::InputSystem::InputControl {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xc0};

virtual ~InputControl_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "InputControl_1", modifiers: " const&", def_value: None }]
constexpr InputControl_1(InputControl_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InputControl_1", modifiers: "&&", def_value: None }]
constexpr InputControl_1(InputControl_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InputControl_1(void* ptr) noexcept : UnityEngine::InputSystem::InputControl(ptr) {
}


  constexpr InputControl_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InputControl_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InputControl_1& operator=(InputControl_1&& o) noexcept = default;
  constexpr InputControl_1& operator=(InputControl_1 const& o) noexcept = default;
                


// Fields

 UnityEngine::InputSystem::Utilities::InlinedArray_1<UnityEngine::InputSystem::InputProcessor_1<UnityEngine::Quaternion>> __declspec(property(get=__get_m_ProcessorStack, put=__set_m_ProcessorStack))  m_ProcessorStack;

constexpr void __set_m_ProcessorStack(UnityEngine::InputSystem::Utilities::InlinedArray_1<UnityEngine::InputSystem::InputProcessor_1<UnityEngine::Quaternion>> value) ;

constexpr UnityEngine::InputSystem::Utilities::InlinedArray_1<UnityEngine::InputSystem::InputProcessor_1<UnityEngine::Quaternion>> __get_m_ProcessorStack() const;


// Properties

 System::Type __declspec(property(get=get_valueType))  valueType;

 int32_t __declspec(property(get=get_valueSizeInBytes))  valueSizeInBytes;

 ::ArrayW<UnityEngine::InputSystem::InputProcessor_1<UnityEngine::Quaternion>> __declspec(property(get=get_processors))  processors;


// Methods

/// @brief Method get_valueType addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Type get_valueType() ;

/// @brief Method get_valueSizeInBytes addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_valueSizeInBytes() ;

/// @brief Method ReadValue addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::Quaternion ReadValue() ;

/// @brief Method ReadValueFromPreviousFrame addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::Quaternion ReadValueFromPreviousFrame() ;

/// @brief Method ReadDefaultValue addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::Quaternion ReadDefaultValue() ;

/// @brief Method ReadValueFromState addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::Quaternion ReadValueFromState(void* statePtr) ;

/// @brief Method ReadUnprocessedValue addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::Quaternion ReadUnprocessedValue() ;

/// @brief Method ReadUnprocessedValueFromState addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::Quaternion ReadUnprocessedValueFromState(void* statePtr) ;

/// @brief Method ReadValueFromStateAsObject addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType ReadValueFromStateAsObject(void* statePtr) ;

/// @brief Method ReadValueFromStateIntoBuffer addr 0x0 size 0xffffffffffffffff virtual true final false
 void ReadValueFromStateIntoBuffer(void* statePtr, void* bufferPtr, int32_t bufferSize) ;

/// @brief Method WriteValueFromBufferIntoState addr 0x0 size 0xffffffffffffffff virtual true final false
 void WriteValueFromBufferIntoState(void* bufferPtr, int32_t bufferSize, void* statePtr) ;

/// @brief Method WriteValueFromObjectIntoState addr 0x0 size 0xffffffffffffffff virtual true final false
 void WriteValueFromObjectIntoState(::bs_hook::Il2CppWrapperType value, void* statePtr) ;

/// @brief Method WriteValueIntoState addr 0x0 size 0xffffffffffffffff virtual true final false
 void WriteValueIntoState(UnityEngine::Quaternion value, void* statePtr) ;

/// @brief Method ReadValueFromBufferAsObject addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType ReadValueFromBufferAsObject(void* buffer, int32_t bufferSize) ;

/// @brief Method CompareValue addr 0x0 size 0xffffffffffffffff virtual true final false
 bool CompareValue(void* firstStatePtr, void* secondStatePtr) ;

/// @brief Method ProcessValue addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::Quaternion ProcessValue(UnityEngine::Quaternion value) ;

/// @brief Method TryGetProcessor addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TProcessor>
 TProcessor TryGetProcessor() ;

/// @brief Method AddProcessor addr 0x0 size 0xffffffffffffffff virtual true final false
 void AddProcessor(::bs_hook::Il2CppWrapperType processor) ;

/// @brief Method get_processors addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<UnityEngine::InputSystem::InputProcessor_1<UnityEngine::Quaternion>> get_processors() ;

// Ctor Parameters []
explicit InputControl_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: UnityEngine.InputSystem::InputControl`1
namespace UnityEngine::InputSystem {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6299)), TypeDefinitionIndex(TypeDefinitionIndex(6298))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6299), inst: 3753 })
// CS Name: UnityEngine.InputSystem.InputControl`1
class CORDL_TYPE InputControl_1<UnityEngine::InputSystem::XR::Bone> : public UnityEngine::InputSystem::InputControl {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xc0};

virtual ~InputControl_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "InputControl_1", modifiers: " const&", def_value: None }]
constexpr InputControl_1(InputControl_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InputControl_1", modifiers: "&&", def_value: None }]
constexpr InputControl_1(InputControl_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InputControl_1(void* ptr) noexcept : UnityEngine::InputSystem::InputControl(ptr) {
}


  constexpr InputControl_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InputControl_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InputControl_1& operator=(InputControl_1&& o) noexcept = default;
  constexpr InputControl_1& operator=(InputControl_1 const& o) noexcept = default;
                


// Fields

 UnityEngine::InputSystem::Utilities::InlinedArray_1<UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::XR::Bone>> __declspec(property(get=__get_m_ProcessorStack, put=__set_m_ProcessorStack))  m_ProcessorStack;

constexpr void __set_m_ProcessorStack(UnityEngine::InputSystem::Utilities::InlinedArray_1<UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::XR::Bone>> value) ;

constexpr UnityEngine::InputSystem::Utilities::InlinedArray_1<UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::XR::Bone>> __get_m_ProcessorStack() const;


// Properties

 System::Type __declspec(property(get=get_valueType))  valueType;

 int32_t __declspec(property(get=get_valueSizeInBytes))  valueSizeInBytes;

 ::ArrayW<UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::XR::Bone>> __declspec(property(get=get_processors))  processors;


// Methods

/// @brief Method get_valueType addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Type get_valueType() ;

/// @brief Method get_valueSizeInBytes addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_valueSizeInBytes() ;

/// @brief Method ReadValue addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::InputSystem::XR::Bone ReadValue() ;

/// @brief Method ReadValueFromPreviousFrame addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::InputSystem::XR::Bone ReadValueFromPreviousFrame() ;

/// @brief Method ReadDefaultValue addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::InputSystem::XR::Bone ReadDefaultValue() ;

/// @brief Method ReadValueFromState addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::InputSystem::XR::Bone ReadValueFromState(void* statePtr) ;

/// @brief Method ReadUnprocessedValue addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::InputSystem::XR::Bone ReadUnprocessedValue() ;

/// @brief Method ReadUnprocessedValueFromState addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::InputSystem::XR::Bone ReadUnprocessedValueFromState(void* statePtr) ;

/// @brief Method ReadValueFromStateAsObject addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType ReadValueFromStateAsObject(void* statePtr) ;

/// @brief Method ReadValueFromStateIntoBuffer addr 0x0 size 0xffffffffffffffff virtual true final false
 void ReadValueFromStateIntoBuffer(void* statePtr, void* bufferPtr, int32_t bufferSize) ;

/// @brief Method WriteValueFromBufferIntoState addr 0x0 size 0xffffffffffffffff virtual true final false
 void WriteValueFromBufferIntoState(void* bufferPtr, int32_t bufferSize, void* statePtr) ;

/// @brief Method WriteValueFromObjectIntoState addr 0x0 size 0xffffffffffffffff virtual true final false
 void WriteValueFromObjectIntoState(::bs_hook::Il2CppWrapperType value, void* statePtr) ;

/// @brief Method WriteValueIntoState addr 0x0 size 0xffffffffffffffff virtual true final false
 void WriteValueIntoState(UnityEngine::InputSystem::XR::Bone value, void* statePtr) ;

/// @brief Method ReadValueFromBufferAsObject addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType ReadValueFromBufferAsObject(void* buffer, int32_t bufferSize) ;

/// @brief Method CompareValue addr 0x0 size 0xffffffffffffffff virtual true final false
 bool CompareValue(void* firstStatePtr, void* secondStatePtr) ;

/// @brief Method ProcessValue addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::InputSystem::XR::Bone ProcessValue(UnityEngine::InputSystem::XR::Bone value) ;

/// @brief Method TryGetProcessor addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TProcessor>
 TProcessor TryGetProcessor() ;

/// @brief Method AddProcessor addr 0x0 size 0xffffffffffffffff virtual true final false
 void AddProcessor(::bs_hook::Il2CppWrapperType processor) ;

/// @brief Method get_processors addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::XR::Bone>> get_processors() ;

// Ctor Parameters []
explicit InputControl_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: UnityEngine.InputSystem::InputControl`1
namespace UnityEngine::InputSystem {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6298)), TypeDefinitionIndex(TypeDefinitionIndex(6299))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6299), inst: 3754 })
// CS Name: UnityEngine.InputSystem.InputControl`1
class CORDL_TYPE InputControl_1<UnityEngine::InputSystem::XR::Eyes> : public UnityEngine::InputSystem::InputControl {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xc0};

virtual ~InputControl_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "InputControl_1", modifiers: " const&", def_value: None }]
constexpr InputControl_1(InputControl_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InputControl_1", modifiers: "&&", def_value: None }]
constexpr InputControl_1(InputControl_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InputControl_1(void* ptr) noexcept : UnityEngine::InputSystem::InputControl(ptr) {
}


  constexpr InputControl_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InputControl_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InputControl_1& operator=(InputControl_1&& o) noexcept = default;
  constexpr InputControl_1& operator=(InputControl_1 const& o) noexcept = default;
                


// Fields

 UnityEngine::InputSystem::Utilities::InlinedArray_1<UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::XR::Eyes>> __declspec(property(get=__get_m_ProcessorStack, put=__set_m_ProcessorStack))  m_ProcessorStack;

constexpr void __set_m_ProcessorStack(UnityEngine::InputSystem::Utilities::InlinedArray_1<UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::XR::Eyes>> value) ;

constexpr UnityEngine::InputSystem::Utilities::InlinedArray_1<UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::XR::Eyes>> __get_m_ProcessorStack() const;


// Properties

 System::Type __declspec(property(get=get_valueType))  valueType;

 int32_t __declspec(property(get=get_valueSizeInBytes))  valueSizeInBytes;

 ::ArrayW<UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::XR::Eyes>> __declspec(property(get=get_processors))  processors;


// Methods

/// @brief Method get_valueType addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Type get_valueType() ;

/// @brief Method get_valueSizeInBytes addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_valueSizeInBytes() ;

/// @brief Method ReadValue addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::InputSystem::XR::Eyes ReadValue() ;

/// @brief Method ReadValueFromPreviousFrame addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::InputSystem::XR::Eyes ReadValueFromPreviousFrame() ;

/// @brief Method ReadDefaultValue addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::InputSystem::XR::Eyes ReadDefaultValue() ;

/// @brief Method ReadValueFromState addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::InputSystem::XR::Eyes ReadValueFromState(void* statePtr) ;

/// @brief Method ReadUnprocessedValue addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::InputSystem::XR::Eyes ReadUnprocessedValue() ;

/// @brief Method ReadUnprocessedValueFromState addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::InputSystem::XR::Eyes ReadUnprocessedValueFromState(void* statePtr) ;

/// @brief Method ReadValueFromStateAsObject addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType ReadValueFromStateAsObject(void* statePtr) ;

/// @brief Method ReadValueFromStateIntoBuffer addr 0x0 size 0xffffffffffffffff virtual true final false
 void ReadValueFromStateIntoBuffer(void* statePtr, void* bufferPtr, int32_t bufferSize) ;

/// @brief Method WriteValueFromBufferIntoState addr 0x0 size 0xffffffffffffffff virtual true final false
 void WriteValueFromBufferIntoState(void* bufferPtr, int32_t bufferSize, void* statePtr) ;

/// @brief Method WriteValueFromObjectIntoState addr 0x0 size 0xffffffffffffffff virtual true final false
 void WriteValueFromObjectIntoState(::bs_hook::Il2CppWrapperType value, void* statePtr) ;

/// @brief Method WriteValueIntoState addr 0x0 size 0xffffffffffffffff virtual true final false
 void WriteValueIntoState(UnityEngine::InputSystem::XR::Eyes value, void* statePtr) ;

/// @brief Method ReadValueFromBufferAsObject addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType ReadValueFromBufferAsObject(void* buffer, int32_t bufferSize) ;

/// @brief Method CompareValue addr 0x0 size 0xffffffffffffffff virtual true final false
 bool CompareValue(void* firstStatePtr, void* secondStatePtr) ;

/// @brief Method ProcessValue addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::InputSystem::XR::Eyes ProcessValue(UnityEngine::InputSystem::XR::Eyes value) ;

/// @brief Method TryGetProcessor addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TProcessor>
 TProcessor TryGetProcessor() ;

/// @brief Method AddProcessor addr 0x0 size 0xffffffffffffffff virtual true final false
 void AddProcessor(::bs_hook::Il2CppWrapperType processor) ;

/// @brief Method get_processors addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::XR::Eyes>> get_processors() ;

// Ctor Parameters []
explicit InputControl_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: UnityEngine.InputSystem::InputControl`1
namespace UnityEngine::InputSystem {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6299)), TypeDefinitionIndex(TypeDefinitionIndex(6298))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6299), inst: 3755 })
// CS Name: UnityEngine.InputSystem.InputControl`1
class CORDL_TYPE InputControl_1<UnityEngine::XR::OpenXR::Input::Haptic> : public UnityEngine::InputSystem::InputControl {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xc0};

virtual ~InputControl_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "InputControl_1", modifiers: " const&", def_value: None }]
constexpr InputControl_1(InputControl_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InputControl_1", modifiers: "&&", def_value: None }]
constexpr InputControl_1(InputControl_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InputControl_1(void* ptr) noexcept : UnityEngine::InputSystem::InputControl(ptr) {
}


  constexpr InputControl_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InputControl_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InputControl_1& operator=(InputControl_1&& o) noexcept = default;
  constexpr InputControl_1& operator=(InputControl_1 const& o) noexcept = default;
                


// Fields

 UnityEngine::InputSystem::Utilities::InlinedArray_1<UnityEngine::InputSystem::InputProcessor_1<UnityEngine::XR::OpenXR::Input::Haptic>> __declspec(property(get=__get_m_ProcessorStack, put=__set_m_ProcessorStack))  m_ProcessorStack;

constexpr void __set_m_ProcessorStack(UnityEngine::InputSystem::Utilities::InlinedArray_1<UnityEngine::InputSystem::InputProcessor_1<UnityEngine::XR::OpenXR::Input::Haptic>> value) ;

constexpr UnityEngine::InputSystem::Utilities::InlinedArray_1<UnityEngine::InputSystem::InputProcessor_1<UnityEngine::XR::OpenXR::Input::Haptic>> __get_m_ProcessorStack() const;


// Properties

 System::Type __declspec(property(get=get_valueType))  valueType;

 int32_t __declspec(property(get=get_valueSizeInBytes))  valueSizeInBytes;

 ::ArrayW<UnityEngine::InputSystem::InputProcessor_1<UnityEngine::XR::OpenXR::Input::Haptic>> __declspec(property(get=get_processors))  processors;


// Methods

/// @brief Method get_valueType addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Type get_valueType() ;

/// @brief Method get_valueSizeInBytes addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_valueSizeInBytes() ;

/// @brief Method ReadValue addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::XR::OpenXR::Input::Haptic ReadValue() ;

/// @brief Method ReadValueFromPreviousFrame addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::XR::OpenXR::Input::Haptic ReadValueFromPreviousFrame() ;

/// @brief Method ReadDefaultValue addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::XR::OpenXR::Input::Haptic ReadDefaultValue() ;

/// @brief Method ReadValueFromState addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::XR::OpenXR::Input::Haptic ReadValueFromState(void* statePtr) ;

/// @brief Method ReadUnprocessedValue addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::XR::OpenXR::Input::Haptic ReadUnprocessedValue() ;

/// @brief Method ReadUnprocessedValueFromState addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::XR::OpenXR::Input::Haptic ReadUnprocessedValueFromState(void* statePtr) ;

/// @brief Method ReadValueFromStateAsObject addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType ReadValueFromStateAsObject(void* statePtr) ;

/// @brief Method ReadValueFromStateIntoBuffer addr 0x0 size 0xffffffffffffffff virtual true final false
 void ReadValueFromStateIntoBuffer(void* statePtr, void* bufferPtr, int32_t bufferSize) ;

/// @brief Method WriteValueFromBufferIntoState addr 0x0 size 0xffffffffffffffff virtual true final false
 void WriteValueFromBufferIntoState(void* bufferPtr, int32_t bufferSize, void* statePtr) ;

/// @brief Method WriteValueFromObjectIntoState addr 0x0 size 0xffffffffffffffff virtual true final false
 void WriteValueFromObjectIntoState(::bs_hook::Il2CppWrapperType value, void* statePtr) ;

/// @brief Method WriteValueIntoState addr 0x0 size 0xffffffffffffffff virtual true final false
 void WriteValueIntoState(UnityEngine::XR::OpenXR::Input::Haptic value, void* statePtr) ;

/// @brief Method ReadValueFromBufferAsObject addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType ReadValueFromBufferAsObject(void* buffer, int32_t bufferSize) ;

/// @brief Method CompareValue addr 0x0 size 0xffffffffffffffff virtual true final false
 bool CompareValue(void* firstStatePtr, void* secondStatePtr) ;

/// @brief Method ProcessValue addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::XR::OpenXR::Input::Haptic ProcessValue(UnityEngine::XR::OpenXR::Input::Haptic value) ;

/// @brief Method TryGetProcessor addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TProcessor>
 TProcessor TryGetProcessor() ;

/// @brief Method AddProcessor addr 0x0 size 0xffffffffffffffff virtual true final false
 void AddProcessor(::bs_hook::Il2CppWrapperType processor) ;

/// @brief Method get_processors addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<UnityEngine::InputSystem::InputProcessor_1<UnityEngine::XR::OpenXR::Input::Haptic>> get_processors() ;

// Ctor Parameters []
explicit InputControl_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: UnityEngine.InputSystem::InputControl`1
namespace UnityEngine::InputSystem {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6299)), TypeDefinitionIndex(TypeDefinitionIndex(6298))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6299), inst: 3756 })
// CS Name: UnityEngine.InputSystem.InputControl`1
class CORDL_TYPE InputControl_1<UnityEngine::XR::OpenXR::Input::Pose> : public UnityEngine::InputSystem::InputControl {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xc0};

virtual ~InputControl_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "InputControl_1", modifiers: " const&", def_value: None }]
constexpr InputControl_1(InputControl_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InputControl_1", modifiers: "&&", def_value: None }]
constexpr InputControl_1(InputControl_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InputControl_1(void* ptr) noexcept : UnityEngine::InputSystem::InputControl(ptr) {
}


  constexpr InputControl_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InputControl_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InputControl_1& operator=(InputControl_1&& o) noexcept = default;
  constexpr InputControl_1& operator=(InputControl_1 const& o) noexcept = default;
                


// Fields

 UnityEngine::InputSystem::Utilities::InlinedArray_1<UnityEngine::InputSystem::InputProcessor_1<UnityEngine::XR::OpenXR::Input::Pose>> __declspec(property(get=__get_m_ProcessorStack, put=__set_m_ProcessorStack))  m_ProcessorStack;

constexpr void __set_m_ProcessorStack(UnityEngine::InputSystem::Utilities::InlinedArray_1<UnityEngine::InputSystem::InputProcessor_1<UnityEngine::XR::OpenXR::Input::Pose>> value) ;

constexpr UnityEngine::InputSystem::Utilities::InlinedArray_1<UnityEngine::InputSystem::InputProcessor_1<UnityEngine::XR::OpenXR::Input::Pose>> __get_m_ProcessorStack() const;


// Properties

 System::Type __declspec(property(get=get_valueType))  valueType;

 int32_t __declspec(property(get=get_valueSizeInBytes))  valueSizeInBytes;

 ::ArrayW<UnityEngine::InputSystem::InputProcessor_1<UnityEngine::XR::OpenXR::Input::Pose>> __declspec(property(get=get_processors))  processors;


// Methods

/// @brief Method get_valueType addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Type get_valueType() ;

/// @brief Method get_valueSizeInBytes addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_valueSizeInBytes() ;

/// @brief Method ReadValue addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::XR::OpenXR::Input::Pose ReadValue() ;

/// @brief Method ReadValueFromPreviousFrame addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::XR::OpenXR::Input::Pose ReadValueFromPreviousFrame() ;

/// @brief Method ReadDefaultValue addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::XR::OpenXR::Input::Pose ReadDefaultValue() ;

/// @brief Method ReadValueFromState addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::XR::OpenXR::Input::Pose ReadValueFromState(void* statePtr) ;

/// @brief Method ReadUnprocessedValue addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::XR::OpenXR::Input::Pose ReadUnprocessedValue() ;

/// @brief Method ReadUnprocessedValueFromState addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::XR::OpenXR::Input::Pose ReadUnprocessedValueFromState(void* statePtr) ;

/// @brief Method ReadValueFromStateAsObject addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType ReadValueFromStateAsObject(void* statePtr) ;

/// @brief Method ReadValueFromStateIntoBuffer addr 0x0 size 0xffffffffffffffff virtual true final false
 void ReadValueFromStateIntoBuffer(void* statePtr, void* bufferPtr, int32_t bufferSize) ;

/// @brief Method WriteValueFromBufferIntoState addr 0x0 size 0xffffffffffffffff virtual true final false
 void WriteValueFromBufferIntoState(void* bufferPtr, int32_t bufferSize, void* statePtr) ;

/// @brief Method WriteValueFromObjectIntoState addr 0x0 size 0xffffffffffffffff virtual true final false
 void WriteValueFromObjectIntoState(::bs_hook::Il2CppWrapperType value, void* statePtr) ;

/// @brief Method WriteValueIntoState addr 0x0 size 0xffffffffffffffff virtual true final false
 void WriteValueIntoState(UnityEngine::XR::OpenXR::Input::Pose value, void* statePtr) ;

/// @brief Method ReadValueFromBufferAsObject addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType ReadValueFromBufferAsObject(void* buffer, int32_t bufferSize) ;

/// @brief Method CompareValue addr 0x0 size 0xffffffffffffffff virtual true final false
 bool CompareValue(void* firstStatePtr, void* secondStatePtr) ;

/// @brief Method ProcessValue addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::XR::OpenXR::Input::Pose ProcessValue(UnityEngine::XR::OpenXR::Input::Pose value) ;

/// @brief Method TryGetProcessor addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TProcessor>
 TProcessor TryGetProcessor() ;

/// @brief Method AddProcessor addr 0x0 size 0xffffffffffffffff virtual true final false
 void AddProcessor(::bs_hook::Il2CppWrapperType processor) ;

/// @brief Method get_processors addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<UnityEngine::InputSystem::InputProcessor_1<UnityEngine::XR::OpenXR::Input::Pose>> get_processors() ;

// Ctor Parameters []
explicit InputControl_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: UnityEngine.InputSystem::InputControl`1
namespace UnityEngine::InputSystem {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6299)), TypeDefinitionIndex(TypeDefinitionIndex(6298))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6299), inst: 3757 })
// CS Name: UnityEngine.InputSystem.InputControl`1
class CORDL_TYPE InputControl_1<UnityEngine::InputSystem::XR::PoseState> : public UnityEngine::InputSystem::InputControl {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xc0};

virtual ~InputControl_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "InputControl_1", modifiers: " const&", def_value: None }]
constexpr InputControl_1(InputControl_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InputControl_1", modifiers: "&&", def_value: None }]
constexpr InputControl_1(InputControl_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InputControl_1(void* ptr) noexcept : UnityEngine::InputSystem::InputControl(ptr) {
}


  constexpr InputControl_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InputControl_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InputControl_1& operator=(InputControl_1&& o) noexcept = default;
  constexpr InputControl_1& operator=(InputControl_1 const& o) noexcept = default;
                


// Fields

 UnityEngine::InputSystem::Utilities::InlinedArray_1<UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::XR::PoseState>> __declspec(property(get=__get_m_ProcessorStack, put=__set_m_ProcessorStack))  m_ProcessorStack;

constexpr void __set_m_ProcessorStack(UnityEngine::InputSystem::Utilities::InlinedArray_1<UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::XR::PoseState>> value) ;

constexpr UnityEngine::InputSystem::Utilities::InlinedArray_1<UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::XR::PoseState>> __get_m_ProcessorStack() const;


// Properties

 System::Type __declspec(property(get=get_valueType))  valueType;

 int32_t __declspec(property(get=get_valueSizeInBytes))  valueSizeInBytes;

 ::ArrayW<UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::XR::PoseState>> __declspec(property(get=get_processors))  processors;


// Methods

/// @brief Method get_valueType addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Type get_valueType() ;

/// @brief Method get_valueSizeInBytes addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_valueSizeInBytes() ;

/// @brief Method ReadValue addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::InputSystem::XR::PoseState ReadValue() ;

/// @brief Method ReadValueFromPreviousFrame addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::InputSystem::XR::PoseState ReadValueFromPreviousFrame() ;

/// @brief Method ReadDefaultValue addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::InputSystem::XR::PoseState ReadDefaultValue() ;

/// @brief Method ReadValueFromState addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::InputSystem::XR::PoseState ReadValueFromState(void* statePtr) ;

/// @brief Method ReadUnprocessedValue addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::InputSystem::XR::PoseState ReadUnprocessedValue() ;

/// @brief Method ReadUnprocessedValueFromState addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::InputSystem::XR::PoseState ReadUnprocessedValueFromState(void* statePtr) ;

/// @brief Method ReadValueFromStateAsObject addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType ReadValueFromStateAsObject(void* statePtr) ;

/// @brief Method ReadValueFromStateIntoBuffer addr 0x0 size 0xffffffffffffffff virtual true final false
 void ReadValueFromStateIntoBuffer(void* statePtr, void* bufferPtr, int32_t bufferSize) ;

/// @brief Method WriteValueFromBufferIntoState addr 0x0 size 0xffffffffffffffff virtual true final false
 void WriteValueFromBufferIntoState(void* bufferPtr, int32_t bufferSize, void* statePtr) ;

/// @brief Method WriteValueFromObjectIntoState addr 0x0 size 0xffffffffffffffff virtual true final false
 void WriteValueFromObjectIntoState(::bs_hook::Il2CppWrapperType value, void* statePtr) ;

/// @brief Method WriteValueIntoState addr 0x0 size 0xffffffffffffffff virtual true final false
 void WriteValueIntoState(UnityEngine::InputSystem::XR::PoseState value, void* statePtr) ;

/// @brief Method ReadValueFromBufferAsObject addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType ReadValueFromBufferAsObject(void* buffer, int32_t bufferSize) ;

/// @brief Method CompareValue addr 0x0 size 0xffffffffffffffff virtual true final false
 bool CompareValue(void* firstStatePtr, void* secondStatePtr) ;

/// @brief Method ProcessValue addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::InputSystem::XR::PoseState ProcessValue(UnityEngine::InputSystem::XR::PoseState value) ;

/// @brief Method TryGetProcessor addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TProcessor>
 TProcessor TryGetProcessor() ;

/// @brief Method AddProcessor addr 0x0 size 0xffffffffffffffff virtual true final false
 void AddProcessor(::bs_hook::Il2CppWrapperType processor) ;

/// @brief Method get_processors addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::XR::PoseState>> get_processors() ;

// Ctor Parameters []
explicit InputControl_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: UnityEngine.InputSystem::InputControl`1
namespace UnityEngine::InputSystem {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6298)), TypeDefinitionIndex(TypeDefinitionIndex(6299))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6299), inst: 3759 })
// CS Name: UnityEngine.InputSystem.InputControl`1
class CORDL_TYPE InputControl_1<UnityEngine::InputSystem::LowLevel::TouchState> : public UnityEngine::InputSystem::InputControl {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xc0};

virtual ~InputControl_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "InputControl_1", modifiers: " const&", def_value: None }]
constexpr InputControl_1(InputControl_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InputControl_1", modifiers: "&&", def_value: None }]
constexpr InputControl_1(InputControl_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InputControl_1(void* ptr) noexcept : UnityEngine::InputSystem::InputControl(ptr) {
}


  constexpr InputControl_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InputControl_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InputControl_1& operator=(InputControl_1&& o) noexcept = default;
  constexpr InputControl_1& operator=(InputControl_1 const& o) noexcept = default;
                


// Fields

 UnityEngine::InputSystem::Utilities::InlinedArray_1<UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::LowLevel::TouchState>> __declspec(property(get=__get_m_ProcessorStack, put=__set_m_ProcessorStack))  m_ProcessorStack;

constexpr void __set_m_ProcessorStack(UnityEngine::InputSystem::Utilities::InlinedArray_1<UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::LowLevel::TouchState>> value) ;

constexpr UnityEngine::InputSystem::Utilities::InlinedArray_1<UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::LowLevel::TouchState>> __get_m_ProcessorStack() const;


// Properties

 System::Type __declspec(property(get=get_valueType))  valueType;

 int32_t __declspec(property(get=get_valueSizeInBytes))  valueSizeInBytes;

 ::ArrayW<UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::LowLevel::TouchState>> __declspec(property(get=get_processors))  processors;


// Methods

/// @brief Method get_valueType addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Type get_valueType() ;

/// @brief Method get_valueSizeInBytes addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_valueSizeInBytes() ;

/// @brief Method ReadValue addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::InputSystem::LowLevel::TouchState ReadValue() ;

/// @brief Method ReadValueFromPreviousFrame addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::InputSystem::LowLevel::TouchState ReadValueFromPreviousFrame() ;

/// @brief Method ReadDefaultValue addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::InputSystem::LowLevel::TouchState ReadDefaultValue() ;

/// @brief Method ReadValueFromState addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::InputSystem::LowLevel::TouchState ReadValueFromState(void* statePtr) ;

/// @brief Method ReadUnprocessedValue addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::InputSystem::LowLevel::TouchState ReadUnprocessedValue() ;

/// @brief Method ReadUnprocessedValueFromState addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::InputSystem::LowLevel::TouchState ReadUnprocessedValueFromState(void* statePtr) ;

/// @brief Method ReadValueFromStateAsObject addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType ReadValueFromStateAsObject(void* statePtr) ;

/// @brief Method ReadValueFromStateIntoBuffer addr 0x0 size 0xffffffffffffffff virtual true final false
 void ReadValueFromStateIntoBuffer(void* statePtr, void* bufferPtr, int32_t bufferSize) ;

/// @brief Method WriteValueFromBufferIntoState addr 0x0 size 0xffffffffffffffff virtual true final false
 void WriteValueFromBufferIntoState(void* bufferPtr, int32_t bufferSize, void* statePtr) ;

/// @brief Method WriteValueFromObjectIntoState addr 0x0 size 0xffffffffffffffff virtual true final false
 void WriteValueFromObjectIntoState(::bs_hook::Il2CppWrapperType value, void* statePtr) ;

/// @brief Method WriteValueIntoState addr 0x0 size 0xffffffffffffffff virtual true final false
 void WriteValueIntoState(UnityEngine::InputSystem::LowLevel::TouchState value, void* statePtr) ;

/// @brief Method ReadValueFromBufferAsObject addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType ReadValueFromBufferAsObject(void* buffer, int32_t bufferSize) ;

/// @brief Method CompareValue addr 0x0 size 0xffffffffffffffff virtual true final false
 bool CompareValue(void* firstStatePtr, void* secondStatePtr) ;

/// @brief Method ProcessValue addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::InputSystem::LowLevel::TouchState ProcessValue(UnityEngine::InputSystem::LowLevel::TouchState value) ;

/// @brief Method TryGetProcessor addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TProcessor>
 TProcessor TryGetProcessor() ;

/// @brief Method AddProcessor addr 0x0 size 0xffffffffffffffff virtual true final false
 void AddProcessor(::bs_hook::Il2CppWrapperType processor) ;

/// @brief Method get_processors addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::LowLevel::TouchState>> get_processors() ;

// Ctor Parameters []
explicit InputControl_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: UnityEngine.InputSystem::InputControl`1
namespace UnityEngine::InputSystem {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6298)), TypeDefinitionIndex(TypeDefinitionIndex(6299))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6299), inst: 4825 })
// CS Name: UnityEngine.InputSystem.InputControl`1
class CORDL_TYPE InputControl_1<System::Int32Enum> : public UnityEngine::InputSystem::InputControl {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xc0};

virtual ~InputControl_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "InputControl_1", modifiers: " const&", def_value: None }]
constexpr InputControl_1(InputControl_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InputControl_1", modifiers: "&&", def_value: None }]
constexpr InputControl_1(InputControl_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InputControl_1(void* ptr) noexcept : UnityEngine::InputSystem::InputControl(ptr) {
}


  constexpr InputControl_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InputControl_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InputControl_1& operator=(InputControl_1&& o) noexcept = default;
  constexpr InputControl_1& operator=(InputControl_1 const& o) noexcept = default;
                


// Fields

 UnityEngine::InputSystem::Utilities::InlinedArray_1<UnityEngine::InputSystem::InputProcessor_1<System::Int32Enum>> __declspec(property(get=__get_m_ProcessorStack, put=__set_m_ProcessorStack))  m_ProcessorStack;

constexpr void __set_m_ProcessorStack(UnityEngine::InputSystem::Utilities::InlinedArray_1<UnityEngine::InputSystem::InputProcessor_1<System::Int32Enum>> value) ;

constexpr UnityEngine::InputSystem::Utilities::InlinedArray_1<UnityEngine::InputSystem::InputProcessor_1<System::Int32Enum>> __get_m_ProcessorStack() const;


// Properties

 System::Type __declspec(property(get=get_valueType))  valueType;

 int32_t __declspec(property(get=get_valueSizeInBytes))  valueSizeInBytes;

 ::ArrayW<UnityEngine::InputSystem::InputProcessor_1<System::Int32Enum>> __declspec(property(get=get_processors))  processors;


// Methods

/// @brief Method get_valueType addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Type get_valueType() ;

/// @brief Method get_valueSizeInBytes addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_valueSizeInBytes() ;

/// @brief Method ReadValue addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Int32Enum ReadValue() ;

/// @brief Method ReadValueFromPreviousFrame addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Int32Enum ReadValueFromPreviousFrame() ;

/// @brief Method ReadDefaultValue addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Int32Enum ReadDefaultValue() ;

/// @brief Method ReadValueFromState addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Int32Enum ReadValueFromState(void* statePtr) ;

/// @brief Method ReadUnprocessedValue addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Int32Enum ReadUnprocessedValue() ;

/// @brief Method ReadUnprocessedValueFromState addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Int32Enum ReadUnprocessedValueFromState(void* statePtr) ;

/// @brief Method ReadValueFromStateAsObject addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType ReadValueFromStateAsObject(void* statePtr) ;

/// @brief Method ReadValueFromStateIntoBuffer addr 0x0 size 0xffffffffffffffff virtual true final false
 void ReadValueFromStateIntoBuffer(void* statePtr, void* bufferPtr, int32_t bufferSize) ;

/// @brief Method WriteValueFromBufferIntoState addr 0x0 size 0xffffffffffffffff virtual true final false
 void WriteValueFromBufferIntoState(void* bufferPtr, int32_t bufferSize, void* statePtr) ;

/// @brief Method WriteValueFromObjectIntoState addr 0x0 size 0xffffffffffffffff virtual true final false
 void WriteValueFromObjectIntoState(::bs_hook::Il2CppWrapperType value, void* statePtr) ;

/// @brief Method WriteValueIntoState addr 0x0 size 0xffffffffffffffff virtual true final false
 void WriteValueIntoState(System::Int32Enum value, void* statePtr) ;

/// @brief Method ReadValueFromBufferAsObject addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType ReadValueFromBufferAsObject(void* buffer, int32_t bufferSize) ;

/// @brief Method CompareValue addr 0x0 size 0xffffffffffffffff virtual true final false
 bool CompareValue(void* firstStatePtr, void* secondStatePtr) ;

/// @brief Method ProcessValue addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Int32Enum ProcessValue(System::Int32Enum value) ;

/// @brief Method TryGetProcessor addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TProcessor>
 TProcessor TryGetProcessor() ;

/// @brief Method AddProcessor addr 0x0 size 0xffffffffffffffff virtual true final false
 void AddProcessor(::bs_hook::Il2CppWrapperType processor) ;

/// @brief Method get_processors addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<UnityEngine::InputSystem::InputProcessor_1<System::Int32Enum>> get_processors() ;

// Ctor Parameters []
explicit InputControl_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(UnityEngine::InputSystem::InputControl_1, "UnityEngine.InputSystem", "InputControl`1");
