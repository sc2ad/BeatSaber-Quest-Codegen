#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstddef>
#include <cstdint>
namespace GlobalNamespace {
struct GlobalNamespace__BloomPrePassNonLightPass__ExecutionTimeType;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class RenderTexture;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__BloomPrePassNonLightPass__ExecutionTimeType;
}
namespace GlobalNamespace {
class BloomPrePassNonLightPass;
}
// Type: ::ExecutionTimeType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14638))
// CS Name: BloomPrePassNonLightPass::ExecutionTimeType
struct CORDL_TYPE GlobalNamespace__BloomPrePassNonLightPass__ExecutionTimeType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__BloomPrePassNonLightPass__ExecutionTimeType(int32_t value__) noexcept;


                    constexpr GlobalNamespace__BloomPrePassNonLightPass__ExecutionTimeType(GlobalNamespace__BloomPrePassNonLightPass__ExecutionTimeType const&) = default;
                    constexpr GlobalNamespace__BloomPrePassNonLightPass__ExecutionTimeType(GlobalNamespace__BloomPrePassNonLightPass__ExecutionTimeType&&) = default;
                    constexpr GlobalNamespace__BloomPrePassNonLightPass__ExecutionTimeType& operator=(GlobalNamespace__BloomPrePassNonLightPass__ExecutionTimeType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__BloomPrePassNonLightPass__ExecutionTimeType& operator=(GlobalNamespace__BloomPrePassNonLightPass__ExecutionTimeType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__BloomPrePassNonLightPass__ExecutionTimeType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__BloomPrePassNonLightPass__ExecutionTimeType_Unwrapped : int32_t {
__None = 0,
__BeforeBlur = 1,
__AfterBlur = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__BloomPrePassNonLightPass__ExecutionTimeType_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__BloomPrePassNonLightPass__ExecutionTimeType_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static GlobalNamespace::GlobalNamespace__BloomPrePassNonLightPass__ExecutionTimeType const None;

/// @brief Field BeforeBlur offset 0
static GlobalNamespace::GlobalNamespace__BloomPrePassNonLightPass__ExecutionTimeType const BeforeBlur;

/// @brief Field AfterBlur offset 0
static GlobalNamespace::GlobalNamespace__BloomPrePassNonLightPass__ExecutionTimeType const AfterBlur;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::BloomPrePassNonLightPass
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14639))
// CS Name: BloomPrePassNonLightPass
class CORDL_TYPE BloomPrePassNonLightPass : public UnityEngine::MonoBehaviour {
public:
// Declarations
using ExecutionTimeType = GlobalNamespace::GlobalNamespace__BloomPrePassNonLightPass__ExecutionTimeType;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~BloomPrePassNonLightPass() = default;

// Ctor Parameters [CppParam { name: "", ty: "BloomPrePassNonLightPass", modifiers: " const&", def_value: None }]
constexpr BloomPrePassNonLightPass(BloomPrePassNonLightPass const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BloomPrePassNonLightPass", modifiers: "&&", def_value: None }]
constexpr BloomPrePassNonLightPass(BloomPrePassNonLightPass&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BloomPrePassNonLightPass(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr BloomPrePassNonLightPass& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BloomPrePassNonLightPass& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BloomPrePassNonLightPass& operator=(BloomPrePassNonLightPass&& o) noexcept = default;
  constexpr BloomPrePassNonLightPass& operator=(BloomPrePassNonLightPass const& o) noexcept = default;
                


// Fields

 GlobalNamespace::GlobalNamespace__BloomPrePassNonLightPass__ExecutionTimeType __declspec(property(get=__get__executionTimeType, put=__set__executionTimeType))  _executionTimeType;

constexpr void __set__executionTimeType(GlobalNamespace::GlobalNamespace__BloomPrePassNonLightPass__ExecutionTimeType value) ;

constexpr GlobalNamespace::GlobalNamespace__BloomPrePassNonLightPass__ExecutionTimeType __get__executionTimeType() const;

static System::Collections::Generic::List_1<GlobalNamespace::BloomPrePassNonLightPass> __declspec(property(get=__get__bloomPrePassAfterBlurList, put=__set__bloomPrePassAfterBlurList))  _bloomPrePassAfterBlurList;

static void __set__bloomPrePassAfterBlurList(System::Collections::Generic::List_1<GlobalNamespace::BloomPrePassNonLightPass> value) ;

static System::Collections::Generic::List_1<GlobalNamespace::BloomPrePassNonLightPass> __get__bloomPrePassAfterBlurList() ;

static System::Collections::Generic::List_1<GlobalNamespace::BloomPrePassNonLightPass> __declspec(property(get=__get__bloomPrePassBeforeBlurList, put=__set__bloomPrePassBeforeBlurList))  _bloomPrePassBeforeBlurList;

static void __set__bloomPrePassBeforeBlurList(System::Collections::Generic::List_1<GlobalNamespace::BloomPrePassNonLightPass> value) ;

static System::Collections::Generic::List_1<GlobalNamespace::BloomPrePassNonLightPass> __get__bloomPrePassBeforeBlurList() ;

 GlobalNamespace::GlobalNamespace__BloomPrePassNonLightPass__ExecutionTimeType __declspec(property(get=__get__registeredExecutionTimeType, put=__set__registeredExecutionTimeType))  _registeredExecutionTimeType;

constexpr void __set__registeredExecutionTimeType(GlobalNamespace::GlobalNamespace__BloomPrePassNonLightPass__ExecutionTimeType value) ;

constexpr GlobalNamespace::GlobalNamespace__BloomPrePassNonLightPass__ExecutionTimeType __get__registeredExecutionTimeType() const;


// Properties

 GlobalNamespace::GlobalNamespace__BloomPrePassNonLightPass__ExecutionTimeType __declspec(property(get=get_executionTimeType))  executionTimeType;

static System::Collections::Generic::List_1<GlobalNamespace::BloomPrePassNonLightPass> __declspec(property(get=get_bloomPrePassAfterBlurList))  bloomPrePassAfterBlurList;

static System::Collections::Generic::List_1<GlobalNamespace::BloomPrePassNonLightPass> __declspec(property(get=get_bloomPrePassBeforeBlurList))  bloomPrePassBeforeBlurList;


// Methods

/// @brief Method get_executionTimeType addr 0x1f94ec4 size 0x8 virtual false final false
 GlobalNamespace::GlobalNamespace__BloomPrePassNonLightPass__ExecutionTimeType get_executionTimeType() ;

/// @brief Method get_bloomPrePassAfterBlurList addr 0x1f94ecc size 0x58 virtual false final false
static System::Collections::Generic::List_1<GlobalNamespace::BloomPrePassNonLightPass> get_bloomPrePassAfterBlurList() ;

/// @brief Method get_bloomPrePassBeforeBlurList addr 0x1f94f24 size 0x58 virtual false final false
static System::Collections::Generic::List_1<GlobalNamespace::BloomPrePassNonLightPass> get_bloomPrePassBeforeBlurList() ;

/// @brief Method OnEnable addr 0x1f9395c size 0x4 virtual true final false
 void OnEnable() ;

/// @brief Method OnDisable addr 0x1f94f7c size 0x4 virtual true final false
 void OnDisable() ;

/// @brief Method Register addr 0x1f937f0 size 0x124 virtual false final false
 void Register() ;

/// @brief Method Unregister addr 0x1f93734 size 0xbc virtual false final false
 void Unregister() ;

/// @brief Method OnValidate addr 0x1f94328 size 0x2c virtual true final false
 void OnValidate() ;

/// @brief Method Render addr 0x0 size 0xffffffffffffffff virtual true final false
 void Render(UnityEngine::RenderTexture dest, UnityEngine::Matrix4x4 viewMatrix, UnityEngine::Matrix4x4 projectionMatrix) ;

static GlobalNamespace::BloomPrePassNonLightPass New_ctor() ;

/// @brief Method .ctor addr 0x1f920c4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__BloomPrePassNonLightPass__ExecutionTimeType, "", "BloomPrePassNonLightPass/ExecutionTimeType");
NEED_NO_BOX(GlobalNamespace::BloomPrePassNonLightPass);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BloomPrePassNonLightPass, "", "BloomPrePassNonLightPass");
