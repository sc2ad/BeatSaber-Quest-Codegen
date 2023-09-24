#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__LightWithIds_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace GlobalNamespace {
class GlobalNamespace__RuntimeLightWithLightGroupIds__LightIntensitiesWithId;
}
namespace GlobalNamespace {
class GlobalNamespace__LightWithIds__LightWithId;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace UnityEngine {
struct Color;
}
namespace GlobalNamespace {
class LightGroup;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__RuntimeLightWithLightGroupIds__LightIntensitiesWithId;
}
namespace GlobalNamespace {
class RuntimeLightWithLightGroupIds;
}
// Type: ::LightIntensitiesWithId
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14704))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14714))
// CS Name: RuntimeLightWithLightGroupIds::LightIntensitiesWithId
class CORDL_TYPE GlobalNamespace__RuntimeLightWithLightGroupIds__LightIntensitiesWithId : public GlobalNamespace::GlobalNamespace__LightWithIds__LightWithId {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~GlobalNamespace__RuntimeLightWithLightGroupIds__LightIntensitiesWithId() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__RuntimeLightWithLightGroupIds__LightIntensitiesWithId", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__RuntimeLightWithLightGroupIds__LightIntensitiesWithId(GlobalNamespace__RuntimeLightWithLightGroupIds__LightIntensitiesWithId const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__RuntimeLightWithLightGroupIds__LightIntensitiesWithId", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__RuntimeLightWithLightGroupIds__LightIntensitiesWithId(GlobalNamespace__RuntimeLightWithLightGroupIds__LightIntensitiesWithId&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__RuntimeLightWithLightGroupIds__LightIntensitiesWithId(void* ptr) noexcept : GlobalNamespace::GlobalNamespace__LightWithIds__LightWithId(ptr) {
}


  constexpr GlobalNamespace__RuntimeLightWithLightGroupIds__LightIntensitiesWithId& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__RuntimeLightWithLightGroupIds__LightIntensitiesWithId& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__RuntimeLightWithLightGroupIds__LightIntensitiesWithId& operator=(GlobalNamespace__RuntimeLightWithLightGroupIds__LightIntensitiesWithId&& o) noexcept = default;
  constexpr GlobalNamespace__RuntimeLightWithLightGroupIds__LightIntensitiesWithId& operator=(GlobalNamespace__RuntimeLightWithLightGroupIds__LightIntensitiesWithId const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get__intensity, put=__set__intensity))  _intensity;

constexpr void __set__intensity(float_t value) ;

constexpr float_t __get__intensity() const;


// Properties

 float_t __declspec(property(get=get_intensity, put=set_intensity))  intensity;


// Methods

/// @brief Method get_intensity addr 0x1fa0540 size 0x8 virtual false final false
 float_t get_intensity() ;

/// @brief Method set_intensity addr 0x1fa0548 size 0x8 virtual false final false
 void set_intensity(float_t value) ;

static GlobalNamespace::GlobalNamespace__RuntimeLightWithLightGroupIds__LightIntensitiesWithId New_ctor(int32_t lightId, float_t intensity) ;

/// @brief Method .ctor addr 0x1fa03a4 size 0x38 virtual false final false
 void _ctor(int32_t lightId, float_t intensity) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::RuntimeLightWithLightGroupIds
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14705))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14715))
// CS Name: RuntimeLightWithLightGroupIds
class CORDL_TYPE RuntimeLightWithLightGroupIds : public GlobalNamespace::LightWithIds {
public:
// Declarations
using LightIntensitiesWithId = GlobalNamespace::GlobalNamespace__RuntimeLightWithLightGroupIds__LightIntensitiesWithId;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~RuntimeLightWithLightGroupIds() = default;

// Ctor Parameters [CppParam { name: "", ty: "RuntimeLightWithLightGroupIds", modifiers: " const&", def_value: None }]
constexpr RuntimeLightWithLightGroupIds(RuntimeLightWithLightGroupIds const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RuntimeLightWithLightGroupIds", modifiers: "&&", def_value: None }]
constexpr RuntimeLightWithLightGroupIds(RuntimeLightWithLightGroupIds&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RuntimeLightWithLightGroupIds(void* ptr) noexcept : GlobalNamespace::LightWithIds(ptr) {
}


  constexpr RuntimeLightWithLightGroupIds& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RuntimeLightWithLightGroupIds& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RuntimeLightWithLightGroupIds& operator=(RuntimeLightWithLightGroupIds&& o) noexcept = default;
  constexpr RuntimeLightWithLightGroupIds& operator=(RuntimeLightWithLightGroupIds const& o) noexcept = default;
                


// Fields

 ::ArrayW<GlobalNamespace::LightGroup> __declspec(property(get=__get__lightGroupList, put=__set__lightGroupList))  _lightGroupList;

constexpr void __set__lightGroupList(::ArrayW<GlobalNamespace::LightGroup> value) ;

constexpr ::ArrayW<GlobalNamespace::LightGroup> __get__lightGroupList() const;

 float_t __declspec(property(get=__get__intensity, put=__set__intensity))  _intensity;

constexpr void __set__intensity(float_t value) ;

constexpr float_t __get__intensity() const;

 float_t __declspec(property(get=__get__maxIntensity, put=__set__maxIntensity))  _maxIntensity;

constexpr void __set__maxIntensity(float_t value) ;

constexpr float_t __get__maxIntensity() const;

 bool __declspec(property(get=__get__multiplyColorByAlpha, put=__set__multiplyColorByAlpha))  _multiplyColorByAlpha;

constexpr void __set__multiplyColorByAlpha(bool value) ;

constexpr bool __get__multiplyColorByAlpha() const;

 ::ArrayW<GlobalNamespace::GlobalNamespace__RuntimeLightWithLightGroupIds__LightIntensitiesWithId> __declspec(property(get=__get__lightIntensityData, put=__set__lightIntensityData))  _lightIntensityData;

constexpr void __set__lightIntensityData(::ArrayW<GlobalNamespace::GlobalNamespace__RuntimeLightWithLightGroupIds__LightIntensitiesWithId> value) ;

constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__RuntimeLightWithLightGroupIds__LightIntensitiesWithId> __get__lightIntensityData() const;


// Methods

/// @brief Method ColorWasSet addr 0x0 size 0xffffffffffffffff virtual true final false
 void ColorWasSet(UnityEngine::Color color) ;

/// @brief Method Awake addr 0x1fa01e4 size 0x1c0 virtual true final false
 void Awake() ;

/// @brief Method ProcessNewColorData addr 0x1fa03dc size 0x13c virtual true final false
 void ProcessNewColorData() ;

/// @brief Method GetLightWithIds addr 0x1fa0538 size 0x8 virtual true final false
 System::Collections::Generic::IEnumerable_1<GlobalNamespace::GlobalNamespace__LightWithIds__LightWithId> GetLightWithIds() ;

/// @brief Method ProcessColor addr 0x1fa0518 size 0x20 virtual false final false
 UnityEngine::Color ProcessColor(UnityEngine::Color color, float_t intensity) ;

static GlobalNamespace::RuntimeLightWithLightGroupIds New_ctor() ;

/// @brief Method .ctor addr 0x1f9cce0 size 0x18 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__RuntimeLightWithLightGroupIds__LightIntensitiesWithId);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__RuntimeLightWithLightGroupIds__LightIntensitiesWithId, "", "RuntimeLightWithLightGroupIds/LightIntensitiesWithId");
NEED_NO_BOX(GlobalNamespace::RuntimeLightWithLightGroupIds);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::RuntimeLightWithLightGroupIds, "", "RuntimeLightWithLightGroupIds");
