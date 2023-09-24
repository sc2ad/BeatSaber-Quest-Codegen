#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
namespace GlobalNamespace {
class GlobalNamespace__BloomPrePassRenderDataSO__Data;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class RenderTexture;
}
namespace GlobalNamespace {
struct ToneMapping;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace GlobalNamespace {
class BloomPrePassRenderDataSO;
}
namespace GlobalNamespace {
class GlobalNamespace__BloomPrePassRenderDataSO__Data;
}
// Type: ::Data
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14640))
// CS Name: BloomPrePassRenderDataSO::Data
class CORDL_TYPE GlobalNamespace__BloomPrePassRenderDataSO__Data : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa8};

virtual ~GlobalNamespace__BloomPrePassRenderDataSO__Data() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__BloomPrePassRenderDataSO__Data", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__BloomPrePassRenderDataSO__Data(GlobalNamespace__BloomPrePassRenderDataSO__Data const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__BloomPrePassRenderDataSO__Data", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__BloomPrePassRenderDataSO__Data(GlobalNamespace__BloomPrePassRenderDataSO__Data&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__BloomPrePassRenderDataSO__Data(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__BloomPrePassRenderDataSO__Data& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__BloomPrePassRenderDataSO__Data& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__BloomPrePassRenderDataSO__Data& operator=(GlobalNamespace__BloomPrePassRenderDataSO__Data&& o) noexcept = default;
  constexpr GlobalNamespace__BloomPrePassRenderDataSO__Data& operator=(GlobalNamespace__BloomPrePassRenderDataSO__Data const& o) noexcept = default;
                


// Fields

 UnityEngine::RenderTexture __declspec(property(get=__get_bloomPrePassRenderTexture, put=__set_bloomPrePassRenderTexture))  bloomPrePassRenderTexture;

constexpr void __set_bloomPrePassRenderTexture(UnityEngine::RenderTexture value) ;

constexpr UnityEngine::RenderTexture __get_bloomPrePassRenderTexture() const;

 UnityEngine::Vector2 __declspec(property(get=__get_textureToScreenRatio, put=__set_textureToScreenRatio))  textureToScreenRatio;

constexpr void __set_textureToScreenRatio(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get_textureToScreenRatio() const;

 UnityEngine::Matrix4x4 __declspec(property(get=__get_viewMatrix, put=__set_viewMatrix))  viewMatrix;

constexpr void __set_viewMatrix(UnityEngine::Matrix4x4 value) ;

constexpr UnityEngine::Matrix4x4 __get_viewMatrix() const;

 UnityEngine::Matrix4x4 __declspec(property(get=__get_projectionMatrix, put=__set_projectionMatrix))  projectionMatrix;

constexpr void __set_projectionMatrix(UnityEngine::Matrix4x4 value) ;

constexpr UnityEngine::Matrix4x4 __get_projectionMatrix() const;

 float_t __declspec(property(get=__get_stereoCameraEyeOffset, put=__set_stereoCameraEyeOffset))  stereoCameraEyeOffset;

constexpr void __set_stereoCameraEyeOffset(float_t value) ;

constexpr float_t __get_stereoCameraEyeOffset() const;

 GlobalNamespace::ToneMapping __declspec(property(get=__get_toneMapping, put=__set_toneMapping))  toneMapping;

constexpr void __set_toneMapping(GlobalNamespace::ToneMapping value) ;

constexpr GlobalNamespace::ToneMapping __get_toneMapping() const;


// Methods

static GlobalNamespace::GlobalNamespace__BloomPrePassRenderDataSO__Data New_ctor() ;

/// @brief Method .ctor addr 0x1f90958 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::BloomPrePassRenderDataSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13816))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14641))
// CS Name: BloomPrePassRenderDataSO
class CORDL_TYPE BloomPrePassRenderDataSO : public GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
using Data = GlobalNamespace::GlobalNamespace__BloomPrePassRenderDataSO__Data;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~BloomPrePassRenderDataSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "BloomPrePassRenderDataSO", modifiers: " const&", def_value: None }]
constexpr BloomPrePassRenderDataSO(BloomPrePassRenderDataSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BloomPrePassRenderDataSO", modifiers: "&&", def_value: None }]
constexpr BloomPrePassRenderDataSO(BloomPrePassRenderDataSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BloomPrePassRenderDataSO(void* ptr) noexcept : GlobalNamespace::PersistentScriptableObject(ptr) {
}


  constexpr BloomPrePassRenderDataSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BloomPrePassRenderDataSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BloomPrePassRenderDataSO& operator=(BloomPrePassRenderDataSO&& o) noexcept = default;
  constexpr BloomPrePassRenderDataSO& operator=(BloomPrePassRenderDataSO const& o) noexcept = default;
                


// Fields

 GlobalNamespace::GlobalNamespace__BloomPrePassRenderDataSO__Data __declspec(property(get=__get_data, put=__set_data))  data;

constexpr void __set_data(GlobalNamespace::GlobalNamespace__BloomPrePassRenderDataSO__Data value) ;

constexpr GlobalNamespace::GlobalNamespace__BloomPrePassRenderDataSO__Data __get_data() const;


// Methods

static GlobalNamespace::BloomPrePassRenderDataSO New_ctor() ;

/// @brief Method .ctor addr 0x1f95038 size 0x68 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BloomPrePassRenderDataSO);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BloomPrePassRenderDataSO, "", "BloomPrePassRenderDataSO");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__BloomPrePassRenderDataSO__Data);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__BloomPrePassRenderDataSO__Data, "", "BloomPrePassRenderDataSO/Data");
