#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace {
namespace UnityEngine {
class TerrainData;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace HoudiniEngineUnity {
class Test_TerrainData;
}
namespace System {
template<typename TInput,typename TOutput>
class Converter_2;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class Test_TerrainData_Extensions;
}
namespace HoudiniEngineUnity {
class ____HoudiniEngineUnity__Test_TerrainData_Extensions____c;
}
// Type: ::<>c
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9884))
// CS Name: HoudiniEngineUnity.Test_TerrainData_Extensions::<>c
class CORDL_TYPE ____HoudiniEngineUnity__Test_TerrainData_Extensions____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~____HoudiniEngineUnity__Test_TerrainData_Extensions____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "____HoudiniEngineUnity__Test_TerrainData_Extensions____c", modifiers: " const&", def_value: None }]
constexpr ____HoudiniEngineUnity__Test_TerrainData_Extensions____c(____HoudiniEngineUnity__Test_TerrainData_Extensions____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____HoudiniEngineUnity__Test_TerrainData_Extensions____c", modifiers: "&&", def_value: None }]
constexpr ____HoudiniEngineUnity__Test_TerrainData_Extensions____c(____HoudiniEngineUnity__Test_TerrainData_Extensions____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____HoudiniEngineUnity__Test_TerrainData_Extensions____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____HoudiniEngineUnity__Test_TerrainData_Extensions____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____HoudiniEngineUnity__Test_TerrainData_Extensions____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____HoudiniEngineUnity__Test_TerrainData_Extensions____c& operator=(____HoudiniEngineUnity__Test_TerrainData_Extensions____c&& o) noexcept = default;
  constexpr ____HoudiniEngineUnity__Test_TerrainData_Extensions____c& operator=(____HoudiniEngineUnity__Test_TerrainData_Extensions____c const& o) noexcept = default;
                


// Fields

static ::HoudiniEngineUnity::____HoudiniEngineUnity__Test_TerrainData_Extensions____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(::HoudiniEngineUnity::____HoudiniEngineUnity__Test_TerrainData_Extensions____c value) ;

static ::HoudiniEngineUnity::____HoudiniEngineUnity__Test_TerrainData_Extensions____c __get___9() ;

static ::System::Converter_2<::UnityEngine::TerrainData,::HoudiniEngineUnity::Test_TerrainData> __declspec(property(get=__get___9__1_0, put=__set___9__1_0))  __9__1_0;

static void __set___9__1_0(::System::Converter_2<::UnityEngine::TerrainData,::HoudiniEngineUnity::Test_TerrainData> value) ;

static ::System::Converter_2<::UnityEngine::TerrainData,::HoudiniEngineUnity::Test_TerrainData> __get___9__1_0() ;

static ::System::Converter_2<::UnityEngine::TerrainData,::HoudiniEngineUnity::Test_TerrainData> __declspec(property(get=__get___9__2_0, put=__set___9__2_0))  __9__2_0;

static void __set___9__2_0(::System::Converter_2<::UnityEngine::TerrainData,::HoudiniEngineUnity::Test_TerrainData> value) ;

static ::System::Converter_2<::UnityEngine::TerrainData,::HoudiniEngineUnity::Test_TerrainData> __get___9__2_0() ;


// Methods

// Ctor Parameters []
explicit ____HoudiniEngineUnity__Test_TerrainData_Extensions____c() ;

/// @brief Method .ctor addr 0x2076834 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <ToTestObject>b__1_0 addr 0x207683c size 0x64 virtual false final false
 ::HoudiniEngineUnity::Test_TerrainData _ToTestObject_b__1_0(::UnityEngine::TerrainData lod) ;

/// @brief Method <ToTestObject>b__2_0 addr 0x20768a0 size 0x64 virtual false final false
 ::HoudiniEngineUnity::Test_TerrainData _ToTestObject_b__2_0(::UnityEngine::TerrainData lod) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: HoudiniEngineUnity::Test_TerrainData_Extensions
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9885))
// CS Name: HoudiniEngineUnity.Test_TerrainData_Extensions
class CORDL_TYPE Test_TerrainData_Extensions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c = ::HoudiniEngineUnity::____HoudiniEngineUnity__Test_TerrainData_Extensions____c;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Test_TerrainData_Extensions() = default;

// Ctor Parameters [CppParam { name: "", ty: "Test_TerrainData_Extensions", modifiers: " const&", def_value: None }]
constexpr Test_TerrainData_Extensions(Test_TerrainData_Extensions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Test_TerrainData_Extensions", modifiers: "&&", def_value: None }]
constexpr Test_TerrainData_Extensions(Test_TerrainData_Extensions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Test_TerrainData_Extensions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Test_TerrainData_Extensions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Test_TerrainData_Extensions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Test_TerrainData_Extensions& operator=(Test_TerrainData_Extensions&& o) noexcept = default;
  constexpr Test_TerrainData_Extensions& operator=(Test_TerrainData_Extensions const& o) noexcept = default;
                


// Methods

/// @brief Method ToTestObject addr 0x2076578 size 0x64 virtual false final false
static ::HoudiniEngineUnity::Test_TerrainData ToTestObject(::UnityEngine::TerrainData self) ;

/// @brief Method ToTestObject addr 0x20765dc size 0xf8 virtual false final false
static ::ArrayW<::HoudiniEngineUnity::Test_TerrainData> ToTestObject(::ArrayW<::UnityEngine::TerrainData> self) ;

/// @brief Method ToTestObject addr 0x20766d4 size 0xfc virtual false final false
static ::System::Collections::Generic::List_1<::HoudiniEngineUnity::Test_TerrainData> ToTestObject(::System::Collections::Generic::List_1<::UnityEngine::TerrainData> self) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
} // end anonymous namespace
NEED_NO_BOX(::HoudiniEngineUnity::Test_TerrainData_Extensions);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::Test_TerrainData_Extensions, "HoudiniEngineUnity", "Test_TerrainData_Extensions");
NEED_NO_BOX(::HoudiniEngineUnity::____HoudiniEngineUnity__Test_TerrainData_Extensions____c);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::____HoudiniEngineUnity__Test_TerrainData_Extensions____c, "HoudiniEngineUnity", "Test_TerrainData_Extensions/<>c");
