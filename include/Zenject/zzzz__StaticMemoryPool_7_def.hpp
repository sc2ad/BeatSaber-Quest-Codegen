#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__StaticMemoryPoolBase_1_def.hpp"
#include <cmath>
namespace System {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7>
class Action_7;
}
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TParam5,typename TParam6,typename TValue>
class IMemoryPool_7;
}
namespace System {
template<typename T>
class Action_1;
}
namespace Zenject {
class IMemoryPool;
}
namespace Zenject {
template<typename TValue>
class IDespawnableMemoryPool_1;
}
namespace UnityEngine {
struct Color;
}
namespace System {
struct Int32Enum;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TParam5,typename TParam6,typename TValue>
class StaticMemoryPool_7;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TParam3,::cordl_internals::il2cpp_reference_type TParam4,::cordl_internals::il2cpp_reference_type TParam5,::cordl_internals::il2cpp_reference_type TParam6,::cordl_internals::il2cpp_reference_type TValue>
class StaticMemoryPool_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TValue>;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TParam3,::cordl_internals::il2cpp_reference_type TValue>
class StaticMemoryPool_7<UnityEngine::Color,UnityEngine::Color,TParam3,float_t,System::Int32Enum,float_t,TValue>;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TParam3,::cordl_internals::il2cpp_reference_type TValue>
class StaticMemoryPool_7<UnityEngine::Vector2,UnityEngine::Vector2,TParam3,float_t,System::Int32Enum,float_t,TValue>;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TParam3,::cordl_internals::il2cpp_reference_type TValue>
class StaticMemoryPool_7<UnityEngine::Vector3,UnityEngine::Vector3,TParam3,float_t,System::Int32Enum,float_t,TValue>;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TParam3,::cordl_internals::il2cpp_reference_type TValue>
class StaticMemoryPool_7<float_t,float_t,TParam3,float_t,System::Int32Enum,float_t,TValue>;
}
// Type: Zenject::StaticMemoryPool`7
// Type: Zenject::StaticMemoryPool`7
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TParam3,::cordl_internals::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11027)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11027), inst: 179 }), TypeDefinitionIndex(TypeDefinitionIndex(11034))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11034), inst: 6293 })
// CS Name: Zenject.StaticMemoryPool`7
class CORDL_TYPE StaticMemoryPool_7<UnityEngine::Vector3,UnityEngine::Vector3,TParam3,float_t,System::Int32Enum,float_t,TValue> : public Zenject::StaticMemoryPoolBase_1<TValue> {
public:
// Declarations
/// @brief Convert operator to Zenject::IMemoryPool_7<UnityEngine::Vector3,UnityEngine::Vector3,TParam3,float_t,System::Int32Enum,float_t,TValue>
constexpr operator  Zenject::IMemoryPool_7<UnityEngine::Vector3,UnityEngine::Vector3,TParam3,float_t,System::Int32Enum,float_t,TValue>() const noexcept;

/// @brief Convert operator to Zenject::IDespawnableMemoryPool_1<TValue>
constexpr operator  Zenject::IDespawnableMemoryPool_1<TValue>() const noexcept;

/// @brief Convert operator to Zenject::IMemoryPool
constexpr operator  Zenject::IMemoryPool() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~StaticMemoryPool_7() = default;

// Ctor Parameters [CppParam { name: "", ty: "StaticMemoryPool_7", modifiers: " const&", def_value: None }]
constexpr StaticMemoryPool_7(StaticMemoryPool_7 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StaticMemoryPool_7", modifiers: "&&", def_value: None }]
constexpr StaticMemoryPool_7(StaticMemoryPool_7&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StaticMemoryPool_7(void* ptr) noexcept : Zenject::StaticMemoryPoolBase_1<TValue>(ptr) {
}


  constexpr StaticMemoryPool_7& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StaticMemoryPool_7& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StaticMemoryPool_7& operator=(StaticMemoryPool_7&& o) noexcept = default;
  constexpr StaticMemoryPool_7& operator=(StaticMemoryPool_7 const& o) noexcept = default;
                


// Fields

 System::Action_7<UnityEngine::Vector3,UnityEngine::Vector3,TParam3,float_t,System::Int32Enum,float_t,TValue> __declspec(property(get=__get__onSpawnMethod, put=__set__onSpawnMethod))  _onSpawnMethod;

constexpr void __set__onSpawnMethod(System::Action_7<UnityEngine::Vector3,UnityEngine::Vector3,TParam3,float_t,System::Int32Enum,float_t,TValue> value) ;

constexpr System::Action_7<UnityEngine::Vector3,UnityEngine::Vector3,TParam3,float_t,System::Int32Enum,float_t,TValue> __get__onSpawnMethod() const;


// Properties

 System::Action_7<UnityEngine::Vector3,UnityEngine::Vector3,TParam3,float_t,System::Int32Enum,float_t,TValue> __declspec(property(put=set_OnSpawnMethod))  OnSpawnMethod;


// Methods

static Zenject::StaticMemoryPool_7<UnityEngine::Vector3,UnityEngine::Vector3,TParam3,float_t,System::Int32Enum,float_t,TValue> New_ctor(System::Action_7<UnityEngine::Vector3,UnityEngine::Vector3,TParam3,float_t,System::Int32Enum,float_t,TValue> onSpawnMethod, System::Action_1<TValue> onDespawnedMethod) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Action_7<UnityEngine::Vector3,UnityEngine::Vector3,TParam3,float_t,System::Int32Enum,float_t,TValue> onSpawnMethod, System::Action_1<TValue> onDespawnedMethod) ;

/// @brief Method set_OnSpawnMethod addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_OnSpawnMethod(System::Action_7<UnityEngine::Vector3,UnityEngine::Vector3,TParam3,float_t,System::Int32Enum,float_t,TValue> value) ;

/// @brief Method Spawn addr 0x0 size 0xffffffffffffffff virtual true final true
 TValue Spawn(UnityEngine::Vector3 p1, UnityEngine::Vector3 p2, TParam3 p3, float_t p4, System::Int32Enum p5, float_t p6) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::StaticMemoryPool`7
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TParam3,::cordl_internals::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11027), inst: 179 }), TypeDefinitionIndex(TypeDefinitionIndex(11027)), TypeDefinitionIndex(TypeDefinitionIndex(11034))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11034), inst: 6292 })
// CS Name: Zenject.StaticMemoryPool`7
class CORDL_TYPE StaticMemoryPool_7<UnityEngine::Vector2,UnityEngine::Vector2,TParam3,float_t,System::Int32Enum,float_t,TValue> : public Zenject::StaticMemoryPoolBase_1<TValue> {
public:
// Declarations
/// @brief Convert operator to Zenject::IMemoryPool_7<UnityEngine::Vector2,UnityEngine::Vector2,TParam3,float_t,System::Int32Enum,float_t,TValue>
constexpr operator  Zenject::IMemoryPool_7<UnityEngine::Vector2,UnityEngine::Vector2,TParam3,float_t,System::Int32Enum,float_t,TValue>() const noexcept;

/// @brief Convert operator to Zenject::IDespawnableMemoryPool_1<TValue>
constexpr operator  Zenject::IDespawnableMemoryPool_1<TValue>() const noexcept;

/// @brief Convert operator to Zenject::IMemoryPool
constexpr operator  Zenject::IMemoryPool() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~StaticMemoryPool_7() = default;

// Ctor Parameters [CppParam { name: "", ty: "StaticMemoryPool_7", modifiers: " const&", def_value: None }]
constexpr StaticMemoryPool_7(StaticMemoryPool_7 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StaticMemoryPool_7", modifiers: "&&", def_value: None }]
constexpr StaticMemoryPool_7(StaticMemoryPool_7&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StaticMemoryPool_7(void* ptr) noexcept : Zenject::StaticMemoryPoolBase_1<TValue>(ptr) {
}


  constexpr StaticMemoryPool_7& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StaticMemoryPool_7& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StaticMemoryPool_7& operator=(StaticMemoryPool_7&& o) noexcept = default;
  constexpr StaticMemoryPool_7& operator=(StaticMemoryPool_7 const& o) noexcept = default;
                


// Fields

 System::Action_7<UnityEngine::Vector2,UnityEngine::Vector2,TParam3,float_t,System::Int32Enum,float_t,TValue> __declspec(property(get=__get__onSpawnMethod, put=__set__onSpawnMethod))  _onSpawnMethod;

constexpr void __set__onSpawnMethod(System::Action_7<UnityEngine::Vector2,UnityEngine::Vector2,TParam3,float_t,System::Int32Enum,float_t,TValue> value) ;

constexpr System::Action_7<UnityEngine::Vector2,UnityEngine::Vector2,TParam3,float_t,System::Int32Enum,float_t,TValue> __get__onSpawnMethod() const;


// Properties

 System::Action_7<UnityEngine::Vector2,UnityEngine::Vector2,TParam3,float_t,System::Int32Enum,float_t,TValue> __declspec(property(put=set_OnSpawnMethod))  OnSpawnMethod;


// Methods

static Zenject::StaticMemoryPool_7<UnityEngine::Vector2,UnityEngine::Vector2,TParam3,float_t,System::Int32Enum,float_t,TValue> New_ctor(System::Action_7<UnityEngine::Vector2,UnityEngine::Vector2,TParam3,float_t,System::Int32Enum,float_t,TValue> onSpawnMethod, System::Action_1<TValue> onDespawnedMethod) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Action_7<UnityEngine::Vector2,UnityEngine::Vector2,TParam3,float_t,System::Int32Enum,float_t,TValue> onSpawnMethod, System::Action_1<TValue> onDespawnedMethod) ;

/// @brief Method set_OnSpawnMethod addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_OnSpawnMethod(System::Action_7<UnityEngine::Vector2,UnityEngine::Vector2,TParam3,float_t,System::Int32Enum,float_t,TValue> value) ;

/// @brief Method Spawn addr 0x0 size 0xffffffffffffffff virtual true final true
 TValue Spawn(UnityEngine::Vector2 p1, UnityEngine::Vector2 p2, TParam3 p3, float_t p4, System::Int32Enum p5, float_t p6) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::StaticMemoryPool`7
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TParam3,::cordl_internals::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11027)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11027), inst: 179 }), TypeDefinitionIndex(TypeDefinitionIndex(11034))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11034), inst: 6291 })
// CS Name: Zenject.StaticMemoryPool`7
class CORDL_TYPE StaticMemoryPool_7<float_t,float_t,TParam3,float_t,System::Int32Enum,float_t,TValue> : public Zenject::StaticMemoryPoolBase_1<TValue> {
public:
// Declarations
/// @brief Convert operator to Zenject::IMemoryPool_7<float_t,float_t,TParam3,float_t,System::Int32Enum,float_t,TValue>
constexpr operator  Zenject::IMemoryPool_7<float_t,float_t,TParam3,float_t,System::Int32Enum,float_t,TValue>() const noexcept;

/// @brief Convert operator to Zenject::IDespawnableMemoryPool_1<TValue>
constexpr operator  Zenject::IDespawnableMemoryPool_1<TValue>() const noexcept;

/// @brief Convert operator to Zenject::IMemoryPool
constexpr operator  Zenject::IMemoryPool() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~StaticMemoryPool_7() = default;

// Ctor Parameters [CppParam { name: "", ty: "StaticMemoryPool_7", modifiers: " const&", def_value: None }]
constexpr StaticMemoryPool_7(StaticMemoryPool_7 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StaticMemoryPool_7", modifiers: "&&", def_value: None }]
constexpr StaticMemoryPool_7(StaticMemoryPool_7&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StaticMemoryPool_7(void* ptr) noexcept : Zenject::StaticMemoryPoolBase_1<TValue>(ptr) {
}


  constexpr StaticMemoryPool_7& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StaticMemoryPool_7& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StaticMemoryPool_7& operator=(StaticMemoryPool_7&& o) noexcept = default;
  constexpr StaticMemoryPool_7& operator=(StaticMemoryPool_7 const& o) noexcept = default;
                


// Fields

 System::Action_7<float_t,float_t,TParam3,float_t,System::Int32Enum,float_t,TValue> __declspec(property(get=__get__onSpawnMethod, put=__set__onSpawnMethod))  _onSpawnMethod;

constexpr void __set__onSpawnMethod(System::Action_7<float_t,float_t,TParam3,float_t,System::Int32Enum,float_t,TValue> value) ;

constexpr System::Action_7<float_t,float_t,TParam3,float_t,System::Int32Enum,float_t,TValue> __get__onSpawnMethod() const;


// Properties

 System::Action_7<float_t,float_t,TParam3,float_t,System::Int32Enum,float_t,TValue> __declspec(property(put=set_OnSpawnMethod))  OnSpawnMethod;


// Methods

static Zenject::StaticMemoryPool_7<float_t,float_t,TParam3,float_t,System::Int32Enum,float_t,TValue> New_ctor(System::Action_7<float_t,float_t,TParam3,float_t,System::Int32Enum,float_t,TValue> onSpawnMethod, System::Action_1<TValue> onDespawnedMethod) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Action_7<float_t,float_t,TParam3,float_t,System::Int32Enum,float_t,TValue> onSpawnMethod, System::Action_1<TValue> onDespawnedMethod) ;

/// @brief Method set_OnSpawnMethod addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_OnSpawnMethod(System::Action_7<float_t,float_t,TParam3,float_t,System::Int32Enum,float_t,TValue> value) ;

/// @brief Method Spawn addr 0x0 size 0xffffffffffffffff virtual true final true
 TValue Spawn(float_t p1, float_t p2, TParam3 p3, float_t p4, System::Int32Enum p5, float_t p6) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::StaticMemoryPool`7
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TParam3,::cordl_internals::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11034)), TypeDefinitionIndex(TypeDefinitionIndex(11027)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11027), inst: 179 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11034), inst: 6290 })
// CS Name: Zenject.StaticMemoryPool`7
class CORDL_TYPE StaticMemoryPool_7<UnityEngine::Color,UnityEngine::Color,TParam3,float_t,System::Int32Enum,float_t,TValue> : public Zenject::StaticMemoryPoolBase_1<TValue> {
public:
// Declarations
/// @brief Convert operator to Zenject::IMemoryPool_7<UnityEngine::Color,UnityEngine::Color,TParam3,float_t,System::Int32Enum,float_t,TValue>
constexpr operator  Zenject::IMemoryPool_7<UnityEngine::Color,UnityEngine::Color,TParam3,float_t,System::Int32Enum,float_t,TValue>() const noexcept;

/// @brief Convert operator to Zenject::IDespawnableMemoryPool_1<TValue>
constexpr operator  Zenject::IDespawnableMemoryPool_1<TValue>() const noexcept;

/// @brief Convert operator to Zenject::IMemoryPool
constexpr operator  Zenject::IMemoryPool() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~StaticMemoryPool_7() = default;

// Ctor Parameters [CppParam { name: "", ty: "StaticMemoryPool_7", modifiers: " const&", def_value: None }]
constexpr StaticMemoryPool_7(StaticMemoryPool_7 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StaticMemoryPool_7", modifiers: "&&", def_value: None }]
constexpr StaticMemoryPool_7(StaticMemoryPool_7&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StaticMemoryPool_7(void* ptr) noexcept : Zenject::StaticMemoryPoolBase_1<TValue>(ptr) {
}


  constexpr StaticMemoryPool_7& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StaticMemoryPool_7& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StaticMemoryPool_7& operator=(StaticMemoryPool_7&& o) noexcept = default;
  constexpr StaticMemoryPool_7& operator=(StaticMemoryPool_7 const& o) noexcept = default;
                


// Fields

 System::Action_7<UnityEngine::Color,UnityEngine::Color,TParam3,float_t,System::Int32Enum,float_t,TValue> __declspec(property(get=__get__onSpawnMethod, put=__set__onSpawnMethod))  _onSpawnMethod;

constexpr void __set__onSpawnMethod(System::Action_7<UnityEngine::Color,UnityEngine::Color,TParam3,float_t,System::Int32Enum,float_t,TValue> value) ;

constexpr System::Action_7<UnityEngine::Color,UnityEngine::Color,TParam3,float_t,System::Int32Enum,float_t,TValue> __get__onSpawnMethod() const;


// Properties

 System::Action_7<UnityEngine::Color,UnityEngine::Color,TParam3,float_t,System::Int32Enum,float_t,TValue> __declspec(property(put=set_OnSpawnMethod))  OnSpawnMethod;


// Methods

static Zenject::StaticMemoryPool_7<UnityEngine::Color,UnityEngine::Color,TParam3,float_t,System::Int32Enum,float_t,TValue> New_ctor(System::Action_7<UnityEngine::Color,UnityEngine::Color,TParam3,float_t,System::Int32Enum,float_t,TValue> onSpawnMethod, System::Action_1<TValue> onDespawnedMethod) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Action_7<UnityEngine::Color,UnityEngine::Color,TParam3,float_t,System::Int32Enum,float_t,TValue> onSpawnMethod, System::Action_1<TValue> onDespawnedMethod) ;

/// @brief Method set_OnSpawnMethod addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_OnSpawnMethod(System::Action_7<UnityEngine::Color,UnityEngine::Color,TParam3,float_t,System::Int32Enum,float_t,TValue> value) ;

/// @brief Method Spawn addr 0x0 size 0xffffffffffffffff virtual true final true
 TValue Spawn(UnityEngine::Color p1, UnityEngine::Color p2, TParam3 p3, float_t p4, System::Int32Enum p5, float_t p6) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::StaticMemoryPool`7
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TParam3,::cordl_internals::il2cpp_reference_type TParam4,::cordl_internals::il2cpp_reference_type TParam5,::cordl_internals::il2cpp_reference_type TParam6,::cordl_internals::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11027), inst: 179 }), TypeDefinitionIndex(TypeDefinitionIndex(11027)), TypeDefinitionIndex(TypeDefinitionIndex(11034))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11034), inst: 5940 })
// CS Name: Zenject.StaticMemoryPool`7
class CORDL_TYPE StaticMemoryPool_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TValue> : public Zenject::StaticMemoryPoolBase_1<TValue> {
public:
// Declarations
/// @brief Convert operator to Zenject::IMemoryPool_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TValue>
constexpr operator  Zenject::IMemoryPool_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TValue>() const noexcept;

/// @brief Convert operator to Zenject::IDespawnableMemoryPool_1<TValue>
constexpr operator  Zenject::IDespawnableMemoryPool_1<TValue>() const noexcept;

/// @brief Convert operator to Zenject::IMemoryPool
constexpr operator  Zenject::IMemoryPool() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~StaticMemoryPool_7() = default;

// Ctor Parameters [CppParam { name: "", ty: "StaticMemoryPool_7", modifiers: " const&", def_value: None }]
constexpr StaticMemoryPool_7(StaticMemoryPool_7 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StaticMemoryPool_7", modifiers: "&&", def_value: None }]
constexpr StaticMemoryPool_7(StaticMemoryPool_7&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StaticMemoryPool_7(void* ptr) noexcept : Zenject::StaticMemoryPoolBase_1<TValue>(ptr) {
}


  constexpr StaticMemoryPool_7& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StaticMemoryPool_7& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StaticMemoryPool_7& operator=(StaticMemoryPool_7&& o) noexcept = default;
  constexpr StaticMemoryPool_7& operator=(StaticMemoryPool_7 const& o) noexcept = default;
                


// Fields

 System::Action_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TValue> __declspec(property(get=__get__onSpawnMethod, put=__set__onSpawnMethod))  _onSpawnMethod;

constexpr void __set__onSpawnMethod(System::Action_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TValue> value) ;

constexpr System::Action_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TValue> __get__onSpawnMethod() const;


// Properties

 System::Action_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TValue> __declspec(property(put=set_OnSpawnMethod))  OnSpawnMethod;


// Methods

static Zenject::StaticMemoryPool_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TValue> New_ctor(System::Action_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TValue> onSpawnMethod, System::Action_1<TValue> onDespawnedMethod) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Action_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TValue> onSpawnMethod, System::Action_1<TValue> onDespawnedMethod) ;

/// @brief Method set_OnSpawnMethod addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_OnSpawnMethod(System::Action_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TValue> value) ;

/// @brief Method Spawn addr 0x0 size 0xffffffffffffffff virtual true final true
 TValue Spawn(TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4, TParam5 p5, TParam6 p6) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::StaticMemoryPool_7, "Zenject", "StaticMemoryPool`7");
