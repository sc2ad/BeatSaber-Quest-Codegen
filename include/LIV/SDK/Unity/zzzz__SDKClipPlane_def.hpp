#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace LIV::SDK::Unity {
struct SDKMatrix4x4;
}
// Forward declare root types
namespace LIV::SDK::Unity {
struct SDKClipPlane;
}
// Type: LIV.SDK.Unity::SDKClipPlane
namespace LIV::SDK::Unity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15168))
// CS Name: LIV.SDK.Unity.SDKClipPlane
struct CORDL_TYPE SDKClipPlane : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "transform", ty: "LIV::SDK::Unity::SDKMatrix4x4", modifiers: "", def_value: None }, CppParam { name: "width", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "height", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "tesselation", ty: "float_t", modifiers: "", def_value: None }]
constexpr SDKClipPlane(LIV::SDK::Unity::SDKMatrix4x4 transform, int32_t width, int32_t height, float_t tesselation) noexcept;


                    constexpr SDKClipPlane(SDKClipPlane const&) = default;
                    constexpr SDKClipPlane(SDKClipPlane&&) = default;
                    constexpr SDKClipPlane& operator=(SDKClipPlane const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr SDKClipPlane& operator=(SDKClipPlane&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4c};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit SDKClipPlane(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 LIV::SDK::Unity::SDKMatrix4x4 __declspec(property(get=__get_transform, put=__set_transform))  transform;

constexpr void __set_transform(LIV::SDK::Unity::SDKMatrix4x4 value) ;

constexpr LIV::SDK::Unity::SDKMatrix4x4 __get_transform() const;

 int32_t __declspec(property(get=__get_width, put=__set_width))  width;

constexpr void __set_width(int32_t value) ;

constexpr int32_t __get_width() const;

 int32_t __declspec(property(get=__get_height, put=__set_height))  height;

constexpr void __set_height(int32_t value) ;

constexpr int32_t __get_height() const;

 float_t __declspec(property(get=__get_tesselation, put=__set_tesselation))  tesselation;

constexpr void __set_tesselation(float_t value) ;

constexpr float_t __get_tesselation() const;


// Properties

static LIV::SDK::Unity::SDKClipPlane __declspec(property(get=get_empty))  empty;


// Methods

/// @brief Method get_empty addr 0x20a29b4 size 0x34 virtual false final false
static LIV::SDK::Unity::SDKClipPlane get_empty() ;

/// @brief Method ToString addr 0x20a3528 size 0x1dc virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def LIV::SDK::Unity
DEFINE_IL2CPP_ARG_TYPE(LIV::SDK::Unity::SDKClipPlane, "LIV.SDK.Unity", "SDKClipPlane");
