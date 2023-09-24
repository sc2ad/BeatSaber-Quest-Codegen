#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
namespace GlobalNamespace {
class IAudioTimeSource;
}
// Forward declare root types
namespace GlobalNamespace {
class MockAudioTimeSource;
}
// Type: ::MockAudioTimeSource
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4052))
// CS Name: MockAudioTimeSource
class CORDL_TYPE MockAudioTimeSource : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::IAudioTimeSource
constexpr operator  GlobalNamespace::IAudioTimeSource() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~MockAudioTimeSource() = default;

// Ctor Parameters [CppParam { name: "", ty: "MockAudioTimeSource", modifiers: " const&", def_value: None }]
constexpr MockAudioTimeSource(MockAudioTimeSource const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MockAudioTimeSource", modifiers: "&&", def_value: None }]
constexpr MockAudioTimeSource(MockAudioTimeSource&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MockAudioTimeSource(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MockAudioTimeSource& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MockAudioTimeSource& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MockAudioTimeSource& operator=(MockAudioTimeSource&& o) noexcept = default;
  constexpr MockAudioTimeSource& operator=(MockAudioTimeSource const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get__songTime_k__BackingField, put=__set__songTime_k__BackingField))  _songTime_k__BackingField;

constexpr void __set__songTime_k__BackingField(float_t value) ;

constexpr float_t __get__songTime_k__BackingField() const;

 float_t __declspec(property(get=__get__lastFrameDeltaSongTime_k__BackingField, put=__set__lastFrameDeltaSongTime_k__BackingField))  _lastFrameDeltaSongTime_k__BackingField;

constexpr void __set__lastFrameDeltaSongTime_k__BackingField(float_t value) ;

constexpr float_t __get__lastFrameDeltaSongTime_k__BackingField() const;


// Properties

 float_t __declspec(property(get=get_songTime, put=set_songTime))  songTime;

 float_t __declspec(property(get=get_lastFrameDeltaSongTime, put=set_lastFrameDeltaSongTime))  lastFrameDeltaSongTime;

 float_t __declspec(property(get=get_songEndTime))  songEndTime;

 float_t __declspec(property(get=get_songLength))  songLength;

 bool __declspec(property(get=get_isReady))  isReady;


// Methods

/// @brief Method get_songTime addr 0x20bbb78 size 0x8 virtual true final true
 float_t get_songTime() ;

/// @brief Method set_songTime addr 0x20bbb80 size 0x8 virtual false final false
 void set_songTime(float_t value) ;

/// @brief Method get_lastFrameDeltaSongTime addr 0x20bbb88 size 0x8 virtual true final true
 float_t get_lastFrameDeltaSongTime() ;

/// @brief Method set_lastFrameDeltaSongTime addr 0x20bbb90 size 0x8 virtual false final false
 void set_lastFrameDeltaSongTime(float_t value) ;

/// @brief Method get_songEndTime addr 0x20bbb98 size 0xc virtual true final true
 float_t get_songEndTime() ;

/// @brief Method get_songLength addr 0x20bbba4 size 0xc virtual true final true
 float_t get_songLength() ;

/// @brief Method get_isReady addr 0x20bbbb0 size 0x8 virtual true final true
 bool get_isReady() ;

/// @brief Method Update addr 0x20bbbb8 size 0x38 virtual false final false
 void Update() ;

static GlobalNamespace::MockAudioTimeSource New_ctor() ;

/// @brief Method .ctor addr 0x20bbbf0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MockAudioTimeSource);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MockAudioTimeSource, "", "MockAudioTimeSource");
