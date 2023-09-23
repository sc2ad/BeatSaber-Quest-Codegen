#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstddef>
namespace HoudiniEngineUnity {
struct HAPI_VolumeVisualType;
}
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_VolumeVisualInfo;
}
// Type: HoudiniEngineUnity::HAPI_VolumeVisualInfo
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9689))
// CS Name: HoudiniEngineUnity.HAPI_VolumeVisualInfo
struct CORDL_TYPE HAPI_VolumeVisualInfo : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "type", ty: "HoudiniEngineUnity::HAPI_VolumeVisualType", modifiers: "", def_value: None }, CppParam { name: "iso", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "density", ty: "float_t", modifiers: "", def_value: None }]
constexpr HAPI_VolumeVisualInfo(HoudiniEngineUnity::HAPI_VolumeVisualType type, float_t iso, float_t density) noexcept;


                    constexpr HAPI_VolumeVisualInfo(HAPI_VolumeVisualInfo const&) = default;
                    constexpr HAPI_VolumeVisualInfo(HAPI_VolumeVisualInfo&&) = default;
                    constexpr HAPI_VolumeVisualInfo& operator=(HAPI_VolumeVisualInfo const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HAPI_VolumeVisualInfo& operator=(HAPI_VolumeVisualInfo&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0xc};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HAPI_VolumeVisualInfo(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 HoudiniEngineUnity::HAPI_VolumeVisualType __declspec(property(get=__get_type, put=__set_type))  type;

constexpr void __set_type(HoudiniEngineUnity::HAPI_VolumeVisualType value) ;

constexpr HoudiniEngineUnity::HAPI_VolumeVisualType __get_type() const;

 float_t __declspec(property(get=__get_iso, put=__set_iso))  iso;

constexpr void __set_iso(float_t value) ;

constexpr float_t __get_iso() const;

 float_t __declspec(property(get=__get_density, put=__set_density))  density;

constexpr void __set_density(float_t value) ;

constexpr float_t __get_density() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HAPI_VolumeVisualInfo, "HoudiniEngineUnity", "HAPI_VolumeVisualInfo");
