#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System {
struct TypeNameKind;
}
// Type: System::TypeNameKind
namespace System {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2563))
// CS Name: System.TypeNameKind
struct CORDL_TYPE TypeNameKind : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TypeNameKind(int32_t value__) noexcept;


                    constexpr TypeNameKind(TypeNameKind const&) = default;
                    constexpr TypeNameKind(TypeNameKind&&) = default;
                    constexpr TypeNameKind& operator=(TypeNameKind const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TypeNameKind& operator=(TypeNameKind&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TypeNameKind(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __TypeNameKind_Unwrapped : int32_t {
__Name = 0,
__ToString = 1,
__SerializationName = 2,
__FullName = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TypeNameKind_Unwrapped () const noexcept {
return std::bit_cast<__TypeNameKind_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Name offset 0
static System::TypeNameKind const Name;

/// @brief Field ToString offset 0
static System::TypeNameKind const ToString;

/// @brief Field SerializationName offset 0
static System::TypeNameKind const SerializationName;

/// @brief Field FullName offset 0
static System::TypeNameKind const FullName;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE(System::TypeNameKind, "System", "TypeNameKind");
