#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace System {
class IDisposable;
}
namespace ModestTree::Util {
template<typename T1,typename T2>
class ValuePair_2;
}
namespace System {
class Type;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Zenject {
class ILateDisposable;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace Zenject {
class DisposableManager;
}
namespace Zenject {
class ____Zenject__DisposableManager__LateDisposableInfo;
}
namespace Zenject {
class ____Zenject__DisposableManager____c;
}
namespace Zenject {
class ____Zenject__DisposableManager____c__DisplayClass4_0;
}
namespace Zenject {
class ____Zenject__DisposableManager____c__DisplayClass4_1;
}
namespace Zenject {
class ____Zenject__DisposableManager____c__DisplayClass9_0;
}
namespace Zenject {
struct ____Zenject__DisposableManager__DisposableInfo;
}
// Type: ::DisposableInfo
namespace Zenject {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11247))
// CS Name: Zenject.DisposableManager::DisposableInfo
struct CORDL_TYPE ____Zenject__DisposableManager__DisposableInfo : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "Disposable", ty: "::System::IDisposable", modifiers: "", def_value: None }, CppParam { name: "Priority", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____Zenject__DisposableManager__DisposableInfo(::System::IDisposable Disposable, int32_t Priority) noexcept;


                    constexpr ____Zenject__DisposableManager__DisposableInfo(____Zenject__DisposableManager__DisposableInfo const&) = default;
                    constexpr ____Zenject__DisposableManager__DisposableInfo(____Zenject__DisposableManager__DisposableInfo&&) = default;
                    constexpr ____Zenject__DisposableManager__DisposableInfo& operator=(____Zenject__DisposableManager__DisposableInfo const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____Zenject__DisposableManager__DisposableInfo& operator=(____Zenject__DisposableManager__DisposableInfo&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____Zenject__DisposableManager__DisposableInfo(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::System::IDisposable __declspec(property(get=__get_Disposable, put=__set_Disposable))  Disposable;

constexpr void __set_Disposable(::System::IDisposable value) ;

constexpr ::System::IDisposable __get_Disposable() const;

 int32_t __declspec(property(get=__get_Priority, put=__set_Priority))  Priority;

constexpr void __set_Priority(int32_t value) ;

constexpr int32_t __get_Priority() const;


// Methods

/// @brief Method .ctor addr 0x2d96324 size 0xc virtual false final false
 void _ctor(::System::IDisposable disposable, int32_t priority) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::LateDisposableInfo
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11248))
// CS Name: Zenject.DisposableManager::LateDisposableInfo
class CORDL_TYPE ____Zenject__DisposableManager__LateDisposableInfo : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____Zenject__DisposableManager__LateDisposableInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "____Zenject__DisposableManager__LateDisposableInfo", modifiers: " const&", def_value: None }]
constexpr ____Zenject__DisposableManager__LateDisposableInfo(____Zenject__DisposableManager__LateDisposableInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____Zenject__DisposableManager__LateDisposableInfo", modifiers: "&&", def_value: None }]
constexpr ____Zenject__DisposableManager__LateDisposableInfo(____Zenject__DisposableManager__LateDisposableInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____Zenject__DisposableManager__LateDisposableInfo(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____Zenject__DisposableManager__LateDisposableInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____Zenject__DisposableManager__LateDisposableInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____Zenject__DisposableManager__LateDisposableInfo& operator=(____Zenject__DisposableManager__LateDisposableInfo&& o) noexcept = default;
  constexpr ____Zenject__DisposableManager__LateDisposableInfo& operator=(____Zenject__DisposableManager__LateDisposableInfo const& o) noexcept = default;
                


// Fields

 ::Zenject::ILateDisposable __declspec(property(get=__get_LateDisposable, put=__set_LateDisposable))  LateDisposable;

constexpr void __set_LateDisposable(::Zenject::ILateDisposable value) ;

constexpr ::Zenject::ILateDisposable __get_LateDisposable() const;

 int32_t __declspec(property(get=__get_Priority, put=__set_Priority))  Priority;

constexpr void __set_Priority(int32_t value) ;

constexpr int32_t __get_Priority() const;


// Methods

// Ctor Parameters [CppParam { name: "lateDisposable", ty: "::Zenject::ILateDisposable", modifiers: "", def_value: None }, CppParam { name: "priority", ty: "int32_t", modifiers: "", def_value: None }]
explicit ____Zenject__DisposableManager__LateDisposableInfo(::Zenject::ILateDisposable lateDisposable, int32_t priority) ;

/// @brief Method .ctor addr 0x2d96338 size 0x30 virtual false final false
 void _ctor(::Zenject::ILateDisposable lateDisposable, int32_t priority) ;

/// @brief Method __zenCreate addr 0x2d974d4 size 0x110 virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2d975e4 size 0x304 virtual false final false
static ::Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<>c__DisplayClass4_0
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11249))
// CS Name: Zenject.DisposableManager::<>c__DisplayClass4_0
class CORDL_TYPE ____Zenject__DisposableManager____c__DisplayClass4_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~____Zenject__DisposableManager____c__DisplayClass4_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "____Zenject__DisposableManager____c__DisplayClass4_0", modifiers: " const&", def_value: None }]
constexpr ____Zenject__DisposableManager____c__DisplayClass4_0(____Zenject__DisposableManager____c__DisplayClass4_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____Zenject__DisposableManager____c__DisplayClass4_0", modifiers: "&&", def_value: None }]
constexpr ____Zenject__DisposableManager____c__DisplayClass4_0(____Zenject__DisposableManager____c__DisplayClass4_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____Zenject__DisposableManager____c__DisplayClass4_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____Zenject__DisposableManager____c__DisplayClass4_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____Zenject__DisposableManager____c__DisplayClass4_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____Zenject__DisposableManager____c__DisplayClass4_0& operator=(____Zenject__DisposableManager____c__DisplayClass4_0&& o) noexcept = default;
  constexpr ____Zenject__DisposableManager____c__DisplayClass4_0& operator=(____Zenject__DisposableManager____c__DisplayClass4_0 const& o) noexcept = default;
                


// Fields

 ::System::IDisposable __declspec(property(get=__get_disposable, put=__set_disposable))  disposable;

constexpr void __set_disposable(::System::IDisposable value) ;

constexpr ::System::IDisposable __get_disposable() const;


// Methods

// Ctor Parameters []
explicit ____Zenject__DisposableManager____c__DisplayClass4_0() ;

/// @brief Method .ctor addr 0x2d9631c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <.ctor>b__0 addr 0x2d978e8 size 0x80 virtual false final false
 bool __ctor_b__0(::ModestTree::Util::ValuePair_2<::System::Type,int32_t> x) ;

/// @brief Method __zenCreate addr 0x2d97968 size 0x5c virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2d979c4 size 0x1c0 virtual false final false
static ::Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<>c__DisplayClass4_1
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11250))
// CS Name: Zenject.DisposableManager::<>c__DisplayClass4_1
class CORDL_TYPE ____Zenject__DisposableManager____c__DisplayClass4_1 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~____Zenject__DisposableManager____c__DisplayClass4_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "____Zenject__DisposableManager____c__DisplayClass4_1", modifiers: " const&", def_value: None }]
constexpr ____Zenject__DisposableManager____c__DisplayClass4_1(____Zenject__DisposableManager____c__DisplayClass4_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____Zenject__DisposableManager____c__DisplayClass4_1", modifiers: "&&", def_value: None }]
constexpr ____Zenject__DisposableManager____c__DisplayClass4_1(____Zenject__DisposableManager____c__DisplayClass4_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____Zenject__DisposableManager____c__DisplayClass4_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____Zenject__DisposableManager____c__DisplayClass4_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____Zenject__DisposableManager____c__DisplayClass4_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____Zenject__DisposableManager____c__DisplayClass4_1& operator=(____Zenject__DisposableManager____c__DisplayClass4_1&& o) noexcept = default;
  constexpr ____Zenject__DisposableManager____c__DisplayClass4_1& operator=(____Zenject__DisposableManager____c__DisplayClass4_1 const& o) noexcept = default;
                


// Fields

 ::Zenject::ILateDisposable __declspec(property(get=__get_lateDisposable, put=__set_lateDisposable))  lateDisposable;

constexpr void __set_lateDisposable(::Zenject::ILateDisposable value) ;

constexpr ::Zenject::ILateDisposable __get_lateDisposable() const;


// Methods

// Ctor Parameters []
explicit ____Zenject__DisposableManager____c__DisplayClass4_1() ;

/// @brief Method .ctor addr 0x2d96330 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <.ctor>b__2 addr 0x2d97b84 size 0x80 virtual false final false
 bool __ctor_b__2(::ModestTree::Util::ValuePair_2<::System::Type,int32_t> x) ;

/// @brief Method __zenCreate addr 0x2d97c04 size 0x5c virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2d97c60 size 0x1c0 virtual false final false
static ::Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<>c
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11251))
// CS Name: Zenject.DisposableManager::<>c
class CORDL_TYPE ____Zenject__DisposableManager____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~____Zenject__DisposableManager____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "____Zenject__DisposableManager____c", modifiers: " const&", def_value: None }]
constexpr ____Zenject__DisposableManager____c(____Zenject__DisposableManager____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____Zenject__DisposableManager____c", modifiers: "&&", def_value: None }]
constexpr ____Zenject__DisposableManager____c(____Zenject__DisposableManager____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____Zenject__DisposableManager____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____Zenject__DisposableManager____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____Zenject__DisposableManager____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____Zenject__DisposableManager____c& operator=(____Zenject__DisposableManager____c&& o) noexcept = default;
  constexpr ____Zenject__DisposableManager____c& operator=(____Zenject__DisposableManager____c const& o) noexcept = default;
                


// Fields

static ::Zenject::____Zenject__DisposableManager____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(::Zenject::____Zenject__DisposableManager____c value) ;

static ::Zenject::____Zenject__DisposableManager____c __get___9() ;

static ::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type,int32_t>,::System::Nullable_1<int32_t>> __declspec(property(get=__get___9__4_1, put=__set___9__4_1))  __9__4_1;

static void __set___9__4_1(::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type,int32_t>,::System::Nullable_1<int32_t>> value) ;

static ::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type,int32_t>,::System::Nullable_1<int32_t>> __get___9__4_1() ;

static ::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type,int32_t>,::System::Nullable_1<int32_t>> __declspec(property(get=__get___9__4_3, put=__set___9__4_3))  __9__4_3;

static void __set___9__4_3(::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type,int32_t>,::System::Nullable_1<int32_t>> value) ;

static ::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type,int32_t>,::System::Nullable_1<int32_t>> __get___9__4_3() ;

static ::System::Func_2<::Zenject::____Zenject__DisposableManager__LateDisposableInfo,int32_t> __declspec(property(get=__get___9__10_0, put=__set___9__10_0))  __9__10_0;

static void __set___9__10_0(::System::Func_2<::Zenject::____Zenject__DisposableManager__LateDisposableInfo,int32_t> value) ;

static ::System::Func_2<::Zenject::____Zenject__DisposableManager__LateDisposableInfo,int32_t> __get___9__10_0() ;

static ::System::Func_2<::Zenject::____Zenject__DisposableManager__DisposableInfo,int32_t> __declspec(property(get=__get___9__11_0, put=__set___9__11_0))  __9__11_0;

static void __set___9__11_0(::System::Func_2<::Zenject::____Zenject__DisposableManager__DisposableInfo,int32_t> value) ;

static ::System::Func_2<::Zenject::____Zenject__DisposableManager__DisposableInfo,int32_t> __get___9__11_0() ;


// Methods

// Ctor Parameters []
explicit ____Zenject__DisposableManager____c() ;

/// @brief Method .ctor addr 0x2d97e84 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <.ctor>b__4_1 addr 0x2d97e8c size 0x60 virtual false final false
 ::System::Nullable_1<int32_t> __ctor_b__4_1(::ModestTree::Util::ValuePair_2<::System::Type,int32_t> x) ;

/// @brief Method <.ctor>b__4_3 addr 0x2d97eec size 0x60 virtual false final false
 ::System::Nullable_1<int32_t> __ctor_b__4_3(::ModestTree::Util::ValuePair_2<::System::Type,int32_t> x) ;

/// @brief Method <LateDispose>b__10_0 addr 0x2d97f4c size 0x18 virtual false final false
 int32_t _LateDispose_b__10_0(::Zenject::____Zenject__DisposableManager__LateDisposableInfo x) ;

/// @brief Method <Dispose>b__11_0 addr 0x2d97f64 size 0x8 virtual false final false
 int32_t _Dispose_b__11_0(::Zenject::____Zenject__DisposableManager__DisposableInfo x) ;

/// @brief Method __zenCreate addr 0x2d97f6c size 0x5c virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2d97fc8 size 0x1c0 virtual false final false
static ::Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<>c__DisplayClass9_0
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11252))
// CS Name: Zenject.DisposableManager::<>c__DisplayClass9_0
class CORDL_TYPE ____Zenject__DisposableManager____c__DisplayClass9_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~____Zenject__DisposableManager____c__DisplayClass9_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "____Zenject__DisposableManager____c__DisplayClass9_0", modifiers: " const&", def_value: None }]
constexpr ____Zenject__DisposableManager____c__DisplayClass9_0(____Zenject__DisposableManager____c__DisplayClass9_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____Zenject__DisposableManager____c__DisplayClass9_0", modifiers: "&&", def_value: None }]
constexpr ____Zenject__DisposableManager____c__DisplayClass9_0(____Zenject__DisposableManager____c__DisplayClass9_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____Zenject__DisposableManager____c__DisplayClass9_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____Zenject__DisposableManager____c__DisplayClass9_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____Zenject__DisposableManager____c__DisplayClass9_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____Zenject__DisposableManager____c__DisplayClass9_0& operator=(____Zenject__DisposableManager____c__DisplayClass9_0&& o) noexcept = default;
  constexpr ____Zenject__DisposableManager____c__DisplayClass9_0& operator=(____Zenject__DisposableManager____c__DisplayClass9_0 const& o) noexcept = default;
                


// Fields

 ::System::IDisposable __declspec(property(get=__get_disposable, put=__set_disposable))  disposable;

constexpr void __set_disposable(::System::IDisposable value) ;

constexpr ::System::IDisposable __get_disposable() const;


// Methods

// Ctor Parameters []
explicit ____Zenject__DisposableManager____c__DisplayClass9_0() ;

/// @brief Method .ctor addr 0x2d96650 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <Remove>b__0 addr 0x2d98188 size 0x10 virtual false final false
 bool _Remove_b__0(::Zenject::____Zenject__DisposableManager__DisposableInfo x) ;

/// @brief Method __zenCreate addr 0x2d98198 size 0x5c virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2d981f4 size 0x1c0 virtual false final false
static ::Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::DisposableManager
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11253))
// CS Name: Zenject.DisposableManager
class CORDL_TYPE DisposableManager : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c__DisplayClass9_0 = ::Zenject::____Zenject__DisposableManager____c__DisplayClass9_0;

