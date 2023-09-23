#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System {
struct InputRecord;
}
// Type: System::InputRecord
namespace System {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2643))
// CS Name: System.InputRecord
struct CORDL_TYPE InputRecord : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "EventType", ty: "int16_t", modifiers: "", def_value: None }, CppParam { name: "KeyDown", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "RepeatCount", ty: "int16_t", modifiers: "", def_value: None }, CppParam { name: "VirtualKeyCode", ty: "int16_t", modifiers: "", def_value: None }, CppParam { name: "VirtualScanCode", ty: "int16_t", modifiers: "", def_value: None }, CppParam { name: "Character", ty: "char16_t", modifiers: "", def_value: None }, CppParam { name: "ControlKeyState", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "pad1", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "pad2", ty: "bool", modifiers: "", def_value: None }]
constexpr InputRecord(int16_t EventType, bool KeyDown, int16_t RepeatCount, int16_t VirtualKeyCode, int16_t VirtualScanCode, char16_t Character, int32_t ControlKeyState, int32_t pad1, bool pad2) noexcept;


                    constexpr InputRecord(InputRecord const&) = default;
                    constexpr InputRecord(InputRecord&&) = default;
                    constexpr InputRecord& operator=(InputRecord const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr InputRecord& operator=(InputRecord&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit InputRecord(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int16_t __declspec(property(get=__get_EventType, put=__set_EventType))  EventType;

constexpr void __set_EventType(int16_t value) ;

constexpr int16_t __get_EventType() const;

 bool __declspec(property(get=__get_KeyDown, put=__set_KeyDown))  KeyDown;

constexpr void __set_KeyDown(bool value) ;

constexpr bool __get_KeyDown() const;

 int16_t __declspec(property(get=__get_RepeatCount, put=__set_RepeatCount))  RepeatCount;

constexpr void __set_RepeatCount(int16_t value) ;

constexpr int16_t __get_RepeatCount() const;

 int16_t __declspec(property(get=__get_VirtualKeyCode, put=__set_VirtualKeyCode))  VirtualKeyCode;

constexpr void __set_VirtualKeyCode(int16_t value) ;

constexpr int16_t __get_VirtualKeyCode() const;

 int16_t __declspec(property(get=__get_VirtualScanCode, put=__set_VirtualScanCode))  VirtualScanCode;

constexpr void __set_VirtualScanCode(int16_t value) ;

constexpr int16_t __get_VirtualScanCode() const;

 char16_t __declspec(property(get=__get_Character, put=__set_Character))  Character;

constexpr void __set_Character(char16_t value) ;

constexpr char16_t __get_Character() const;

 int32_t __declspec(property(get=__get_ControlKeyState, put=__set_ControlKeyState))  ControlKeyState;

constexpr void __set_ControlKeyState(int32_t value) ;

constexpr int32_t __get_ControlKeyState() const;

 int32_t __declspec(property(get=__get_pad1, put=__set_pad1))  pad1;

constexpr void __set_pad1(int32_t value) ;

constexpr int32_t __get_pad1() const;

 bool __declspec(property(get=__get_pad2, put=__set_pad2))  pad2;

constexpr void __set_pad2(bool value) ;

constexpr bool __get_pad2() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE(System::InputRecord, "System", "InputRecord");
