#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Xml {
struct WriteState;
}
// Type: System.Xml::WriteState
namespace System::Xml {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11432))
// CS Name: System.Xml.WriteState
struct CORDL_TYPE WriteState : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr WriteState(int32_t value__) noexcept;


                    constexpr WriteState(WriteState const&) = default;
                    constexpr WriteState(WriteState&&) = default;
                    constexpr WriteState& operator=(WriteState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr WriteState& operator=(WriteState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit WriteState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __WriteState_Unwrapped : int32_t {
__Start = 0,
__Prolog = 1,
__Element = 2,
__Attribute = 3,
__Content = 4,
__Closed = 5,
__Error = 6,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __WriteState_Unwrapped () const noexcept {
return std::bit_cast<__WriteState_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Start offset 0
static System::Xml::WriteState const Start;

/// @brief Field Prolog offset 0
static System::Xml::WriteState const Prolog;

/// @brief Field Element offset 0
static System::Xml::WriteState const Element;

/// @brief Field Attribute offset 0
static System::Xml::WriteState const Attribute;

/// @brief Field Content offset 0
static System::Xml::WriteState const Content;

/// @brief Field Closed offset 0
static System::Xml::WriteState const Closed;

/// @brief Field Error offset 0
static System::Xml::WriteState const Error;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Xml
DEFINE_IL2CPP_ARG_TYPE(System::Xml::WriteState, "System.Xml", "WriteState");
