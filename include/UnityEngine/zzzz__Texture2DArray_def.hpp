#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
#include <cstdint>
namespace UnityEngine::Experimental::Rendering {
struct TextureCreationFlags;
}
namespace UnityEngine::Experimental::Rendering {
struct DefaultFormat;
}
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
namespace UnityEngine {
struct TextureFormat;
}
// Forward declare root types
namespace UnityEngine {
class Texture2DArray;
}
// Type: UnityEngine::Texture2DArray
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10013))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10018))
// CS Name: UnityEngine.Texture2DArray
class CORDL_TYPE Texture2DArray : public UnityEngine::Texture {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Texture2DArray() = default;

// Ctor Parameters [CppParam { name: "", ty: "Texture2DArray", modifiers: " const&", def_value: None }]
constexpr Texture2DArray(Texture2DArray const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Texture2DArray", modifiers: "&&", def_value: None }]
constexpr Texture2DArray(Texture2DArray&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Texture2DArray(void* ptr) noexcept : UnityEngine::Texture(ptr) {
}


  constexpr Texture2DArray& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Texture2DArray& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Texture2DArray& operator=(Texture2DArray&& o) noexcept = default;
  constexpr Texture2DArray& operator=(Texture2DArray const& o) noexcept = default;
                


// Properties

static int32_t __declspec(property(get=get_allSlices))  allSlices;

 bool __declspec(property(get=get_isReadable))  isReadable;


// Methods

/// @brief Method get_allSlices addr 0x2b3bc30 size 0x28 virtual false final false
static int32_t get_allSlices() ;

/// @brief Method get_isReadable addr 0x2b3bc58 size 0x3c virtual true final false
 bool get_isReadable() ;

/// @brief Method Internal_CreateImpl addr 0x2b3bc94 size 0x84 virtual false final false
static bool Internal_CreateImpl(UnityEngine::Texture2DArray mono, int32_t w, int32_t h, int32_t d, int32_t mipCount, UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine::Experimental::Rendering::TextureCreationFlags flags) ;

/// @brief Method Internal_Create addr 0x2b3bd18 size 0xd8 virtual false final false
static void Internal_Create(UnityEngine::Texture2DArray mono, int32_t w, int32_t h, int32_t d, int32_t mipCount, UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine::Experimental::Rendering::TextureCreationFlags flags) ;

/// @brief Method ValidateFormat addr 0x2b3bdf0 size 0xe8 virtual false final false
 bool ValidateFormat(UnityEngine::TextureFormat format, int32_t width, int32_t height) ;

/// @brief Method ValidateFormat addr 0x2b3bed8 size 0x134 virtual false final false
 bool ValidateFormat(UnityEngine::Experimental::Rendering::GraphicsFormat format, int32_t width, int32_t height) ;

// Ctor Parameters [CppParam { name: "width", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "height", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "depth", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "format", ty: "UnityEngine::Experimental::Rendering::DefaultFormat", modifiers: "", def_value: None }, CppParam { name: "flags", ty: "UnityEngine::Experimental::Rendering::TextureCreationFlags", modifiers: "", def_value: None }]
explicit Texture2DArray(int32_t width, int32_t height, int32_t depth, UnityEngine::Experimental::Rendering::DefaultFormat format, UnityEngine::Experimental::Rendering::TextureCreationFlags flags) ;

/// @brief Method .ctor addr 0x2b3c00c size 0x54 virtual false final false
 void _ctor(int32_t width, int32_t height, int32_t depth, UnityEngine::Experimental::Rendering::DefaultFormat format, UnityEngine::Experimental::Rendering::TextureCreationFlags flags) ;

// Ctor Parameters [CppParam { name: "width", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "height", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "depth", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "format", ty: "UnityEngine::Experimental::Rendering::GraphicsFormat", modifiers: "", def_value: None }, CppParam { name: "flags", ty: "UnityEngine::Experimental::Rendering::TextureCreationFlags", modifiers: "", def_value: None }]
explicit Texture2DArray(int32_t width, int32_t height, int32_t depth, UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine::Experimental::Rendering::TextureCreationFlags flags) ;

/// @brief Method .ctor addr 0x2b3c060 size 0xa0 virtual false final false
 void _ctor(int32_t width, int32_t height, int32_t depth, UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine::Experimental::Rendering::TextureCreationFlags flags) ;

// Ctor Parameters [CppParam { name: "width", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "height", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "depth", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "format", ty: "UnityEngine::Experimental::Rendering::GraphicsFormat", modifiers: "", def_value: None }, CppParam { name: "flags", ty: "UnityEngine::Experimental::Rendering::TextureCreationFlags", modifiers: "", def_value: None }, CppParam { name: "mipCount", ty: "int32_t", modifiers: "", def_value: None }]
explicit Texture2DArray(int32_t width, int32_t height, int32_t depth, UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine::Experimental::Rendering::TextureCreationFlags flags, int32_t mipCount) ;

/// @brief Method .ctor addr 0x2b3c100 size 0xdc virtual false final false
 void _ctor(int32_t width, int32_t height, int32_t depth, UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine::Experimental::Rendering::TextureCreationFlags flags, int32_t mipCount) ;

// Ctor Parameters [CppParam { name: "width", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "height", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "depth", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "textureFormat", ty: "UnityEngine::TextureFormat", modifiers: "", def_value: None }, CppParam { name: "mipCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "linear", ty: "bool", modifiers: "", def_value: None }]
explicit Texture2DArray(int32_t width, int32_t height, int32_t depth, UnityEngine::TextureFormat textureFormat, int32_t mipCount, bool linear) ;

/// @brief Method .ctor addr 0x2b3c234 size 0x148 virtual false final false
 void _ctor(int32_t width, int32_t height, int32_t depth, UnityEngine::TextureFormat textureFormat, int32_t mipCount, bool linear) ;

// Ctor Parameters [CppParam { name: "width", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "height", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "depth", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "textureFormat", ty: "UnityEngine::TextureFormat", modifiers: "", def_value: None }, CppParam { name: "mipChain", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "linear", ty: "bool", modifiers: "", def_value: None }]
explicit Texture2DArray(int32_t width, int32_t height, int32_t depth, UnityEngine::TextureFormat textureFormat, bool mipChain, bool linear) ;

/// @brief Method .ctor addr 0x2b3c37c size 0x14 virtual false final false
 void _ctor(int32_t width, int32_t height, int32_t depth, UnityEngine::TextureFormat textureFormat, bool mipChain, bool linear) ;

// Ctor Parameters [CppParam { name: "width", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "height", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "depth", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "textureFormat", ty: "UnityEngine::TextureFormat", modifiers: "", def_value: None }, CppParam { name: "mipChain", ty: "bool", modifiers: "", def_value: None }]
explicit Texture2DArray(int32_t width, int32_t height, int32_t depth, UnityEngine::TextureFormat textureFormat, bool mipChain) ;

/// @brief Method .ctor addr 0x2b3c390 size 0x14 virtual false final false
 void _ctor(int32_t width, int32_t height, int32_t depth, UnityEngine::TextureFormat textureFormat, bool mipChain) ;

/// @brief Method ValidateIsNotCrunched addr 0x2b3c1dc size 0x58 virtual false final false
static void ValidateIsNotCrunched(UnityEngine::Experimental::Rendering::TextureCreationFlags flags) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::Texture2DArray);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Texture2DArray, "UnityEngine", "Texture2DArray");
