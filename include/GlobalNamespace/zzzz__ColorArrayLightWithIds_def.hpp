#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__LightWithIds_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace GlobalNamespace {
class ____GlobalNamespace__LightWithIds__LightWithId;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Vector4;
}
namespace GlobalNamespace {
class MaterialPropertyBlockController;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
// Forward declare root types
namespace GlobalNamespace {
class ColorArrayLightWithIds;
}
namespace GlobalNamespace {
class ____GlobalNamespace__ColorArrayLightWithIds__ColorArrayLightWithId;
}
// Type: ::ColorArrayLightWithId
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14704))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14678))
// CS Name: ColorArrayLightWithIds::ColorArrayLightWithId
class CORDL_TYPE ____GlobalNamespace__ColorArrayLightWithIds__ColorArrayLightWithId : public ::GlobalNamespace::____GlobalNamespace__LightWithIds__LightWithId {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~____GlobalNamespace__ColorArrayLightWithIds__ColorArrayLightWithId() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__ColorArrayLightWithIds__ColorArrayLightWithId", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__ColorArrayLightWithIds__ColorArrayLightWithId(____GlobalNamespace__ColorArrayLightWithIds__ColorArrayLightWithId const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__ColorArrayLightWithIds__ColorArrayLightWithId", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__ColorArrayLightWithIds__ColorArrayLightWithId(____GlobalNamespace__ColorArrayLightWithIds__ColorArrayLightWithId&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__ColorArrayLightWithIds__ColorArrayLightWithId(void* ptr) noexcept : ::GlobalNamespace::____GlobalNamespace__LightWithIds__LightWithId(ptr) {
}


  constexpr ____GlobalNamespace__ColorArrayLightWithIds__ColorArrayLightWithId& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__ColorArrayLightWithIds__ColorArrayLightWithId& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__ColorArrayLightWithIds__ColorArrayLightWithId& operator=(____GlobalNamespace__ColorArrayLightWithIds__ColorArrayLightWithId&& o) noexcept = default;
  constexpr ____GlobalNamespace__ColorArrayLightWithIds__ColorArrayLightWithId& operator=(____GlobalNamespace__ColorArrayLightWithIds__ColorArrayLightWithId const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__index, put=__set__index))  _index;

constexpr void __set__index(int32_t value) ;

constexpr int32_t __get__index() const;

