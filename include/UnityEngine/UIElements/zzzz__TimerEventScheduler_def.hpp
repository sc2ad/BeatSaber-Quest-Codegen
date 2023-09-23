#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace UnityEngine::UIElements {
class IScheduler;
}
namespace UnityEngine::UIElements {
class ScheduledItem;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class TimerEventScheduler;
}
// Type: UnityEngine.UIElements::TimerEventScheduler
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7030))
// CS Name: UnityEngine.UIElements.TimerEventScheduler
class CORDL_TYPE TimerEventScheduler : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to UnityEngine::UIElements::IScheduler
constexpr operator  UnityEngine::UIElements::IScheduler() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~TimerEventScheduler() = default;

// Ctor Parameters [CppParam { name: "", ty: "TimerEventScheduler", modifiers: " const&", def_value: None }]
constexpr TimerEventScheduler(TimerEventScheduler const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TimerEventScheduler", modifiers: "&&", def_value: None }]
constexpr TimerEventScheduler(TimerEventScheduler&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TimerEventScheduler(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TimerEventScheduler& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TimerEventScheduler& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TimerEventScheduler& operator=(TimerEventScheduler&& o) noexcept = default;
  constexpr TimerEventScheduler& operator=(TimerEventScheduler const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::List_1<UnityEngine::UIElements::ScheduledItem> __declspec(property(get=__get_m_ScheduledItems, put=__set_m_ScheduledItems))  m_ScheduledItems;

constexpr void __set_m_ScheduledItems(System::Collections::Generic::List_1<UnityEngine::UIElements::ScheduledItem> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::UIElements::ScheduledItem> __get_m_ScheduledItems() const;

 bool __declspec(property(get=__get_m_TransactionMode, put=__set_m_TransactionMode))  m_TransactionMode;

constexpr void __set_m_TransactionMode(bool value) ;

constexpr bool __get_m_TransactionMode() const;

 System::Collections::Generic::List_1<UnityEngine::UIElements::ScheduledItem> __declspec(property(get=__get_m_ScheduleTransactions, put=__set_m_ScheduleTransactions))  m_ScheduleTransactions;

constexpr void __set_m_ScheduleTransactions(System::Collections::Generic::List_1<UnityEngine::UIElements::ScheduledItem> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::UIElements::ScheduledItem> __get_m_ScheduleTransactions() const;

 System::Collections::Generic::HashSet_1<UnityEngine::UIElements::ScheduledItem> __declspec(property(get=__get_m_UnscheduleTransactions, put=__set_m_UnscheduleTransactions))  m_UnscheduleTransactions;

constexpr void __set_m_UnscheduleTransactions(System::Collections::Generic::HashSet_1<UnityEngine::UIElements::ScheduledItem> value) ;

constexpr System::Collections::Generic::HashSet_1<UnityEngine::UIElements::ScheduledItem> __get_m_UnscheduleTransactions() const;

 bool __declspec(property(get=__get_disableThrottling, put=__set_disableThrottling))  disableThrottling;

constexpr void __set_disableThrottling(bool value) ;

constexpr bool __get_disableThrottling() const;

 int32_t __declspec(property(get=__get_m_LastUpdatedIndex, put=__set_m_LastUpdatedIndex))  m_LastUpdatedIndex;

constexpr void __set_m_LastUpdatedIndex(int32_t value) ;

constexpr int32_t __get_m_LastUpdatedIndex() const;


// Methods

/// @brief Method Schedule addr 0x2c8f0c4 size 0x1c8 virtual true final true
 void Schedule(UnityEngine::UIElements::ScheduledItem item) ;

/// @brief Method RemovedScheduledItemAt addr 0x2c8f28c size 0x6c virtual false final false
 bool RemovedScheduledItemAt(int32_t index) ;

/// @brief Method Unschedule addr 0x2c8f2f8 size 0x1a4 virtual true final true
 void Unschedule(UnityEngine::UIElements::ScheduledItem item) ;

/// @brief Method PrivateUnSchedule addr 0x2c8f49c size 0xa0 virtual false final false
 bool PrivateUnSchedule(UnityEngine::UIElements::ScheduledItem sItem) ;

/// @brief Method UpdateScheduledEvents addr 0x2c8f53c size 0x310 virtual true final true
 void UpdateScheduledEvents() ;

// Ctor Parameters []
explicit TimerEventScheduler() ;

/// @brief Method .ctor addr 0x2c8f84c size 0xf0 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::TimerEventScheduler);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::TimerEventScheduler, "UnityEngine.UIElements", "TimerEventScheduler");
