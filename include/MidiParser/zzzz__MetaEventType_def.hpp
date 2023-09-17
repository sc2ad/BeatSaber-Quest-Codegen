#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace MidiParser {
struct MetaEventType;
}
// Type: MidiParser::MetaEventType
namespace MidiParser {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16047))
// CS Name: MidiParser.MetaEventType
struct CORDL_TYPE MetaEventType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr MetaEventType(uint8_t value__) noexcept;


                    constexpr MetaEventType(MetaEventType const&) = default;
                    constexpr MetaEventType(MetaEventType&&) = default;
                    constexpr MetaEventType& operator=(MetaEventType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr MetaEventType& operator=(MetaEventType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit MetaEventType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __MetaEventType_Unwrapped : uint8_t {
__Tempo = 81u,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MetaEventType_Unwrapped () const noexcept {
return std::bit_cast<__MetaEventType_Unwrapped>(__instance);
}


// Fields

 uint8_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(uint8_t value) ;

constexpr uint8_t __get_value__() const;

/// @brief Field Tempo offset 0
static ::MidiParser::MetaEventType const Tempo;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def MidiParser
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::MidiParser::MetaEventType, "MidiParser", "MetaEventType");
