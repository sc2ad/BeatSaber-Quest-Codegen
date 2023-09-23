#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace System::Collections {
class IEnumerator;
}
namespace RootMotion::FinalIK {
class VRIK;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class OffsetModifierVRIK;
}
namespace RootMotion::FinalIK {
class RootMotion__FinalIK__OffsetModifierVRIK___Initiate_d__7;
}
// Type: ::<Initiate>d__7
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12599))
// CS Name: RootMotion.FinalIK.OffsetModifierVRIK::<Initiate>d__7
class CORDL_TYPE RootMotion__FinalIK__OffsetModifierVRIK___Initiate_d__7 : public ::bs_hook::Il2CppWrapperType {
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

virtual ~RootMotion__FinalIK__OffsetModifierVRIK___Initiate_d__7() = default;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion__FinalIK__OffsetModifierVRIK___Initiate_d__7", modifiers: " const&", def_value: None }]
constexpr RootMotion__FinalIK__OffsetModifierVRIK___Initiate_d__7(RootMotion__FinalIK__OffsetModifierVRIK___Initiate_d__7 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion__FinalIK__OffsetModifierVRIK___Initiate_d__7", modifiers: "&&", def_value: None }]
constexpr RootMotion__FinalIK__OffsetModifierVRIK___Initiate_d__7(RootMotion__FinalIK__OffsetModifierVRIK___Initiate_d__7&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RootMotion__FinalIK__OffsetModifierVRIK___Initiate_d__7(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RootMotion__FinalIK__OffsetModifierVRIK___Initiate_d__7& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RootMotion__FinalIK__OffsetModifierVRIK___Initiate_d__7& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RootMotion__FinalIK__OffsetModifierVRIK___Initiate_d__7& operator=(RootMotion__FinalIK__OffsetModifierVRIK___Initiate_d__7&& o) noexcept = default;
  constexpr RootMotion__FinalIK__OffsetModifierVRIK___Initiate_d__7& operator=(RootMotion__FinalIK__OffsetModifierVRIK___Initiate_d__7 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 RootMotion::FinalIK::OffsetModifierVRIK __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(RootMotion::FinalIK::OffsetModifierVRIK value) ;

constexpr RootMotion::FinalIK::OffsetModifierVRIK __get___4__this() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit RootMotion__FinalIK__OffsetModifierVRIK___Initiate_d__7(int32_t __1__state) ;

/// @brief Method .ctor addr 0x120b044 size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x120b24c size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x120b250 size 0x150 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x120b3a0 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x120b3a8 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x120b3e8 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
// Type: RootMotion.FinalIK::OffsetModifierVRIK
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12600))
// CS Name: RootMotion.FinalIK.OffsetModifierVRIK
class CORDL_TYPE OffsetModifierVRIK : public UnityEngine::MonoBehaviour {
public:
// Declarations
using _Initiate_d__7 = RootMotion::FinalIK::RootMotion__FinalIK__OffsetModifierVRIK___Initiate_d__7;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~OffsetModifierVRIK() = default;

// Ctor Parameters [CppParam { name: "", ty: "OffsetModifierVRIK", modifiers: " const&", def_value: None }]
constexpr OffsetModifierVRIK(OffsetModifierVRIK const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OffsetModifierVRIK", modifiers: "&&", def_value: None }]
constexpr OffsetModifierVRIK(OffsetModifierVRIK&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OffsetModifierVRIK(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr OffsetModifierVRIK& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OffsetModifierVRIK& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OffsetModifierVRIK& operator=(OffsetModifierVRIK&& o) noexcept = default;
  constexpr OffsetModifierVRIK& operator=(OffsetModifierVRIK const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get_weight, put=__set_weight))  weight;

constexpr void __set_weight(float_t value) ;

constexpr float_t __get_weight() const;

 RootMotion::FinalIK::VRIK __declspec(property(get=__get_ik, put=__set_ik))  ik;

constexpr void __set_ik(RootMotion::FinalIK::VRIK value) ;

constexpr RootMotion::FinalIK::VRIK __get_ik() const;

 float_t __declspec(property(get=__get_lastTime, put=__set_lastTime))  lastTime;

constexpr void __set_lastTime(float_t value) ;

constexpr float_t __get_lastTime() const;


// Properties

 float_t __declspec(property(get=get_deltaTime))  deltaTime;


// Methods

/// @brief Method get_deltaTime addr 0x120af9c size 0x20 virtual false final false
 float_t get_deltaTime() ;

/// @brief Method OnModifyOffset addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnModifyOffset() ;

/// @brief Method Start addr 0x120afbc size 0x20 virtual true final false
 void Start() ;

/// @brief Method Initiate addr 0x120afdc size 0x68 virtual false final false
 System::Collections::IEnumerator Initiate() ;

/// @brief Method ModifyOffset addr 0x120b06c size 0xd4 virtual false final false
 void ModifyOffset() ;

/// @brief Method OnDestroy addr 0x120b140 size 0x10c virtual true final false
 void OnDestroy() ;

// Ctor Parameters []
explicit OffsetModifierVRIK() ;

/// @brief Method .ctor addr 0x1208fa4 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
NEED_NO_BOX(RootMotion::FinalIK::OffsetModifierVRIK);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::OffsetModifierVRIK, "RootMotion.FinalIK", "OffsetModifierVRIK");
NEED_NO_BOX(RootMotion::FinalIK::RootMotion__FinalIK__OffsetModifierVRIK___Initiate_d__7);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::RootMotion__FinalIK__OffsetModifierVRIK___Initiate_d__7, "RootMotion.FinalIK", "OffsetModifierVRIK/<Initiate>d__7");
