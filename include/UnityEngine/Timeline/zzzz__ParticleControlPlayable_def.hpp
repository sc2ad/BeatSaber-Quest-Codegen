#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
class ParticleSystem;
}
namespace UnityEngine::Playables {
struct FrameData;
}
namespace UnityEngine::Playables {
template<typename T>
struct ScriptPlayable_1;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class ParticleControlPlayable;
}
// Type: UnityEngine.Timeline::ParticleControlPlayable
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10361))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14118))
// CS Name: UnityEngine.Timeline.ParticleControlPlayable
class CORDL_TYPE ParticleControlPlayable : public UnityEngine::Playables::PlayableBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~ParticleControlPlayable() = default;

// Ctor Parameters [CppParam { name: "", ty: "ParticleControlPlayable", modifiers: " const&", def_value: None }]
constexpr ParticleControlPlayable(ParticleControlPlayable const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ParticleControlPlayable", modifiers: "&&", def_value: None }]
constexpr ParticleControlPlayable(ParticleControlPlayable&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ParticleControlPlayable(void* ptr) noexcept : UnityEngine::Playables::PlayableBehaviour(ptr) {
}


  constexpr ParticleControlPlayable& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ParticleControlPlayable& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ParticleControlPlayable& operator=(ParticleControlPlayable&& o) noexcept = default;
  constexpr ParticleControlPlayable& operator=(ParticleControlPlayable const& o) noexcept = default;
                


// Fields

/// @brief Field kUnsetTime offset 0
static constexpr float_t  kUnsetTime{340282350000000000000000000000000000000};

 float_t __declspec(property(get=__get_m_LastPlayableTime, put=__set_m_LastPlayableTime))  m_LastPlayableTime;

constexpr void __set_m_LastPlayableTime(float_t value) ;

constexpr float_t __get_m_LastPlayableTime() const;

 float_t __declspec(property(get=__get_m_LastParticleTime, put=__set_m_LastParticleTime))  m_LastParticleTime;

constexpr void __set_m_LastParticleTime(float_t value) ;

constexpr float_t __get_m_LastParticleTime() const;

 uint32_t __declspec(property(get=__get_m_RandomSeed, put=__set_m_RandomSeed))  m_RandomSeed;

constexpr void __set_m_RandomSeed(uint32_t value) ;

constexpr uint32_t __get_m_RandomSeed() const;

 UnityEngine::ParticleSystem __declspec(property(get=__get__particleSystem_k__BackingField, put=__set__particleSystem_k__BackingField))  _particleSystem_k__BackingField;

constexpr void __set__particleSystem_k__BackingField(UnityEngine::ParticleSystem value) ;

constexpr UnityEngine::ParticleSystem __get__particleSystem_k__BackingField() const;


// Properties

 UnityEngine::ParticleSystem __declspec(property(get=get_particleSystem, put=set_particleSystem))  particleSystem;


// Methods

/// @brief Method Create addr 0x2ad3afc size 0x144 virtual false final false
static UnityEngine::Playables::ScriptPlayable_1<UnityEngine::Timeline::ParticleControlPlayable> Create(UnityEngine::Playables::PlayableGraph graph, UnityEngine::ParticleSystem component, uint32_t randomSeed) ;

/// @brief Method get_particleSystem addr 0x2ad3cc0 size 0x8 virtual false final false
 UnityEngine::ParticleSystem get_particleSystem() ;

/// @brief Method set_particleSystem addr 0x2ad3cc8 size 0x8 virtual false final false
 void set_particleSystem(UnityEngine::ParticleSystem value) ;

/// @brief Method Initialize addr 0x2ad3c40 size 0x80 virtual false final false
 void Initialize(UnityEngine::ParticleSystem ps, uint32_t randomSeed) ;

/// @brief Method SetRandomSeed addr 0x2ad3cd0 size 0x13c virtual false final false
static void SetRandomSeed(UnityEngine::ParticleSystem particleSystem, uint32_t randomSeed) ;

/// @brief Method PrepareFrame addr 0x2ad3e0c size 0x1b4 virtual true final false
 void PrepareFrame(UnityEngine::Playables::Playable playable, UnityEngine::Playables::FrameData data) ;

/// @brief Method OnBehaviourPlay addr 0x2ad4084 size 0xc virtual true final false
 void OnBehaviourPlay(UnityEngine::Playables::Playable playable, UnityEngine::Playables::FrameData info) ;

/// @brief Method OnBehaviourPause addr 0x2ad4090 size 0xc virtual true final false
 void OnBehaviourPause(UnityEngine::Playables::Playable playable, UnityEngine::Playables::FrameData info) ;

/// @brief Method Simulate addr 0x2ad3fc0 size 0xc4 virtual false final false
 void Simulate(float_t time, bool restart) ;

static UnityEngine::Timeline::ParticleControlPlayable New_ctor() ;

/// @brief Method .ctor addr 0x2ad409c size 0x1c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
NEED_NO_BOX(UnityEngine::Timeline::ParticleControlPlayable);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::ParticleControlPlayable, "UnityEngine.Timeline", "ParticleControlPlayable");
