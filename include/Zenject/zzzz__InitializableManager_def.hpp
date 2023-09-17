#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace ModestTree::Util {
template<typename T1,typename T2>
class ValuePair_2;
}
namespace System {
class Type;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
class IInitializable;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace Zenject {
class InitializableManager;
}
namespace Zenject {
class ____Zenject__InitializableManager__InitializableInfo;
}
namespace Zenject {
class ____Zenject__InitializableManager____c;
}
namespace Zenject {
class ____Zenject__InitializableManager____c__DisplayClass2_0;
}
// Type: ::InitializableInfo
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11259))
// CS Name: Zenject.InitializableManager::InitializableInfo
class CORDL_TYPE ____Zenject__InitializableManager__InitializableInfo : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____Zenject__InitializableManager__InitializableInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "____Zenject__InitializableManager__InitializableInfo", modifiers: " const&", def_value: None }]
constexpr ____Zenject__InitializableManager__InitializableInfo(____Zenject__InitializableManager__InitializableInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____Zenject__InitializableManager__InitializableInfo", modifiers: "&&", def_value: None }]
constexpr ____Zenject__InitializableManager__InitializableInfo(____Zenject__InitializableManager__InitializableInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____Zenject__InitializableManager__InitializableInfo(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____Zenject__InitializableManager__InitializableInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____Zenject__InitializableManager__InitializableInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____Zenject__InitializableManager__InitializableInfo& operator=(____Zenject__InitializableManager__InitializableInfo&& o) noexcept = default;
  constexpr ____Zenject__InitializableManager__InitializableInfo& operator=(____Zenject__InitializableManager__InitializableInfo const& o) noexcept = default;
                


// Fields

 ::Zenject::IInitializable __declspec(property(get=__get_Initializable, put=__set_Initializable))  Initializable;

constexpr void __set_Initializable(::Zenject::IInitializable value) ;

constexpr ::Zenject::IInitializable __get_Initializable() const;

 int32_t __declspec(property(get=__get_Priority, put=__set_Priority))  Priority;

constexpr void __set_Priority(int32_t value) ;

constexpr int32_t __get_Priority() const;


// Methods

// Ctor Parameters [CppParam { name: "initializable", ty: "::Zenject::IInitializable", modifiers: "", def_value: None }, CppParam { name: "priority", ty: "int32_t", modifiers: "", def_value: None }]
explicit ____Zenject__InitializableManager__InitializableInfo(::Zenject::IInitializable initializable, int32_t priority) ;

/// @brief Method .ctor addr 0x2d9a1e0 size 0x30 virtual false final false
 void _ctor(::Zenject::IInitializable initializable, int32_t priority) ;

/// @brief Method __zenCreate addr 0x2d9ab68 size 0x110 virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2d9ac78 size 0x304 virtual false final false
static ::Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<>c__DisplayClass2_0
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11260))
// CS Name: Zenject.InitializableManager::<>c__DisplayClass2_0
class CORDL_TYPE ____Zenject__InitializableManager____c__DisplayClass2_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~____Zenject__InitializableManager____c__DisplayClass2_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "____Zenject__InitializableManager____c__DisplayClass2_0", modifiers: " const&", def_value: None }]
constexpr ____Zenject__InitializableManager____c__DisplayClass2_0(____Zenject__InitializableManager____c__DisplayClass2_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____Zenject__InitializableManager____c__DisplayClass2_0", modifiers: "&&", def_value: None }]
constexpr ____Zenject__InitializableManager____c__DisplayClass2_0(____Zenject__InitializableManager____c__DisplayClass2_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____Zenject__InitializableManager____c__DisplayClass2_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____Zenject__InitializableManager____c__DisplayClass2_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____Zenject__InitializableManager____c__DisplayClass2_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____Zenject__InitializableManager____c__DisplayClass2_0& operator=(____Zenject__InitializableManager____c__DisplayClass2_0&& o) noexcept = default;
  constexpr ____Zenject__InitializableManager____c__DisplayClass2_0& operator=(____Zenject__InitializableManager____c__DisplayClass2_0 const& o) noexcept = default;
                


// Fields

 ::Zenject::IInitializable __declspec(property(get=__get_initializable, put=__set_initializable))  initializable;

constexpr void __set_initializable(::Zenject::IInitializable value) ;

constexpr ::Zenject::IInitializable __get_initializable() const;


// Methods

// Ctor Parameters []
explicit ____Zenject__InitializableManager____c__DisplayClass2_0() ;

/// @brief Method .ctor addr 0x2d9a1d8 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <.ctor>b__0 addr 0x2d9af7c size 0x80 virtual false final false
 bool __ctor_b__0(::ModestTree::Util::ValuePair_2<::System::Type,int32_t> x) ;

/// @brief Method __zenCreate addr 0x2d9affc size 0x5c virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2d9b058 size 0x1c0 virtual false final false
static ::Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<>c
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11261))
// CS Name: Zenject.InitializableManager::<>c
class CORDL_TYPE ____Zenject__InitializableManager____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~____Zenject__InitializableManager____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "____Zenject__InitializableManager____c", modifiers: " const&", def_value: None }]
constexpr ____Zenject__InitializableManager____c(____Zenject__InitializableManager____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____Zenject__InitializableManager____c", modifiers: "&&", def_value: None }]
constexpr ____Zenject__InitializableManager____c(____Zenject__InitializableManager____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____Zenject__InitializableManager____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____Zenject__InitializableManager____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____Zenject__InitializableManager____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____Zenject__InitializableManager____c& operator=(____Zenject__InitializableManager____c&& o) noexcept = default;
  constexpr ____Zenject__InitializableManager____c& operator=(____Zenject__InitializableManager____c const& o) noexcept = default;
                


// Fields

static ::Zenject::____Zenject__InitializableManager____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(::Zenject::____Zenject__InitializableManager____c value) ;

static ::Zenject::____Zenject__InitializableManager____c __get___9() ;

static ::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type,int32_t>,int32_t> __declspec(property(get=__get___9__2_1, put=__set___9__2_1))  __9__2_1;

static void __set___9__2_1(::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type,int32_t>,int32_t> value) ;

static ::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type,int32_t>,int32_t> __get___9__2_1() ;

static ::System::Func_2<::Zenject::____Zenject__InitializableManager__InitializableInfo,int32_t> __declspec(property(get=__get___9__5_0, put=__set___9__5_0))  __9__5_0;

static void __set___9__5_0(::System::Func_2<::Zenject::____Zenject__InitializableManager__InitializableInfo,int32_t> value) ;

static ::System::Func_2<::Zenject::____Zenject__InitializableManager__InitializableInfo,int32_t> __get___9__5_0() ;


// Methods

// Ctor Parameters []
explicit ____Zenject__InitializableManager____c() ;

/// @brief Method .ctor addr 0x2d9b27c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <.ctor>b__2_1 addr 0x2d9b284 size 0x18 virtual false final false
 int32_t __ctor_b__2_1(::ModestTree::Util::ValuePair_2<::System::Type,int32_t> x) ;

/// @brief Method <Initialize>b__5_0 addr 0x2d9b29c size 0x18 virtual false final false
 int32_t _Initialize_b__5_0(::Zenject::____Zenject__InitializableManager__InitializableInfo x) ;

/// @brief Method __zenCreate addr 0x2d9b2b4 size 0x5c virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2d9b310 size 0x1c0 virtual false final false
static ::Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::InitializableManager
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11262))
// CS Name: Zenject.InitializableManager
class CORDL_TYPE InitializableManager : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c = ::Zenject::____Zenject__InitializableManager____c;

