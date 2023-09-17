#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
namespace {
// Forward declare root types
namespace GlobalNamespace {
class TimeHelper;
}
// Type: ::TimeHelper
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13762))
// CS Name: TimeHelper
class CORDL_TYPE TimeHelper : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~TimeHelper() = default;

// Ctor Parameters [CppParam { name: "", ty: "TimeHelper", modifiers: " const&", def_value: None }]
constexpr TimeHelper(TimeHelper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TimeHelper", modifiers: "&&", def_value: None }]
constexpr TimeHelper(TimeHelper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TimeHelper(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr TimeHelper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TimeHelper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TimeHelper& operator=(TimeHelper&& o) noexcept = default;
  constexpr TimeHelper& operator=(TimeHelper const& o) noexcept = default;
                


// Fields

static float_t __declspec(property(get=__get__time_k__BackingField, put=__set__time_k__BackingField))  _time_k__BackingField;

static void __set__time_k__BackingField(float_t value) ;

static float_t __get__time_k__BackingField() ;

static float_t __declspec(property(get=__get__deltaTime_k__BackingField, put=__set__deltaTime_k__BackingField))  _deltaTime_k__BackingField;

static void __set__deltaTime_k__BackingField(float_t value) ;

static float_t __get__deltaTime_k__BackingField() ;

static float_t __declspec(property(get=__get__fixedDeltaTime_k__BackingField, put=__set__fixedDeltaTime_k__BackingField))  _fixedDeltaTime_k__BackingField;

static void __set__fixedDeltaTime_k__BackingField(float_t value) ;

static float_t __get__fixedDeltaTime_k__BackingField() ;

static float_t __declspec(property(get=__get__interpolationFactor_k__BackingField, put=__set__interpolationFactor_k__BackingField))  _interpolationFactor_k__BackingField;

static void __set__interpolationFactor_k__BackingField(float_t value) ;

static float_t __get__interpolationFactor_k__BackingField() ;

 float_t __declspec(property(get=__get__accumulator, put=__set__accumulator))  _accumulator;

constexpr void __set__accumulator(float_t value) ;

constexpr float_t __get__accumulator() const;


// Properties

static float_t __declspec(property(get=get_time, put=set_time))  time;

static float_t __declspec(property(get=get_deltaTime, put=set_deltaTime))  deltaTime;

static float_t __declspec(property(get=get_fixedDeltaTime, put=set_fixedDeltaTime))  fixedDeltaTime;

static float_t __declspec(property(get=get_interpolationFactor, put=set_interpolationFactor))  interpolationFactor;


// Methods

/// @brief Method get_time addr 0x1f74334 size 0x48 virtual false final false
static float_t get_time() ;

/// @brief Method set_time addr 0x1f7437c size 0x54 virtual false final false
static void set_time(float_t value) ;

/// @brief Method get_deltaTime addr 0x1f743d0 size 0x48 virtual false final false
static float_t get_deltaTime() ;

/// @brief Method set_deltaTime addr 0x1f74418 size 0x54 virtual false final false
static void set_deltaTime(float_t value) ;

/// @brief Method get_fixedDeltaTime addr 0x1f7446c size 0x48 virtual false final false
static float_t get_fixedDeltaTime() ;

/// @brief Method set_fixedDeltaTime addr 0x1f744b4 size 0x54 virtual false final false
static void set_fixedDeltaTime(float_t value) ;

/// @brief Method get_interpolationFactor addr 0x1f74508 size 0x48 virtual false final false
static float_t get_interpolationFactor() ;

/// @brief Method set_interpolationFactor addr 0x1f74550 size 0x54 virtual false final false
static void set_interpolationFactor(float_t value) ;

/// @brief Method Awake addr 0x1f745a4 size 0x94 virtual false final false
 void Awake() ;

/// @brief Method FixedUpdate addr 0x1f74638 size 0x94 virtual false final false
 void FixedUpdate() ;

/// @brief Method Update addr 0x1f746cc size 0x174 virtual false final false
 void Update() ;

/// @brief Method __SetTime addr 0x1f74840 size 0x4c virtual false final false
static void __SetTime(float_t time) ;

// Ctor Parameters []
explicit TimeHelper() ;

/// @brief Method .ctor addr 0x1f7488c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::TimeHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TimeHelper, "", "TimeHelper");
