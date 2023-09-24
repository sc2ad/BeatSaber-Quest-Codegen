#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
struct JsonContractType;
}
// Type: Newtonsoft.Json.Serialization::JsonContractType
namespace Newtonsoft::Json::Serialization {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11878))
// CS Name: Newtonsoft.Json.Serialization.JsonContractType
struct CORDL_TYPE JsonContractType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr JsonContractType(int32_t value__) noexcept;


                    constexpr JsonContractType(JsonContractType const&) = default;
                    constexpr JsonContractType(JsonContractType&&) = default;
                    constexpr JsonContractType& operator=(JsonContractType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr JsonContractType& operator=(JsonContractType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit JsonContractType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __JsonContractType_Unwrapped : int32_t {
__None = 0,
__Object = 1,
__Array = 2,
__Primitive = 3,
__String = 4,
__Dictionary = 5,
__Dynamic = 6,
__Serializable = 7,
__Linq = 8,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __JsonContractType_Unwrapped () const noexcept {
return std::bit_cast<__JsonContractType_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static Newtonsoft::Json::Serialization::JsonContractType const None;

/// @brief Field Object offset 0
static Newtonsoft::Json::Serialization::JsonContractType const Object;

/// @brief Field Array offset 0
static Newtonsoft::Json::Serialization::JsonContractType const Array;

/// @brief Field Primitive offset 0
static Newtonsoft::Json::Serialization::JsonContractType const Primitive;

/// @brief Field String offset 0
static Newtonsoft::Json::Serialization::JsonContractType const String;

/// @brief Field Dictionary offset 0
static Newtonsoft::Json::Serialization::JsonContractType const Dictionary;

/// @brief Field Dynamic offset 0
static Newtonsoft::Json::Serialization::JsonContractType const Dynamic;

/// @brief Field Serializable offset 0
static Newtonsoft::Json::Serialization::JsonContractType const Serializable;

/// @brief Field Linq offset 0
static Newtonsoft::Json::Serialization::JsonContractType const Linq;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Serialization
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Serialization::JsonContractType, "Newtonsoft.Json.Serialization", "JsonContractType");
