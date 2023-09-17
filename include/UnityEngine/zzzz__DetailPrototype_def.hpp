#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct DetailRenderMode;
}
// Forward declare root types
namespace UnityEngine {
class DetailPrototype;
}
// Type: UnityEngine::DetailPrototype
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15445))
// CS Name: UnityEngine.DetailPrototype
class CORDL_TYPE DetailPrototype : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x68};

virtual ~DetailPrototype() = default;

// Ctor Parameters [CppParam { name: "", ty: "DetailPrototype", modifiers: " const&", def_value: None }]
constexpr DetailPrototype(DetailPrototype const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DetailPrototype", modifiers: "&&", def_value: None }]
constexpr DetailPrototype(DetailPrototype&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DetailPrototype(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DetailPrototype& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DetailPrototype& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DetailPrototype& operator=(DetailPrototype&& o) noexcept = default;
  constexpr DetailPrototype& operator=(DetailPrototype const& o) noexcept = default;
                


// Fields

static ::UnityEngine::Color __declspec(property(get=__get_DefaultHealthColor, put=__set_DefaultHealthColor))  DefaultHealthColor;

static void __set_DefaultHealthColor(::UnityEngine::Color value) ;

static ::UnityEngine::Color __get_DefaultHealthColor() ;

static ::UnityEngine::Color __declspec(property(get=__get_DefaultDryColor, put=__set_DefaultDryColor))  DefaultDryColor;

static void __set_DefaultDryColor(::UnityEngine::Color value) ;

static ::UnityEngine::Color __get_DefaultDryColor() ;

 ::UnityEngine::GameObject __declspec(property(get=__get_m_Prototype, put=__set_m_Prototype))  m_Prototype;

constexpr void __set_m_Prototype(::UnityEngine::GameObject value) ;

constexpr ::UnityEngine::GameObject __get_m_Prototype() const;

 ::UnityEngine::Texture2D __declspec(property(get=__get_m_PrototypeTexture, put=__set_m_PrototypeTexture))  m_PrototypeTexture;

constexpr void __set_m_PrototypeTexture(::UnityEngine::Texture2D value) ;

constexpr ::UnityEngine::Texture2D __get_m_PrototypeTexture() const;

 ::UnityEngine::Color __declspec(property(get=__get_m_HealthyColor, put=__set_m_HealthyColor))  m_HealthyColor;

constexpr void __set_m_HealthyColor(::UnityEngine::Color value) ;

constexpr ::UnityEngine::Color __get_m_HealthyColor() const;

 ::UnityEngine::Color __declspec(property(get=__get_m_DryColor, put=__set_m_DryColor))  m_DryColor;

constexpr void __set_m_DryColor(::UnityEngine::Color value) ;

constexpr ::UnityEngine::Color __get_m_DryColor() const;

 float_t __declspec(property(get=__get_m_MinWidth, put=__set_m_MinWidth))  m_MinWidth;

constexpr void __set_m_MinWidth(float_t value) ;

constexpr float_t __get_m_MinWidth() const;

 float_t __declspec(property(get=__get_m_MaxWidth, put=__set_m_MaxWidth))  m_MaxWidth;

constexpr void __set_m_MaxWidth(float_t value) ;

constexpr float_t __get_m_MaxWidth() const;

 float_t __declspec(property(get=__get_m_MinHeight, put=__set_m_MinHeight))  m_MinHeight;

constexpr void __set_m_MinHeight(float_t value) ;

constexpr float_t __get_m_MinHeight() const;

 float_t __declspec(property(get=__get_m_MaxHeight, put=__set_m_MaxHeight))  m_MaxHeight;

constexpr void __set_m_MaxHeight(float_t value) ;

constexpr float_t __get_m_MaxHeight() const;

 int32_t __declspec(property(get=__get_m_NoiseSeed, put=__set_m_NoiseSeed))  m_NoiseSeed;

constexpr void __set_m_NoiseSeed(int32_t value) ;

constexpr int32_t __get_m_NoiseSeed() const;

 float_t __declspec(property(get=__get_m_NoiseSpread, put=__set_m_NoiseSpread))  m_NoiseSpread;

constexpr void __set_m_NoiseSpread(float_t value) ;

constexpr float_t __get_m_NoiseSpread() const;

 float_t __declspec(property(get=__get_m_HoleEdgePadding, put=__set_m_HoleEdgePadding))  m_HoleEdgePadding;

constexpr void __set_m_HoleEdgePadding(float_t value) ;

constexpr float_t __get_m_HoleEdgePadding() const;

 int32_t __declspec(property(get=__get_m_RenderMode, put=__set_m_RenderMode))  m_RenderMode;

constexpr void __set_m_RenderMode(int32_t value) ;

constexpr int32_t __get_m_RenderMode() const;

 int32_t __declspec(property(get=__get_m_UsePrototypeMesh, put=__set_m_UsePrototypeMesh))  m_UsePrototypeMesh;

constexpr void __set_m_UsePrototypeMesh(int32_t value) ;

constexpr int32_t __get_m_UsePrototypeMesh() const;

 int32_t __declspec(property(get=__get_m_UseInstancing, put=__set_m_UseInstancing))  m_UseInstancing;

constexpr void __set_m_UseInstancing(int32_t value) ;

constexpr int32_t __get_m_UseInstancing() const;


// Properties

 ::UnityEngine::GameObject __declspec(property(put=set_prototype))  prototype;

 ::UnityEngine::Texture2D __declspec(property(put=set_prototypeTexture))  prototypeTexture;

 float_t __declspec(property(get=get_minWidth, put=set_minWidth))  minWidth;

 float_t __declspec(property(get=get_maxWidth, put=set_maxWidth))  maxWidth;

 float_t __declspec(property(get=get_minHeight, put=set_minHeight))  minHeight;

 float_t __declspec(property(get=get_maxHeight, put=set_maxHeight))  maxHeight;

 float_t __declspec(property(get=get_noiseSpread, put=set_noiseSpread))  noiseSpread;

 ::UnityEngine::Color __declspec(property(get=get_healthyColor, put=set_healthyColor))  healthyColor;

 ::UnityEngine::Color __declspec(property(get=get_dryColor, put=set_dryColor))  dryColor;

 ::UnityEngine::DetailRenderMode __declspec(property(get=get_renderMode, put=set_renderMode))  renderMode;

 bool __declspec(property(put=set_usePrototypeMesh))  usePrototypeMesh;


// Methods

/// @brief Method set_prototype addr 0x2ba5260 size 0x8 virtual false final false
 void set_prototype(::UnityEngine::GameObject value) ;

/// @brief Method set_prototypeTexture addr 0x2ba5268 size 0x8 virtual false final false
 void set_prototypeTexture(::UnityEngine::Texture2D value) ;

/// @brief Method get_minWidth addr 0x2ba5270 size 0x8 virtual false final false
 float_t get_minWidth() ;

/// @brief Method set_minWidth addr 0x2ba5278 size 0x8 virtual false final false
 void set_minWidth(float_t value) ;

/// @brief Method get_maxWidth addr 0x2ba5280 size 0x8 virtual false final false
 float_t get_maxWidth() ;

/// @brief Method set_maxWidth addr 0x2ba5288 size 0x8 virtual false final false
 void set_maxWidth(float_t value) ;

/// @brief Method get_minHeight addr 0x2ba5290 size 0x8 virtual false final false
 float_t get_minHeight() ;

/// @brief Method set_minHeight addr 0x2ba5298 size 0x8 virtual false final false
 void set_minHeight(float_t value) ;

/// @brief Method get_maxHeight addr 0x2ba52a0 size 0x8 virtual false final false
 float_t get_maxHeight() ;

/// @brief Method set_maxHeight addr 0x2ba52a8 size 0x8 virtual false final false
 void set_maxHeight(float_t value) ;

/// @brief Method get_noiseSpread addr 0x2ba52b0 size 0x8 virtual false final false
 float_t get_noiseSpread() ;

/// @brief Method set_noiseSpread addr 0x2ba52b8 size 0x8 virtual false final false
 void set_noiseSpread(float_t value) ;

/// @brief Method get_healthyColor addr 0x2ba52c0 size 0xc virtual false final false
 ::UnityEngine::Color get_healthyColor() ;

/// @brief Method set_healthyColor addr 0x2ba52cc size 0xc virtual false final false
 void set_healthyColor(::UnityEngine::Color value) ;

/// @brief Method get_dryColor addr 0x2ba52d8 size 0xc virtual false final false
 ::UnityEngine::Color get_dryColor() ;

/// @brief Method set_dryColor addr 0x2ba52e4 size 0xc virtual false final false
 void set_dryColor(::UnityEngine::Color value) ;

/// @brief Method get_renderMode addr 0x2ba52f0 size 0x8 virtual false final false
 ::UnityEngine::DetailRenderMode get_renderMode() ;

/// @brief Method set_renderMode addr 0x2ba52f8 size 0x8 virtual false final false
 void set_renderMode(::UnityEngine::DetailRenderMode value) ;

/// @brief Method set_usePrototypeMesh addr 0x2ba5300 size 0x1c virtual false final false
 void set_usePrototypeMesh(bool value) ;

// Ctor Parameters []
explicit DetailPrototype() ;

/// @brief Method .ctor addr 0x2ba531c size 0xa0 virtual false final false
 void _ctor() ;

/// @brief Method Equals addr 0x2ba53bc size 0x64 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x2ba560c size 0x8 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Equals addr 0x2ba5420 size 0x1ec virtual false final false
 bool Equals(::UnityEngine::DetailPrototype other) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::DetailPrototype);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::DetailPrototype, "UnityEngine", "DetailPrototype");
