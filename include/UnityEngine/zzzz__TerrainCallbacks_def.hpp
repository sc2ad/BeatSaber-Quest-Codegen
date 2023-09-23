#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace UnityEngine {
class TerrainData;
}
namespace UnityEngine {
struct RectInt;
}
namespace UnityEngine {
class Terrain;
}
// Forward declare root types
namespace UnityEngine {
class TerrainCallbacks;
}
namespace UnityEngine {
class UnityEngine__TerrainCallbacks__HeightmapChangedCallback;
}
namespace UnityEngine {
class UnityEngine__TerrainCallbacks__TextureChangedCallback;
}
// Type: ::HeightmapChangedCallback
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15449))
// CS Name: UnityEngine.TerrainCallbacks::HeightmapChangedCallback
class CORDL_TYPE UnityEngine__TerrainCallbacks__HeightmapChangedCallback : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~UnityEngine__TerrainCallbacks__HeightmapChangedCallback() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__TerrainCallbacks__HeightmapChangedCallback", modifiers: " const&", def_value: None }]
constexpr UnityEngine__TerrainCallbacks__HeightmapChangedCallback(UnityEngine__TerrainCallbacks__HeightmapChangedCallback const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__TerrainCallbacks__HeightmapChangedCallback", modifiers: "&&", def_value: None }]
constexpr UnityEngine__TerrainCallbacks__HeightmapChangedCallback(UnityEngine__TerrainCallbacks__HeightmapChangedCallback&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__TerrainCallbacks__HeightmapChangedCallback(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr UnityEngine__TerrainCallbacks__HeightmapChangedCallback& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__TerrainCallbacks__HeightmapChangedCallback& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__TerrainCallbacks__HeightmapChangedCallback& operator=(UnityEngine__TerrainCallbacks__HeightmapChangedCallback&& o) noexcept = default;
  constexpr UnityEngine__TerrainCallbacks__HeightmapChangedCallback& operator=(UnityEngine__TerrainCallbacks__HeightmapChangedCallback const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit UnityEngine__TerrainCallbacks__HeightmapChangedCallback(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2ba74dc size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2ba75b4 size 0x18 virtual true final false
 void Invoke(UnityEngine::Terrain terrain, UnityEngine::RectInt heightRegion, bool synched) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
// Type: ::TextureChangedCallback
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15450))
// CS Name: UnityEngine.TerrainCallbacks::TextureChangedCallback
class CORDL_TYPE UnityEngine__TerrainCallbacks__TextureChangedCallback : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~UnityEngine__TerrainCallbacks__TextureChangedCallback() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__TerrainCallbacks__TextureChangedCallback", modifiers: " const&", def_value: None }]
constexpr UnityEngine__TerrainCallbacks__TextureChangedCallback(UnityEngine__TerrainCallbacks__TextureChangedCallback const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__TerrainCallbacks__TextureChangedCallback", modifiers: "&&", def_value: None }]
constexpr UnityEngine__TerrainCallbacks__TextureChangedCallback(UnityEngine__TerrainCallbacks__TextureChangedCallback&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__TerrainCallbacks__TextureChangedCallback(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr UnityEngine__TerrainCallbacks__TextureChangedCallback& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__TerrainCallbacks__TextureChangedCallback& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__TerrainCallbacks__TextureChangedCallback& operator=(UnityEngine__TerrainCallbacks__TextureChangedCallback&& o) noexcept = default;
  constexpr UnityEngine__TerrainCallbacks__TextureChangedCallback& operator=(UnityEngine__TerrainCallbacks__TextureChangedCallback const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit UnityEngine__TerrainCallbacks__TextureChangedCallback(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2ba75cc size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2ba76a4 size 0x18 virtual true final false
 void Invoke(UnityEngine::Terrain terrain, ::StringW textureName, UnityEngine::RectInt texelRegion, bool synched) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
// Type: UnityEngine::TerrainCallbacks
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15451))
// CS Name: UnityEngine.TerrainCallbacks
class CORDL_TYPE TerrainCallbacks : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using TextureChangedCallback = UnityEngine::UnityEngine__TerrainCallbacks__TextureChangedCallback;

using HeightmapChangedCallback = UnityEngine::UnityEngine__TerrainCallbacks__HeightmapChangedCallback;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~TerrainCallbacks() = default;

// Ctor Parameters [CppParam { name: "", ty: "TerrainCallbacks", modifiers: " const&", def_value: None }]
constexpr TerrainCallbacks(TerrainCallbacks const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TerrainCallbacks", modifiers: "&&", def_value: None }]
constexpr TerrainCallbacks(TerrainCallbacks&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TerrainCallbacks(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TerrainCallbacks& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TerrainCallbacks& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TerrainCallbacks& operator=(TerrainCallbacks&& o) noexcept = default;
  constexpr TerrainCallbacks& operator=(TerrainCallbacks const& o) noexcept = default;
                


// Fields

static UnityEngine::UnityEngine__TerrainCallbacks__HeightmapChangedCallback __declspec(property(get=__get_heightmapChanged, put=__set_heightmapChanged))  heightmapChanged;

static void __set_heightmapChanged(UnityEngine::UnityEngine__TerrainCallbacks__HeightmapChangedCallback value) ;

static UnityEngine::UnityEngine__TerrainCallbacks__HeightmapChangedCallback __get_heightmapChanged() ;

static UnityEngine::UnityEngine__TerrainCallbacks__TextureChangedCallback __declspec(property(get=__get_textureChanged, put=__set_textureChanged))  textureChanged;

static void __set_textureChanged(UnityEngine::UnityEngine__TerrainCallbacks__TextureChangedCallback value) ;

static UnityEngine::UnityEngine__TerrainCallbacks__TextureChangedCallback __get_textureChanged() ;


// Methods

/// @brief Method InvokeHeightmapChangedCallback addr 0x2ba72b4 size 0x10c virtual false final false
static void InvokeHeightmapChangedCallback(UnityEngine::TerrainData terrainData, UnityEngine::RectInt heightRegion, bool synched) ;

/// @brief Method InvokeTextureChangedCallback addr 0x2ba73c0 size 0x11c virtual false final false
static void InvokeTextureChangedCallback(UnityEngine::TerrainData terrainData, ::StringW textureName, UnityEngine::RectInt texelRegion, bool synched) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::TerrainCallbacks);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TerrainCallbacks, "UnityEngine", "TerrainCallbacks");
NEED_NO_BOX(UnityEngine::UnityEngine__TerrainCallbacks__HeightmapChangedCallback);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UnityEngine__TerrainCallbacks__HeightmapChangedCallback, "UnityEngine", "TerrainCallbacks/HeightmapChangedCallback");
NEED_NO_BOX(UnityEngine::UnityEngine__TerrainCallbacks__TextureChangedCallback);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UnityEngine__TerrainCallbacks__TextureChangedCallback, "UnityEngine", "TerrainCallbacks/TextureChangedCallback");
