#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__BaseShaderInfoStorage_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
namespace UnityEngine::UIElements {
class UIRAtlasAllocator;
}
namespace UnityEngine {
struct RectInt;
}
namespace UnityEngine {
struct TextureFormat;
}
namespace UnityEngine {
struct Color32;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
struct Color;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
template<typename T>
class ShaderInfoStorage_1;
}
namespace UnityEngine::UIElements::UIR {
template<>
class ShaderInfoStorage_1<UnityEngine::Color32>;
}
namespace UnityEngine::UIElements::UIR {
template<>
class ShaderInfoStorage_1<UnityEngine::Color>;
}
// Type: UnityEngine.UIElements.UIR::ShaderInfoStorage`1
// Type: UnityEngine.UIElements.UIR::ShaderInfoStorage`1
namespace UnityEngine::UIElements::UIR {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7481)), TypeDefinitionIndex(TypeDefinitionIndex(7480))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7481), inst: 280 })
// CS Name: UnityEngine.UIElements.UIR.ShaderInfoStorage`1
class CORDL_TYPE ShaderInfoStorage_1<UnityEngine::Color> : public UnityEngine::UIElements::UIR::BaseShaderInfoStorage {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~ShaderInfoStorage_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "ShaderInfoStorage_1", modifiers: " const&", def_value: None }]
constexpr ShaderInfoStorage_1(ShaderInfoStorage_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ShaderInfoStorage_1", modifiers: "&&", def_value: None }]
constexpr ShaderInfoStorage_1(ShaderInfoStorage_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ShaderInfoStorage_1(void* ptr) noexcept : UnityEngine::UIElements::UIR::BaseShaderInfoStorage(ptr) {
}


  constexpr ShaderInfoStorage_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ShaderInfoStorage_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ShaderInfoStorage_1& operator=(ShaderInfoStorage_1&& o) noexcept = default;
  constexpr ShaderInfoStorage_1& operator=(ShaderInfoStorage_1 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_m_InitialSize, put=__set_m_InitialSize))  m_InitialSize;

constexpr void __set_m_InitialSize(int32_t value) ;

constexpr int32_t __get_m_InitialSize() const;

 int32_t __declspec(property(get=__get_m_MaxSize, put=__set_m_MaxSize))  m_MaxSize;

constexpr void __set_m_MaxSize(int32_t value) ;

constexpr int32_t __get_m_MaxSize() const;

 UnityEngine::TextureFormat __declspec(property(get=__get_m_Format, put=__set_m_Format))  m_Format;

constexpr void __set_m_Format(UnityEngine::TextureFormat value) ;

constexpr UnityEngine::TextureFormat __get_m_Format() const;

 System::Func_2<UnityEngine::Color,UnityEngine::Color> __declspec(property(get=__get_m_Convert, put=__set_m_Convert))  m_Convert;

constexpr void __set_m_Convert(System::Func_2<UnityEngine::Color,UnityEngine::Color> value) ;

constexpr System::Func_2<UnityEngine::Color,UnityEngine::Color> __get_m_Convert() const;

 UnityEngine::UIElements::UIRAtlasAllocator __declspec(property(get=__get_m_Allocator, put=__set_m_Allocator))  m_Allocator;

constexpr void __set_m_Allocator(UnityEngine::UIElements::UIRAtlasAllocator value) ;

constexpr UnityEngine::UIElements::UIRAtlasAllocator __get_m_Allocator() const;

 UnityEngine::Texture2D __declspec(property(get=__get_m_Texture, put=__set_m_Texture))  m_Texture;

constexpr void __set_m_Texture(UnityEngine::Texture2D value) ;

constexpr UnityEngine::Texture2D __get_m_Texture() const;

 Unity::Collections::NativeArray_1<UnityEngine::Color> __declspec(property(get=__get_m_Texels, put=__set_m_Texels))  m_Texels;

constexpr void __set_m_Texels(Unity::Collections::NativeArray_1<UnityEngine::Color> value) ;

constexpr Unity::Collections::NativeArray_1<UnityEngine::Color> __get_m_Texels() const;


// Properties

 UnityEngine::Texture2D __declspec(property(get=get_texture))  texture;


// Methods

// Ctor Parameters [CppParam { name: "format", ty: "UnityEngine::TextureFormat", modifiers: "", def_value: None }, CppParam { name: "convert", ty: "System::Func_2<UnityEngine::Color,UnityEngine::Color>", modifiers: "", def_value: None }, CppParam { name: "initialSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "maxSize", ty: "int32_t", modifiers: "", def_value: None }]
explicit ShaderInfoStorage_1(UnityEngine::TextureFormat format, System::Func_2<UnityEngine::Color,UnityEngine::Color> convert, int32_t initialSize, int32_t maxSize) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(UnityEngine::TextureFormat format, System::Func_2<UnityEngine::Color,UnityEngine::Color> convert, int32_t initialSize, int32_t maxSize) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final false
 void Dispose(bool disposing) ;

/// @brief Method get_texture addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::Texture2D get_texture() ;

/// @brief Method AllocateRect addr 0x0 size 0xffffffffffffffff virtual true final false
 bool AllocateRect(int32_t width, int32_t height, ByRef<UnityEngine::RectInt> uvs) ;

/// @brief Method SetTexel addr 0x0 size 0xffffffffffffffff virtual true final false
 void SetTexel(int32_t x, int32_t y, UnityEngine::Color color) ;

/// @brief Method UpdateTexture addr 0x0 size 0xffffffffffffffff virtual true final false
 void UpdateTexture() ;

/// @brief Method CreateOrExpandTexture addr 0x0 size 0xffffffffffffffff virtual false final false
 void CreateOrExpandTexture() ;

/// @brief Method CpuBlit addr 0x0 size 0xffffffffffffffff virtual false final false
static void CpuBlit(Unity::Collections::NativeArray_1<UnityEngine::Color> src, int32_t srcWidth, int32_t srcHeight, Unity::Collections::NativeArray_1<UnityEngine::Color> dst, int32_t dstWidth, int32_t dstHeight) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::UIR
// Type: UnityEngine.UIElements.UIR::ShaderInfoStorage`1
namespace UnityEngine::UIElements::UIR {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7481)), TypeDefinitionIndex(TypeDefinitionIndex(7480))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7481), inst: 718 })
// CS Name: UnityEngine.UIElements.UIR.ShaderInfoStorage`1
class CORDL_TYPE ShaderInfoStorage_1<UnityEngine::Color32> : public UnityEngine::UIElements::UIR::BaseShaderInfoStorage {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~ShaderInfoStorage_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "ShaderInfoStorage_1", modifiers: " const&", def_value: None }]
constexpr ShaderInfoStorage_1(ShaderInfoStorage_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ShaderInfoStorage_1", modifiers: "&&", def_value: None }]
constexpr ShaderInfoStorage_1(ShaderInfoStorage_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ShaderInfoStorage_1(void* ptr) noexcept : UnityEngine::UIElements::UIR::BaseShaderInfoStorage(ptr) {
}


  constexpr ShaderInfoStorage_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ShaderInfoStorage_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ShaderInfoStorage_1& operator=(ShaderInfoStorage_1&& o) noexcept = default;
  constexpr ShaderInfoStorage_1& operator=(ShaderInfoStorage_1 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_m_InitialSize, put=__set_m_InitialSize))  m_InitialSize;

constexpr void __set_m_InitialSize(int32_t value) ;

constexpr int32_t __get_m_InitialSize() const;

 int32_t __declspec(property(get=__get_m_MaxSize, put=__set_m_MaxSize))  m_MaxSize;

constexpr void __set_m_MaxSize(int32_t value) ;

constexpr int32_t __get_m_MaxSize() const;

 UnityEngine::TextureFormat __declspec(property(get=__get_m_Format, put=__set_m_Format))  m_Format;

constexpr void __set_m_Format(UnityEngine::TextureFormat value) ;

constexpr UnityEngine::TextureFormat __get_m_Format() const;

 System::Func_2<UnityEngine::Color,UnityEngine::Color32> __declspec(property(get=__get_m_Convert, put=__set_m_Convert))  m_Convert;

constexpr void __set_m_Convert(System::Func_2<UnityEngine::Color,UnityEngine::Color32> value) ;

constexpr System::Func_2<UnityEngine::Color,UnityEngine::Color32> __get_m_Convert() const;

 UnityEngine::UIElements::UIRAtlasAllocator __declspec(property(get=__get_m_Allocator, put=__set_m_Allocator))  m_Allocator;

constexpr void __set_m_Allocator(UnityEngine::UIElements::UIRAtlasAllocator value) ;

constexpr UnityEngine::UIElements::UIRAtlasAllocator __get_m_Allocator() const;

 UnityEngine::Texture2D __declspec(property(get=__get_m_Texture, put=__set_m_Texture))  m_Texture;

constexpr void __set_m_Texture(UnityEngine::Texture2D value) ;

constexpr UnityEngine::Texture2D __get_m_Texture() const;

 Unity::Collections::NativeArray_1<UnityEngine::Color32> __declspec(property(get=__get_m_Texels, put=__set_m_Texels))  m_Texels;

constexpr void __set_m_Texels(Unity::Collections::NativeArray_1<UnityEngine::Color32> value) ;

constexpr Unity::Collections::NativeArray_1<UnityEngine::Color32> __get_m_Texels() const;


// Properties

 UnityEngine::Texture2D __declspec(property(get=get_texture))  texture;


// Methods

// Ctor Parameters [CppParam { name: "format", ty: "UnityEngine::TextureFormat", modifiers: "", def_value: None }, CppParam { name: "convert", ty: "System::Func_2<UnityEngine::Color,UnityEngine::Color32>", modifiers: "", def_value: None }, CppParam { name: "initialSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "maxSize", ty: "int32_t", modifiers: "", def_value: None }]
explicit ShaderInfoStorage_1(UnityEngine::TextureFormat format, System::Func_2<UnityEngine::Color,UnityEngine::Color32> convert, int32_t initialSize, int32_t maxSize) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(UnityEngine::TextureFormat format, System::Func_2<UnityEngine::Color,UnityEngine::Color32> convert, int32_t initialSize, int32_t maxSize) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final false
 void Dispose(bool disposing) ;

/// @brief Method get_texture addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::Texture2D get_texture() ;

/// @brief Method AllocateRect addr 0x0 size 0xffffffffffffffff virtual true final false
 bool AllocateRect(int32_t width, int32_t height, ByRef<UnityEngine::RectInt> uvs) ;

/// @brief Method SetTexel addr 0x0 size 0xffffffffffffffff virtual true final false
 void SetTexel(int32_t x, int32_t y, UnityEngine::Color color) ;

/// @brief Method UpdateTexture addr 0x0 size 0xffffffffffffffff virtual true final false
 void UpdateTexture() ;

/// @brief Method CreateOrExpandTexture addr 0x0 size 0xffffffffffffffff virtual false final false
 void CreateOrExpandTexture() ;

/// @brief Method CpuBlit addr 0x0 size 0xffffffffffffffff virtual false final false
static void CpuBlit(Unity::Collections::NativeArray_1<UnityEngine::Color32> src, int32_t srcWidth, int32_t srcHeight, Unity::Collections::NativeArray_1<UnityEngine::Color32> dst, int32_t dstWidth, int32_t dstHeight) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::UIR
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(UnityEngine::UIElements::UIR::ShaderInfoStorage_1, "UnityEngine.UIElements.UIR", "ShaderInfoStorage`1");
