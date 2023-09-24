#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace UnityEngine::UIElements {
class EventCallbackFunctorBase;
}
namespace System {
class Delegate;
}
namespace UnityEngine::UIElements {
struct CallbackPhase;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class EventCallbackList;
}
// Type: UnityEngine.UIElements::EventCallbackList
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7265))
// CS Name: UnityEngine.UIElements.EventCallbackList
class CORDL_TYPE EventCallbackList : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~EventCallbackList() = default;

// Ctor Parameters [CppParam { name: "", ty: "EventCallbackList", modifiers: " const&", def_value: None }]
constexpr EventCallbackList(EventCallbackList const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EventCallbackList", modifiers: "&&", def_value: None }]
constexpr EventCallbackList(EventCallbackList&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EventCallbackList(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr EventCallbackList& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EventCallbackList& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EventCallbackList& operator=(EventCallbackList&& o) noexcept = default;
  constexpr EventCallbackList& operator=(EventCallbackList const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::List_1<UnityEngine::UIElements::EventCallbackFunctorBase> __declspec(property(get=__get_m_List, put=__set_m_List))  m_List;

constexpr void __set_m_List(System::Collections::Generic::List_1<UnityEngine::UIElements::EventCallbackFunctorBase> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::UIElements::EventCallbackFunctorBase> __get_m_List() const;

 int32_t __declspec(property(get=__get__trickleDownCallbackCount_k__BackingField, put=__set__trickleDownCallbackCount_k__BackingField))  _trickleDownCallbackCount_k__BackingField;

constexpr void __set__trickleDownCallbackCount_k__BackingField(int32_t value) ;

constexpr int32_t __get__trickleDownCallbackCount_k__BackingField() const;

 int32_t __declspec(property(get=__get__bubbleUpCallbackCount_k__BackingField, put=__set__bubbleUpCallbackCount_k__BackingField))  _bubbleUpCallbackCount_k__BackingField;

constexpr void __set__bubbleUpCallbackCount_k__BackingField(int32_t value) ;

constexpr int32_t __get__bubbleUpCallbackCount_k__BackingField() const;


// Properties

 int32_t __declspec(property(get=get_trickleDownCallbackCount, put=set_trickleDownCallbackCount))  trickleDownCallbackCount;

 int32_t __declspec(property(get=get_bubbleUpCallbackCount, put=set_bubbleUpCallbackCount))  bubbleUpCallbackCount;

 int32_t __declspec(property(get=get_Count))  Count;

 UnityEngine::UIElements::EventCallbackFunctorBase __declspec(property(get=get_Item))  Item;


// Methods

/// @brief Method get_trickleDownCallbackCount addr 0x2cd3ebc size 0x8 virtual false final false
 int32_t get_trickleDownCallbackCount() ;

/// @brief Method set_trickleDownCallbackCount addr 0x2cd3ec4 size 0x8 virtual false final false
 void set_trickleDownCallbackCount(int32_t value) ;

/// @brief Method get_bubbleUpCallbackCount addr 0x2cd3ecc size 0x8 virtual false final false
 int32_t get_bubbleUpCallbackCount() ;

/// @brief Method set_bubbleUpCallbackCount addr 0x2cd3ed4 size 0x8 virtual false final false
 void set_bubbleUpCallbackCount(int32_t value) ;

static UnityEngine::UIElements::EventCallbackList New_ctor() ;

/// @brief Method .ctor addr 0x2cd3b60 size 0x80 virtual false final false
 void _ctor() ;

static UnityEngine::UIElements::EventCallbackList New_ctor(UnityEngine::UIElements::EventCallbackList source) ;

/// @brief Method .ctor addr 0x2cd3ad0 size 0x90 virtual false final false
 void _ctor(UnityEngine::UIElements::EventCallbackList source) ;

/// @brief Method Contains addr 0x2cd3edc size 0x18 virtual false final false
 bool Contains(int64_t eventTypeId, System::Delegate callback, UnityEngine::UIElements::CallbackPhase phase) ;

/// @brief Method Find addr 0x2cd3ef4 size 0xe8 virtual false final false
 UnityEngine::UIElements::EventCallbackFunctorBase Find(int64_t eventTypeId, System::Delegate callback, UnityEngine::UIElements::CallbackPhase phase) ;

/// @brief Method Remove addr 0x2cd3fdc size 0x120 virtual false final false
 bool Remove(int64_t eventTypeId, System::Delegate callback, UnityEngine::UIElements::CallbackPhase phase) ;

/// @brief Method Add addr 0x2cd40fc size 0xdc virtual false final false
 void Add(UnityEngine::UIElements::EventCallbackFunctorBase item) ;

/// @brief Method AddRange addr 0x2cd3be0 size 0x190 virtual false final false
 void AddRange(UnityEngine::UIElements::EventCallbackList list) ;

/// @brief Method get_Count addr 0x2cd41d8 size 0x48 virtual false final false
 int32_t get_Count() ;

/// @brief Method get_Item addr 0x2cd4220 size 0x58 virtual false final false
 UnityEngine::UIElements::EventCallbackFunctorBase get_Item(int32_t i) ;

/// @brief Method Clear addr 0x2cd3dd4 size 0x6c virtual false final false
 void Clear() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::EventCallbackList);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::EventCallbackList, "UnityEngine.UIElements", "EventCallbackList");
