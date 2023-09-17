#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstddef>
namespace {
// Forward declare root types
namespace UnityEngineInternal {
struct MathfInternal;
}
// Type: UnityEngineInternal::MathfInternal
namespace UnityEngineInternal {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9906))
// CS Name: UnityEngineInternal.MathfInternal
struct CORDL_TYPE MathfInternal : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr MathfInternal(MathfInternal const&) = default;
                    constexpr MathfInternal(MathfInternal&&) = default;
                    constexpr MathfInternal& operator=(MathfInternal const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr MathfInternal& operator=(MathfInternal&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit MathfInternal(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

static float_t __declspec(property(get=__get_FloatMinNormal, put=__set_FloatMinNormal))  FloatMinNormal;

static void __set_FloatMinNormal(float_t value) ;

static float_t __get_FloatMinNormal() ;

static float_t __declspec(property(get=__get_FloatMinDenormal, put=__set_FloatMinDenormal))  FloatMinDenormal;

static void __set_FloatMinDenormal(float_t value) ;

static float_t __get_FloatMinDenormal() ;

static bool __declspec(property(get=__get_IsFlushToZeroEnabled, put=__set_IsFlushToZeroEnabled))  IsFlushToZeroEnabled;

static void __set_IsFlushToZeroEnabled(bool value) ;

static bool __get_IsFlushToZeroEnabled() ;


// Methods

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngineInternal
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngineInternal::MathfInternal, "UnityEngineInternal", "MathfInternal");
