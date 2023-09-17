#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
namespace {
namespace UnityEngine::Pool {
template<typename T>
struct PooledObject_1;
}
namespace UnityEngine::Pool {
template<typename T>
class ObjectPool_1;
}
namespace UnityEngine {
struct UIVertex;
}
namespace UnityEngine {
struct Vector4;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine::InputSystem::HID {
struct ____UnityEngine__InputSystem__HID__HID__HIDElementDescriptor;
}
// Forward declare root types
namespace UnityEngine::Pool {
template<typename TCollection,typename TItem>
class CollectionPool_2;
}
namespace UnityEngine::Pool {
template<typename TCollection,typename TItem>
class ____UnityEngine__Pool__CollectionPool_2____c;
}
namespace UnityEngine::Pool {
template<::cordl_internals::il2cpp_reference_type TCollection,::cordl_internals::il2cpp_reference_type TItem>
class CollectionPool_2<TCollection,TItem>;
}
namespace UnityEngine::Pool {
template<::cordl_internals::il2cpp_reference_type TCollection>
class CollectionPool_2<TCollection,::UnityEngine::UIVertex>;
}
namespace UnityEngine::Pool {
template<::cordl_internals::il2cpp_reference_type TCollection>
class CollectionPool_2<TCollection,::UnityEngine::Vector4>;
}
namespace UnityEngine::Pool {
template<::cordl_internals::il2cpp_reference_type TCollection>
class CollectionPool_2<TCollection,::UnityEngine::Color32>;
}
namespace UnityEngine::Pool {
template<::cordl_internals::il2cpp_reference_type TCollection>
class CollectionPool_2<TCollection,::UnityEngine::Vector3>;
}
namespace UnityEngine::Pool {
template<::cordl_internals::il2cpp_reference_type TCollection>
class CollectionPool_2<TCollection,::UnityEngine::InputSystem::HID::____UnityEngine__InputSystem__HID__HID__HIDElementDescriptor>;
}
namespace UnityEngine::Pool {
template<::cordl_internals::il2cpp_reference_type TCollection>
class CollectionPool_2<TCollection,int32_t>;
}
namespace UnityEngine::Pool {
template<::cordl_internals::il2cpp_reference_type TCollection>
class ____UnityEngine__Pool__CollectionPool_2____c<TCollection,::UnityEngine::UIVertex>;
}
namespace UnityEngine::Pool {
template<::cordl_internals::il2cpp_reference_type TCollection>
class ____UnityEngine__Pool__CollectionPool_2____c<TCollection,::UnityEngine::Vector4>;
}
namespace UnityEngine::Pool {
template<::cordl_internals::il2cpp_reference_type TCollection>
class ____UnityEngine__Pool__CollectionPool_2____c<TCollection,::UnityEngine::Vector3>;
}
namespace UnityEngine::Pool {
template<::cordl_internals::il2cpp_reference_type TCollection,::cordl_internals::il2cpp_reference_type TItem>
class ____UnityEngine__Pool__CollectionPool_2____c<TCollection,TItem>;
}
namespace UnityEngine::Pool {
template<::cordl_internals::il2cpp_reference_type TCollection>
class ____UnityEngine__Pool__CollectionPool_2____c<TCollection,int32_t>;
}
namespace UnityEngine::Pool {
template<::cordl_internals::il2cpp_reference_type TCollection>
class ____UnityEngine__Pool__CollectionPool_2____c<TCollection,::UnityEngine::InputSystem::HID::____UnityEngine__InputSystem__HID__HID__HIDElementDescriptor>;
}
namespace UnityEngine::Pool {
template<::cordl_internals::il2cpp_reference_type TCollection>
class ____UnityEngine__Pool__CollectionPool_2____c<TCollection,::UnityEngine::Color32>;
}
// Type: ::<>c
// Type: UnityEngine.Pool::CollectionPool`2
// Type: ::<>c
namespace UnityEngine::Pool {
// cpp template
template<::cordl_internals::il2cpp_reference_type TCollection,::cordl_internals::il2cpp_reference_type TItem>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10379))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10379), inst: 80 })
// CS Name: UnityEngine.Pool.CollectionPool`2::<>c
class CORDL_TYPE ____UnityEngine__Pool__CollectionPool_2____c<TCollection,TItem> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~____UnityEngine__Pool__CollectionPool_2____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__Pool__CollectionPool_2____c", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__Pool__CollectionPool_2____c(____UnityEngine__Pool__CollectionPool_2____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__Pool__CollectionPool_2____c", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__Pool__CollectionPool_2____c(____UnityEngine__Pool__CollectionPool_2____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__Pool__CollectionPool_2____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____UnityEngine__Pool__CollectionPool_2____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__Pool__CollectionPool_2____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__Pool__CollectionPool_2____c& operator=(____UnityEngine__Pool__CollectionPool_2____c&& o) noexcept = default;
  constexpr ____UnityEngine__Pool__CollectionPool_2____c& operator=(____UnityEngine__Pool__CollectionPool_2____c const& o) noexcept = default;
                


// Fields

static ::UnityEngine::Pool::____UnityEngine__Pool__CollectionPool_2____c<TCollection,TItem> __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(::UnityEngine::Pool::____UnityEngine__Pool__CollectionPool_2____c<TCollection,TItem> value) ;

static ::UnityEngine::Pool::____UnityEngine__Pool__CollectionPool_2____c<TCollection,TItem> __get___9() ;


// Methods

// Ctor Parameters []
explicit ____UnityEngine__Pool__CollectionPool_2____c() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <.cctor>b__5_0 addr 0x0 size 0xffffffffffffffff virtual false final false
 TCollection __cctor_b__5_0() ;

/// @brief Method <.cctor>b__5_1 addr 0x0 size 0xffffffffffffffff virtual false final false
 void __cctor_b__5_1(TCollection l) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Pool
// Type: ::<>c
namespace UnityEngine::Pool {
// cpp template
template<::cordl_internals::il2cpp_reference_type TCollection>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10379))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10379), inst: 1547 })
// CS Name: UnityEngine.Pool.CollectionPool`2::<>c
class CORDL_TYPE ____UnityEngine__Pool__CollectionPool_2____c<TCollection,::UnityEngine::Color32> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~____UnityEngine__Pool__CollectionPool_2____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__Pool__CollectionPool_2____c", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__Pool__CollectionPool_2____c(____UnityEngine__Pool__CollectionPool_2____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__Pool__CollectionPool_2____c", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__Pool__CollectionPool_2____c(____UnityEngine__Pool__CollectionPool_2____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__Pool__CollectionPool_2____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____UnityEngine__Pool__CollectionPool_2____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__Pool__CollectionPool_2____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__Pool__CollectionPool_2____c& operator=(____UnityEngine__Pool__CollectionPool_2____c&& o) noexcept = default;
  constexpr ____UnityEngine__Pool__CollectionPool_2____c& operator=(____UnityEngine__Pool__CollectionPool_2____c const& o) noexcept = default;
                


// Fields

static ::UnityEngine::Pool::____UnityEngine__Pool__CollectionPool_2____c<TCollection,::UnityEngine::Color32> __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(::UnityEngine::Pool::____UnityEngine__Pool__CollectionPool_2____c<TCollection,::UnityEngine::Color32> value) ;

static ::UnityEngine::Pool::____UnityEngine__Pool__CollectionPool_2____c<TCollection,::UnityEngine::Color32> __get___9() ;


// Methods

// Ctor Parameters []
explicit ____UnityEngine__Pool__CollectionPool_2____c() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <.cctor>b__5_0 addr 0x0 size 0xffffffffffffffff virtual false final false
 TCollection __cctor_b__5_0() ;

/// @brief Method <.cctor>b__5_1 addr 0x0 size 0xffffffffffffffff virtual false final false
 void __cctor_b__5_1(TCollection l) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Pool
// Type: ::<>c
namespace UnityEngine::Pool {
// cpp template
template<::cordl_internals::il2cpp_reference_type TCollection>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10379))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10379), inst: 1548 })
// CS Name: UnityEngine.Pool.CollectionPool`2::<>c
class CORDL_TYPE ____UnityEngine__Pool__CollectionPool_2____c<TCollection,int32_t> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~____UnityEngine__Pool__CollectionPool_2____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__Pool__CollectionPool_2____c", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__Pool__CollectionPool_2____c(____UnityEngine__Pool__CollectionPool_2____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__Pool__CollectionPool_2____c", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__Pool__CollectionPool_2____c(____UnityEngine__Pool__CollectionPool_2____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__Pool__CollectionPool_2____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____UnityEngine__Pool__CollectionPool_2____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__Pool__CollectionPool_2____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__Pool__CollectionPool_2____c& operator=(____UnityEngine__Pool__CollectionPool_2____c&& o) noexcept = default;
  constexpr ____UnityEngine__Pool__CollectionPool_2____c& operator=(____UnityEngine__Pool__CollectionPool_2____c const& o) noexcept = default;
                


// Fields

static ::UnityEngine::Pool::____UnityEngine__Pool__CollectionPool_2____c<TCollection,int32_t> __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(::UnityEngine::Pool::____UnityEngine__Pool__CollectionPool_2____c<TCollection,int32_t> value) ;

static ::UnityEngine::Pool::____UnityEngine__Pool__CollectionPool_2____c<TCollection,int32_t> __get___9() ;


// Methods

// Ctor Parameters []
explicit ____UnityEngine__Pool__CollectionPool_2____c() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <.cctor>b__5_0 addr 0x0 size 0xffffffffffffffff virtual false final false
 TCollection __cctor_b__5_0() ;

/// @brief Method <.cctor>b__5_1 addr 0x0 size 0xffffffffffffffff virtual false final false
 void __cctor_b__5_1(TCollection l) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Pool
// Type: ::<>c
namespace UnityEngine::Pool {
// cpp template
template<::cordl_internals::il2cpp_reference_type TCollection>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10379))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10379), inst: 5141 })
// CS Name: UnityEngine.Pool.CollectionPool`2::<>c
class CORDL_TYPE ____UnityEngine__Pool__CollectionPool_2____c<TCollection,::UnityEngine::Vector3> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~____UnityEngine__Pool__CollectionPool_2____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__Pool__CollectionPool_2____c", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__Pool__CollectionPool_2____c(____UnityEngine__Pool__CollectionPool_2____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__Pool__CollectionPool_2____c", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__Pool__CollectionPool_2____c(____UnityEngine__Pool__CollectionPool_2____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__Pool__CollectionPool_2____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____UnityEngine__Pool__CollectionPool_2____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__Pool__CollectionPool_2____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__Pool__CollectionPool_2____c& operator=(____UnityEngine__Pool__CollectionPool_2____c&& o) noexcept = default;
  constexpr ____UnityEngine__Pool__CollectionPool_2____c& operator=(____UnityEngine__Pool__CollectionPool_2____c const& o) noexcept = default;
                


// Fields

static ::UnityEngine::Pool::____UnityEngine__Pool__CollectionPool_2____c<TCollection,::UnityEngine::Vector3> __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(::UnityEngine::Pool::____UnityEngine__Pool__CollectionPool_2____c<TCollection,::UnityEngine::Vector3> value) ;

static ::UnityEngine::Pool::____UnityEngine__Pool__CollectionPool_2____c<TCollection,::UnityEngine::Vector3> __get___9() ;


// Methods

// Ctor Parameters []
explicit ____UnityEngine__Pool__CollectionPool_2____c() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <.cctor>b__5_0 addr 0x0 size 0xffffffffffffffff virtual false final false
 TCollection __cctor_b__5_0() ;

/// @brief Method <.cctor>b__5_1 addr 0x0 size 0xffffffffffffffff virtual false final false
 void __cctor_b__5_1(TCollection l) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Pool
// Type: ::<>c
namespace UnityEngine::Pool {
// cpp template
template<::cordl_internals::il2cpp_reference_type TCollection>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10379))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10379), inst: 5932 })
// CS Name: UnityEngine.Pool.CollectionPool`2::<>c
class CORDL_TYPE ____UnityEngine__Pool__CollectionPool_2____c<TCollection,::UnityEngine::UIVertex> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~____UnityEngine__Pool__CollectionPool_2____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__Pool__CollectionPool_2____c", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__Pool__CollectionPool_2____c(____UnityEngine__Pool__CollectionPool_2____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__Pool__CollectionPool_2____c", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__Pool__CollectionPool_2____c(____UnityEngine__Pool__CollectionPool_2____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__Pool__CollectionPool_2____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____UnityEngine__Pool__CollectionPool_2____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__Pool__CollectionPool_2____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__Pool__CollectionPool_2____c& operator=(____UnityEngine__Pool__CollectionPool_2____c&& o) noexcept = default;
  constexpr ____UnityEngine__Pool__CollectionPool_2____c& operator=(____UnityEngine__Pool__CollectionPool_2____c const& o) noexcept = default;
                


// Fields

static ::UnityEngine::Pool::____UnityEngine__Pool__CollectionPool_2____c<TCollection,::UnityEngine::UIVertex> __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(::UnityEngine::Pool::____UnityEngine__Pool__CollectionPool_2____c<TCollection,::UnityEngine::UIVertex> value) ;

static ::UnityEngine::Pool::____UnityEngine__Pool__CollectionPool_2____c<TCollection,::UnityEngine::UIVertex> __get___9() ;


// Methods

// Ctor Parameters []
explicit ____UnityEngine__Pool__CollectionPool_2____c() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <.cctor>b__5_0 addr 0x0 size 0xffffffffffffffff virtual false final false
 TCollection __cctor_b__5_0() ;

/// @brief Method <.cctor>b__5_1 addr 0x0 size 0xffffffffffffffff virtual false final false
 void __cctor_b__5_1(TCollection l) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Pool
// Type: ::<>c
namespace UnityEngine::Pool {
// cpp template
template<::cordl_internals::il2cpp_reference_type TCollection>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10379))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10379), inst: 5933 })
// CS Name: UnityEngine.Pool.CollectionPool`2::<>c
class CORDL_TYPE ____UnityEngine__Pool__CollectionPool_2____c<TCollection,::UnityEngine::Vector4> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~____UnityEngine__Pool__CollectionPool_2____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__Pool__CollectionPool_2____c", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__Pool__CollectionPool_2____c(____UnityEngine__Pool__CollectionPool_2____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__Pool__CollectionPool_2____c", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__Pool__CollectionPool_2____c(____UnityEngine__Pool__CollectionPool_2____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__Pool__CollectionPool_2____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____UnityEngine__Pool__CollectionPool_2____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__Pool__CollectionPool_2____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__Pool__CollectionPool_2____c& operator=(____UnityEngine__Pool__CollectionPool_2____c&& o) noexcept = default;
  constexpr ____UnityEngine__Pool__CollectionPool_2____c& operator=(____UnityEngine__Pool__CollectionPool_2____c const& o) noexcept = default;
                


// Fields

static ::UnityEngine::Pool::____UnityEngine__Pool__CollectionPool_2____c<TCollection,::UnityEngine::Vector4> __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(::UnityEngine::Pool::____UnityEngine__Pool__CollectionPool_2____c<TCollection,::UnityEngine::Vector4> value) ;

static ::UnityEngine::Pool::____UnityEngine__Pool__CollectionPool_2____c<TCollection,::UnityEngine::Vector4> __get___9() ;


// Methods

// Ctor Parameters []
explicit ____UnityEngine__Pool__CollectionPool_2____c() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <.cctor>b__5_0 addr 0x0 size 0xffffffffffffffff virtual false final false
 TCollection __cctor_b__5_0() ;

/// @brief Method <.cctor>b__5_1 addr 0x0 size 0xffffffffffffffff virtual false final false
 void __cctor_b__5_1(TCollection l) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Pool
// Type: ::<>c
namespace UnityEngine::Pool {
// cpp template
template<::cordl_internals::il2cpp_reference_type TCollection>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10379))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10379), inst: 5934 })
// CS Name: UnityEngine.Pool.CollectionPool`2::<>c
class CORDL_TYPE ____UnityEngine__Pool__CollectionPool_2____c<TCollection,::UnityEngine::InputSystem::HID::____UnityEngine__InputSystem__HID__HID__HIDElementDescriptor> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~____UnityEngine__Pool__CollectionPool_2____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__Pool__CollectionPool_2____c", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__Pool__CollectionPool_2____c(____UnityEngine__Pool__CollectionPool_2____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__Pool__CollectionPool_2____c", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__Pool__CollectionPool_2____c(____UnityEngine__Pool__CollectionPool_2____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__Pool__CollectionPool_2____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____UnityEngine__Pool__CollectionPool_2____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__Pool__CollectionPool_2____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__Pool__CollectionPool_2____c& operator=(____UnityEngine__Pool__CollectionPool_2____c&& o) noexcept = default;
  constexpr ____UnityEngine__Pool__CollectionPool_2____c& operator=(____UnityEngine__Pool__CollectionPool_2____c const& o) noexcept = default;
                


// Fields

static ::UnityEngine::Pool::____UnityEngine__Pool__CollectionPool_2____c<TCollection,::UnityEngine::InputSystem::HID::____UnityEngine__InputSystem__HID__HID__HIDElementDescriptor> __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(::UnityEngine::Pool::____UnityEngine__Pool__CollectionPool_2____c<TCollection,::UnityEngine::InputSystem::HID::____UnityEngine__InputSystem__HID__HID__HIDElementDescriptor> value) ;

static ::UnityEngine::Pool::____UnityEngine__Pool__CollectionPool_2____c<TCollection,::UnityEngine::InputSystem::HID::____UnityEngine__InputSystem__HID__HID__HIDElementDescriptor> __get___9() ;


// Methods

// Ctor Parameters []
explicit ____UnityEngine__Pool__CollectionPool_2____c() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <.cctor>b__5_0 addr 0x0 size 0xffffffffffffffff virtual false final false
 TCollection __cctor_b__5_0() ;

/// @brief Method <.cctor>b__5_1 addr 0x0 size 0xffffffffffffffff virtual false final false
 void __cctor_b__5_1(TCollection l) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Pool
// Type: UnityEngine.Pool::CollectionPool`2
namespace UnityEngine::Pool {
// cpp template
template<::cordl_internals::il2cpp_reference_type TCollection,::cordl_internals::il2cpp_reference_type TItem>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10380))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10380), inst: 80 })
// CS Name: UnityEngine.Pool.CollectionPool`2
class CORDL_TYPE CollectionPool_2<TCollection,TItem> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c = ::UnityEngine::Pool::____UnityEngine__Pool__CollectionPool_2____c<TCollection, TItem>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~CollectionPool_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "CollectionPool_2", modifiers: " const&", def_value: None }]
constexpr CollectionPool_2(CollectionPool_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CollectionPool_2", modifiers: "&&", def_value: None }]
constexpr CollectionPool_2(CollectionPool_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CollectionPool_2(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CollectionPool_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CollectionPool_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CollectionPool_2& operator=(CollectionPool_2&& o) noexcept = default;
  constexpr CollectionPool_2& operator=(CollectionPool_2 const& o) noexcept = default;
                


// Fields

static ::UnityEngine::Pool::ObjectPool_1<TCollection> __declspec(property(get=__get_s_Pool, put=__set_s_Pool))  s_Pool;

static void __set_s_Pool(::UnityEngine::Pool::ObjectPool_1<TCollection> value) ;

static ::UnityEngine::Pool::ObjectPool_1<TCollection> __get_s_Pool() ;


// Methods

/// @brief Method Get addr 0x0 size 0xffffffffffffffff virtual false final false
static TCollection Get() ;

/// @brief Method Get addr 0x0 size 0xffffffffffffffff virtual false final false
static ::UnityEngine::Pool::PooledObject_1<TCollection> Get(ByRef<TCollection> value) ;

/// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual false final false
static void Release(TCollection toRelease) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Pool
// Type: UnityEngine.Pool::CollectionPool`2
namespace UnityEngine::Pool {
// cpp template
template<::cordl_internals::il2cpp_reference_type TCollection>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10380))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10380), inst: 1547 })
// CS Name: UnityEngine.Pool.CollectionPool`2
class CORDL_TYPE CollectionPool_2<TCollection,::UnityEngine::Color32> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c = ::UnityEngine::Pool::____UnityEngine__Pool__CollectionPool_2____c<TCollection, ::UnityEngine::Color32>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~CollectionPool_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "CollectionPool_2", modifiers: " const&", def_value: None }]
constexpr CollectionPool_2(CollectionPool_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CollectionPool_2", modifiers: "&&", def_value: None }]
constexpr CollectionPool_2(CollectionPool_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CollectionPool_2(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CollectionPool_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CollectionPool_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CollectionPool_2& operator=(CollectionPool_2&& o) noexcept = default;
  constexpr CollectionPool_2& operator=(CollectionPool_2 const& o) noexcept = default;
                


// Fields

static ::UnityEngine::Pool::ObjectPool_1<TCollection> __declspec(property(get=__get_s_Pool, put=__set_s_Pool))  s_Pool;

static void __set_s_Pool(::UnityEngine::Pool::ObjectPool_1<TCollection> value) ;

static ::UnityEngine::Pool::ObjectPool_1<TCollection> __get_s_Pool() ;


// Methods

/// @brief Method Get addr 0x0 size 0xffffffffffffffff virtual false final false
static TCollection Get() ;

/// @brief Method Get addr 0x0 size 0xffffffffffffffff virtual false final false
static ::UnityEngine::Pool::PooledObject_1<TCollection> Get(ByRef<TCollection> value) ;

/// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual false final false
static void Release(TCollection toRelease) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Pool
// Type: UnityEngine.Pool::CollectionPool`2
namespace UnityEngine::Pool {
// cpp template
template<::cordl_internals::il2cpp_reference_type TCollection>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10380))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10380), inst: 1548 })
// CS Name: UnityEngine.Pool.CollectionPool`2
class CORDL_TYPE CollectionPool_2<TCollection,int32_t> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c = ::UnityEngine::Pool::____UnityEngine__Pool__CollectionPool_2____c<TCollection, int32_t>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~CollectionPool_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "CollectionPool_2", modifiers: " const&", def_value: None }]
constexpr CollectionPool_2(CollectionPool_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CollectionPool_2", modifiers: "&&", def_value: None }]
constexpr CollectionPool_2(CollectionPool_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CollectionPool_2(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CollectionPool_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CollectionPool_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CollectionPool_2& operator=(CollectionPool_2&& o) noexcept = default;
  constexpr CollectionPool_2& operator=(CollectionPool_2 const& o) noexcept = default;
                


// Fields

static ::UnityEngine::Pool::ObjectPool_1<TCollection> __declspec(property(get=__get_s_Pool, put=__set_s_Pool))  s_Pool;

static void __set_s_Pool(::UnityEngine::Pool::ObjectPool_1<TCollection> value) ;

static ::UnityEngine::Pool::ObjectPool_1<TCollection> __get_s_Pool() ;


// Methods

/// @brief Method Get addr 0x0 size 0xffffffffffffffff virtual false final false
static TCollection Get() ;

/// @brief Method Get addr 0x0 size 0xffffffffffffffff virtual false final false
static ::UnityEngine::Pool::PooledObject_1<TCollection> Get(ByRef<TCollection> value) ;

/// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual false final false
static void Release(TCollection toRelease) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Pool
// Type: UnityEngine.Pool::CollectionPool`2
namespace UnityEngine::Pool {
// cpp template
template<::cordl_internals::il2cpp_reference_type TCollection>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10380))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10380), inst: 5141 })
// CS Name: UnityEngine.Pool.CollectionPool`2
class CORDL_TYPE CollectionPool_2<TCollection,::UnityEngine::Vector3> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c = ::UnityEngine::Pool::____UnityEngine__Pool__CollectionPool_2____c<TCollection, ::UnityEngine::Vector3>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~CollectionPool_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "CollectionPool_2", modifiers: " const&", def_value: None }]
constexpr CollectionPool_2(CollectionPool_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CollectionPool_2", modifiers: "&&", def_value: None }]
constexpr CollectionPool_2(CollectionPool_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CollectionPool_2(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CollectionPool_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CollectionPool_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CollectionPool_2& operator=(CollectionPool_2&& o) noexcept = default;
  constexpr CollectionPool_2& operator=(CollectionPool_2 const& o) noexcept = default;
                


// Fields

static ::UnityEngine::Pool::ObjectPool_1<TCollection> __declspec(property(get=__get_s_Pool, put=__set_s_Pool))  s_Pool;

static void __set_s_Pool(::UnityEngine::Pool::ObjectPool_1<TCollection> value) ;

static ::UnityEngine::Pool::ObjectPool_1<TCollection> __get_s_Pool() ;


// Methods

/// @brief Method Get addr 0x0 size 0xffffffffffffffff virtual false final false
static TCollection Get() ;

/// @brief Method Get addr 0x0 size 0xffffffffffffffff virtual false final false
static ::UnityEngine::Pool::PooledObject_1<TCollection> Get(ByRef<TCollection> value) ;

/// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual false final false
static void Release(TCollection toRelease) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Pool
// Type: UnityEngine.Pool::CollectionPool`2
namespace UnityEngine::Pool {
// cpp template
template<::cordl_internals::il2cpp_reference_type TCollection>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10380))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10380), inst: 5932 })
// CS Name: UnityEngine.Pool.CollectionPool`2
class CORDL_TYPE CollectionPool_2<TCollection,::UnityEngine::UIVertex> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c = ::UnityEngine::Pool::____UnityEngine__Pool__CollectionPool_2____c<TCollection, ::UnityEngine::UIVertex>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~CollectionPool_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "CollectionPool_2", modifiers: " const&", def_value: None }]
constexpr CollectionPool_2(CollectionPool_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CollectionPool_2", modifiers: "&&", def_value: None }]
constexpr CollectionPool_2(CollectionPool_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CollectionPool_2(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CollectionPool_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CollectionPool_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CollectionPool_2& operator=(CollectionPool_2&& o) noexcept = default;
  constexpr CollectionPool_2& operator=(CollectionPool_2 const& o) noexcept = default;
                


// Fields

static ::UnityEngine::Pool::ObjectPool_1<TCollection> __declspec(property(get=__get_s_Pool, put=__set_s_Pool))  s_Pool;

static void __set_s_Pool(::UnityEngine::Pool::ObjectPool_1<TCollection> value) ;

static ::UnityEngine::Pool::ObjectPool_1<TCollection> __get_s_Pool() ;


// Methods

/// @brief Method Get addr 0x0 size 0xffffffffffffffff virtual false final false
static TCollection Get() ;

/// @brief Method Get addr 0x0 size 0xffffffffffffffff virtual false final false
static ::UnityEngine::Pool::PooledObject_1<TCollection> Get(ByRef<TCollection> value) ;

/// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual false final false
static void Release(TCollection toRelease) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Pool
// Type: UnityEngine.Pool::CollectionPool`2
namespace UnityEngine::Pool {
// cpp template
template<::cordl_internals::il2cpp_reference_type TCollection>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10380))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10380), inst: 5933 })
// CS Name: UnityEngine.Pool.CollectionPool`2
class CORDL_TYPE CollectionPool_2<TCollection,::UnityEngine::Vector4> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c = ::UnityEngine::Pool::____UnityEngine__Pool__CollectionPool_2____c<TCollection, ::UnityEngine::Vector4>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~CollectionPool_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "CollectionPool_2", modifiers: " const&", def_value: None }]
constexpr CollectionPool_2(CollectionPool_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CollectionPool_2", modifiers: "&&", def_value: None }]
constexpr CollectionPool_2(CollectionPool_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CollectionPool_2(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CollectionPool_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CollectionPool_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CollectionPool_2& operator=(CollectionPool_2&& o) noexcept = default;
  constexpr CollectionPool_2& operator=(CollectionPool_2 const& o) noexcept = default;
                


// Fields

static ::UnityEngine::Pool::ObjectPool_1<TCollection> __declspec(property(get=__get_s_Pool, put=__set_s_Pool))  s_Pool;

static void __set_s_Pool(::UnityEngine::Pool::ObjectPool_1<TCollection> value) ;

static ::UnityEngine::Pool::ObjectPool_1<TCollection> __get_s_Pool() ;


// Methods

/// @brief Method Get addr 0x0 size 0xffffffffffffffff virtual false final false
static TCollection Get() ;

/// @brief Method Get addr 0x0 size 0xffffffffffffffff virtual false final false
static ::UnityEngine::Pool::PooledObject_1<TCollection> Get(ByRef<TCollection> value) ;

/// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual false final false
static void Release(TCollection toRelease) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Pool
// Type: UnityEngine.Pool::CollectionPool`2
namespace UnityEngine::Pool {
// cpp template
template<::cordl_internals::il2cpp_reference_type TCollection>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10380))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10380), inst: 5934 })
// CS Name: UnityEngine.Pool.CollectionPool`2
class CORDL_TYPE CollectionPool_2<TCollection,::UnityEngine::InputSystem::HID::____UnityEngine__InputSystem__HID__HID__HIDElementDescriptor> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c = ::UnityEngine::Pool::____UnityEngine__Pool__CollectionPool_2____c<TCollection, ::UnityEngine::InputSystem::HID::____UnityEngine__InputSystem__HID__HID__HIDElementDescriptor>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~CollectionPool_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "CollectionPool_2", modifiers: " const&", def_value: None }]
constexpr CollectionPool_2(CollectionPool_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CollectionPool_2", modifiers: "&&", def_value: None }]
constexpr CollectionPool_2(CollectionPool_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CollectionPool_2(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CollectionPool_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CollectionPool_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CollectionPool_2& operator=(CollectionPool_2&& o) noexcept = default;
  constexpr CollectionPool_2& operator=(CollectionPool_2 const& o) noexcept = default;
                


// Fields

static ::UnityEngine::Pool::ObjectPool_1<TCollection> __declspec(property(get=__get_s_Pool, put=__set_s_Pool))  s_Pool;

static void __set_s_Pool(::UnityEngine::Pool::ObjectPool_1<TCollection> value) ;

static ::UnityEngine::Pool::ObjectPool_1<TCollection> __get_s_Pool() ;


// Methods

/// @brief Method Get addr 0x0 size 0xffffffffffffffff virtual false final false
static TCollection Get() ;

/// @brief Method Get addr 0x0 size 0xffffffffffffffff virtual false final false
static ::UnityEngine::Pool::PooledObject_1<TCollection> Get(ByRef<TCollection> value) ;

/// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual false final false
static void Release(TCollection toRelease) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Pool
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Pool::CollectionPool_2, "UnityEngine.Pool", "CollectionPool`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Pool::____UnityEngine__Pool__CollectionPool_2____c, "UnityEngine.Pool", "CollectionPool`2/<>c");
