#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace UnityEngine {
class IntegratedSubsystemDescriptor;
}
namespace UnityEngine {
class SubsystemDescriptor;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::SubsystemsImplementation {
class SubsystemDescriptorWithProvider;
}
// Forward declare root types
namespace UnityEngine::SubsystemsImplementation {
class SubsystemDescriptorStore;
}
// Type: UnityEngine.SubsystemsImplementation::SubsystemDescriptorStore
namespace UnityEngine::SubsystemsImplementation {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15855))
// CS Name: UnityEngine.SubsystemsImplementation.SubsystemDescriptorStore
class CORDL_TYPE SubsystemDescriptorStore : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~SubsystemDescriptorStore() = default;

// Ctor Parameters [CppParam { name: "", ty: "SubsystemDescriptorStore", modifiers: " const&", def_value: None }]
constexpr SubsystemDescriptorStore(SubsystemDescriptorStore const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SubsystemDescriptorStore", modifiers: "&&", def_value: None }]
constexpr SubsystemDescriptorStore(SubsystemDescriptorStore&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SubsystemDescriptorStore(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SubsystemDescriptorStore& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SubsystemDescriptorStore& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SubsystemDescriptorStore& operator=(SubsystemDescriptorStore&& o) noexcept = default;
  constexpr SubsystemDescriptorStore& operator=(SubsystemDescriptorStore const& o) noexcept = default;
                


// Fields

static System::Collections::Generic::List_1<UnityEngine::IntegratedSubsystemDescriptor> __declspec(property(get=__get_s_IntegratedDescriptors, put=__set_s_IntegratedDescriptors))  s_IntegratedDescriptors;

static void __set_s_IntegratedDescriptors(System::Collections::Generic::List_1<UnityEngine::IntegratedSubsystemDescriptor> value) ;

static System::Collections::Generic::List_1<UnityEngine::IntegratedSubsystemDescriptor> __get_s_IntegratedDescriptors() ;

static System::Collections::Generic::List_1<UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider> __declspec(property(get=__get_s_StandaloneDescriptors, put=__set_s_StandaloneDescriptors))  s_StandaloneDescriptors;

static void __set_s_StandaloneDescriptors(System::Collections::Generic::List_1<UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider> value) ;

static System::Collections::Generic::List_1<UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider> __get_s_StandaloneDescriptors() ;

static System::Collections::Generic::List_1<UnityEngine::SubsystemDescriptor> __declspec(property(get=__get_s_DeprecatedDescriptors, put=__set_s_DeprecatedDescriptors))  s_DeprecatedDescriptors;

static void __set_s_DeprecatedDescriptors(System::Collections::Generic::List_1<UnityEngine::SubsystemDescriptor> value) ;

static System::Collections::Generic::List_1<UnityEngine::SubsystemDescriptor> __get_s_DeprecatedDescriptors() ;


// Methods

/// @brief Method RegisterDeprecatedDescriptor addr 0x2ba3084 size 0x78 virtual false final false
static void RegisterDeprecatedDescriptor(UnityEngine::SubsystemDescriptor descriptor) ;

/// @brief Method InitializeManagedDescriptor addr 0x2ba3eb8 size 0xdc virtual false final false
static void InitializeManagedDescriptor(::cordl_internals::intptr_t ptr, UnityEngine::IntegratedSubsystemDescriptor desc) ;

/// @brief Method ClearManagedDescriptors addr 0x2ba3f94 size 0x1e4 virtual false final false
static void ClearManagedDescriptors() ;

/// @brief Method ReportSingleSubsystemAnalytics addr 0x2ba4178 size 0x3c virtual false final false
static void ReportSingleSubsystemAnalytics(::StringW id) ;

/// @brief Method GetSubsystemDescriptors addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void GetSubsystemDescriptors(System::Collections::Generic::List_1<T> descriptors) ;

/// @brief Method AddDescriptorSubset addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TBaseTypeInList,typename TQueryType>
static void AddDescriptorSubset(System::Collections::Generic::List_1<TBaseTypeInList> copyFrom, System::Collections::Generic::List_1<TQueryType> copyTo) ;

/// @brief Method RegisterDescriptor addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TDescriptor,typename TBaseTypeInList>
static void RegisterDescriptor(TDescriptor descriptor, System::Collections::Generic::List_1<TBaseTypeInList> storeInList) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::SubsystemsImplementation
NEED_NO_BOX(UnityEngine::SubsystemsImplementation::SubsystemDescriptorStore);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::SubsystemsImplementation::SubsystemDescriptorStore, "UnityEngine.SubsystemsImplementation", "SubsystemDescriptorStore");
