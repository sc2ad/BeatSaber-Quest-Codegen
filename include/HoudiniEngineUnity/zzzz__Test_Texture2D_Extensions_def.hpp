#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace System {
template<typename TInput,typename TOutput>
class Converter_2;
}
namespace UnityEngine {
class Texture2D;
}
namespace HoudiniEngineUnity {
class Test_Texture2D;
}
namespace HoudiniEngineUnity {
class HoudiniEngineUnity__Test_Texture2D_Extensions____c;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HoudiniEngineUnity__Test_Texture2D_Extensions____c;
}
namespace HoudiniEngineUnity {
class Test_Texture2D_Extensions;
}
// Type: ::<>c
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9878))
// CS Name: HoudiniEngineUnity.Test_Texture2D_Extensions::<>c
class CORDL_TYPE HoudiniEngineUnity__Test_Texture2D_Extensions____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~HoudiniEngineUnity__Test_Texture2D_Extensions____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__Test_Texture2D_Extensions____c", modifiers: " const&", def_value: None }]
constexpr HoudiniEngineUnity__Test_Texture2D_Extensions____c(HoudiniEngineUnity__Test_Texture2D_Extensions____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__Test_Texture2D_Extensions____c", modifiers: "&&", def_value: None }]
constexpr HoudiniEngineUnity__Test_Texture2D_Extensions____c(HoudiniEngineUnity__Test_Texture2D_Extensions____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__Test_Texture2D_Extensions____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HoudiniEngineUnity__Test_Texture2D_Extensions____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HoudiniEngineUnity__Test_Texture2D_Extensions____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HoudiniEngineUnity__Test_Texture2D_Extensions____c& operator=(HoudiniEngineUnity__Test_Texture2D_Extensions____c&& o) noexcept = default;
  constexpr HoudiniEngineUnity__Test_Texture2D_Extensions____c& operator=(HoudiniEngineUnity__Test_Texture2D_Extensions____c const& o) noexcept = default;
                


// Fields

static HoudiniEngineUnity::HoudiniEngineUnity__Test_Texture2D_Extensions____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(HoudiniEngineUnity::HoudiniEngineUnity__Test_Texture2D_Extensions____c value) ;

static HoudiniEngineUnity::HoudiniEngineUnity__Test_Texture2D_Extensions____c __get___9() ;

static System::Converter_2<UnityEngine::Texture2D,HoudiniEngineUnity::Test_Texture2D> __declspec(property(get=__get___9__1_0, put=__set___9__1_0))  __9__1_0;

static void __set___9__1_0(System::Converter_2<UnityEngine::Texture2D,HoudiniEngineUnity::Test_Texture2D> value) ;

static System::Converter_2<UnityEngine::Texture2D,HoudiniEngineUnity::Test_Texture2D> __get___9__1_0() ;

static System::Converter_2<UnityEngine::Texture2D,HoudiniEngineUnity::Test_Texture2D> __declspec(property(get=__get___9__2_0, put=__set___9__2_0))  __9__2_0;

static void __set___9__2_0(System::Converter_2<UnityEngine::Texture2D,HoudiniEngineUnity::Test_Texture2D> value) ;

static System::Converter_2<UnityEngine::Texture2D,HoudiniEngineUnity::Test_Texture2D> __get___9__2_0() ;


// Methods

static HoudiniEngineUnity::HoudiniEngineUnity__Test_Texture2D_Extensions____c New_ctor() ;

/// @brief Method .ctor addr 0x2075870 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <ToTestObject>b__1_0 addr 0x2075878 size 0x64 virtual false final false
 HoudiniEngineUnity::Test_Texture2D _ToTestObject_b__1_0(UnityEngine::Texture2D lod) ;

/// @brief Method <ToTestObject>b__2_0 addr 0x20758dc size 0x64 virtual false final false
 HoudiniEngineUnity::Test_Texture2D _ToTestObject_b__2_0(UnityEngine::Texture2D lod) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: HoudiniEngineUnity::Test_Texture2D_Extensions
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9879))
// CS Name: HoudiniEngineUnity.Test_Texture2D_Extensions
class CORDL_TYPE Test_Texture2D_Extensions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c = HoudiniEngineUnity::HoudiniEngineUnity__Test_Texture2D_Extensions____c;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Test_Texture2D_Extensions() = default;

// Ctor Parameters [CppParam { name: "", ty: "Test_Texture2D_Extensions", modifiers: " const&", def_value: None }]
constexpr Test_Texture2D_Extensions(Test_Texture2D_Extensions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Test_Texture2D_Extensions", modifiers: "&&", def_value: None }]
constexpr Test_Texture2D_Extensions(Test_Texture2D_Extensions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Test_Texture2D_Extensions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Test_Texture2D_Extensions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Test_Texture2D_Extensions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Test_Texture2D_Extensions& operator=(Test_Texture2D_Extensions&& o) noexcept = default;
  constexpr Test_Texture2D_Extensions& operator=(Test_Texture2D_Extensions const& o) noexcept = default;
                


// Methods

/// @brief Method ToTestObject addr 0x2075098 size 0x64 virtual false final false
static HoudiniEngineUnity::Test_Texture2D ToTestObject(UnityEngine::Texture2D self) ;

/// @brief Method ToTestObject addr 0x2075618 size 0xf8 virtual false final false
static ::ArrayW<HoudiniEngineUnity::Test_Texture2D> ToTestObject(::ArrayW<UnityEngine::Texture2D> self) ;

/// @brief Method ToTestObject addr 0x2075710 size 0xfc virtual false final false
static System::Collections::Generic::List_1<HoudiniEngineUnity::Test_Texture2D> ToTestObject(System::Collections::Generic::List_1<UnityEngine::Texture2D> self) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(HoudiniEngineUnity::HoudiniEngineUnity__Test_Texture2D_Extensions____c);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HoudiniEngineUnity__Test_Texture2D_Extensions____c, "HoudiniEngineUnity", "Test_Texture2D_Extensions/<>c");
NEED_NO_BOX(HoudiniEngineUnity::Test_Texture2D_Extensions);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::Test_Texture2D_Extensions, "HoudiniEngineUnity", "Test_Texture2D_Extensions");
