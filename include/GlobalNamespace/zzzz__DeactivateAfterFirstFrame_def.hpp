#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
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
class DeactivateAfterFirstFrame;
}
namespace GlobalNamespace {
class GlobalNamespace__DeactivateAfterFirstFrame___Start_d__0;
}
// Type: ::<Start>d__0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5449))
// CS Name: DeactivateAfterFirstFrame::<Start>d__0
class CORDL_TYPE GlobalNamespace__DeactivateAfterFirstFrame___Start_d__0 : public ::bs_hook::Il2CppWrapperType {
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

virtual ~GlobalNamespace__DeactivateAfterFirstFrame___Start_d__0() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__DeactivateAfterFirstFrame___Start_d__0", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__DeactivateAfterFirstFrame___Start_d__0(GlobalNamespace__DeactivateAfterFirstFrame___Start_d__0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__DeactivateAfterFirstFrame___Start_d__0", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__DeactivateAfterFirstFrame___Start_d__0(GlobalNamespace__DeactivateAfterFirstFrame___Start_d__0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__DeactivateAfterFirstFrame___Start_d__0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__DeactivateAfterFirstFrame___Start_d__0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__DeactivateAfterFirstFrame___Start_d__0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__DeactivateAfterFirstFrame___Start_d__0& operator=(GlobalNamespace__DeactivateAfterFirstFrame___Start_d__0&& o) noexcept = default;
  constexpr GlobalNamespace__DeactivateAfterFirstFrame___Start_d__0& operator=(GlobalNamespace__DeactivateAfterFirstFrame___Start_d__0 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 GlobalNamespace::DeactivateAfterFirstFrame __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::DeactivateAfterFirstFrame value) ;

constexpr GlobalNamespace::DeactivateAfterFirstFrame __get___4__this() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit GlobalNamespace__DeactivateAfterFirstFrame___Start_d__0(int32_t __1__state) ;

/// @brief Method .ctor addr 0x2115a04 size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x2115a34 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x2115a38 size 0x64 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x2115a9c size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x2115aa4 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x2115ae4 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::DeactivateAfterFirstFrame
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5450))
// CS Name: DeactivateAfterFirstFrame
class CORDL_TYPE DeactivateAfterFirstFrame : public UnityEngine::MonoBehaviour {
public:
// Declarations
using _Start_d__0 = GlobalNamespace::GlobalNamespace__DeactivateAfterFirstFrame___Start_d__0;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~DeactivateAfterFirstFrame() = default;

// Ctor Parameters [CppParam { name: "", ty: "DeactivateAfterFirstFrame", modifiers: " const&", def_value: None }]
constexpr DeactivateAfterFirstFrame(DeactivateAfterFirstFrame const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DeactivateAfterFirstFrame", modifiers: "&&", def_value: None }]
constexpr DeactivateAfterFirstFrame(DeactivateAfterFirstFrame&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DeactivateAfterFirstFrame(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr DeactivateAfterFirstFrame& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DeactivateAfterFirstFrame& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DeactivateAfterFirstFrame& operator=(DeactivateAfterFirstFrame&& o) noexcept = default;
  constexpr DeactivateAfterFirstFrame& operator=(DeactivateAfterFirstFrame const& o) noexcept = default;
                


// Methods

/// @brief Method Start addr 0x211599c size 0x68 virtual false final false
 System::Collections::IEnumerator Start() ;

// Ctor Parameters []
explicit DeactivateAfterFirstFrame() ;

/// @brief Method .ctor addr 0x2115a2c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::DeactivateAfterFirstFrame);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DeactivateAfterFirstFrame, "", "DeactivateAfterFirstFrame");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__DeactivateAfterFirstFrame___Start_d__0);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__DeactivateAfterFirstFrame___Start_d__0, "", "DeactivateAfterFirstFrame/<Start>d__0");
