#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace GlobalNamespace {
class MissionNode;
}
namespace System {
class Action;
}
namespace GlobalNamespace {
class MissionNodeConnection;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace GlobalNamespace {
class MenuShockwave;
}
namespace GlobalNamespace {
class GlobalNamespace__MissionMapAnimationController___UpdateMissionMapCoroutine_d__12;
}
namespace HMUI {
class ScrollView;
}
namespace GlobalNamespace {
class GlobalNamespace__MissionMapAnimationController____c;
}
namespace GlobalNamespace {
class GlobalNamespace__MissionMapAnimationController___UpdateStageCoroutine_d__14;
}
namespace GlobalNamespace {
class GlobalNamespace__MissionMapAnimationController___UpdateNodesAndConnectionCoroutine_d__15;
}
namespace GlobalNamespace {
class GlobalNamespace__MissionMapAnimationController___UpdateClearedNodeStateCoroutine_d__13;
}
namespace GlobalNamespace {
class MissionNodesManager;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__MissionMapAnimationController___UpdateClearedNodeStateCoroutine_d__13;
}
namespace GlobalNamespace {
class GlobalNamespace__MissionMapAnimationController___UpdateMissionMapCoroutine_d__12;
}
namespace GlobalNamespace {
class GlobalNamespace__MissionMapAnimationController___UpdateNodesAndConnectionCoroutine_d__15;
}
namespace GlobalNamespace {
class GlobalNamespace__MissionMapAnimationController___UpdateStageCoroutine_d__14;
}
namespace GlobalNamespace {
class GlobalNamespace__MissionMapAnimationController____c;
}
namespace GlobalNamespace {
class MissionMapAnimationController;
}
// Type: ::<UpdateMissionMapCoroutine>d__12
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5626))
// CS Name: MissionMapAnimationController::<UpdateMissionMapCoroutine>d__12
class CORDL_TYPE GlobalNamespace__MissionMapAnimationController___UpdateMissionMapCoroutine_d__12 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>
constexpr operator  System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~GlobalNamespace__MissionMapAnimationController___UpdateMissionMapCoroutine_d__12() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MissionMapAnimationController___UpdateMissionMapCoroutine_d__12", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__MissionMapAnimationController___UpdateMissionMapCoroutine_d__12(GlobalNamespace__MissionMapAnimationController___UpdateMissionMapCoroutine_d__12 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MissionMapAnimationController___UpdateMissionMapCoroutine_d__12", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__MissionMapAnimationController___UpdateMissionMapCoroutine_d__12(GlobalNamespace__MissionMapAnimationController___UpdateMissionMapCoroutine_d__12&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__MissionMapAnimationController___UpdateMissionMapCoroutine_d__12(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__MissionMapAnimationController___UpdateMissionMapCoroutine_d__12& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__MissionMapAnimationController___UpdateMissionMapCoroutine_d__12& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__MissionMapAnimationController___UpdateMissionMapCoroutine_d__12& operator=(GlobalNamespace__MissionMapAnimationController___UpdateMissionMapCoroutine_d__12&& o) noexcept = default;
  constexpr GlobalNamespace__MissionMapAnimationController___UpdateMissionMapCoroutine_d__12& operator=(GlobalNamespace__MissionMapAnimationController___UpdateMissionMapCoroutine_d__12 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 GlobalNamespace::MissionMapAnimationController __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::MissionMapAnimationController value) ;

constexpr GlobalNamespace::MissionMapAnimationController __get___4__this() const;

 GlobalNamespace::MissionNode __declspec(property(get=__get_lastClearedMissionNode, put=__set_lastClearedMissionNode))  lastClearedMissionNode;

constexpr void __set_lastClearedMissionNode(GlobalNamespace::MissionNode value) ;

constexpr GlobalNamespace::MissionNode __get_lastClearedMissionNode() const;

 System::Action __declspec(property(get=__get_finishCallback, put=__set_finishCallback))  finishCallback;

constexpr void __set_finishCallback(System::Action value) ;

constexpr System::Action __get_finishCallback() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

static GlobalNamespace::GlobalNamespace__MissionMapAnimationController___UpdateMissionMapCoroutine_d__12 New_ctor(int32_t __1__state) ;

/// @brief Method .ctor addr 0x2147eb8 size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x21480b0 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x21480b4 size 0x1f8 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x21482ac size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x21482b4 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x21482f4 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<UpdateClearedNodeStateCoroutine>d__13
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5627))
// CS Name: MissionMapAnimationController::<UpdateClearedNodeStateCoroutine>d__13
class CORDL_TYPE GlobalNamespace__MissionMapAnimationController___UpdateClearedNodeStateCoroutine_d__13 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>
constexpr operator  System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~GlobalNamespace__MissionMapAnimationController___UpdateClearedNodeStateCoroutine_d__13() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MissionMapAnimationController___UpdateClearedNodeStateCoroutine_d__13", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__MissionMapAnimationController___UpdateClearedNodeStateCoroutine_d__13(GlobalNamespace__MissionMapAnimationController___UpdateClearedNodeStateCoroutine_d__13 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MissionMapAnimationController___UpdateClearedNodeStateCoroutine_d__13", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__MissionMapAnimationController___UpdateClearedNodeStateCoroutine_d__13(GlobalNamespace__MissionMapAnimationController___UpdateClearedNodeStateCoroutine_d__13&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__MissionMapAnimationController___UpdateClearedNodeStateCoroutine_d__13(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__MissionMapAnimationController___UpdateClearedNodeStateCoroutine_d__13& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__MissionMapAnimationController___UpdateClearedNodeStateCoroutine_d__13& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__MissionMapAnimationController___UpdateClearedNodeStateCoroutine_d__13& operator=(GlobalNamespace__MissionMapAnimationController___UpdateClearedNodeStateCoroutine_d__13&& o) noexcept = default;
  constexpr GlobalNamespace__MissionMapAnimationController___UpdateClearedNodeStateCoroutine_d__13& operator=(GlobalNamespace__MissionMapAnimationController___UpdateClearedNodeStateCoroutine_d__13 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 GlobalNamespace::MissionNode __declspec(property(get=__get_lastClearedMissionNode, put=__set_lastClearedMissionNode))  lastClearedMissionNode;

constexpr void __set_lastClearedMissionNode(GlobalNamespace::MissionNode value) ;

constexpr GlobalNamespace::MissionNode __get_lastClearedMissionNode() const;

 GlobalNamespace::MissionMapAnimationController __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::MissionMapAnimationController value) ;

constexpr GlobalNamespace::MissionMapAnimationController __get___4__this() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

static GlobalNamespace::GlobalNamespace__MissionMapAnimationController___UpdateClearedNodeStateCoroutine_d__13 New_ctor(int32_t __1__state) ;

/// @brief Method .ctor addr 0x2147f54 size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x21482fc size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x2148300 size 0xf0 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x21483fc size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x2148404 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x2148444 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<UpdateStageCoroutine>d__14
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5628))
// CS Name: MissionMapAnimationController::<UpdateStageCoroutine>d__14
class CORDL_TYPE GlobalNamespace__MissionMapAnimationController___UpdateStageCoroutine_d__14 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>
constexpr operator  System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~GlobalNamespace__MissionMapAnimationController___UpdateStageCoroutine_d__14() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MissionMapAnimationController___UpdateStageCoroutine_d__14", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__MissionMapAnimationController___UpdateStageCoroutine_d__14(GlobalNamespace__MissionMapAnimationController___UpdateStageCoroutine_d__14 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MissionMapAnimationController___UpdateStageCoroutine_d__14", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__MissionMapAnimationController___UpdateStageCoroutine_d__14(GlobalNamespace__MissionMapAnimationController___UpdateStageCoroutine_d__14&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__MissionMapAnimationController___UpdateStageCoroutine_d__14(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__MissionMapAnimationController___UpdateStageCoroutine_d__14& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__MissionMapAnimationController___UpdateStageCoroutine_d__14& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__MissionMapAnimationController___UpdateStageCoroutine_d__14& operator=(GlobalNamespace__MissionMapAnimationController___UpdateStageCoroutine_d__14&& o) noexcept = default;
  constexpr GlobalNamespace__MissionMapAnimationController___UpdateStageCoroutine_d__14& operator=(GlobalNamespace__MissionMapAnimationController___UpdateStageCoroutine_d__14 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 GlobalNamespace::MissionMapAnimationController __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::MissionMapAnimationController value) ;

constexpr GlobalNamespace::MissionMapAnimationController __get___4__this() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

static GlobalNamespace::GlobalNamespace__MissionMapAnimationController___UpdateStageCoroutine_d__14 New_ctor(int32_t __1__state) ;

/// @brief Method .ctor addr 0x2147fe4 size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x214844c size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x2148450 size 0x9c virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x21486ac size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x21486b4 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x21486f4 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5629))
// CS Name: MissionMapAnimationController::<>c
class CORDL_TYPE GlobalNamespace__MissionMapAnimationController____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GlobalNamespace__MissionMapAnimationController____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MissionMapAnimationController____c", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__MissionMapAnimationController____c(GlobalNamespace__MissionMapAnimationController____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MissionMapAnimationController____c", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__MissionMapAnimationController____c(GlobalNamespace__MissionMapAnimationController____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__MissionMapAnimationController____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__MissionMapAnimationController____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__MissionMapAnimationController____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__MissionMapAnimationController____c& operator=(GlobalNamespace__MissionMapAnimationController____c&& o) noexcept = default;
  constexpr GlobalNamespace__MissionMapAnimationController____c& operator=(GlobalNamespace__MissionMapAnimationController____c const& o) noexcept = default;
                


// Fields

static GlobalNamespace::GlobalNamespace__MissionMapAnimationController____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(GlobalNamespace::GlobalNamespace__MissionMapAnimationController____c value) ;

static GlobalNamespace::GlobalNamespace__MissionMapAnimationController____c __get___9() ;

static System::Func_2<GlobalNamespace::MissionNodeConnection,float_t> __declspec(property(get=__get___9__15_0, put=__set___9__15_0))  __9__15_0;

static void __set___9__15_0(System::Func_2<GlobalNamespace::MissionNodeConnection,float_t> value) ;

static System::Func_2<GlobalNamespace::MissionNodeConnection,float_t> __get___9__15_0() ;

static System::Func_2<GlobalNamespace::MissionNodeConnection,float_t> __declspec(property(get=__get___9__15_1, put=__set___9__15_1))  __9__15_1;

static void __set___9__15_1(System::Func_2<GlobalNamespace::MissionNodeConnection,float_t> value) ;

static System::Func_2<GlobalNamespace::MissionNodeConnection,float_t> __get___9__15_1() ;


// Methods

static GlobalNamespace::GlobalNamespace__MissionMapAnimationController____c New_ctor() ;

/// @brief Method .ctor addr 0x2148760 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <UpdateNodesAndConnectionCoroutine>b__15_0 addr 0x2148768 size 0x24 virtual false final false
 float_t _UpdateNodesAndConnectionCoroutine_b__15_0(GlobalNamespace::MissionNodeConnection connection) ;

/// @brief Method <UpdateNodesAndConnectionCoroutine>b__15_1 addr 0x21487a8 size 0x24 virtual false final false
 float_t _UpdateNodesAndConnectionCoroutine_b__15_1(GlobalNamespace::MissionNodeConnection connection) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<UpdateNodesAndConnectionCoroutine>d__15
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5630))
// CS Name: MissionMapAnimationController::<UpdateNodesAndConnectionCoroutine>d__15
class CORDL_TYPE GlobalNamespace__MissionMapAnimationController___UpdateNodesAndConnectionCoroutine_d__15 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>
constexpr operator  System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~GlobalNamespace__MissionMapAnimationController___UpdateNodesAndConnectionCoroutine_d__15() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MissionMapAnimationController___UpdateNodesAndConnectionCoroutine_d__15", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__MissionMapAnimationController___UpdateNodesAndConnectionCoroutine_d__15(GlobalNamespace__MissionMapAnimationController___UpdateNodesAndConnectionCoroutine_d__15 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MissionMapAnimationController___UpdateNodesAndConnectionCoroutine_d__15", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__MissionMapAnimationController___UpdateNodesAndConnectionCoroutine_d__15(GlobalNamespace__MissionMapAnimationController___UpdateNodesAndConnectionCoroutine_d__15&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__MissionMapAnimationController___UpdateNodesAndConnectionCoroutine_d__15(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__MissionMapAnimationController___UpdateNodesAndConnectionCoroutine_d__15& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__MissionMapAnimationController___UpdateNodesAndConnectionCoroutine_d__15& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__MissionMapAnimationController___UpdateNodesAndConnectionCoroutine_d__15& operator=(GlobalNamespace__MissionMapAnimationController___UpdateNodesAndConnectionCoroutine_d__15&& o) noexcept = default;
  constexpr GlobalNamespace__MissionMapAnimationController___UpdateNodesAndConnectionCoroutine_d__15& operator=(GlobalNamespace__MissionMapAnimationController___UpdateNodesAndConnectionCoroutine_d__15 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 GlobalNamespace::MissionMapAnimationController __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::MissionMapAnimationController value) ;

constexpr GlobalNamespace::MissionMapAnimationController __get___4__this() const;

 ::ArrayW<GlobalNamespace::MissionNodeConnection> __declspec(property(get=__get__newEnabledConnection_5__2, put=__set__newEnabledConnection_5__2))  _newEnabledConnection_5__2;

constexpr void __set__newEnabledConnection_5__2(::ArrayW<GlobalNamespace::MissionNodeConnection> value) ;

constexpr ::ArrayW<GlobalNamespace::MissionNodeConnection> __get__newEnabledConnection_5__2() const;

 ::ArrayW<GlobalNamespace::MissionNodeConnection> __declspec(property(get=__get___7__wrap2, put=__set___7__wrap2))  __7__wrap2;

constexpr void __set___7__wrap2(::ArrayW<GlobalNamespace::MissionNodeConnection> value) ;

constexpr ::ArrayW<GlobalNamespace::MissionNodeConnection> __get___7__wrap2() const;

 int32_t __declspec(property(get=__get___7__wrap3, put=__set___7__wrap3))  __7__wrap3;

constexpr void __set___7__wrap3(int32_t value) ;

constexpr int32_t __get___7__wrap3() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

static GlobalNamespace::GlobalNamespace__MissionMapAnimationController___UpdateNodesAndConnectionCoroutine_d__15 New_ctor(int32_t __1__state) ;

/// @brief Method .ctor addr 0x2148074 size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x21487cc size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x21487d0 size 0x310 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x2148d2c size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x2148d34 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x2148d74 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::MissionMapAnimationController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5631))
// CS Name: MissionMapAnimationController
class CORDL_TYPE MissionMapAnimationController : public UnityEngine::MonoBehaviour {
public:
// Declarations
using _UpdateNodesAndConnectionCoroutine_d__15 = GlobalNamespace::GlobalNamespace__MissionMapAnimationController___UpdateNodesAndConnectionCoroutine_d__15;

using __c = GlobalNamespace::GlobalNamespace__MissionMapAnimationController____c;

using _UpdateStageCoroutine_d__14 = GlobalNamespace::GlobalNamespace__MissionMapAnimationController___UpdateStageCoroutine_d__14;

using _UpdateClearedNodeStateCoroutine_d__13 = GlobalNamespace::GlobalNamespace__MissionMapAnimationController___UpdateClearedNodeStateCoroutine_d__13;

using _UpdateMissionMapCoroutine_d__12 = GlobalNamespace::GlobalNamespace__MissionMapAnimationController___UpdateMissionMapCoroutine_d__12;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~MissionMapAnimationController() = default;

// Ctor Parameters [CppParam { name: "", ty: "MissionMapAnimationController", modifiers: " const&", def_value: None }]
constexpr MissionMapAnimationController(MissionMapAnimationController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MissionMapAnimationController", modifiers: "&&", def_value: None }]
constexpr MissionMapAnimationController(MissionMapAnimationController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MissionMapAnimationController(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MissionMapAnimationController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MissionMapAnimationController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MissionMapAnimationController& operator=(MissionMapAnimationController&& o) noexcept = default;
  constexpr MissionMapAnimationController& operator=(MissionMapAnimationController const& o) noexcept = default;
                


// Fields

 GlobalNamespace::MissionNodesManager __declspec(property(get=__get__missionNodesManager, put=__set__missionNodesManager))  _missionNodesManager;

constexpr void __set__missionNodesManager(GlobalNamespace::MissionNodesManager value) ;

constexpr GlobalNamespace::MissionNodesManager __get__missionNodesManager() const;

 HMUI::ScrollView __declspec(property(get=__get__mapScrollView, put=__set__mapScrollView))  _mapScrollView;

constexpr void __set__mapScrollView(HMUI::ScrollView value) ;

constexpr HMUI::ScrollView __get__mapScrollView() const;

 float_t __declspec(property(get=__get__startDelay, put=__set__startDelay))  _startDelay;

constexpr void __set__startDelay(float_t value) ;

constexpr float_t __get__startDelay() const;

 float_t __declspec(property(get=__get__stageAnimationStartDelay, put=__set__stageAnimationStartDelay))  _stageAnimationStartDelay;

constexpr void __set__stageAnimationStartDelay(float_t value) ;

constexpr float_t __get__stageAnimationStartDelay() const;

 float_t __declspec(property(get=__get__missionConnectionAnimationStartDelay, put=__set__missionConnectionAnimationStartDelay))  _missionConnectionAnimationStartDelay;

constexpr void __set__missionConnectionAnimationStartDelay(float_t value) ;

constexpr float_t __get__missionConnectionAnimationStartDelay() const;

 float_t __declspec(property(get=__get__missionConnectionAnimationSeparationTime, put=__set__missionConnectionAnimationSeparationTime))  _missionConnectionAnimationSeparationTime;

constexpr void __set__missionConnectionAnimationSeparationTime(float_t value) ;

constexpr float_t __get__missionConnectionAnimationSeparationTime() const;

 float_t __declspec(property(get=__get__stageAnimationDuration, put=__set__stageAnimationDuration))  _stageAnimationDuration;

constexpr void __set__stageAnimationDuration(float_t value) ;

constexpr float_t __get__stageAnimationDuration() const;

 GlobalNamespace::MenuShockwave __declspec(property(get=__get__shockwaveEffect, put=__set__shockwaveEffect))  _shockwaveEffect;

constexpr void __set__shockwaveEffect(GlobalNamespace::MenuShockwave value) ;

constexpr GlobalNamespace::MenuShockwave __get__shockwaveEffect() const;


// Properties

 bool __declspec(property(get=get_animatedUpdateIsRequired))  animatedUpdateIsRequired;


// Methods

/// @brief Method get_animatedUpdateIsRequired addr 0x21479dc size 0x74 virtual false final false
 bool get_animatedUpdateIsRequired() ;

/// @brief Method ScrollToTopMostNotClearedMission addr 0x2147b00 size 0xcc virtual false final false
 void ScrollToTopMostNotClearedMission() ;

/// @brief Method UpdateMissionMapAfterMissionWasCleared addr 0x2147d18 size 0xe8 virtual false final false
 void UpdateMissionMapAfterMissionWasCleared(bool animated, System::Action finishCallback) ;

/// @brief Method UpdateMissionMapCoroutine addr 0x2147e3c size 0x7c virtual false final false
 System::Collections::IEnumerator UpdateMissionMapCoroutine(GlobalNamespace::MissionNode lastClearedMissionNode, System::Action finishCallback) ;

/// @brief Method UpdateClearedNodeStateCoroutine addr 0x2147ee0 size 0x74 virtual false final false
 System::Collections::IEnumerator UpdateClearedNodeStateCoroutine(GlobalNamespace::MissionNode lastClearedMissionNode) ;

/// @brief Method UpdateStageCoroutine addr 0x2147f7c size 0x68 virtual false final false
 System::Collections::IEnumerator UpdateStageCoroutine() ;

/// @brief Method UpdateNodesAndConnectionCoroutine addr 0x214800c size 0x68 virtual false final false
 System::Collections::IEnumerator UpdateNodesAndConnectionCoroutine() ;

static GlobalNamespace::MissionMapAnimationController New_ctor() ;

/// @brief Method .ctor addr 0x214809c size 0x14 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__MissionMapAnimationController___UpdateClearedNodeStateCoroutine_d__13);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__MissionMapAnimationController___UpdateClearedNodeStateCoroutine_d__13, "", "MissionMapAnimationController/<UpdateClearedNodeStateCoroutine>d__13");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__MissionMapAnimationController___UpdateMissionMapCoroutine_d__12);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__MissionMapAnimationController___UpdateMissionMapCoroutine_d__12, "", "MissionMapAnimationController/<UpdateMissionMapCoroutine>d__12");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__MissionMapAnimationController___UpdateNodesAndConnectionCoroutine_d__15);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__MissionMapAnimationController___UpdateNodesAndConnectionCoroutine_d__15, "", "MissionMapAnimationController/<UpdateNodesAndConnectionCoroutine>d__15");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__MissionMapAnimationController___UpdateStageCoroutine_d__14);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__MissionMapAnimationController___UpdateStageCoroutine_d__14, "", "MissionMapAnimationController/<UpdateStageCoroutine>d__14");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__MissionMapAnimationController____c);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__MissionMapAnimationController____c, "", "MissionMapAnimationController/<>c");
NEED_NO_BOX(GlobalNamespace::MissionMapAnimationController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionMapAnimationController, "", "MissionMapAnimationController");
