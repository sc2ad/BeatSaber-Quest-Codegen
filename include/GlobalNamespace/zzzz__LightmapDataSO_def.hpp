#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
namespace {
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace GlobalNamespace {
class LightmapDataSO;
}
// Type: ::LightmapDataSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13816))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5950))
// CS Name: LightmapDataSO
class CORDL_TYPE LightmapDataSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~LightmapDataSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "LightmapDataSO", modifiers: " const&", def_value: None }]
constexpr LightmapDataSO(LightmapDataSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LightmapDataSO", modifiers: "&&", def_value: None }]
constexpr LightmapDataSO(LightmapDataSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LightmapDataSO(void* ptr) noexcept : ::GlobalNamespace::PersistentScriptableObject(ptr) {
}


  constexpr LightmapDataSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LightmapDataSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LightmapDataSO& operator=(LightmapDataSO&& o) noexcept = default;
  constexpr LightmapDataSO& operator=(LightmapDataSO const& o) noexcept = default;
                


// Fields

 ::UnityEngine::Texture2D __declspec(property(get=__get__lightmap1, put=__set__lightmap1))  _lightmap1;

constexpr void __set__lightmap1(::UnityEngine::Texture2D value) ;

constexpr ::UnityEngine::Texture2D __get__lightmap1() const;

 ::UnityEngine::Texture2D __declspec(property(get=__get__lightmap2, put=__set__lightmap2))  _lightmap2;

constexpr void __set__lightmap2(::UnityEngine::Texture2D value) ;

constexpr ::UnityEngine::Texture2D __get__lightmap2() const;


// Properties

 ::UnityEngine::Texture2D __declspec(property(get=get_lightmap1, put=set_lightmap1))  lightmap1;

 ::UnityEngine::Texture2D __declspec(property(get=get_lightmap2, put=set_lightmap2))  lightmap2;


// Methods

/// @brief Method get_lightmap1 addr 0x219cc70 size 0x8 virtual false final false
 ::UnityEngine::Texture2D get_lightmap1() ;

/// @brief Method set_lightmap1 addr 0x219cc78 size 0x8 virtual false final false
 void set_lightmap1(::UnityEngine::Texture2D value) ;

/// @brief Method get_lightmap2 addr 0x219cc80 size 0x8 virtual false final false
 ::UnityEngine::Texture2D get_lightmap2() ;

/// @brief Method set_lightmap2 addr 0x219cc88 size 0x8 virtual false final false
 void set_lightmap2(::UnityEngine::Texture2D value) ;

// Ctor Parameters []
explicit LightmapDataSO() ;

/// @brief Method .ctor addr 0x219cc90 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::LightmapDataSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightmapDataSO, "", "LightmapDataSO");
