#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
namespace GlobalNamespace {
struct GlobalNamespace__LightConstants__BakeId;
}
namespace GlobalNamespace {
class LightmapLightWithIds;
}
namespace GlobalNamespace {
class LightWithIdManager;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace GlobalNamespace {
class BakedLightsNormalizer;
}
// Type: ::BakedLightsNormalizer
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14672))
// CS Name: BakedLightsNormalizer
class CORDL_TYPE BakedLightsNormalizer : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~BakedLightsNormalizer() = default;

// Ctor Parameters [CppParam { name: "", ty: "BakedLightsNormalizer", modifiers: " const&", def_value: None }]
constexpr BakedLightsNormalizer(BakedLightsNormalizer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BakedLightsNormalizer", modifiers: "&&", def_value: None }]
constexpr BakedLightsNormalizer(BakedLightsNormalizer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BakedLightsNormalizer(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr BakedLightsNormalizer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BakedLightsNormalizer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BakedLightsNormalizer& operator=(BakedLightsNormalizer&& o) noexcept = default;
  constexpr BakedLightsNormalizer& operator=(BakedLightsNormalizer const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get__maxTotalIntensity, put=__set__maxTotalIntensity))  _maxTotalIntensity;

constexpr void __set__maxTotalIntensity(float_t value) ;

constexpr float_t __get__maxTotalIntensity() const;

 System::Collections::Generic::Dictionary_2<GlobalNamespace::GlobalNamespace__LightConstants__BakeId,GlobalNamespace::LightmapLightWithIds> __declspec(property(get=__get__lightmapLightDict, put=__set__lightmapLightDict))  _lightmapLightDict;

constexpr void __set__lightmapLightDict(System::Collections::Generic::Dictionary_2<GlobalNamespace::GlobalNamespace__LightConstants__BakeId,GlobalNamespace::LightmapLightWithIds> value) ;

constexpr System::Collections::Generic::Dictionary_2<GlobalNamespace::GlobalNamespace__LightConstants__BakeId,GlobalNamespace::LightmapLightWithIds> __get__lightmapLightDict() const;

 GlobalNamespace::LightWithIdManager __declspec(property(get=__get__lightManager, put=__set__lightManager))  _lightManager;

constexpr void __set__lightManager(GlobalNamespace::LightWithIdManager value) ;

constexpr GlobalNamespace::LightWithIdManager __get__lightManager() const;

 bool __declspec(property(get=__get__lightmapDictInitialized, put=__set__lightmapDictInitialized))  _lightmapDictInitialized;

constexpr void __set__lightmapDictInitialized(bool value) ;

constexpr bool __get__lightmapDictInitialized() const;

 float_t __declspec(property(get=__get__prevMaxTotalIntensity, put=__set__prevMaxTotalIntensity))  _prevMaxTotalIntensity;

constexpr void __set__prevMaxTotalIntensity(float_t value) ;

constexpr float_t __get__prevMaxTotalIntensity() const;

 float_t __declspec(property(get=__get__grayscaleTotal, put=__set__grayscaleTotal))  _grayscaleTotal;

constexpr void __set__grayscaleTotal(float_t value) ;

constexpr float_t __get__grayscaleTotal() const;

 int32_t __declspec(property(get=__get__lastCalculatedOnFrame, put=__set__lastCalculatedOnFrame))  _lastCalculatedOnFrame;

constexpr void __set__lastCalculatedOnFrame(int32_t value) ;

constexpr int32_t __get__lastCalculatedOnFrame() const;

 bool __declspec(property(get=__get__grayscaleCalculatedOnce, put=__set__grayscaleCalculatedOnce))  _grayscaleCalculatedOnce;

constexpr void __set__grayscaleCalculatedOnce(bool value) ;

constexpr bool __get__grayscaleCalculatedOnce() const;

 bool __declspec(property(get=__get__newUpdates, put=__set__newUpdates))  _newUpdates;

constexpr void __set__newUpdates(bool value) ;

constexpr bool __get__newUpdates() const;

/// @brief Field kMaxFramesWithoutUpdate offset 0
static constexpr int32_t  kMaxFramesWithoutUpdate{5};


// Properties

 System::Collections::Generic::Dictionary_2<GlobalNamespace::GlobalNamespace__LightConstants__BakeId,GlobalNamespace::LightmapLightWithIds> __declspec(property(get=get_lightmapLightDict))  lightmapLightDict;

 float_t __declspec(property(get=get_maxTotalIntensity))  maxTotalIntensity;


// Methods

/// @brief Method get_lightmapLightDict addr 0x1f9bfb8 size 0x8 virtual false final false
 System::Collections::Generic::Dictionary_2<GlobalNamespace::GlobalNamespace__LightConstants__BakeId,GlobalNamespace::LightmapLightWithIds> get_lightmapLightDict() ;

/// @brief Method get_maxTotalIntensity addr 0x1f9bfc0 size 0x8 virtual false final false
 float_t get_maxTotalIntensity() ;

/// @brief Method LateUpdate addr 0x1f9bfc8 size 0x3c virtual false final false
 void LateUpdate() ;

/// @brief Method GetLightmapLights addr 0x1f9c228 size 0x10c virtual false final false
 void GetLightmapLights() ;

/// @brief Method UpdateGrayscaleTotal addr 0x1f9c004 size 0x224 virtual false final false
 void UpdateGrayscaleTotal() ;

/// @brief Method GetNormalizationMultiplier addr 0x1f9c334 size 0x48 virtual false final false
 float_t GetNormalizationMultiplier() ;

// Ctor Parameters []
explicit BakedLightsNormalizer() ;

/// @brief Method .ctor addr 0x1f9c37c size 0x94 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BakedLightsNormalizer);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BakedLightsNormalizer, "", "BakedLightsNormalizer");
