#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace LIV::SDK::Unity {
struct TEXTURE_FORMAT;
}
namespace LIV::SDK::Unity {
struct TEXTURE_ID;
}
namespace LIV::SDK::Unity {
struct TEXTURE_DEVICE;
}
namespace LIV::SDK::Unity {
struct TEXTURE_TYPE;
}
namespace LIV::SDK::Unity {
struct TEXTURE_COLOR_SPACE;
}
// Forward declare root types
namespace LIV::SDK::Unity {
struct SDKTexture;
}
// Type: LIV.SDK.Unity::SDKTexture
namespace LIV::SDK::Unity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15166))
// CS Name: LIV.SDK.Unity.SDKTexture
struct CORDL_TYPE SDKTexture : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "id", ty: "LIV::SDK::Unity::TEXTURE_ID", modifiers: "", def_value: None }, CppParam { name: "texturePtr", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "SharedHandle", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "device", ty: "LIV::SDK::Unity::TEXTURE_DEVICE", modifiers: "", def_value: None }, CppParam { name: "dummy", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "type", ty: "LIV::SDK::Unity::TEXTURE_TYPE", modifiers: "", def_value: None }, CppParam { name: "format", ty: "LIV::SDK::Unity::TEXTURE_FORMAT", modifiers: "", def_value: None }, CppParam { name: "colorSpace", ty: "LIV::SDK::Unity::TEXTURE_COLOR_SPACE", modifiers: "", def_value: None }, CppParam { name: "width", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "height", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SDKTexture(LIV::SDK::Unity::TEXTURE_ID id, ::cordl_internals::intptr_t texturePtr, ::cordl_internals::intptr_t SharedHandle, LIV::SDK::Unity::TEXTURE_DEVICE device, int32_t dummy, LIV::SDK::Unity::TEXTURE_TYPE type, LIV::SDK::Unity::TEXTURE_FORMAT format, LIV::SDK::Unity::TEXTURE_COLOR_SPACE colorSpace, int32_t width, int32_t height) noexcept;


                    constexpr SDKTexture(SDKTexture const&) = default;
                    constexpr SDKTexture(SDKTexture&&) = default;
                    constexpr SDKTexture& operator=(SDKTexture const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr SDKTexture& operator=(SDKTexture&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x38};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit SDKTexture(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 LIV::SDK::Unity::TEXTURE_ID __declspec(property(get=__get_id, put=__set_id))  id;

constexpr void __set_id(LIV::SDK::Unity::TEXTURE_ID value) ;

constexpr LIV::SDK::Unity::TEXTURE_ID __get_id() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_texturePtr, put=__set_texturePtr))  texturePtr;

constexpr void __set_texturePtr(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_texturePtr() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_SharedHandle, put=__set_SharedHandle))  SharedHandle;

constexpr void __set_SharedHandle(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_SharedHandle() const;

 LIV::SDK::Unity::TEXTURE_DEVICE __declspec(property(get=__get_device, put=__set_device))  device;

constexpr void __set_device(LIV::SDK::Unity::TEXTURE_DEVICE value) ;

constexpr LIV::SDK::Unity::TEXTURE_DEVICE __get_device() const;

 int32_t __declspec(property(get=__get_dummy, put=__set_dummy))  dummy;

constexpr void __set_dummy(int32_t value) ;

constexpr int32_t __get_dummy() const;

 LIV::SDK::Unity::TEXTURE_TYPE __declspec(property(get=__get_type, put=__set_type))  type;

constexpr void __set_type(LIV::SDK::Unity::TEXTURE_TYPE value) ;

constexpr LIV::SDK::Unity::TEXTURE_TYPE __get_type() const;

 LIV::SDK::Unity::TEXTURE_FORMAT __declspec(property(get=__get_format, put=__set_format))  format;

constexpr void __set_format(LIV::SDK::Unity::TEXTURE_FORMAT value) ;

constexpr LIV::SDK::Unity::TEXTURE_FORMAT __get_format() const;

 LIV::SDK::Unity::TEXTURE_COLOR_SPACE __declspec(property(get=__get_colorSpace, put=__set_colorSpace))  colorSpace;

constexpr void __set_colorSpace(LIV::SDK::Unity::TEXTURE_COLOR_SPACE value) ;

constexpr LIV::SDK::Unity::TEXTURE_COLOR_SPACE __get_colorSpace() const;

 int32_t __declspec(property(get=__get_width, put=__set_width))  width;

constexpr void __set_width(int32_t value) ;

constexpr int32_t __get_width() const;

 int32_t __declspec(property(get=__get_height, put=__set_height))  height;

constexpr void __set_height(int32_t value) ;

constexpr int32_t __get_height() const;


// Properties

static LIV::SDK::Unity::SDKTexture __declspec(property(get=get_empty))  empty;


// Methods

/// @brief Method get_empty addr 0x209cdc4 size 0x5c virtual false final false
static LIV::SDK::Unity::SDKTexture get_empty() ;

/// @brief Method ToString addr 0x20a309c size 0x3a4 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def LIV::SDK::Unity
DEFINE_IL2CPP_ARG_TYPE(LIV::SDK::Unity::SDKTexture, "LIV.SDK.Unity", "SDKTexture");
