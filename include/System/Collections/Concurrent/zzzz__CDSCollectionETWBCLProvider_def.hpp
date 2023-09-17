#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Diagnostics/Tracing/zzzz__EventSource_def.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Collections::Concurrent {
class CDSCollectionETWBCLProvider;
}
// Type: System.Collections.Concurrent::CDSCollectionETWBCLProvider
namespace System::Collections::Concurrent {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3732))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3790))
// CS Name: System.Collections.Concurrent.CDSCollectionETWBCLProvider
class CORDL_TYPE CDSCollectionETWBCLProvider : public ::System::Diagnostics::Tracing::EventSource {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~CDSCollectionETWBCLProvider() = default;

// Ctor Parameters [CppParam { name: "", ty: "CDSCollectionETWBCLProvider", modifiers: " const&", def_value: None }]
constexpr CDSCollectionETWBCLProvider(CDSCollectionETWBCLProvider const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CDSCollectionETWBCLProvider", modifiers: "&&", def_value: None }]
constexpr CDSCollectionETWBCLProvider(CDSCollectionETWBCLProvider&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CDSCollectionETWBCLProvider(void* ptr) noexcept : ::System::Diagnostics::Tracing::EventSource(ptr) {
}


  constexpr CDSCollectionETWBCLProvider& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CDSCollectionETWBCLProvider& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CDSCollectionETWBCLProvider& operator=(CDSCollectionETWBCLProvider&& o) noexcept = default;
  constexpr CDSCollectionETWBCLProvider& operator=(CDSCollectionETWBCLProvider const& o) noexcept = default;
                


// Fields

static ::System::Collections::Concurrent::CDSCollectionETWBCLProvider __declspec(property(get=__get_Log, put=__set_Log))  Log;

static void __set_Log(::System::Collections::Concurrent::CDSCollectionETWBCLProvider value) ;

static ::System::Collections::Concurrent::CDSCollectionETWBCLProvider __get_Log() ;


// Methods

// Ctor Parameters []
explicit CDSCollectionETWBCLProvider() ;

/// @brief Method .ctor addr 0x241dde4 size 0x4 virtual false final false
 void _ctor() ;

/// @brief Method ConcurrentDictionary_AcquiringAllLocks addr 0x241dde8 size 0x4 virtual false final false
 void ConcurrentDictionary_AcquiringAllLocks(int32_t numOfBuckets) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Concurrent
} // end anonymous namespace
NEED_NO_BOX(::System::Collections::Concurrent::CDSCollectionETWBCLProvider);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::Concurrent::CDSCollectionETWBCLProvider, "System.Collections.Concurrent", "CDSCollectionETWBCLProvider");
