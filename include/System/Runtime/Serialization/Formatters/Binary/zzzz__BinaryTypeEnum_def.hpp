#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
struct BinaryTypeEnum;
}
// Type: System.Runtime.Serialization.Formatters.Binary::BinaryTypeEnum
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3240))
// CS Name: System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum
struct CORDL_TYPE BinaryTypeEnum : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr BinaryTypeEnum(int32_t value__) noexcept;


                    constexpr BinaryTypeEnum(BinaryTypeEnum const&) = default;
                    constexpr BinaryTypeEnum(BinaryTypeEnum&&) = default;
                    constexpr BinaryTypeEnum& operator=(BinaryTypeEnum const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr BinaryTypeEnum& operator=(BinaryTypeEnum&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit BinaryTypeEnum(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __BinaryTypeEnum_Unwrapped : int32_t {
__Primitive = 0,
__String = 1,
__Object = 2,
__ObjectUrt = 3,
__ObjectUser = 4,
__ObjectArray = 5,
__StringArray = 6,
__PrimitiveArray = 7,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BinaryTypeEnum_Unwrapped () const noexcept {
return std::bit_cast<__BinaryTypeEnum_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Primitive offset 0
static ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum const Primitive;

/// @brief Field String offset 0
static ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum const String;

/// @brief Field Object offset 0
static ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum const Object;

/// @brief Field ObjectUrt offset 0
static ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum const ObjectUrt;

/// @brief Field ObjectUser offset 0
static ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum const ObjectUser;

/// @brief Field ObjectArray offset 0
static ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum const ObjectArray;

/// @brief Field StringArray offset 0
static ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum const StringArray;

/// @brief Field PrimitiveArray offset 0
static ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum const PrimitiveArray;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::Serialization::Formatters::Binary
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum, "System.Runtime.Serialization.Formatters.Binary", "BinaryTypeEnum");
