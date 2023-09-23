#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
class GameObject;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace HoudiniEngineUnity {
template<typename T>
class IEquivableWrapperClass_1;
}
namespace HoudiniEngineUnity {
template<typename T>
class IEquivable_1;
}
namespace HoudiniEngineUnity {
struct HAPI_AttributeInfo;
}
namespace System {
struct Int32Enum;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace HoudiniEngineUnity {
template<typename T>
class HoudiniEngineUnity__HEU_TestHelpers__RequireClass_1;
}
namespace HoudiniEngineUnity {
template<typename T>
class HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1;
}
namespace HoudiniEngineUnity {
class HEU_TestHelpers;
}
namespace HoudiniEngineUnity {
template<::cordl_internals::il2cpp_reference_type T>
class HoudiniEngineUnity__HEU_TestHelpers__RequireClass_1<T>;
}
namespace HoudiniEngineUnity {
template<>
class HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1<HoudiniEngineUnity::HAPI_AttributeInfo>;
}
namespace HoudiniEngineUnity {
template<>
class HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1<System::Int32Enum>;
}
namespace HoudiniEngineUnity {
template<>
class HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1<UnityEngine::Color>;
}
namespace HoudiniEngineUnity {
template<>
class HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1<UnityEngine::Matrix4x4>;
}
namespace HoudiniEngineUnity {
template<>
class HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1<UnityEngine::Quaternion>;
}
namespace HoudiniEngineUnity {
template<>
class HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1<UnityEngine::Vector2>;
}
namespace HoudiniEngineUnity {
template<>
class HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1<UnityEngine::Vector3>;
}
namespace HoudiniEngineUnity {
template<>
class HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1<bool>;
}
namespace HoudiniEngineUnity {
template<>
class HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1<float_t>;
}
namespace HoudiniEngineUnity {
template<>
class HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1<int32_t>;
}
// Type: ::RequireStruct`1
// Type: ::RequireClass`1
// Type: HoudiniEngineUnity::HEU_TestHelpers
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9828))
// CS Name: HoudiniEngineUnity.HEU_TestHelpers
class CORDL_TYPE HEU_TestHelpers : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
template<typename T>
using RequireClass_1 = HoudiniEngineUnity::HoudiniEngineUnity__HEU_TestHelpers__RequireClass_1<T>;

