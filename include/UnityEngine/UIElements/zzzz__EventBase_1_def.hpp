#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
#include <cstdint>
namespace UnityEngine::UIElements {
template<typename T>
class ObjectPool_1;
}
namespace UnityEngine::UIElements {
class EventBase;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template<typename T>
class EventBase_1;
}
namespace UnityEngine::UIElements {
template<::cordl_internals::il2cpp_reference_type T>
class EventBase_1<T>;
}
// Type: UnityEngine.UIElements::EventBase`1
// Type: UnityEngine.UIElements::EventBase`1
namespace UnityEngine::UIElements {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7279)), TypeDefinitionIndex(TypeDefinitionIndex(7278))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7279), inst: 2 })
// CS Name: UnityEngine.UIElements.EventBase`1
class CORDL_TYPE EventBase_1<T> : public UnityEngine::UIElements::EventBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~EventBase_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "EventBase_1", modifiers: " const&", def_value: None }]
constexpr EventBase_1(EventBase_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EventBase_1", modifiers: "&&", def_value: None }]
constexpr EventBase_1(EventBase_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EventBase_1(void* ptr) noexcept : UnityEngine::UIElements::EventBase(ptr) {
}


  constexpr EventBase_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EventBase_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EventBase_1& operator=(EventBase_1&& o) noexcept = default;
  constexpr EventBase_1& operator=(EventBase_1 const& o) noexcept = default;
                


// Fields

static int64_t __declspec(property(get=__get_s_TypeId, put=__set_s_TypeId))  s_TypeId;

static void __set_s_TypeId(int64_t value) ;

static int64_t __get_s_TypeId() ;

static UnityEngine::UIElements::ObjectPool_1<T> __declspec(property(get=__get_s_Pool, put=__set_s_Pool))  s_Pool;

static void __set_s_Pool(UnityEngine::UIElements::ObjectPool_1<T> value) ;

static UnityEngine::UIElements::ObjectPool_1<T> __get_s_Pool() ;

 int32_t __declspec(property(get=__get_m_RefCount, put=__set_m_RefCount))  m_RefCount;

constexpr void __set_m_RefCount(int32_t value) ;

constexpr int32_t __get_m_RefCount() const;


// Properties

 int64_t __declspec(property(get=get_eventTypeId))  eventTypeId;


// Methods

static UnityEngine::UIElements::EventBase_1<T> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method TypeId addr 0x0 size 0xffffffffffffffff virtual false final false
static int64_t TypeId() ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final false
 void Init() ;

/// @brief Method GetPooled addr 0x0 size 0xffffffffffffffff virtual false final false
static T GetPooled() ;

/// @brief Method GetPooled addr 0x0 size 0xffffffffffffffff virtual false final false
static T GetPooled(UnityEngine::UIElements::EventBase e) ;

/// @brief Method ReleasePooled addr 0x0 size 0xffffffffffffffff virtual false final false
static void ReleasePooled(T evt) ;

/// @brief Method Acquire addr 0x0 size 0xffffffffffffffff virtual true final false
 void Acquire() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method get_eventTypeId addr 0x0 size 0xffffffffffffffff virtual true final false
 int64_t get_eventTypeId() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(UnityEngine::UIElements::EventBase_1, "UnityEngine.UIElements", "EventBase`1");
