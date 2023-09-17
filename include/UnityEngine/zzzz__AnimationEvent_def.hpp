#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace UnityEngine {
struct AnimatorClipInfo;
}
namespace UnityEngine {
struct AnimationEventSource;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct AnimatorStateInfo;
}
namespace UnityEngine {
class AnimationState;
}
// Forward declare root types
namespace UnityEngine {
class AnimationEvent;
}
// Type: UnityEngine::AnimationEvent
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15038))
// CS Name: UnityEngine.AnimationEvent
class CORDL_TYPE AnimationEvent : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x78};

virtual ~AnimationEvent() = default;

// Ctor Parameters [CppParam { name: "", ty: "AnimationEvent", modifiers: " const&", def_value: None }]
constexpr AnimationEvent(AnimationEvent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AnimationEvent", modifiers: "&&", def_value: None }]
constexpr AnimationEvent(AnimationEvent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AnimationEvent(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AnimationEvent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AnimationEvent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AnimationEvent& operator=(AnimationEvent&& o) noexcept = default;
  constexpr AnimationEvent& operator=(AnimationEvent const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get_m_Time, put=__set_m_Time))  m_Time;

constexpr void __set_m_Time(float_t value) ;

constexpr float_t __get_m_Time() const;

 ::StringW __declspec(property(get=__get_m_FunctionName, put=__set_m_FunctionName))  m_FunctionName;

constexpr void __set_m_FunctionName(::StringW value) ;

constexpr ::StringW __get_m_FunctionName() const;

 ::StringW __declspec(property(get=__get_m_StringParameter, put=__set_m_StringParameter))  m_StringParameter;

constexpr void __set_m_StringParameter(::StringW value) ;

constexpr ::StringW __get_m_StringParameter() const;

 ::UnityEngine::Object __declspec(property(get=__get_m_ObjectReferenceParameter, put=__set_m_ObjectReferenceParameter))  m_ObjectReferenceParameter;

constexpr void __set_m_ObjectReferenceParameter(::UnityEngine::Object value) ;

constexpr ::UnityEngine::Object __get_m_ObjectReferenceParameter() const;

 float_t __declspec(property(get=__get_m_FloatParameter, put=__set_m_FloatParameter))  m_FloatParameter;

constexpr void __set_m_FloatParameter(float_t value) ;

constexpr float_t __get_m_FloatParameter() const;

 int32_t __declspec(property(get=__get_m_IntParameter, put=__set_m_IntParameter))  m_IntParameter;

constexpr void __set_m_IntParameter(int32_t value) ;

constexpr int32_t __get_m_IntParameter() const;

 int32_t __declspec(property(get=__get_m_MessageOptions, put=__set_m_MessageOptions))  m_MessageOptions;

constexpr void __set_m_MessageOptions(int32_t value) ;

constexpr int32_t __get_m_MessageOptions() const;

 ::UnityEngine::AnimationEventSource __declspec(property(get=__get_m_Source, put=__set_m_Source))  m_Source;

constexpr void __set_m_Source(::UnityEngine::AnimationEventSource value) ;

constexpr ::UnityEngine::AnimationEventSource __get_m_Source() const;

 ::UnityEngine::AnimationState __declspec(property(get=__get_m_StateSender, put=__set_m_StateSender))  m_StateSender;

constexpr void __set_m_StateSender(::UnityEngine::AnimationState value) ;

constexpr ::UnityEngine::AnimationState __get_m_StateSender() const;

 ::UnityEngine::AnimatorStateInfo __declspec(property(get=__get_m_AnimatorStateInfo, put=__set_m_AnimatorStateInfo))  m_AnimatorStateInfo;

constexpr void __set_m_AnimatorStateInfo(::UnityEngine::AnimatorStateInfo value) ;

constexpr ::UnityEngine::AnimatorStateInfo __get_m_AnimatorStateInfo() const;

 ::UnityEngine::AnimatorClipInfo __declspec(property(get=__get_m_AnimatorClipInfo, put=__set_m_AnimatorClipInfo))  m_AnimatorClipInfo;

constexpr void __set_m_AnimatorClipInfo(::UnityEngine::AnimatorClipInfo value) ;

constexpr ::UnityEngine::AnimatorClipInfo __get_m_AnimatorClipInfo() const;


// Methods

// Ctor Parameters []
explicit AnimationEvent() ;

/// @brief Method .ctor addr 0x2b1aa98 size 0x64 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::AnimationEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AnimationEvent, "UnityEngine", "AnimationEvent");
