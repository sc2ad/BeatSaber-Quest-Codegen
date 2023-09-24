#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace UnityEngine::InputSystem::LowLevel {
class IInputDeviceCommandInfo;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct InputDeviceCommand;
}
// Type: UnityEngine.InputSystem.LowLevel::InputDeviceCommand
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6554))
// CS Name: UnityEngine.InputSystem.LowLevel.InputDeviceCommand
struct CORDL_TYPE InputDeviceCommand : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo
constexpr operator  UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo() const;

// Ctor Parameters [CppParam { name: "type", ty: "UnityEngine::InputSystem::Utilities::FourCC", modifiers: "", def_value: None }, CppParam { name: "sizeInBytes", ty: "int32_t", modifiers: "", def_value: None }]
constexpr InputDeviceCommand(UnityEngine::InputSystem::Utilities::FourCC type, int32_t sizeInBytes) noexcept;


                    constexpr InputDeviceCommand(InputDeviceCommand const&) = default;
                    constexpr InputDeviceCommand(InputDeviceCommand&&) = default;
                    constexpr InputDeviceCommand& operator=(InputDeviceCommand const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr InputDeviceCommand& operator=(InputDeviceCommand&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit InputDeviceCommand(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

/// @brief Field kBaseCommandSize offset 0
static constexpr int32_t  kBaseCommandSize{8};

/// @brief Field BaseCommandSize offset 0
static constexpr int32_t  BaseCommandSize{8};

/// @brief Field GenericFailure offset 0
static constexpr int64_t  GenericFailure{-1};

/// @brief Field GenericSuccess offset 0
static constexpr int64_t  GenericSuccess{1};

 UnityEngine::InputSystem::Utilities::FourCC __declspec(property(get=__get_type, put=__set_type))  type;

constexpr void __set_type(UnityEngine::InputSystem::Utilities::FourCC value) ;

constexpr UnityEngine::InputSystem::Utilities::FourCC __get_type() const;

 int32_t __declspec(property(get=__get_sizeInBytes, put=__set_sizeInBytes))  sizeInBytes;

constexpr void __set_sizeInBytes(int32_t value) ;

constexpr int32_t __get_sizeInBytes() const;


// Properties

 int32_t __declspec(property(get=get_payloadSizeInBytes))  payloadSizeInBytes;

 void* __declspec(property(get=get_payloadPtr))  payloadPtr;

 UnityEngine::InputSystem::Utilities::FourCC __declspec(property(get=get_typeStatic))  typeStatic;


// Methods

/// @brief Method get_payloadSizeInBytes addr 0x295508c size 0xc virtual false final false
 int32_t get_payloadSizeInBytes() ;

/// @brief Method get_payloadPtr addr 0x2955098 size 0x8 virtual false final false
 void* get_payloadPtr() ;

/// @brief Method .ctor addr 0x2954b5c size 0x8 virtual false final false
 void _ctor(UnityEngine::InputSystem::Utilities::FourCC type, int32_t sizeInBytes) ;

/// @brief Method AllocateNative addr 0x29550a0 size 0xb0 virtual false final false
static Unity::Collections::NativeArray_1<uint8_t> AllocateNative(UnityEngine::InputSystem::Utilities::FourCC type, int32_t payloadSize) ;

/// @brief Method get_typeStatic addr 0x2955150 size 0x8 virtual true final true
 UnityEngine::InputSystem::Utilities::FourCC get_typeStatic() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::LowLevel
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::LowLevel::InputDeviceCommand, "UnityEngine.InputSystem.LowLevel", "InputDeviceCommand");
