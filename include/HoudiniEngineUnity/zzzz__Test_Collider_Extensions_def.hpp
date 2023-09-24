#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace System {
template<typename TInput,typename TOutput>
class Converter_2;
}
namespace HoudiniEngineUnity {
class Test_Collider;
}
namespace UnityEngine {
class Collider;
}
namespace HoudiniEngineUnity {
class HoudiniEngineUnity__Test_Collider_Extensions____c;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HoudiniEngineUnity__Test_Collider_Extensions____c;
}
namespace HoudiniEngineUnity {
class Test_Collider_Extensions;
}
// Type: ::<>c
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9855))
// CS Name: HoudiniEngineUnity.Test_Collider_Extensions::<>c
class CORDL_TYPE HoudiniEngineUnity__Test_Collider_Extensions____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~HoudiniEngineUnity__Test_Collider_Extensions____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__Test_Collider_Extensions____c", modifiers: " const&", def_value: None }]
constexpr HoudiniEngineUnity__Test_Collider_Extensions____c(HoudiniEngineUnity__Test_Collider_Extensions____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__Test_Collider_Extensions____c", modifiers: "&&", def_value: None }]
constexpr HoudiniEngineUnity__Test_Collider_Extensions____c(HoudiniEngineUnity__Test_Collider_Extensions____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__Test_Collider_Extensions____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HoudiniEngineUnity__Test_Collider_Extensions____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HoudiniEngineUnity__Test_Collider_Extensions____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HoudiniEngineUnity__Test_Collider_Extensions____c& operator=(HoudiniEngineUnity__Test_Collider_Extensions____c&& o) noexcept = default;
  constexpr HoudiniEngineUnity__Test_Collider_Extensions____c& operator=(HoudiniEngineUnity__Test_Collider_Extensions____c const& o) noexcept = default;
                


// Fields

static HoudiniEngineUnity::HoudiniEngineUnity__Test_Collider_Extensions____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(HoudiniEngineUnity::HoudiniEngineUnity__Test_Collider_Extensions____c value) ;

static HoudiniEngineUnity::HoudiniEngineUnity__Test_Collider_Extensions____c __get___9() ;

static System::Converter_2<UnityEngine::Collider,HoudiniEngineUnity::Test_Collider> __declspec(property(get=__get___9__1_0, put=__set___9__1_0))  __9__1_0;

static void __set___9__1_0(System::Converter_2<UnityEngine::Collider,HoudiniEngineUnity::Test_Collider> value) ;

static System::Converter_2<UnityEngine::Collider,HoudiniEngineUnity::Test_Collider> __get___9__1_0() ;

static System::Converter_2<UnityEngine::Collider,HoudiniEngineUnity::Test_Collider> __declspec(property(get=__get___9__2_0, put=__set___9__2_0))  __9__2_0;

static void __set___9__2_0(System::Converter_2<UnityEngine::Collider,HoudiniEngineUnity::Test_Collider> value) ;

static System::Converter_2<UnityEngine::Collider,HoudiniEngineUnity::Test_Collider> __get___9__2_0() ;


// Methods

static HoudiniEngineUnity::HoudiniEngineUnity__Test_Collider_Extensions____c New_ctor() ;

/// @brief Method .ctor addr 0x2072d80 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <ToTestObject>b__1_0 addr 0x2072d88 size 0x64 virtual false final false
 HoudiniEngineUnity::Test_Collider _ToTestObject_b__1_0(UnityEngine::Collider lod) ;

/// @brief Method <ToTestObject>b__2_0 addr 0x2072dec size 0x64 virtual false final false
 HoudiniEngineUnity::Test_Collider _ToTestObject_b__2_0(UnityEngine::Collider lod) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: HoudiniEngineUnity::Test_Collider_Extensions
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9856))
// CS Name: HoudiniEngineUnity.Test_Collider_Extensions
class CORDL_TYPE Test_Collider_Extensions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c = HoudiniEngineUnity::HoudiniEngineUnity__Test_Collider_Extensions____c;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Test_Collider_Extensions() = default;

// Ctor Parameters [CppParam { name: "", ty: "Test_Collider_Extensions", modifiers: " const&", def_value: None }]
constexpr Test_Collider_Extensions(Test_Collider_Extensions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Test_Collider_Extensions", modifiers: "&&", def_value: None }]
constexpr Test_Collider_Extensions(Test_Collider_Extensions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Test_Collider_Extensions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Test_Collider_Extensions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Test_Collider_Extensions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Test_Collider_Extensions& operator=(Test_Collider_Extensions&& o) noexcept = default;
  constexpr Test_Collider_Extensions& operator=(Test_Collider_Extensions const& o) noexcept = default;
                


// Methods

/// @brief Method ToTestObject addr 0x206faa4 size 0x64 virtual false final false
static HoudiniEngineUnity::Test_Collider ToTestObject(UnityEngine::Collider self) ;

/// @brief Method ToTestObject addr 0x2072b28 size 0xf8 virtual false final false
static ::ArrayW<HoudiniEngineUnity::Test_Collider> ToTestObject(::ArrayW<UnityEngine::Collider> self) ;

/// @brief Method ToTestObject addr 0x2072c20 size 0xfc virtual false final false
static System::Collections::Generic::List_1<HoudiniEngineUnity::Test_Collider> ToTestObject(System::Collections::Generic::List_1<UnityEngine::Collider> self) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(HoudiniEngineUnity::HoudiniEngineUnity__Test_Collider_Extensions____c);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HoudiniEngineUnity__Test_Collider_Extensions____c, "HoudiniEngineUnity", "Test_Collider_Extensions/<>c");
NEED_NO_BOX(HoudiniEngineUnity::Test_Collider_Extensions);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::Test_Collider_Extensions, "HoudiniEngineUnity", "Test_Collider_Extensions");
