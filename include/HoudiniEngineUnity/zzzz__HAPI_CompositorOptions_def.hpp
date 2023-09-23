#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_CompositorOptions;
}
// Type: HoudiniEngineUnity::HAPI_CompositorOptions
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9698))
// CS Name: HoudiniEngineUnity.HAPI_CompositorOptions
struct CORDL_TYPE HAPI_CompositorOptions : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "maximumResolutionX", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "maximumResolutionY", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HAPI_CompositorOptions(int32_t maximumResolutionX, int32_t maximumResolutionY) noexcept;


                    constexpr HAPI_CompositorOptions(HAPI_CompositorOptions const&) = default;
                    constexpr HAPI_CompositorOptions(HAPI_CompositorOptions&&) = default;
                    constexpr HAPI_CompositorOptions& operator=(HAPI_CompositorOptions const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HAPI_CompositorOptions& operator=(HAPI_CompositorOptions&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HAPI_CompositorOptions(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_maximumResolutionX, put=__set_maximumResolutionX))  maximumResolutionX;

constexpr void __set_maximumResolutionX(int32_t value) ;

constexpr int32_t __get_maximumResolutionX() const;

 int32_t __declspec(property(get=__get_maximumResolutionY, put=__set_maximumResolutionY))  maximumResolutionY;

constexpr void __set_maximumResolutionY(int32_t value) ;

constexpr int32_t __get_maximumResolutionY() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HAPI_CompositorOptions, "HoudiniEngineUnity", "HAPI_CompositorOptions");
