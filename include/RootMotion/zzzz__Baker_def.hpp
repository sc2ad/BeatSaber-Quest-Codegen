#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine::Playables {
class PlayableDirector;
}
namespace UnityEngine {
class Animator;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
class AnimationClip;
}
// Forward declare root types
namespace RootMotion {
struct ____RootMotion__Baker__Mode;
}
namespace RootMotion {
class Baker;
}
// Type: ::Mode
namespace RootMotion {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12412))
// CS Name: RootMotion.Baker::Mode
struct CORDL_TYPE ____RootMotion__Baker__Mode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____RootMotion__Baker__Mode(int32_t value__) noexcept;


                    constexpr ____RootMotion__Baker__Mode(____RootMotion__Baker__Mode const&) = default;
                    constexpr ____RootMotion__Baker__Mode(____RootMotion__Baker__Mode&&) = default;
                    constexpr ____RootMotion__Baker__Mode& operator=(____RootMotion__Baker__Mode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____RootMotion__Baker__Mode& operator=(____RootMotion__Baker__Mode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____RootMotion__Baker__Mode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______RootMotion__Baker__Mode_Unwrapped : int32_t {
__AnimationClips = 0,
__AnimationStates = 1,
__PlayableDirector = 2,
__Realtime = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______RootMotion__Baker__Mode_Unwrapped () const noexcept {
return std::bit_cast<______RootMotion__Baker__Mode_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field AnimationClips offset 0
static ::RootMotion::____RootMotion__Baker__Mode const AnimationClips;

/// @brief Field AnimationStates offset 0
static ::RootMotion::____RootMotion__Baker__Mode const AnimationStates;

/// @brief Field PlayableDirector offset 0
static ::RootMotion::____RootMotion__Baker__Mode const PlayableDirector;

/// @brief Field Realtime offset 0
static ::RootMotion::____RootMotion__Baker__Mode const Realtime;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def RootMotion
// Type: RootMotion::Baker
namespace RootMotion {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12413))
// CS Name: RootMotion.Baker
class CORDL_TYPE Baker : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using Mode = ::RootMotion::____RootMotion__Baker__Mode;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x78};

virtual ~Baker() = default;

// Ctor Parameters [CppParam { name: "", ty: "Baker", modifiers: " const&", def_value: None }]
constexpr Baker(Baker const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Baker", modifiers: "&&", def_value: None }]
constexpr Baker(Baker&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Baker(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr Baker& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Baker& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Baker& operator=(Baker&& o) noexcept = default;
  constexpr Baker& operator=(Baker const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_frameRate, put=__set_frameRate))  frameRate;

constexpr void __set_frameRate(int32_t value) ;

constexpr int32_t __get_frameRate() const;

 float_t __declspec(property(get=__get_keyReductionError, put=__set_keyReductionError))  keyReductionError;

constexpr void __set_keyReductionError(float_t value) ;

constexpr float_t __get_keyReductionError() const;

 ::RootMotion::____RootMotion__Baker__Mode __declspec(property(get=__get_mode, put=__set_mode))  mode;

constexpr void __set_mode(::RootMotion::____RootMotion__Baker__Mode value) ;

constexpr ::RootMotion::____RootMotion__Baker__Mode __get_mode() const;

 ::ArrayW<::UnityEngine::AnimationClip> __declspec(property(get=__get_animationClips, put=__set_animationClips))  animationClips;

constexpr void __set_animationClips(::ArrayW<::UnityEngine::AnimationClip> value) ;

constexpr ::ArrayW<::UnityEngine::AnimationClip> __get_animationClips() const;

 ::ArrayW<::StringW> __declspec(property(get=__get_animationStates, put=__set_animationStates))  animationStates;

constexpr void __set_animationStates(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get_animationStates() const;

 bool __declspec(property(get=__get_loop, put=__set_loop))  loop;

constexpr void __set_loop(bool value) ;

constexpr bool __get_loop() const;

 ::StringW __declspec(property(get=__get_saveToFolder, put=__set_saveToFolder))  saveToFolder;

constexpr void __set_saveToFolder(::StringW value) ;

constexpr ::StringW __get_saveToFolder() const;

 ::StringW __declspec(property(get=__get_appendName, put=__set_appendName))  appendName;

constexpr void __set_appendName(::StringW value) ;

constexpr ::StringW __get_appendName() const;

 ::StringW __declspec(property(get=__get_saveName, put=__set_saveName))  saveName;

constexpr void __set_saveName(::StringW value) ;

constexpr ::StringW __get_saveName() const;

 bool __declspec(property(get=__get__isBaking_k__BackingField, put=__set__isBaking_k__BackingField))  _isBaking_k__BackingField;

constexpr void __set__isBaking_k__BackingField(bool value) ;

constexpr bool __get__isBaking_k__BackingField() const;

 float_t __declspec(property(get=__get__bakingProgress_k__BackingField, put=__set__bakingProgress_k__BackingField))  _bakingProgress_k__BackingField;

constexpr void __set__bakingProgress_k__BackingField(float_t value) ;

constexpr float_t __get__bakingProgress_k__BackingField() const;

 ::UnityEngine::Animator __declspec(property(get=__get_animator, put=__set_animator))  animator;

constexpr void __set_animator(::UnityEngine::Animator value) ;

constexpr ::UnityEngine::Animator __get_animator() const;

 ::UnityEngine::Playables::PlayableDirector __declspec(property(get=__get_director, put=__set_director))  director;

constexpr void __set_director(::UnityEngine::Playables::PlayableDirector value) ;

constexpr ::UnityEngine::Playables::PlayableDirector __get_director() const;

 float_t __declspec(property(get=__get__clipLength_k__BackingField, put=__set__clipLength_k__BackingField))  _clipLength_k__BackingField;

constexpr void __set__clipLength_k__BackingField(float_t value) ;

constexpr float_t __get__clipLength_k__BackingField() const;


// Properties

 bool __declspec(property(get=get_isBaking, put=set_isBaking))  isBaking;

 float_t __declspec(property(get=get_bakingProgress, put=set_bakingProgress))  bakingProgress;

 float_t __declspec(property(get=get_clipLength, put=set_clipLength))  clipLength;


// Methods

/// @brief Method OpenUserManual addr 0x11a6948 size 0x44 virtual false final false
 void OpenUserManual() ;

/// @brief Method OpenScriptReference addr 0x11a698c size 0x44 virtual false final false
 void OpenScriptReference() ;

/// @brief Method SupportGroup addr 0x11a69d0 size 0x44 virtual false final false
 void SupportGroup() ;

/// @brief Method ASThread addr 0x11a6a14 size 0x44 virtual false final false
 void ASThread() ;

/// @brief Method get_isBaking addr 0x11a6a58 size 0x8 virtual false final false
 bool get_isBaking() ;

/// @brief Method set_isBaking addr 0x11a6a60 size 0xc virtual false final false
 void set_isBaking(bool value) ;

/// @brief Method get_bakingProgress addr 0x11a6a6c size 0x8 virtual false final false
 float_t get_bakingProgress() ;

/// @brief Method set_bakingProgress addr 0x11a6a74 size 0x8 virtual false final false
 void set_bakingProgress(float_t value) ;

/// @brief Method GetCharacterRoot addr 0x0 size 0xffffffffffffffff virtual true final false
 ::UnityEngine::Transform GetCharacterRoot() ;

/// @brief Method OnStartBaking addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnStartBaking() ;

/// @brief Method OnSetLoopFrame addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnSetLoopFrame(float_t time) ;

/// @brief Method OnSetCurves addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnSetCurves(ByRef<::UnityEngine::AnimationClip> clip) ;

/// @brief Method OnSetKeyframes addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnSetKeyframes(float_t time, bool lastFrame) ;

/// @brief Method get_clipLength addr 0x11a6a7c size 0x8 virtual false final false
 float_t get_clipLength() ;

/// @brief Method set_clipLength addr 0x11a6a84 size 0x8 virtual false final false
 void set_clipLength(float_t value) ;

/// @brief Method BakeClip addr 0x11a6a8c size 0x4 virtual false final false
 void BakeClip() ;

/// @brief Method StartBaking addr 0x11a6a90 size 0x4 virtual false final false
 void StartBaking() ;

/// @brief Method StopBaking addr 0x11a6a94 size 0x4 virtual false final false
 void StopBaking() ;

// Ctor Parameters []
explicit Baker() ;

/// @brief Method .ctor addr 0x11a6a98 size 0xf8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::____RootMotion__Baker__Mode, "RootMotion", "Baker/Mode");
NEED_NO_BOX(::RootMotion::Baker);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::Baker, "RootMotion", "Baker");
