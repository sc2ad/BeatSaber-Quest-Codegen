#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace System::Collections {
class IEnumerator;
}
namespace RootMotion::FinalIK {
class FullBodyBipedIK;
}
namespace RootMotion::FinalIK {
class RootMotion__FinalIK__OffsetModifier__OffsetLimits;
}
namespace RootMotion::FinalIK {
class RootMotion__FinalIK__OffsetModifier___Initiate_d__8;
}
namespace RootMotion::FinalIK {
class IKEffector;
}
namespace RootMotion::FinalIK {
struct FullBodyBipedEffector;
}
namespace UnityEngine {
struct Quaternion;
}
namespace System {
class IDisposable;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class OffsetModifier;
}
namespace RootMotion::FinalIK {
class RootMotion__FinalIK__OffsetModifier__OffsetLimits;
}
namespace RootMotion::FinalIK {
class RootMotion__FinalIK__OffsetModifier___Initiate_d__8;
}
// Type: ::OffsetLimits
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12596))
// CS Name: RootMotion.FinalIK.OffsetModifier::OffsetLimits
class CORDL_TYPE RootMotion__FinalIK__OffsetModifier__OffsetLimits : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~RootMotion__FinalIK__OffsetModifier__OffsetLimits() = default;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion__FinalIK__OffsetModifier__OffsetLimits", modifiers: " const&", def_value: None }]
constexpr RootMotion__FinalIK__OffsetModifier__OffsetLimits(RootMotion__FinalIK__OffsetModifier__OffsetLimits const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion__FinalIK__OffsetModifier__OffsetLimits", modifiers: "&&", def_value: None }]
constexpr RootMotion__FinalIK__OffsetModifier__OffsetLimits(RootMotion__FinalIK__OffsetModifier__OffsetLimits&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RootMotion__FinalIK__OffsetModifier__OffsetLimits(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RootMotion__FinalIK__OffsetModifier__OffsetLimits& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RootMotion__FinalIK__OffsetModifier__OffsetLimits& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RootMotion__FinalIK__OffsetModifier__OffsetLimits& operator=(RootMotion__FinalIK__OffsetModifier__OffsetLimits&& o) noexcept = default;
  constexpr RootMotion__FinalIK__OffsetModifier__OffsetLimits& operator=(RootMotion__FinalIK__OffsetModifier__OffsetLimits const& o) noexcept = default;
                


// Fields

 RootMotion::FinalIK::FullBodyBipedEffector __declspec(property(get=__get_effector, put=__set_effector))  effector;

constexpr void __set_effector(RootMotion::FinalIK::FullBodyBipedEffector value) ;

constexpr RootMotion::FinalIK::FullBodyBipedEffector __get_effector() const;

 float_t __declspec(property(get=__get_spring, put=__set_spring))  spring;

constexpr void __set_spring(float_t value) ;

constexpr float_t __get_spring() const;

 bool __declspec(property(get=__get_x, put=__set_x))  x;

constexpr void __set_x(bool value) ;

constexpr bool __get_x() const;

 bool __declspec(property(get=__get_y, put=__set_y))  y;

constexpr void __set_y(bool value) ;

constexpr bool __get_y() const;

 bool __declspec(property(get=__get_z, put=__set_z))  z;

constexpr void __set_z(bool value) ;

constexpr bool __get_z() const;

 float_t __declspec(property(get=__get_minX, put=__set_minX))  minX;

constexpr void __set_minX(float_t value) ;

constexpr float_t __get_minX() const;

 float_t __declspec(property(get=__get_maxX, put=__set_maxX))  maxX;

constexpr void __set_maxX(float_t value) ;

constexpr float_t __get_maxX() const;

 float_t __declspec(property(get=__get_minY, put=__set_minY))  minY;

constexpr void __set_minY(float_t value) ;

constexpr float_t __get_minY() const;

 float_t __declspec(property(get=__get_maxY, put=__set_maxY))  maxY;

constexpr void __set_maxY(float_t value) ;

constexpr float_t __get_maxY() const;

 float_t __declspec(property(get=__get_minZ, put=__set_minZ))  minZ;

constexpr void __set_minZ(float_t value) ;

constexpr float_t __get_minZ() const;

 float_t __declspec(property(get=__get_maxZ, put=__set_maxZ))  maxZ;

constexpr void __set_maxZ(float_t value) ;

constexpr float_t __get_maxZ() const;


// Methods

/// @brief Method Apply addr 0x120aac8 size 0x164 virtual false final false
 void Apply(RootMotion::FinalIK::IKEffector e, UnityEngine::Quaternion rootRotation) ;

/// @brief Method SpringAxis addr 0x120ad38 size 0x70 virtual false final false
 float_t SpringAxis(float_t value, float_t min, float_t max) ;

/// @brief Method Spring addr 0x120ada8 size 0x48 virtual false final false
 float_t Spring(float_t value, float_t limit, bool negative) ;

static RootMotion::FinalIK::RootMotion__FinalIK__OffsetModifier__OffsetLimits New_ctor() ;

/// @brief Method .ctor addr 0x120adf0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
// Type: ::<Initiate>d__8
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12597))
// CS Name: RootMotion.FinalIK.OffsetModifier::<Initiate>d__8
class CORDL_TYPE RootMotion__FinalIK__OffsetModifier___Initiate_d__8 : public ::bs_hook::Il2CppWrapperType {
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

virtual ~RootMotion__FinalIK__OffsetModifier___Initiate_d__8() = default;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion__FinalIK__OffsetModifier___Initiate_d__8", modifiers: " const&", def_value: None }]
constexpr RootMotion__FinalIK__OffsetModifier___Initiate_d__8(RootMotion__FinalIK__OffsetModifier___Initiate_d__8 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion__FinalIK__OffsetModifier___Initiate_d__8", modifiers: "&&", def_value: None }]
constexpr RootMotion__FinalIK__OffsetModifier___Initiate_d__8(RootMotion__FinalIK__OffsetModifier___Initiate_d__8&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RootMotion__FinalIK__OffsetModifier___Initiate_d__8(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RootMotion__FinalIK__OffsetModifier___Initiate_d__8& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RootMotion__FinalIK__OffsetModifier___Initiate_d__8& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RootMotion__FinalIK__OffsetModifier___Initiate_d__8& operator=(RootMotion__FinalIK__OffsetModifier___Initiate_d__8&& o) noexcept = default;
  constexpr RootMotion__FinalIK__OffsetModifier___Initiate_d__8& operator=(RootMotion__FinalIK__OffsetModifier___Initiate_d__8 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 RootMotion::FinalIK::OffsetModifier __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(RootMotion::FinalIK::OffsetModifier value) ;

constexpr RootMotion::FinalIK::OffsetModifier __get___4__this() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

static RootMotion::FinalIK::RootMotion__FinalIK__OffsetModifier___Initiate_d__8 New_ctor(int32_t __1__state) ;

/// @brief Method .ctor addr 0x120a9cc size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x120adf8 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x120adfc size 0x150 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x120af4c size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x120af54 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x120af94 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
// Type: RootMotion.FinalIK::OffsetModifier
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12598))
// CS Name: RootMotion.FinalIK.OffsetModifier
class CORDL_TYPE OffsetModifier : public UnityEngine::MonoBehaviour {
public:
// Declarations
using _Initiate_d__8 = RootMotion::FinalIK::RootMotion__FinalIK__OffsetModifier___Initiate_d__8;

using OffsetLimits = RootMotion::FinalIK::RootMotion__FinalIK__OffsetModifier__OffsetLimits;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~OffsetModifier() = default;

// Ctor Parameters [CppParam { name: "", ty: "OffsetModifier", modifiers: " const&", def_value: None }]
constexpr OffsetModifier(OffsetModifier const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OffsetModifier", modifiers: "&&", def_value: None }]
constexpr OffsetModifier(OffsetModifier&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OffsetModifier(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr OffsetModifier& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OffsetModifier& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OffsetModifier& operator=(OffsetModifier&& o) noexcept = default;
  constexpr OffsetModifier& operator=(OffsetModifier const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get_weight, put=__set_weight))  weight;

constexpr void __set_weight(float_t value) ;

constexpr float_t __get_weight() const;

 RootMotion::FinalIK::FullBodyBipedIK __declspec(property(get=__get_ik, put=__set_ik))  ik;

constexpr void __set_ik(RootMotion::FinalIK::FullBodyBipedIK value) ;

constexpr RootMotion::FinalIK::FullBodyBipedIK __get_ik() const;

 float_t __declspec(property(get=__get_lastTime, put=__set_lastTime))  lastTime;

constexpr void __set_lastTime(float_t value) ;

constexpr float_t __get_lastTime() const;


// Properties

 float_t __declspec(property(get=get_deltaTime))  deltaTime;


// Methods

/// @brief Method get_deltaTime addr 0x120741c size 0x20 virtual false final false
 float_t get_deltaTime() ;

/// @brief Method OnModifyOffset addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnModifyOffset() ;

/// @brief Method Start addr 0x12077e4 size 0x20 virtual true final false
 void Start() ;

/// @brief Method Initiate addr 0x120a964 size 0x68 virtual false final false
 System::Collections::IEnumerator Initiate() ;

/// @brief Method ModifyOffset addr 0x120a9f4 size 0xd4 virtual false final false
 void ModifyOffset() ;

/// @brief Method ApplyLimits addr 0x1209e4c size 0xa8 virtual false final false
 void ApplyLimits(::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__OffsetModifier__OffsetLimits> limits) ;

/// @brief Method OnDestroy addr 0x120ac2c size 0x10c virtual true final false
 void OnDestroy() ;

static RootMotion::FinalIK::OffsetModifier New_ctor() ;

/// @brief Method .ctor addr 0x120775c size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
NEED_NO_BOX(RootMotion::FinalIK::OffsetModifier);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::OffsetModifier, "RootMotion.FinalIK", "OffsetModifier");
NEED_NO_BOX(RootMotion::FinalIK::RootMotion__FinalIK__OffsetModifier__OffsetLimits);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::RootMotion__FinalIK__OffsetModifier__OffsetLimits, "RootMotion.FinalIK", "OffsetModifier/OffsetLimits");
NEED_NO_BOX(RootMotion::FinalIK::RootMotion__FinalIK__OffsetModifier___Initiate_d__8);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::RootMotion__FinalIK__OffsetModifier___Initiate_d__8, "RootMotion.FinalIK", "OffsetModifier/<Initiate>d__8");
