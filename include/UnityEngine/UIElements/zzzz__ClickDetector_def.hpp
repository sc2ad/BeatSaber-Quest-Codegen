#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
class EventBase;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class ClickDetector;
}
namespace UnityEngine::UIElements {
class ____UnityEngine__UIElements__ClickDetector__ButtonClickStatus;
}
// Type: ::ButtonClickStatus
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6839))
// CS Name: UnityEngine.UIElements.ClickDetector::ButtonClickStatus
class CORDL_TYPE ____UnityEngine__UIElements__ClickDetector__ButtonClickStatus : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~____UnityEngine__UIElements__ClickDetector__ButtonClickStatus() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__UIElements__ClickDetector__ButtonClickStatus", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__UIElements__ClickDetector__ButtonClickStatus(____UnityEngine__UIElements__ClickDetector__ButtonClickStatus const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__UIElements__ClickDetector__ButtonClickStatus", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__UIElements__ClickDetector__ButtonClickStatus(____UnityEngine__UIElements__ClickDetector__ButtonClickStatus&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__UIElements__ClickDetector__ButtonClickStatus(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____UnityEngine__UIElements__ClickDetector__ButtonClickStatus& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__UIElements__ClickDetector__ButtonClickStatus& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__UIElements__ClickDetector__ButtonClickStatus& operator=(____UnityEngine__UIElements__ClickDetector__ButtonClickStatus&& o) noexcept = default;
  constexpr ____UnityEngine__UIElements__ClickDetector__ButtonClickStatus& operator=(____UnityEngine__UIElements__ClickDetector__ButtonClickStatus const& o) noexcept = default;
                


// Fields

 ::UnityEngine::UIElements::VisualElement __declspec(property(get=__get_m_Target, put=__set_m_Target))  m_Target;

constexpr void __set_m_Target(::UnityEngine::UIElements::VisualElement value) ;

constexpr ::UnityEngine::UIElements::VisualElement __get_m_Target() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get_m_PointerDownPosition, put=__set_m_PointerDownPosition))  m_PointerDownPosition;

constexpr void __set_m_PointerDownPosition(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get_m_PointerDownPosition() const;

 int64_t __declspec(property(get=__get_m_LastPointerDownTime, put=__set_m_LastPointerDownTime))  m_LastPointerDownTime;

constexpr void __set_m_LastPointerDownTime(int64_t value) ;

constexpr int64_t __get_m_LastPointerDownTime() const;

 int32_t __declspec(property(get=__get_m_ClickCount, put=__set_m_ClickCount))  m_ClickCount;

constexpr void __set_m_ClickCount(int32_t value) ;

constexpr int32_t __get_m_ClickCount() const;


// Methods

/// @brief Method Reset addr 0x2c3a484 size 0x64 virtual false final false
 void Reset() ;

// Ctor Parameters []
explicit ____UnityEngine__UIElements__ClickDetector__ButtonClickStatus() ;

/// @brief Method .ctor addr 0x2c3a214 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::ClickDetector
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6840))
// CS Name: UnityEngine.UIElements.ClickDetector
class CORDL_TYPE ClickDetector : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using ButtonClickStatus = ::UnityEngine::UIElements::____UnityEngine__UIElements__ClickDetector__ButtonClickStatus;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~ClickDetector() = default;

// Ctor Parameters [CppParam { name: "", ty: "ClickDetector", modifiers: " const&", def_value: None }]
constexpr ClickDetector(ClickDetector const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ClickDetector", modifiers: "&&", def_value: None }]
constexpr ClickDetector(ClickDetector&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ClickDetector(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ClickDetector& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ClickDetector& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ClickDetector& operator=(ClickDetector&& o) noexcept = default;
  constexpr ClickDetector& operator=(ClickDetector const& o) noexcept = default;
                


// Fields

 ::System::Collections::Generic::List_1<::UnityEngine::UIElements::____UnityEngine__UIElements__ClickDetector__ButtonClickStatus> __declspec(property(get=__get_m_ClickStatus, put=__set_m_ClickStatus))  m_ClickStatus;

constexpr void __set_m_ClickStatus(::System::Collections::Generic::List_1<::UnityEngine::UIElements::____UnityEngine__UIElements__ClickDetector__ButtonClickStatus> value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::____UnityEngine__UIElements__ClickDetector__ButtonClickStatus> __get_m_ClickStatus() const;

static int32_t __declspec(property(get=__get__s_DoubleClickTime_k__BackingField, put=__set__s_DoubleClickTime_k__BackingField))  _s_DoubleClickTime_k__BackingField;

static void __set__s_DoubleClickTime_k__BackingField(int32_t value) ;

static int32_t __get__s_DoubleClickTime_k__BackingField() ;


// Properties

static int32_t __declspec(property(get=get_s_DoubleClickTime, put=set_s_DoubleClickTime))  s_DoubleClickTime;


// Methods

/// @brief Method get_s_DoubleClickTime addr 0x2c39f00 size 0x58 virtual false final false
static int32_t get_s_DoubleClickTime() ;

/// @brief Method set_s_DoubleClickTime addr 0x2c39f58 size 0x5c virtual false final false
static void set_s_DoubleClickTime(int32_t value) ;

// Ctor Parameters []
explicit ClickDetector() ;

/// @brief Method .ctor addr 0x2c39fb4 size 0x260 virtual false final false
 void _ctor() ;

/// @brief Method StartClickTracking addr 0x2c3a21c size 0x268 virtual false final false
 void StartClickTracking(::UnityEngine::UIElements::EventBase evt) ;

/// @brief Method SendClickEvent addr 0x2c3a4e8 size 0x3e4 virtual false final false
 void SendClickEvent(::UnityEngine::UIElements::EventBase evt) ;

/// @brief Method CancelClickTracking addr 0x2c3a9ec size 0xfc virtual false final false
 void CancelClickTracking(::UnityEngine::UIElements::EventBase evt) ;

/// @brief Method ProcessEvent addr 0x2c3aae8 size 0x51c virtual false final false
 void ProcessEvent(::UnityEngine::UIElements::EventBase evt) ;

/// @brief Method ContainsPointer addr 0x2c3a8cc size 0x120 virtual false final false
static bool ContainsPointer(::UnityEngine::UIElements::VisualElement element, ::UnityEngine::Vector2 position) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UIElements::ClickDetector);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ClickDetector, "UnityEngine.UIElements", "ClickDetector");
NEED_NO_BOX(::UnityEngine::UIElements::____UnityEngine__UIElements__ClickDetector__ButtonClickStatus);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::____UnityEngine__UIElements__ClickDetector__ButtonClickStatus, "UnityEngine.UIElements", "ClickDetector/ButtonClickStatus");