 ::System::Action_2<int32_t,::UnityEngine::Color> __declspec(property(get=__get_didSetColorEvent, put=__set_didSetColorEvent))  didSetColorEvent;

constexpr void __set_didSetColorEvent(::System::Action_2<int32_t,::UnityEngine::Color> value) ;

constexpr ::System::Action_2<int32_t,::UnityEngine::Color> __get_didSetColorEvent() const;


// Methods

/// @brief Method add_didSetColorEvent addr 0x1f9c944 size 0xb0 virtual false final false
 void add_didSetColorEvent(::System::Action_2<int32_t,::UnityEngine::Color> value) ;

/// @brief Method remove_didSetColorEvent addr 0x1f9c9f4 size 0xb0 virtual false final false
 void remove_didSetColorEvent(::System::Action_2<int32_t,::UnityEngine::Color> value) ;

// Ctor Parameters [CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "lightId", ty: "int32_t", modifiers: "", def_value: None }]
explicit ____GlobalNamespace__ColorArrayLightWithIds__ColorArrayLightWithId(int32_t index, int32_t lightId) ;

/// @brief Method .ctor addr 0x1f9cab4 size 0x30 virtual false final false
 void _ctor(int32_t index, int32_t lightId) ;

/// @brief Method ColorWasSet addr 0x1f9cb0c size 0x48 virtual true final false
 void ColorWasSet(::UnityEngine::Color newColor) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ColorArrayLightWithIds
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14705))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14679))
// CS Name: ColorArrayLightWithIds
class CORDL_TYPE ColorArrayLightWithIds : public ::GlobalNamespace::LightWithIds {
public:
// Declarations
using ColorArrayLightWithId = ::GlobalNamespace::____GlobalNamespace__ColorArrayLightWithIds__ColorArrayLightWithId;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~ColorArrayLightWithIds() = default;

// Ctor Parameters [CppParam { name: "", ty: "ColorArrayLightWithIds", modifiers: " const&", def_value: None }]
constexpr ColorArrayLightWithIds(ColorArrayLightWithIds const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ColorArrayLightWithIds", modifiers: "&&", def_value: None }]
constexpr ColorArrayLightWithIds(ColorArrayLightWithIds&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ColorArrayLightWithIds(void* ptr) noexcept : ::GlobalNamespace::LightWithIds(ptr) {
}


  constexpr ColorArrayLightWithIds& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ColorArrayLightWithIds& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ColorArrayLightWithIds& operator=(ColorArrayLightWithIds&& o) noexcept = default;
  constexpr ColorArrayLightWithIds& operator=(ColorArrayLightWithIds const& o) noexcept = default;
                


// Fields

 ::ArrayW<::GlobalNamespace::____GlobalNamespace__ColorArrayLightWithIds__ColorArrayLightWithId> __declspec(property(get=__get__colorArrayLightWithIds, put=__set__colorArrayLightWithIds))  _colorArrayLightWithIds;

constexpr void __set__colorArrayLightWithIds(::ArrayW<::GlobalNamespace::____GlobalNamespace__ColorArrayLightWithIds__ColorArrayLightWithId> value) ;

constexpr ::ArrayW<::GlobalNamespace::____GlobalNamespace__ColorArrayLightWithIds__ColorArrayLightWithId> __get__colorArrayLightWithIds() const;

 ::GlobalNamespace::MaterialPropertyBlockController __declspec(property(get=__get__materialPropertyBlockController, put=__set__materialPropertyBlockController))  _materialPropertyBlockController;

constexpr void __set__materialPropertyBlockController(::GlobalNamespace::MaterialPropertyBlockController value) ;

constexpr ::GlobalNamespace::MaterialPropertyBlockController __get__materialPropertyBlockController() const;

 ::StringW __declspec(property(get=__get__colorsArrayPropertyName, put=__set__colorsArrayPropertyName))  _colorsArrayPropertyName;

constexpr void __set__colorsArrayPropertyName(::StringW value) ;

constexpr ::StringW __get__colorsArrayPropertyName() const;

 int32_t __declspec(property(get=__get__colorsPropertyId, put=__set__colorsPropertyId))  _colorsPropertyId;

constexpr void __set__colorsPropertyId(int32_t value) ;

constexpr int32_t __get__colorsPropertyId() const;

 ::ArrayW<::UnityEngine::Vector4> __declspec(property(get=__get__colorsArray, put=__set__colorsArray))  _colorsArray;

constexpr void __set__colorsArray(::ArrayW<::UnityEngine::Vector4> value) ;

constexpr ::ArrayW<::UnityEngine::Vector4> __get__colorsArray() const;


// Methods

/// @brief Method OnEnable addr 0x1f9c60c size 0x18 virtual true final false
 void OnEnable() ;

/// @brief Method OnDestroy addr 0x1f9c790 size 0x4 virtual false final false
 void OnDestroy() ;

/// @brief Method ProcessNewColorData addr 0x1f9c868 size 0x4 virtual true final false
 void ProcessNewColorData() ;

/// @brief Method GetLightWithIds addr 0x1f9c8b0 size 0x8 virtual true final false
 ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::____GlobalNamespace__LightWithIds__LightWithId> GetLightWithIds() ;

/// @brief Method HandleColorLightWithIdDidSetColor addr 0x1f9c8b8 size 0x8c virtual false final false
 void HandleColorLightWithIdDidSetColor(int32_t index, ::UnityEngine::Color color) ;

/// @brief Method SetColorDataToShader addr 0x1f9c86c size 0x44 virtual false final false
 void SetColorDataToShader() ;

/// @brief Method RegisterArrayForColorChanges addr 0x1f9c628 size 0x168 virtual false final false
 void RegisterArrayForColorChanges() ;

/// @brief Method UnregisterArrayFromColorChanges addr 0x1f9c794 size 0xd4 virtual false final false
 void UnregisterArrayFromColorChanges() ;

// Ctor Parameters []
explicit ColorArrayLightWithIds() ;

/// @brief Method .ctor addr 0x1f9caa4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::ColorArrayLightWithIds);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ColorArrayLightWithIds, "", "ColorArrayLightWithIds");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__ColorArrayLightWithIds__ColorArrayLightWithId);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__ColorArrayLightWithIds__ColorArrayLightWithId, "", "ColorArrayLightWithIds/ColorArrayLightWithId");
