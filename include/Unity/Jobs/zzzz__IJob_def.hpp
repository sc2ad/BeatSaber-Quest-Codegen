#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
// Forward declare root types
namespace Unity::Jobs {
class IJob;
}
// Type: Unity.Jobs::IJob
namespace Unity::Jobs {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9915))
// CS Name: Unity.Jobs.IJob
class CORDL_TYPE IJob : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IJob() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IJob(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method Execute addr 0x0 size 0xffffffffffffffff virtual true final false
 void Execute() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Jobs
NEED_NO_BOX(Unity::Jobs::IJob);
DEFINE_IL2CPP_ARG_TYPE(Unity::Jobs::IJob, "Unity.Jobs", "IJob");
