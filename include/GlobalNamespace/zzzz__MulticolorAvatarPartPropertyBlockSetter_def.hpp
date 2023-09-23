#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
struct Color;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace UnityEngine {
class Renderer;
}
namespace UnityEngine {
struct Vector4;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__MulticolorAvatarPartPropertyBlockSetter__ColorData;
}
namespace GlobalNamespace {
class GlobalNamespace__MulticolorAvatarPartPropertyBlockSetter____c;
}
namespace GlobalNamespace {
class MulticolorAvatarPartPropertyBlockSetter;
}
// Type: ::ColorData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4089))
// CS Name: MulticolorAvatarPartPropertyBlockSetter::ColorData
class CORDL_TYPE GlobalNamespace__MulticolorAvatarPartPropertyBlockSetter__ColorData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~GlobalNamespace__MulticolorAvatarPartPropertyBlockSetter__ColorData() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MulticolorAvatarPartPropertyBlockSetter__ColorData", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__MulticolorAvatarPartPropertyBlockSetter__ColorData(GlobalNamespace__MulticolorAvatarPartPropertyBlockSetter__ColorData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MulticolorAvatarPartPropertyBlockSetter__ColorData", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__MulticolorAvatarPartPropertyBlockSetter__ColorData(GlobalNamespace__MulticolorAvatarPartPropertyBlockSetter__ColorData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__MulticolorAvatarPartPropertyBlockSetter__ColorData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__MulticolorAvatarPartPropertyBlockSetter__ColorData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__MulticolorAvatarPartPropertyBlockSetter__ColorData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__MulticolorAvatarPartPropertyBlockSetter__ColorData& operator=(GlobalNamespace__MulticolorAvatarPartPropertyBlockSetter__ColorData&& o) noexcept = default;
  constexpr GlobalNamespace__MulticolorAvatarPartPropertyBlockSetter__ColorData& operator=(GlobalNamespace__MulticolorAvatarPartPropertyBlockSetter__ColorData const& o) noexcept = default;
                


// Fields

 UnityEngine::Color __declspec(property(get=__get__defaultColor, put=__set__defaultColor))  _defaultColor;

constexpr void __set__defaultColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__defaultColor() const;

 float_t __declspec(property(get=__get__darkerColorMultiplier, put=__set__darkerColorMultiplier))  _darkerColorMultiplier;

constexpr void __set__darkerColorMultiplier(float_t value) ;

constexpr float_t __get__darkerColorMultiplier() const;

 float_t __declspec(property(get=__get__whiteBoost, put=__set__whiteBoost))  _whiteBoost;

constexpr void __set__whiteBoost(float_t value) ;

constexpr float_t __get__whiteBoost() const;


// Properties

 UnityEngine::Color __declspec(property(get=get_defaultColor))  defaultColor;

 float_t __declspec(property(get=get_darkerColorMultiplier))  darkerColorMultiplier;

 float_t __declspec(property(get=get_whiteBoost))  whiteBoost;


// Methods

/// @brief Method get_defaultColor addr 0x20c3358 size 0xc virtual false final false
 UnityEngine::Color get_defaultColor() ;

/// @brief Method get_darkerColorMultiplier addr 0x20c3364 size 0x8 virtual false final false
 float_t get_darkerColorMultiplier() ;

/// @brief Method get_whiteBoost addr 0x20c336c size 0x8 virtual false final false
 float_t get_whiteBoost() ;

// Ctor Parameters []
explicit GlobalNamespace__MulticolorAvatarPartPropertyBlockSetter__ColorData() ;

/// @brief Method .ctor addr 0x20c3374 size 0x24 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4090))
// CS Name: MulticolorAvatarPartPropertyBlockSetter::<>c
class CORDL_TYPE GlobalNamespace__MulticolorAvatarPartPropertyBlockSetter____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GlobalNamespace__MulticolorAvatarPartPropertyBlockSetter____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MulticolorAvatarPartPropertyBlockSetter____c", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__MulticolorAvatarPartPropertyBlockSetter____c(GlobalNamespace__MulticolorAvatarPartPropertyBlockSetter____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MulticolorAvatarPartPropertyBlockSetter____c", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__MulticolorAvatarPartPropertyBlockSetter____c(GlobalNamespace__MulticolorAvatarPartPropertyBlockSetter____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__MulticolorAvatarPartPropertyBlockSetter____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__MulticolorAvatarPartPropertyBlockSetter____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__MulticolorAvatarPartPropertyBlockSetter____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__MulticolorAvatarPartPropertyBlockSetter____c& operator=(GlobalNamespace__MulticolorAvatarPartPropertyBlockSetter____c&& o) noexcept = default;
  constexpr GlobalNamespace__MulticolorAvatarPartPropertyBlockSetter____c& operator=(GlobalNamespace__MulticolorAvatarPartPropertyBlockSetter____c const& o) noexcept = default;
                


// Fields

static GlobalNamespace::GlobalNamespace__MulticolorAvatarPartPropertyBlockSetter____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(GlobalNamespace::GlobalNamespace__MulticolorAvatarPartPropertyBlockSetter____c value) ;

static GlobalNamespace::GlobalNamespace__MulticolorAvatarPartPropertyBlockSetter____c __get___9() ;

static System::Func_2<GlobalNamespace::GlobalNamespace__MulticolorAvatarPartPropertyBlockSetter__ColorData,UnityEngine::Color> __declspec(property(get=__get___9__10_0, put=__set___9__10_0))  __9__10_0;

static void __set___9__10_0(System::Func_2<GlobalNamespace::GlobalNamespace__MulticolorAvatarPartPropertyBlockSetter__ColorData,UnityEngine::Color> value) ;

static System::Func_2<GlobalNamespace::GlobalNamespace__MulticolorAvatarPartPropertyBlockSetter__ColorData,UnityEngine::Color> __get___9__10_0() ;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__MulticolorAvatarPartPropertyBlockSetter____c() ;

/// @brief Method .ctor addr 0x20c33fc size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <OnValidate>b__10_0 addr 0x20c3404 size 0x1c virtual false final false
 UnityEngine::Color _OnValidate_b__10_0(GlobalNamespace::GlobalNamespace__MulticolorAvatarPartPropertyBlockSetter__ColorData x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::MulticolorAvatarPartPropertyBlockSetter
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4091))
// CS Name: MulticolorAvatarPartPropertyBlockSetter
class CORDL_TYPE MulticolorAvatarPartPropertyBlockSetter : public UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = GlobalNamespace::GlobalNamespace__MulticolorAvatarPartPropertyBlockSetter____c;

using ColorData = GlobalNamespace::GlobalNamespace__MulticolorAvatarPartPropertyBlockSetter__ColorData;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~MulticolorAvatarPartPropertyBlockSetter() = default;

// Ctor Parameters [CppParam { name: "", ty: "MulticolorAvatarPartPropertyBlockSetter", modifiers: " const&", def_value: None }]
constexpr MulticolorAvatarPartPropertyBlockSetter(MulticolorAvatarPartPropertyBlockSetter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MulticolorAvatarPartPropertyBlockSetter", modifiers: "&&", def_value: None }]
constexpr MulticolorAvatarPartPropertyBlockSetter(MulticolorAvatarPartPropertyBlockSetter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MulticolorAvatarPartPropertyBlockSetter(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MulticolorAvatarPartPropertyBlockSetter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MulticolorAvatarPartPropertyBlockSetter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MulticolorAvatarPartPropertyBlockSetter& operator=(MulticolorAvatarPartPropertyBlockSetter&& o) noexcept = default;
  constexpr MulticolorAvatarPartPropertyBlockSetter& operator=(MulticolorAvatarPartPropertyBlockSetter const& o) noexcept = default;
                


// Fields

 ::ArrayW<GlobalNamespace::GlobalNamespace__MulticolorAvatarPartPropertyBlockSetter__ColorData> __declspec(property(get=__get__colorDataList, put=__set__colorDataList))  _colorDataList;

constexpr void __set__colorDataList(::ArrayW<GlobalNamespace::GlobalNamespace__MulticolorAvatarPartPropertyBlockSetter__ColorData> value) ;

constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__MulticolorAvatarPartPropertyBlockSetter__ColorData> __get__colorDataList() const;

 UnityEngine::Renderer __declspec(property(get=__get__renderer, put=__set__renderer))  _renderer;

constexpr void __set__renderer(UnityEngine::Renderer value) ;

constexpr UnityEngine::Renderer __get__renderer() const;

 bool __declspec(property(get=__get__editInPlayMode, put=__set__editInPlayMode))  _editInPlayMode;

constexpr void __set__editInPlayMode(bool value) ;

constexpr bool __get__editInPlayMode() const;

static UnityEngine::MaterialPropertyBlock __declspec(property(get=__get__materialPropertyBlock, put=__set__materialPropertyBlock))  _materialPropertyBlock;

static void __set__materialPropertyBlock(UnityEngine::MaterialPropertyBlock value) ;

static UnityEngine::MaterialPropertyBlock __get__materialPropertyBlock() ;

 ::ArrayW<UnityEngine::Vector4> __declspec(property(get=__get__colors, put=__set__colors))  _colors;

constexpr void __set__colors(::ArrayW<UnityEngine::Vector4> value) ;

constexpr ::ArrayW<UnityEngine::Vector4> __get__colors() const;

 ::ArrayW<UnityEngine::Vector4> __declspec(property(get=__get__rimLightColors, put=__set__rimLightColors))  _rimLightColors;

constexpr void __set__rimLightColors(::ArrayW<UnityEngine::Vector4> value) ;

constexpr ::ArrayW<UnityEngine::Vector4> __get__rimLightColors() const;

 ::ArrayW<UnityEngine::Color> __declspec(property(get=__get__boostColors, put=__set__boostColors))  _boostColors;

constexpr void __set__boostColors(::ArrayW<UnityEngine::Color> value) ;

constexpr ::ArrayW<UnityEngine::Color> __get__boostColors() const;

 bool __declspec(property(get=__get__highlighted, put=__set__highlighted))  _highlighted;

constexpr void __set__highlighted(bool value) ;

constexpr bool __get__highlighted() const;

 int32_t __declspec(property(get=__get__uvSegment, put=__set__uvSegment))  _uvSegment;

constexpr void __set__uvSegment(int32_t value) ;

constexpr int32_t __get__uvSegment() const;


// Methods

/// @brief Method OnValidate addr 0x20c2ff0 size 0x188 virtual false final false
 void OnValidate() ;

/// @brief Method SetColors addr 0x20c2ab8 size 0x1d0 virtual false final false
 void SetColors(::ArrayW<UnityEngine::Color> colors) ;

/// @brief Method SetHighlight addr 0x20c2da0 size 0x10 virtual false final false
 void SetHighlight(bool highlighted, int32_t uvSegment) ;

/// @brief Method UpdateRenderer addr 0x20c3178 size 0x178 virtual false final false
 void UpdateRenderer() ;

// Ctor Parameters []
explicit MulticolorAvatarPartPropertyBlockSetter() ;

/// @brief Method .ctor addr 0x20c32f0 size 0x68 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__MulticolorAvatarPartPropertyBlockSetter__ColorData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__MulticolorAvatarPartPropertyBlockSetter__ColorData, "", "MulticolorAvatarPartPropertyBlockSetter/ColorData");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__MulticolorAvatarPartPropertyBlockSetter____c);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__MulticolorAvatarPartPropertyBlockSetter____c, "", "MulticolorAvatarPartPropertyBlockSetter/<>c");
NEED_NO_BOX(GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter, "", "MulticolorAvatarPartPropertyBlockSetter");
