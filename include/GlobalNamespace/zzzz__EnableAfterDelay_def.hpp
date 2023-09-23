#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace UnityEngine {
class MonoBehaviour;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
class EnableAfterDelay;
}
namespace GlobalNamespace {
class GlobalNamespace__EnableAfterDelay___Start_d__1;
}
// Type: ::<Start>d__1
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13789))
// CS Name: EnableAfterDelay::<Start>d__1
class CORDL_TYPE GlobalNamespace__EnableAfterDelay___Start_d__1 : public ::bs_hook::Il2CppWrapperType {
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

virtual ~GlobalNamespace__EnableAfterDelay___Start_d__1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__EnableAfterDelay___Start_d__1", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__EnableAfterDelay___Start_d__1(GlobalNamespace__EnableAfterDelay___Start_d__1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__EnableAfterDelay___Start_d__1", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__EnableAfterDelay___Start_d__1(GlobalNamespace__EnableAfterDelay___Start_d__1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__EnableAfterDelay___Start_d__1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__EnableAfterDelay___Start_d__1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__EnableAfterDelay___Start_d__1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__EnableAfterDelay___Start_d__1& operator=(GlobalNamespace__EnableAfterDelay___Start_d__1&& o) noexcept = default;
  constexpr GlobalNamespace__EnableAfterDelay___Start_d__1& operator=(GlobalNamespace__EnableAfterDelay___Start_d__1 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 GlobalNamespace::EnableAfterDelay __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::EnableAfterDelay value) ;

constexpr GlobalNamespace::EnableAfterDelay __get___4__this() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit GlobalNamespace__EnableAfterDelay___Start_d__1(int32_t __1__state) ;

/// @brief Method .ctor addr 0x1f768c8 size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x1f768f8 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x1f768fc size 0xac virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x1f769a8 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x1f769b0 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x1f769f0 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::EnableAfterDelay
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13790))
// CS Name: EnableAfterDelay
class CORDL_TYPE EnableAfterDelay : public UnityEngine::MonoBehaviour {
public:
// Declarations
using _Start_d__1 = GlobalNamespace::GlobalNamespace__EnableAfterDelay___Start_d__1;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~EnableAfterDelay() = default;

// Ctor Parameters [CppParam { name: "", ty: "EnableAfterDelay", modifiers: " const&", def_value: None }]
constexpr EnableAfterDelay(EnableAfterDelay const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EnableAfterDelay", modifiers: "&&", def_value: None }]
constexpr EnableAfterDelay(EnableAfterDelay&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EnableAfterDelay(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr EnableAfterDelay& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EnableAfterDelay& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EnableAfterDelay& operator=(EnableAfterDelay&& o) noexcept = default;
  constexpr EnableAfterDelay& operator=(EnableAfterDelay const& o) noexcept = default;
                


// Fields

 UnityEngine::MonoBehaviour __declspec(property(get=__get__component, put=__set__component))  _component;

constexpr void __set__component(UnityEngine::MonoBehaviour value) ;

constexpr UnityEngine::MonoBehaviour __get__component() const;


// Methods

/// @brief Method Start addr 0x1f76860 size 0x68 virtual false final false
 System::Collections::IEnumerator Start() ;

// Ctor Parameters []
explicit EnableAfterDelay() ;

/// @brief Method .ctor addr 0x1f768f0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::EnableAfterDelay);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EnableAfterDelay, "", "EnableAfterDelay");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__EnableAfterDelay___Start_d__1);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__EnableAfterDelay___Start_d__1, "", "EnableAfterDelay/<Start>d__1");
