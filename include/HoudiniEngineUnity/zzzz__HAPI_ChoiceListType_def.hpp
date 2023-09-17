#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_ChoiceListType;
}
// Type: HoudiniEngineUnity::HAPI_ChoiceListType
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9639))
// CS Name: HoudiniEngineUnity.HAPI_ChoiceListType
struct CORDL_TYPE HAPI_ChoiceListType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HAPI_ChoiceListType(int32_t value__) noexcept;


                    constexpr HAPI_ChoiceListType(HAPI_ChoiceListType const&) = default;
                    constexpr HAPI_ChoiceListType(HAPI_ChoiceListType&&) = default;
                    constexpr HAPI_ChoiceListType& operator=(HAPI_ChoiceListType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HAPI_ChoiceListType& operator=(HAPI_ChoiceListType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HAPI_ChoiceListType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __HAPI_ChoiceListType_Unwrapped : int32_t {
__HAPI_CHOICELISTTYPE_NONE = 0,
__HAPI_CHOICELISTTYPE_NORMAL = 1,
__HAPI_CHOICELISTTYPE_MINI = 2,
__HAPI_CHOICELISTTYPE_REPLACE = 3,
__HAPI_CHOICELISTTYPE_TOGGLE = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HAPI_ChoiceListType_Unwrapped () const noexcept {
return std::bit_cast<__HAPI_ChoiceListType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field HAPI_CHOICELISTTYPE_NONE offset 0
static ::HoudiniEngineUnity::HAPI_ChoiceListType const HAPI_CHOICELISTTYPE_NONE;

/// @brief Field HAPI_CHOICELISTTYPE_NORMAL offset 0
static ::HoudiniEngineUnity::HAPI_ChoiceListType const HAPI_CHOICELISTTYPE_NORMAL;

/// @brief Field HAPI_CHOICELISTTYPE_MINI offset 0
static ::HoudiniEngineUnity::HAPI_ChoiceListType const HAPI_CHOICELISTTYPE_MINI;

/// @brief Field HAPI_CHOICELISTTYPE_REPLACE offset 0
static ::HoudiniEngineUnity::HAPI_ChoiceListType const HAPI_CHOICELISTTYPE_REPLACE;

/// @brief Field HAPI_CHOICELISTTYPE_TOGGLE offset 0
static ::HoudiniEngineUnity::HAPI_ChoiceListType const HAPI_CHOICELISTTYPE_TOGGLE;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_ChoiceListType, "HoudiniEngineUnity", "HAPI_ChoiceListType");
