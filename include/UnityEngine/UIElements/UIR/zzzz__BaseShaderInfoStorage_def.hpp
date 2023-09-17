#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
namespace {
namespace Unity::Profiling {
struct ProfilerMarker;
}
namespace UnityEngine {
struct Color;
}
namespace System {
class IDisposable;
}
namespace UnityEngine {
struct RectInt;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
class BaseShaderInfoStorage;
}
// Type: UnityEngine.UIElements.UIR::BaseShaderInfoStorage
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7480))
// CS Name: UnityEngine.UIElements.UIR.BaseShaderInfoStorage
class CORDL_TYPE BaseShaderInfoStorage : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~BaseShaderInfoStorage() = default;

// Ctor Parameters [CppParam { name: "", ty: "BaseShaderInfoStorage", modifiers: " const&", def_value: None }]
constexpr BaseShaderInfoStorage(BaseShaderInfoStorage const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BaseShaderInfoStorage", modifiers: "&&", def_value: None }]
constexpr BaseShaderInfoStorage(BaseShaderInfoStorage&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BaseShaderInfoStorage(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BaseShaderInfoStorage& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BaseShaderInfoStorage& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BaseShaderInfoStorage& operator=(BaseShaderInfoStorage&& o) noexcept = default;
  constexpr BaseShaderInfoStorage& operator=(BaseShaderInfoStorage const& o) noexcept = default;
                


// Fields

static int32_t __declspec(property(get=__get_s_TextureCounter, put=__set_s_TextureCounter))  s_TextureCounter;

static void __set_s_TextureCounter(int32_t value) ;

static int32_t __get_s_TextureCounter() ;

static ::Unity::Profiling::ProfilerMarker __declspec(property(get=__get_s_MarkerCopyTexture, put=__set_s_MarkerCopyTexture))  s_MarkerCopyTexture;

static void __set_s_MarkerCopyTexture(::Unity::Profiling::ProfilerMarker value) ;

static ::Unity::Profiling::ProfilerMarker __get_s_MarkerCopyTexture() ;

static ::Unity::Profiling::ProfilerMarker __declspec(property(get=__get_s_MarkerGetTextureData, put=__set_s_MarkerGetTextureData))  s_MarkerGetTextureData;

static void __set_s_MarkerGetTextureData(::Unity::Profiling::ProfilerMarker value) ;

static ::Unity::Profiling::ProfilerMarker __get_s_MarkerGetTextureData() ;

static ::Unity::Profiling::ProfilerMarker __declspec(property(get=__get_s_MarkerUpdateTexture, put=__set_s_MarkerUpdateTexture))  s_MarkerUpdateTexture;

static void __set_s_MarkerUpdateTexture(::Unity::Profiling::ProfilerMarker value) ;

static ::Unity::Profiling::ProfilerMarker __get_s_MarkerUpdateTexture() ;

 bool __declspec(property(get=__get__disposed_k__BackingField, put=__set__disposed_k__BackingField))  _disposed_k__BackingField;

constexpr void __set__disposed_k__BackingField(bool value) ;

constexpr bool __get__disposed_k__BackingField() const;


// Properties

 ::UnityEngine::Texture2D __declspec(property(get=get_texture))  texture;

 bool __declspec(property(get=get_disposed, put=set_disposed))  disposed;


// Methods

/// @brief Method get_texture addr 0x0 size 0xffffffffffffffff virtual true final false
 ::UnityEngine::Texture2D get_texture() ;

/// @brief Method AllocateRect addr 0x0 size 0xffffffffffffffff virtual true final false
 bool AllocateRect(int32_t width, int32_t height, ByRef<::UnityEngine::RectInt> uvs) ;

/// @brief Method SetTexel addr 0x0 size 0xffffffffffffffff virtual true final false
 void SetTexel(int32_t x, int32_t y, ::UnityEngine::Color color) ;

/// @brief Method UpdateTexture addr 0x0 size 0xffffffffffffffff virtual true final false
 void UpdateTexture() ;

/// @brief Method get_disposed addr 0x2d15098 size 0x8 virtual false final false
 bool get_disposed() ;

/// @brief Method set_disposed addr 0x2d150a0 size 0xc virtual false final false
 void set_disposed(bool value) ;

/// @brief Method Dispose addr 0x2d1393c size 0x6c virtual true final true
 void Dispose() ;

/// @brief Method Dispose addr 0x2d150ac size 0x18 virtual true final false
 void Dispose(bool disposing) ;

// Ctor Parameters []
explicit BaseShaderInfoStorage() ;

/// @brief Method .ctor addr 0x2d150c4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::UIR
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UIElements::UIR::BaseShaderInfoStorage);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::BaseShaderInfoStorage, "UnityEngine.UIElements.UIR", "BaseShaderInfoStorage");
