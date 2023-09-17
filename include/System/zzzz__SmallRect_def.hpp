#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace System {
struct SmallRect;
}
// Type: System::SmallRect
namespace System {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2645))
// CS Name: System.SmallRect
struct CORDL_TYPE SmallRect : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "Left", ty: "int16_t", modifiers: "", def_value: None }, CppParam { name: "Top", ty: "int16_t", modifiers: "", def_value: None }, CppParam { name: "Right", ty: "int16_t", modifiers: "", def_value: None }, CppParam { name: "Bottom", ty: "int16_t", modifiers: "", def_value: None }]
constexpr SmallRect(int16_t Left, int16_t Top, int16_t Right, int16_t Bottom) noexcept;


                    constexpr SmallRect(SmallRect const&) = default;
                    constexpr SmallRect(SmallRect&&) = default;
                    constexpr SmallRect& operator=(SmallRect const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr SmallRect& operator=(SmallRect&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit SmallRect(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int16_t __declspec(property(get=__get_Left, put=__set_Left))  Left;

constexpr void __set_Left(int16_t value) ;

constexpr int16_t __get_Left() const;

 int16_t __declspec(property(get=__get_Top, put=__set_Top))  Top;

constexpr void __set_Top(int16_t value) ;

constexpr int16_t __get_Top() const;

 int16_t __declspec(property(get=__get_Right, put=__set_Right))  Right;

constexpr void __set_Right(int16_t value) ;

constexpr int16_t __get_Right() const;

 int16_t __declspec(property(get=__get_Bottom, put=__set_Bottom))  Bottom;

constexpr void __set_Bottom(int16_t value) ;

constexpr int16_t __get_Bottom() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::SmallRect, "System", "SmallRect");
