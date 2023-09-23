#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace UnityEngine::UIElements {
struct TimerState;
}
namespace System {
template<typename TResult>
class Func_1;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class ScheduledItem;
}
namespace UnityEngine::UIElements {
class UnityEngine__UIElements__ScheduledItem____c;
}
// Type: ::<>c
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7028))
// CS Name: UnityEngine.UIElements.ScheduledItem::<>c
class CORDL_TYPE UnityEngine__UIElements__ScheduledItem____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityEngine__UIElements__ScheduledItem____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__ScheduledItem____c", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__ScheduledItem____c(UnityEngine__UIElements__ScheduledItem____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__ScheduledItem____c", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__ScheduledItem____c(UnityEngine__UIElements__ScheduledItem____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__ScheduledItem____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__UIElements__ScheduledItem____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__ScheduledItem____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__ScheduledItem____c& operator=(UnityEngine__UIElements__ScheduledItem____c&& o) noexcept = default;
  constexpr UnityEngine__UIElements__ScheduledItem____c& operator=(UnityEngine__UIElements__ScheduledItem____c const& o) noexcept = default;
                


// Fields

static UnityEngine::UIElements::UnityEngine__UIElements__ScheduledItem____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(UnityEngine::UIElements::UnityEngine__UIElements__ScheduledItem____c value) ;

static UnityEngine::UIElements::UnityEngine__UIElements__ScheduledItem____c __get___9() ;


// Methods

// Ctor Parameters []
explicit UnityEngine__UIElements__ScheduledItem____c() ;

/// @brief Method .ctor addr 0x2c8f0ac size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <.cctor>b__25_0 addr 0x2c8f0b4 size 0x8 virtual false final false
 bool __cctor_b__25_0() ;

/// @brief Method <.cctor>b__25_1 addr 0x2c8f0bc size 0x8 virtual false final false
 bool __cctor_b__25_1() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::ScheduledItem
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7029))
// CS Name: UnityEngine.UIElements.ScheduledItem
class CORDL_TYPE ScheduledItem : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c = UnityEngine::UIElements::UnityEngine__UIElements__ScheduledItem____c;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~ScheduledItem() = default;

// Ctor Parameters [CppParam { name: "", ty: "ScheduledItem", modifiers: " const&", def_value: None }]
constexpr ScheduledItem(ScheduledItem const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ScheduledItem", modifiers: "&&", def_value: None }]
constexpr ScheduledItem(ScheduledItem&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ScheduledItem(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ScheduledItem& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ScheduledItem& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ScheduledItem& operator=(ScheduledItem&& o) noexcept = default;
  constexpr ScheduledItem& operator=(ScheduledItem const& o) noexcept = default;
                


// Fields

 System::Func_1<bool> __declspec(property(get=__get_timerUpdateStopCondition, put=__set_timerUpdateStopCondition))  timerUpdateStopCondition;

constexpr void __set_timerUpdateStopCondition(System::Func_1<bool> value) ;

constexpr System::Func_1<bool> __get_timerUpdateStopCondition() const;

static System::Func_1<bool> __declspec(property(get=__get_OnceCondition, put=__set_OnceCondition))  OnceCondition;

static void __set_OnceCondition(System::Func_1<bool> value) ;

static System::Func_1<bool> __get_OnceCondition() ;

static System::Func_1<bool> __declspec(property(get=__get_ForeverCondition, put=__set_ForeverCondition))  ForeverCondition;

static void __set_ForeverCondition(System::Func_1<bool> value) ;

static System::Func_1<bool> __get_ForeverCondition() ;

 int64_t __declspec(property(get=__get__startMs_k__BackingField, put=__set__startMs_k__BackingField))  _startMs_k__BackingField;

constexpr void __set__startMs_k__BackingField(int64_t value) ;

constexpr int64_t __get__startMs_k__BackingField() const;

 int64_t __declspec(property(get=__get__delayMs_k__BackingField, put=__set__delayMs_k__BackingField))  _delayMs_k__BackingField;

constexpr void __set__delayMs_k__BackingField(int64_t value) ;

constexpr int64_t __get__delayMs_k__BackingField() const;

 int64_t __declspec(property(get=__get__intervalMs_k__BackingField, put=__set__intervalMs_k__BackingField))  _intervalMs_k__BackingField;

constexpr void __set__intervalMs_k__BackingField(int64_t value) ;

constexpr int64_t __get__intervalMs_k__BackingField() const;

 int64_t __declspec(property(get=__get__endTimeMs_k__BackingField, put=__set__endTimeMs_k__BackingField))  _endTimeMs_k__BackingField;

constexpr void __set__endTimeMs_k__BackingField(int64_t value) ;

constexpr int64_t __get__endTimeMs_k__BackingField() const;


// Properties

 int64_t __declspec(property(get=get_startMs, put=set_startMs))  startMs;

 int64_t __declspec(property(get=get_delayMs, put=set_delayMs))  delayMs;

 int64_t __declspec(property(get=get_intervalMs, put=set_intervalMs))  intervalMs;

 int64_t __declspec(property(get=get_endTimeMs))  endTimeMs;


// Methods

/// @brief Method get_startMs addr 0x2c8ee04 size 0x8 virtual false final false
 int64_t get_startMs() ;

/// @brief Method set_startMs addr 0x2c8ee0c size 0x8 virtual false final false
 void set_startMs(int64_t value) ;

/// @brief Method get_delayMs addr 0x2c8ee14 size 0x8 virtual false final false
 int64_t get_delayMs() ;

/// @brief Method set_delayMs addr 0x2c8ee1c size 0x8 virtual false final false
 void set_delayMs(int64_t value) ;

/// @brief Method get_intervalMs addr 0x2c8ee24 size 0x8 virtual false final false
 int64_t get_intervalMs() ;

/// @brief Method set_intervalMs addr 0x2c8ee2c size 0x8 virtual false final false
 void set_intervalMs(int64_t value) ;

/// @brief Method get_endTimeMs addr 0x2c8ee34 size 0x8 virtual false final false
 int64_t get_endTimeMs() ;

// Ctor Parameters []
explicit ScheduledItem() ;

/// @brief Method .ctor addr 0x2c8ee3c size 0x74 virtual false final false
 void _ctor() ;

/// @brief Method ResetStartTime addr 0x2c8eeb0 size 0x5c virtual false final false
 void ResetStartTime() ;

/// @brief Method PerformTimerUpdate addr 0x0 size 0xffffffffffffffff virtual true final false
 void PerformTimerUpdate(UnityEngine::UIElements::TimerState state) ;

/// @brief Method OnItemUnscheduled addr 0x2c8ef0c size 0x4 virtual true final false
 void OnItemUnscheduled() ;

/// @brief Method ShouldUnschedule addr 0x2c8ef10 size 0x20 virtual true final false
 bool ShouldUnschedule() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::ScheduledItem);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::ScheduledItem, "UnityEngine.UIElements", "ScheduledItem");
NEED_NO_BOX(UnityEngine::UIElements::UnityEngine__UIElements__ScheduledItem____c);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__ScheduledItem____c, "UnityEngine.UIElements", "ScheduledItem/<>c");
