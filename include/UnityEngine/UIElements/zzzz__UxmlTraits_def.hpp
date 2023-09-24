#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System::Collections {
class IEnumerable;
}
namespace System {
class IDisposable;
}
namespace UnityEngine::UIElements {
class UxmlChildElementDescription;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
class UnityEngine__UIElements__UxmlTraits___get_uxmlChildElementsDescription_d__8;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
namespace UnityEngine::UIElements {
struct CreationContext;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class UnityEngine__UIElements__UxmlTraits___get_uxmlChildElementsDescription_d__8;
}
namespace UnityEngine::UIElements {
class UxmlTraits;
}
// Type: ::<get_uxmlChildElementsDescription>d__8
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7086))
// CS Name: UnityEngine.UIElements.UxmlTraits::<get_uxmlChildElementsDescription>d__8
class CORDL_TYPE UnityEngine__UIElements__UxmlTraits___get_uxmlChildElementsDescription_d__8 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<UnityEngine::UIElements::UxmlChildElementDescription>
constexpr operator  System::Collections::Generic::IEnumerable_1<UnityEngine::UIElements::UxmlChildElementDescription>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<UnityEngine::UIElements::UxmlChildElementDescription>
constexpr operator  System::Collections::Generic::IEnumerator_1<UnityEngine::UIElements::UxmlChildElementDescription>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~UnityEngine__UIElements__UxmlTraits___get_uxmlChildElementsDescription_d__8() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__UxmlTraits___get_uxmlChildElementsDescription_d__8", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__UxmlTraits___get_uxmlChildElementsDescription_d__8(UnityEngine__UIElements__UxmlTraits___get_uxmlChildElementsDescription_d__8 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__UxmlTraits___get_uxmlChildElementsDescription_d__8", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__UxmlTraits___get_uxmlChildElementsDescription_d__8(UnityEngine__UIElements__UxmlTraits___get_uxmlChildElementsDescription_d__8&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__UxmlTraits___get_uxmlChildElementsDescription_d__8(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__UIElements__UxmlTraits___get_uxmlChildElementsDescription_d__8& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__UxmlTraits___get_uxmlChildElementsDescription_d__8& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__UxmlTraits___get_uxmlChildElementsDescription_d__8& operator=(UnityEngine__UIElements__UxmlTraits___get_uxmlChildElementsDescription_d__8&& o) noexcept = default;
  constexpr UnityEngine__UIElements__UxmlTraits___get_uxmlChildElementsDescription_d__8& operator=(UnityEngine__UIElements__UxmlTraits___get_uxmlChildElementsDescription_d__8 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 UnityEngine::UIElements::UxmlChildElementDescription __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(UnityEngine::UIElements::UxmlChildElementDescription value) ;

constexpr UnityEngine::UIElements::UxmlChildElementDescription __get___2__current() const;

 int32_t __declspec(property(get=__get___l__initialThreadId, put=__set___l__initialThreadId))  __l__initialThreadId;

constexpr void __set___l__initialThreadId(int32_t value) ;

constexpr int32_t __get___l__initialThreadId() const;

 UnityEngine::UIElements::UxmlTraits __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(UnityEngine::UIElements::UxmlTraits value) ;

constexpr UnityEngine::UIElements::UxmlTraits __get___4__this() const;


// Properties

 UnityEngine::UIElements::UxmlChildElementDescription __declspec(property(get=System_Collections_Generic_IEnumerator_UnityEngine_UIElements_UxmlChildElementDescription__get_Current))  System_Collections_Generic_IEnumerator_UnityEngine_UIElements_UxmlChildElementDescription__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

static UnityEngine::UIElements::UnityEngine__UIElements__UxmlTraits___get_uxmlChildElementsDescription_d__8 New_ctor(int32_t __1__state) ;

/// @brief Method .ctor addr 0x2c98e68 size 0x44 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x2c98eb0 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x2c98eb4 size 0x18 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<UnityEngine.UIElements.UxmlChildElementDescription>.get_Current addr 0x2c98ecc size 0x8 virtual true final true
 UnityEngine::UIElements::UxmlChildElementDescription System_Collections_Generic_IEnumerator_UnityEngine_UIElements_UxmlChildElementDescription__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x2c98ed4 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x2c98f14 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.Generic.IEnumerable<UnityEngine.UIElements.UxmlChildElementDescription>.GetEnumerator addr 0x2c98f1c size 0xa0 virtual true final true
 System::Collections::Generic::IEnumerator_1<UnityEngine::UIElements::UxmlChildElementDescription> System_Collections_Generic_IEnumerable_UnityEngine_UIElements_UxmlChildElementDescription__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x2c98fbc size 0x4 virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::UxmlTraits
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7087))
// CS Name: UnityEngine.UIElements.UxmlTraits
class CORDL_TYPE UxmlTraits : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using _get_uxmlChildElementsDescription_d__8 = UnityEngine::UIElements::UnityEngine__UIElements__UxmlTraits___get_uxmlChildElementsDescription_d__8;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~UxmlTraits() = default;

// Ctor Parameters [CppParam { name: "", ty: "UxmlTraits", modifiers: " const&", def_value: None }]
constexpr UxmlTraits(UxmlTraits const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UxmlTraits", modifiers: "&&", def_value: None }]
constexpr UxmlTraits(UxmlTraits&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UxmlTraits(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UxmlTraits& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UxmlTraits& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UxmlTraits& operator=(UxmlTraits&& o) noexcept = default;
  constexpr UxmlTraits& operator=(UxmlTraits const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get__canHaveAnyAttribute_k__BackingField, put=__set__canHaveAnyAttribute_k__BackingField))  _canHaveAnyAttribute_k__BackingField;

constexpr void __set__canHaveAnyAttribute_k__BackingField(bool value) ;

constexpr bool __get__canHaveAnyAttribute_k__BackingField() const;


// Properties

 bool __declspec(property(put=set_canHaveAnyAttribute))  canHaveAnyAttribute;

 System::Collections::Generic::IEnumerable_1<UnityEngine::UIElements::UxmlChildElementDescription> __declspec(property(get=get_uxmlChildElementsDescription))  uxmlChildElementsDescription;


// Methods

static UnityEngine::UIElements::UxmlTraits New_ctor() ;

/// @brief Method .ctor addr 0x2c98dd8 size 0x20 virtual false final false
 void _ctor() ;

/// @brief Method set_canHaveAnyAttribute addr 0x2c98df8 size 0xc virtual false final false
 void set_canHaveAnyAttribute(bool value) ;

/// @brief Method get_uxmlChildElementsDescription addr 0x2c98e04 size 0x64 virtual true final false
 System::Collections::Generic::IEnumerable_1<UnityEngine::UIElements::UxmlChildElementDescription> get_uxmlChildElementsDescription() ;

/// @brief Method Init addr 0x2c98eac size 0x4 virtual true final false
 void Init(UnityEngine::UIElements::VisualElement ve, UnityEngine::UIElements::IUxmlAttributes bag, UnityEngine::UIElements::CreationContext cc) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::UnityEngine__UIElements__UxmlTraits___get_uxmlChildElementsDescription_d__8);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__UxmlTraits___get_uxmlChildElementsDescription_d__8, "UnityEngine.UIElements", "UxmlTraits/<get_uxmlChildElementsDescription>d__8");
NEED_NO_BOX(UnityEngine::UIElements::UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UxmlTraits, "UnityEngine.UIElements", "UxmlTraits");
