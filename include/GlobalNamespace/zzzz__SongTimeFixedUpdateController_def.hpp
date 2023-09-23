#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
namespace System {
class Action;
}
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
class IAudioTimeSource;
}
// Forward declare root types
namespace GlobalNamespace {
class SongTimeFixedUpdateController;
}
// Type: ::SongTimeFixedUpdateController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4069))
// CS Name: SongTimeFixedUpdateController
class CORDL_TYPE SongTimeFixedUpdateController : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~SongTimeFixedUpdateController() = default;

// Ctor Parameters [CppParam { name: "", ty: "SongTimeFixedUpdateController", modifiers: " const&", def_value: None }]
constexpr SongTimeFixedUpdateController(SongTimeFixedUpdateController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SongTimeFixedUpdateController", modifiers: "&&", def_value: None }]
constexpr SongTimeFixedUpdateController(SongTimeFixedUpdateController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SongTimeFixedUpdateController(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr SongTimeFixedUpdateController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SongTimeFixedUpdateController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SongTimeFixedUpdateController& operator=(SongTimeFixedUpdateController&& o) noexcept = default;
  constexpr SongTimeFixedUpdateController& operator=(SongTimeFixedUpdateController const& o) noexcept = default;
                


// Fields

 GlobalNamespace::IAudioTimeSource __declspec(property(get=__get__audioTimeSource, put=__set__audioTimeSource))  _audioTimeSource;

constexpr void __set__audioTimeSource(GlobalNamespace::IAudioTimeSource value) ;

constexpr GlobalNamespace::IAudioTimeSource __get__audioTimeSource() const;

 System::Action_1<float_t> __declspec(property(get=__get_songControllerFixedTimeDidUpdateEvent, put=__set_songControllerFixedTimeDidUpdateEvent))  songControllerFixedTimeDidUpdateEvent;

constexpr void __set_songControllerFixedTimeDidUpdateEvent(System::Action_1<float_t> value) ;

constexpr System::Action_1<float_t> __get_songControllerFixedTimeDidUpdateEvent() const;

 System::Action __declspec(property(get=__get_songControllerTimeDidUpdateEvent, put=__set_songControllerTimeDidUpdateEvent))  songControllerTimeDidUpdateEvent;

constexpr void __set_songControllerTimeDidUpdateEvent(System::Action value) ;

constexpr System::Action __get_songControllerTimeDidUpdateEvent() const;

 float_t __declspec(property(get=__get__accumulator, put=__set__accumulator))  _accumulator;

constexpr void __set__accumulator(float_t value) ;

constexpr float_t __get__accumulator() const;

 float_t __declspec(property(get=__get__interpolationFactor, put=__set__interpolationFactor))  _interpolationFactor;

constexpr void __set__interpolationFactor(float_t value) ;

constexpr float_t __get__interpolationFactor() const;

/// @brief Field kFixedDeltaTime offset 0
static constexpr float_t  kFixedDeltaTime{0.016666668};


// Properties

 float_t __declspec(property(get=get_fixedDeltaTime))  fixedDeltaTime;

 float_t __declspec(property(get=get_interpolationFactor))  interpolationFactor;


// Methods

/// @brief Method add_songControllerFixedTimeDidUpdateEvent addr 0x20bf0cc size 0xb0 virtual false final false
 void add_songControllerFixedTimeDidUpdateEvent(System::Action_1<float_t> value) ;

/// @brief Method remove_songControllerFixedTimeDidUpdateEvent addr 0x20bf17c size 0xb0 virtual false final false
 void remove_songControllerFixedTimeDidUpdateEvent(System::Action_1<float_t> value) ;

/// @brief Method add_songControllerTimeDidUpdateEvent addr 0x20bf22c size 0x9c virtual false final false
 void add_songControllerTimeDidUpdateEvent(System::Action value) ;

/// @brief Method remove_songControllerTimeDidUpdateEvent addr 0x20bf2c8 size 0x9c virtual false final false
 void remove_songControllerTimeDidUpdateEvent(System::Action value) ;

/// @brief Method get_fixedDeltaTime addr 0x20bf364 size 0xc virtual false final false
 float_t get_fixedDeltaTime() ;

/// @brief Method get_interpolationFactor addr 0x20bf370 size 0x8 virtual false final false
 float_t get_interpolationFactor() ;

/// @brief Method Update addr 0x20bf378 size 0x140 virtual false final false
 void Update() ;

// Ctor Parameters []
explicit SongTimeFixedUpdateController() ;

/// @brief Method .ctor addr 0x20bf4b8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::SongTimeFixedUpdateController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SongTimeFixedUpdateController, "", "SongTimeFixedUpdateController");
