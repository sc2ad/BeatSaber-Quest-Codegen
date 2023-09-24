#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class LinkedList_1;
}
namespace System::Collections::Generic {
template<typename T>
class LinkedListNode_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct AsyncOperationHandle;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template<typename TObject>
struct AsyncOperationHandle_1;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
struct SceneInstance;
}
namespace UnityEngine::ResourceManagement::Diagnostics {
struct DiagnosticEvent;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class DelegateList_1;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type T>
class DelegateList_1<T>;
}
namespace GlobalNamespace {
template<>
class DelegateList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>;
}
namespace GlobalNamespace {
template<>
class DelegateList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::bs_hook::Il2CppWrapperType>>;
}
namespace GlobalNamespace {
template<>
class DelegateList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>;
}
namespace GlobalNamespace {
template<>
class DelegateList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>;
}
namespace GlobalNamespace {
template<>
class DelegateList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>;
}
namespace GlobalNamespace {
template<>
class DelegateList_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>;
}
namespace GlobalNamespace {
template<>
class DelegateList_1<float_t>;
}
// Type: ::DelegateList`1
// Type: ::DelegateList`1
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14227))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14227), inst: 6241 })
// CS Name: DelegateList`1
class CORDL_TYPE DelegateList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::bs_hook::Il2CppWrapperType>> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~DelegateList_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "DelegateList_1", modifiers: " const&", def_value: None }]
constexpr DelegateList_1(DelegateList_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DelegateList_1", modifiers: "&&", def_value: None }]
constexpr DelegateList_1(DelegateList_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DelegateList_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DelegateList_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DelegateList_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DelegateList_1& operator=(DelegateList_1&& o) noexcept = default;
  constexpr DelegateList_1& operator=(DelegateList_1 const& o) noexcept = default;
                


// Fields

 System::Func_2<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::bs_hook::Il2CppWrapperType>>,System::Collections::Generic::LinkedListNode_1<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::bs_hook::Il2CppWrapperType>>>> __declspec(property(get=__get_m_acquireFunc, put=__set_m_acquireFunc))  m_acquireFunc;

constexpr void __set_m_acquireFunc(System::Func_2<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::bs_hook::Il2CppWrapperType>>,System::Collections::Generic::LinkedListNode_1<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::bs_hook::Il2CppWrapperType>>>> value) ;

constexpr System::Func_2<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::bs_hook::Il2CppWrapperType>>,System::Collections::Generic::LinkedListNode_1<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::bs_hook::Il2CppWrapperType>>>> __get_m_acquireFunc() const;

 System::Action_1<System::Collections::Generic::LinkedListNode_1<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::bs_hook::Il2CppWrapperType>>>> __declspec(property(get=__get_m_releaseFunc, put=__set_m_releaseFunc))  m_releaseFunc;

constexpr void __set_m_releaseFunc(System::Action_1<System::Collections::Generic::LinkedListNode_1<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::bs_hook::Il2CppWrapperType>>>> value) ;

constexpr System::Action_1<System::Collections::Generic::LinkedListNode_1<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::bs_hook::Il2CppWrapperType>>>> __get_m_releaseFunc() const;

 System::Collections::Generic::LinkedList_1<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::bs_hook::Il2CppWrapperType>>> __declspec(property(get=__get_m_callbacks, put=__set_m_callbacks))  m_callbacks;

constexpr void __set_m_callbacks(System::Collections::Generic::LinkedList_1<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::bs_hook::Il2CppWrapperType>>> value) ;

constexpr System::Collections::Generic::LinkedList_1<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::bs_hook::Il2CppWrapperType>>> __get_m_callbacks() const;

 bool __declspec(property(get=__get_m_invoking, put=__set_m_invoking))  m_invoking;

constexpr void __set_m_invoking(bool value) ;

constexpr bool __get_m_invoking() const;


// Properties

 int32_t __declspec(property(get=get_Count))  Count;


// Methods

static GlobalNamespace::DelegateList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::bs_hook::Il2CppWrapperType>> New_ctor(System::Func_2<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::bs_hook::Il2CppWrapperType>>,System::Collections::Generic::LinkedListNode_1<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::bs_hook::Il2CppWrapperType>>>> acquireFunc, System::Action_1<System::Collections::Generic::LinkedListNode_1<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::bs_hook::Il2CppWrapperType>>>> releaseFunc) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Func_2<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::bs_hook::Il2CppWrapperType>>,System::Collections::Generic::LinkedListNode_1<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::bs_hook::Il2CppWrapperType>>>> acquireFunc, System::Action_1<System::Collections::Generic::LinkedListNode_1<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::bs_hook::Il2CppWrapperType>>>> releaseFunc) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Count() ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
 void Add(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::bs_hook::Il2CppWrapperType>> action) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
 void Remove(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::bs_hook::Il2CppWrapperType>> action) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual false final false
 void Invoke(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::bs_hook::Il2CppWrapperType> res) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
 void Clear() ;

/// @brief Method CreateWithGlobalCache addr 0x0 size 0xffffffffffffffff virtual false final false
static GlobalNamespace::DelegateList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::bs_hook::Il2CppWrapperType>> CreateWithGlobalCache() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::DelegateList`1
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14227))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14227), inst: 6240 })
// CS Name: DelegateList`1
class CORDL_TYPE DelegateList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~DelegateList_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "DelegateList_1", modifiers: " const&", def_value: None }]
constexpr DelegateList_1(DelegateList_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DelegateList_1", modifiers: "&&", def_value: None }]
constexpr DelegateList_1(DelegateList_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DelegateList_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DelegateList_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DelegateList_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DelegateList_1& operator=(DelegateList_1&& o) noexcept = default;
  constexpr DelegateList_1& operator=(DelegateList_1 const& o) noexcept = default;
                


// Fields

 System::Func_2<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>,System::Collections::Generic::LinkedListNode_1<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>>> __declspec(property(get=__get_m_acquireFunc, put=__set_m_acquireFunc))  m_acquireFunc;

constexpr void __set_m_acquireFunc(System::Func_2<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>,System::Collections::Generic::LinkedListNode_1<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>>> value) ;

constexpr System::Func_2<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>,System::Collections::Generic::LinkedListNode_1<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>>> __get_m_acquireFunc() const;

 System::Action_1<System::Collections::Generic::LinkedListNode_1<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>>> __declspec(property(get=__get_m_releaseFunc, put=__set_m_releaseFunc))  m_releaseFunc;

constexpr void __set_m_releaseFunc(System::Action_1<System::Collections::Generic::LinkedListNode_1<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>>> value) ;

constexpr System::Action_1<System::Collections::Generic::LinkedListNode_1<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>>> __get_m_releaseFunc() const;

 System::Collections::Generic::LinkedList_1<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>> __declspec(property(get=__get_m_callbacks, put=__set_m_callbacks))  m_callbacks;

constexpr void __set_m_callbacks(System::Collections::Generic::LinkedList_1<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>> value) ;

constexpr System::Collections::Generic::LinkedList_1<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>> __get_m_callbacks() const;

 bool __declspec(property(get=__get_m_invoking, put=__set_m_invoking))  m_invoking;

constexpr void __set_m_invoking(bool value) ;

constexpr bool __get_m_invoking() const;


// Properties

 int32_t __declspec(property(get=get_Count))  Count;


// Methods

static GlobalNamespace::DelegateList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>> New_ctor(System::Func_2<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>,System::Collections::Generic::LinkedListNode_1<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>>> acquireFunc, System::Action_1<System::Collections::Generic::LinkedListNode_1<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>>> releaseFunc) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Func_2<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>,System::Collections::Generic::LinkedListNode_1<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>>> acquireFunc, System::Action_1<System::Collections::Generic::LinkedListNode_1<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>>> releaseFunc) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Count() ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
 void Add(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>> action) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
 void Remove(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>> action) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual false final false
 void Invoke(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t> res) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
 void Clear() ;

/// @brief Method CreateWithGlobalCache addr 0x0 size 0xffffffffffffffff virtual false final false
static GlobalNamespace::DelegateList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>> CreateWithGlobalCache() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::DelegateList`1
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14227))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14227), inst: 5332 })
// CS Name: DelegateList`1
class CORDL_TYPE DelegateList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~DelegateList_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "DelegateList_1", modifiers: " const&", def_value: None }]
constexpr DelegateList_1(DelegateList_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DelegateList_1", modifiers: "&&", def_value: None }]
constexpr DelegateList_1(DelegateList_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DelegateList_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DelegateList_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DelegateList_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DelegateList_1& operator=(DelegateList_1&& o) noexcept = default;
  constexpr DelegateList_1& operator=(DelegateList_1 const& o) noexcept = default;
                


// Fields

 System::Func_2<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>,System::Collections::Generic::LinkedListNode_1<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>>> __declspec(property(get=__get_m_acquireFunc, put=__set_m_acquireFunc))  m_acquireFunc;

constexpr void __set_m_acquireFunc(System::Func_2<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>,System::Collections::Generic::LinkedListNode_1<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>>> value) ;

constexpr System::Func_2<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>,System::Collections::Generic::LinkedListNode_1<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>>> __get_m_acquireFunc() const;

 System::Action_1<System::Collections::Generic::LinkedListNode_1<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>>> __declspec(property(get=__get_m_releaseFunc, put=__set_m_releaseFunc))  m_releaseFunc;

constexpr void __set_m_releaseFunc(System::Action_1<System::Collections::Generic::LinkedListNode_1<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>>> value) ;

constexpr System::Action_1<System::Collections::Generic::LinkedListNode_1<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>>> __get_m_releaseFunc() const;

 System::Collections::Generic::LinkedList_1<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>> __declspec(property(get=__get_m_callbacks, put=__set_m_callbacks))  m_callbacks;

constexpr void __set_m_callbacks(System::Collections::Generic::LinkedList_1<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>> value) ;

constexpr System::Collections::Generic::LinkedList_1<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>> __get_m_callbacks() const;

 bool __declspec(property(get=__get_m_invoking, put=__set_m_invoking))  m_invoking;

constexpr void __set_m_invoking(bool value) ;

constexpr bool __get_m_invoking() const;


// Properties

 int32_t __declspec(property(get=get_Count))  Count;


// Methods

static GlobalNamespace::DelegateList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>> New_ctor(System::Func_2<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>,System::Collections::Generic::LinkedListNode_1<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>>> acquireFunc, System::Action_1<System::Collections::Generic::LinkedListNode_1<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>>> releaseFunc) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Func_2<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>,System::Collections::Generic::LinkedListNode_1<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>>> acquireFunc, System::Action_1<System::Collections::Generic::LinkedListNode_1<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>>> releaseFunc) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Count() ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
 void Add(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>> action) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
 void Remove(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>> action) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual false final false
 void Invoke(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> res) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
 void Clear() ;

/// @brief Method CreateWithGlobalCache addr 0x0 size 0xffffffffffffffff virtual false final false
static GlobalNamespace::DelegateList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>> CreateWithGlobalCache() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::DelegateList`1
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14227))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14227), inst: 5329 })
// CS Name: DelegateList`1
class CORDL_TYPE DelegateList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~DelegateList_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "DelegateList_1", modifiers: " const&", def_value: None }]
constexpr DelegateList_1(DelegateList_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DelegateList_1", modifiers: "&&", def_value: None }]
constexpr DelegateList_1(DelegateList_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DelegateList_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DelegateList_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DelegateList_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DelegateList_1& operator=(DelegateList_1&& o) noexcept = default;
  constexpr DelegateList_1& operator=(DelegateList_1 const& o) noexcept = default;
                


// Fields

 System::Func_2<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>,System::Collections::Generic::LinkedListNode_1<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>>> __declspec(property(get=__get_m_acquireFunc, put=__set_m_acquireFunc))  m_acquireFunc;

constexpr void __set_m_acquireFunc(System::Func_2<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>,System::Collections::Generic::LinkedListNode_1<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>>> value) ;

constexpr System::Func_2<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>,System::Collections::Generic::LinkedListNode_1<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>>> __get_m_acquireFunc() const;

 System::Action_1<System::Collections::Generic::LinkedListNode_1<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>>> __declspec(property(get=__get_m_releaseFunc, put=__set_m_releaseFunc))  m_releaseFunc;

constexpr void __set_m_releaseFunc(System::Action_1<System::Collections::Generic::LinkedListNode_1<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>>> value) ;

constexpr System::Action_1<System::Collections::Generic::LinkedListNode_1<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>>> __get_m_releaseFunc() const;

 System::Collections::Generic::LinkedList_1<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>> __declspec(property(get=__get_m_callbacks, put=__set_m_callbacks))  m_callbacks;

constexpr void __set_m_callbacks(System::Collections::Generic::LinkedList_1<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>> value) ;

constexpr System::Collections::Generic::LinkedList_1<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>> __get_m_callbacks() const;

 bool __declspec(property(get=__get_m_invoking, put=__set_m_invoking))  m_invoking;

constexpr void __set_m_invoking(bool value) ;

constexpr bool __get_m_invoking() const;


// Properties

 int32_t __declspec(property(get=get_Count))  Count;


// Methods

static GlobalNamespace::DelegateList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>> New_ctor(System::Func_2<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>,System::Collections::Generic::LinkedListNode_1<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>>> acquireFunc, System::Action_1<System::Collections::Generic::LinkedListNode_1<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>>> releaseFunc) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Func_2<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>,System::Collections::Generic::LinkedListNode_1<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>>> acquireFunc, System::Action_1<System::Collections::Generic::LinkedListNode_1<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>>> releaseFunc) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Count() ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
 void Add(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>> action) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
 void Remove(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>> action) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual false final false
 void Invoke(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> res) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
 void Clear() ;

/// @brief Method CreateWithGlobalCache addr 0x0 size 0xffffffffffffffff virtual false final false
static GlobalNamespace::DelegateList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>> CreateWithGlobalCache() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::DelegateList`1
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14227))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14227), inst: 374 })
// CS Name: DelegateList`1
class CORDL_TYPE DelegateList_1<float_t> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~DelegateList_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "DelegateList_1", modifiers: " const&", def_value: None }]
constexpr DelegateList_1(DelegateList_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DelegateList_1", modifiers: "&&", def_value: None }]
constexpr DelegateList_1(DelegateList_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DelegateList_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DelegateList_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DelegateList_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DelegateList_1& operator=(DelegateList_1&& o) noexcept = default;
  constexpr DelegateList_1& operator=(DelegateList_1 const& o) noexcept = default;
                


// Fields

 System::Func_2<System::Action_1<float_t>,System::Collections::Generic::LinkedListNode_1<System::Action_1<float_t>>> __declspec(property(get=__get_m_acquireFunc, put=__set_m_acquireFunc))  m_acquireFunc;

constexpr void __set_m_acquireFunc(System::Func_2<System::Action_1<float_t>,System::Collections::Generic::LinkedListNode_1<System::Action_1<float_t>>> value) ;

constexpr System::Func_2<System::Action_1<float_t>,System::Collections::Generic::LinkedListNode_1<System::Action_1<float_t>>> __get_m_acquireFunc() const;

 System::Action_1<System::Collections::Generic::LinkedListNode_1<System::Action_1<float_t>>> __declspec(property(get=__get_m_releaseFunc, put=__set_m_releaseFunc))  m_releaseFunc;

constexpr void __set_m_releaseFunc(System::Action_1<System::Collections::Generic::LinkedListNode_1<System::Action_1<float_t>>> value) ;

constexpr System::Action_1<System::Collections::Generic::LinkedListNode_1<System::Action_1<float_t>>> __get_m_releaseFunc() const;

 System::Collections::Generic::LinkedList_1<System::Action_1<float_t>> __declspec(property(get=__get_m_callbacks, put=__set_m_callbacks))  m_callbacks;

constexpr void __set_m_callbacks(System::Collections::Generic::LinkedList_1<System::Action_1<float_t>> value) ;

constexpr System::Collections::Generic::LinkedList_1<System::Action_1<float_t>> __get_m_callbacks() const;

 bool __declspec(property(get=__get_m_invoking, put=__set_m_invoking))  m_invoking;

constexpr void __set_m_invoking(bool value) ;

constexpr bool __get_m_invoking() const;


// Properties

 int32_t __declspec(property(get=get_Count))  Count;


// Methods

static GlobalNamespace::DelegateList_1<float_t> New_ctor(System::Func_2<System::Action_1<float_t>,System::Collections::Generic::LinkedListNode_1<System::Action_1<float_t>>> acquireFunc, System::Action_1<System::Collections::Generic::LinkedListNode_1<System::Action_1<float_t>>> releaseFunc) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Func_2<System::Action_1<float_t>,System::Collections::Generic::LinkedListNode_1<System::Action_1<float_t>>> acquireFunc, System::Action_1<System::Collections::Generic::LinkedListNode_1<System::Action_1<float_t>>> releaseFunc) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Count() ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
 void Add(System::Action_1<float_t> action) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
 void Remove(System::Action_1<float_t> action) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual false final false
 void Invoke(float_t res) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
 void Clear() ;

/// @brief Method CreateWithGlobalCache addr 0x0 size 0xffffffffffffffff virtual false final false
static GlobalNamespace::DelegateList_1<float_t> CreateWithGlobalCache() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::DelegateList`1
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14227))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14227), inst: 289 })
// CS Name: DelegateList`1
class CORDL_TYPE DelegateList_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~DelegateList_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "DelegateList_1", modifiers: " const&", def_value: None }]
constexpr DelegateList_1(DelegateList_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DelegateList_1", modifiers: "&&", def_value: None }]
constexpr DelegateList_1(DelegateList_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DelegateList_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DelegateList_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DelegateList_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DelegateList_1& operator=(DelegateList_1&& o) noexcept = default;
  constexpr DelegateList_1& operator=(DelegateList_1 const& o) noexcept = default;
                


// Fields

 System::Func_2<System::Action_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>,System::Collections::Generic::LinkedListNode_1<System::Action_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>>> __declspec(property(get=__get_m_acquireFunc, put=__set_m_acquireFunc))  m_acquireFunc;

constexpr void __set_m_acquireFunc(System::Func_2<System::Action_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>,System::Collections::Generic::LinkedListNode_1<System::Action_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>>> value) ;

constexpr System::Func_2<System::Action_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>,System::Collections::Generic::LinkedListNode_1<System::Action_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>>> __get_m_acquireFunc() const;

 System::Action_1<System::Collections::Generic::LinkedListNode_1<System::Action_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>>> __declspec(property(get=__get_m_releaseFunc, put=__set_m_releaseFunc))  m_releaseFunc;

constexpr void __set_m_releaseFunc(System::Action_1<System::Collections::Generic::LinkedListNode_1<System::Action_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>>> value) ;

constexpr System::Action_1<System::Collections::Generic::LinkedListNode_1<System::Action_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>>> __get_m_releaseFunc() const;

 System::Collections::Generic::LinkedList_1<System::Action_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>> __declspec(property(get=__get_m_callbacks, put=__set_m_callbacks))  m_callbacks;

constexpr void __set_m_callbacks(System::Collections::Generic::LinkedList_1<System::Action_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>> value) ;

constexpr System::Collections::Generic::LinkedList_1<System::Action_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>> __get_m_callbacks() const;

 bool __declspec(property(get=__get_m_invoking, put=__set_m_invoking))  m_invoking;

constexpr void __set_m_invoking(bool value) ;

constexpr bool __get_m_invoking() const;


// Properties

 int32_t __declspec(property(get=get_Count))  Count;


// Methods

static GlobalNamespace::DelegateList_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent> New_ctor(System::Func_2<System::Action_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>,System::Collections::Generic::LinkedListNode_1<System::Action_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>>> acquireFunc, System::Action_1<System::Collections::Generic::LinkedListNode_1<System::Action_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>>> releaseFunc) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Func_2<System::Action_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>,System::Collections::Generic::LinkedListNode_1<System::Action_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>>> acquireFunc, System::Action_1<System::Collections::Generic::LinkedListNode_1<System::Action_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>>> releaseFunc) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Count() ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
 void Add(System::Action_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent> action) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
 void Remove(System::Action_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent> action) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual false final false
 void Invoke(UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent res) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
 void Clear() ;

/// @brief Method CreateWithGlobalCache addr 0x0 size 0xffffffffffffffff virtual false final false
static GlobalNamespace::DelegateList_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent> CreateWithGlobalCache() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::DelegateList`1
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14227))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14227), inst: 265 })
// CS Name: DelegateList`1
class CORDL_TYPE DelegateList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~DelegateList_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "DelegateList_1", modifiers: " const&", def_value: None }]
constexpr DelegateList_1(DelegateList_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DelegateList_1", modifiers: "&&", def_value: None }]
constexpr DelegateList_1(DelegateList_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DelegateList_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DelegateList_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DelegateList_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DelegateList_1& operator=(DelegateList_1&& o) noexcept = default;
  constexpr DelegateList_1& operator=(DelegateList_1 const& o) noexcept = default;
                


// Fields

 System::Func_2<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>,System::Collections::Generic::LinkedListNode_1<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>> __declspec(property(get=__get_m_acquireFunc, put=__set_m_acquireFunc))  m_acquireFunc;

constexpr void __set_m_acquireFunc(System::Func_2<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>,System::Collections::Generic::LinkedListNode_1<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>> value) ;

constexpr System::Func_2<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>,System::Collections::Generic::LinkedListNode_1<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>> __get_m_acquireFunc() const;

 System::Action_1<System::Collections::Generic::LinkedListNode_1<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>> __declspec(property(get=__get_m_releaseFunc, put=__set_m_releaseFunc))  m_releaseFunc;

constexpr void __set_m_releaseFunc(System::Action_1<System::Collections::Generic::LinkedListNode_1<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>> value) ;

constexpr System::Action_1<System::Collections::Generic::LinkedListNode_1<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>> __get_m_releaseFunc() const;

 System::Collections::Generic::LinkedList_1<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>> __declspec(property(get=__get_m_callbacks, put=__set_m_callbacks))  m_callbacks;

constexpr void __set_m_callbacks(System::Collections::Generic::LinkedList_1<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>> value) ;

constexpr System::Collections::Generic::LinkedList_1<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>> __get_m_callbacks() const;

 bool __declspec(property(get=__get_m_invoking, put=__set_m_invoking))  m_invoking;

constexpr void __set_m_invoking(bool value) ;

constexpr bool __get_m_invoking() const;


// Properties

 int32_t __declspec(property(get=get_Count))  Count;


// Methods

static GlobalNamespace::DelegateList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> New_ctor(System::Func_2<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>,System::Collections::Generic::LinkedListNode_1<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>> acquireFunc, System::Action_1<System::Collections::Generic::LinkedListNode_1<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>> releaseFunc) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Func_2<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>,System::Collections::Generic::LinkedListNode_1<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>> acquireFunc, System::Action_1<System::Collections::Generic::LinkedListNode_1<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>> releaseFunc) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Count() ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
 void Add(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> action) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
 void Remove(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> action) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual false final false
 void Invoke(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle res) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
 void Clear() ;

/// @brief Method CreateWithGlobalCache addr 0x0 size 0xffffffffffffffff virtual false final false
static GlobalNamespace::DelegateList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> CreateWithGlobalCache() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::DelegateList`1
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14227))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14227), inst: 2 })
// CS Name: DelegateList`1
class CORDL_TYPE DelegateList_1<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~DelegateList_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "DelegateList_1", modifiers: " const&", def_value: None }]
constexpr DelegateList_1(DelegateList_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DelegateList_1", modifiers: "&&", def_value: None }]
constexpr DelegateList_1(DelegateList_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DelegateList_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DelegateList_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DelegateList_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DelegateList_1& operator=(DelegateList_1&& o) noexcept = default;
  constexpr DelegateList_1& operator=(DelegateList_1 const& o) noexcept = default;
                


// Fields

 System::Func_2<System::Action_1<T>,System::Collections::Generic::LinkedListNode_1<System::Action_1<T>>> __declspec(property(get=__get_m_acquireFunc, put=__set_m_acquireFunc))  m_acquireFunc;

constexpr void __set_m_acquireFunc(System::Func_2<System::Action_1<T>,System::Collections::Generic::LinkedListNode_1<System::Action_1<T>>> value) ;

constexpr System::Func_2<System::Action_1<T>,System::Collections::Generic::LinkedListNode_1<System::Action_1<T>>> __get_m_acquireFunc() const;

 System::Action_1<System::Collections::Generic::LinkedListNode_1<System::Action_1<T>>> __declspec(property(get=__get_m_releaseFunc, put=__set_m_releaseFunc))  m_releaseFunc;

constexpr void __set_m_releaseFunc(System::Action_1<System::Collections::Generic::LinkedListNode_1<System::Action_1<T>>> value) ;

constexpr System::Action_1<System::Collections::Generic::LinkedListNode_1<System::Action_1<T>>> __get_m_releaseFunc() const;

 System::Collections::Generic::LinkedList_1<System::Action_1<T>> __declspec(property(get=__get_m_callbacks, put=__set_m_callbacks))  m_callbacks;

constexpr void __set_m_callbacks(System::Collections::Generic::LinkedList_1<System::Action_1<T>> value) ;

constexpr System::Collections::Generic::LinkedList_1<System::Action_1<T>> __get_m_callbacks() const;

 bool __declspec(property(get=__get_m_invoking, put=__set_m_invoking))  m_invoking;

constexpr void __set_m_invoking(bool value) ;

constexpr bool __get_m_invoking() const;


// Properties

 int32_t __declspec(property(get=get_Count))  Count;


// Methods

static GlobalNamespace::DelegateList_1<T> New_ctor(System::Func_2<System::Action_1<T>,System::Collections::Generic::LinkedListNode_1<System::Action_1<T>>> acquireFunc, System::Action_1<System::Collections::Generic::LinkedListNode_1<System::Action_1<T>>> releaseFunc) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Func_2<System::Action_1<T>,System::Collections::Generic::LinkedListNode_1<System::Action_1<T>>> acquireFunc, System::Action_1<System::Collections::Generic::LinkedListNode_1<System::Action_1<T>>> releaseFunc) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Count() ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
 void Add(System::Action_1<T> action) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
 void Remove(System::Action_1<T> action) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual false final false
 void Invoke(T res) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
 void Clear() ;

/// @brief Method CreateWithGlobalCache addr 0x0 size 0xffffffffffffffff virtual false final false
static GlobalNamespace::DelegateList_1<T> CreateWithGlobalCache() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::DelegateList_1, "", "DelegateList`1");
