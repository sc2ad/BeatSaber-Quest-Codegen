#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
class MonoBehaviour;
}
namespace UnityEngine::UI::CoroutineTween {
struct ColorTween;
}
namespace System::Collections {
class IEnumerator;
}
namespace UnityEngine::UI::CoroutineTween {
struct FloatTween;
}
namespace System {
class IDisposable;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
// Forward declare root types
namespace UnityEngine::UI::CoroutineTween {
template<typename T>
class TweenRunner_1;
}
namespace UnityEngine::UI::CoroutineTween {
template<typename T>
class UnityEngine__UI__CoroutineTween__TweenRunner_1___Start_d__2;
}
namespace UnityEngine::UI::CoroutineTween {
template<>
class TweenRunner_1<UnityEngine::UI::CoroutineTween::ColorTween>;
}
namespace UnityEngine::UI::CoroutineTween {
template<>
class TweenRunner_1<UnityEngine::UI::CoroutineTween::FloatTween>;
}
namespace UnityEngine::UI::CoroutineTween {
template<>
class UnityEngine__UI__CoroutineTween__TweenRunner_1___Start_d__2<UnityEngine::UI::CoroutineTween::ColorTween>;
}
namespace UnityEngine::UI::CoroutineTween {
template<>
class UnityEngine__UI__CoroutineTween__TweenRunner_1___Start_d__2<UnityEngine::UI::CoroutineTween::FloatTween>;
}
// Type: ::<Start>d__2
// Type: UnityEngine.UI.CoroutineTween::TweenRunner`1
// Type: ::<Start>d__2
namespace UnityEngine::UI::CoroutineTween {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13095))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13095), inst: 5025 })
// CS Name: UnityEngine.UI.CoroutineTween.TweenRunner`1::<Start>d__2
class CORDL_TYPE UnityEngine__UI__CoroutineTween__TweenRunner_1___Start_d__2<UnityEngine::UI::CoroutineTween::ColorTween> : public ::bs_hook::Il2CppWrapperType {
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

virtual ~UnityEngine__UI__CoroutineTween__TweenRunner_1___Start_d__2() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UI__CoroutineTween__TweenRunner_1___Start_d__2", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UI__CoroutineTween__TweenRunner_1___Start_d__2(UnityEngine__UI__CoroutineTween__TweenRunner_1___Start_d__2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UI__CoroutineTween__TweenRunner_1___Start_d__2", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UI__CoroutineTween__TweenRunner_1___Start_d__2(UnityEngine__UI__CoroutineTween__TweenRunner_1___Start_d__2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UI__CoroutineTween__TweenRunner_1___Start_d__2(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__UI__CoroutineTween__TweenRunner_1___Start_d__2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UI__CoroutineTween__TweenRunner_1___Start_d__2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UI__CoroutineTween__TweenRunner_1___Start_d__2& operator=(UnityEngine__UI__CoroutineTween__TweenRunner_1___Start_d__2&& o) noexcept = default;
  constexpr UnityEngine__UI__CoroutineTween__TweenRunner_1___Start_d__2& operator=(UnityEngine__UI__CoroutineTween__TweenRunner_1___Start_d__2 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 UnityEngine::UI::CoroutineTween::ColorTween __declspec(property(get=__get_tweenInfo, put=__set_tweenInfo))  tweenInfo;

constexpr void __set_tweenInfo(UnityEngine::UI::CoroutineTween::ColorTween value) ;

constexpr UnityEngine::UI::CoroutineTween::ColorTween __get_tweenInfo() const;

 float_t __declspec(property(get=__get__elapsedTime_5__2, put=__set__elapsedTime_5__2))  _elapsedTime_5__2;

constexpr void __set__elapsedTime_5__2(float_t value) ;

constexpr float_t __get__elapsedTime_5__2() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit UnityEngine__UI__CoroutineTween__TweenRunner_1___Start_d__2(int32_t __1__state) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UI::CoroutineTween
// Type: ::<Start>d__2
namespace UnityEngine::UI::CoroutineTween {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13095))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13095), inst: 5026 })
// CS Name: UnityEngine.UI.CoroutineTween.TweenRunner`1::<Start>d__2
class CORDL_TYPE UnityEngine__UI__CoroutineTween__TweenRunner_1___Start_d__2<UnityEngine::UI::CoroutineTween::FloatTween> : public ::bs_hook::Il2CppWrapperType {
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

virtual ~UnityEngine__UI__CoroutineTween__TweenRunner_1___Start_d__2() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UI__CoroutineTween__TweenRunner_1___Start_d__2", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UI__CoroutineTween__TweenRunner_1___Start_d__2(UnityEngine__UI__CoroutineTween__TweenRunner_1___Start_d__2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UI__CoroutineTween__TweenRunner_1___Start_d__2", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UI__CoroutineTween__TweenRunner_1___Start_d__2(UnityEngine__UI__CoroutineTween__TweenRunner_1___Start_d__2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UI__CoroutineTween__TweenRunner_1___Start_d__2(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__UI__CoroutineTween__TweenRunner_1___Start_d__2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UI__CoroutineTween__TweenRunner_1___Start_d__2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UI__CoroutineTween__TweenRunner_1___Start_d__2& operator=(UnityEngine__UI__CoroutineTween__TweenRunner_1___Start_d__2&& o) noexcept = default;
  constexpr UnityEngine__UI__CoroutineTween__TweenRunner_1___Start_d__2& operator=(UnityEngine__UI__CoroutineTween__TweenRunner_1___Start_d__2 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 UnityEngine::UI::CoroutineTween::FloatTween __declspec(property(get=__get_tweenInfo, put=__set_tweenInfo))  tweenInfo;

constexpr void __set_tweenInfo(UnityEngine::UI::CoroutineTween::FloatTween value) ;

constexpr UnityEngine::UI::CoroutineTween::FloatTween __get_tweenInfo() const;

 float_t __declspec(property(get=__get__elapsedTime_5__2, put=__set__elapsedTime_5__2))  _elapsedTime_5__2;

constexpr void __set__elapsedTime_5__2(float_t value) ;

constexpr float_t __get__elapsedTime_5__2() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit UnityEngine__UI__CoroutineTween__TweenRunner_1___Start_d__2(int32_t __1__state) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UI::CoroutineTween
// Type: UnityEngine.UI.CoroutineTween::TweenRunner`1
namespace UnityEngine::UI::CoroutineTween {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13096))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13096), inst: 5025 })
// CS Name: UnityEngine.UI.CoroutineTween.TweenRunner`1
class CORDL_TYPE TweenRunner_1<UnityEngine::UI::CoroutineTween::ColorTween> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using _Start_d__2 = UnityEngine::UI::CoroutineTween::UnityEngine__UI__CoroutineTween__TweenRunner_1___Start_d__2<UnityEngine::UI::CoroutineTween::ColorTween>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~TweenRunner_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "TweenRunner_1", modifiers: " const&", def_value: None }]
constexpr TweenRunner_1(TweenRunner_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TweenRunner_1", modifiers: "&&", def_value: None }]
constexpr TweenRunner_1(TweenRunner_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TweenRunner_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TweenRunner_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TweenRunner_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TweenRunner_1& operator=(TweenRunner_1&& o) noexcept = default;
  constexpr TweenRunner_1& operator=(TweenRunner_1 const& o) noexcept = default;
                


// Fields

 UnityEngine::MonoBehaviour __declspec(property(get=__get_m_CoroutineContainer, put=__set_m_CoroutineContainer))  m_CoroutineContainer;

constexpr void __set_m_CoroutineContainer(UnityEngine::MonoBehaviour value) ;

constexpr UnityEngine::MonoBehaviour __get_m_CoroutineContainer() const;

 System::Collections::IEnumerator __declspec(property(get=__get_m_Tween, put=__set_m_Tween))  m_Tween;

constexpr void __set_m_Tween(System::Collections::IEnumerator value) ;

constexpr System::Collections::IEnumerator __get_m_Tween() const;


// Methods

/// @brief Method Start addr 0x0 size 0xffffffffffffffff virtual false final false
static System::Collections::IEnumerator Start(UnityEngine::UI::CoroutineTween::ColorTween tweenInfo) ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual false final false
 void Init(UnityEngine::MonoBehaviour coroutineContainer) ;

/// @brief Method StartTween addr 0x0 size 0xffffffffffffffff virtual false final false
 void StartTween(UnityEngine::UI::CoroutineTween::ColorTween info) ;

/// @brief Method StopTween addr 0x0 size 0xffffffffffffffff virtual false final false
 void StopTween() ;

// Ctor Parameters []
explicit TweenRunner_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UI::CoroutineTween
// Type: UnityEngine.UI.CoroutineTween::TweenRunner`1
namespace UnityEngine::UI::CoroutineTween {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13096))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13096), inst: 5026 })
// CS Name: UnityEngine.UI.CoroutineTween.TweenRunner`1
class CORDL_TYPE TweenRunner_1<UnityEngine::UI::CoroutineTween::FloatTween> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using _Start_d__2 = UnityEngine::UI::CoroutineTween::UnityEngine__UI__CoroutineTween__TweenRunner_1___Start_d__2<UnityEngine::UI::CoroutineTween::FloatTween>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~TweenRunner_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "TweenRunner_1", modifiers: " const&", def_value: None }]
constexpr TweenRunner_1(TweenRunner_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TweenRunner_1", modifiers: "&&", def_value: None }]
constexpr TweenRunner_1(TweenRunner_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TweenRunner_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TweenRunner_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TweenRunner_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TweenRunner_1& operator=(TweenRunner_1&& o) noexcept = default;
  constexpr TweenRunner_1& operator=(TweenRunner_1 const& o) noexcept = default;
                


// Fields

 UnityEngine::MonoBehaviour __declspec(property(get=__get_m_CoroutineContainer, put=__set_m_CoroutineContainer))  m_CoroutineContainer;

constexpr void __set_m_CoroutineContainer(UnityEngine::MonoBehaviour value) ;

constexpr UnityEngine::MonoBehaviour __get_m_CoroutineContainer() const;

 System::Collections::IEnumerator __declspec(property(get=__get_m_Tween, put=__set_m_Tween))  m_Tween;

constexpr void __set_m_Tween(System::Collections::IEnumerator value) ;

constexpr System::Collections::IEnumerator __get_m_Tween() const;


// Methods

/// @brief Method Start addr 0x0 size 0xffffffffffffffff virtual false final false
static System::Collections::IEnumerator Start(UnityEngine::UI::CoroutineTween::FloatTween tweenInfo) ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual false final false
 void Init(UnityEngine::MonoBehaviour coroutineContainer) ;

/// @brief Method StartTween addr 0x0 size 0xffffffffffffffff virtual false final false
 void StartTween(UnityEngine::UI::CoroutineTween::FloatTween info) ;

/// @brief Method StopTween addr 0x0 size 0xffffffffffffffff virtual false final false
 void StopTween() ;

// Ctor Parameters []
explicit TweenRunner_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UI::CoroutineTween
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(UnityEngine::UI::CoroutineTween::TweenRunner_1, "UnityEngine.UI.CoroutineTween", "TweenRunner`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(UnityEngine::UI::CoroutineTween::UnityEngine__UI__CoroutineTween__TweenRunner_1___Start_d__2, "UnityEngine.UI.CoroutineTween", "TweenRunner`1/<Start>d__2");
