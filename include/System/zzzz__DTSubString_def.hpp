#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System {
struct DTSubStringType;
}
// Forward declare root types
namespace System {
struct DTSubString;
}
// Type: System::DTSubString
namespace System {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2394))
// CS Name: System.DTSubString
struct CORDL_TYPE DTSubString : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "s", ty: "System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "type", ty: "System::DTSubStringType", modifiers: "", def_value: None }, CppParam { name: "value", ty: "int32_t", modifiers: "", def_value: None }]
constexpr DTSubString(System::ReadOnlySpan_1<char16_t> s, int32_t index, int32_t length, System::DTSubStringType type, int32_t value) noexcept;


                    constexpr DTSubString(DTSubString const&) = default;
                    constexpr DTSubString(DTSubString&&) = default;
                    constexpr DTSubString& operator=(DTSubString const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr DTSubString& operator=(DTSubString&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit DTSubString(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 System::ReadOnlySpan_1<char16_t> __declspec(property(get=__get_s, put=__set_s))  s;

constexpr void __set_s(System::ReadOnlySpan_1<char16_t> value) ;

constexpr System::ReadOnlySpan_1<char16_t> __get_s() const;

 int32_t __declspec(property(get=__get_index, put=__set_index))  index;

constexpr void __set_index(int32_t value) ;

constexpr int32_t __get_index() const;

 int32_t __declspec(property(get=__get_length, put=__set_length))  length;

constexpr void __set_length(int32_t value) ;

constexpr int32_t __get_length() const;

 System::DTSubStringType __declspec(property(get=__get_type, put=__set_type))  type;

constexpr void __set_type(System::DTSubStringType value) ;

constexpr System::DTSubStringType __get_type() const;

 int32_t __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(int32_t value) ;

constexpr int32_t __get_value() const;


// Properties

 char16_t __declspec(property(get=get_Item))  Item;


// Methods

/// @brief Method get_Item addr 0x24389ac size 0x2c virtual false final false
 char16_t get_Item(int32_t relativeIndex) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE(System::DTSubString, "System", "DTSubString");
