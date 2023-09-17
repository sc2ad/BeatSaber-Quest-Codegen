#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine {
struct TextureFormat;
}
namespace GlobalNamespace {
struct OVRTextureFormat;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRTextureData;
}
// Type: ::OVRTextureData
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8484))
// CS Name: OVRTextureData
struct CORDL_TYPE OVRTextureData : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "data", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "width", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "height", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "format", ty: "::GlobalNamespace::OVRTextureFormat", modifiers: "", def_value: None }, CppParam { name: "transcodedFormat", ty: "::UnityEngine::TextureFormat", modifiers: "", def_value: None }]
constexpr OVRTextureData(::ArrayW<uint8_t> data, int32_t width, int32_t height, ::GlobalNamespace::OVRTextureFormat format, ::UnityEngine::TextureFormat transcodedFormat) noexcept;


                    constexpr OVRTextureData(OVRTextureData const&) = default;
                    constexpr OVRTextureData(OVRTextureData&&) = default;
                    constexpr OVRTextureData& operator=(OVRTextureData const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr OVRTextureData& operator=(OVRTextureData&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit OVRTextureData(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ArrayW<uint8_t> __declspec(property(get=__get_data, put=__set_data))  data;

constexpr void __set_data(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_data() const;

 int32_t __declspec(property(get=__get_width, put=__set_width))  width;

constexpr void __set_width(int32_t value) ;

constexpr int32_t __get_width() const;

 int32_t __declspec(property(get=__get_height, put=__set_height))  height;

constexpr void __set_height(int32_t value) ;

constexpr int32_t __get_height() const;

 ::GlobalNamespace::OVRTextureFormat __declspec(property(get=__get_format, put=__set_format))  format;

constexpr void __set_format(::GlobalNamespace::OVRTextureFormat value) ;

constexpr ::GlobalNamespace::OVRTextureFormat __get_format() const;

 ::UnityEngine::TextureFormat __declspec(property(get=__get_transcodedFormat, put=__set_transcodedFormat))  transcodedFormat;

constexpr void __set_transcodedFormat(::UnityEngine::TextureFormat value) ;

constexpr ::UnityEngine::TextureFormat __get_transcodedFormat() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRTextureData, "", "OVRTextureData");
