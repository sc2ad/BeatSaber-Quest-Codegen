#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
namespace System {
struct ConsoleModifiers;
}
namespace System {
struct ConsoleKey;
}
// Forward declare root types
namespace System {
struct ConsoleKeyInfo;
}
// Type: System::ConsoleKeyInfo
namespace System {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2519))
// CS Name: System.ConsoleKeyInfo
struct CORDL_TYPE ConsoleKeyInfo : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "_keyChar", ty: "char16_t", modifiers: "", def_value: None }, CppParam { name: "_key", ty: "System::ConsoleKey", modifiers: "", def_value: None }, CppParam { name: "_mods", ty: "System::ConsoleModifiers", modifiers: "", def_value: None }]
constexpr ConsoleKeyInfo(char16_t _keyChar, System::ConsoleKey _key, System::ConsoleModifiers _mods) noexcept;


                    constexpr ConsoleKeyInfo(ConsoleKeyInfo const&) = default;
                    constexpr ConsoleKeyInfo(ConsoleKeyInfo&&) = default;
                    constexpr ConsoleKeyInfo& operator=(ConsoleKeyInfo const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ConsoleKeyInfo& operator=(ConsoleKeyInfo&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0xc};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ConsoleKeyInfo(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 char16_t __declspec(property(get=__get__keyChar, put=__set__keyChar))  _keyChar;

constexpr void __set__keyChar(char16_t value) ;

constexpr char16_t __get__keyChar() const;

 System::ConsoleKey __declspec(property(get=__get__key, put=__set__key))  _key;

constexpr void __set__key(System::ConsoleKey value) ;

constexpr System::ConsoleKey __get__key() const;

 System::ConsoleModifiers __declspec(property(get=__get__mods, put=__set__mods))  _mods;

constexpr void __set__mods(System::ConsoleModifiers value) ;

constexpr System::ConsoleModifiers __get__mods() const;


// Properties

 char16_t __declspec(property(get=get_KeyChar))  KeyChar;

 System::ConsoleKey __declspec(property(get=get_Key))  Key;


// Methods

/// @brief Method .ctor addr 0x2461920 size 0xa8 virtual false final false
 void _ctor(char16_t keyChar, System::ConsoleKey key, bool shift, bool alt, bool control) ;

/// @brief Method get_KeyChar addr 0x24619c8 size 0x8 virtual false final false
 char16_t get_KeyChar() ;

/// @brief Method get_Key addr 0x24619d0 size 0x8 virtual false final false
 System::ConsoleKey get_Key() ;

/// @brief Method Equals addr 0x24619d8 size 0x98 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method Equals addr 0x2461a70 size 0x34 virtual false final false
 bool Equals(System::ConsoleKeyInfo obj) ;

/// @brief Method GetHashCode addr 0x2461aa4 size 0x14 virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE(System::ConsoleKeyInfo, "System", "ConsoleKeyInfo");
