#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace UnityEngine {
class Transform;
}
namespace Zenject {
class DiContainer;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class IAsyncResult;
}
namespace System {
class AsyncCallback;
}
// Forward declare root types
namespace HMUI {
template<typename T>
class UIItemsList_1;
}
namespace HMUI {
template<typename T>
class ____HMUI__UIItemsList_1__DataCallback;
}
namespace HMUI {
template<::cordl_internals::il2cpp_reference_type T>
class UIItemsList_1<T>;
}
namespace HMUI {
template<::cordl_internals::il2cpp_reference_type T>
class ____HMUI__UIItemsList_1__DataCallback<T>;
}
// Type: ::DataCallback
// Type: HMUI::UIItemsList`1
// Type: ::DataCallback
namespace HMUI {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13724)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13724), inst: 2 })
// CS Name: HMUI.UIItemsList`1::DataCallback
class CORDL_TYPE ____HMUI__UIItemsList_1__DataCallback<T> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~____HMUI__UIItemsList_1__DataCallback() = default;

// Ctor Parameters [CppParam { name: "", ty: "____HMUI__UIItemsList_1__DataCallback", modifiers: " const&", def_value: None }]
constexpr ____HMUI__UIItemsList_1__DataCallback(____HMUI__UIItemsList_1__DataCallback const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____HMUI__UIItemsList_1__DataCallback", modifiers: "&&", def_value: None }]
constexpr ____HMUI__UIItemsList_1__DataCallback(____HMUI__UIItemsList_1__DataCallback&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____HMUI__UIItemsList_1__DataCallback(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr ____HMUI__UIItemsList_1__DataCallback& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____HMUI__UIItemsList_1__DataCallback& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____HMUI__UIItemsList_1__DataCallback& operator=(____HMUI__UIItemsList_1__DataCallback&& o) noexcept = default;
  constexpr ____HMUI__UIItemsList_1__DataCallback& operator=(____HMUI__UIItemsList_1__DataCallback const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ____HMUI__UIItemsList_1__DataCallback(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(int32_t idx, T item) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::IAsyncResult BeginInvoke(int32_t idx, T item, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void EndInvoke(::System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
// Type: HMUI::UIItemsList`1
namespace HMUI {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13725)), TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13725), inst: 2 })
// CS Name: HMUI.UIItemsList`1
class CORDL_TYPE UIItemsList_1<T> : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using DataCallback = ::HMUI::____HMUI__UIItemsList_1__DataCallback<T>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~UIItemsList_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "UIItemsList_1", modifiers: " const&", def_value: None }]
constexpr UIItemsList_1(UIItemsList_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UIItemsList_1", modifiers: "&&", def_value: None }]
constexpr UIItemsList_1(UIItemsList_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UIItemsList_1(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr UIItemsList_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UIItemsList_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UIItemsList_1& operator=(UIItemsList_1&& o) noexcept = default;
  constexpr UIItemsList_1& operator=(UIItemsList_1 const& o) noexcept = default;
                


// Fields

 T __declspec(property(get=__get__prefab, put=__set__prefab))  _prefab;

constexpr void __set__prefab(T value) ;

constexpr T __get__prefab() const;

 ::UnityEngine::Transform __declspec(property(get=__get__itemsContainer, put=__set__itemsContainer))  _itemsContainer;

constexpr void __set__itemsContainer(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get__itemsContainer() const;

 bool __declspec(property(get=__get__insertInTheBeginning, put=__set__insertInTheBeginning))  _insertInTheBeginning;

constexpr void __set__insertInTheBeginning(bool value) ;

constexpr bool __get__insertInTheBeginning() const;

 ::Zenject::DiContainer __declspec(property(get=__get__container, put=__set__container))  _container;

constexpr void __set__container(::Zenject::DiContainer value) ;

constexpr ::Zenject::DiContainer __get__container() const;

 ::System::Collections::Generic::List_1<T> __declspec(property(get=__get__items, put=__set__items))  _items;

constexpr void __set__items(::System::Collections::Generic::List_1<T> value) ;

constexpr ::System::Collections::Generic::List_1<T> __get__items() const;


// Properties

 ::System::Collections::Generic::IEnumerable_1<T> __declspec(property(get=get_items))  items;


// Methods

/// @brief Method get_items addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Collections::Generic::IEnumerable_1<T> get_items() ;

/// @brief Method SetData addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetData(int32_t numberOfElements, ::HMUI::____HMUI__UIItemsList_1__DataCallback<T> dataCallback) ;

// Ctor Parameters []
explicit UIItemsList_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::HMUI::UIItemsList_1, "HMUI", "UIItemsList`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::HMUI::____HMUI__UIItemsList_1__DataCallback, "HMUI", "UIItemsList`1/DataCallback");
