#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
namespace {
namespace LIV::SDK::Unity {
struct SDKVector3;
}
namespace UnityEngine {
struct Plane;
}
// Forward declare root types
namespace LIV::SDK::Unity {
struct SDKPlane;
}
// Type: LIV.SDK.Unity::SDKPlane
namespace LIV::SDK::Unity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15160))
// CS Name: LIV.SDK.Unity.SDKPlane
struct CORDL_TYPE SDKPlane : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "distance", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "normal", ty: "::LIV::SDK::Unity::SDKVector3", modifiers: "", def_value: None }]
constexpr SDKPlane(float_t distance, ::LIV::SDK::Unity::SDKVector3 normal) noexcept;


                    constexpr SDKPlane(SDKPlane const&) = default;
                    constexpr SDKPlane(SDKPlane&&) = default;
                    constexpr SDKPlane& operator=(SDKPlane const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr SDKPlane& operator=(SDKPlane&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit SDKPlane(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 float_t __declspec(property(get=__get_distance, put=__set_distance))  distance;

constexpr void __set_distance(float_t value) ;

constexpr float_t __get_distance() const;

 ::LIV::SDK::Unity::SDKVector3 __declspec(property(get=__get_normal, put=__set_normal))  normal;

constexpr void __set_normal(::LIV::SDK::Unity::SDKVector3 value) ;

constexpr ::LIV::SDK::Unity::SDKVector3 __get_normal() const;


// Properties

static ::LIV::SDK::Unity::SDKPlane __declspec(property(get=get_empty))  empty;


// Methods

/// @brief Method op_Implicit addr 0x20a23c4 size 0x5c virtual false final false
static ::LIV::SDK::Unity::SDKPlane op_Implicit___LIV__SDK__Unity__SDKPlane(::UnityEngine::Plane v) ;

/// @brief Method get_empty addr 0x20a2420 size 0x14 virtual false final false
static ::LIV::SDK::Unity::SDKPlane get_empty() ;

/// @brief Method ToString addr 0x20a2434 size 0xc4 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def LIV::SDK::Unity
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::LIV::SDK::Unity::SDKPlane, "LIV.SDK.Unity", "SDKPlane");
