#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstddef>
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_ThriftServerOptions;
}
// Type: HoudiniEngineUnity::HAPI_ThriftServerOptions
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9670))
// CS Name: HoudiniEngineUnity.HAPI_ThriftServerOptions
struct CORDL_TYPE HAPI_ThriftServerOptions : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "autoClose", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "timeoutMs", ty: "float_t", modifiers: "", def_value: None }]
constexpr HAPI_ThriftServerOptions(bool autoClose, float_t timeoutMs) noexcept;


                    constexpr HAPI_ThriftServerOptions(HAPI_ThriftServerOptions const&) = default;
                    constexpr HAPI_ThriftServerOptions(HAPI_ThriftServerOptions&&) = default;
                    constexpr HAPI_ThriftServerOptions& operator=(HAPI_ThriftServerOptions const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HAPI_ThriftServerOptions& operator=(HAPI_ThriftServerOptions&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HAPI_ThriftServerOptions(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 bool __declspec(property(get=__get_autoClose, put=__set_autoClose))  autoClose;

constexpr void __set_autoClose(bool value) ;

constexpr bool __get_autoClose() const;

 float_t __declspec(property(get=__get_timeoutMs, put=__set_timeoutMs))  timeoutMs;

constexpr void __set_timeoutMs(float_t value) ;

constexpr float_t __get_timeoutMs() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HAPI_ThriftServerOptions, "HoudiniEngineUnity", "HAPI_ThriftServerOptions");
