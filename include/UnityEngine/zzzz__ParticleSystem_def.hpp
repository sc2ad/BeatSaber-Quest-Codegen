#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct ParticleSystemStopBehavior;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
struct ParticleSystemCurveMode;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct ParticleSystemGradientMode;
}
namespace UnityEngine {
class Gradient;
}
namespace UnityEngine {
class MeshRenderer;
}
// Forward declare root types
namespace UnityEngine {
class ParticleSystem;
}
namespace UnityEngine {
struct UnityEngine__ParticleSystem__EmissionModule;
}
namespace UnityEngine {
struct UnityEngine__ParticleSystem__EmitParams;
}
namespace UnityEngine {
struct UnityEngine__ParticleSystem__MainModule;
}
namespace UnityEngine {
struct UnityEngine__ParticleSystem__MinMaxCurve;
}
namespace UnityEngine {
struct UnityEngine__ParticleSystem__MinMaxGradient;
}
namespace UnityEngine {
struct UnityEngine__ParticleSystem__Particle;
}
namespace UnityEngine {
struct UnityEngine__ParticleSystem__ShapeModule;
}
namespace UnityEngine {
struct UnityEngine__ParticleSystem__SubEmittersModule;
}
// Type: ::MainModule
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15766))
// CS Name: UnityEngine.ParticleSystem::MainModule
struct CORDL_TYPE UnityEngine__ParticleSystem__MainModule : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "UnityEngine::ParticleSystem", modifiers: "", def_value: None }]
constexpr UnityEngine__ParticleSystem__MainModule(UnityEngine::ParticleSystem m_ParticleSystem) noexcept;


                    constexpr UnityEngine__ParticleSystem__MainModule(UnityEngine__ParticleSystem__MainModule const&) = default;
                    constexpr UnityEngine__ParticleSystem__MainModule(UnityEngine__ParticleSystem__MainModule&&) = default;
                    constexpr UnityEngine__ParticleSystem__MainModule& operator=(UnityEngine__ParticleSystem__MainModule const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__ParticleSystem__MainModule& operator=(UnityEngine__ParticleSystem__MainModule&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__ParticleSystem__MainModule(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::ParticleSystem __declspec(property(get=__get_m_ParticleSystem, put=__set_m_ParticleSystem))  m_ParticleSystem;

constexpr void __set_m_ParticleSystem(UnityEngine::ParticleSystem value) ;

constexpr UnityEngine::ParticleSystem __get_m_ParticleSystem() const;


// Properties

 float_t __declspec(property(get=get_duration))  duration;

 bool __declspec(property(get=get_loop))  loop;

 UnityEngine::UnityEngine__ParticleSystem__MinMaxCurve __declspec(property(put=set_startLifetime))  startLifetime;

 UnityEngine::UnityEngine__ParticleSystem__MinMaxCurve __declspec(property(put=set_startSpeed))  startSpeed;

 float_t __declspec(property(get=get_startSpeedMultiplier, put=set_startSpeedMultiplier))  startSpeedMultiplier;

 UnityEngine::UnityEngine__ParticleSystem__MinMaxGradient __declspec(property(get=get_startColor, put=set_startColor))  startColor;

 float_t __declspec(property(put=set_simulationSpeed))  simulationSpeed;

 int32_t __declspec(property(get=get_maxParticles, put=set_maxParticles))  maxParticles;


// Methods

/// @brief Method .ctor addr 0x2b98ba4 size 0x8 virtual false final false
 void _ctor(UnityEngine::ParticleSystem particleSystem) ;

/// @brief Method get_duration addr 0x2b98dbc size 0x3c virtual false final false
 float_t get_duration() ;

/// @brief Method get_loop addr 0x2b98e34 size 0x3c virtual false final false
 bool get_loop() ;

/// @brief Method set_startLifetime addr 0x2b98eac size 0x44 virtual false final false
 void set_startLifetime(UnityEngine::UnityEngine__ParticleSystem__MinMaxCurve value) ;

/// @brief Method set_startSpeed addr 0x2b98f34 size 0x44 virtual false final false
 void set_startSpeed(UnityEngine::UnityEngine__ParticleSystem__MinMaxCurve value) ;

/// @brief Method get_startSpeedMultiplier addr 0x2b98fbc size 0x3c virtual false final false
 float_t get_startSpeedMultiplier() ;

/// @brief Method set_startSpeedMultiplier addr 0x2b99034 size 0x4c virtual false final false
 void set_startSpeedMultiplier(float_t value) ;

/// @brief Method get_startColor addr 0x2b990cc size 0x78 virtual false final false
 UnityEngine::UnityEngine__ParticleSystem__MinMaxGradient get_startColor() ;

/// @brief Method set_startColor addr 0x2b99188 size 0x44 virtual false final false
 void set_startColor(UnityEngine::UnityEngine__ParticleSystem__MinMaxGradient value) ;

/// @brief Method set_simulationSpeed addr 0x2b99210 size 0x4c virtual false final false
 void set_simulationSpeed(float_t value) ;

/// @brief Method get_maxParticles addr 0x2b992a8 size 0x3c virtual false final false
 int32_t get_maxParticles() ;

/// @brief Method set_maxParticles addr 0x2b99320 size 0x44 virtual false final false
 void set_maxParticles(int32_t value) ;

/// @brief Method get_duration_Injected addr 0x2b98df8 size 0x3c virtual false final false
static float_t get_duration_Injected(ByRef<UnityEngine::UnityEngine__ParticleSystem__MainModule> _unity_self) ;

/// @brief Method get_loop_Injected addr 0x2b98e70 size 0x3c virtual false final false
static bool get_loop_Injected(ByRef<UnityEngine::UnityEngine__ParticleSystem__MainModule> _unity_self) ;

/// @brief Method set_startLifetime_Injected addr 0x2b98ef0 size 0x44 virtual false final false
static void set_startLifetime_Injected(ByRef<UnityEngine::UnityEngine__ParticleSystem__MainModule> _unity_self, ByRef<UnityEngine::UnityEngine__ParticleSystem__MinMaxCurve> value) ;

/// @brief Method set_startSpeed_Injected addr 0x2b98f78 size 0x44 virtual false final false
static void set_startSpeed_Injected(ByRef<UnityEngine::UnityEngine__ParticleSystem__MainModule> _unity_self, ByRef<UnityEngine::UnityEngine__ParticleSystem__MinMaxCurve> value) ;

/// @brief Method get_startSpeedMultiplier_Injected addr 0x2b98ff8 size 0x3c virtual false final false
static float_t get_startSpeedMultiplier_Injected(ByRef<UnityEngine::UnityEngine__ParticleSystem__MainModule> _unity_self) ;

/// @brief Method set_startSpeedMultiplier_Injected addr 0x2b99080 size 0x4c virtual false final false
static void set_startSpeedMultiplier_Injected(ByRef<UnityEngine::UnityEngine__ParticleSystem__MainModule> _unity_self, float_t value) ;

/// @brief Method get_startColor_Injected addr 0x2b99144 size 0x44 virtual false final false
static void get_startColor_Injected(ByRef<UnityEngine::UnityEngine__ParticleSystem__MainModule> _unity_self, ByRef<UnityEngine::UnityEngine__ParticleSystem__MinMaxGradient> ret) ;

/// @brief Method set_startColor_Injected addr 0x2b991cc size 0x44 virtual false final false
static void set_startColor_Injected(ByRef<UnityEngine::UnityEngine__ParticleSystem__MainModule> _unity_self, ByRef<UnityEngine::UnityEngine__ParticleSystem__MinMaxGradient> value) ;

/// @brief Method set_simulationSpeed_Injected addr 0x2b9925c size 0x4c virtual false final false
static void set_simulationSpeed_Injected(ByRef<UnityEngine::UnityEngine__ParticleSystem__MainModule> _unity_self, float_t value) ;

/// @brief Method get_maxParticles_Injected addr 0x2b992e4 size 0x3c virtual false final false
static int32_t get_maxParticles_Injected(ByRef<UnityEngine::UnityEngine__ParticleSystem__MainModule> _unity_self) ;

/// @brief Method set_maxParticles_Injected addr 0x2b99364 size 0x44 virtual false final false
static void set_maxParticles_Injected(ByRef<UnityEngine::UnityEngine__ParticleSystem__MainModule> _unity_self, int32_t value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
// Type: ::EmissionModule
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15767))
// CS Name: UnityEngine.ParticleSystem::EmissionModule
struct CORDL_TYPE UnityEngine__ParticleSystem__EmissionModule : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "UnityEngine::ParticleSystem", modifiers: "", def_value: None }]
constexpr UnityEngine__ParticleSystem__EmissionModule(UnityEngine::ParticleSystem m_ParticleSystem) noexcept;


                    constexpr UnityEngine__ParticleSystem__EmissionModule(UnityEngine__ParticleSystem__EmissionModule const&) = default;
                    constexpr UnityEngine__ParticleSystem__EmissionModule(UnityEngine__ParticleSystem__EmissionModule&&) = default;
                    constexpr UnityEngine__ParticleSystem__EmissionModule& operator=(UnityEngine__ParticleSystem__EmissionModule const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__ParticleSystem__EmissionModule& operator=(UnityEngine__ParticleSystem__EmissionModule&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__ParticleSystem__EmissionModule(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::ParticleSystem __declspec(property(get=__get_m_ParticleSystem, put=__set_m_ParticleSystem))  m_ParticleSystem;

constexpr void __set_m_ParticleSystem(UnityEngine::ParticleSystem value) ;

constexpr UnityEngine::ParticleSystem __get_m_ParticleSystem() const;


// Properties

 bool __declspec(property(get=get_enabled, put=set_enabled))  enabled;


// Methods

/// @brief Method .ctor addr 0x2b98bb0 size 0x8 virtual false final false
 void _ctor(UnityEngine::ParticleSystem particleSystem) ;

/// @brief Method get_enabled addr 0x2b993a8 size 0x3c virtual false final false
 bool get_enabled() ;

/// @brief Method set_enabled addr 0x2b99420 size 0x44 virtual false final false
 void set_enabled(bool value) ;

/// @brief Method get_enabled_Injected addr 0x2b993e4 size 0x3c virtual false final false
static bool get_enabled_Injected(ByRef<UnityEngine::UnityEngine__ParticleSystem__EmissionModule> _unity_self) ;

/// @brief Method set_enabled_Injected addr 0x2b99464 size 0x44 virtual false final false
static void set_enabled_Injected(ByRef<UnityEngine::UnityEngine__ParticleSystem__EmissionModule> _unity_self, bool value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
// Type: ::ShapeModule
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15768))
// CS Name: UnityEngine.ParticleSystem::ShapeModule
struct CORDL_TYPE UnityEngine__ParticleSystem__ShapeModule : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "UnityEngine::ParticleSystem", modifiers: "", def_value: None }]
constexpr UnityEngine__ParticleSystem__ShapeModule(UnityEngine::ParticleSystem m_ParticleSystem) noexcept;


                    constexpr UnityEngine__ParticleSystem__ShapeModule(UnityEngine__ParticleSystem__ShapeModule const&) = default;
                    constexpr UnityEngine__ParticleSystem__ShapeModule(UnityEngine__ParticleSystem__ShapeModule&&) = default;
                    constexpr UnityEngine__ParticleSystem__ShapeModule& operator=(UnityEngine__ParticleSystem__ShapeModule const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__ParticleSystem__ShapeModule& operator=(UnityEngine__ParticleSystem__ShapeModule&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__ParticleSystem__ShapeModule(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::ParticleSystem __declspec(property(get=__get_m_ParticleSystem, put=__set_m_ParticleSystem))  m_ParticleSystem;

constexpr void __set_m_ParticleSystem(UnityEngine::ParticleSystem value) ;

constexpr UnityEngine::ParticleSystem __get_m_ParticleSystem() const;


// Properties

 UnityEngine::MeshRenderer __declspec(property(get=get_meshRenderer, put=set_meshRenderer))  meshRenderer;

 UnityEngine::Vector3 __declspec(property(put=set_rotation))  rotation;


// Methods

/// @brief Method .ctor addr 0x2b98bbc size 0x8 virtual false final false
 void _ctor(UnityEngine::ParticleSystem particleSystem) ;

/// @brief Method get_meshRenderer addr 0x2b994a8 size 0x3c virtual false final false
 UnityEngine::MeshRenderer get_meshRenderer() ;

/// @brief Method set_meshRenderer addr 0x2b99520 size 0x44 virtual false final false
 void set_meshRenderer(UnityEngine::MeshRenderer value) ;

/// @brief Method set_rotation addr 0x2b995a8 size 0x54 virtual false final false
 void set_rotation(UnityEngine::Vector3 value) ;

/// @brief Method get_meshRenderer_Injected addr 0x2b994e4 size 0x3c virtual false final false
static UnityEngine::MeshRenderer get_meshRenderer_Injected(ByRef<UnityEngine::UnityEngine__ParticleSystem__ShapeModule> _unity_self) ;

/// @brief Method set_meshRenderer_Injected addr 0x2b99564 size 0x44 virtual false final false
static void set_meshRenderer_Injected(ByRef<UnityEngine::UnityEngine__ParticleSystem__ShapeModule> _unity_self, UnityEngine::MeshRenderer value) ;

/// @brief Method set_rotation_Injected addr 0x2b995fc size 0x44 virtual false final false
static void set_rotation_Injected(ByRef<UnityEngine::UnityEngine__ParticleSystem__ShapeModule> _unity_self, ByRef<UnityEngine::Vector3> value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
// Type: ::SubEmittersModule
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15769))
// CS Name: UnityEngine.ParticleSystem::SubEmittersModule
struct CORDL_TYPE UnityEngine__ParticleSystem__SubEmittersModule : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "UnityEngine::ParticleSystem", modifiers: "", def_value: None }]
constexpr UnityEngine__ParticleSystem__SubEmittersModule(UnityEngine::ParticleSystem m_ParticleSystem) noexcept;


                    constexpr UnityEngine__ParticleSystem__SubEmittersModule(UnityEngine__ParticleSystem__SubEmittersModule const&) = default;
                    constexpr UnityEngine__ParticleSystem__SubEmittersModule(UnityEngine__ParticleSystem__SubEmittersModule&&) = default;
                    constexpr UnityEngine__ParticleSystem__SubEmittersModule& operator=(UnityEngine__ParticleSystem__SubEmittersModule const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__ParticleSystem__SubEmittersModule& operator=(UnityEngine__ParticleSystem__SubEmittersModule&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__ParticleSystem__SubEmittersModule(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::ParticleSystem __declspec(property(get=__get_m_ParticleSystem, put=__set_m_ParticleSystem))  m_ParticleSystem;

constexpr void __set_m_ParticleSystem(UnityEngine::ParticleSystem value) ;

constexpr UnityEngine::ParticleSystem __get_m_ParticleSystem() const;


// Properties

 int32_t __declspec(property(get=get_subEmittersCount))  subEmittersCount;


// Methods

/// @brief Method .ctor addr 0x2b98bc8 size 0x8 virtual false final false
 void _ctor(UnityEngine::ParticleSystem particleSystem) ;

/// @brief Method get_subEmittersCount addr 0x2b99640 size 0x3c virtual false final false
 int32_t get_subEmittersCount() ;

/// @brief Method GetSubEmitterSystem addr 0x2b996b8 size 0x44 virtual false final false
 UnityEngine::ParticleSystem GetSubEmitterSystem(int32_t index) ;

/// @brief Method get_subEmittersCount_Injected addr 0x2b9967c size 0x3c virtual false final false
static int32_t get_subEmittersCount_Injected(ByRef<UnityEngine::UnityEngine__ParticleSystem__SubEmittersModule> _unity_self) ;

/// @brief Method GetSubEmitterSystem_Injected addr 0x2b996fc size 0x44 virtual false final false
static UnityEngine::ParticleSystem GetSubEmitterSystem_Injected(ByRef<UnityEngine::UnityEngine__ParticleSystem__SubEmittersModule> _unity_self, int32_t index) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
// Type: ::MinMaxCurve
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15770))
// CS Name: UnityEngine.ParticleSystem::MinMaxCurve
struct CORDL_TYPE UnityEngine__ParticleSystem__MinMaxCurve : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_Mode", ty: "UnityEngine::ParticleSystemCurveMode", modifiers: "", def_value: None }, CppParam { name: "m_CurveMultiplier", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_CurveMin", ty: "UnityEngine::AnimationCurve", modifiers: "", def_value: None }, CppParam { name: "m_CurveMax", ty: "UnityEngine::AnimationCurve", modifiers: "", def_value: None }, CppParam { name: "m_ConstantMin", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_ConstantMax", ty: "float_t", modifiers: "", def_value: None }]
constexpr UnityEngine__ParticleSystem__MinMaxCurve(UnityEngine::ParticleSystemCurveMode m_Mode, float_t m_CurveMultiplier, UnityEngine::AnimationCurve m_CurveMin, UnityEngine::AnimationCurve m_CurveMax, float_t m_ConstantMin, float_t m_ConstantMax) noexcept;