using __c = ::Zenject::____Zenject__DisposableManager____c;

using __c__DisplayClass4_1 = ::Zenject::____Zenject__DisposableManager____c__DisplayClass4_1;

using __c__DisplayClass4_0 = ::Zenject::____Zenject__DisposableManager____c__DisplayClass4_0;

using LateDisposableInfo = ::Zenject::____Zenject__DisposableManager__LateDisposableInfo;

using DisposableInfo = ::Zenject::____Zenject__DisposableManager__DisposableInfo;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~DisposableManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "DisposableManager", modifiers: " const&", def_value: None }]
constexpr DisposableManager(DisposableManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DisposableManager", modifiers: "&&", def_value: None }]
constexpr DisposableManager(DisposableManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DisposableManager(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DisposableManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DisposableManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DisposableManager& operator=(DisposableManager&& o) noexcept = default;
  constexpr DisposableManager& operator=(DisposableManager const& o) noexcept = default;
                


// Fields

 ::System::Collections::Generic::List_1<::Zenject::____Zenject__DisposableManager__DisposableInfo> __declspec(property(get=__get__disposables, put=__set__disposables))  _disposables;

constexpr void __set__disposables(::System::Collections::Generic::List_1<::Zenject::____Zenject__DisposableManager__DisposableInfo> value) ;

constexpr ::System::Collections::Generic::List_1<::Zenject::____Zenject__DisposableManager__DisposableInfo> __get__disposables() const;

 ::System::Collections::Generic::List_1<::Zenject::____Zenject__DisposableManager__LateDisposableInfo> __declspec(property(get=__get__lateDisposables, put=__set__lateDisposables))  _lateDisposables;

constexpr void __set__lateDisposables(::System::Collections::Generic::List_1<::Zenject::____Zenject__DisposableManager__LateDisposableInfo> value) ;

constexpr ::System::Collections::Generic::List_1<::Zenject::____Zenject__DisposableManager__LateDisposableInfo> __get__lateDisposables() const;

 bool __declspec(property(get=__get__disposed, put=__set__disposed))  _disposed;

constexpr void __set__disposed(bool value) ;

constexpr bool __get__disposed() const;

 bool __declspec(property(get=__get__lateDisposed, put=__set__lateDisposed))  _lateDisposed;

constexpr void __set__lateDisposed(bool value) ;

constexpr bool __get__lateDisposed() const;


// Methods

// Ctor Parameters [CppParam { name: "disposables", ty: "::System::Collections::Generic::List_1<::System::IDisposable>", modifiers: "", def_value: None }, CppParam { name: "priorities", ty: "::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type,int32_t>>", modifiers: "", def_value: None }, CppParam { name: "lateDisposables", ty: "::System::Collections::Generic::List_1<::Zenject::ILateDisposable>", modifiers: "", def_value: None }, CppParam { name: "latePriorities", ty: "::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type,int32_t>>", modifiers: "", def_value: None }]
explicit DisposableManager(::System::Collections::Generic::List_1<::System::IDisposable> disposables, ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type,int32_t>> priorities, ::System::Collections::Generic::List_1<::Zenject::ILateDisposable> lateDisposables, ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type,int32_t>> latePriorities) ;

/// @brief Method .ctor addr 0x2d95aec size 0x830 virtual false final false
 void _ctor(::System::Collections::Generic::List_1<::System::IDisposable> disposables, ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type,int32_t>> priorities, ::System::Collections::Generic::List_1<::Zenject::ILateDisposable> lateDisposables, ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type,int32_t>> latePriorities) ;

/// @brief Method Add addr 0x2d96368 size 0x8 virtual false final false
 void Add(::System::IDisposable disposable) ;

/// @brief Method Add addr 0x2d96370 size 0xbc virtual false final false
 void Add(::System::IDisposable disposable, int32_t priority) ;

/// @brief Method AddLate addr 0x2d9642c size 0x8 virtual false final false
 void AddLate(::Zenject::ILateDisposable disposable) ;

/// @brief Method AddLate addr 0x2d96434 size 0xf0 virtual false final false
 void AddLate(::Zenject::ILateDisposable disposable, int32_t priority) ;

/// @brief Method Remove addr 0x2d96524 size 0x12c virtual false final false
 void Remove(::System::IDisposable disposable) ;

/// @brief Method LateDispose addr 0x2d96658 size 0x45c virtual false final false
 void LateDispose() ;

/// @brief Method Dispose addr 0x2d96ab4 size 0x438 virtual true final true
 void Dispose() ;

/// @brief Method __zenCreate addr 0x2d96eec size 0x1c4 virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2d970b0 size 0x424 virtual false final false
static ::Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
} // end anonymous namespace
NEED_NO_BOX(::Zenject::DisposableManager);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::DisposableManager, "Zenject", "DisposableManager");
NEED_NO_BOX(::Zenject::____Zenject__DisposableManager__LateDisposableInfo);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::____Zenject__DisposableManager__LateDisposableInfo, "Zenject", "DisposableManager/LateDisposableInfo");
NEED_NO_BOX(::Zenject::____Zenject__DisposableManager____c);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::____Zenject__DisposableManager____c, "Zenject", "DisposableManager/<>c");
NEED_NO_BOX(::Zenject::____Zenject__DisposableManager____c__DisplayClass4_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::____Zenject__DisposableManager____c__DisplayClass4_0, "Zenject", "DisposableManager/<>c__DisplayClass4_0");
NEED_NO_BOX(::Zenject::____Zenject__DisposableManager____c__DisplayClass4_1);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::____Zenject__DisposableManager____c__DisplayClass4_1, "Zenject", "DisposableManager/<>c__DisplayClass4_1");
NEED_NO_BOX(::Zenject::____Zenject__DisposableManager____c__DisplayClass9_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::____Zenject__DisposableManager____c__DisplayClass9_0, "Zenject", "DisposableManager/<>c__DisplayClass9_0");
DEFINE_IL2CPP_ARG_TYPE(::Zenject::____Zenject__DisposableManager__DisposableInfo, "Zenject", "DisposableManager/DisposableInfo");
