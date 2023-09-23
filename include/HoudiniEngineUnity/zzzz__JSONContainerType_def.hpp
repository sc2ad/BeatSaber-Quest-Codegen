#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace HoudiniEngineUnity {
struct JSONContainerType;
}
// Type: HoudiniEngineUnity::JSONContainerType
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9822))
// CS Name: HoudiniEngineUnity.JSONContainerType
struct CORDL_TYPE JSONContainerType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr JSONContainerType(int32_t value__) noexcept;


                    constexpr JSONContainerType(JSONContainerType const&) = default;
                    constexpr JSONContainerType(JSONContainerType&&) = default;
                    constexpr JSONContainerType& operator=(JSONContainerType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr JSONContainerType& operator=(JSONContainerType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit JSONContainerType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __JSONContainerType_Unwrapped : int32_t {
__Array = 0,
__Object = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __JSONContainerType_Unwrapped () const noexcept {
return std::bit_cast<__JSONContainerType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Array offset 0
static HoudiniEngineUnity::JSONContainerType const Array;

/// @brief Field Object offset 0
static HoudiniEngineUnity::JSONContainerType const Object;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::JSONContainerType, "HoudiniEngineUnity", "JSONContainerType");
