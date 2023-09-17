#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine::Playables {
struct PlayableOutput;
}
namespace UnityEngine::Playables {
struct PlayState;
}
// Forward declare root types
namespace UnityEngine::Playables {
struct ____UnityEngine__Playables__FrameData__EvaluationType;
}
namespace UnityEngine::Playables {
struct ____UnityEngine__Playables__FrameData__Flags;
}
namespace UnityEngine::Playables {
struct FrameData;
}
// Type: ::Flags
namespace UnityEngine::Playables {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10352))
// CS Name: UnityEngine.Playables.FrameData::Flags
struct CORDL_TYPE ____UnityEngine__Playables__FrameData__Flags : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____UnityEngine__Playables__FrameData__Flags(int32_t value__) noexcept;


                    constexpr ____UnityEngine__Playables__FrameData__Flags(____UnityEngine__Playables__FrameData__Flags const&) = default;
                    constexpr ____UnityEngine__Playables__FrameData__Flags(____UnityEngine__Playables__FrameData__Flags&&) = default;
                    constexpr ____UnityEngine__Playables__FrameData__Flags& operator=(____UnityEngine__Playables__FrameData__Flags const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__Playables__FrameData__Flags& operator=(____UnityEngine__Playables__FrameData__Flags&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__Playables__FrameData__Flags(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______UnityEngine__Playables__FrameData__Flags_Unwrapped : int32_t {
__Evaluate = 1,
__SeekOccured = 2,
__Loop = 4,
__Hold = 8,
__EffectivePlayStateDelayed = 16,
__EffectivePlayStatePlaying = 32,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______UnityEngine__Playables__FrameData__Flags_Unwrapped () const noexcept {
return std::bit_cast<______UnityEngine__Playables__FrameData__Flags_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Evaluate offset 0
static ::UnityEngine::Playables::____UnityEngine__Playables__FrameData__Flags const Evaluate;

/// @brief Field SeekOccured offset 0
static ::UnityEngine::Playables::____UnityEngine__Playables__FrameData__Flags const SeekOccured;

/// @brief Field Loop offset 0
static ::UnityEngine::Playables::____UnityEngine__Playables__FrameData__Flags const Loop;

/// @brief Field Hold offset 0
static ::UnityEngine::Playables::____UnityEngine__Playables__FrameData__Flags const Hold;

/// @brief Field EffectivePlayStateDelayed offset 0
static ::UnityEngine::Playables::____UnityEngine__Playables__FrameData__Flags const EffectivePlayStateDelayed;

/// @brief Field EffectivePlayStatePlaying offset 0
static ::UnityEngine::Playables::____UnityEngine__Playables__FrameData__Flags const EffectivePlayStatePlaying;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Playables
// Type: ::EvaluationType
namespace UnityEngine::Playables {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10353))
// CS Name: UnityEngine.Playables.FrameData::EvaluationType
struct CORDL_TYPE ____UnityEngine__Playables__FrameData__EvaluationType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____UnityEngine__Playables__FrameData__EvaluationType(int32_t value__) noexcept;


                    constexpr ____UnityEngine__Playables__FrameData__EvaluationType(____UnityEngine__Playables__FrameData__EvaluationType const&) = default;
                    constexpr ____UnityEngine__Playables__FrameData__EvaluationType(____UnityEngine__Playables__FrameData__EvaluationType&&) = default;
                    constexpr ____UnityEngine__Playables__FrameData__EvaluationType& operator=(____UnityEngine__Playables__FrameData__EvaluationType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__Playables__FrameData__EvaluationType& operator=(____UnityEngine__Playables__FrameData__EvaluationType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__Playables__FrameData__EvaluationType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______UnityEngine__Playables__FrameData__EvaluationType_Unwrapped : int32_t {
__Evaluate = 0,
__Playback = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______UnityEngine__Playables__FrameData__EvaluationType_Unwrapped () const noexcept {
return std::bit_cast<______UnityEngine__Playables__FrameData__EvaluationType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Evaluate offset 0
static ::UnityEngine::Playables::____UnityEngine__Playables__FrameData__EvaluationType const Evaluate;

/// @brief Field Playback offset 0
static ::UnityEngine::Playables::____UnityEngine__Playables__FrameData__EvaluationType const Playback;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Playables
// Type: UnityEngine.Playables::FrameData
namespace UnityEngine::Playables {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10354))
// CS Name: UnityEngine.Playables.FrameData
struct CORDL_TYPE FrameData : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using EvaluationType = ::UnityEngine::Playables::____UnityEngine__Playables__FrameData__EvaluationType;

using Flags = ::UnityEngine::Playables::____UnityEngine__Playables__FrameData__Flags;

// Ctor Parameters [CppParam { name: "m_FrameID", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "m_DeltaTime", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "m_Weight", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_EffectiveWeight", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_EffectiveParentDelay", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "m_EffectiveParentSpeed", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_EffectiveSpeed", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Flags", ty: "::UnityEngine::Playables::____UnityEngine__Playables__FrameData__Flags", modifiers: "", def_value: None }, CppParam { name: "m_Output", ty: "::UnityEngine::Playables::PlayableOutput", modifiers: "", def_value: None }]
constexpr FrameData(uint64_t m_FrameID, double_t m_DeltaTime, float_t m_Weight, float_t m_EffectiveWeight, double_t m_EffectiveParentDelay, float_t m_EffectiveParentSpeed, float_t m_EffectiveSpeed, ::UnityEngine::Playables::____UnityEngine__Playables__FrameData__Flags m_Flags, ::UnityEngine::Playables::PlayableOutput m_Output) noexcept;


                    constexpr FrameData(FrameData const&) = default;
                    constexpr FrameData(FrameData&&) = default;
                    constexpr FrameData& operator=(FrameData const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr FrameData& operator=(FrameData&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x40};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit FrameData(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 uint64_t __declspec(property(get=__get_m_FrameID, put=__set_m_FrameID))  m_FrameID;

constexpr void __set_m_FrameID(uint64_t value) ;

constexpr uint64_t __get_m_FrameID() const;

 double_t __declspec(property(get=__get_m_DeltaTime, put=__set_m_DeltaTime))  m_DeltaTime;

constexpr void __set_m_DeltaTime(double_t value) ;

constexpr double_t __get_m_DeltaTime() const;

 float_t __declspec(property(get=__get_m_Weight, put=__set_m_Weight))  m_Weight;

constexpr void __set_m_Weight(float_t value) ;

constexpr float_t __get_m_Weight() const;

 float_t __declspec(property(get=__get_m_EffectiveWeight, put=__set_m_EffectiveWeight))  m_EffectiveWeight;

constexpr void __set_m_EffectiveWeight(float_t value) ;

constexpr float_t __get_m_EffectiveWeight() const;

 double_t __declspec(property(get=__get_m_EffectiveParentDelay, put=__set_m_EffectiveParentDelay))  m_EffectiveParentDelay;

constexpr void __set_m_EffectiveParentDelay(double_t value) ;

constexpr double_t __get_m_EffectiveParentDelay() const;

 float_t __declspec(property(get=__get_m_EffectiveParentSpeed, put=__set_m_EffectiveParentSpeed))  m_EffectiveParentSpeed;

constexpr void __set_m_EffectiveParentSpeed(float_t value) ;

constexpr float_t __get_m_EffectiveParentSpeed() const;

 float_t __declspec(property(get=__get_m_EffectiveSpeed, put=__set_m_EffectiveSpeed))  m_EffectiveSpeed;

constexpr void __set_m_EffectiveSpeed(float_t value) ;

constexpr float_t __get_m_EffectiveSpeed() const;

 ::UnityEngine::Playables::____UnityEngine__Playables__FrameData__Flags __declspec(property(get=__get_m_Flags, put=__set_m_Flags))  m_Flags;

constexpr void __set_m_Flags(::UnityEngine::Playables::____UnityEngine__Playables__FrameData__Flags value) ;

constexpr ::UnityEngine::Playables::____UnityEngine__Playables__FrameData__Flags __get_m_Flags() const;

 ::UnityEngine::Playables::PlayableOutput __declspec(property(get=__get_m_Output, put=__set_m_Output))  m_Output;

constexpr void __set_m_Output(::UnityEngine::Playables::PlayableOutput value) ;

constexpr ::UnityEngine::Playables::PlayableOutput __get_m_Output() const;


// Properties

 float_t __declspec(property(get=get_deltaTime))  deltaTime;

 float_t __declspec(property(get=get_effectiveSpeed))  effectiveSpeed;

 ::UnityEngine::Playables::____UnityEngine__Playables__FrameData__EvaluationType __declspec(property(get=get_evaluationType))  evaluationType;

 bool __declspec(property(get=get_seekOccurred))  seekOccurred;

 bool __declspec(property(get=get_timeLooped))  timeLooped;

 bool __declspec(property(get=get_timeHeld))  timeHeld;

 ::UnityEngine::Playables::PlayableOutput __declspec(property(get=get_output))  output;

 ::UnityEngine::Playables::PlayState __declspec(property(get=get_effectivePlayState))  effectivePlayState;


// Methods

/// @brief Method HasFlags addr 0x2b7c268 size 0x10 virtual false final false
 bool HasFlags(::UnityEngine::Playables::____UnityEngine__Playables__FrameData__Flags flag) ;

/// @brief Method get_deltaTime addr 0x2b7c278 size 0xc virtual false final false
 float_t get_deltaTime() ;

/// @brief Method get_effectiveSpeed addr 0x2b7c284 size 0x8 virtual false final false
 float_t get_effectiveSpeed() ;

/// @brief Method get_evaluationType addr 0x2b7c28c size 0x10 virtual false final false
 ::UnityEngine::Playables::____UnityEngine__Playables__FrameData__EvaluationType get_evaluationType() ;

/// @brief Method get_seekOccurred addr 0x2b7c29c size 0xc virtual false final false
 bool get_seekOccurred() ;

/// @brief Method get_timeLooped addr 0x2b7c2a8 size 0xc virtual false final false
 bool get_timeLooped() ;

/// @brief Method get_timeHeld addr 0x2b7c2b4 size 0xc virtual false final false
 bool get_timeHeld() ;

/// @brief Method get_output addr 0x2b7c2c0 size 0xc virtual false final false
 ::UnityEngine::Playables::PlayableOutput get_output() ;

/// @brief Method get_effectivePlayState addr 0x2b7c2cc size 0x18 virtual false final false
 ::UnityEngine::Playables::PlayState get_effectivePlayState() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Playables
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Playables::____UnityEngine__Playables__FrameData__EvaluationType, "UnityEngine.Playables", "FrameData/EvaluationType");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Playables::____UnityEngine__Playables__FrameData__Flags, "UnityEngine.Playables", "FrameData/Flags");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Playables::FrameData, "UnityEngine.Playables", "FrameData");
