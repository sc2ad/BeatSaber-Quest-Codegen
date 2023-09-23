#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::UIElements {
class Focusable;
}
namespace UnityEngine::UIElements {
class FocusController;
}
namespace UnityEngine::UIElements {
class IFocusRing;
}
namespace UnityEngine::UIElements {
class FocusChangeDirection;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
class EventBase;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct UnityEngine__UIElements__VisualElementFocusRing__DefaultFocusOrder;
}
namespace UnityEngine::UIElements {
class UnityEngine__UIElements__VisualElementFocusRing__FocusRingRecord;
}
namespace UnityEngine::UIElements {
class VisualElementFocusRing;
}
// Type: ::DefaultFocusOrder
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6880))
// CS Name: UnityEngine.UIElements.VisualElementFocusRing::DefaultFocusOrder
struct CORDL_TYPE UnityEngine__UIElements__VisualElementFocusRing__DefaultFocusOrder : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__UIElements__VisualElementFocusRing__DefaultFocusOrder(int32_t value__) noexcept;


                    constexpr UnityEngine__UIElements__VisualElementFocusRing__DefaultFocusOrder(UnityEngine__UIElements__VisualElementFocusRing__DefaultFocusOrder const&) = default;
                    constexpr UnityEngine__UIElements__VisualElementFocusRing__DefaultFocusOrder(UnityEngine__UIElements__VisualElementFocusRing__DefaultFocusOrder&&) = default;
                    constexpr UnityEngine__UIElements__VisualElementFocusRing__DefaultFocusOrder& operator=(UnityEngine__UIElements__VisualElementFocusRing__DefaultFocusOrder const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UIElements__VisualElementFocusRing__DefaultFocusOrder& operator=(UnityEngine__UIElements__VisualElementFocusRing__DefaultFocusOrder&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__VisualElementFocusRing__DefaultFocusOrder(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__UIElements__VisualElementFocusRing__DefaultFocusOrder_Unwrapped : int32_t {
__ChildOrder = 0,
__PositionXY = 1,
__PositionYX = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__UIElements__VisualElementFocusRing__DefaultFocusOrder_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__UIElements__VisualElementFocusRing__DefaultFocusOrder_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field ChildOrder offset 0
static UnityEngine::UIElements::UnityEngine__UIElements__VisualElementFocusRing__DefaultFocusOrder const ChildOrder;

/// @brief Field PositionXY offset 0
static UnityEngine::UIElements::UnityEngine__UIElements__VisualElementFocusRing__DefaultFocusOrder const PositionXY;

/// @brief Field PositionYX offset 0
static UnityEngine::UIElements::UnityEngine__UIElements__VisualElementFocusRing__DefaultFocusOrder const PositionYX;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::FocusRingRecord
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6881))
// CS Name: UnityEngine.UIElements.VisualElementFocusRing::FocusRingRecord
class CORDL_TYPE UnityEngine__UIElements__VisualElementFocusRing__FocusRingRecord : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~UnityEngine__UIElements__VisualElementFocusRing__FocusRingRecord() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__VisualElementFocusRing__FocusRingRecord", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__VisualElementFocusRing__FocusRingRecord(UnityEngine__UIElements__VisualElementFocusRing__FocusRingRecord const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__VisualElementFocusRing__FocusRingRecord", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__VisualElementFocusRing__FocusRingRecord(UnityEngine__UIElements__VisualElementFocusRing__FocusRingRecord&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__VisualElementFocusRing__FocusRingRecord(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__UIElements__VisualElementFocusRing__FocusRingRecord& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__VisualElementFocusRing__FocusRingRecord& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__VisualElementFocusRing__FocusRingRecord& operator=(UnityEngine__UIElements__VisualElementFocusRing__FocusRingRecord&& o) noexcept = default;
  constexpr UnityEngine__UIElements__VisualElementFocusRing__FocusRingRecord& operator=(UnityEngine__UIElements__VisualElementFocusRing__FocusRingRecord const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_m_AutoIndex, put=__set_m_AutoIndex))  m_AutoIndex;

constexpr void __set_m_AutoIndex(int32_t value) ;

constexpr int32_t __get_m_AutoIndex() const;

 UnityEngine::UIElements::Focusable __declspec(property(get=__get_m_Focusable, put=__set_m_Focusable))  m_Focusable;

constexpr void __set_m_Focusable(UnityEngine::UIElements::Focusable value) ;

constexpr UnityEngine::UIElements::Focusable __get_m_Focusable() const;

 bool __declspec(property(get=__get_m_IsSlot, put=__set_m_IsSlot))  m_IsSlot;

constexpr void __set_m_IsSlot(bool value) ;

constexpr bool __get_m_IsSlot() const;

 System::Collections::Generic::List_1<UnityEngine::UIElements::UnityEngine__UIElements__VisualElementFocusRing__FocusRingRecord> __declspec(property(get=__get_m_ScopeNavigationOrder, put=__set_m_ScopeNavigationOrder))  m_ScopeNavigationOrder;

constexpr void __set_m_ScopeNavigationOrder(System::Collections::Generic::List_1<UnityEngine::UIElements::UnityEngine__UIElements__VisualElementFocusRing__FocusRingRecord> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::UIElements::UnityEngine__UIElements__VisualElementFocusRing__FocusRingRecord> __get_m_ScopeNavigationOrder() const;


// Methods

// Ctor Parameters []
explicit UnityEngine__UIElements__VisualElementFocusRing__FocusRingRecord() ;

/// @brief Method .ctor addr 0x2c43660 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::VisualElementFocusRing
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6882))
// CS Name: UnityEngine.UIElements.VisualElementFocusRing
class CORDL_TYPE VisualElementFocusRing : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using FocusRingRecord = UnityEngine::UIElements::UnityEngine__UIElements__VisualElementFocusRing__FocusRingRecord;

using DefaultFocusOrder = UnityEngine::UIElements::UnityEngine__UIElements__VisualElementFocusRing__DefaultFocusOrder;

/// @brief Convert operator to UnityEngine::UIElements::IFocusRing
constexpr operator  UnityEngine::UIElements::IFocusRing() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~VisualElementFocusRing() = default;

// Ctor Parameters [CppParam { name: "", ty: "VisualElementFocusRing", modifiers: " const&", def_value: None }]
constexpr VisualElementFocusRing(VisualElementFocusRing const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "VisualElementFocusRing", modifiers: "&&", def_value: None }]
constexpr VisualElementFocusRing(VisualElementFocusRing&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit VisualElementFocusRing(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr VisualElementFocusRing& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr VisualElementFocusRing& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr VisualElementFocusRing& operator=(VisualElementFocusRing&& o) noexcept = default;
  constexpr VisualElementFocusRing& operator=(VisualElementFocusRing const& o) noexcept = default;
                


// Fields

 UnityEngine::UIElements::VisualElement __declspec(property(get=__get_root, put=__set_root))  root;

constexpr void __set_root(UnityEngine::UIElements::VisualElement value) ;

constexpr UnityEngine::UIElements::VisualElement __get_root() const;

 UnityEngine::UIElements::UnityEngine__UIElements__VisualElementFocusRing__DefaultFocusOrder __declspec(property(get=__get__defaultFocusOrder_k__BackingField, put=__set__defaultFocusOrder_k__BackingField))  _defaultFocusOrder_k__BackingField;

constexpr void __set__defaultFocusOrder_k__BackingField(UnityEngine::UIElements::UnityEngine__UIElements__VisualElementFocusRing__DefaultFocusOrder value) ;

constexpr UnityEngine::UIElements::UnityEngine__UIElements__VisualElementFocusRing__DefaultFocusOrder __get__defaultFocusOrder_k__BackingField() const;

 System::Collections::Generic::List_1<UnityEngine::UIElements::UnityEngine__UIElements__VisualElementFocusRing__FocusRingRecord> __declspec(property(get=__get_m_FocusRing, put=__set_m_FocusRing))  m_FocusRing;

constexpr void __set_m_FocusRing(System::Collections::Generic::List_1<UnityEngine::UIElements::UnityEngine__UIElements__VisualElementFocusRing__FocusRingRecord> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::UIElements::UnityEngine__UIElements__VisualElementFocusRing__FocusRingRecord> __get_m_FocusRing() const;


// Properties

 UnityEngine::UIElements::FocusController __declspec(property(get=get_focusController))  focusController;

 UnityEngine::UIElements::UnityEngine__UIElements__VisualElementFocusRing__DefaultFocusOrder __declspec(property(get=get_defaultFocusOrder, put=set_defaultFocusOrder))  defaultFocusOrder;


// Methods

// Ctor Parameters [CppParam { name: "root", ty: "UnityEngine::UIElements::VisualElement", modifiers: "", def_value: None }, CppParam { name: "dfo", ty: "UnityEngine::UIElements::UnityEngine__UIElements__VisualElementFocusRing__DefaultFocusOrder", modifiers: "", def_value: None }]
explicit VisualElementFocusRing(UnityEngine::UIElements::VisualElement root, UnityEngine::UIElements::UnityEngine__UIElements__VisualElementFocusRing__DefaultFocusOrder dfo) ;

/// @brief Method .ctor addr 0x2c429bc size 0x98 virtual false final false
 void _ctor(UnityEngine::UIElements::VisualElement root, UnityEngine::UIElements::UnityEngine__UIElements__VisualElementFocusRing__DefaultFocusOrder dfo) ;

/// @brief Method get_focusController addr 0x2c42a54 size 0x24 virtual false final false
 UnityEngine::UIElements::FocusController get_focusController() ;

/// @brief Method get_defaultFocusOrder addr 0x2c42a78 size 0x8 virtual false final false
 UnityEngine::UIElements::UnityEngine__UIElements__VisualElementFocusRing__DefaultFocusOrder get_defaultFocusOrder() ;

/// @brief Method set_defaultFocusOrder addr 0x2c42a80 size 0x8 virtual false final false
 void set_defaultFocusOrder(UnityEngine::UIElements::UnityEngine__UIElements__VisualElementFocusRing__DefaultFocusOrder value) ;

/// @brief Method FocusRingAutoIndexSort addr 0x2c42a88 size 0x450 virtual false final false
 int32_t FocusRingAutoIndexSort(UnityEngine::UIElements::UnityEngine__UIElements__VisualElementFocusRing__FocusRingRecord a, UnityEngine::UIElements::UnityEngine__UIElements__VisualElementFocusRing__FocusRingRecord b) ;

/// @brief Method FocusRingSort addr 0x2c42ed8 size 0xf0 virtual false final false
 int32_t FocusRingSort(UnityEngine::UIElements::UnityEngine__UIElements__VisualElementFocusRing__FocusRingRecord a, UnityEngine::UIElements::UnityEngine__UIElements__VisualElementFocusRing__FocusRingRecord b) ;

/// @brief Method DoUpdate addr 0x2c42fc8 size 0xd8 virtual false final false
 void DoUpdate() ;

/// @brief Method BuildRingForScopeRecursive addr 0x2c430a0 size 0x2f8 virtual false final false
 void BuildRingForScopeRecursive(UnityEngine::UIElements::VisualElement ve, ByRef<int32_t> scopeIndex, System::Collections::Generic::List_1<UnityEngine::UIElements::UnityEngine__UIElements__VisualElementFocusRing__FocusRingRecord> scopeList) ;

/// @brief Method SortAndFlattenScopeLists addr 0x2c43398 size 0x2c8 virtual false final false
 void SortAndFlattenScopeLists(System::Collections::Generic::List_1<UnityEngine::UIElements::UnityEngine__UIElements__VisualElementFocusRing__FocusRingRecord> rootScopeList) ;

/// @brief Method GetFocusableInternalIndex addr 0x2c43668 size 0xa8 virtual false final false
 int32_t GetFocusableInternalIndex(UnityEngine::UIElements::Focusable f) ;

/// @brief Method GetFocusChangeDirection addr 0x2c43710 size 0x27c virtual true final true
 UnityEngine::UIElements::FocusChangeDirection GetFocusChangeDirection(UnityEngine::UIElements::Focusable currentFocusable, UnityEngine::UIElements::EventBase e) ;

/// @brief Method GetKeyDownFocusChangeDirection addr 0x2c4398c size 0x204 virtual false final false
static UnityEngine::UIElements::FocusChangeDirection GetKeyDownFocusChangeDirection(UnityEngine::UIElements::EventBase e) ;

/// @brief Method GetNextFocusable addr 0x2c43b90 size 0x3f0 virtual true final true
 UnityEngine::UIElements::Focusable GetNextFocusable(UnityEngine::UIElements::Focusable currentFocusable, UnityEngine::UIElements::FocusChangeDirection direction) ;

/// @brief Method GetNextFocusableInTree addr 0x2c43f80 size 0x9c virtual false final false
static UnityEngine::UIElements::Focusable GetNextFocusableInTree(UnityEngine::UIElements::VisualElement currentFocusable) ;

/// @brief Method GetPreviousFocusableInTree addr 0x2c4401c size 0xe0 virtual false final false
static UnityEngine::UIElements::Focusable GetPreviousFocusableInTree(UnityEngine::UIElements::VisualElement currentFocusable) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__VisualElementFocusRing__DefaultFocusOrder, "UnityEngine.UIElements", "VisualElementFocusRing/DefaultFocusOrder");
NEED_NO_BOX(UnityEngine::UIElements::UnityEngine__UIElements__VisualElementFocusRing__FocusRingRecord);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__VisualElementFocusRing__FocusRingRecord, "UnityEngine.UIElements", "VisualElementFocusRing/FocusRingRecord");
NEED_NO_BOX(UnityEngine::UIElements::VisualElementFocusRing);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::VisualElementFocusRing, "UnityEngine.UIElements", "VisualElementFocusRing");
