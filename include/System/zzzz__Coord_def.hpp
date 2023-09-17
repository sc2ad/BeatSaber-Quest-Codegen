#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace System {
struct Coord;
}
// Type: System::Coord
namespace System {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2644))
// CS Name: System.Coord
struct CORDL_TYPE Coord : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "X", ty: "int16_t", modifiers: "", def_value: None }, CppParam { name: "Y", ty: "int16_t", modifiers: "", def_value: None }]
constexpr Coord(int16_t X, int16_t Y) noexcept;


                    constexpr Coord(Coord const&) = default;
                    constexpr Coord(Coord&&) = default;
                    constexpr Coord& operator=(Coord const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Coord& operator=(Coord&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Coord(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int16_t __declspec(property(get=__get_X, put=__set_X))  X;

constexpr void __set_X(int16_t value) ;

constexpr int16_t __get_X() const;

 int16_t __declspec(property(get=__get_Y, put=__set_Y))  Y;

constexpr void __set_Y(int16_t value) ;

constexpr int16_t __get_Y() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::Coord, "System", "Coord");
