#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace UnityEngine {
class ManagedStreamHelpers;
}
// Type: UnityEngine::ManagedStreamHelpers
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10177))
// CS Name: UnityEngine.ManagedStreamHelpers
class CORDL_TYPE ManagedStreamHelpers : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ManagedStreamHelpers() = default;

// Ctor Parameters [CppParam { name: "", ty: "ManagedStreamHelpers", modifiers: " const&", def_value: None }]
constexpr ManagedStreamHelpers(ManagedStreamHelpers const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ManagedStreamHelpers", modifiers: "&&", def_value: None }]
constexpr ManagedStreamHelpers(ManagedStreamHelpers&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ManagedStreamHelpers(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ManagedStreamHelpers& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ManagedStreamHelpers& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ManagedStreamHelpers& operator=(ManagedStreamHelpers&& o) noexcept = default;
  constexpr ManagedStreamHelpers& operator=(ManagedStreamHelpers const& o) noexcept = default;
                


// Methods

/// @brief Method ValidateLoadFromStream addr 0x2b5c2d8 size 0x110 virtual false final false
static void ValidateLoadFromStream(::System::IO::Stream stream) ;

/// @brief Method ManagedStreamRead addr 0x2b5c3e8 size 0x120 virtual false final false
static void ManagedStreamRead(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, ::System::IO::Stream stream, ::cordl_internals::intptr_t returnValueAddress) ;

/// @brief Method ManagedStreamSeek addr 0x2b5c508 size 0x118 virtual false final false
static void ManagedStreamSeek(int64_t offset, uint32_t origin, ::System::IO::Stream stream, ::cordl_internals::intptr_t returnValueAddress) ;

/// @brief Method ManagedStreamLength addr 0x2b5c620 size 0xfc virtual false final false
static void ManagedStreamLength(::System::IO::Stream stream, ::cordl_internals::intptr_t returnValueAddress) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::ManagedStreamHelpers);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ManagedStreamHelpers, "UnityEngine", "ManagedStreamHelpers");
