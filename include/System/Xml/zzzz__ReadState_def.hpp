#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Xml {
struct ReadState;
}
// Type: System.Xml::ReadState
namespace System::Xml {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11382))
// CS Name: System.Xml.ReadState
struct CORDL_TYPE ReadState : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ReadState(int32_t value__) noexcept;


                    constexpr ReadState(ReadState const&) = default;
                    constexpr ReadState(ReadState&&) = default;
                    constexpr ReadState& operator=(ReadState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ReadState& operator=(ReadState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ReadState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __ReadState_Unwrapped : int32_t {
__Initial = 0,
__Interactive = 1,
__Error = 2,
__EndOfFile = 3,
__Closed = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ReadState_Unwrapped () const noexcept {
return std::bit_cast<__ReadState_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Initial offset 0
static System::Xml::ReadState const Initial;

/// @brief Field Interactive offset 0
static System::Xml::ReadState const Interactive;

/// @brief Field Error offset 0
static System::Xml::ReadState const Error;

/// @brief Field EndOfFile offset 0
static System::Xml::ReadState const EndOfFile;

/// @brief Field Closed offset 0
static System::Xml::ReadState const Closed;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Xml
DEFINE_IL2CPP_ARG_TYPE(System::Xml::ReadState, "System.Xml", "ReadState");
