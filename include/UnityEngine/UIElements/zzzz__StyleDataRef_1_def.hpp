#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine::UIElements {
struct InheritedData;
}
namespace UnityEngine::UIElements {
struct LayoutData;
}
namespace UnityEngine::UIElements {
struct RareData;
}
namespace UnityEngine::UIElements {
struct TransformData;
}
namespace UnityEngine::UIElements {
struct TransitionData;
}
namespace UnityEngine::UIElements {
struct VisualData;
}
namespace System {
template<typename T>
class IEquatable_1;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template<typename T>
class ____UnityEngine__UIElements__StyleDataRef_1__RefCounted;
}
namespace UnityEngine::UIElements {
template<>
class ____UnityEngine__UIElements__StyleDataRef_1__RefCounted<::UnityEngine::UIElements::InheritedData>;
}
namespace UnityEngine::UIElements {
template<>
class ____UnityEngine__UIElements__StyleDataRef_1__RefCounted<::UnityEngine::UIElements::LayoutData>;
}
namespace UnityEngine::UIElements {
template<>
class ____UnityEngine__UIElements__StyleDataRef_1__RefCounted<::UnityEngine::UIElements::RareData>;
}
namespace UnityEngine::UIElements {
template<>
class ____UnityEngine__UIElements__StyleDataRef_1__RefCounted<::UnityEngine::UIElements::TransformData>;
}
namespace UnityEngine::UIElements {
template<>
class ____UnityEngine__UIElements__StyleDataRef_1__RefCounted<::UnityEngine::UIElements::TransitionData>;
}
namespace UnityEngine::UIElements {
template<>
class ____UnityEngine__UIElements__StyleDataRef_1__RefCounted<::UnityEngine::UIElements::VisualData>;
}
namespace UnityEngine::UIElements {
template<typename T>
struct StyleDataRef_1;
}
namespace UnityEngine::UIElements {
template<>
struct StyleDataRef_1<::UnityEngine::UIElements::InheritedData>;
}
namespace UnityEngine::UIElements {
template<>
struct StyleDataRef_1<::UnityEngine::UIElements::LayoutData>;
}
namespace UnityEngine::UIElements {
template<>
struct StyleDataRef_1<::UnityEngine::UIElements::RareData>;
}
namespace UnityEngine::UIElements {
template<>
struct StyleDataRef_1<::UnityEngine::UIElements::TransformData>;
}
namespace UnityEngine::UIElements {
template<>
struct StyleDataRef_1<::UnityEngine::UIElements::TransitionData>;
}
namespace UnityEngine::UIElements {
template<>
struct StyleDataRef_1<::UnityEngine::UIElements::VisualData>;
}
// Type: ::RefCounted
// Type: UnityEngine.UIElements::StyleDataRef`1
// Type: ::RefCounted
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7413))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7413), inst: 3188 })
// CS Name: UnityEngine.UIElements.StyleDataRef`1::RefCounted
class CORDL_TYPE ____UnityEngine__UIElements__StyleDataRef_1__RefCounted<::UnityEngine::UIElements::InheritedData> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~____UnityEngine__UIElements__StyleDataRef_1__RefCounted() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__UIElements__StyleDataRef_1__RefCounted", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__UIElements__StyleDataRef_1__RefCounted(____UnityEngine__UIElements__StyleDataRef_1__RefCounted const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__UIElements__StyleDataRef_1__RefCounted", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__UIElements__StyleDataRef_1__RefCounted(____UnityEngine__UIElements__StyleDataRef_1__RefCounted&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__UIElements__StyleDataRef_1__RefCounted(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____UnityEngine__UIElements__StyleDataRef_1__RefCounted& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__UIElements__StyleDataRef_1__RefCounted& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__UIElements__StyleDataRef_1__RefCounted& operator=(____UnityEngine__UIElements__StyleDataRef_1__RefCounted&& o) noexcept = default;
  constexpr ____UnityEngine__UIElements__StyleDataRef_1__RefCounted& operator=(____UnityEngine__UIElements__StyleDataRef_1__RefCounted const& o) noexcept = default;
                


// Fields

static uint32_t __declspec(property(get=__get_m_NextId, put=__set_m_NextId))  m_NextId;

static void __set_m_NextId(uint32_t value) ;

static uint32_t __get_m_NextId() ;

 int32_t __declspec(property(get=__get_m_RefCount, put=__set_m_RefCount))  m_RefCount;

constexpr void __set_m_RefCount(int32_t value) ;

constexpr int32_t __get_m_RefCount() const;

 uint32_t __declspec(property(get=__get_m_Id, put=__set_m_Id))  m_Id;

constexpr void __set_m_Id(uint32_t value) ;

constexpr uint32_t __get_m_Id() const;

 ::UnityEngine::UIElements::InheritedData __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(::UnityEngine::UIElements::InheritedData value) ;

constexpr ::UnityEngine::UIElements::InheritedData __get_value() const;


// Properties

 int32_t __declspec(property(get=get_refCount))  refCount;


// Methods

/// @brief Method get_refCount addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_refCount() ;

// Ctor Parameters []
explicit ____UnityEngine__UIElements__StyleDataRef_1__RefCounted() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method Acquire addr 0x0 size 0xffffffffffffffff virtual false final false
 void Acquire() ;

/// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual false final false
 void Release() ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::UIElements::____UnityEngine__UIElements__StyleDataRef_1__RefCounted<::UnityEngine::UIElements::InheritedData> Copy() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::RefCounted
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7413))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7413), inst: 3200 })
// CS Name: UnityEngine.UIElements.StyleDataRef`1::RefCounted
class CORDL_TYPE ____UnityEngine__UIElements__StyleDataRef_1__RefCounted<::UnityEngine::UIElements::LayoutData> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~____UnityEngine__UIElements__StyleDataRef_1__RefCounted() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__UIElements__StyleDataRef_1__RefCounted", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__UIElements__StyleDataRef_1__RefCounted(____UnityEngine__UIElements__StyleDataRef_1__RefCounted const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__UIElements__StyleDataRef_1__RefCounted", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__UIElements__StyleDataRef_1__RefCounted(____UnityEngine__UIElements__StyleDataRef_1__RefCounted&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__UIElements__StyleDataRef_1__RefCounted(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____UnityEngine__UIElements__StyleDataRef_1__RefCounted& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__UIElements__StyleDataRef_1__RefCounted& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__UIElements__StyleDataRef_1__RefCounted& operator=(____UnityEngine__UIElements__StyleDataRef_1__RefCounted&& o) noexcept = default;
  constexpr ____UnityEngine__UIElements__StyleDataRef_1__RefCounted& operator=(____UnityEngine__UIElements__StyleDataRef_1__RefCounted const& o) noexcept = default;
                


// Fields

static uint32_t __declspec(property(get=__get_m_NextId, put=__set_m_NextId))  m_NextId;

static void __set_m_NextId(uint32_t value) ;

static uint32_t __get_m_NextId() ;

 int32_t __declspec(property(get=__get_m_RefCount, put=__set_m_RefCount))  m_RefCount;

constexpr void __set_m_RefCount(int32_t value) ;

constexpr int32_t __get_m_RefCount() const;

 uint32_t __declspec(property(get=__get_m_Id, put=__set_m_Id))  m_Id;

constexpr void __set_m_Id(uint32_t value) ;

constexpr uint32_t __get_m_Id() const;

 ::UnityEngine::UIElements::LayoutData __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(::UnityEngine::UIElements::LayoutData value) ;

constexpr ::UnityEngine::UIElements::LayoutData __get_value() const;


// Properties

 int32_t __declspec(property(get=get_refCount))  refCount;


// Methods

/// @brief Method get_refCount addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_refCount() ;

// Ctor Parameters []
explicit ____UnityEngine__UIElements__StyleDataRef_1__RefCounted() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method Acquire addr 0x0 size 0xffffffffffffffff virtual false final false
 void Acquire() ;

/// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual false final false
 void Release() ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::UIElements::____UnityEngine__UIElements__StyleDataRef_1__RefCounted<::UnityEngine::UIElements::LayoutData> Copy() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::RefCounted
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7413))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7413), inst: 3224 })
// CS Name: UnityEngine.UIElements.StyleDataRef`1::RefCounted
class CORDL_TYPE ____UnityEngine__UIElements__StyleDataRef_1__RefCounted<::UnityEngine::UIElements::RareData> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~____UnityEngine__UIElements__StyleDataRef_1__RefCounted() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__UIElements__StyleDataRef_1__RefCounted", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__UIElements__StyleDataRef_1__RefCounted(____UnityEngine__UIElements__StyleDataRef_1__RefCounted const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__UIElements__StyleDataRef_1__RefCounted", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__UIElements__StyleDataRef_1__RefCounted(____UnityEngine__UIElements__StyleDataRef_1__RefCounted&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__UIElements__StyleDataRef_1__RefCounted(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____UnityEngine__UIElements__StyleDataRef_1__RefCounted& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__UIElements__StyleDataRef_1__RefCounted& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__UIElements__StyleDataRef_1__RefCounted& operator=(____UnityEngine__UIElements__StyleDataRef_1__RefCounted&& o) noexcept = default;
  constexpr ____UnityEngine__UIElements__StyleDataRef_1__RefCounted& operator=(____UnityEngine__UIElements__StyleDataRef_1__RefCounted const& o) noexcept = default;
                


// Fields

static uint32_t __declspec(property(get=__get_m_NextId, put=__set_m_NextId))  m_NextId;

static void __set_m_NextId(uint32_t value) ;

static uint32_t __get_m_NextId() ;

 int32_t __declspec(property(get=__get_m_RefCount, put=__set_m_RefCount))  m_RefCount;

constexpr void __set_m_RefCount(int32_t value) ;

constexpr int32_t __get_m_RefCount() const;

 uint32_t __declspec(property(get=__get_m_Id, put=__set_m_Id))  m_Id;

constexpr void __set_m_Id(uint32_t value) ;

constexpr uint32_t __get_m_Id() const;

 ::UnityEngine::UIElements::RareData __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(::UnityEngine::UIElements::RareData value) ;

constexpr ::UnityEngine::UIElements::RareData __get_value() const;


// Properties

 int32_t __declspec(property(get=get_refCount))  refCount;


// Methods

/// @brief Method get_refCount addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_refCount() ;

// Ctor Parameters []
explicit ____UnityEngine__UIElements__StyleDataRef_1__RefCounted() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method Acquire addr 0x0 size 0xffffffffffffffff virtual false final false
 void Acquire() ;

/// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual false final false
 void Release() ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::UIElements::____UnityEngine__UIElements__StyleDataRef_1__RefCounted<::UnityEngine::UIElements::RareData> Copy() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::RefCounted
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7413))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7413), inst: 3250 })
// CS Name: UnityEngine.UIElements.StyleDataRef`1::RefCounted
class CORDL_TYPE ____UnityEngine__UIElements__StyleDataRef_1__RefCounted<::UnityEngine::UIElements::TransformData> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~____UnityEngine__UIElements__StyleDataRef_1__RefCounted() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__UIElements__StyleDataRef_1__RefCounted", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__UIElements__StyleDataRef_1__RefCounted(____UnityEngine__UIElements__StyleDataRef_1__RefCounted const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__UIElements__StyleDataRef_1__RefCounted", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__UIElements__StyleDataRef_1__RefCounted(____UnityEngine__UIElements__StyleDataRef_1__RefCounted&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__UIElements__StyleDataRef_1__RefCounted(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____UnityEngine__UIElements__StyleDataRef_1__RefCounted& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__UIElements__StyleDataRef_1__RefCounted& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__UIElements__StyleDataRef_1__RefCounted& operator=(____UnityEngine__UIElements__StyleDataRef_1__RefCounted&& o) noexcept = default;
  constexpr ____UnityEngine__UIElements__StyleDataRef_1__RefCounted& operator=(____UnityEngine__UIElements__StyleDataRef_1__RefCounted const& o) noexcept = default;
                


// Fields

static uint32_t __declspec(property(get=__get_m_NextId, put=__set_m_NextId))  m_NextId;

static void __set_m_NextId(uint32_t value) ;

static uint32_t __get_m_NextId() ;

 int32_t __declspec(property(get=__get_m_RefCount, put=__set_m_RefCount))  m_RefCount;

constexpr void __set_m_RefCount(int32_t value) ;

constexpr int32_t __get_m_RefCount() const;

 uint32_t __declspec(property(get=__get_m_Id, put=__set_m_Id))  m_Id;

constexpr void __set_m_Id(uint32_t value) ;

constexpr uint32_t __get_m_Id() const;

 ::UnityEngine::UIElements::TransformData __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(::UnityEngine::UIElements::TransformData value) ;

constexpr ::UnityEngine::UIElements::TransformData __get_value() const;


// Properties

 int32_t __declspec(property(get=get_refCount))  refCount;


// Methods

/// @brief Method get_refCount addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_refCount() ;

// Ctor Parameters []
explicit ____UnityEngine__UIElements__StyleDataRef_1__RefCounted() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method Acquire addr 0x0 size 0xffffffffffffffff virtual false final false
 void Acquire() ;

/// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual false final false
 void Release() ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::UIElements::____UnityEngine__UIElements__StyleDataRef_1__RefCounted<::UnityEngine::UIElements::TransformData> Copy() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::RefCounted
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7413))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7413), inst: 3251 })
// CS Name: UnityEngine.UIElements.StyleDataRef`1::RefCounted
class CORDL_TYPE ____UnityEngine__UIElements__StyleDataRef_1__RefCounted<::UnityEngine::UIElements::TransitionData> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~____UnityEngine__UIElements__StyleDataRef_1__RefCounted() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__UIElements__StyleDataRef_1__RefCounted", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__UIElements__StyleDataRef_1__RefCounted(____UnityEngine__UIElements__StyleDataRef_1__RefCounted const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__UIElements__StyleDataRef_1__RefCounted", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__UIElements__StyleDataRef_1__RefCounted(____UnityEngine__UIElements__StyleDataRef_1__RefCounted&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__UIElements__StyleDataRef_1__RefCounted(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____UnityEngine__UIElements__StyleDataRef_1__RefCounted& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__UIElements__StyleDataRef_1__RefCounted& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__UIElements__StyleDataRef_1__RefCounted& operator=(____UnityEngine__UIElements__StyleDataRef_1__RefCounted&& o) noexcept = default;
  constexpr ____UnityEngine__UIElements__StyleDataRef_1__RefCounted& operator=(____UnityEngine__UIElements__StyleDataRef_1__RefCounted const& o) noexcept = default;
                


// Fields

static uint32_t __declspec(property(get=__get_m_NextId, put=__set_m_NextId))  m_NextId;

static void __set_m_NextId(uint32_t value) ;

static uint32_t __get_m_NextId() ;

 int32_t __declspec(property(get=__get_m_RefCount, put=__set_m_RefCount))  m_RefCount;

constexpr void __set_m_RefCount(int32_t value) ;

constexpr int32_t __get_m_RefCount() const;

 uint32_t __declspec(property(get=__get_m_Id, put=__set_m_Id))  m_Id;

constexpr void __set_m_Id(uint32_t value) ;

constexpr uint32_t __get_m_Id() const;

 ::UnityEngine::UIElements::TransitionData __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(::UnityEngine::UIElements::TransitionData value) ;

constexpr ::UnityEngine::UIElements::TransitionData __get_value() const;


// Properties

 int32_t __declspec(property(get=get_refCount))  refCount;


// Methods

/// @brief Method get_refCount addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_refCount() ;

// Ctor Parameters []
explicit ____UnityEngine__UIElements__StyleDataRef_1__RefCounted() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method Acquire addr 0x0 size 0xffffffffffffffff virtual false final false
 void Acquire() ;

/// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual false final false
 void Release() ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::UIElements::____UnityEngine__UIElements__StyleDataRef_1__RefCounted<::UnityEngine::UIElements::TransitionData> Copy() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::RefCounted
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7413))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7413), inst: 3262 })
// CS Name: UnityEngine.UIElements.StyleDataRef`1::RefCounted
class CORDL_TYPE ____UnityEngine__UIElements__StyleDataRef_1__RefCounted<::UnityEngine::UIElements::VisualData> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~____UnityEngine__UIElements__StyleDataRef_1__RefCounted() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__UIElements__StyleDataRef_1__RefCounted", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__UIElements__StyleDataRef_1__RefCounted(____UnityEngine__UIElements__StyleDataRef_1__RefCounted const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__UIElements__StyleDataRef_1__RefCounted", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__UIElements__StyleDataRef_1__RefCounted(____UnityEngine__UIElements__StyleDataRef_1__RefCounted&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__UIElements__StyleDataRef_1__RefCounted(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____UnityEngine__UIElements__StyleDataRef_1__RefCounted& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__UIElements__StyleDataRef_1__RefCounted& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__UIElements__StyleDataRef_1__RefCounted& operator=(____UnityEngine__UIElements__StyleDataRef_1__RefCounted&& o) noexcept = default;
  constexpr ____UnityEngine__UIElements__StyleDataRef_1__RefCounted& operator=(____UnityEngine__UIElements__StyleDataRef_1__RefCounted const& o) noexcept = default;
                


// Fields

static uint32_t __declspec(property(get=__get_m_NextId, put=__set_m_NextId))  m_NextId;

static void __set_m_NextId(uint32_t value) ;

static uint32_t __get_m_NextId() ;

 int32_t __declspec(property(get=__get_m_RefCount, put=__set_m_RefCount))  m_RefCount;

constexpr void __set_m_RefCount(int32_t value) ;

constexpr int32_t __get_m_RefCount() const;

 uint32_t __declspec(property(get=__get_m_Id, put=__set_m_Id))  m_Id;

constexpr void __set_m_Id(uint32_t value) ;

constexpr uint32_t __get_m_Id() const;

 ::UnityEngine::UIElements::VisualData __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(::UnityEngine::UIElements::VisualData value) ;

constexpr ::UnityEngine::UIElements::VisualData __get_value() const;


// Properties

 int32_t __declspec(property(get=get_refCount))  refCount;


// Methods

/// @brief Method get_refCount addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_refCount() ;

// Ctor Parameters []
explicit ____UnityEngine__UIElements__StyleDataRef_1__RefCounted() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method Acquire addr 0x0 size 0xffffffffffffffff virtual false final false
 void Acquire() ;

/// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual false final false
 void Release() ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::UIElements::____UnityEngine__UIElements__StyleDataRef_1__RefCounted<::UnityEngine::UIElements::VisualData> Copy() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::StyleDataRef`1
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7414)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7414), inst: 3188 })
// CS Name: UnityEngine.UIElements.StyleDataRef`1
struct CORDL_TYPE StyleDataRef_1<::UnityEngine::UIElements::InheritedData> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using RefCounted = ::UnityEngine::UIElements::____UnityEngine__UIElements__StyleDataRef_1__RefCounted<::UnityEngine::UIElements::InheritedData>;

/// @brief Convert operator to ::System::IEquatable_1<::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::InheritedData>>
constexpr operator  ::System::IEquatable_1<::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::InheritedData>>() const;

// Ctor Parameters [CppParam { name: "m_Ref", ty: "::UnityEngine::UIElements::____UnityEngine__UIElements__StyleDataRef_1__RefCounted<::UnityEngine::UIElements::InheritedData>", modifiers: "", def_value: None }]
constexpr StyleDataRef_1(::UnityEngine::UIElements::____UnityEngine__UIElements__StyleDataRef_1__RefCounted<::UnityEngine::UIElements::InheritedData> m_Ref) noexcept;


                    constexpr StyleDataRef_1(StyleDataRef_1 const&) = default;
                    constexpr StyleDataRef_1(StyleDataRef_1&&) = default;
                    constexpr StyleDataRef_1& operator=(StyleDataRef_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr StyleDataRef_1& operator=(StyleDataRef_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit StyleDataRef_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::UnityEngine::UIElements::____UnityEngine__UIElements__StyleDataRef_1__RefCounted<::UnityEngine::UIElements::InheritedData> __declspec(property(get=__get_m_Ref, put=__set_m_Ref))  m_Ref;

constexpr void __set_m_Ref(::UnityEngine::UIElements::____UnityEngine__UIElements__StyleDataRef_1__RefCounted<::UnityEngine::UIElements::InheritedData> value) ;

constexpr ::UnityEngine::UIElements::____UnityEngine__UIElements__StyleDataRef_1__RefCounted<::UnityEngine::UIElements::InheritedData> __get_m_Ref() const;


// Methods

/// @brief Method Acquire addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::InheritedData> Acquire() ;

/// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual false final false
 void Release() ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
 void CopyFrom(::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::InheritedData> other) ;

/// @brief Method Read addr 0x0 size 0xffffffffffffffff virtual false final false
 ByRef<::UnityEngine::UIElements::InheritedData> Read() ;

/// @brief Method Write addr 0x0 size 0xffffffffffffffff virtual false final false
 ByRef<::UnityEngine::UIElements::InheritedData> Write() ;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
static ::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::InheritedData> Create() ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method op_Equality addr 0x0 size 0xffffffffffffffff virtual false final false
static bool op_Equality(::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::InheritedData> lhs, ::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::InheritedData> rhs) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Equals(::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::InheritedData> other) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::StyleDataRef`1
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7414)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7414), inst: 3200 })
// CS Name: UnityEngine.UIElements.StyleDataRef`1
struct CORDL_TYPE StyleDataRef_1<::UnityEngine::UIElements::LayoutData> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using RefCounted = ::UnityEngine::UIElements::____UnityEngine__UIElements__StyleDataRef_1__RefCounted<::UnityEngine::UIElements::LayoutData>;

/// @brief Convert operator to ::System::IEquatable_1<::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::LayoutData>>
constexpr operator  ::System::IEquatable_1<::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::LayoutData>>() const;

// Ctor Parameters [CppParam { name: "m_Ref", ty: "::UnityEngine::UIElements::____UnityEngine__UIElements__StyleDataRef_1__RefCounted<::UnityEngine::UIElements::LayoutData>", modifiers: "", def_value: None }]
constexpr StyleDataRef_1(::UnityEngine::UIElements::____UnityEngine__UIElements__StyleDataRef_1__RefCounted<::UnityEngine::UIElements::LayoutData> m_Ref) noexcept;


                    constexpr StyleDataRef_1(StyleDataRef_1 const&) = default;
                    constexpr StyleDataRef_1(StyleDataRef_1&&) = default;
                    constexpr StyleDataRef_1& operator=(StyleDataRef_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr StyleDataRef_1& operator=(StyleDataRef_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit StyleDataRef_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::UnityEngine::UIElements::____UnityEngine__UIElements__StyleDataRef_1__RefCounted<::UnityEngine::UIElements::LayoutData> __declspec(property(get=__get_m_Ref, put=__set_m_Ref))  m_Ref;

constexpr void __set_m_Ref(::UnityEngine::UIElements::____UnityEngine__UIElements__StyleDataRef_1__RefCounted<::UnityEngine::UIElements::LayoutData> value) ;

constexpr ::UnityEngine::UIElements::____UnityEngine__UIElements__StyleDataRef_1__RefCounted<::UnityEngine::UIElements::LayoutData> __get_m_Ref() const;


// Methods

/// @brief Method Acquire addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::LayoutData> Acquire() ;

/// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual false final false
 void Release() ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
 void CopyFrom(::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::LayoutData> other) ;

/// @brief Method Read addr 0x0 size 0xffffffffffffffff virtual false final false
 ByRef<::UnityEngine::UIElements::LayoutData> Read() ;

/// @brief Method Write addr 0x0 size 0xffffffffffffffff virtual false final false
 ByRef<::UnityEngine::UIElements::LayoutData> Write() ;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
static ::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::LayoutData> Create() ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method op_Equality addr 0x0 size 0xffffffffffffffff virtual false final false
static bool op_Equality(::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::LayoutData> lhs, ::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::LayoutData> rhs) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Equals(::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::LayoutData> other) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::StyleDataRef`1
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(7414))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7414), inst: 3224 })
// CS Name: UnityEngine.UIElements.StyleDataRef`1
struct CORDL_TYPE StyleDataRef_1<::UnityEngine::UIElements::RareData> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using RefCounted = ::UnityEngine::UIElements::____UnityEngine__UIElements__StyleDataRef_1__RefCounted<::UnityEngine::UIElements::RareData>;

/// @brief Convert operator to ::System::IEquatable_1<::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::RareData>>
constexpr operator  ::System::IEquatable_1<::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::RareData>>() const;

// Ctor Parameters [CppParam { name: "m_Ref", ty: "::UnityEngine::UIElements::____UnityEngine__UIElements__StyleDataRef_1__RefCounted<::UnityEngine::UIElements::RareData>", modifiers: "", def_value: None }]
constexpr StyleDataRef_1(::UnityEngine::UIElements::____UnityEngine__UIElements__StyleDataRef_1__RefCounted<::UnityEngine::UIElements::RareData> m_Ref) noexcept;


                    constexpr StyleDataRef_1(StyleDataRef_1 const&) = default;
                    constexpr StyleDataRef_1(StyleDataRef_1&&) = default;
                    constexpr StyleDataRef_1& operator=(StyleDataRef_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr StyleDataRef_1& operator=(StyleDataRef_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit StyleDataRef_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::UnityEngine::UIElements::____UnityEngine__UIElements__StyleDataRef_1__RefCounted<::UnityEngine::UIElements::RareData> __declspec(property(get=__get_m_Ref, put=__set_m_Ref))  m_Ref;

constexpr void __set_m_Ref(::UnityEngine::UIElements::____UnityEngine__UIElements__StyleDataRef_1__RefCounted<::UnityEngine::UIElements::RareData> value) ;

constexpr ::UnityEngine::UIElements::____UnityEngine__UIElements__StyleDataRef_1__RefCounted<::UnityEngine::UIElements::RareData> __get_m_Ref() const;


// Methods

/// @brief Method Acquire addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::RareData> Acquire() ;

/// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual false final false
 void Release() ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
 void CopyFrom(::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::RareData> other) ;

/// @brief Method Read addr 0x0 size 0xffffffffffffffff virtual false final false
 ByRef<::UnityEngine::UIElements::RareData> Read() ;

/// @brief Method Write addr 0x0 size 0xffffffffffffffff virtual false final false
 ByRef<::UnityEngine::UIElements::RareData> Write() ;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
static ::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::RareData> Create() ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method op_Equality addr 0x0 size 0xffffffffffffffff virtual false final false
static bool op_Equality(::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::RareData> lhs, ::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::RareData> rhs) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Equals(::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::RareData> other) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::StyleDataRef`1
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(7414))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7414), inst: 3250 })
// CS Name: UnityEngine.UIElements.StyleDataRef`1
struct CORDL_TYPE StyleDataRef_1<::UnityEngine::UIElements::TransformData> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using RefCounted = ::UnityEngine::UIElements::____UnityEngine__UIElements__StyleDataRef_1__RefCounted<::UnityEngine::UIElements::TransformData>;

/// @brief Convert operator to ::System::IEquatable_1<::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::TransformData>>
constexpr operator  ::System::IEquatable_1<::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::TransformData>>() const;

// Ctor Parameters [CppParam { name: "m_Ref", ty: "::UnityEngine::UIElements::____UnityEngine__UIElements__StyleDataRef_1__RefCounted<::UnityEngine::UIElements::TransformData>", modifiers: "", def_value: None }]
constexpr StyleDataRef_1(::UnityEngine::UIElements::____UnityEngine__UIElements__StyleDataRef_1__RefCounted<::UnityEngine::UIElements::TransformData> m_Ref) noexcept;


                    constexpr StyleDataRef_1(StyleDataRef_1 const&) = default;
                    constexpr StyleDataRef_1(StyleDataRef_1&&) = default;
                    constexpr StyleDataRef_1& operator=(StyleDataRef_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr StyleDataRef_1& operator=(StyleDataRef_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit StyleDataRef_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::UnityEngine::UIElements::____UnityEngine__UIElements__StyleDataRef_1__RefCounted<::UnityEngine::UIElements::TransformData> __declspec(property(get=__get_m_Ref, put=__set_m_Ref))  m_Ref;

constexpr void __set_m_Ref(::UnityEngine::UIElements::____UnityEngine__UIElements__StyleDataRef_1__RefCounted<::UnityEngine::UIElements::TransformData> value) ;

constexpr ::UnityEngine::UIElements::____UnityEngine__UIElements__StyleDataRef_1__RefCounted<::UnityEngine::UIElements::TransformData> __get_m_Ref() const;


// Methods

/// @brief Method Acquire addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::TransformData> Acquire() ;

/// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual false final false
 void Release() ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
 void CopyFrom(::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::TransformData> other) ;

/// @brief Method Read addr 0x0 size 0xffffffffffffffff virtual false final false
 ByRef<::UnityEngine::UIElements::TransformData> Read() ;

/// @brief Method Write addr 0x0 size 0xffffffffffffffff virtual false final false
 ByRef<::UnityEngine::UIElements::TransformData> Write() ;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
static ::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::TransformData> Create() ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method op_Equality addr 0x0 size 0xffffffffffffffff virtual false final false
static bool op_Equality(::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::TransformData> lhs, ::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::TransformData> rhs) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Equals(::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::TransformData> other) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::StyleDataRef`1
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7414)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7414), inst: 3251 })
// CS Name: UnityEngine.UIElements.StyleDataRef`1
struct CORDL_TYPE StyleDataRef_1<::UnityEngine::UIElements::TransitionData> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using RefCounted = ::UnityEngine::UIElements::____UnityEngine__UIElements__StyleDataRef_1__RefCounted<::UnityEngine::UIElements::TransitionData>;

/// @brief Convert operator to ::System::IEquatable_1<::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::TransitionData>>
constexpr operator  ::System::IEquatable_1<::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::TransitionData>>() const;

// Ctor Parameters [CppParam { name: "m_Ref", ty: "::UnityEngine::UIElements::____UnityEngine__UIElements__StyleDataRef_1__RefCounted<::UnityEngine::UIElements::TransitionData>", modifiers: "", def_value: None }]
constexpr StyleDataRef_1(::UnityEngine::UIElements::____UnityEngine__UIElements__StyleDataRef_1__RefCounted<::UnityEngine::UIElements::TransitionData> m_Ref) noexcept;


                    constexpr StyleDataRef_1(StyleDataRef_1 const&) = default;
                    constexpr StyleDataRef_1(StyleDataRef_1&&) = default;
                    constexpr StyleDataRef_1& operator=(StyleDataRef_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr StyleDataRef_1& operator=(StyleDataRef_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit StyleDataRef_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::UnityEngine::UIElements::____UnityEngine__UIElements__StyleDataRef_1__RefCounted<::UnityEngine::UIElements::TransitionData> __declspec(property(get=__get_m_Ref, put=__set_m_Ref))  m_Ref;

constexpr void __set_m_Ref(::UnityEngine::UIElements::____UnityEngine__UIElements__StyleDataRef_1__RefCounted<::UnityEngine::UIElements::TransitionData> value) ;

constexpr ::UnityEngine::UIElements::____UnityEngine__UIElements__StyleDataRef_1__RefCounted<::UnityEngine::UIElements::TransitionData> __get_m_Ref() const;


// Methods

/// @brief Method Acquire addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::TransitionData> Acquire() ;

/// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual false final false
 void Release() ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
 void CopyFrom(::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::TransitionData> other) ;

/// @brief Method Read addr 0x0 size 0xffffffffffffffff virtual false final false
 ByRef<::UnityEngine::UIElements::TransitionData> Read() ;

/// @brief Method Write addr 0x0 size 0xffffffffffffffff virtual false final false
 ByRef<::UnityEngine::UIElements::TransitionData> Write() ;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
static ::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::TransitionData> Create() ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method op_Equality addr 0x0 size 0xffffffffffffffff virtual false final false
static bool op_Equality(::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::TransitionData> lhs, ::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::TransitionData> rhs) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Equals(::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::TransitionData> other) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::StyleDataRef`1
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(7414))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7414), inst: 3262 })
// CS Name: UnityEngine.UIElements.StyleDataRef`1
struct CORDL_TYPE StyleDataRef_1<::UnityEngine::UIElements::VisualData> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using RefCounted = ::UnityEngine::UIElements::____UnityEngine__UIElements__StyleDataRef_1__RefCounted<::UnityEngine::UIElements::VisualData>;

/// @brief Convert operator to ::System::IEquatable_1<::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::VisualData>>
constexpr operator  ::System::IEquatable_1<::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::VisualData>>() const;

// Ctor Parameters [CppParam { name: "m_Ref", ty: "::UnityEngine::UIElements::____UnityEngine__UIElements__StyleDataRef_1__RefCounted<::UnityEngine::UIElements::VisualData>", modifiers: "", def_value: None }]
constexpr StyleDataRef_1(::UnityEngine::UIElements::____UnityEngine__UIElements__StyleDataRef_1__RefCounted<::UnityEngine::UIElements::VisualData> m_Ref) noexcept;


                    constexpr StyleDataRef_1(StyleDataRef_1 const&) = default;
                    constexpr StyleDataRef_1(StyleDataRef_1&&) = default;
                    constexpr StyleDataRef_1& operator=(StyleDataRef_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr StyleDataRef_1& operator=(StyleDataRef_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit StyleDataRef_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::UnityEngine::UIElements::____UnityEngine__UIElements__StyleDataRef_1__RefCounted<::UnityEngine::UIElements::VisualData> __declspec(property(get=__get_m_Ref, put=__set_m_Ref))  m_Ref;

constexpr void __set_m_Ref(::UnityEngine::UIElements::____UnityEngine__UIElements__StyleDataRef_1__RefCounted<::UnityEngine::UIElements::VisualData> value) ;

constexpr ::UnityEngine::UIElements::____UnityEngine__UIElements__StyleDataRef_1__RefCounted<::UnityEngine::UIElements::VisualData> __get_m_Ref() const;


// Methods

/// @brief Method Acquire addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::VisualData> Acquire() ;

/// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual false final false
 void Release() ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
 void CopyFrom(::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::VisualData> other) ;

/// @brief Method Read addr 0x0 size 0xffffffffffffffff virtual false final false
 ByRef<::UnityEngine::UIElements::VisualData> Read() ;

/// @brief Method Write addr 0x0 size 0xffffffffffffffff virtual false final false
 ByRef<::UnityEngine::UIElements::VisualData> Write() ;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
static ::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::VisualData> Create() ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method op_Equality addr 0x0 size 0xffffffffffffffff virtual false final false
static bool op_Equality(::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::VisualData> lhs, ::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::VisualData> rhs) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Equals(::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::VisualData> other) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::____UnityEngine__UIElements__StyleDataRef_1__RefCounted, "UnityEngine.UIElements", "StyleDataRef`1/RefCounted");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::UIElements::StyleDataRef_1, "UnityEngine.UIElements", "StyleDataRef`1");
