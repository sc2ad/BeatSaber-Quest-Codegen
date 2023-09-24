#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include <cmath>
#include <cstdint>
namespace GlobalNamespace {
class BloomFogEnvironmentParams;
}
// Forward declare root types
namespace GlobalNamespace {
class BloomFogSO;
}
// Type: ::BloomFogSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13816))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14615))
// CS Name: BloomFogSO
class CORDL_TYPE BloomFogSO : public GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~BloomFogSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "BloomFogSO", modifiers: " const&", def_value: None }]
constexpr BloomFogSO(BloomFogSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BloomFogSO", modifiers: "&&", def_value: None }]
constexpr BloomFogSO(BloomFogSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BloomFogSO(void* ptr) noexcept : GlobalNamespace::PersistentScriptableObject(ptr) {
}


  constexpr BloomFogSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BloomFogSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BloomFogSO& operator=(BloomFogSO&& o) noexcept = default;
  constexpr BloomFogSO& operator=(BloomFogSO const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get__bloomFogEnabled, put=__set__bloomFogEnabled))  _bloomFogEnabled;

constexpr void __set__bloomFogEnabled(bool value) ;

constexpr bool __get__bloomFogEnabled() const;

 float_t __declspec(property(get=__get__transition, put=__set__transition))  _transition;

constexpr void __set__transition(float_t value) ;

constexpr float_t __get__transition() const;

 float_t __declspec(property(get=__get__autoExposureLimit, put=__set__autoExposureLimit))  _autoExposureLimit;

constexpr void __set__autoExposureLimit(float_t value) ;

constexpr float_t __get__autoExposureLimit() const;

 float_t __declspec(property(get=__get__noteSpawnIntensity, put=__set__noteSpawnIntensity))  _noteSpawnIntensity;

constexpr void __set__noteSpawnIntensity(float_t value) ;

constexpr float_t __get__noteSpawnIntensity() const;

/// @brief Field kBloomFogEnabledKeyword offset 0
static constexpr ::ConstString  kBloomFogEnabledKeyword{u"ENABLE_BLOOM_FOG"};

static int32_t __declspec(property(get=__get__customFogAttenuationID, put=__set__customFogAttenuationID))  _customFogAttenuationID;

static void __set__customFogAttenuationID(int32_t value) ;

static int32_t __get__customFogAttenuationID() ;

static int32_t __declspec(property(get=__get__customFogOffsetID, put=__set__customFogOffsetID))  _customFogOffsetID;

static void __set__customFogOffsetID(int32_t value) ;

static int32_t __get__customFogOffsetID() ;

static int32_t __declspec(property(get=__get__customFogHeightFogStartYID, put=__set__customFogHeightFogStartYID))  _customFogHeightFogStartYID;

static void __set__customFogHeightFogStartYID(int32_t value) ;

static int32_t __get__customFogHeightFogStartYID() ;

static int32_t __declspec(property(get=__get__customFogHeightFogHeightID, put=__set__customFogHeightFogHeightID))  _customFogHeightFogHeightID;

static void __set__customFogHeightFogHeightID(int32_t value) ;

static int32_t __get__customFogHeightFogHeightID() ;

 GlobalNamespace::BloomFogEnvironmentParams __declspec(property(get=__get__defaultFogParams, put=__set__defaultFogParams))  _defaultFogParams;

constexpr void __set__defaultFogParams(GlobalNamespace::BloomFogEnvironmentParams value) ;

constexpr GlobalNamespace::BloomFogEnvironmentParams __get__defaultFogParams() const;

 GlobalNamespace::BloomFogEnvironmentParams __declspec(property(get=__get__transitionFogParams, put=__set__transitionFogParams))  _transitionFogParams;

constexpr void __set__transitionFogParams(GlobalNamespace::BloomFogEnvironmentParams value) ;

constexpr GlobalNamespace::BloomFogEnvironmentParams __get__transitionFogParams() const;


// Properties

 float_t __declspec(property(get=get_transition, put=set_transition))  transition;

 GlobalNamespace::BloomFogEnvironmentParams __declspec(property(get=get_defaultForParams, put=set_defaultForParams))  defaultForParams;

 GlobalNamespace::BloomFogEnvironmentParams __declspec(property(get=get_transitionFogParams, put=set_transitionFogParams))  transitionFogParams;

 bool __declspec(property(get=get_bloomFogEnabled, put=set_bloomFogEnabled))  bloomFogEnabled;

 float_t __declspec(property(get=get_autoExposureLimit))  autoExposureLimit;

 float_t __declspec(property(get=get_noteSpawnIntensity))  noteSpawnIntensity;


// Methods

/// @brief Method set_transition addr 0x1f8ff9c size 0x18 virtual false final false
 void set_transition(float_t value) ;

/// @brief Method get_transition addr 0x1f90650 size 0x8 virtual false final false
 float_t get_transition() ;

/// @brief Method get_defaultForParams addr 0x1f90658 size 0x8 virtual false final false
 GlobalNamespace::BloomFogEnvironmentParams get_defaultForParams() ;

/// @brief Method set_defaultForParams addr 0x1f90478 size 0x9c virtual false final false
 void set_defaultForParams(GlobalNamespace::BloomFogEnvironmentParams value) ;

/// @brief Method get_transitionFogParams addr 0x1f90660 size 0x8 virtual false final false
 GlobalNamespace::BloomFogEnvironmentParams get_transitionFogParams() ;

/// @brief Method set_transitionFogParams addr 0x1f902b8 size 0x98 virtual false final false
 void set_transitionFogParams(GlobalNamespace::BloomFogEnvironmentParams value) ;

/// @brief Method set_bloomFogEnabled addr 0x1f90004 size 0x78 virtual false final false
 void set_bloomFogEnabled(bool value) ;

/// @brief Method get_bloomFogEnabled addr 0x1f90668 size 0x8 virtual false final false
 bool get_bloomFogEnabled() ;

/// @brief Method get_autoExposureLimit addr 0x1f90670 size 0x8 virtual false final false
 float_t get_autoExposureLimit() ;

/// @brief Method get_noteSpawnIntensity addr 0x1f90678 size 0x8 virtual false final false
 float_t get_noteSpawnIntensity() ;

/// @brief Method Setup addr 0x1f8ffb4 size 0x8 virtual false final false
 void Setup(GlobalNamespace::BloomFogEnvironmentParams defaultFogParams) ;

/// @brief Method OnEnable addr 0x1f90680 size 0x1c virtual true final false
 void OnEnable() ;

/// @brief Method UpdateShaderParams addr 0x1f9007c size 0x198 virtual false final false
 void UpdateShaderParams() ;

/// @brief Method SetParams addr 0x1f9069c size 0xe4 virtual false final false
 void SetParams(float_t attenuation, float_t offset, float_t heightFogStartY, float_t heightFogHeight, float_t autoExposureLimit, float_t noteSpawnIntensity) ;

static GlobalNamespace::BloomFogSO New_ctor() ;

/// @brief Method .ctor addr 0x1f90780 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BloomFogSO);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BloomFogSO, "", "BloomFogSO");
