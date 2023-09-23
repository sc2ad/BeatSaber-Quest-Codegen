#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace System {
template<typename T>
class IEquatable_1;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventPtr;
}
// Type: UnityEngine.InputSystem.LowLevel::InputEventPtr
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6619))
// CS Name: UnityEngine.InputSystem.LowLevel.InputEventPtr
struct CORDL_TYPE InputEventPtr : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::IEquatable_1<UnityEngine::InputSystem::LowLevel::InputEventPtr>
constexpr operator  System::IEquatable_1<UnityEngine::InputSystem::LowLevel::InputEventPtr>() const;

// Ctor Parameters [CppParam { name: "m_EventPtr", ty: "void*", modifiers: "", def_value: None }]
constexpr InputEventPtr(void* m_EventPtr) noexcept;


                    constexpr InputEventPtr(InputEventPtr const&) = default;
                    constexpr InputEventPtr(InputEventPtr&&) = default;
                    constexpr InputEventPtr& operator=(InputEventPtr const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr InputEventPtr& operator=(InputEventPtr&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit InputEventPtr(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 void* __declspec(property(get=__get_m_EventPtr, put=__set_m_EventPtr))  m_EventPtr;

constexpr void __set_m_EventPtr(void* value) ;

constexpr void* __get_m_EventPtr() const;


// Properties

 bool __declspec(property(get=get_valid))  valid;

 bool __declspec(property(get=get_handled, put=set_handled))  handled;

 int32_t __declspec(property(get=get_id, put=set_id))  id;

 UnityEngine::InputSystem::Utilities::FourCC __declspec(property(get=get_type))  type;

 uint32_t __declspec(property(get=get_sizeInBytes))  sizeInBytes;

 int32_t __declspec(property(get=get_deviceId, put=set_deviceId))  deviceId;

 double_t __declspec(property(get=get_time, put=set_time))  time;

 double_t __declspec(property(get=get_internalTime, put=set_internalTime))  internalTime;

 void* __declspec(property(get=get_data))  data;

 UnityEngine::InputSystem::Utilities::FourCC __declspec(property(get=get_stateFormat))  stateFormat;

 uint32_t __declspec(property(get=get_stateSizeInBytes))  stateSizeInBytes;

 uint32_t __declspec(property(get=get_stateOffset))  stateOffset;


// Methods

/// @brief Method .ctor addr 0x2958cd4 size 0x8 virtual false final false
 void _ctor(void* eventPtr) ;

/// @brief Method get_valid addr 0x294e8e8 size 0x10 virtual false final false
 bool get_valid() ;

/// @brief Method get_handled addr 0x2958cdc size 0x1c virtual false final false
 bool get_handled() ;

/// @brief Method set_handled addr 0x29521a4 size 0x78 virtual false final false
 void set_handled(bool value) ;

/// @brief Method get_id addr 0x2958cf8 size 0x1c virtual false final false
 int32_t get_id() ;

/// @brief Method set_id addr 0x2958d14 size 0x70 virtual false final false
 void set_id(int32_t value) ;

/// @brief Method get_type addr 0x294e8f8 size 0x18 virtual false final false
 UnityEngine::InputSystem::Utilities::FourCC get_type() ;

/// @brief Method get_sizeInBytes addr 0x2958d84 size 0x18 virtual false final false
 uint32_t get_sizeInBytes() ;

/// @brief Method get_deviceId addr 0x2958d9c size 0x18 virtual false final false
 int32_t get_deviceId() ;

/// @brief Method set_deviceId addr 0x2958db4 size 0x64 virtual false final false
 void set_deviceId(int32_t value) ;

/// @brief Method get_time addr 0x2952c50 size 0x60 virtual false final false
 double_t get_time() ;

/// @brief Method set_time addr 0x2958e18 size 0xb0 virtual false final false
 void set_time(double_t value) ;

/// @brief Method get_internalTime addr 0x2958ec8 size 0x18 virtual false final false
 double_t get_internalTime() ;

/// @brief Method set_internalTime addr 0x2958ee0 size 0x64 virtual false final false
 void set_internalTime(double_t value) ;

/// @brief Method get_data addr 0x2958f44 size 0x8 virtual false final false
 void* get_data() ;

/// @brief Method get_stateFormat addr 0x2958f4c size 0xfc virtual false final false
 UnityEngine::InputSystem::Utilities::FourCC get_stateFormat() ;

/// @brief Method get_stateSizeInBytes addr 0x29590e4 size 0x11c virtual false final false
 uint32_t get_stateSizeInBytes() ;

/// @brief Method get_stateOffset addr 0x295933c size 0xe0 virtual false final false
 uint32_t get_stateOffset() ;

/// @brief Method IsA addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TOtherEvent>
 bool IsA() ;

/// @brief Method Next addr 0x295941c size 0x30 virtual false final false
 UnityEngine::InputSystem::LowLevel::InputEventPtr Next() ;

/// @brief Method ToString addr 0x295904c size 0x98 virtual true final false
 ::StringW ToString() ;

/// @brief Method ToPointer addr 0x295944c size 0x8 virtual false final false
 void* ToPointer() ;

/// @brief Method Equals addr 0x2959454 size 0x18 virtual true final true
 bool Equals(UnityEngine::InputSystem::LowLevel::InputEventPtr other) ;

/// @brief Method Equals addr 0x295946c size 0x88 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x29594f4 size 0x8 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method op_Equality addr 0x29594fc size 0xc virtual false final false
static bool op_Equality(UnityEngine::InputSystem::LowLevel::InputEventPtr left, UnityEngine::InputSystem::LowLevel::InputEventPtr right) ;

/// @brief Method op_Inequality addr 0x2959508 size 0xc virtual false final false
static bool op_Inequality(UnityEngine::InputSystem::LowLevel::InputEventPtr left, UnityEngine::InputSystem::LowLevel::InputEventPtr right) ;

/// @brief Method op_Implicit addr 0x2957e48 size 0x4 virtual false final false
static UnityEngine::InputSystem::LowLevel::InputEventPtr op_Implicit_UnityEngine__InputSystem__LowLevel__InputEventPtr(void* eventPtr) ;

/// @brief Method From addr 0x2959514 size 0x4 virtual false final false
static UnityEngine::InputSystem::LowLevel::InputEventPtr From(void* eventPtr) ;

/// @brief Method op_Implicit addr 0x29587d8 size 0x4 virtual false final false
static void* op_Implicit_void*(UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr) ;

/// @brief Method FromInputEventPtr addr 0x2959518 size 0x4 virtual false final false
static void* FromInputEventPtr(UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::LowLevel
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::LowLevel::InputEventPtr, "UnityEngine.InputSystem.LowLevel", "InputEventPtr");
