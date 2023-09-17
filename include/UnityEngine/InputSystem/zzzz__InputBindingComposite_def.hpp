#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace System {
class Type;
}
namespace UnityEngine::InputSystem::Utilities {
struct TypeTable;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace UnityEngine::InputSystem {
struct InputBindingCompositeContext;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Reflection {
class FieldInfo;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class InputBindingComposite;
}
namespace UnityEngine::InputSystem {
class ____UnityEngine__InputSystem__InputBindingComposite___GetPartNames_d__12;
}
// Type: ::<GetPartNames>d__12
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6271))
// CS Name: UnityEngine.InputSystem.InputBindingComposite::<GetPartNames>d__12
class CORDL_TYPE ____UnityEngine__InputSystem__InputBindingComposite___GetPartNames_d__12 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::Generic::IEnumerable_1<::StringW>
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::StringW>() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr operator  ::System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<::StringW>
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::StringW>() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr operator  ::System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~____UnityEngine__InputSystem__InputBindingComposite___GetPartNames_d__12() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__InputSystem__InputBindingComposite___GetPartNames_d__12", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__InputSystem__InputBindingComposite___GetPartNames_d__12(____UnityEngine__InputSystem__InputBindingComposite___GetPartNames_d__12 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__InputSystem__InputBindingComposite___GetPartNames_d__12", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__InputSystem__InputBindingComposite___GetPartNames_d__12(____UnityEngine__InputSystem__InputBindingComposite___GetPartNames_d__12&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__InputSystem__InputBindingComposite___GetPartNames_d__12(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____UnityEngine__InputSystem__InputBindingComposite___GetPartNames_d__12& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__InputSystem__InputBindingComposite___GetPartNames_d__12& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__InputSystem__InputBindingComposite___GetPartNames_d__12& operator=(____UnityEngine__InputSystem__InputBindingComposite___GetPartNames_d__12&& o) noexcept = default;
  constexpr ____UnityEngine__InputSystem__InputBindingComposite___GetPartNames_d__12& operator=(____UnityEngine__InputSystem__InputBindingComposite___GetPartNames_d__12 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::StringW __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::StringW value) ;

constexpr ::StringW __get___2__current() const;

 int32_t __declspec(property(get=__get___l__initialThreadId, put=__set___l__initialThreadId))  __l__initialThreadId;

constexpr void __set___l__initialThreadId(int32_t value) ;

constexpr int32_t __get___l__initialThreadId() const;

 ::StringW __declspec(property(get=__get_composite, put=__set_composite))  composite;

constexpr void __set_composite(::StringW value) ;

constexpr ::StringW __get_composite() const;

 ::StringW __declspec(property(get=__get___3__composite, put=__set___3__composite))  __3__composite;

constexpr void __set___3__composite(::StringW value) ;

constexpr ::StringW __get___3__composite() const;

 ::ArrayW<::System::Reflection::FieldInfo> __declspec(property(get=__get___7__wrap1, put=__set___7__wrap1))  __7__wrap1;

constexpr void __set___7__wrap1(::ArrayW<::System::Reflection::FieldInfo> value) ;

constexpr ::ArrayW<::System::Reflection::FieldInfo> __get___7__wrap1() const;

 int32_t __declspec(property(get=__get___7__wrap2, put=__set___7__wrap2))  __7__wrap2;

constexpr void __set___7__wrap2(int32_t value) ;

constexpr int32_t __get___7__wrap2() const;


// Properties

 ::StringW __declspec(property(get=System_Collections_Generic_IEnumerator_System_String__get_Current))  System_Collections_Generic_IEnumerator_System_String__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit ____UnityEngine__InputSystem__InputBindingComposite___GetPartNames_d__12(int32_t __1__state) ;

/// @brief Method .ctor addr 0x28c37a4 size 0x34 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x28c3900 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x28c3904 size 0x1d0 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.String>.get_Current addr 0x28c3ad4 size 0x8 virtual true final true
 ::StringW System_Collections_Generic_IEnumerator_System_String__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x28c3adc size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x28c3b1c size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.Generic.IEnumerable<System.String>.GetEnumerator addr 0x28c3b24 size 0xa4 virtual true final true
 ::System::Collections::Generic::IEnumerator_1<::StringW> System_Collections_Generic_IEnumerable_System_String__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x28c3bc8 size 0x4 virtual true final true
 ::System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: UnityEngine.InputSystem::InputBindingComposite
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6272))
// CS Name: UnityEngine.InputSystem.InputBindingComposite
class CORDL_TYPE InputBindingComposite : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using _GetPartNames_d__12 = ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputBindingComposite___GetPartNames_d__12;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~InputBindingComposite() = default;

