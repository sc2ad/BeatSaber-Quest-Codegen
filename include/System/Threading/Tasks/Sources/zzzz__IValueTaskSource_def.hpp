#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace System::Threading::Tasks::Sources {
struct ValueTaskSourceOnCompletedFlags;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System::Threading::Tasks::Sources {
struct ValueTaskSourceStatus;
}
// Forward declare root types
namespace System::Threading::Tasks::Sources {
class IValueTaskSource;
}
// Type: System.Threading.Tasks.Sources::IValueTaskSource
namespace System::Threading::Tasks::Sources {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2819))
// CS Name: System.Threading.Tasks.Sources.IValueTaskSource
class CORDL_TYPE IValueTaskSource : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IValueTaskSource() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IValueTaskSource(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method GetStatus addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Threading::Tasks::Sources::ValueTaskSourceStatus GetStatus(int16_t token) ;

/// @brief Method OnCompleted addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnCompleted(::System::Action_1<::bs_hook::Il2CppWrapperType> continuation, ::bs_hook::Il2CppWrapperType state, int16_t token, ::System::Threading::Tasks::Sources::ValueTaskSourceOnCompletedFlags flags) ;

/// @brief Method GetResult addr 0x0 size 0xffffffffffffffff virtual true final false
 void GetResult(int16_t token) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks::Sources
} // end anonymous namespace
NEED_NO_BOX(::System::Threading::Tasks::Sources::IValueTaskSource);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::Sources::IValueTaskSource, "System.Threading.Tasks.Sources", "IValueTaskSource");
