#pragma once
#include "../cordl_internals/cordl_internals.hpp"
namespace {
namespace HoudiniEngineUnity {
template<typename T>
class IEquivable_1;
}
// Forward declare root types
namespace HoudiniEngineUnity {
template<typename T>
class IEquivableWrapperClass_1;
}
// Type: HoudiniEngineUnity::IEquivableWrapperClass`1
namespace HoudiniEngineUnity {
// cpp template
template<typename T>
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9825))
// CS Name: HoudiniEngineUnity.IEquivableWrapperClass`1
class CORDL_TYPE IEquivableWrapperClass_1 : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to ::HoudiniEngineUnity::IEquivable_1<T>
constexpr operator  ::HoudiniEngineUnity::IEquivable_1<T>() const noexcept;

~IEquivableWrapperClass_1() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IEquivableWrapperClass_1(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method IsNull addr 0x0 size 0xffffffffffffffff virtual true final false
 bool IsNull() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::HoudiniEngineUnity::IEquivableWrapperClass_1, "HoudiniEngineUnity", "IEquivableWrapperClass`1");
