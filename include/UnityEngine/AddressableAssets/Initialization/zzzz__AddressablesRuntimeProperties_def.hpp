#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Reflection {
class Assembly;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class Stack_1;
}
// Forward declare root types
namespace UnityEngine::AddressableAssets::Initialization {
class AddressablesRuntimeProperties;
}
// Type: UnityEngine.AddressableAssets.Initialization::AddressablesRuntimeProperties
namespace UnityEngine::AddressableAssets::Initialization {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14397))
// CS Name: UnityEngine.AddressableAssets.Initialization.AddressablesRuntimeProperties
class CORDL_TYPE AddressablesRuntimeProperties : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~AddressablesRuntimeProperties() = default;

// Ctor Parameters [CppParam { name: "", ty: "AddressablesRuntimeProperties", modifiers: " const&", def_value: None }]
constexpr AddressablesRuntimeProperties(AddressablesRuntimeProperties const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AddressablesRuntimeProperties", modifiers: "&&", def_value: None }]
constexpr AddressablesRuntimeProperties(AddressablesRuntimeProperties&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AddressablesRuntimeProperties(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AddressablesRuntimeProperties& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AddressablesRuntimeProperties& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AddressablesRuntimeProperties& operator=(AddressablesRuntimeProperties&& o) noexcept = default;
  constexpr AddressablesRuntimeProperties& operator=(AddressablesRuntimeProperties const& o) noexcept = default;
                


// Fields

static ::System::Collections::Generic::Stack_1<::StringW> __declspec(property(get=__get_s_TokenStack, put=__set_s_TokenStack))  s_TokenStack;

static void __set_s_TokenStack(::System::Collections::Generic::Stack_1<::StringW> value) ;

static ::System::Collections::Generic::Stack_1<::StringW> __get_s_TokenStack() ;

static ::System::Collections::Generic::Stack_1<int32_t> __declspec(property(get=__get_s_TokenStartStack, put=__set_s_TokenStartStack))  s_TokenStartStack;

static void __set_s_TokenStartStack(::System::Collections::Generic::Stack_1<int32_t> value) ;

static ::System::Collections::Generic::Stack_1<int32_t> __get_s_TokenStartStack() ;

static bool __declspec(property(get=__get_s_StaticStacksAreInUse, put=__set_s_StaticStacksAreInUse))  s_StaticStacksAreInUse;

static void __set_s_StaticStacksAreInUse(bool value) ;

static bool __get_s_StaticStacksAreInUse() ;

static ::System::Collections::Generic::Dictionary_2<::StringW,::StringW> __declspec(property(get=__get_s_CachedValues, put=__set_s_CachedValues))  s_CachedValues;

static void __set_s_CachedValues(::System::Collections::Generic::Dictionary_2<::StringW,::StringW> value) ;

static ::System::Collections::Generic::Dictionary_2<::StringW,::StringW> __get_s_CachedValues() ;


// Methods

/// @brief Method GetAssemblies addr 0x289dd78 size 0x20 virtual false final false
static ::ArrayW<::System::Reflection::Assembly> GetAssemblies() ;

/// @brief Method GetCachedValueCount addr 0x289dd98 size 0x78 virtual false final false
static int32_t GetCachedValueCount() ;

/// @brief Method SetPropertyValue addr 0x289de10 size 0x90 virtual false final false
static void SetPropertyValue(::StringW name, ::StringW val) ;

/// @brief Method ClearCachedPropertyValues addr 0x289dea0 size 0x78 virtual false final false
static void ClearCachedPropertyValues() ;

/// @brief Method EvaluateProperty addr 0x289df18 size 0x438 virtual false final false
static ::StringW EvaluateProperty(::StringW name) ;

/// @brief Method EvaluateString addr 0x288a8e4 size 0xac virtual false final false
static ::StringW EvaluateString(::StringW input) ;

/// @brief Method EvaluateString addr 0x289e350 size 0x58c virtual false final false
static ::StringW EvaluateString(::StringW inputString, char16_t startDelimiter, char16_t endDelimiter, ::System::Func_2<::StringW,::StringW> varFunc) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::AddressableAssets::Initialization
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::AddressableAssets::Initialization::AddressablesRuntimeProperties);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::Initialization::AddressablesRuntimeProperties, "UnityEngine.AddressableAssets.Initialization", "AddressablesRuntimeProperties");