using __c__DisplayClass2_0 = ::Zenject::____Zenject__InitializableManager____c__DisplayClass2_0;

using InitializableInfo = ::Zenject::____Zenject__InitializableManager__InitializableInfo;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~InitializableManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "InitializableManager", modifiers: " const&", def_value: None }]
constexpr InitializableManager(InitializableManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InitializableManager", modifiers: "&&", def_value: None }]
constexpr InitializableManager(InitializableManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InitializableManager(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr InitializableManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InitializableManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InitializableManager& operator=(InitializableManager&& o) noexcept = default;
  constexpr InitializableManager& operator=(InitializableManager const& o) noexcept = default;
                


// Fields

 ::System::Collections::Generic::List_1<::Zenject::____Zenject__InitializableManager__InitializableInfo> __declspec(property(get=__get__initializables, put=__set__initializables))  _initializables;

constexpr void __set__initializables(::System::Collections::Generic::List_1<::Zenject::____Zenject__InitializableManager__InitializableInfo> value) ;

constexpr ::System::Collections::Generic::List_1<::Zenject::____Zenject__InitializableManager__InitializableInfo> __get__initializables() const;

 bool __declspec(property(get=__get__hasInitialized, put=__set__hasInitialized))  _hasInitialized;

constexpr void __set__hasInitialized(bool value) ;

constexpr bool __get__hasInitialized() const;


// Methods

// Ctor Parameters [CppParam { name: "initializables", ty: "::System::Collections::Generic::List_1<::Zenject::IInitializable>", modifiers: "", def_value: None }, CppParam { name: "priorities", ty: "::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type,int32_t>>", modifiers: "", def_value: None }]
explicit InitializableManager(::System::Collections::Generic::List_1<::Zenject::IInitializable> initializables, ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type,int32_t>> priorities) ;

/// @brief Method .ctor addr 0x2d99e3c size 0x39c virtual false final false
 void _ctor(::System::Collections::Generic::List_1<::Zenject::IInitializable> initializables, ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type,int32_t>> priorities) ;

/// @brief Method Add addr 0x2d9a210 size 0x8 virtual false final false
 void Add(::Zenject::IInitializable initializable) ;

/// @brief Method Add addr 0x2d9a218 size 0x104 virtual false final false
 void Add(::Zenject::IInitializable initializable, int32_t priority) ;

/// @brief Method Initialize addr 0x2d9a31c size 0x42c virtual false final false
 void Initialize() ;

/// @brief Method __zenCreate addr 0x2d9a748 size 0x11c virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2d9a864 size 0x304 virtual false final false
static ::Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
} // end anonymous namespace
NEED_NO_BOX(::Zenject::InitializableManager);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::InitializableManager, "Zenject", "InitializableManager");
NEED_NO_BOX(::Zenject::____Zenject__InitializableManager__InitializableInfo);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::____Zenject__InitializableManager__InitializableInfo, "Zenject", "InitializableManager/InitializableInfo");
NEED_NO_BOX(::Zenject::____Zenject__InitializableManager____c);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::____Zenject__InitializableManager____c, "Zenject", "InitializableManager/<>c");
NEED_NO_BOX(::Zenject::____Zenject__InitializableManager____c__DisplayClass2_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::____Zenject__InitializableManager____c__DisplayClass2_0, "Zenject", "InitializableManager/<>c__DisplayClass2_0");
