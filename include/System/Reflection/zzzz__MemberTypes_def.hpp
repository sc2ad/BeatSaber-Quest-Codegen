#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Reflection {
struct MemberTypes;
}
// Type: System.Reflection::MemberTypes
namespace System::Reflection {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3467))
// CS Name: System.Reflection.MemberTypes
struct CORDL_TYPE MemberTypes : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr MemberTypes(int32_t value__) noexcept;


                    constexpr MemberTypes(MemberTypes const&) = default;
                    constexpr MemberTypes(MemberTypes&&) = default;
                    constexpr MemberTypes& operator=(MemberTypes const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr MemberTypes& operator=(MemberTypes&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit MemberTypes(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __MemberTypes_Unwrapped : int32_t {
__Constructor = 1,
__Event = 2,
__Field = 4,
__Method = 8,
__Property = 16,
__TypeInfo = 32,
__Custom = 64,
__NestedType = 128,
__All = 191,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MemberTypes_Unwrapped () const noexcept {
return std::bit_cast<__MemberTypes_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Constructor offset 0
static System::Reflection::MemberTypes const Constructor;

/// @brief Field Event offset 0
static System::Reflection::MemberTypes const Event;

/// @brief Field Field offset 0
static System::Reflection::MemberTypes const Field;

/// @brief Field Method offset 0
static System::Reflection::MemberTypes const Method;

/// @brief Field Property offset 0
static System::Reflection::MemberTypes const Property;

/// @brief Field TypeInfo offset 0
static System::Reflection::MemberTypes const TypeInfo;

/// @brief Field Custom offset 0
static System::Reflection::MemberTypes const Custom;

/// @brief Field NestedType offset 0
static System::Reflection::MemberTypes const NestedType;

/// @brief Field All offset 0
static System::Reflection::MemberTypes const All;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Reflection
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::MemberTypes, "System.Reflection", "MemberTypes");
