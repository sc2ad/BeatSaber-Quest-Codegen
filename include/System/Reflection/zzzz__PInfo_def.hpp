#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Reflection {
struct PInfo;
}
// Type: System.Reflection::PInfo
namespace System::Reflection {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3520))
// CS Name: System.Reflection.PInfo
struct CORDL_TYPE PInfo : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PInfo(int32_t value__) noexcept;


                    constexpr PInfo(PInfo const&) = default;
                    constexpr PInfo(PInfo&&) = default;
                    constexpr PInfo& operator=(PInfo const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr PInfo& operator=(PInfo&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit PInfo(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __PInfo_Unwrapped : int32_t {
__Attributes = 1,
__GetMethod = 2,
__SetMethod = 4,
__ReflectedType = 8,
__DeclaringType = 16,
__Name = 32,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PInfo_Unwrapped () const noexcept {
return std::bit_cast<__PInfo_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Attributes offset 0
static System::Reflection::PInfo const Attributes;

/// @brief Field GetMethod offset 0
static System::Reflection::PInfo const GetMethod;

/// @brief Field SetMethod offset 0
static System::Reflection::PInfo const SetMethod;

/// @brief Field ReflectedType offset 0
static System::Reflection::PInfo const ReflectedType;

/// @brief Field DeclaringType offset 0
static System::Reflection::PInfo const DeclaringType;

/// @brief Field Name offset 0
static System::Reflection::PInfo const Name;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Reflection
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::PInfo, "System.Reflection", "PInfo");
