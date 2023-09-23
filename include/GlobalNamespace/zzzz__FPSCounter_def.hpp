#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
// Forward declare root types
namespace GlobalNamespace {
class FPSCounter;
}
// Type: ::FPSCounter
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5455))
// CS Name: FPSCounter
class CORDL_TYPE FPSCounter : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~FPSCounter() = default;

// Ctor Parameters [CppParam { name: "", ty: "FPSCounter", modifiers: " const&", def_value: None }]
constexpr FPSCounter(FPSCounter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FPSCounter", modifiers: "&&", def_value: None }]
constexpr FPSCounter(FPSCounter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FPSCounter(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr FPSCounter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FPSCounter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FPSCounter& operator=(FPSCounter&& o) noexcept = default;
  constexpr FPSCounter& operator=(FPSCounter const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__currentFPS_k__BackingField, put=__set__currentFPS_k__BackingField))  _currentFPS_k__BackingField;

constexpr void __set__currentFPS_k__BackingField(int32_t value) ;

constexpr int32_t __get__currentFPS_k__BackingField() const;

 int32_t __declspec(property(get=__get__lowestFPS_k__BackingField, put=__set__lowestFPS_k__BackingField))  _lowestFPS_k__BackingField;

constexpr void __set__lowestFPS_k__BackingField(int32_t value) ;

constexpr int32_t __get__lowestFPS_k__BackingField() const;

 int32_t __declspec(property(get=__get__highestFPS_k__BackingField, put=__set__highestFPS_k__BackingField))  _highestFPS_k__BackingField;

constexpr void __set__highestFPS_k__BackingField(int32_t value) ;

constexpr int32_t __get__highestFPS_k__BackingField() const;

 int32_t __declspec(property(get=__get__droppedFrames_k__BackingField, put=__set__droppedFrames_k__BackingField))  _droppedFrames_k__BackingField;

constexpr void __set__droppedFrames_k__BackingField(int32_t value) ;

constexpr int32_t __get__droppedFrames_k__BackingField() const;

 float_t __declspec(property(get=__get__timeBuffer, put=__set__timeBuffer))  _timeBuffer;

constexpr void __set__timeBuffer(float_t value) ;

constexpr float_t __get__timeBuffer() const;

 int32_t __declspec(property(get=__get__frameCounter, put=__set__frameCounter))  _frameCounter;

constexpr void __set__frameCounter(int32_t value) ;

constexpr int32_t __get__frameCounter() const;

 float_t __declspec(property(get=__get__minDeltaTime, put=__set__minDeltaTime))  _minDeltaTime;

constexpr void __set__minDeltaTime(float_t value) ;

constexpr float_t __get__minDeltaTime() const;


// Properties

 int32_t __declspec(property(get=get_currentFPS, put=set_currentFPS))  currentFPS;

 int32_t __declspec(property(get=get_lowestFPS, put=set_lowestFPS))  lowestFPS;

 int32_t __declspec(property(get=get_highestFPS, put=set_highestFPS))  highestFPS;

 int32_t __declspec(property(get=get_droppedFrames, put=set_droppedFrames))  droppedFrames;


// Methods

/// @brief Method get_currentFPS addr 0x2115b50 size 0x8 virtual false final false
 int32_t get_currentFPS() ;

/// @brief Method set_currentFPS addr 0x2115b58 size 0x8 virtual false final false
 void set_currentFPS(int32_t value) ;

/// @brief Method get_lowestFPS addr 0x2115b60 size 0x8 virtual false final false
 int32_t get_lowestFPS() ;

/// @brief Method set_lowestFPS addr 0x2115b68 size 0x8 virtual false final false
 void set_lowestFPS(int32_t value) ;

/// @brief Method get_highestFPS addr 0x2115b70 size 0x8 virtual false final false
 int32_t get_highestFPS() ;

/// @brief Method set_highestFPS addr 0x2115b78 size 0x8 virtual false final false
 void set_highestFPS(int32_t value) ;

/// @brief Method get_droppedFrames addr 0x2115b80 size 0x8 virtual false final false
 int32_t get_droppedFrames() ;

/// @brief Method set_droppedFrames addr 0x2115b88 size 0x8 virtual false final false
 void set_droppedFrames(int32_t value) ;

/// @brief Method Awake addr 0x2115b90 size 0x10 virtual false final false
 void Awake() ;

/// @brief Method Update addr 0x2115ba0 size 0xac virtual false final false
 void Update() ;

// Ctor Parameters []
explicit FPSCounter() ;

/// @brief Method .ctor addr 0x2115c4c size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::FPSCounter);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FPSCounter, "", "FPSCounter");
