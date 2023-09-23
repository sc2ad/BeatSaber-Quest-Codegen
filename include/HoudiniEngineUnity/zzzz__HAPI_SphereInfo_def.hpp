#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_SphereInfo;
}
// Type: HoudiniEngineUnity::HAPI_SphereInfo
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9692))
// CS Name: HoudiniEngineUnity.HAPI_SphereInfo
struct CORDL_TYPE HAPI_SphereInfo : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "center", ty: "::ArrayW<float_t>", modifiers: "", def_value: None }, CppParam { name: "radius", ty: "float_t", modifiers: "", def_value: None }]
constexpr HAPI_SphereInfo(::ArrayW<float_t> center, float_t radius) noexcept;


                    constexpr HAPI_SphereInfo(HAPI_SphereInfo const&) = default;
                    constexpr HAPI_SphereInfo(HAPI_SphereInfo&&) = default;
                    constexpr HAPI_SphereInfo& operator=(HAPI_SphereInfo const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HAPI_SphereInfo& operator=(HAPI_SphereInfo&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HAPI_SphereInfo(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ArrayW<float_t> __declspec(property(get=__get_center, put=__set_center))  center;

constexpr void __set_center(::ArrayW<float_t> value) ;

constexpr ::ArrayW<float_t> __get_center() const;

 float_t __declspec(property(get=__get_radius, put=__set_radius))  radius;

constexpr void __set_radius(float_t value) ;

constexpr float_t __get_radius() const;


// Methods

/// @brief Method .ctor addr 0x201f69c size 0x54 virtual false final false
 void _ctor(bool initialize_fields) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HAPI_SphereInfo, "HoudiniEngineUnity", "HAPI_SphereInfo");
