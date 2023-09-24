#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_1_def.hpp"
#include <cstdint>
namespace UnityEngine::UIElements {
class IPointerCaptureEventInternal;
}
namespace UnityEngine::UIElements {
class IEventHandler;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template<typename T>
class PointerCaptureEventBase_1;
}
namespace UnityEngine::UIElements {
template<::cordl_internals::il2cpp_reference_type T>
class PointerCaptureEventBase_1<T>;
}
// Type: UnityEngine.UIElements::PointerCaptureEventBase`1
// Type: UnityEngine.UIElements::PointerCaptureEventBase`1
namespace UnityEngine::UIElements {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7279), inst: 1634 }), TypeDefinitionIndex(TypeDefinitionIndex(7249)), TypeDefinitionIndex(TypeDefinitionIndex(7279))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7249), inst: 2 })
// CS Name: UnityEngine.UIElements.PointerCaptureEventBase`1
class CORDL_TYPE PointerCaptureEventBase_1<T> : public UnityEngine::UIElements::EventBase_1<T> {
public:
// Declarations
/// @brief Convert operator to UnityEngine::UIElements::IPointerCaptureEventInternal
constexpr operator  UnityEngine::UIElements::IPointerCaptureEventInternal() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~PointerCaptureEventBase_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "PointerCaptureEventBase_1", modifiers: " const&", def_value: None }]
constexpr PointerCaptureEventBase_1(PointerCaptureEventBase_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PointerCaptureEventBase_1", modifiers: "&&", def_value: None }]
constexpr PointerCaptureEventBase_1(PointerCaptureEventBase_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PointerCaptureEventBase_1(void* ptr) noexcept : UnityEngine::UIElements::EventBase_1<T>(ptr) {
}


  constexpr PointerCaptureEventBase_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PointerCaptureEventBase_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PointerCaptureEventBase_1& operator=(PointerCaptureEventBase_1&& o) noexcept = default;
  constexpr PointerCaptureEventBase_1& operator=(PointerCaptureEventBase_1 const& o) noexcept = default;
                


// Fields

 UnityEngine::UIElements::IEventHandler __declspec(property(get=__get__relatedTarget_k__BackingField, put=__set__relatedTarget_k__BackingField))  _relatedTarget_k__BackingField;

constexpr void __set__relatedTarget_k__BackingField(UnityEngine::UIElements::IEventHandler value) ;

constexpr UnityEngine::UIElements::IEventHandler __get__relatedTarget_k__BackingField() const;

 int32_t __declspec(property(get=__get__pointerId_k__BackingField, put=__set__pointerId_k__BackingField))  _pointerId_k__BackingField;

constexpr void __set__pointerId_k__BackingField(int32_t value) ;

constexpr int32_t __get__pointerId_k__BackingField() const;


// Properties

 UnityEngine::UIElements::IEventHandler __declspec(property(put=set_relatedTarget))  relatedTarget;

 int32_t __declspec(property(get=get_pointerId, put=set_pointerId))  pointerId;


// Methods

/// @brief Method set_relatedTarget addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_relatedTarget(UnityEngine::UIElements::IEventHandler value) ;

/// @brief Method get_pointerId addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t get_pointerId() ;

/// @brief Method set_pointerId addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_pointerId(int32_t value) ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final false
 void Init() ;

/// @brief Method LocalInit addr 0x0 size 0xffffffffffffffff virtual false final false
 void LocalInit() ;

/// @brief Method GetPooled addr 0x0 size 0xffffffffffffffff virtual false final false
static T GetPooled(UnityEngine::UIElements::IEventHandler target, UnityEngine::UIElements::IEventHandler relatedTarget, int32_t pointerId) ;

static UnityEngine::UIElements::PointerCaptureEventBase_1<T> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(UnityEngine::UIElements::PointerCaptureEventBase_1, "UnityEngine.UIElements", "PointerCaptureEventBase`1");
