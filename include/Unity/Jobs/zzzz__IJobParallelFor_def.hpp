#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace Unity::Jobs {
class IJobParallelFor;
}
// Type: Unity.Jobs::IJobParallelFor
namespace Unity::Jobs {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9911))
// CS Name: Unity.Jobs.IJobParallelFor
class CORDL_TYPE IJobParallelFor : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IJobParallelFor() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IJobParallelFor(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method Execute addr 0x0 size 0xffffffffffffffff virtual true final false
 void Execute(int32_t index) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Jobs
} // end anonymous namespace
NEED_NO_BOX(::Unity::Jobs::IJobParallelFor);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Jobs::IJobParallelFor, "Unity.Jobs", "IJobParallelFor");
