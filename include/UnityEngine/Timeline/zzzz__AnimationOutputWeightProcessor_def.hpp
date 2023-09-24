#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine::Timeline {
class ITimelineEvaluateCallback;
}
namespace UnityEngine::Animations {
struct AnimationPlayableOutput;
}
namespace UnityEngine::Animations {
struct AnimationMotionXToDeltaPlayable;
}
namespace UnityEngine::Timeline {
struct UnityEngine__Timeline__AnimationOutputWeightProcessor__WeightInfo;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class AnimationOutputWeightProcessor;
}
namespace UnityEngine::Timeline {
struct UnityEngine__Timeline__AnimationOutputWeightProcessor__WeightInfo;
}
// Type: ::WeightInfo
namespace UnityEngine::Timeline {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14040))
// CS Name: UnityEngine.Timeline.AnimationOutputWeightProcessor::WeightInfo
struct CORDL_TYPE UnityEngine__Timeline__AnimationOutputWeightProcessor__WeightInfo : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "mixer", ty: "UnityEngine::Playables::Playable", modifiers: "", def_value: None }, CppParam { name: "parentMixer", ty: "UnityEngine::Playables::Playable", modifiers: "", def_value: None }, CppParam { name: "port", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__Timeline__AnimationOutputWeightProcessor__WeightInfo(UnityEngine::Playables::Playable mixer, UnityEngine::Playables::Playable parentMixer, int32_t port) noexcept;


                    constexpr UnityEngine__Timeline__AnimationOutputWeightProcessor__WeightInfo(UnityEngine__Timeline__AnimationOutputWeightProcessor__WeightInfo const&) = default;
                    constexpr UnityEngine__Timeline__AnimationOutputWeightProcessor__WeightInfo(UnityEngine__Timeline__AnimationOutputWeightProcessor__WeightInfo&&) = default;
                    constexpr UnityEngine__Timeline__AnimationOutputWeightProcessor__WeightInfo& operator=(UnityEngine__Timeline__AnimationOutputWeightProcessor__WeightInfo const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__Timeline__AnimationOutputWeightProcessor__WeightInfo& operator=(UnityEngine__Timeline__AnimationOutputWeightProcessor__WeightInfo&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x28};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__Timeline__AnimationOutputWeightProcessor__WeightInfo(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::Playables::Playable __declspec(property(get=__get_mixer, put=__set_mixer))  mixer;

constexpr void __set_mixer(UnityEngine::Playables::Playable value) ;

constexpr UnityEngine::Playables::Playable __get_mixer() const;

 UnityEngine::Playables::Playable __declspec(property(get=__get_parentMixer, put=__set_parentMixer))  parentMixer;

constexpr void __set_parentMixer(UnityEngine::Playables::Playable value) ;

constexpr UnityEngine::Playables::Playable __get_parentMixer() const;

 int32_t __declspec(property(get=__get_port, put=__set_port))  port;

constexpr void __set_port(int32_t value) ;

constexpr int32_t __get_port() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
// Type: UnityEngine.Timeline::AnimationOutputWeightProcessor
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14041))
// CS Name: UnityEngine.Timeline.AnimationOutputWeightProcessor
class CORDL_TYPE AnimationOutputWeightProcessor : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using WeightInfo = UnityEngine::Timeline::UnityEngine__Timeline__AnimationOutputWeightProcessor__WeightInfo;

/// @brief Convert operator to UnityEngine::Timeline::ITimelineEvaluateCallback
constexpr operator  UnityEngine::Timeline::ITimelineEvaluateCallback() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~AnimationOutputWeightProcessor() = default;

// Ctor Parameters [CppParam { name: "", ty: "AnimationOutputWeightProcessor", modifiers: " const&", def_value: None }]
constexpr AnimationOutputWeightProcessor(AnimationOutputWeightProcessor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AnimationOutputWeightProcessor", modifiers: "&&", def_value: None }]
constexpr AnimationOutputWeightProcessor(AnimationOutputWeightProcessor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AnimationOutputWeightProcessor(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AnimationOutputWeightProcessor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AnimationOutputWeightProcessor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AnimationOutputWeightProcessor& operator=(AnimationOutputWeightProcessor&& o) noexcept = default;
  constexpr AnimationOutputWeightProcessor& operator=(AnimationOutputWeightProcessor const& o) noexcept = default;
                


// Fields

 UnityEngine::Animations::AnimationPlayableOutput __declspec(property(get=__get_m_Output, put=__set_m_Output))  m_Output;

constexpr void __set_m_Output(UnityEngine::Animations::AnimationPlayableOutput value) ;

constexpr UnityEngine::Animations::AnimationPlayableOutput __get_m_Output() const;

 UnityEngine::Animations::AnimationMotionXToDeltaPlayable __declspec(property(get=__get_m_MotionXPlayable, put=__set_m_MotionXPlayable))  m_MotionXPlayable;

constexpr void __set_m_MotionXPlayable(UnityEngine::Animations::AnimationMotionXToDeltaPlayable value) ;

constexpr UnityEngine::Animations::AnimationMotionXToDeltaPlayable __get_m_MotionXPlayable() const;

 System::Collections::Generic::List_1<UnityEngine::Timeline::UnityEngine__Timeline__AnimationOutputWeightProcessor__WeightInfo> __declspec(property(get=__get_m_Mixers, put=__set_m_Mixers))  m_Mixers;

constexpr void __set_m_Mixers(System::Collections::Generic::List_1<UnityEngine::Timeline::UnityEngine__Timeline__AnimationOutputWeightProcessor__WeightInfo> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::Timeline::UnityEngine__Timeline__AnimationOutputWeightProcessor__WeightInfo> __get_m_Mixers() const;


// Methods

static UnityEngine::Timeline::AnimationOutputWeightProcessor New_ctor(UnityEngine::Animations::AnimationPlayableOutput output) ;

/// @brief Method .ctor addr 0x2ab69dc size 0xc0 virtual false final false
 void _ctor(UnityEngine::Animations::AnimationPlayableOutput output) ;

/// @brief Method FindMixers addr 0x2ab6a9c size 0xe8 virtual false final false
 void FindMixers() ;

/// @brief Method FindMixers addr 0x2ab6b84 size 0x2c8 virtual false final false
 void FindMixers(UnityEngine::Playables::Playable parent, int32_t port, UnityEngine::Playables::Playable node) ;

/// @brief Method Evaluate addr 0x2ab6e4c size 0x13c virtual true final true
 void Evaluate() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
NEED_NO_BOX(UnityEngine::Timeline::AnimationOutputWeightProcessor);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::AnimationOutputWeightProcessor, "UnityEngine.Timeline", "AnimationOutputWeightProcessor");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::UnityEngine__Timeline__AnimationOutputWeightProcessor__WeightInfo, "UnityEngine.Timeline", "AnimationOutputWeightProcessor/WeightInfo");
