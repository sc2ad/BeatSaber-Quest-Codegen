#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace GlobalNamespace {
class GlobalNamespace__ClickButtonWithCommandArgument___Start_d__2;
}
namespace System::Collections {
class IEnumerator;
}
namespace UnityEngine::UI {
class Button;
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
class ClickButtonWithCommandArgument;
}
namespace GlobalNamespace {
class GlobalNamespace__ClickButtonWithCommandArgument___Start_d__2;
}
// Type: ::<Start>d__2
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13777))
// CS Name: ClickButtonWithCommandArgument::<Start>d__2
class CORDL_TYPE GlobalNamespace__ClickButtonWithCommandArgument___Start_d__2 : public ::bs_hook::Il2CppWrapperType {
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

virtual ~GlobalNamespace__ClickButtonWithCommandArgument___Start_d__2() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__ClickButtonWithCommandArgument___Start_d__2", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__ClickButtonWithCommandArgument___Start_d__2(GlobalNamespace__ClickButtonWithCommandArgument___Start_d__2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__ClickButtonWithCommandArgument___Start_d__2", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__ClickButtonWithCommandArgument___Start_d__2(GlobalNamespace__ClickButtonWithCommandArgument___Start_d__2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__ClickButtonWithCommandArgument___Start_d__2(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__ClickButtonWithCommandArgument___Start_d__2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__ClickButtonWithCommandArgument___Start_d__2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__ClickButtonWithCommandArgument___Start_d__2& operator=(GlobalNamespace__ClickButtonWithCommandArgument___Start_d__2&& o) noexcept = default;
  constexpr GlobalNamespace__ClickButtonWithCommandArgument___Start_d__2& operator=(GlobalNamespace__ClickButtonWithCommandArgument___Start_d__2 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 GlobalNamespace::ClickButtonWithCommandArgument __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::ClickButtonWithCommandArgument value) ;

constexpr GlobalNamespace::ClickButtonWithCommandArgument __get___4__this() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

static GlobalNamespace::GlobalNamespace__ClickButtonWithCommandArgument___Start_d__2 New_ctor(int32_t __1__state) ;

/// @brief Method .ctor addr 0x1f75288 size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x1f752b8 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x1f752bc size 0xc8 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x1f75384 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x1f7538c size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x1f753cc size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ClickButtonWithCommandArgument
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13778))
// CS Name: ClickButtonWithCommandArgument
class CORDL_TYPE ClickButtonWithCommandArgument : public UnityEngine::MonoBehaviour {
public:
// Declarations
using _Start_d__2 = GlobalNamespace::GlobalNamespace__ClickButtonWithCommandArgument___Start_d__2;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~ClickButtonWithCommandArgument() = default;

// Ctor Parameters [CppParam { name: "", ty: "ClickButtonWithCommandArgument", modifiers: " const&", def_value: None }]
constexpr ClickButtonWithCommandArgument(ClickButtonWithCommandArgument const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ClickButtonWithCommandArgument", modifiers: "&&", def_value: None }]
constexpr ClickButtonWithCommandArgument(ClickButtonWithCommandArgument&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ClickButtonWithCommandArgument(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr ClickButtonWithCommandArgument& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ClickButtonWithCommandArgument& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ClickButtonWithCommandArgument& operator=(ClickButtonWithCommandArgument&& o) noexcept = default;
  constexpr ClickButtonWithCommandArgument& operator=(ClickButtonWithCommandArgument const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__argument, put=__set__argument))  _argument;

constexpr void __set__argument(::StringW value) ;

constexpr ::StringW __get__argument() const;

 UnityEngine::UI::Button __declspec(property(get=__get__button, put=__set__button))  _button;

constexpr void __set__button(UnityEngine::UI::Button value) ;

constexpr UnityEngine::UI::Button __get__button() const;


// Methods

/// @brief Method Start addr 0x1f75220 size 0x68 virtual false final false
 System::Collections::IEnumerator Start() ;

static GlobalNamespace::ClickButtonWithCommandArgument New_ctor() ;

/// @brief Method .ctor addr 0x1f752b0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::ClickButtonWithCommandArgument);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ClickButtonWithCommandArgument, "", "ClickButtonWithCommandArgument");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__ClickButtonWithCommandArgument___Start_d__2);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__ClickButtonWithCommandArgument___Start_d__2, "", "ClickButtonWithCommandArgument/<Start>d__2");
