#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace GlobalNamespace {
class CountdownElementController;
}
namespace GlobalNamespace {
class ITimeProvider;
}
namespace UnityEngine {
class AudioSource;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
// Forward declare root types
namespace GlobalNamespace {
class CountdownController;
}
// Type: ::CountdownController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5647))
// CS Name: CountdownController
class CORDL_TYPE CountdownController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~CountdownController() = default;

// Ctor Parameters [CppParam { name: "", ty: "CountdownController", modifiers: " const&", def_value: None }]
constexpr CountdownController(CountdownController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CountdownController", modifiers: "&&", def_value: None }]
constexpr CountdownController(CountdownController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CountdownController(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr CountdownController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CountdownController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CountdownController& operator=(CountdownController&& o) noexcept = default;
  constexpr CountdownController& operator=(CountdownController const& o) noexcept = default;
                


// Fields

 ::UnityEngine::AudioSource __declspec(property(get=__get__audioSource, put=__set__audioSource))  _audioSource;

constexpr void __set__audioSource(::UnityEngine::AudioSource value) ;

constexpr ::UnityEngine::AudioSource __get__audioSource() const;

 ::ArrayW<::GlobalNamespace::CountdownElementController> __declspec(property(get=__get__countdownElementControllers, put=__set__countdownElementControllers))  _countdownElementControllers;

constexpr void __set__countdownElementControllers(::ArrayW<::GlobalNamespace::CountdownElementController> value) ;

constexpr ::ArrayW<::GlobalNamespace::CountdownElementController> __get__countdownElementControllers() const;

 ::GlobalNamespace::ITimeProvider __declspec(property(get=__get__timeProvider, put=__set__timeProvider))  _timeProvider;

constexpr void __set__timeProvider(::GlobalNamespace::ITimeProvider value) ;

constexpr ::GlobalNamespace::ITimeProvider __get__timeProvider() const;

/// @brief Field kGongTime offset 0
static constexpr float_t  kGongTime{5};

 float_t __declspec(property(get=__get__countdownEndTime, put=__set__countdownEndTime))  _countdownEndTime;

constexpr void __set__countdownEndTime(float_t value) ;

constexpr float_t __get__countdownEndTime() const;

 int32_t __declspec(property(get=__get__currentRemainingSecond, put=__set__currentRemainingSecond))  _currentRemainingSecond;

constexpr void __set__currentRemainingSecond(int32_t value) ;

constexpr int32_t __get__currentRemainingSecond() const;

 bool __declspec(property(get=__get__gongSounded, put=__set__gongSounded))  _gongSounded;

constexpr void __set__gongSounded(bool value) ;

constexpr bool __get__gongSounded() const;

 bool __declspec(property(get=__get__countdownRunning, put=__set__countdownRunning))  _countdownRunning;

constexpr void __set__countdownRunning(bool value) ;

constexpr bool __get__countdownRunning() const;

 ::System::Collections::Generic::Queue_1<::GlobalNamespace::CountdownElementController> __declspec(property(get=__get__countdownElementControllerQueue, put=__set__countdownElementControllerQueue))  _countdownElementControllerQueue;

constexpr void __set__countdownElementControllerQueue(::System::Collections::Generic::Queue_1<::GlobalNamespace::CountdownElementController> value) ;

constexpr ::System::Collections::Generic::Queue_1<::GlobalNamespace::CountdownElementController> __get__countdownElementControllerQueue() const;


// Methods

/// @brief Method Awake addr 0x214b808 size 0x18 virtual false final false
 void Awake() ;

/// @brief Method Update addr 0x214b820 size 0x1c8 virtual false final false
 void Update() ;

/// @brief Method StartCountdown addr 0x214ba4c size 0xf4 virtual false final false
 void StartCountdown(float_t countdownEndTime) ;

/// @brief Method UpdateCountdown addr 0x214bb64 size 0x68 virtual false final false
 void UpdateCountdown(float_t countdownEndTime) ;

/// @brief Method StopCountdown addr 0x214bbcc size 0x78 virtual false final false
 void StopCountdown() ;

// Ctor Parameters []
explicit CountdownController() ;

/// @brief Method .ctor addr 0x214bc44 size 0x84 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::CountdownController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CountdownController, "", "CountdownController");