// Ctor Parameters [CppParam { name: "", ty: "InputBindingComposite", modifiers: " const&", def_value: None }]
constexpr InputBindingComposite(InputBindingComposite const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InputBindingComposite", modifiers: "&&", def_value: None }]
constexpr InputBindingComposite(InputBindingComposite&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InputBindingComposite(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr InputBindingComposite& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InputBindingComposite& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InputBindingComposite& operator=(InputBindingComposite&& o) noexcept = default;
  constexpr InputBindingComposite& operator=(InputBindingComposite const& o) noexcept = default;
                


// Fields

static ::UnityEngine::InputSystem::Utilities::TypeTable __declspec(property(get=__get_s_Composites, put=__set_s_Composites))  s_Composites;

static void __set_s_Composites(::UnityEngine::InputSystem::Utilities::TypeTable value) ;

static ::UnityEngine::InputSystem::Utilities::TypeTable __get_s_Composites() ;


// Properties

 ::System::Type __declspec(property(get=get_valueType))  valueType;

 int32_t __declspec(property(get=get_valueSizeInBytes))  valueSizeInBytes;


// Methods

/// @brief Method get_valueType addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Type get_valueType() ;

/// @brief Method get_valueSizeInBytes addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_valueSizeInBytes() ;

/// @brief Method ReadValue addr 0x0 size 0xffffffffffffffff virtual true final false
 void ReadValue(ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext> context, void* buffer, int32_t bufferSize) ;

/// @brief Method ReadValueAsObject addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType ReadValueAsObject(ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext> context) ;

/// @brief Method EvaluateMagnitude addr 0x28c3440 size 0x8 virtual true final false
 float_t EvaluateMagnitude(ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext> context) ;

/// @brief Method FinishSetup addr 0x28c3448 size 0x4 virtual true final false
 void FinishSetup(ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext> context) ;

/// @brief Method CallFinishSetup addr 0x28bba9c size 0xc virtual false final false
 void CallFinishSetup(ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext> context) ;

/// @brief Method GetValueType addr 0x28c344c size 0x144 virtual false final false
static ::System::Type GetValueType(::StringW composite) ;

/// @brief Method GetExpectedControlLayoutName addr 0x28c3590 size 0x19c virtual false final false
static ::StringW GetExpectedControlLayoutName(::StringW composite, ::StringW part) ;

/// @brief Method GetPartNames addr 0x28c372c size 0x78 virtual false final false
static ::System::Collections::Generic::IEnumerable_1<::StringW> GetPartNames(::StringW composite) ;

/// @brief Method GetDisplayFormatString addr 0x28c37d8 size 0x120 virtual false final false
static ::StringW GetDisplayFormatString(::StringW composite) ;

// Ctor Parameters []
explicit InputBindingComposite() ;

/// @brief Method .ctor addr 0x28c38f8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::InputSystem::InputBindingComposite);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputBindingComposite, "UnityEngine.InputSystem", "InputBindingComposite");
NEED_NO_BOX(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputBindingComposite___GetPartNames_d__12);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputBindingComposite___GetPartNames_d__12, "UnityEngine.InputSystem", "InputBindingComposite/<GetPartNames>d__12");
