#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine::Profiling {
class Profiler;
}
// Type: UnityEngine.Profiling::Profiler
namespace UnityEngine::Profiling {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10233))
// CS Name: UnityEngine.Profiling.Profiler
class CORDL_TYPE Profiler : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Profiler() = default;

// Ctor Parameters [CppParam { name: "", ty: "Profiler", modifiers: " const&", def_value: None }]
constexpr Profiler(Profiler const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Profiler", modifiers: "&&", def_value: None }]
constexpr Profiler(Profiler&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Profiler(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Profiler& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Profiler& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Profiler& operator=(Profiler&& o) noexcept = default;
  constexpr Profiler& operator=(Profiler const& o) noexcept = default;
                


// Methods

/// @brief Method GetMonoUsedSizeLong addr 0x2b6ea14 size 0x28 virtual false final false
static int64_t GetMonoUsedSizeLong() ;

/// @brief Method GetTotalAllocatedMemoryLong addr 0x2b6ea3c size 0x28 virtual false final false
static int64_t GetTotalAllocatedMemoryLong() ;

/// @brief Method GetTotalReservedMemoryLong addr 0x2b6ea64 size 0x28 virtual false final false
static int64_t GetTotalReservedMemoryLong() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Profiling
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::Profiling::Profiler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Profiling::Profiler, "UnityEngine.Profiling", "Profiler");
