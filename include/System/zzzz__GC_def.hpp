#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace System::Runtime::CompilerServices {
struct Ephemeron;
}
// Forward declare root types
namespace System {
class GC;
}
// Type: System::GC
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2561))
// CS Name: System.GC
class CORDL_TYPE GC : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GC() = default;

// Ctor Parameters [CppParam { name: "", ty: "GC", modifiers: " const&", def_value: None }]
constexpr GC(GC const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GC", modifiers: "&&", def_value: None }]
constexpr GC(GC&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GC(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GC& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GC& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GC& operator=(GC&& o) noexcept = default;
  constexpr GC& operator=(GC const& o) noexcept = default;
                


// Fields

static ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_EPHEMERON_TOMBSTONE, put=__set_EPHEMERON_TOMBSTONE))  EPHEMERON_TOMBSTONE;

static void __set_EPHEMERON_TOMBSTONE(::bs_hook::Il2CppWrapperType value) ;

static ::bs_hook::Il2CppWrapperType __get_EPHEMERON_TOMBSTONE() ;


// Properties

static int32_t __declspec(property(get=get_MaxGeneration))  MaxGeneration;


// Methods

/// @brief Method GetCollectionCount addr 0x24797c8 size 0x4 virtual false final false
static int32_t GetCollectionCount(int32_t generation) ;

/// @brief Method GetMaxGeneration addr 0x24797cc size 0x4 virtual false final false
static int32_t GetMaxGeneration() ;

/// @brief Method InternalCollect addr 0x24797d0 size 0x4 virtual false final false
static void InternalCollect(int32_t generation) ;

/// @brief Method register_ephemeron_array addr 0x24797d4 size 0x4 virtual false final false
static void register_ephemeron_array(::ArrayW<::System::Runtime::CompilerServices::Ephemeron> array) ;

/// @brief Method get_ephemeron_tombstone addr 0x24797d8 size 0x4 virtual false final false
static ::bs_hook::Il2CppWrapperType get_ephemeron_tombstone() ;

/// @brief Method GetMemoryInfo addr 0x24797dc size 0x98 virtual false final false
static void GetMemoryInfo(ByRef<uint32_t> highMemLoadThreshold, ByRef<uint64_t> totalPhysicalMem, ByRef<uint32_t> lastRecordedMemLoad, ByRef<::cordl_internals::uintptr_t> lastRecordedHeapSize, ByRef<::cordl_internals::uintptr_t> lastRecordedFragmentation) ;

/// @brief Method Collect addr 0x2479874 size 0x50 virtual false final false
static void Collect() ;

/// @brief Method CollectionCount addr 0x2479910 size 0xc0 virtual false final false
static int32_t CollectionCount(int32_t generation) ;

/// @brief Method KeepAlive addr 0x24799d0 size 0x4 virtual false final false
static void KeepAlive(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method get_MaxGeneration addr 0x24798c4 size 0x4c virtual false final false
static int32_t get_MaxGeneration() ;

/// @brief Method _SuppressFinalize addr 0x24799d4 size 0x4 virtual false final false
static void _SuppressFinalize(::bs_hook::Il2CppWrapperType o) ;

/// @brief Method SuppressFinalize addr 0x24799d8 size 0xa4 virtual false final false
static void SuppressFinalize(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method _ReRegisterForFinalize addr 0x2479a7c size 0x4 virtual false final false
static void _ReRegisterForFinalize(::bs_hook::Il2CppWrapperType o) ;

/// @brief Method ReRegisterForFinalize addr 0x2479a80 size 0xa4 virtual false final false
static void ReRegisterForFinalize(::bs_hook::Il2CppWrapperType obj) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
} // end anonymous namespace
NEED_NO_BOX(::System::GC);
DEFINE_IL2CPP_ARG_TYPE(::System::GC, "System", "GC");
