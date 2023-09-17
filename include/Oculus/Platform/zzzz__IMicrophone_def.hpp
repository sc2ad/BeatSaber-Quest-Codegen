#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
namespace {
// Forward declare root types
namespace Oculus::Platform {
class IMicrophone;
}
// Type: Oculus.Platform::IMicrophone
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13184))
// CS Name: Oculus.Platform.IMicrophone
class CORDL_TYPE IMicrophone : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IMicrophone() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IMicrophone(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method Start addr 0x0 size 0xffffffffffffffff virtual true final false
 void Start() ;

/// @brief Method Stop addr 0x0 size 0xffffffffffffffff virtual true final false
 void Stop() ;

/// @brief Method Update addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<float_t> Update() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
} // end anonymous namespace
NEED_NO_BOX(::Oculus::Platform::IMicrophone);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::IMicrophone, "Oculus.Platform", "IMicrophone");
