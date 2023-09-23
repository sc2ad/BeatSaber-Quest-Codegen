#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace MidiParser {
struct MetaEventType;
}
// Forward declare root types
namespace MidiParser {
struct MidiEvent;
}
// Type: MidiParser::MidiEvent
namespace MidiParser {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16046))
// CS Name: MidiParser.MidiEvent
struct CORDL_TYPE MidiEvent : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "AbsoluteTicksTime", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Type", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "Arg1", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Arg2", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Arg3", ty: "int32_t", modifiers: "", def_value: None }]
constexpr MidiEvent(int32_t AbsoluteTicksTime, uint8_t Type, int32_t Arg1, int32_t Arg2, int32_t Arg3) noexcept;


                    constexpr MidiEvent(MidiEvent const&) = default;
                    constexpr MidiEvent(MidiEvent&&) = default;
                    constexpr MidiEvent& operator=(MidiEvent const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr MidiEvent& operator=(MidiEvent&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x14};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit MidiEvent(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_AbsoluteTicksTime, put=__set_AbsoluteTicksTime))  AbsoluteTicksTime;

constexpr void __set_AbsoluteTicksTime(int32_t value) ;

constexpr int32_t __get_AbsoluteTicksTime() const;

 uint8_t __declspec(property(get=__get_Type, put=__set_Type))  Type;

constexpr void __set_Type(uint8_t value) ;

constexpr uint8_t __get_Type() const;

 int32_t __declspec(property(get=__get_Arg1, put=__set_Arg1))  Arg1;

constexpr void __set_Arg1(int32_t value) ;

constexpr int32_t __get_Arg1() const;

 int32_t __declspec(property(get=__get_Arg2, put=__set_Arg2))  Arg2;

constexpr void __set_Arg2(int32_t value) ;

constexpr int32_t __get_Arg2() const;

 int32_t __declspec(property(get=__get_Arg3, put=__set_Arg3))  Arg3;

constexpr void __set_Arg3(int32_t value) ;

constexpr int32_t __get_Arg3() const;


// Properties

 MidiParser::MetaEventType __declspec(property(get=get_MetaEventType))  MetaEventType;

 int32_t __declspec(property(get=get_Channel))  Channel;

 int32_t __declspec(property(get=get_Note))  Note;

 int32_t __declspec(property(get=get_Velocity))  Velocity;

 int32_t __declspec(property(get=get_Value))  Value;


// Methods

/// @brief Method get_MetaEventType addr 0x227900c size 0x8 virtual false final false
 MidiParser::MetaEventType get_MetaEventType() ;

/// @brief Method get_Channel addr 0x2279014 size 0x8 virtual false final false
 int32_t get_Channel() ;

/// @brief Method get_Note addr 0x227901c size 0x8 virtual false final false
 int32_t get_Note() ;

/// @brief Method get_Velocity addr 0x2279024 size 0x8 virtual false final false
 int32_t get_Velocity() ;

/// @brief Method get_Value addr 0x227902c size 0x8 virtual false final false
 int32_t get_Value() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def MidiParser
DEFINE_IL2CPP_ARG_TYPE(MidiParser::MidiEvent, "MidiParser", "MidiEvent");
