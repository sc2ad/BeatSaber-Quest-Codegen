#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct KeyValuePair_2;
}
namespace UnityEngine::ResourceManagement::Diagnostics {
struct DiagnosticEvent;
}
namespace UnityEngine::TextCore::LowLevel {
struct GlyphPairAdjustmentRecord;
}
namespace Zenject {
struct ____Zenject__DisposableManager__DisposableInfo;
}
namespace Zenject {
struct ____Zenject__PoolableManager__PoolableInfo;
}
// Forward declare root types
namespace System::Linq {
template<typename TElement>
class EnumerableSorter_1;
}
namespace System::Linq {
template<::cordl_internals::il2cpp_reference_type TElement>
class EnumerableSorter_1<TElement>;
}
namespace System::Linq {
template<>
class EnumerableSorter_1<::System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>>;
}
namespace System::Linq {
template<>
class EnumerableSorter_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>;
}
namespace System::Linq {
template<>
class EnumerableSorter_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>;
}
namespace System::Linq {
template<>
class EnumerableSorter_1<::Zenject::____Zenject__DisposableManager__DisposableInfo>;
}
namespace System::Linq {
template<>
class EnumerableSorter_1<::Zenject::____Zenject__PoolableManager__PoolableInfo>;
}
namespace System::Linq {
template<>
class EnumerableSorter_1<float_t>;
}
namespace System::Linq {
template<>
class EnumerableSorter_1<int32_t>;
}
// Type: System.Linq::EnumerableSorter`1
// Type: System.Linq::EnumerableSorter`1
namespace System::Linq {
// cpp template
template<::cordl_internals::il2cpp_reference_type TElement>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14574))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14574), inst: 2 })
// CS Name: System.Linq.EnumerableSorter`1
class CORDL_TYPE EnumerableSorter_1<TElement> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~EnumerableSorter_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "EnumerableSorter_1", modifiers: " const&", def_value: None }]
constexpr EnumerableSorter_1(EnumerableSorter_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EnumerableSorter_1", modifiers: "&&", def_value: None }]
constexpr EnumerableSorter_1(EnumerableSorter_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EnumerableSorter_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr EnumerableSorter_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EnumerableSorter_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EnumerableSorter_1& operator=(EnumerableSorter_1&& o) noexcept = default;
  constexpr EnumerableSorter_1& operator=(EnumerableSorter_1 const& o) noexcept = default;
                


// Methods

/// @brief Method ComputeKeys addr 0x0 size 0xffffffffffffffff virtual true final false
 void ComputeKeys(::ArrayW<TElement> elements, int32_t count) ;

/// @brief Method CompareKeys addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t CompareKeys(int32_t index1, int32_t index2) ;

/// @brief Method Sort addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<int32_t> Sort(::ArrayW<TElement> elements, int32_t count) ;

/// @brief Method QuickSort addr 0x0 size 0xffffffffffffffff virtual false final false
 void QuickSort(::ArrayW<int32_t> map, int32_t left, int32_t right) ;

// Ctor Parameters []
explicit EnumerableSorter_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: System.Linq::EnumerableSorter`1
namespace System::Linq {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14574))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14574), inst: 92 })
// CS Name: System.Linq.EnumerableSorter`1
class CORDL_TYPE EnumerableSorter_1<int32_t> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~EnumerableSorter_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "EnumerableSorter_1", modifiers: " const&", def_value: None }]
constexpr EnumerableSorter_1(EnumerableSorter_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EnumerableSorter_1", modifiers: "&&", def_value: None }]
constexpr EnumerableSorter_1(EnumerableSorter_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EnumerableSorter_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr EnumerableSorter_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EnumerableSorter_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EnumerableSorter_1& operator=(EnumerableSorter_1&& o) noexcept = default;
  constexpr EnumerableSorter_1& operator=(EnumerableSorter_1 const& o) noexcept = default;
                


// Methods

/// @brief Method ComputeKeys addr 0x0 size 0xffffffffffffffff virtual true final false
 void ComputeKeys(::ArrayW<int32_t> elements, int32_t count) ;

/// @brief Method CompareKeys addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t CompareKeys(int32_t index1, int32_t index2) ;

/// @brief Method Sort addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<int32_t> Sort(::ArrayW<int32_t> elements, int32_t count) ;

/// @brief Method QuickSort addr 0x0 size 0xffffffffffffffff virtual false final false
 void QuickSort(::ArrayW<int32_t> map, int32_t left, int32_t right) ;

// Ctor Parameters []
explicit EnumerableSorter_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: System.Linq::EnumerableSorter`1
namespace System::Linq {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14574))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14574), inst: 289 })
// CS Name: System.Linq.EnumerableSorter`1
class CORDL_TYPE EnumerableSorter_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~EnumerableSorter_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "EnumerableSorter_1", modifiers: " const&", def_value: None }]
constexpr EnumerableSorter_1(EnumerableSorter_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EnumerableSorter_1", modifiers: "&&", def_value: None }]
constexpr EnumerableSorter_1(EnumerableSorter_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EnumerableSorter_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr EnumerableSorter_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EnumerableSorter_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EnumerableSorter_1& operator=(EnumerableSorter_1&& o) noexcept = default;
  constexpr EnumerableSorter_1& operator=(EnumerableSorter_1 const& o) noexcept = default;
                


// Methods

/// @brief Method ComputeKeys addr 0x0 size 0xffffffffffffffff virtual true final false
 void ComputeKeys(::ArrayW<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent> elements, int32_t count) ;

/// @brief Method CompareKeys addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t CompareKeys(int32_t index1, int32_t index2) ;

/// @brief Method Sort addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<int32_t> Sort(::ArrayW<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent> elements, int32_t count) ;

/// @brief Method QuickSort addr 0x0 size 0xffffffffffffffff virtual false final false
 void QuickSort(::ArrayW<int32_t> map, int32_t left, int32_t right) ;

// Ctor Parameters []
explicit EnumerableSorter_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: System.Linq::EnumerableSorter`1
namespace System::Linq {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14574))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14574), inst: 374 })
// CS Name: System.Linq.EnumerableSorter`1
class CORDL_TYPE EnumerableSorter_1<float_t> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~EnumerableSorter_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "EnumerableSorter_1", modifiers: " const&", def_value: None }]
constexpr EnumerableSorter_1(EnumerableSorter_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EnumerableSorter_1", modifiers: "&&", def_value: None }]
constexpr EnumerableSorter_1(EnumerableSorter_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EnumerableSorter_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr EnumerableSorter_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EnumerableSorter_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EnumerableSorter_1& operator=(EnumerableSorter_1&& o) noexcept = default;
  constexpr EnumerableSorter_1& operator=(EnumerableSorter_1 const& o) noexcept = default;
                


// Methods

/// @brief Method ComputeKeys addr 0x0 size 0xffffffffffffffff virtual true final false
 void ComputeKeys(::ArrayW<float_t> elements, int32_t count) ;

/// @brief Method CompareKeys addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t CompareKeys(int32_t index1, int32_t index2) ;

/// @brief Method Sort addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<int32_t> Sort(::ArrayW<float_t> elements, int32_t count) ;

/// @brief Method QuickSort addr 0x0 size 0xffffffffffffffff virtual false final false
 void QuickSort(::ArrayW<int32_t> map, int32_t left, int32_t right) ;

// Ctor Parameters []
explicit EnumerableSorter_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: System.Linq::EnumerableSorter`1
namespace System::Linq {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14574))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14574), inst: 3180 })
// CS Name: System.Linq.EnumerableSorter`1
class CORDL_TYPE EnumerableSorter_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~EnumerableSorter_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "EnumerableSorter_1", modifiers: " const&", def_value: None }]
constexpr EnumerableSorter_1(EnumerableSorter_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EnumerableSorter_1", modifiers: "&&", def_value: None }]
constexpr EnumerableSorter_1(EnumerableSorter_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EnumerableSorter_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr EnumerableSorter_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EnumerableSorter_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EnumerableSorter_1& operator=(EnumerableSorter_1&& o) noexcept = default;
  constexpr EnumerableSorter_1& operator=(EnumerableSorter_1 const& o) noexcept = default;
                


// Methods

/// @brief Method ComputeKeys addr 0x0 size 0xffffffffffffffff virtual true final false
 void ComputeKeys(::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord> elements, int32_t count) ;

/// @brief Method CompareKeys addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t CompareKeys(int32_t index1, int32_t index2) ;

/// @brief Method Sort addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<int32_t> Sort(::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord> elements, int32_t count) ;

/// @brief Method QuickSort addr 0x0 size 0xffffffffffffffff virtual false final false
 void QuickSort(::ArrayW<int32_t> map, int32_t left, int32_t right) ;

// Ctor Parameters []
explicit EnumerableSorter_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: System.Linq::EnumerableSorter`1
namespace System::Linq {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14574))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14574), inst: 4209 })
// CS Name: System.Linq.EnumerableSorter`1
class CORDL_TYPE EnumerableSorter_1<::Zenject::____Zenject__DisposableManager__DisposableInfo> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~EnumerableSorter_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "EnumerableSorter_1", modifiers: " const&", def_value: None }]
constexpr EnumerableSorter_1(EnumerableSorter_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EnumerableSorter_1", modifiers: "&&", def_value: None }]
constexpr EnumerableSorter_1(EnumerableSorter_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EnumerableSorter_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr EnumerableSorter_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EnumerableSorter_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EnumerableSorter_1& operator=(EnumerableSorter_1&& o) noexcept = default;
  constexpr EnumerableSorter_1& operator=(EnumerableSorter_1 const& o) noexcept = default;
                


// Methods

/// @brief Method ComputeKeys addr 0x0 size 0xffffffffffffffff virtual true final false
 void ComputeKeys(::ArrayW<::Zenject::____Zenject__DisposableManager__DisposableInfo> elements, int32_t count) ;

/// @brief Method CompareKeys addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t CompareKeys(int32_t index1, int32_t index2) ;

/// @brief Method Sort addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<int32_t> Sort(::ArrayW<::Zenject::____Zenject__DisposableManager__DisposableInfo> elements, int32_t count) ;

/// @brief Method QuickSort addr 0x0 size 0xffffffffffffffff virtual false final false
 void QuickSort(::ArrayW<int32_t> map, int32_t left, int32_t right) ;

// Ctor Parameters []
explicit EnumerableSorter_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: System.Linq::EnumerableSorter`1
namespace System::Linq {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14574))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14574), inst: 5964 })
// CS Name: System.Linq.EnumerableSorter`1
class CORDL_TYPE EnumerableSorter_1<::Zenject::____Zenject__PoolableManager__PoolableInfo> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~EnumerableSorter_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "EnumerableSorter_1", modifiers: " const&", def_value: None }]
constexpr EnumerableSorter_1(EnumerableSorter_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EnumerableSorter_1", modifiers: "&&", def_value: None }]
constexpr EnumerableSorter_1(EnumerableSorter_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EnumerableSorter_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr EnumerableSorter_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EnumerableSorter_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EnumerableSorter_1& operator=(EnumerableSorter_1&& o) noexcept = default;
  constexpr EnumerableSorter_1& operator=(EnumerableSorter_1 const& o) noexcept = default;
                


// Methods

/// @brief Method ComputeKeys addr 0x0 size 0xffffffffffffffff virtual true final false
 void ComputeKeys(::ArrayW<::Zenject::____Zenject__PoolableManager__PoolableInfo> elements, int32_t count) ;

/// @brief Method CompareKeys addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t CompareKeys(int32_t index1, int32_t index2) ;

/// @brief Method Sort addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<int32_t> Sort(::ArrayW<::Zenject::____Zenject__PoolableManager__PoolableInfo> elements, int32_t count) ;

/// @brief Method QuickSort addr 0x0 size 0xffffffffffffffff virtual false final false
 void QuickSort(::ArrayW<int32_t> map, int32_t left, int32_t right) ;

// Ctor Parameters []
explicit EnumerableSorter_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: System.Linq::EnumerableSorter`1
namespace System::Linq {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14574))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14574), inst: 6236 })
// CS Name: System.Linq.EnumerableSorter`1
class CORDL_TYPE EnumerableSorter_1<::System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~EnumerableSorter_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "EnumerableSorter_1", modifiers: " const&", def_value: None }]
constexpr EnumerableSorter_1(EnumerableSorter_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EnumerableSorter_1", modifiers: "&&", def_value: None }]
constexpr EnumerableSorter_1(EnumerableSorter_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EnumerableSorter_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr EnumerableSorter_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EnumerableSorter_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EnumerableSorter_1& operator=(EnumerableSorter_1&& o) noexcept = default;
  constexpr EnumerableSorter_1& operator=(EnumerableSorter_1 const& o) noexcept = default;
                


// Methods

/// @brief Method ComputeKeys addr 0x0 size 0xffffffffffffffff virtual true final false
 void ComputeKeys(::ArrayW<::System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>> elements, int32_t count) ;

/// @brief Method CompareKeys addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t CompareKeys(int32_t index1, int32_t index2) ;

/// @brief Method Sort addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<int32_t> Sort(::ArrayW<::System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>> elements, int32_t count) ;

/// @brief Method QuickSort addr 0x0 size 0xffffffffffffffff virtual false final false
 void QuickSort(::ArrayW<int32_t> map, int32_t left, int32_t right) ;

// Ctor Parameters []
explicit EnumerableSorter_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Linq::EnumerableSorter_1, "System.Linq", "EnumerableSorter`1");
