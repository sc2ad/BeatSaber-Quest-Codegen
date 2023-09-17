#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Matrix4x4;
}
// Forward declare root types
namespace UnityEngine {
class GL;
}
// Type: UnityEngine::GL
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10073))
// CS Name: UnityEngine.GL
class CORDL_TYPE GL : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GL() = default;

// Ctor Parameters [CppParam { name: "", ty: "GL", modifiers: " const&", def_value: None }]
constexpr GL(GL const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GL", modifiers: "&&", def_value: None }]
constexpr GL(GL&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GL(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GL& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GL& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GL& operator=(GL&& o) noexcept = default;
  constexpr GL& operator=(GL const& o) noexcept = default;
                


// Properties

static bool __declspec(property(get=get_sRGBWrite, put=set_sRGBWrite))  sRGBWrite;

static bool __declspec(property(get=get_invertCulling, put=set_invertCulling))  invertCulling;

static ::UnityEngine::Matrix4x4 __declspec(property(put=set_modelview))  modelview;


// Methods

/// @brief Method Vertex3 addr 0x2b4c78c size 0x50 virtual false final false
static void Vertex3(float_t x, float_t y, float_t z) ;

/// @brief Method TexCoord3 addr 0x2b4c7dc size 0x50 virtual false final false
static void TexCoord3(float_t x, float_t y, float_t z) ;

/// @brief Method TexCoord addr 0x2b4c82c size 0x50 virtual false final false
static void TexCoord(::UnityEngine::Vector3 v) ;

/// @brief Method TexCoord2 addr 0x2b4c87c size 0x44 virtual false final false
static void TexCoord2(float_t x, float_t y) ;

/// @brief Method ImmediateColor addr 0x2b4c8c0 size 0x58 virtual false final false
static void ImmediateColor(float_t r, float_t g, float_t b, float_t a) ;

/// @brief Method Color addr 0x2b4c918 size 0x58 virtual false final false
static void Color(::UnityEngine::Color c) ;

/// @brief Method get_sRGBWrite addr 0x2b4c970 size 0x28 virtual false final false
static bool get_sRGBWrite() ;

/// @brief Method set_sRGBWrite addr 0x2b4c998 size 0x3c virtual false final false
static void set_sRGBWrite(bool value) ;

/// @brief Method get_invertCulling addr 0x2b4c9d4 size 0x28 virtual false final false
static bool get_invertCulling() ;

/// @brief Method set_invertCulling addr 0x2b4c9fc size 0x3c virtual false final false
static void set_invertCulling(bool value) ;

/// @brief Method Flush addr 0x2b4ca38 size 0x28 virtual false final false
static void Flush() ;

/// @brief Method SetViewMatrix addr 0x2b4ca60 size 0x3c virtual false final false
static void SetViewMatrix(::UnityEngine::Matrix4x4 m) ;

/// @brief Method set_modelview addr 0x2b4cad8 size 0x4c virtual false final false
static void set_modelview(::UnityEngine::Matrix4x4 value) ;

/// @brief Method PushMatrix addr 0x2b4cb24 size 0x28 virtual false final false
static void PushMatrix() ;

/// @brief Method PopMatrix addr 0x2b4cb4c size 0x28 virtual false final false
static void PopMatrix() ;

/// @brief Method LoadOrtho addr 0x2b4cb74 size 0x28 virtual false final false
static void LoadOrtho() ;

/// @brief Method LoadProjectionMatrix addr 0x2b4cb9c size 0x3c virtual false final false
static void LoadProjectionMatrix(::UnityEngine::Matrix4x4 mat) ;

/// @brief Method GLLoadPixelMatrixScript addr 0x2b4cc14 size 0x58 virtual false final false
static void GLLoadPixelMatrixScript(float_t left, float_t right, float_t bottom, float_t top) ;

/// @brief Method LoadPixelMatrix addr 0x2b4cc6c size 0x58 virtual false final false
static void LoadPixelMatrix(float_t left, float_t right, float_t bottom, float_t top) ;

/// @brief Method GLIssuePluginEvent addr 0x2b4ccc4 size 0x44 virtual false final false
static void GLIssuePluginEvent(::cordl_internals::intptr_t callback, int32_t eventID) ;

/// @brief Method IssuePluginEvent addr 0x2b4cd08 size 0xf0 virtual false final false
static void IssuePluginEvent(::cordl_internals::intptr_t callback, int32_t eventID) ;

/// @brief Method Begin addr 0x2b4cdf8 size 0x3c virtual false final false
static void Begin(int32_t mode) ;

/// @brief Method End addr 0x2b4ce34 size 0x28 virtual false final false
static void End() ;

/// @brief Method GLClear addr 0x2b4ce5c size 0x6c virtual false final false
static void GLClear(bool clearDepth, bool clearColor, ::UnityEngine::Color backgroundColor, float_t depth) ;

/// @brief Method Clear addr 0x2b4cf2c size 0xc virtual false final false
static void Clear(bool clearDepth, bool clearColor, ::UnityEngine::Color backgroundColor, float_t depth) ;

/// @brief Method Clear addr 0x2b4cf38 size 0x10 virtual false final false
static void Clear(bool clearDepth, bool clearColor, ::UnityEngine::Color backgroundColor) ;

/// @brief Method Viewport addr 0x2b4cf48 size 0x44 virtual false final false
static void Viewport(::UnityEngine::Rect pixelRect) ;

/// @brief Method SetViewMatrix_Injected addr 0x2b4ca9c size 0x3c virtual false final false
static void SetViewMatrix_Injected(ByRef<::UnityEngine::Matrix4x4> m) ;

/// @brief Method LoadProjectionMatrix_Injected addr 0x2b4cbd8 size 0x3c virtual false final false
static void LoadProjectionMatrix_Injected(ByRef<::UnityEngine::Matrix4x4> mat) ;

/// @brief Method GLClear_Injected addr 0x2b4cec8 size 0x64 virtual false final false
static void GLClear_Injected(bool clearDepth, bool clearColor, ByRef<::UnityEngine::Color> backgroundColor, float_t depth) ;

/// @brief Method Viewport_Injected addr 0x2b4cf8c size 0x3c virtual false final false
static void Viewport_Injected(ByRef<::UnityEngine::Rect> pixelRect) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::GL);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::GL, "UnityEngine", "GL");
