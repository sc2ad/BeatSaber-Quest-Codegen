#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Xml {
struct TriState;
}
// Type: System.Xml::TriState
namespace System::Xml {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11435))
// CS Name: System.Xml.TriState
struct CORDL_TYPE TriState : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TriState(int32_t value__) noexcept;


                    constexpr TriState(TriState const&) = default;
                    constexpr TriState(TriState&&) = default;
                    constexpr TriState& operator=(TriState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TriState& operator=(TriState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TriState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __TriState_Unwrapped : int32_t {
__Unknown = -1,
__False = 0,
__True = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TriState_Unwrapped () const noexcept {
return std::bit_cast<__TriState_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Unknown offset 0
static ::System::Xml::TriState const Unknown;

/// @brief Field False offset 0
static ::System::Xml::TriState const False;

/// @brief Field True offset 0
static ::System::Xml::TriState const True;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Xml
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::TriState, "System.Xml", "TriState");
