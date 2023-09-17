#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace System {
struct SmallRect;
}
namespace System {
struct Coord;
}
// Forward declare root types
namespace System {
struct ConsoleScreenBufferInfo;
}
// Type: System::ConsoleScreenBufferInfo
namespace System {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2646))
// CS Name: System.ConsoleScreenBufferInfo
struct CORDL_TYPE ConsoleScreenBufferInfo : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "Size", ty: "::System::Coord", modifiers: "", def_value: None }, CppParam { name: "CursorPosition", ty: "::System::Coord", modifiers: "", def_value: None }, CppParam { name: "Attribute", ty: "int16_t", modifiers: "", def_value: None }, CppParam { name: "Window", ty: "::System::SmallRect", modifiers: "", def_value: None }, CppParam { name: "MaxWindowSize", ty: "::System::Coord", modifiers: "", def_value: None }]
constexpr ConsoleScreenBufferInfo(::System::Coord Size, ::System::Coord CursorPosition, int16_t Attribute, ::System::SmallRect Window, ::System::Coord MaxWindowSize) noexcept;


                    constexpr ConsoleScreenBufferInfo(ConsoleScreenBufferInfo const&) = default;
                    constexpr ConsoleScreenBufferInfo(ConsoleScreenBufferInfo&&) = default;
                    constexpr ConsoleScreenBufferInfo& operator=(ConsoleScreenBufferInfo const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ConsoleScreenBufferInfo& operator=(ConsoleScreenBufferInfo&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x16};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ConsoleScreenBufferInfo(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::System::Coord __declspec(property(get=__get_Size, put=__set_Size))  Size;

constexpr void __set_Size(::System::Coord value) ;

constexpr ::System::Coord __get_Size() const;

 ::System::Coord __declspec(property(get=__get_CursorPosition, put=__set_CursorPosition))  CursorPosition;

constexpr void __set_CursorPosition(::System::Coord value) ;

constexpr ::System::Coord __get_CursorPosition() const;

 int16_t __declspec(property(get=__get_Attribute, put=__set_Attribute))  Attribute;

constexpr void __set_Attribute(int16_t value) ;

constexpr int16_t __get_Attribute() const;

 ::System::SmallRect __declspec(property(get=__get_Window, put=__set_Window))  Window;

constexpr void __set_Window(::System::SmallRect value) ;

constexpr ::System::SmallRect __get_Window() const;

 ::System::Coord __declspec(property(get=__get_MaxWindowSize, put=__set_MaxWindowSize))  MaxWindowSize;

constexpr void __set_MaxWindowSize(::System::Coord value) ;

constexpr ::System::Coord __get_MaxWindowSize() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::ConsoleScreenBufferInfo, "System", "ConsoleScreenBufferInfo");
