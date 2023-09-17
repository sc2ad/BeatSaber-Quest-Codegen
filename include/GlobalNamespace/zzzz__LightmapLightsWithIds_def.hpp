#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__LightWithIds_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace GlobalNamespace {
class ____GlobalNamespace__LightWithIds__LightWithId;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__LightConstants__BakeId;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class LightmapLightsWithIds;
}
namespace GlobalNamespace {
class ____GlobalNamespace__LightmapLightsWithIds__LightIntensitiesWithId;
}
// Type: ::LightIntensitiesWithId
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14704))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14693))
// CS Name: LightmapLightsWithIds::LightIntensitiesWithId
class CORDL_TYPE ____GlobalNamespace__LightmapLightsWithIds__LightIntensitiesWithId : public ::GlobalNamespace::____GlobalNamespace__LightWithIds__LightWithId {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~____GlobalNamespace__LightmapLightsWithIds__LightIntensitiesWithId() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__LightmapLightsWithIds__LightIntensitiesWithId", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__LightmapLightsWithIds__LightIntensitiesWithId(____GlobalNamespace__LightmapLightsWithIds__LightIntensitiesWithId const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__LightmapLightsWithIds__LightIntensitiesWithId", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__LightmapLightsWithIds__LightIntensitiesWithId(____GlobalNamespace__LightmapLightsWithIds__LightIntensitiesWithId&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__LightmapLightsWithIds__LightIntensitiesWithId(void* ptr) noexcept : ::GlobalNamespace::____GlobalNamespace__LightWithIds__LightWithId(ptr) {
}


  constexpr ____GlobalNamespace__LightmapLightsWithIds__LightIntensitiesWithId& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__LightmapLightsWithIds__LightIntensitiesWithId& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__LightmapLightsWithIds__LightIntensitiesWithId& operator=(____GlobalNamespace__LightmapLightsWithIds__LightIntensitiesWithId&& o) noexcept = default;
  constexpr ____GlobalNamespace__LightmapLightsWithIds__LightIntensitiesWithId& operator=(____GlobalNamespace__LightmapLightsWithIds__LightIntensitiesWithId const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::____GlobalNamespace__LightConstants__BakeId __declspec(property(get=__get__bakeId, put=__set__bakeId))  _bakeId;

constexpr void __set__bakeId(::GlobalNamespace::____GlobalNamespace__LightConstants__BakeId value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__LightConstants__BakeId __get__bakeId() const;

 float_t __declspec(property(get=__get__intensity, put=__set__intensity))  _intensity;

constexpr void __set__intensity(float_t value) ;

constexpr float_t __get__intensity() const;

 float_t __declspec(property(get=__get__weight, put=__set__weight))  _weight;

constexpr void __set__weight(float_t value) ;

constexpr float_t __get__weight() const;

 int32_t __declspec(property(get=__get__lightmapLightIdColorPropertyId, put=__set__lightmapLightIdColorPropertyId))  _lightmapLightIdColorPropertyId;

constexpr void __set__lightmapLightIdColorPropertyId(int32_t value) ;

constexpr int32_t __get__lightmapLightIdColorPropertyId() const;

 int32_t __declspec(property(get=__get__lightProbeLightIdColorPropertyId, put=__set__lightProbeLightIdColorPropertyId))  _lightProbeLightIdColorPropertyId;

constexpr void __set__lightProbeLightIdColorPropertyId(int32_t value) ;

constexpr int32_t __get__lightProbeLightIdColorPropertyId() const;

 bool __declspec(property(get=__get__initializedPropertyIds, put=__set__initializedPropertyIds))  _initializedPropertyIds;

constexpr void __set__initializedPropertyIds(bool value) ;

constexpr bool __get__initializedPropertyIds() const;


// Properties

 ::GlobalNamespace::____GlobalNamespace__LightConstants__BakeId __declspec(property(get=get_bakeId))  bakeId;

 float_t __declspec(property(get=get_intensity, put=set_intensity))  intensity;

 float_t __declspec(property(get=get_weight, put=set_weight))  weight;


// Methods

/// @brief Method get_bakeId addr 0x1f9d174 size 0x8 virtual false final false
 ::GlobalNamespace::____GlobalNamespace__LightConstants__BakeId get_bakeId() ;

/// @brief Method get_intensity addr 0x1f9d17c size 0x8 virtual false final false
 float_t get_intensity() ;

/// @brief Method set_intensity addr 0x1f9d184 size 0x8 virtual false final false
 void set_intensity(float_t value) ;

/// @brief Method get_weight addr 0x1f9d18c size 0x8 virtual false final false
 float_t get_weight() ;

/// @brief Method set_weight addr 0x1f9d194 size 0x8 virtual false final false
 void set_weight(float_t value) ;

/// @brief Method SetDataToShaders addr 0x1f9cffc size 0x160 virtual false final false
 void SetDataToShaders(::UnityEngine::Color lightmapColor, ::UnityEngine::Color probeColor) ;

// Ctor Parameters []
explicit ____GlobalNamespace__LightmapLightsWithIds__LightIntensitiesWithId() ;

/// @brief Method .ctor addr 0x1f9d19c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::LightmapLightsWithIds
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14705))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14694))
// CS Name: LightmapLightsWithIds
class CORDL_TYPE LightmapLightsWithIds : public ::GlobalNamespace::LightWithIds {
public:
// Declarations
using LightIntensitiesWithId = ::GlobalNamespace::____GlobalNamespace__LightmapLightsWithIds__LightIntensitiesWithId;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~LightmapLightsWithIds() = default;

// Ctor Parameters [CppParam { name: "", ty: "LightmapLightsWithIds", modifiers: " const&", def_value: None }]
constexpr LightmapLightsWithIds(LightmapLightsWithIds const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LightmapLightsWithIds", modifiers: "&&", def_value: None }]
constexpr LightmapLightsWithIds(LightmapLightsWithIds&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LightmapLightsWithIds(void* ptr) noexcept : ::GlobalNamespace::LightWithIds(ptr) {
}


  constexpr LightmapLightsWithIds& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LightmapLightsWithIds& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LightmapLightsWithIds& operator=(LightmapLightsWithIds&& o) noexcept = default;
  constexpr LightmapLightsWithIds& operator=(LightmapLightsWithIds const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get__maxTotalIntensity, put=__set__maxTotalIntensity))  _maxTotalIntensity;

constexpr void __set__maxTotalIntensity(float_t value) ;

constexpr float_t __get__maxTotalIntensity() const;

 ::ArrayW<::GlobalNamespace::____GlobalNamespace__LightmapLightsWithIds__LightIntensitiesWithId> __declspec(property(get=__get__lightIntensityData, put=__set__lightIntensityData))  _lightIntensityData;

constexpr void __set__lightIntensityData(::ArrayW<::GlobalNamespace::____GlobalNamespace__LightmapLightsWithIds__LightIntensitiesWithId> value) ;

constexpr ::ArrayW<::GlobalNamespace::____GlobalNamespace__LightmapLightsWithIds__LightIntensitiesWithId> __get__lightIntensityData() const;


// Properties

 float_t __declspec(property(get=get_maxTotalIntensity, put=set_maxTotalIntensity))  maxTotalIntensity;


// Methods

/// @brief Method get_maxTotalIntensity addr 0x1f9cdf4 size 0x8 virtual false final false
 float_t get_maxTotalIntensity() ;

/// @brief Method set_maxTotalIntensity addr 0x1f9cdfc size 0x8 virtual false final false
 void set_maxTotalIntensity(float_t value) ;

/// @brief Method ProcessNewColorData addr 0x1f9ce04 size 0x1f8 virtual true final false
 void ProcessNewColorData() ;

/// @brief Method GetLightWithIds addr 0x1f9d15c size 0x8 virtual true final false
 ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::____GlobalNamespace__LightWithIds__LightWithId> GetLightWithIds() ;

// Ctor Parameters []
explicit LightmapLightsWithIds() ;

/// @brief Method .ctor addr 0x1f9d164 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::LightmapLightsWithIds);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightmapLightsWithIds, "", "LightmapLightsWithIds");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__LightmapLightsWithIds__LightIntensitiesWithId);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__LightmapLightsWithIds__LightIntensitiesWithId, "", "LightmapLightsWithIds/LightIntensitiesWithId");