                    constexpr UnityEngine__ParticleSystem__MinMaxCurve(UnityEngine__ParticleSystem__MinMaxCurve const&) = default;
                    constexpr UnityEngine__ParticleSystem__MinMaxCurve(UnityEngine__ParticleSystem__MinMaxCurve&&) = default;
                    constexpr UnityEngine__ParticleSystem__MinMaxCurve& operator=(UnityEngine__ParticleSystem__MinMaxCurve const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__ParticleSystem__MinMaxCurve& operator=(UnityEngine__ParticleSystem__MinMaxCurve&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__ParticleSystem__MinMaxCurve(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::ParticleSystemCurveMode __declspec(property(get=__get_m_Mode, put=__set_m_Mode))  m_Mode;

constexpr void __set_m_Mode(UnityEngine::ParticleSystemCurveMode value) ;

constexpr UnityEngine::ParticleSystemCurveMode __get_m_Mode() const;

 float_t __declspec(property(get=__get_m_CurveMultiplier, put=__set_m_CurveMultiplier))  m_CurveMultiplier;

constexpr void __set_m_CurveMultiplier(float_t value) ;

constexpr float_t __get_m_CurveMultiplier() const;

 UnityEngine::AnimationCurve __declspec(property(get=__get_m_CurveMin, put=__set_m_CurveMin))  m_CurveMin;

constexpr void __set_m_CurveMin(UnityEngine::AnimationCurve value) ;

constexpr UnityEngine::AnimationCurve __get_m_CurveMin() const;

 UnityEngine::AnimationCurve __declspec(property(get=__get_m_CurveMax, put=__set_m_CurveMax))  m_CurveMax;

constexpr void __set_m_CurveMax(UnityEngine::AnimationCurve value) ;

constexpr UnityEngine::AnimationCurve __get_m_CurveMax() const;

 float_t __declspec(property(get=__get_m_ConstantMin, put=__set_m_ConstantMin))  m_ConstantMin;

constexpr void __set_m_ConstantMin(float_t value) ;

constexpr float_t __get_m_ConstantMin() const;

 float_t __declspec(property(get=__get_m_ConstantMax, put=__set_m_ConstantMax))  m_ConstantMax;

constexpr void __set_m_ConstantMax(float_t value) ;

constexpr float_t __get_m_ConstantMax() const;


// Properties

 float_t __declspec(property(put=set_constantMax))  constantMax;

 float_t __declspec(property(put=set_constantMin))  constantMin;


// Methods

/// @brief Method .ctor addr 0x2b99740 size 0x14 virtual false final false
 void _ctor(float_t constant) ;

/// @brief Method .ctor addr 0x2b99754 size 0x1c virtual false final false
 void _ctor(float_t min, float_t max) ;

/// @brief Method set_constantMax addr 0x2b99770 size 0x8 virtual false final false
 void set_constantMax(float_t value) ;

/// @brief Method set_constantMin addr 0x2b99778 size 0x8 virtual false final false
 void set_constantMin(float_t value) ;

/// @brief Method op_Implicit addr 0x2b99780 size 0x14 virtual false final false
static UnityEngine::UnityEngine__ParticleSystem__MinMaxCurve op_Implicit_UnityEngine__UnityEngine__ParticleSystem__MinMaxCurve(float_t constant) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
// Type: ::MinMaxGradient
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15771))
// CS Name: UnityEngine.ParticleSystem::MinMaxGradient
struct CORDL_TYPE UnityEngine__ParticleSystem__MinMaxGradient : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_Mode", ty: "UnityEngine::ParticleSystemGradientMode", modifiers: "", def_value: None }, CppParam { name: "m_GradientMin", ty: "UnityEngine::Gradient", modifiers: "", def_value: None }, CppParam { name: "m_GradientMax", ty: "UnityEngine::Gradient", modifiers: "", def_value: None }, CppParam { name: "m_ColorMin", ty: "UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "m_ColorMax", ty: "UnityEngine::Color", modifiers: "", def_value: None }]
constexpr UnityEngine__ParticleSystem__MinMaxGradient(UnityEngine::ParticleSystemGradientMode m_Mode, UnityEngine::Gradient m_GradientMin, UnityEngine::Gradient m_GradientMax, UnityEngine::Color m_ColorMin, UnityEngine::Color m_ColorMax) noexcept;


                    constexpr UnityEngine__ParticleSystem__MinMaxGradient(UnityEngine__ParticleSystem__MinMaxGradient const&) = default;
                    constexpr UnityEngine__ParticleSystem__MinMaxGradient(UnityEngine__ParticleSystem__MinMaxGradient&&) = default;
                    constexpr UnityEngine__ParticleSystem__MinMaxGradient& operator=(UnityEngine__ParticleSystem__MinMaxGradient const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__ParticleSystem__MinMaxGradient& operator=(UnityEngine__ParticleSystem__MinMaxGradient&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x38};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__ParticleSystem__MinMaxGradient(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::ParticleSystemGradientMode __declspec(property(get=__get_m_Mode, put=__set_m_Mode))  m_Mode;

constexpr void __set_m_Mode(UnityEngine::ParticleSystemGradientMode value) ;

constexpr UnityEngine::ParticleSystemGradientMode __get_m_Mode() const;

 UnityEngine::Gradient __declspec(property(get=__get_m_GradientMin, put=__set_m_GradientMin))  m_GradientMin;

constexpr void __set_m_GradientMin(UnityEngine::Gradient value) ;

constexpr UnityEngine::Gradient __get_m_GradientMin() const;

 UnityEngine::Gradient __declspec(property(get=__get_m_GradientMax, put=__set_m_GradientMax))  m_GradientMax;

constexpr void __set_m_GradientMax(UnityEngine::Gradient value) ;

constexpr UnityEngine::Gradient __get_m_GradientMax() const;

 UnityEngine::Color __declspec(property(get=__get_m_ColorMin, put=__set_m_ColorMin))  m_ColorMin;

constexpr void __set_m_ColorMin(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get_m_ColorMin() const;

 UnityEngine::Color __declspec(property(get=__get_m_ColorMax, put=__set_m_ColorMax))  m_ColorMax;

constexpr void __set_m_ColorMax(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get_m_ColorMax() const;


// Properties

 UnityEngine::Color __declspec(property(get=get_color))  color;


// Methods

/// @brief Method .ctor addr 0x2b99794 size 0x1c virtual false final false
 void _ctor(UnityEngine::Color color) ;

/// @brief Method get_color addr 0x2b997b0 size 0xc virtual false final false
 UnityEngine::Color get_color() ;

/// @brief Method op_Implicit addr 0x2b997bc size 0x1c virtual false final false
static UnityEngine::UnityEngine__ParticleSystem__MinMaxGradient op_Implicit_UnityEngine__UnityEngine__ParticleSystem__MinMaxGradient(UnityEngine::Color color) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
// Type: ::Particle
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15772))
// CS Name: UnityEngine.ParticleSystem::Particle
struct CORDL_TYPE UnityEngine__ParticleSystem__Particle : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_Position", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_Velocity", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_AnimatedVelocity", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_InitialVelocity", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_AxisOfRotation", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_Rotation", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_AngularVelocity", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_StartSize", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_StartColor", ty: "UnityEngine::Color32", modifiers: "", def_value: None }, CppParam { name: "m_RandomSeed", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_ParentRandomSeed", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_Lifetime", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_StartLifetime", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_MeshIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_EmitAccumulator0", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_EmitAccumulator1", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Flags", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__ParticleSystem__Particle(UnityEngine::Vector3 m_Position, UnityEngine::Vector3 m_Velocity, UnityEngine::Vector3 m_AnimatedVelocity, UnityEngine::Vector3 m_InitialVelocity, UnityEngine::Vector3 m_AxisOfRotation, UnityEngine::Vector3 m_Rotation, UnityEngine::Vector3 m_AngularVelocity, UnityEngine::Vector3 m_StartSize, UnityEngine::Color32 m_StartColor, uint32_t m_RandomSeed, uint32_t m_ParentRandomSeed, float_t m_Lifetime, float_t m_StartLifetime, int32_t m_MeshIndex, float_t m_EmitAccumulator0, float_t m_EmitAccumulator1, uint32_t m_Flags) noexcept;


                    constexpr UnityEngine__ParticleSystem__Particle(UnityEngine__ParticleSystem__Particle const&) = default;
                    constexpr UnityEngine__ParticleSystem__Particle(UnityEngine__ParticleSystem__Particle&&) = default;
                    constexpr UnityEngine__ParticleSystem__Particle& operator=(UnityEngine__ParticleSystem__Particle const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__ParticleSystem__Particle& operator=(UnityEngine__ParticleSystem__Particle&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x84};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__ParticleSystem__Particle(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::Vector3 __declspec(property(get=__get_m_Position, put=__set_m_Position))  m_Position;

constexpr void __set_m_Position(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_m_Position() const;

 UnityEngine::Vector3 __declspec(property(get=__get_m_Velocity, put=__set_m_Velocity))  m_Velocity;

constexpr void __set_m_Velocity(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_m_Velocity() const;

 UnityEngine::Vector3 __declspec(property(get=__get_m_AnimatedVelocity, put=__set_m_AnimatedVelocity))  m_AnimatedVelocity;

constexpr void __set_m_AnimatedVelocity(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_m_AnimatedVelocity() const;

 UnityEngine::Vector3 __declspec(property(get=__get_m_InitialVelocity, put=__set_m_InitialVelocity))  m_InitialVelocity;

constexpr void __set_m_InitialVelocity(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_m_InitialVelocity() const;

 UnityEngine::Vector3 __declspec(property(get=__get_m_AxisOfRotation, put=__set_m_AxisOfRotation))  m_AxisOfRotation;

constexpr void __set_m_AxisOfRotation(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_m_AxisOfRotation() const;

 UnityEngine::Vector3 __declspec(property(get=__get_m_Rotation, put=__set_m_Rotation))  m_Rotation;

constexpr void __set_m_Rotation(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_m_Rotation() const;

 UnityEngine::Vector3 __declspec(property(get=__get_m_AngularVelocity, put=__set_m_AngularVelocity))  m_AngularVelocity;

constexpr void __set_m_AngularVelocity(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_m_AngularVelocity() const;

 UnityEngine::Vector3 __declspec(property(get=__get_m_StartSize, put=__set_m_StartSize))  m_StartSize;

constexpr void __set_m_StartSize(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_m_StartSize() const;

 UnityEngine::Color32 __declspec(property(get=__get_m_StartColor, put=__set_m_StartColor))  m_StartColor;

constexpr void __set_m_StartColor(UnityEngine::Color32 value) ;

constexpr UnityEngine::Color32 __get_m_StartColor() const;

 uint32_t __declspec(property(get=__get_m_RandomSeed, put=__set_m_RandomSeed))  m_RandomSeed;

constexpr void __set_m_RandomSeed(uint32_t value) ;

constexpr uint32_t __get_m_RandomSeed() const;

 uint32_t __declspec(property(get=__get_m_ParentRandomSeed, put=__set_m_ParentRandomSeed))  m_ParentRandomSeed;

constexpr void __set_m_ParentRandomSeed(uint32_t value) ;

constexpr uint32_t __get_m_ParentRandomSeed() const;

 float_t __declspec(property(get=__get_m_Lifetime, put=__set_m_Lifetime))  m_Lifetime;

constexpr void __set_m_Lifetime(float_t value) ;

constexpr float_t __get_m_Lifetime() const;

 float_t __declspec(property(get=__get_m_StartLifetime, put=__set_m_StartLifetime))  m_StartLifetime;

constexpr void __set_m_StartLifetime(float_t value) ;

constexpr float_t __get_m_StartLifetime() const;

 int32_t __declspec(property(get=__get_m_MeshIndex, put=__set_m_MeshIndex))  m_MeshIndex;

constexpr void __set_m_MeshIndex(int32_t value) ;

constexpr int32_t __get_m_MeshIndex() const;

 float_t __declspec(property(get=__get_m_EmitAccumulator0, put=__set_m_EmitAccumulator0))  m_EmitAccumulator0;

constexpr void __set_m_EmitAccumulator0(float_t value) ;

constexpr float_t __get_m_EmitAccumulator0() const;

 float_t __declspec(property(get=__get_m_EmitAccumulator1, put=__set_m_EmitAccumulator1))  m_EmitAccumulator1;

constexpr void __set_m_EmitAccumulator1(float_t value) ;

constexpr float_t __get_m_EmitAccumulator1() const;

 uint32_t __declspec(property(get=__get_m_Flags, put=__set_m_Flags))  m_Flags;

constexpr void __set_m_Flags(uint32_t value) ;

constexpr uint32_t __get_m_Flags() const;


// Properties

 UnityEngine::Vector3 __declspec(property(put=set_position))  position;

 UnityEngine::Vector3 __declspec(property(put=set_velocity))  velocity;

 float_t __declspec(property(put=set_remainingLifetime))  remainingLifetime;

 float_t __declspec(property(put=set_startLifetime))  startLifetime;

 UnityEngine::Color32 __declspec(property(put=set_startColor))  startColor;

 uint32_t __declspec(property(put=set_randomSeed))  randomSeed;

 float_t __declspec(property(put=set_startSize))  startSize;

 UnityEngine::Vector3 __declspec(property(put=set_rotation3D))  rotation3D;

 UnityEngine::Vector3 __declspec(property(put=set_angularVelocity3D))  angularVelocity3D;

 float_t __declspec(property(put=set_lifetime))  lifetime;


// Methods

/// @brief Method set_position addr 0x2b98cd4 size 0xc virtual false final false
 void set_position(UnityEngine::Vector3 value) ;

/// @brief Method set_velocity addr 0x2b98ce0 size 0xc virtual false final false
 void set_velocity(UnityEngine::Vector3 value) ;

/// @brief Method set_remainingLifetime addr 0x2b997d8 size 0x8 virtual false final false
 void set_remainingLifetime(float_t value) ;

/// @brief Method set_startLifetime addr 0x2b98cf4 size 0x8 virtual false final false
 void set_startLifetime(float_t value) ;

/// @brief Method set_startColor addr 0x2b98d60 size 0x8 virtual false final false
 void set_startColor(UnityEngine::Color32 value) ;

/// @brief Method set_randomSeed addr 0x2b98d68 size 0x8 virtual false final false
 void set_randomSeed(uint32_t value) ;

/// @brief Method set_startSize addr 0x2b98cfc size 0xc virtual false final false
 void set_startSize(float_t value) ;

/// @brief Method set_rotation3D addr 0x2b98d08 size 0x2c virtual false final false
 void set_rotation3D(UnityEngine::Vector3 value) ;

/// @brief Method set_angularVelocity3D addr 0x2b98d34 size 0x2c virtual false final false
 void set_angularVelocity3D(UnityEngine::Vector3 value) ;

/// @brief Method set_lifetime addr 0x2b98cec size 0x8 virtual false final false
 void set_lifetime(float_t value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
// Type: ::EmitParams
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15773))
// CS Name: UnityEngine.ParticleSystem::EmitParams
struct CORDL_TYPE UnityEngine__ParticleSystem__EmitParams : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_Particle", ty: "UnityEngine::UnityEngine__ParticleSystem__Particle", modifiers: "", def_value: None }, CppParam { name: "m_PositionSet", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_VelocitySet", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_AxisOfRotationSet", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_RotationSet", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_AngularVelocitySet", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_StartSizeSet", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_StartColorSet", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_RandomSeedSet", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_StartLifetimeSet", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_MeshIndexSet", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_ApplyShapeToPosition", ty: "bool", modifiers: "", def_value: None }]
constexpr UnityEngine__ParticleSystem__EmitParams(UnityEngine::UnityEngine__ParticleSystem__Particle m_Particle, bool m_PositionSet, bool m_VelocitySet, bool m_AxisOfRotationSet, bool m_RotationSet, bool m_AngularVelocitySet, bool m_StartSizeSet, bool m_StartColorSet, bool m_RandomSeedSet, bool m_StartLifetimeSet, bool m_MeshIndexSet, bool m_ApplyShapeToPosition) noexcept;


                    constexpr UnityEngine__ParticleSystem__EmitParams(UnityEngine__ParticleSystem__EmitParams const&) = default;
                    constexpr UnityEngine__ParticleSystem__EmitParams(UnityEngine__ParticleSystem__EmitParams&&) = default;
                    constexpr UnityEngine__ParticleSystem__EmitParams& operator=(UnityEngine__ParticleSystem__EmitParams const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__ParticleSystem__EmitParams& operator=(UnityEngine__ParticleSystem__EmitParams&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x90};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__ParticleSystem__EmitParams(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::UnityEngine__ParticleSystem__Particle __declspec(property(get=__get_m_Particle, put=__set_m_Particle))  m_Particle;

constexpr void __set_m_Particle(UnityEngine::UnityEngine__ParticleSystem__Particle value) ;

constexpr UnityEngine::UnityEngine__ParticleSystem__Particle __get_m_Particle() const;

 bool __declspec(property(get=__get_m_PositionSet, put=__set_m_PositionSet))  m_PositionSet;

constexpr void __set_m_PositionSet(bool value) ;

constexpr bool __get_m_PositionSet() const;

 bool __declspec(property(get=__get_m_VelocitySet, put=__set_m_VelocitySet))  m_VelocitySet;

constexpr void __set_m_VelocitySet(bool value) ;

constexpr bool __get_m_VelocitySet() const;

 bool __declspec(property(get=__get_m_AxisOfRotationSet, put=__set_m_AxisOfRotationSet))  m_AxisOfRotationSet;

constexpr void __set_m_AxisOfRotationSet(bool value) ;

constexpr bool __get_m_AxisOfRotationSet() const;

 bool __declspec(property(get=__get_m_RotationSet, put=__set_m_RotationSet))  m_RotationSet;

constexpr void __set_m_RotationSet(bool value) ;

constexpr bool __get_m_RotationSet() const;

 bool __declspec(property(get=__get_m_AngularVelocitySet, put=__set_m_AngularVelocitySet))  m_AngularVelocitySet;

constexpr void __set_m_AngularVelocitySet(bool value) ;

constexpr bool __get_m_AngularVelocitySet() const;

 bool __declspec(property(get=__get_m_StartSizeSet, put=__set_m_StartSizeSet))  m_StartSizeSet;

constexpr void __set_m_StartSizeSet(bool value) ;

constexpr bool __get_m_StartSizeSet() const;

 bool __declspec(property(get=__get_m_StartColorSet, put=__set_m_StartColorSet))  m_StartColorSet;

constexpr void __set_m_StartColorSet(bool value) ;

constexpr bool __get_m_StartColorSet() const;

 bool __declspec(property(get=__get_m_RandomSeedSet, put=__set_m_RandomSeedSet))  m_RandomSeedSet;

constexpr void __set_m_RandomSeedSet(bool value) ;

constexpr bool __get_m_RandomSeedSet() const;

 bool __declspec(property(get=__get_m_StartLifetimeSet, put=__set_m_StartLifetimeSet))  m_StartLifetimeSet;

constexpr void __set_m_StartLifetimeSet(bool value) ;

constexpr bool __get_m_StartLifetimeSet() const;

 bool __declspec(property(get=__get_m_MeshIndexSet, put=__set_m_MeshIndexSet))  m_MeshIndexSet;

constexpr void __set_m_MeshIndexSet(bool value) ;

constexpr bool __get_m_MeshIndexSet() const;

 bool __declspec(property(get=__get_m_ApplyShapeToPosition, put=__set_m_ApplyShapeToPosition))  m_ApplyShapeToPosition;

constexpr void __set_m_ApplyShapeToPosition(bool value) ;

constexpr bool __get_m_ApplyShapeToPosition() const;


// Properties

 UnityEngine::Vector3 __declspec(property(put=set_position))  position;

 bool __declspec(property(put=set_applyShapeToPosition))  applyShapeToPosition;

 UnityEngine::Vector3 __declspec(property(put=set_rotation3D))  rotation3D;

 UnityEngine::Color32 __declspec(property(put=set_startColor))  startColor;


// Methods

/// @brief Method set_position addr 0x2b997e0 size 0x14 virtual false final false
 void set_position(UnityEngine::Vector3 value) ;

/// @brief Method set_applyShapeToPosition addr 0x2b997f4 size 0xc virtual false final false
 void set_applyShapeToPosition(bool value) ;

/// @brief Method set_rotation3D addr 0x2b99800 size 0x34 virtual false final false
 void set_rotation3D(UnityEngine::Vector3 value) ;

/// @brief Method set_startColor addr 0x2b99834 size 0x10 virtual false final false
 void set_startColor(UnityEngine::Color32 value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
// Type: UnityEngine::ParticleSystem
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10179))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15774))
// CS Name: UnityEngine.ParticleSystem
class CORDL_TYPE ParticleSystem : public UnityEngine::Component {
public:
// Declarations
using EmitParams = UnityEngine::UnityEngine__ParticleSystem__EmitParams;

using Particle = UnityEngine::UnityEngine__ParticleSystem__Particle;

using MinMaxGradient = UnityEngine::UnityEngine__ParticleSystem__MinMaxGradient;

using MinMaxCurve = UnityEngine::UnityEngine__ParticleSystem__MinMaxCurve;

using SubEmittersModule = UnityEngine::UnityEngine__ParticleSystem__SubEmittersModule;

using ShapeModule = UnityEngine::UnityEngine__ParticleSystem__ShapeModule;

using EmissionModule = UnityEngine::UnityEngine__ParticleSystem__EmissionModule;

using MainModule = UnityEngine::UnityEngine__ParticleSystem__MainModule;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~ParticleSystem() = default;

// Ctor Parameters [CppParam { name: "", ty: "ParticleSystem", modifiers: " const&", def_value: None }]
constexpr ParticleSystem(ParticleSystem const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ParticleSystem", modifiers: "&&", def_value: None }]
constexpr ParticleSystem(ParticleSystem&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ParticleSystem(void* ptr) noexcept : UnityEngine::Component(ptr) {
}


  constexpr ParticleSystem& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ParticleSystem& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ParticleSystem& operator=(ParticleSystem&& o) noexcept = default;
  constexpr ParticleSystem& operator=(ParticleSystem const& o) noexcept = default;
                


// Properties

 int32_t __declspec(property(get=get_particleCount))  particleCount;

 float_t __declspec(property(get=get_time))  time;

 uint32_t __declspec(property(put=set_randomSeed))  randomSeed;

 bool __declspec(property(get=get_useAutoRandomSeed, put=set_useAutoRandomSeed))  useAutoRandomSeed;

 UnityEngine::UnityEngine__ParticleSystem__MainModule __declspec(property(get=get_main))  main;

 UnityEngine::UnityEngine__ParticleSystem__EmissionModule __declspec(property(get=get_emission))  emission;

 UnityEngine::UnityEngine__ParticleSystem__ShapeModule __declspec(property(get=get_shape))  shape;

 UnityEngine::UnityEngine__ParticleSystem__SubEmittersModule __declspec(property(get=get_subEmitters))  subEmitters;


// Methods

/// @brief Method get_particleCount addr 0x2b98448 size 0x3c virtual false final false
 int32_t get_particleCount() ;

/// @brief Method get_time addr 0x2b98484 size 0x3c virtual false final false
 float_t get_time() ;

/// @brief Method set_randomSeed addr 0x2b984c0 size 0x44 virtual false final false
 void set_randomSeed(uint32_t value) ;

/// @brief Method get_useAutoRandomSeed addr 0x2b98504 size 0x3c virtual false final false
 bool get_useAutoRandomSeed() ;

/// @brief Method set_useAutoRandomSeed addr 0x2b98540 size 0x44 virtual false final false
 void set_useAutoRandomSeed(bool value) ;

/// @brief Method SetParticles addr 0x2b98584 size 0x5c virtual false final false
 void SetParticles(ByRef<::ArrayW<UnityEngine::UnityEngine__ParticleSystem__Particle>> particles, int32_t size, int32_t offset) ;

/// @brief Method SetParticles addr 0x2b985e0 size 0x58 virtual false final false
 void SetParticles(ByRef<::ArrayW<UnityEngine::UnityEngine__ParticleSystem__Particle>> particles, int32_t size) ;

/// @brief Method GetParticles addr 0x2b98638 size 0x5c virtual false final false
 int32_t GetParticles(ByRef<::ArrayW<UnityEngine::UnityEngine__ParticleSystem__Particle>> particles, int32_t size, int32_t offset) ;

/// @brief Method GetParticles addr 0x2b98694 size 0x58 virtual false final false
 int32_t GetParticles(ByRef<::ArrayW<UnityEngine::UnityEngine__ParticleSystem__Particle>> particles, int32_t size) ;

/// @brief Method Simulate addr 0x2b986ec size 0x6c virtual false final false
 void Simulate(float_t t, bool withChildren, bool restart, bool fixedTimeStep) ;

/// @brief Method Simulate addr 0x2b98758 size 0x68 virtual false final false
 void Simulate(float_t t, bool withChildren, bool restart) ;

/// @brief Method Play addr 0x2b987c0 size 0x44 virtual false final false
 void Play(bool withChildren) ;

/// @brief Method Play addr 0x2b98804 size 0x40 virtual false final false
 void Play() ;

/// @brief Method Pause addr 0x2b98844 size 0x44 virtual false final false
 void Pause(bool withChildren) ;

/// @brief Method Pause addr 0x2b98888 size 0x40 virtual false final false
 void Pause() ;

/// @brief Method Stop addr 0x2b988c8 size 0x54 virtual false final false
 void Stop(bool withChildren, UnityEngine::ParticleSystemStopBehavior stopBehavior) ;

/// @brief Method Stop addr 0x2b9891c size 0x48 virtual false final false
 void Stop(bool withChildren) ;

/// @brief Method Stop addr 0x2b98964 size 0x44 virtual false final false
 void Stop() ;

/// @brief Method Clear addr 0x2b989a8 size 0x44 virtual false final false
 void Clear(bool withChildren) ;

/// @brief Method Clear addr 0x2b989ec size 0x40 virtual false final false
 void Clear() ;

/// @brief Method Emit addr 0x2b98a2c size 0x44 virtual false final false
 void Emit(int32_t count) ;

/// @brief Method Emit_Internal addr 0x2b98a70 size 0x44 virtual false final false
 void Emit_Internal(int32_t count) ;

/// @brief Method Emit addr 0x2b98ab4 size 0x54 virtual false final false
 void Emit(UnityEngine::UnityEngine__ParticleSystem__EmitParams emitParams, int32_t count) ;

/// @brief Method EmitOld_Internal addr 0x2b98b5c size 0x44 virtual false final false
 void EmitOld_Internal(ByRef<UnityEngine::UnityEngine__ParticleSystem__Particle> particle) ;

/// @brief Method get_main addr 0x2b98ba0 size 0x4 virtual false final false
 UnityEngine::UnityEngine__ParticleSystem__MainModule get_main() ;

/// @brief Method get_emission addr 0x2b98bac size 0x4 virtual false final false
 UnityEngine::UnityEngine__ParticleSystem__EmissionModule get_emission() ;

/// @brief Method get_shape addr 0x2b98bb8 size 0x4 virtual false final false
 UnityEngine::UnityEngine__ParticleSystem__ShapeModule get_shape() ;

/// @brief Method get_subEmitters addr 0x2b98bc4 size 0x4 virtual false final false
 UnityEngine::UnityEngine__ParticleSystem__SubEmittersModule get_subEmitters() ;

/// @brief Method Emit addr 0x2b98bd0 size 0x104 virtual false final false
 void Emit(UnityEngine::Vector3 position, UnityEngine::Vector3 velocity, float_t size, float_t lifetime, UnityEngine::Color32 color) ;

/// @brief Method Emit addr 0x2b98d70 size 0x44 virtual false final false
 void Emit(UnityEngine::UnityEngine__ParticleSystem__Particle particle) ;

// Ctor Parameters []
explicit ParticleSystem() ;

/// @brief Method .ctor addr 0x2b98db4 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method Emit_Injected addr 0x2b98b08 size 0x54 virtual false final false
 void Emit_Injected(ByRef<UnityEngine::UnityEngine__ParticleSystem__EmitParams> emitParams, int32_t count) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::ParticleSystem);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ParticleSystem, "UnityEngine", "ParticleSystem");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UnityEngine__ParticleSystem__EmissionModule, "UnityEngine", "ParticleSystem/EmissionModule");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UnityEngine__ParticleSystem__EmitParams, "UnityEngine", "ParticleSystem/EmitParams");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UnityEngine__ParticleSystem__MainModule, "UnityEngine", "ParticleSystem/MainModule");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UnityEngine__ParticleSystem__MinMaxCurve, "UnityEngine", "ParticleSystem/MinMaxCurve");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UnityEngine__ParticleSystem__MinMaxGradient, "UnityEngine", "ParticleSystem/MinMaxGradient");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UnityEngine__ParticleSystem__Particle, "UnityEngine", "ParticleSystem/Particle");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UnityEngine__ParticleSystem__ShapeModule, "UnityEngine", "ParticleSystem/ShapeModule");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UnityEngine__ParticleSystem__SubEmittersModule, "UnityEngine", "ParticleSystem/SubEmittersModule");