template<typename T>
using RequireStruct_1 = HoudiniEngineUnity::HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1<T>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~HEU_TestHelpers() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_TestHelpers", modifiers: " const&", def_value: None }]
constexpr HEU_TestHelpers(HEU_TestHelpers const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_TestHelpers", modifiers: "&&", def_value: None }]
constexpr HEU_TestHelpers(HEU_TestHelpers&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_TestHelpers(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HEU_TestHelpers& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_TestHelpers& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_TestHelpers& operator=(HEU_TestHelpers&& o) noexcept = default;
  constexpr HEU_TestHelpers& operator=(HEU_TestHelpers const& o) noexcept = default;
                


// Methods

/// @brief Method AssertTrueLogEquivalent addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static bool AssertTrueLogEquivalent(T a, T b, ByRef<bool> result, ::StringW header, ::StringW subject, ::StringW optional1, ::StringW optional2, ::StringW optional3, HoudiniEngineUnity::HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1<T> _) ;

/// @brief Method AssertTrueLogEquivalent addr 0x206eb28 size 0x114 virtual false final false
static bool AssertTrueLogEquivalent(UnityEngine::GameObject a, UnityEngine::GameObject b, ByRef<bool> result, ::StringW header, ::StringW subject, ::StringW optional1, ::StringW optional2, ::StringW optional3) ;

/// @brief Method AssertTrueLogEquivalent addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static bool AssertTrueLogEquivalent(HoudiniEngineUnity::IEquivable_1<T> a, HoudiniEngineUnity::IEquivable_1<T> b, ByRef<bool> result, ::StringW header, ::StringW subject, ::StringW optional1, ::StringW optional2, ::StringW optional3) ;

/// @brief Method AssertTrueLogEquivalent addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static bool AssertTrueLogEquivalent(HoudiniEngineUnity::IEquivableWrapperClass_1<T> a, HoudiniEngineUnity::IEquivableWrapperClass_1<T> b, ByRef<bool> result, ::StringW header, ::StringW subject, ::StringW optional1, ::StringW optional2, ::StringW optional3) ;

/// @brief Method AssertTrueLogEquivalent addr 0x206f7ac size 0x9c virtual false final false
static bool AssertTrueLogEquivalent(::StringW a, ::StringW b, ByRef<bool> result, ::StringW header, ::StringW subject, ::StringW optional1, ::StringW optional2, ::StringW optional3) ;

/// @brief Method AssertTrueLogEquivalent addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static bool AssertTrueLogEquivalent(System::Collections::Generic::List_1<T> a, System::Collections::Generic::List_1<T> b, ByRef<bool> result, ::StringW header, ::StringW subject, ::StringW optional1, ::StringW optional2, ::StringW optional3, HoudiniEngineUnity::HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1<T> _) ;

/// @brief Method AssertTrueLogEquivalent addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static bool AssertTrueLogEquivalent(System::Collections::Generic::List_1<T> a, System::Collections::Generic::List_1<T> b, ByRef<bool> result, ::StringW header, ::StringW subject, ::StringW optional1, ::StringW optional2, ::StringW optional3, HoudiniEngineUnity::HoudiniEngineUnity__HEU_TestHelpers__RequireClass_1<T> _) ;

/// @brief Method AssertTrueLogEquivalent addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static bool AssertTrueLogEquivalent(System::Collections::Generic::List_1<HoudiniEngineUnity::IEquivable_1<T>> a, System::Collections::Generic::List_1<HoudiniEngineUnity::IEquivable_1<T>> b, ByRef<bool> result, ::StringW header, ::StringW subject, ::StringW optional1, ::StringW optional2, ::StringW optional3) ;

/// @brief Method AssertTrueLogEquivalent addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static bool AssertTrueLogEquivalent(System::Collections::Generic::List_1<HoudiniEngineUnity::IEquivableWrapperClass_1<T>> a, System::Collections::Generic::List_1<HoudiniEngineUnity::IEquivableWrapperClass_1<T>> b, ByRef<bool> result, ::StringW header, ::StringW subject, ::StringW optional1, ::StringW optional2, ::StringW optional3) ;

/// @brief Method AssertTrueLogEquivalent addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static bool AssertTrueLogEquivalent(::ArrayW<T> a, ::ArrayW<T> b, ByRef<bool> result, ::StringW header, ::StringW subject, ::StringW optional1, ::StringW optional2, ::StringW optional3) ;

/// @brief Method AssertTrueLogEquivalent addr 0x206f89c size 0x140 virtual false final false
static bool AssertTrueLogEquivalent(::ArrayW<::StringW> a, ::ArrayW<::StringW> b, ByRef<bool> result, ::StringW header, ::StringW subject, ::StringW optional1, ::StringW optional2, ::StringW optional3) ;

/// @brief Method AssertTrueLogEquivalent addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static bool AssertTrueLogEquivalent(::ArrayW<HoudiniEngineUnity::IEquivable_1<T>> a, ::ArrayW<HoudiniEngineUnity::IEquivable_1<T>> b, ByRef<bool> result, ::StringW header, ::StringW subject, ::StringW optional1, ::StringW optional2, ::StringW optional3) ;

/// @brief Method AssertTrueLogEquivalent addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static bool AssertTrueLogEquivalent(::ArrayW<HoudiniEngineUnity::IEquivableWrapperClass_1<T>> a, ::ArrayW<HoudiniEngineUnity::IEquivableWrapperClass_1<T>> b, ByRef<bool> result, ::StringW header, ::StringW subject, ::StringW optional1, ::StringW optional2, ::StringW optional3) ;

/// @brief Method PrintTestLogAndSetResult addr 0x206f64c size 0x160 virtual false final false
static void PrintTestLogAndSetResult(bool expression, ByRef<bool> result, ::StringW header, ::StringW subject, ::StringW optional1, ::StringW optional2, ::StringW optional3) ;

/// @brief Method ShouldBeTested addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static bool ShouldBeTested(T a, T b, ByRef<bool> bResult, ::StringW header, ::StringW subject) ;

/// @brief Method ShouldBeTested addr 0x206ec3c size 0x35c virtual false final false
static bool ShouldBeTested(UnityEngine::GameObject a, UnityEngine::GameObject b, ByRef<bool> bResult, ::StringW header, ::StringW subject) ;

/// @brief Method ShouldBeTested addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static bool ShouldBeTested(HoudiniEngineUnity::IEquivable_1<T> a, HoudiniEngineUnity::IEquivable_1<T> b, ByRef<bool> bResult, ::StringW header, ::StringW subject) ;

/// @brief Method ShouldBeTested addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static bool ShouldBeTested(HoudiniEngineUnity::IEquivableWrapperClass_1<T> a, HoudiniEngineUnity::IEquivableWrapperClass_1<T> b, ByRef<bool> bResult, ::StringW header, ::StringW subject) ;

/// @brief Method ShouldBeTested addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static bool ShouldBeTested(System::Collections::Generic::List_1<T> a, System::Collections::Generic::List_1<T> b, ByRef<bool> bResult, ::StringW header, ::StringW subject) ;

/// @brief Method ShouldBeTested addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static bool ShouldBeTested(::ArrayW<T> a, ::ArrayW<T> b, ByRef<bool> bResult, ::StringW header, ::StringW subject) ;

/// @brief Method ShouldBeTested addr 0x206f848 size 0x54 virtual false final false
static bool ShouldBeTested(::StringW a, ::StringW b, ByRef<bool> bResult, ::StringW header, ::StringW subject) ;

/// @brief Method TestOutputObjectEquivalence addr 0x206ef98 size 0x6b4 virtual false final false
static bool TestOutputObjectEquivalence(UnityEngine::GameObject a, UnityEngine::GameObject b) ;

// Ctor Parameters []
explicit HEU_TestHelpers() ;

/// @brief Method .ctor addr 0x206fc34 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::RequireStruct`1
namespace HoudiniEngineUnity {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9826))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9826), inst: 92 })
// CS Name: HoudiniEngineUnity.HEU_TestHelpers::RequireStruct`1
class CORDL_TYPE HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1<int32_t> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1", modifiers: " const&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1(HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1", modifiers: "&&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1(HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1& operator=(HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1&& o) noexcept = default;
  constexpr HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1& operator=(HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1 const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::RequireStruct`1
namespace HoudiniEngineUnity {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9826))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9826), inst: 99 })
// CS Name: HoudiniEngineUnity.HEU_TestHelpers::RequireStruct`1
class CORDL_TYPE HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1<bool> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1", modifiers: " const&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1(HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1", modifiers: "&&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1(HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1& operator=(HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1&& o) noexcept = default;
  constexpr HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1& operator=(HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1 const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::RequireStruct`1
namespace HoudiniEngineUnity {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9826))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9826), inst: 280 })
// CS Name: HoudiniEngineUnity.HEU_TestHelpers::RequireStruct`1
class CORDL_TYPE HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1<UnityEngine::Color> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1", modifiers: " const&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1(HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1", modifiers: "&&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1(HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1& operator=(HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1&& o) noexcept = default;
  constexpr HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1& operator=(HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1 const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::RequireStruct`1
namespace HoudiniEngineUnity {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9826))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9826), inst: 374 })
// CS Name: HoudiniEngineUnity.HEU_TestHelpers::RequireStruct`1
class CORDL_TYPE HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1<float_t> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1", modifiers: " const&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1(HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1", modifiers: "&&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1(HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1& operator=(HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1&& o) noexcept = default;
  constexpr HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1& operator=(HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1 const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::RequireStruct`1
namespace HoudiniEngineUnity {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9826))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9826), inst: 393 })
// CS Name: HoudiniEngineUnity.HEU_TestHelpers::RequireStruct`1
class CORDL_TYPE HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1<UnityEngine::Vector2> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1", modifiers: " const&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1(HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1", modifiers: "&&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1(HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1& operator=(HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1&& o) noexcept = default;
  constexpr HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1& operator=(HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1 const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::RequireStruct`1
namespace HoudiniEngineUnity {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9826))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9826), inst: 394 })
// CS Name: HoudiniEngineUnity.HEU_TestHelpers::RequireStruct`1
class CORDL_TYPE HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1<UnityEngine::Vector3> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1", modifiers: " const&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1(HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1", modifiers: "&&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1(HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1& operator=(HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1&& o) noexcept = default;
  constexpr HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1& operator=(HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1 const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::RequireStruct`1
namespace HoudiniEngineUnity {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9826))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9826), inst: 3205 })
// CS Name: HoudiniEngineUnity.HEU_TestHelpers::RequireStruct`1
class CORDL_TYPE HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1<UnityEngine::Matrix4x4> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1", modifiers: " const&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1(HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1", modifiers: "&&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1(HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1& operator=(HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1&& o) noexcept = default;
  constexpr HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1& operator=(HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1 const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::RequireStruct`1
namespace HoudiniEngineUnity {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9826))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9826), inst: 3222 })
// CS Name: HoudiniEngineUnity.HEU_TestHelpers::RequireStruct`1
class CORDL_TYPE HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1<UnityEngine::Quaternion> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1", modifiers: " const&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1(HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1", modifiers: "&&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1(HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1& operator=(HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1&& o) noexcept = default;
  constexpr HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1& operator=(HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1 const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::RequireStruct`1
namespace HoudiniEngineUnity {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9826))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9826), inst: 4825 })
// CS Name: HoudiniEngineUnity.HEU_TestHelpers::RequireStruct`1
class CORDL_TYPE HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1<System::Int32Enum> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1", modifiers: " const&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1(HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1", modifiers: "&&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1(HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1& operator=(HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1&& o) noexcept = default;
  constexpr HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1& operator=(HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1 const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::RequireStruct`1
namespace HoudiniEngineUnity {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9826))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9826), inst: 6990 })
// CS Name: HoudiniEngineUnity.HEU_TestHelpers::RequireStruct`1
class CORDL_TYPE HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1<HoudiniEngineUnity::HAPI_AttributeInfo> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1", modifiers: " const&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1(HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1", modifiers: "&&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1(HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1& operator=(HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1&& o) noexcept = default;
  constexpr HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1& operator=(HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1 const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::RequireClass`1
namespace HoudiniEngineUnity {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9827))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9827), inst: 2 })
// CS Name: HoudiniEngineUnity.HEU_TestHelpers::RequireClass`1
class CORDL_TYPE HoudiniEngineUnity__HEU_TestHelpers__RequireClass_1<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~HoudiniEngineUnity__HEU_TestHelpers__RequireClass_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_TestHelpers__RequireClass_1", modifiers: " const&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_TestHelpers__RequireClass_1(HoudiniEngineUnity__HEU_TestHelpers__RequireClass_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_TestHelpers__RequireClass_1", modifiers: "&&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_TestHelpers__RequireClass_1(HoudiniEngineUnity__HEU_TestHelpers__RequireClass_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__HEU_TestHelpers__RequireClass_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HoudiniEngineUnity__HEU_TestHelpers__RequireClass_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_TestHelpers__RequireClass_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_TestHelpers__RequireClass_1& operator=(HoudiniEngineUnity__HEU_TestHelpers__RequireClass_1&& o) noexcept = default;
  constexpr HoudiniEngineUnity__HEU_TestHelpers__RequireClass_1& operator=(HoudiniEngineUnity__HEU_TestHelpers__RequireClass_1 const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit HoudiniEngineUnity__HEU_TestHelpers__RequireClass_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(HoudiniEngineUnity::HoudiniEngineUnity__HEU_TestHelpers__RequireClass_1, "HoudiniEngineUnity", "HEU_TestHelpers/RequireClass`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(HoudiniEngineUnity::HoudiniEngineUnity__HEU_TestHelpers__RequireStruct_1, "HoudiniEngineUnity", "HEU_TestHelpers/RequireStruct`1");
NEED_NO_BOX(HoudiniEngineUnity::HEU_TestHelpers);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_TestHelpers, "HoudiniEngineUnity", "HEU_TestHelpers");
