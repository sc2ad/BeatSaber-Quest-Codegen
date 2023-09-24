#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_XYZOrder;
}
// Type: HoudiniEngineUnity::HAPI_XYZOrder
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9656))
// CS Name: HoudiniEngineUnity.HAPI_XYZOrder
struct CORDL_TYPE HAPI_XYZOrder : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HAPI_XYZOrder(int32_t value__) noexcept;


                    constexpr HAPI_XYZOrder(HAPI_XYZOrder const&) = default;
                    constexpr HAPI_XYZOrder(HAPI_XYZOrder&&) = default;
                    constexpr HAPI_XYZOrder& operator=(HAPI_XYZOrder const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HAPI_XYZOrder& operator=(HAPI_XYZOrder&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HAPI_XYZOrder(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __HAPI_XYZOrder_Unwrapped : int32_t {
__HAPI_XYZ = 0,
__HAPI_XZY = 1,
__HAPI_YXZ = 2,
__HAPI_YZX = 3,
__HAPI_ZXY = 4,
__HAPI_ZYX = 5,
__HAPI_XYZORDER_DEFAULT = 0,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HAPI_XYZOrder_Unwrapped () const noexcept {
return std::bit_cast<__HAPI_XYZOrder_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field HAPI_XYZ offset 0
static HoudiniEngineUnity::HAPI_XYZOrder const HAPI_XYZ;

/// @brief Field HAPI_XZY offset 0
static HoudiniEngineUnity::HAPI_XYZOrder const HAPI_XZY;

/// @brief Field HAPI_YXZ offset 0
static HoudiniEngineUnity::HAPI_XYZOrder const HAPI_YXZ;

/// @brief Field HAPI_YZX offset 0
static HoudiniEngineUnity::HAPI_XYZOrder const HAPI_YZX;

/// @brief Field HAPI_ZXY offset 0
static HoudiniEngineUnity::HAPI_XYZOrder const HAPI_ZXY;

/// @brief Field HAPI_ZYX offset 0
static HoudiniEngineUnity::HAPI_XYZOrder const HAPI_ZYX;

/// @brief Field HAPI_XYZORDER_DEFAULT offset 0
static HoudiniEngineUnity::HAPI_XYZOrder const HAPI_XYZORDER_DEFAULT;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HAPI_XYZOrder, "HoudiniEngineUnity", "HAPI_XYZOrder");
