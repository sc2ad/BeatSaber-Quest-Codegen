#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
#include <cstdint>
namespace {
namespace UnityEngine {
struct TextureFormat;
}
namespace UnityEngine::Experimental::Rendering {
struct DefaultFormat;
}
namespace UnityEngine::Experimental::Rendering {
struct TextureCreationFlags;
}
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
// Forward declare root types
namespace UnityEngine {
class CubemapArray;
}
// Type: UnityEngine::CubemapArray
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10013))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10019))
// CS Name: UnityEngine.CubemapArray
class CORDL_TYPE CubemapArray : public ::UnityEngine::Texture {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~CubemapArray() = default;

// Ctor Parameters [CppParam { name: "", ty: "CubemapArray", modifiers: " const&", def_value: None }]
constexpr CubemapArray(CubemapArray const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CubemapArray", modifiers: "&&", def_value: None }]
constexpr CubemapArray(CubemapArray&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CubemapArray(void* ptr) noexcept : ::UnityEngine::Texture(ptr) {
}


  constexpr CubemapArray& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CubemapArray& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CubemapArray& operator=(CubemapArray&& o) noexcept = default;
  constexpr CubemapArray& operator=(CubemapArray const& o) noexcept = default;
                


// Properties

 bool __declspec(property(get=get_isReadable))  isReadable;


// Methods

/// @brief Method get_isReadable addr 0x2b3c3a4 size 0x3c virtual true final false
 bool get_isReadable() ;

/// @brief Method Internal_CreateImpl addr 0x2b3c3e0 size 0x74 virtual false final false
static bool Internal_CreateImpl(::UnityEngine::CubemapArray mono, int32_t ext, int32_t count, int32_t mipCount, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags) ;

/// @brief Method Internal_Create addr 0x2b3c454 size 0xc8 virtual false final false
static void Internal_Create(::UnityEngine::CubemapArray mono, int32_t ext, int32_t count, int32_t mipCount, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags) ;

// Ctor Parameters [CppParam { name: "width", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "cubemapCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "format", ty: "::UnityEngine::Experimental::Rendering::DefaultFormat", modifiers: "", def_value: None }, CppParam { name: "flags", ty: "::UnityEngine::Experimental::Rendering::TextureCreationFlags", modifiers: "", def_value: None }]
explicit CubemapArray(int32_t width, int32_t cubemapCount, ::UnityEngine::Experimental::Rendering::DefaultFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags) ;

/// @brief Method .ctor addr 0x2b3c51c size 0x4c virtual false final false
 void _ctor(int32_t width, int32_t cubemapCount, ::UnityEngine::Experimental::Rendering::DefaultFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags) ;

// Ctor Parameters [CppParam { name: "width", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "cubemapCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "format", ty: "::UnityEngine::Experimental::Rendering::GraphicsFormat", modifiers: "", def_value: None }, CppParam { name: "flags", ty: "::UnityEngine::Experimental::Rendering::TextureCreationFlags", modifiers: "", def_value: None }]
explicit CubemapArray(int32_t width, int32_t cubemapCount, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags) ;

/// @brief Method .ctor addr 0x2b3c568 size 0x90 virtual false final false
 void _ctor(int32_t width, int32_t cubemapCount, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags) ;

// Ctor Parameters [CppParam { name: "width", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "cubemapCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "format", ty: "::UnityEngine::Experimental::Rendering::GraphicsFormat", modifiers: "", def_value: None }, CppParam { name: "flags", ty: "::UnityEngine::Experimental::Rendering::TextureCreationFlags", modifiers: "", def_value: None }, CppParam { name: "mipCount", ty: "int32_t", modifiers: "", def_value: None }]
explicit CubemapArray(int32_t width, int32_t cubemapCount, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags, int32_t mipCount) ;

/// @brief Method .ctor addr 0x2b3c5f8 size 0xd0 virtual false final false
 void _ctor(int32_t width, int32_t cubemapCount, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags, int32_t mipCount) ;

// Ctor Parameters [CppParam { name: "width", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "cubemapCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "textureFormat", ty: "::UnityEngine::TextureFormat", modifiers: "", def_value: None }, CppParam { name: "mipCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "linear", ty: "bool", modifiers: "", def_value: None }]
explicit CubemapArray(int32_t width, int32_t cubemapCount, ::UnityEngine::TextureFormat textureFormat, int32_t mipCount, bool linear) ;

/// @brief Method .ctor addr 0x2b3c720 size 0x138 virtual false final false
 void _ctor(int32_t width, int32_t cubemapCount, ::UnityEngine::TextureFormat textureFormat, int32_t mipCount, bool linear) ;

// Ctor Parameters [CppParam { name: "width", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "cubemapCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "textureFormat", ty: "::UnityEngine::TextureFormat", modifiers: "", def_value: None }, CppParam { name: "mipChain", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "linear", ty: "bool", modifiers: "", def_value: None }]
explicit CubemapArray(int32_t width, int32_t cubemapCount, ::UnityEngine::TextureFormat textureFormat, bool mipChain, bool linear) ;

/// @brief Method .ctor addr 0x2b3c858 size 0x14 virtual false final false
 void _ctor(int32_t width, int32_t cubemapCount, ::UnityEngine::TextureFormat textureFormat, bool mipChain, bool linear) ;

// Ctor Parameters [CppParam { name: "width", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "cubemapCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "textureFormat", ty: "::UnityEngine::TextureFormat", modifiers: "", def_value: None }, CppParam { name: "mipChain", ty: "bool", modifiers: "", def_value: None }]
explicit CubemapArray(int32_t width, int32_t cubemapCount, ::UnityEngine::TextureFormat textureFormat, bool mipChain) ;

/// @brief Method .ctor addr 0x2b3c86c size 0x14 virtual false final false
 void _ctor(int32_t width, int32_t cubemapCount, ::UnityEngine::TextureFormat textureFormat, bool mipChain) ;

/// @brief Method ValidateIsNotCrunched addr 0x2b3c6c8 size 0x58 virtual false final false
static void ValidateIsNotCrunched(::UnityEngine::Experimental::Rendering::TextureCreationFlags flags) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::CubemapArray);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::CubemapArray, "UnityEngine", "CubemapArray");
